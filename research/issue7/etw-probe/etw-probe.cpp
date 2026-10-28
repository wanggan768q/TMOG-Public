// Issue #7 受控 ETW 可行性探针 v2。
// 验证目标：
//  1. Microsoft-Windows-Kernel-Network 会话启动权限语义（含非提权对照由外部验证）。
//  2. 子进程回环 TCP/UDP 收发是否产生带 PID 与字节数的事件（身份归属）。
//  3. 丢事件计数（停止前查询 EventsLost/RealTimeBuffersLost）。
//  4. 事件 schema（TopLevelPropertyCount、UserData 原始布局）以确定解析口径。
// 安全边界：只连 127.0.0.1 动态端口、只观察自建子进程、不抓载荷、不装驱动、不提权。

#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>
#include <evntrace.h>
#include <evntcons.h>
#include <tdh.h>
#include <stdio.h>
#include <string>
#include <map>

static const GUID kKernelNetworkGuid =
    { 0x7dd42a49, 0x5329, 0x4832, { 0x8d, 0xfd, 0x43, 0xd9, 0x79, 0x15, 0x3a, 0x88 } };

struct Agg { unsigned long long events = 0; unsigned long long bytes = 0; };
static std::map<std::string, Agg> g_by_kind;      // "TCPSend","TCPRcv","UDPSend","UDPRcv" 或 task名
static std::map<unsigned long, Agg> g_by_pid;
static unsigned long long g_events_total = 0;
static unsigned long g_child_pid = 0;
static volatile bool g_done = false;
static const char* g_serverBindIp = "127.0.0.1";   // server 绑定的具体本机地址（受控端点）
static unsigned g_observeMs = 0;                   // >0 时为被动观察模式

// Kernel-Network MOF 事件（按 krabs/官方 netsh 追踪口径）UserData 布局：
//   TCPSend/TCPRcv: ULONG size; ULONG dwords; ULONG dwords2; SOCKADDR src(16); SOCKADDR dst(16); ULONG pid?
// 实际以 dump 为准。事件头自带 ProcessId。
static void WINAPI ProcessEvent(PEVENT_RECORD rec) {
    g_events_total++;
    const unsigned long pid = rec->EventHeader.ProcessId;

    // 解析任务名 + opcode，区分 TCPSend/TCPRcv/UDPSend/UDPRcv
    ULONG bufSize = 0;
    TRACE_EVENT_INFO* info = nullptr;
    ULONG rc = TdhGetEventInformation(rec, 0, nullptr, nullptr, &bufSize);
    if (rc == ERROR_INSUFFICIENT_BUFFER && bufSize < (1u << 20)) {
        info = (TRACE_EVENT_INFO*)malloc(bufSize);
        rc = TdhGetEventInformation(rec, 0, nullptr, info, &bufSize);
    }
    char task[128] = "?";
    if (rc == ERROR_SUCCESS) {
        size_t n = 0;
        wcstombs_s(&n, task, (wchar_t*)((BYTE*)info + info->TaskNameOffset), _TRUNCATE);
    }
    const unsigned char opcode = rec->EventHeader.EventDescriptor.Opcode;
    const unsigned char version = rec->EventHeader.EventDescriptor.Version;

    char kind[160];
    sprintf_s(kind, "%s|op=%u|ver=%u", task, opcode, version);

    // UserData 原始 dump（前 8 个事件）
    if (g_events_total <= 8) {
        printf("EVENT #%llu task=%s op=%u ver=%u pid=%lu udsize=%lu uddata=",
               g_events_total, task, opcode, version, pid, rec->UserDataLength);
        const BYTE* ud = (const BYTE*)rec->UserData;
        ULONG show = rec->UserDataLength < 48 ? rec->UserDataLength : 48;
        for (ULONG i = 0; i < show; i++) printf("%02x", ud[i]);
        printf("\n");
        if (rc == ERROR_SUCCESS)
            printf("  props: TopLevel=%u EventName=%ls\n",
                   info->TopLevelPropertyCount,
                   (wchar_t*)((BYTE*)info + info->EventNameOffset));
        else
            printf("  TdhGetEventInformation rc=%lu\n", rc);
    }

    // v7：payload 布局（由 run3-run10 dump 验证）：
    //   [0..3] PID(uint32) [4..7] size(uint32) [8..] 地址/端口/seqnum/connid
    // 头部 rec->EventHeader.ProcessId 不可靠（内核会话常为 4/System）——MOF 页警告一致。
    unsigned long payloadPid = 0;
    unsigned long long bytes = 0;
    if (rec->UserDataLength >= 8) {
        payloadPid = *(const unsigned long*)(const void*)rec->UserData;
        bytes = *(const unsigned long*)(const void*)((const BYTE*)rec->UserData + 4);
    }
    if (rc == ERROR_SUCCESS) free(info);

    char bucket[192];
    sprintf_s(bucket, "%s|hdrPid=%lu", kind, pid);
    g_by_kind[bucket].events++;
    g_by_kind[bucket].bytes += bytes;
    g_by_pid[payloadPid].events++;          // 按 payload PID 归属
    g_by_pid[payloadPid].bytes += bytes;
}

