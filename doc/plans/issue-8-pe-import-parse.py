# -*- coding: utf-8 -*-
"""只读解析 PE 导入表：列出所有 DLL 与 iphlpapi/ws2_32 导入函数。不修改目标。"""
import struct, sys
sys.stdout.reconfigure(encoding="utf-8", errors="replace")

path = r"E:\Git\TMOG-Public-WorkTree\issue-8-connections-contract\Raw\Task Manager v1.1.0 - 原始文件.exe"
data = open(path, "rb").read()

pe_off = struct.unpack_from("<I", data, 0x3C)[0]
assert data[pe_off:pe_off+4] == b"PE\0\0", "not PE"
coff = pe_off + 4
num_sections = struct.unpack_from("<H", data, coff + 2)[0]
opt_size = struct.unpack_from("<H", data, coff + 16)[0]
opt_off = coff + 20
magic = struct.unpack_from("<H", data, opt_off)[0]
assert magic == 0x20B, f"not PE32+ ({magic:#x})"
# DataDirectory: offset 112 in PE32+ optional header
dd_off = opt_off + 112
import_rva, import_size = struct.unpack_from("<II", data, dd_off + 8)
print(f"Import Directory RVA={import_rva:#x} size={import_size:#x}")

# Section table for RVA->file offset
sec_off = opt_off + opt_size
sections = []
for i in range(num_sections):
    o = sec_off + i * 40
    name = data[o:o+8].rstrip(b"\0").decode(errors="replace")
    vsize, vaddr, rsize, raddr = struct.unpack_from("<IIII", data, o + 8)
    sections.append((name, vaddr, vsize, raddr, rsize))
    print(f"  section {name:8} VA={vaddr:#x} VSize={vsize:#x} Raw={raddr:#x} RawSize={rsize:#x}")

def rva_to_off(rva):
    for name, vaddr, vsize, raddr, rsize in sections:
        if vaddr <= rva < vaddr + max(vsize, rsize):
            return raddr + (rva - vaddr)
    return None

def read_cstr(off):
    end = data.index(b"\0", off)
    return data[off:end].decode(errors="replace")

off = rva_to_off(import_rva)
target_dlls = ("iphlpapi", "ws2_32", "wininet", "winhttp", "wsock32", "netapi32", "dnsapi")
all_dlls = []
if off is not None:
    while True:
        entry = data[off:off+20]
        if entry == b"\0" * 20:
            break
        orig_thunk_rva, tds, fwd, name_rva, fthunk_rva = struct.unpack_from("<IIIII", entry)
        if name_rva == 0:
            break
        dll_name = read_cstr(rva_to_off(name_rva))
        all_dlls.append(dll_name)
        if any(t in dll_name.lower() for t in target_dlls):
            print(f"\n=== {dll_name} ===")
            thunk = fthunk_rva or name_rva
            t_off = rva_to_off(thunk)
            while True:
                val = struct.unpack_from("<Q", data, t_off)[0]
                if val == 0:
                    break
                if val & (1 << 63):  # ordinal
                    print(f"  ordinal {val & 0xFFFF}")
                else:
                    fn_off = rva_to_off(val & 0x7FFFFFFF)
                    # IMAGE_IMPORT_BY_NAME: WORD hint + name
                    fn = data[fn_off+2:data.index(b"\0", fn_off+2)].decode(errors="replace")
                    print(f"  {fn}")
                t_off += 8
        off += 20

print("\n=== ALL IMPORTED DLLs ===")
for d in all_dlls:
    print(" ", d)
