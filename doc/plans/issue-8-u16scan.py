# -*- coding: utf-8 -*-
"""只读扫描 v1.1.0 原件的 UTF-16LE 字符串（.rdata），检索 Connections 页相关词。不修改目标。"""
import struct, sys, re
sys.stdout.reconfigure(encoding="utf-8", errors="replace")

path = r"E:\Git\TMOG-Public-WorkTree\issue-8-connections-contract\Raw\Task Manager v1.1.0 - 原始文件.exe"
data = open(path, "rb").read()

pe_off = struct.unpack_from("<I", data, 0x3C)[0]
coff = pe_off + 4
num_sections = struct.unpack_from("<H", data, coff + 2)[0]
opt_size = struct.unpack_from("<H", data, coff + 16)[0]
opt_off = coff + 20
sec_off = opt_off + opt_size
image_base = struct.unpack_from("<Q", data, opt_off + 24)[0]

sections = []
for i in range(num_sections):
    o = sec_off + i * 40
    name = data[o:o+8].rstrip(b"\0").decode(errors="replace")
    vsize, vaddr, rsize, raddr = struct.unpack_from("<IIII", data, o + 8)
    sections.append((name, vaddr, vsize, raddr, rsize))

def rva_to_off(rva):
    for name, vaddr, vsize, raddr, rsize in sections:
        if vaddr <= rva < vaddr + max(vsize, rsize):
            return raddr + (rva - vaddr)
    return None

def scan_u16(section_names, min_chars=3):
    """扫描指定节的 UTF-16LE 字符串，返回 (va, text) 列表。"""
    out = []
    for name, vaddr, vsize, raddr, rsize in sections:
        if name not in section_names:
            continue
        blob = data[raddr:raddr + rsize]
        # 连续 UTF-16LE 可打印 run
        cur = bytearray(); start = 0
        for j in range(0, len(blob) - 1, 2):
            w = blob[j] | (blob[j+1] << 8)
            if 0x20 <= w < 0x7F or w in (0xA0, 0x2026):
                if not cur:
                    start = j
                cur += blob[j:j+2]
            else:
                if len(cur) >= min_chars * 2:
                    va = image_base + vaddr + start
                    out.append((va, cur.decode("utf-16-le", errors="replace")))
                cur = bytearray()
    return out

keys = ["connection", "listener", "remote", "local address", "process", "protocol",
        "udp", "tcp", "endpoint", "scope", "ipc", "socket", "port"]
hits = [(va, t) for va, t in scan_u16({".rdata"}) if any(k in t.lower() for k in keys)]
print(f"hits={len(hits)}")
for va, t in hits:
    print(f"{va:#x}  {t!r}")