static int RunChild() {
    WSADATA wsa{};
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) return 2;

    // --- TCP 回环自收自发（单进程：一个监听 socket + 一个连接 socket）---
    SOCKET lst = socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in a{}; a.sin_family = AF_INET; a.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
    int alen = (int)sizeof(a);
    bind(lst, (sockaddr*)&a, sizeof(a));
    getsockname(lst, (sockaddr*)&a, &alen);
    listen(lst, 1);
    SOCKET c = socket(AF_INET, SOCK_STREAM, 0);
    if (connect(c, (sockaddr*)&a, sizeof(a)) != 0) { printf("child: tcp connect fail %d\n", WSAGetLastError()); return 3; }
    sockaddr_in peer{}; int plen = sizeof(peer);
    SOCKET srv = accept(lst, (sockaddr*)&peer, &plen);
    const char payload[4096] = "TMOG-ISSUE7-CONTROLLED";
    int sentTotal = 0;
    while (sentTotal < 65536) {
        int s = send(c, payload, sizeof(payload), 0);
        if (s <= 0) break;
        sentTotal += s;
    }
    shutdown(c, SD_SEND);
    int recvTotal = 0;
    char rbuf[8192];
    int r;
    while ((r = recv(srv, rbuf, sizeof(rbuf), 0)) > 0) recvTotal += r;
    printf("child: tcp sent=%d recv=%d\n", sentTotal, recvTotal);
    closesocket(c); closesocket(srv); closesocket(lst);

    // --- UDP 回环自收自发 ---
    SOCKET u1 = socket(AF_INET, SOCK_DGRAM, 0);
    SOCKET u2 = socket(AF_INET, SOCK_DGRAM, 0);
    sockaddr_in ub{}; ub.sin_family = AF_INET; ub.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
    bind(u2, (sockaddr*)&ub, sizeof(ub));
    int ulen = (int)sizeof(ub);
    getsockname(u2, (sockaddr*)&ub, &ulen);
    int udpSent = 0;
    for (int i = 0; i < 16; i++) {
        int s = sendto(u1, payload, 1400, 0, (sockaddr*)&ub, sizeof(ub));
        if (s > 0) udpSent += s;
    }
    int udpRecv = 0;
    for (int i = 0; i < 16; i++) {
        r = recvfrom(u2, rbuf, sizeof(rbuf), 0, nullptr, nullptr);
        if (r <= 0) break;
        udpRecv += r;
    }
    printf("child: udp sent=%d recv=%d\n", udpSent, udpRecv);
    closesocket(u1); closesocket(u2);
    WSACleanup();
    return 0;
}

