// op=18 (TcpIp_TypeGroup1 TCP copy) payload 归属验证：打印 payloadPid/size/addr:port
#include <winsock2.h>
#include <windows.h>
#include <evntrace.h>
#include <evntcons.h>
#include <tdh.h>
#include <stdio.h>
static const GUID kK = { 0x7dd42a49,0x5329,0x4832,{0x8d,0xfd,0x43,0xd9,0x79,0x15,0x3a,0x88} };
static int shown = 0;
static void WINAPI OnEvent(PEVENT_RECORD rec) {
    unsigned char op = rec->EventHeader.EventDescriptor.Opcode;
    if (op != 18 || shown >= 3) return;
    if (rec->UserDataLength < 36) return;
    ULONG pid = *(ULONG*)rec->UserData, size = *((ULONG*)rec->UserData + 1);
    const BYTE* d = (const BYTE*)rec->UserData;
    char s[64], dd[64];
    sprintf_s(s, "%u.%u.%u.%u", d[8], d[9], d[10], d[11]);
    sprintf_s(dd, "%u.%u.%u.%u", d[12], d[13], d[14], d[15]);
    unsigned short sp, dp;
    memcpy(&sp, d + 16, 2); memcpy(&dp, d + 18, 2);
    printf("op18 payloadPid=%lu size=%lu %s:%u -> %s:%u (hdrPid=%lu)\n",
           pid, size, s, ntohs(sp), dd, ntohs(dp), rec->EventHeader.ProcessId);
    shown++;
}
int main() {
    setvbuf(stdout, nullptr, _IONBF, 0);
    wchar_t name[] = L"TMOG-op18check";
    ULONG sz = sizeof(EVENT_TRACE_PROPERTIES) + 2048;
    auto* p = (EVENT_TRACE_PROPERTIES*)malloc(sz);
    ZeroMemory(p, sz);
    p->Wnode.BufferSize = sz; p->Wnode.Flags = WNODE_FLAG_TRACED_GUID;
    memcpy(&p->Wnode.Guid, &kK, sizeof(GUID));
    p->LogFileMode = EVENT_TRACE_REAL_TIME_MODE;
    p->LoggerNameOffset = sizeof(EVENT_TRACE_PROPERTIES);
    TRACEHANDLE s = 0;
    ControlTraceW(0, name, p, EVENT_TRACE_CONTROL_STOP);
    ULONG rc = StartTraceW(&s, name, p);
    if (rc) { printf("StartTrace rc=%lu\n", rc); return 1; }
    rc = EnableTraceEx2(s, &kK, EVENT_CONTROL_CODE_ENABLE_PROVIDER, TRACE_LEVEL_VERBOSE, 0x30, 0, 0, nullptr);
    if (rc) { printf("Enable rc=%lu\n", rc); return 1; }
    EVENT_TRACE_LOGFILEW lf{}; lf.LoggerName = name;
    lf.ProcessTraceMode = PROCESS_TRACE_MODE_REAL_TIME | PROCESS_TRACE_MODE_EVENT_RECORD;
    lf.EventRecordCallback = OnEvent;
    TRACEHANDLE t = OpenTraceW(&lf);
    HANDLE th = CreateThread(nullptr, 0, [](LPVOID q) -> DWORD {
        TRACEHANDLE h = (TRACEHANDLE)(ULONG_PTR)q; ProcessTrace(&h, 1, nullptr, nullptr); return 0;
    }, (LPVOID)(ULONG_PTR)t, 0, nullptr);
    // 本进程内回环收发触发事件
    WSADATA w{}; WSAStartup(MAKEWORD(2,2), &w);
    SOCKET L = socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in a{}; a.sin_family = AF_INET; a.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
    bind(L, (sockaddr*)&a, sizeof(a)); int al = sizeof(a);
    getsockname(L, (sockaddr*)&a, &al); listen(L, 1);
    SOCKET c = socket(AF_INET, SOCK_STREAM, 0);
    connect(c, (sockaddr*)&a, sizeof(a));
    SOCKET sv = accept(L, nullptr, nullptr);
    char buf[4096] = "x";
    for (int i = 0; i < 40; i++) send(c, buf, sizeof(buf), 0);
    Sleep(1500);
    printf("selfPid=%lu\n", GetCurrentProcessId());
    CloseTrace(t); WaitForSingleObject(th, 3000);
    ControlTraceW(s, name, p, EVENT_TRACE_CONTROL_STOP);
    return 0;
}