// v4：可指定连接地址（--client <ip> <tcpPort> <udpPort>），用于回环 vs 本机 LAN IP 对照
static int RunClient(int argc, char** argv) {
    const char* ip = (argc >= 3) ? argv[2] : "127.0.0.1";
    unsigned short tcpPort = (argc >= 4) ? (unsigned short)atoi(argv[3]) : 0;
    unsigned short udpPort = (argc >= 5) ? (unsigned short)atoi(argv[4]) : 0;
    WSADATA wsa{};
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) return 2;
    sockaddr_in a{};
    a.sin_family = AF_INET;
    inet_pton(AF_INET, ip, &a.sin_addr);
    // TCP client
    SOCKET c = socket(AF_INET, SOCK_STREAM, 0);
    a.sin_port = htons(tcpPort);
    if (connect(c, (sockaddr*)&a, sizeof(a)) != 0) { printf("client: tcp connect fail %d\n", WSAGetLastError()); return 3; }
    const char payload[4096] = "TMOG-ISSUE7-CONTROLLED";
    int sentTotal = 0;
    while (sentTotal < 65536) {
        int s = send(c, payload, sizeof(payload), 0);
        if (s <= 0) break;
        sentTotal += s;
    }
    // 读服务端回显直到关闭
    char rb[8192];
    int got = 0, rr;
    while ((rr = recv(c, rb, sizeof(rb), 0)) > 0) got += rr;
    closesocket(c);
    printf("client: dst=%s tcp sent=%d recvEcho=%d\n", ip, sentTotal, got);
    // UDP client
    SOCKET u = socket(AF_INET, SOCK_DGRAM, 0);
    a.sin_port = htons(udpPort);
    int udpSent = 0;
    for (int i = 0; i < 16; i++) {
        int s = sendto(u, payload, 1400, 0, (sockaddr*)&a, sizeof(a));
        if (s > 0) udpSent += s;
    }
    closesocket(u);
    printf("client: udp sent=%d\n", udpSent);
    WSACleanup();
    return 0;
}

// 主进程内启动回环 server（TCP 回显 + UDP 收包计数），返回端口
// server 绑定 g_serverBindIp（具体本机地址，默认回环；对照实验时可指定 LAN IP）
static unsigned short StartParentServer(unsigned short* udpPortOut) {
    static SOCKET lst = INVALID_SOCKET, us = INVALID_SOCKET;
    WSADATA wsa{};
    WSAStartup(MAKEWORD(2, 2), &wsa);
    lst = socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in a{}; a.sin_family = AF_INET;
    inet_pton(AF_INET, g_serverBindIp, &a.sin_addr);
    bind(lst, (sockaddr*)&a, sizeof(a));
    int alen = (int)sizeof(a);
    getsockname(lst, (sockaddr*)&a, &alen);
    unsigned short tcpPort = ntohs(a.sin_port);
    listen(lst, 1);
    // server 线程
    CreateThread(nullptr, 0, [](LPVOID) -> DWORD {
        sockaddr_in p{}; int pl = sizeof(p);
        SOCKET s = accept(lst, (sockaddr*)&p, &pl);
        if (s == INVALID_SOCKET) return 1;
        char rb[8192];
        int total = 0, r;
        while ((r = recv(s, rb, sizeof(rb), 0)) > 0) {
            total += r;
            send(s, rb, r, 0);   // 回显
        }
        printf("server: tcp recv=%d\n", total);
        closesocket(s);
        return 0;
    }, nullptr, 0, nullptr);
    us = socket(AF_INET, SOCK_DGRAM, 0);
    sockaddr_in ub{}; ub.sin_family = AF_INET;
    // 绑定具体本机地址（单一明确受控端点），非通配；地址由 --dst 传入主流程选定
    inet_pton(AF_INET, g_serverBindIp, &ub.sin_addr);
    bind(us, (sockaddr*)&ub, sizeof(ub));
    int ulen = (int)sizeof(ub);
    getsockname(us, (sockaddr*)&ub, &ulen);
    *udpPortOut = ntohs(ub.sin_port);
    CreateThread(nullptr, 0, [](LPVOID) -> DWORD {
        char rb[8192];
        int total = 0, r;
        while ((r = recvfrom(us, rb, sizeof(rb), 0, nullptr, nullptr)) > 0) total += r;
        printf("server: udp recv=%d\n", total);
        closesocket(us);
        return 0;
    }, nullptr, 0, nullptr);
    return tcpPort;
}

int main(int argc, char** argv) {
    setvbuf(stdout, nullptr, _IONBF, 0);
    if (argc >= 2 && strcmp(argv[1], "--child") == 0) return RunChild();
    if (argc >= 2 && strcmp(argv[1], "--client") == 0) return RunClient(argc, argv);

    wchar_t sessName[] = L"TMOG-Issue7-Probe2";
    ULONG bufSize = sizeof(EVENT_TRACE_PROPERTIES) + 2 * 1024;
    EVENT_TRACE_PROPERTIES* props = (EVENT_TRACE_PROPERTIES*)malloc(bufSize);

    // 清理残留同名会话
    ZeroMemory(props, bufSize);
    props->Wnode.BufferSize = bufSize;
    props->LoggerNameOffset = sizeof(EVENT_TRACE_PROPERTIES);
    ControlTraceW(0, sessName, props, EVENT_TRACE_CONTROL_STOP);

    ZeroMemory(props, bufSize);
    props->Wnode.BufferSize = bufSize;
    props->Wnode.Flags = WNODE_FLAG_TRACED_GUID;
    memcpy(&props->Wnode.Guid, &kKernelNetworkGuid, sizeof(GUID));
    props->LogFileMode = EVENT_TRACE_REAL_TIME_MODE;
    props->LoggerNameOffset = sizeof(EVENT_TRACE_PROPERTIES);
    props->BufferSize = 64;
    props->MinimumBuffers = 16;
    props->MaximumBuffers = 64;
    props->FlushTimer = 1;

    TRACEHANDLE session = 0;
    ULONG rc = StartTraceW(&session, sessName, props);
    printf("StartTrace rc=%lu (0=OK 5=ACCESS_DENIED 183=ALREADY_EXISTS)\n", rc);
    if (rc != ERROR_SUCCESS) return 1;

    rc = EnableTraceEx2(session, &kKernelNetworkGuid, EVENT_CONTROL_CODE_ENABLE_PROVIDER,
                        TRACE_LEVEL_VERBOSE, 0x30 /*IPv4|IPv6*/, 0, 0, nullptr);
    printf("EnableTraceEx2 rc=%lu\n", rc);
    if (rc != ERROR_SUCCESS) goto stop;

    {
        EVENT_TRACE_LOGFILEW logf{};
        logf.LoggerName = sessName;
        logf.ProcessTraceMode = PROCESS_TRACE_MODE_REAL_TIME | PROCESS_TRACE_MODE_EVENT_RECORD;
        logf.EventRecordCallback = ProcessEvent;
        TRACEHANDLE trace = OpenTraceW(&logf);
        if (trace == INVALID_PROCESSTRACE_HANDLE) { printf("OpenTraceW failed\n"); goto stop; }

        HANDLE th = CreateThread(nullptr, 0, [](LPVOID p) -> DWORD {
            TRACEHANDLE h = (TRACEHANDLE)(ULONG_PTR)p;
            ProcessTrace(&h, 1, nullptr, nullptr);
            return 0;
        }, (LPVOID)(ULONG_PTR)trace, 0, nullptr);
        Sleep(300);   // 让消费线程进入循环，避免起始事件丢失

        // 主进程做 server，子进程做 client。目标 IP 默认 127.0.0.1，可用 --dst 覆盖（同时作为 server 绑定地址）
        const char* dst = "127.0.0.1";
        for (int i = 1; i < argc - 1; i++)
            if (strcmp(argv[i], "--dst") == 0) dst = argv[i + 1];
        g_serverBindIp = dst;   // server 绑定与 client 目标为同一具体本机地址

        // --observe N：被动观察模式（不启动子进程、不产生流量，仅监听系统自然流量 N 毫秒）
        for (int i = 1; i < argc - 1; i++)
            if (strcmp(argv[i], "--observe") == 0) g_observeMs = atoi(argv[i + 1]);

        // --remote：跳过主进程 server，client 直连 --dst ip 的固定端口（TCP 47232 / UDP 47233）
        bool remote = false;
        for (int i = 1; i < argc; i++)
            if (strcmp(argv[i], "--remote") == 0) remote = true;

        unsigned short udpPort = 0;
        unsigned short tcpPort = 0;
        if (remote) {
            tcpPort = 47232; udpPort = 47233;
        } else {
            tcpPort = StartParentServer(&udpPort);
        }
        char exePath[MAX_PATH];
        GetModuleFileNameA(nullptr, exePath, MAX_PATH);
        STARTUPINFOA si{}; si.cb = sizeof(si);
        PROCESS_INFORMATION pi{};
        char cmdline[MAX_PATH + 96];
        if (g_observeMs > 0) {
            printf("observe mode: passive %u ms\n", g_observeMs);
            cmdline[0] = 0;
        } else {
            sprintf_s(cmdline, "\"%s\" --client %s %u %u", exePath, dst, tcpPort, udpPort);
        }
        if (g_observeMs > 0) {
            Sleep(g_observeMs);
        } else if (CreateProcessA(exePath, cmdline, nullptr, nullptr, FALSE, 0, nullptr, nullptr, &si, &pi)) {
            g_child_pid = pi.dwProcessId;
            printf("child pid=%lu dst=%s tcpPort=%u udpPort=%u\n", g_child_pid, dst, tcpPort, udpPort);
            WaitForSingleObject(pi.hProcess, 30000);
            CloseHandle(pi.hThread); CloseHandle(pi.hProcess);
        } else {
            printf("CreateProcess failed err=%lu\n", GetLastError());
        }
        Sleep(2500);   // 尾部事件窗口

        // 停止前查询丢事件计数
        ULONG qSize = sizeof(EVENT_TRACE_PROPERTIES) + 2 * 1024;
        EVENT_TRACE_PROPERTIES* q = (EVENT_TRACE_PROPERTIES*)malloc(qSize);
        ZeroMemory(q, qSize);
        q->Wnode.BufferSize = qSize;
        q->LoggerNameOffset = sizeof(EVENT_TRACE_PROPERTIES);
        rc = ControlTraceW(0, sessName, q, EVENT_TRACE_CONTROL_QUERY);
        if (rc == ERROR_SUCCESS)
            printf("QUERY(before stop): EventsLost=%lu BuffersLost=%lu RTBuffersLost=%lu\n",
                   q->EventsLost, q->LogBuffersLost, q->RealTimeBuffersLost);
        else
            printf("QUERY(before stop) rc=%lu\n", rc);
        free(q);

        g_done = true;
        CloseTrace(trace);
        WaitForSingleObject(th, 5000);
        CloseHandle(th);
    }

stop:
    rc = ControlTraceW(session, sessName, props, EVENT_TRACE_CONTROL_STOP);
    printf("ControlTrace STOP rc=%lu\n", rc);
    free(props);

    printf("\n=== SUMMARY ===\n");
    printf("total events=%llu child_pid=%lu\n", g_events_total, g_child_pid);
    printf("-- by task|op|ver --\n");
    for (auto& kv : g_by_kind)
        printf("  %-40s events=%llu bytes_first_ulong_sum=%llu\n",
               kv.first.c_str(), kv.second.events, kv.second.bytes);
    printf("-- by pid --\n");
    for (auto& kv : g_by_pid)
        printf("  pid=%-7lu events=%llu bytes_first_ulong_sum=%llu\n",
               kv.first, kv.second.events, kv.second.bytes);
    return 0;
}
