## evidence_id

ev_4f6ad4d08d215956525a10c83d5230fc1a95c04cb72f66772d7f8408fd7fdb17

## subject.name

F:\Work\txtest\Task Manager TMOG\Task Manager v1.0.1.exe

## subject.digest

| Key    | Value                                                            |
|--------|------------------------------------------------------------------|
| sha256 | 99e7565d394c1dabe40e6703a3cb5971ba5219413dbed34ca1e99c7b3d354810 |

## subject.format

pe

## subject.architecture

x86_64

## subject.local_path

F:\Work\txtest\Task Manager TMOG\Task Manager v1.0.1.exe

## provider

| Key     | Value  |
|---------|--------|
| id      | ghidra |
| name    | Ghidra |
| version | 12.1.4 |

## analysis_profile.provider

| Key     | Value  |
|---------|--------|
| id      | ghidra |
| name    | Ghidra |
| version | 12.1.4 |

## analysis_profile.parameters.target_kind

executable

## analysis_profile.parameters.target_format

pe

## analysis_profile.parameters.executable_role

application

## analysis_profile.parameters.managed

false

## analysis_profile.parameters.native_aot_metadata

| Key                  | Value                       |
|----------------------|-----------------------------|
| contract_revision    | rtr-9.1-x64-pe-read-only-v3 |
| source_bytes         | 134217728                   |
| work_units           | 67108864                    |
| working_memory_bytes | 67108864                    |
| report_bytes         | 4194304                     |

## analysis_profile.parameters.architecture

x86_64

## analysis_profile.parameters.available_architectures

x86_64

## analysis_profile.parameters.import_mode

ephemeral-source-immutable

## analysis_profile.parameters.annotation_policy

atomic-function-entry-metadata-v1

## analysis_profile.parameters.load_image_observations

source-mappings-entry-context-v2

## analysis_profile.parameters.function_body_evidence

complete-inclusive-ranges-v1

## analysis_profile.parameters.function_references

complete-body-and-entry-reference-manager-v2

## analysis_profile.parameters.string_inventory_evidence

defined-data-coverage-v1

## analysis_profile.parameters.location_resolution

explicit-address-exact-entry-symbol-first-v3

## analysis_profile.parameters.instruction_flow_evidence

decoded-return-pcode-v1

## analysis_profile.parameters.function_boundary_observations

ghidra-terminal-call-limitations-v1

## analysis_profile.parameters.no_return_repair

disabled-windows-p0

## analysis_profile.parameters.process_launch

official-headless-script-v1

## analysis_profile.parameters.jump_table_evidence

typed-case-default-blocks-v1

## analysis_profile.parameters.decompiler_jump_loads

true

## analysis_profile.parameters.loader

auto-from-header

## analysis_profile.parameters.language_id

auto-from-header

## analysis_profile.parameters.compiler_spec_id

auto-default

## analysis_profile.parameters.analyzer_preset

ghidra-default

## analysis_profile.digest

249564812a8d83b9b3f461098fc485ccde60c516d4497547a124081c91d654bf

## predicate_type

rea.analysis

## operation

analyze_function

## parameters

| Key       | Value       |
|-----------|-------------|
| procedure | 0x140036dc0 |

## raw_result.value.procedure.address

0x140036dc0

## raw_result.value.procedure.name

FUN_140036dc0

## raw_result.value.procedure.classification

| Key          | Value                   |
|--------------|-------------------------|
| external     | false                   |
| thunk        | false                   |
| thunk_target | null                    |
| provenance   | ghidra-function-manager |

## raw_result.value.procedure.body.available

true

## raw_result.value.procedure.body.provenance

ghidra-function-body-address-set

## raw_result.value.procedure.body.ranges

| start       | end         |
|-------------|-------------|
| 0x140036dc0 | 0x1400370ce |

## raw_result.value.procedure.body.total_bytes

783

## raw_result.value.procedure.body.span_bytes

783

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_140036dc0()

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_100 @ Stack[-0x100]:8    | ghidra-function-database |
| undefined8 local_108 @ Stack[-0x108]:8    | ghidra-function-database |
| undefined8 local_118 @ Stack[-0x118]:8    | ghidra-function-database |
| undefined4 local_120 @ Stack[-0x120]:4    | ghidra-function-database |
| undefined8 local_128 @ Stack[-0x128]:8    | ghidra-function-database |
| undefined8 local_48 @ Stack[-0x48]:8      | ghidra-function-database |
| undefined local_68 @ Stack[-0x68]:1       | ghidra-function-database |
| undefined local_80 @ Stack[-0x80]:1       | ghidra-function-database |
| undefined local_a0 @ Stack[-0xa0]:1       | ghidra-function-database |
| undefined8 local_a8 @ Stack[-0xa8]:8      | ghidra-function-database |
| undefined8 local_c0 @ Stack[-0xc0]:8      | ghidra-function-database |
| undefined4 local_c8 @ Stack[-0xc8]:4      | ghidra-function-database |
| undefined8 local_d0 @ Stack[-0xd0]:8      | ghidra-function-database |
| undefined8 local_d8 @ Stack[-0xd8]:8      | ghidra-function-database |
| undefined1[16] local_e8 @ Stack[-0xe8]:16 | ghidra-function-database |
| undefined4 local_f0 @ Stack[-0xf0]:4      | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8    | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8    | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LARGE_INTEGER FUN_140036dc0(LARGE_INTEGER param_1,undefined8 param_2,LARGE_INTEGER param_3)

{
  code *pcVar1;
  char cVar2;
  BOOL BVar3;
  DWORD DVar4;
  HANDLE hFile;
  undefined4 uVar5;
  LPCWSTR ***lpFileName;
  undefined8 ****ppppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStackY_148 [8];
  undefined1 auStackY_140 [24];
  HANDLE local_108;
  LARGE_INTEGER local_100 [2];
  undefined4 local_f0;
  undefined8 ***local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  int local_c8 [2];
  LPCWSTR **local_c0 [3];
  ulonglong local_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  puVar7 = auStackY_148;
  puVar8 = auStackY_148;
  puVar9 = auStackY_148;
  local_48 = DAT_1404c7ac0 ^ (ulonglong)auStackY_148;
  uVar10 = 0;
  local_100[0] = param_1;
  FUN_1400348d0(local_c8,param_2,0);
  if (local_c8[0] == 1) {
    *(undefined4 *)param_1 = 1;
  }
  else {
    if (local_c8[0] == 0) {
      lpFileName = local_c0;
      if (7 < local_a8) {
        lpFileName = (LPCWSTR ***)local_c0[0];
      }
      hFile = CreateFileW((LPCWSTR)lpFileName,0x80000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x8200000,
                          (HANDLE)0x0);
      local_108 = hFile;
      if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
        cVar2 = FUN_140034ec0(hFile,0);
        if (cVar2 == '\0') {
          *(undefined4 *)param_1 = 2;
        }
        else {
          local_100[0].QuadPart = 0;
          BVar3 = GetFileSizeEx(hFile,local_100);
          puVar7 = auStackY_148;
          if ((BVar3 != 0) && (puVar7 = auStackY_148, -1 < local_100[0].QuadPart)) {
            if ((ulonglong)param_3 < (ulonglong)local_100[0]) {
              *(undefined4 *)param_1 = 4;
              *(undefined8 *)(param_1.QuadPart + 8) = 0;
              *(undefined8 *)(param_1.QuadPart + 0x10) = 0;
              *(undefined8 *)(param_1.QuadPart + 0x18) = 0;
              *(undefined8 *)(param_1.QuadPart + 0x20) = 0xf;
              *(undefined1 *)(param_1.QuadPart + 8) = 0;
              puVar8 = auStackY_148;
            }
            else {
              local_f0 = 0;
              uStack_e0 = 0;
              local_d8 = 0;
              local_d0 = 0xf;
              local_e8 = (undefined8 ****)0x0;
              FUN_1400399e0(&local_e8,local_100[0].QuadPart,0);
              if (local_d8 != 0) {
                do {
                  DVar4 = (DWORD)(local_d8 - uVar10);
                  if (0xffffffff < local_d8 - uVar10) {
                    DVar4 = 0xffffffff;
                  }
                  local_108 = (HANDLE)((ulonglong)local_108 & 0xffffffff00000000);
                  ppppuVar6 = &local_e8;
                  if (0xf < local_d0) {
                    ppppuVar6 = (undefined8 ****)local_e8;
                  }
                  BVar3 = ReadFile(hFile,(LPVOID)((longlong)ppppuVar6 + uVar10),DVar4,
                                   (LPDWORD)&local_108,(LPOVERLAPPED)0x0);
                  if (BVar3 == 0) {
LAB_140036fc9:
                    *(undefined4 *)param_1 = 3;
                    *(undefined8 *)(param_1.QuadPart + 8) = 0;
                    *(undefined8 *)(param_1.QuadPart + 0x10) = 0;
                    *(undefined8 *)(param_1.QuadPart + 0x18) = 0;
                    *(undefined8 *)(param_1.QuadPart + 0x20) = 0xf;
                    *(undefined1 *)(param_1.QuadPart + 8) = 0;
                    if (local_d0 < 0x10) goto LAB_14003701c;
                    uVar10 = local_d0 + 1;
                    ppppuVar6 = (undefined8 ****)local_e8;
                    if (0xfff < uVar10) {
                      ppppuVar6 = (undefined8 ****)local_e8[-1];
                      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)ppppuVar6))) {
                        pcVar1 = (code *)swi(0x29);
                        (*pcVar1)(5);
                        puVar7 = auStackY_140;
                        goto LAB_140037038;
                      }
                      uVar10 = local_d0 + 0x28;
                    }
                    thunk_FUN_140327e20(ppppuVar6,uVar10);
                    goto LAB_14003701c;
                  }
                  if ((DWORD)local_108 != DVar4) goto LAB_140036fc9;
                  uVar10 = uVar10 + ((ulonglong)local_108 & 0xffffffff);
                } while (uVar10 < local_d8);
              }
              *(undefined4 *)param_1 = local_f0;
              *(undefined8 ****)(param_1.QuadPart + 8) = local_e8;
              *(undefined8 *)(param_1.QuadPart + 0x10) = uStack_e0;
              *(ulonglong *)(param_1.QuadPart + 0x18) = local_d8;
              *(ulonglong *)(param_1.QuadPart + 0x20) = local_d0;
LAB_14003701c:
              local_d8 = 0;
              local_d0 = 0xf;
              local_e8 = (undefined8 ***)((ulonglong)local_e8 & 0xffffffffffffff00);
              puVar8 = auStackY_148;
            }
            goto LAB_140037077;
          }
LAB_140037038:
          *(undefined4 *)param_1 = 3;
        }
        *(undefined8 *)(param_1.QuadPart + 8) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x10) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x18) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x20) = 0xf;
        *(undefined1 *)(param_1.QuadPart + 8) = 0;
        puVar8 = puVar7;
      }
      else {
        DVar4 = GetLastError();
        uVar5 = 1;
        if (1 < DVar4 - 2) {
          uVar5 = 3;
        }
        *(undefined4 *)param_1 = uVar5;
        *(undefined8 *)(param_1.QuadPart + 8) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x10) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x18) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x20) = 0xf;
        *(undefined1 *)(param_1.QuadPart + 8) = 0;
        if (0xfffffffffffffffd < (longlong)hFile - 1U) goto LAB_140037081;
      }
LAB_140037077:
      *(undefined8 *)(puVar8 + -8) = 0x140037080;
      CloseHandle(hFile);
      puVar9 = puVar8;
      goto LAB_140037081;
    }
    *(undefined4 *)param_1 = 2;
  }
  *(undefined8 *)(param_1.QuadPart + 8) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x10) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x18) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x20) = 0xf;
  *(undefined1 *)(param_1.QuadPart + 8) = 0;
  puVar9 = auStackY_148;
LAB_140037081:
  *(undefined8 *)(puVar9 + -8) = 0x14003708a;
  FUN_140038810(local_68);
  *(undefined8 *)(puVar9 + -8) = 0x140037093;
  FUN_1400388d0(local_80);
  *(undefined8 *)(puVar9 + -8) = 0x14003709c;
  FUN_1400055b0(local_a0);
  *(undefined8 *)(puVar9 + -8) = 0x1400370a5;
  FUN_1400055b0(local_c0);
  *(undefined8 *)(puVar9 + -8) = 0x1400370b4;
  return (LARGE_INTEGER)param_1.s;
}



## raw_result.value.assembly

0x140036dc0: MOV qword ptr [RSP + 0x18], RBX,0x140036dc5: PUSH RBP,0x140036dc6: PUSH RSI,0x140036dc7: PUSH RDI,0x140036dc8: PUSH R12,0x140036dca: PUSH R13,0x140036dcc: PUSH R14,0x140036dce: PUSH R15,0x140036dd0: LEA RBP, [RSP + -0x10],0x140036dd5: SUB RSP, 0x110,0x140036ddc: MOV RAX, qword ptr [0x1404c7ac0],0x140036de3: XOR RAX, RSP,0x140036de6: MOV qword ptr [RBP], RAX,0x140036dea: MOV RSI, R8,0x140036ded: MOV RDI, RCX,0x140036df0: MOV qword ptr [RSP + 0x48], RCX,0x140036df5: XOR R15D, R15D,0x140036df8: XOR R8D, R8D,0x140036dfb: LEA RCX, [RBP + -0x80],0x140036dff: CALL 0x1400348d0,0x140036e04: NOP,0x140036e05: MOV EAX, dword ptr [RBP + -0x80],0x140036e08: CMP EAX, 0x1,0x140036e0b: JNZ 0x140036e2b,0x140036e0d: MOV dword ptr [RDI], EAX,0x140036e0f: XORPS XMM0, XMM0,0x140036e12: MOVUPS xmmword ptr [RDI + 0x8], XMM0,0x140036e16: MOV qword ptr [RDI + 0x18], R15,0x140036e1a: MOV qword ptr [RDI + 0x20], 0xf,0x140036e22: MOV byte ptr [RDI + 0x8], 0x0,0x140036e26: JMP 0x140037081,0x140036e2b: TEST EAX, EAX,0x140036e2d: JZ 0x140036e37,0x140036e2f: MOV dword ptr [RDI], 0x2,0x140036e35: JMP 0x140036e0f,0x140036e37: LEA RCX, [RBP + -0x78],0x140036e3b: CMP qword ptr [RBP + -0x60], 0x7,0x140036e40: CMOVA RCX, qword ptr [RBP + -0x78],0x140036e45: MOV qword ptr [RSP + 0x30], R15,0x140036e4a: MOV dword ptr [RSP + 0x28], 0x8200000,0x140036e52: MOV R12D, 0x3,0x140036e58: MOV dword ptr [RSP + 0x20], R12D,0x140036e5d: XOR R9D, R9D,0x140036e60: MOV EDX, 0x80000000,0x140036e65: MOV R8D, 0x7,0x140036e6b: CALL qword ptr [0x14037a9d8],0x140036e71: MOV RBX, RAX,0x140036e74: MOV qword ptr [RSP + 0x40], RAX,0x140036e79: DEC RAX,0x140036e7c: CMP RAX, -0x3,0x140036e80: JA 0x140037040,0x140036e86: XOR EDX, EDX,0x140036e88: MOV RCX, RBX,0x140036e8b: CALL 0x140034ec0,0x140036e90: TEST AL, AL,0x140036e92: JNZ 0x140036eb6,0x140036e94: MOV dword ptr [RDI], 0x2,0x140036e9a: XORPS XMM0, XMM0,0x140036e9d: MOVUPS xmmword ptr [RDI + 0x8], XMM0,0x140036ea1: MOV qword ptr [RDI + 0x18], R15,0x140036ea5: MOV qword ptr [RDI + 0x20], 0xf,0x140036ead: MOV byte ptr [RDI + 0x8], 0x0,0x140036eb1: JMP 0x140037077,0x140036eb6: MOV qword ptr [RSP + 0x48], R15,0x140036ebb: LEA RDX, [RSP + 0x48],0x140036ec0: MOV RCX, RBX,0x140036ec3: CALL qword ptr [0x14037a7f0],0x140036ec9: TEST EAX, EAX,0x140036ecb: JZ 0x140037038,0x140036ed1: MOV RDX, qword ptr [RSP + 0x48],0x140036ed6: TEST RDX, RDX,0x140036ed9: JS 0x140037038,0x140036edf: XORPS XMM0, XMM0,0x140036ee2: CMP RDX, RSI,0x140036ee5: JBE 0x140036f06,0x140036ee7: MOV dword ptr [RDI], 0x4,0x140036eed: MOVUPS xmmword ptr [RDI + 0x8], XMM0,0x140036ef1: MOV qword ptr [RDI + 0x18], R15,0x140036ef5: MOV qword ptr [RDI + 0x20], 0xf,0x140036efd: MOV byte ptr [RDI + 0x8], 0x0,0x140036f01: JMP 0x140037077,0x140036f06: MOV dword ptr [RSP + 0x58], R15D,0x140036f0b: MOVUPS xmmword ptr [RSP + 0x60], XMM0,0x140036f10: MOV qword ptr [RSP + 0x70], R15,0x140036f15: MOV qword ptr [RSP + 0x78], 0xf,0x140036f1e: MOV byte ptr [RSP + 0x60], 0x0,0x140036f23: XOR R8D, R8D,0x140036f26: LEA RCX, [RSP + 0x60],0x140036f2b: CALL 0x1400399e0,0x140036f30: MOV R14, R15,0x140036f33: MOV RSI, qword ptr [RSP + 0x70],0x140036f38: TEST RSI, RSI,0x140036f3b: JZ 0x140036fa2,0x140036f3d: MOV R13D, 0xffffffff,0x140036f43: NOP dword ptr [RAX],0x140036f47: NOP word ptr [RAX + RAX*0x1],0x140036f50: SUB RSI, R14,0x140036f53: CMP RSI, R13,0x140036f56: CMOVA ESI, R13D,0x140036f5a: MOV dword ptr [RSP + 0x40], R15D,0x140036f5f: LEA RDX, [RSP + 0x60],0x140036f64: CMP qword ptr [RSP + 0x78], 0xf,0x140036f6a: CMOVA RDX, qword ptr [RSP + 0x60],0x140036f70: ADD RDX, R14,0x140036f73: MOV qword ptr [RSP + 0x20], R15,0x140036f78: LEA R9, [RSP + 0x40],0x140036f7d: MOV R8D, ESI,0x140036f80: MOV RCX, RBX,0x140036f83: CALL qword ptr [0x14037a7e8],0x140036f89: TEST EAX, EAX,0x140036f8b: JZ 0x140036fc9,0x140036f8d: MOV EAX, dword ptr [RSP + 0x40],0x140036f91: CMP EAX, ESI,0x140036f93: JNZ 0x140036fc9,0x140036f95: ADD R14, RAX,0x140036f98: MOV RSI, qword ptr [RSP + 0x70],0x140036f9d: CMP R14, RSI,0x140036fa0: JC 0x140036f50,0x140036fa2: MOV EAX, dword ptr [RSP + 0x58],0x140036fa6: MOV dword ptr [RDI], EAX,0x140036fa8: MOV RAX, qword ptr [RSP + 0x60],0x140036fad: MOV qword ptr [RDI + 0x8], RAX,0x140036fb1: MOV RAX, qword ptr [RSP + 0x68],0x140036fb6: MOV qword ptr [RDI + 0x10], RAX,0x140036fba: MOV qword ptr [RDI + 0x18], RSI,0x140036fbe: MOV RAX, qword ptr [RSP + 0x78],0x140036fc3: MOV qword ptr [RDI + 0x20], RAX,0x140036fc7: JMP 0x14003701c,0x140036fc9: MOV dword ptr [RDI], R12D,0x140036fcc: XORPS XMM0, XMM0,0x140036fcf: MOVUPS xmmword ptr [RDI + 0x8], XMM0,0x140036fd3: MOV qword ptr [RDI + 0x18], R15,0x140036fd7: MOV qword ptr [RDI + 0x20], 0xf,0x140036fdf: MOV byte ptr [RDI + 0x8], 0x0,0x140036fe3: MOV RDX, qword ptr [RSP + 0x78],0x140036fe8: CMP RDX, 0xf,0x140036fec: JBE 0x14003701c,0x140036fee: INC RDX,0x140036ff1: MOV RCX, qword ptr [RSP + 0x60],0x140036ff6: CMP RDX, 0x1000,0x140036ffd: JC 0x140037017,0x140036fff: MOV RAX, qword ptr [RCX + -0x8],0x140037003: SUB RCX, RAX,0x140037006: SUB RCX, 0x8,0x14003700a: CMP RCX, 0x1f,0x14003700e: JA 0x140037031,0x140037010: ADD RDX, 0x27,0x140037014: MOV RCX, RAX,0x140037017: CALL 0x1403272f0,0x14003701c: MOV qword ptr [RSP + 0x70], R15,0x140037021: MOV qword ptr [RSP + 0x78], 0xf,0x14003702a: MOV byte ptr [RSP + 0x60], 0x0,0x14003702f: JMP 0x140037077,0x140037031: MOV ECX, 0x5,0x140037036: INT 0x29,0x140037038: MOV dword ptr [RDI], R12D,0x14003703b: JMP 0x140036e9a,0x140037040: CALL qword ptr [0x14037a908],0x140037046: SUB EAX, 0x2,0x140037049: MOV ECX, 0x1,0x14003704e: CMP EAX, ECX,0x140037050: CMOVA ECX, R12D,0x140037054: MOV dword ptr [RDI], ECX,0x140037056: XORPS XMM0, XMM0,0x140037059: MOVUPS xmmword ptr [RDI + 0x8], XMM0,0x14003705d: MOV qword ptr [RDI + 0x18], R15,0x140037061: MOV qword ptr [RDI + 0x20], 0xf,0x140037069: MOV byte ptr [RDI + 0x8], 0x0,0x14003706d: LEA RAX, [RBX + -0x1],0x140037071: CMP RAX, -0x3,0x140037075: JA 0x140037081,0x140037077: MOV RCX, RBX,0x14003707a: CALL qword ptr [0x14037a900],0x140037080: NOP,0x140037081: LEA RCX, [RBP + -0x20],0x140037085: CALL 0x140038810,0x14003708a: LEA RCX, [RBP + -0x38],0x14003708e: CALL 0x1400388d0,0x140037093: LEA RCX, [RBP + -0x58],0x140037097: CALL 0x1400055b0,0x14003709c: LEA RCX, [RBP + -0x78],0x1400370a0: CALL 0x1400055b0,0x1400370a5: MOV RAX, RDI,0x1400370a8: MOV RCX, qword ptr [RBP],0x1400370ac: XOR RCX, RSP,0x1400370af: CALL 0x140327740,0x1400370b4: MOV RBX, qword ptr [RSP + 0x160],0x1400370bc: ADD RSP, 0x110,0x1400370c3: POP R15,0x1400370c5: POP R14,0x1400370c7: POP R13,0x1400370c9: POP R12,0x1400370cb: POP RDI,0x1400370cc: POP RSI,0x1400370cd: POP RBP,0x1400370ce: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140042a30 | FUN_140042a30 | [object Object] | [object Object] |
| 0x140043680 | FUN_140043680 | [object Object] | [object Object] |
| 0x1400a94c0 | FUN_1400a94c0 | [object Object] | [object Object] |
| 0x1400ec590 | FUN_1400ec590 | [object Object] | [object Object] |
| 0x1400ed060 | FUN_1400ed060 | [object Object] | [object Object] |
| 0x1401b5c40 | FUN_1401b5c40 | [object Object] | [object Object] |
| 0x1401f4c80 | FUN_1401f4c80 | [object Object] | [object Object] |
| 0x1401f4e20 | FUN_1401f4e20 | [object Object] | [object Object] |
| 0x1401f4ef0 | FUN_1401f4ef0 | [object Object] | [object Object] |

## raw_result.value.callees

| address        | name                        | classification  | body            |
|----------------|-----------------------------|-----------------|-----------------|
| EXTERNAL:0x262 | KERNEL32.DLL::ReadFile      | [object Object] | [object Object] |
| EXTERNAL:0x263 | KERNEL32.DLL::GetFileSizeEx | [object Object] | [object Object] |
| EXTERNAL:0x285 | KERNEL32.DLL::CloseHandle   | [object Object] | [object Object] |
| EXTERNAL:0x286 | KERNEL32.DLL::GetLastError  | [object Object] | [object Object] |
| EXTERNAL:0x2a0 | KERNEL32.DLL::CreateFileW   | [object Object] | [object Object] |
| 0x1400055b0    | FUN_1400055b0               | [object Object] | [object Object] |
| 0x1400348d0    | FUN_1400348d0               | [object Object] | [object Object] |
| 0x140034ec0    | FUN_140034ec0               | [object Object] | [object Object] |
| 0x140038810    | FUN_140038810               | [object Object] | [object Object] |
| 0x1400388d0    | FUN_1400388d0               | [object Object] | [object Object] |
| 0x1400399e0    | FUN_1400399e0               | [object Object] | [object Object] |
| 0x1403272f0    | thunk_FUN_140327e20         | [object Object] | [object Object] |
| 0x140327740    | __security_check_cookie     | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140042c3c    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x140044015    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400a9750    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400ec999    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400ed694    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401b5eb6    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cd5    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e6c    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f510d    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404d25b0    | 0x140036dc0    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x140036dc0    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x140036dd0    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x140036ddc    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x140036de6    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x140036df0    | stack:0xffffffffffffff00 | [object Object]  |                  | [object Object] |
| 0x140036dfb    | stack:0xffffffffffffff38 | [object Object]  |                  | [object Object] |
| 0x140036dff    | 0x1400348d0              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e05    | stack:0xffffffffffffff38 | [object Object]  |                  | [object Object] |
| 0x140036e0b    | 0x140036e2b              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e26    | 0x140037081              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e2d    | 0x140036e37              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e35    | 0x140036e0f              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e37    | stack:0xffffffffffffff40 | [object Object]  |                  | [object Object] |
| 0x140036e3b    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x140036e40    | stack:0xffffffffffffff40 | [object Object]  |                  | [object Object] |
| 0x140036e45    | stack:0xfffffffffffffee8 | [object Object]  |                  | [object Object] |
| 0x140036e4a    | stack:0xfffffffffffffee0 | [object Object]  |                  | [object Object] |
| 0x140036e58    | stack:0xfffffffffffffed8 | [object Object]  |                  | [object Object] |
| 0x140036e6b    | EXTERNAL:0x2a0           | [object Object]  | [object Object]  | [object Object] |
| 0x140036e6b    | 0x14037a9d8              | [object Object]  |                  | [object Object] |
| 0x140036e74    | stack:0xfffffffffffffef8 | [object Object]  |                  | [object Object] |
| 0x140036e80    | 0x140037040              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e8b    | 0x140034ec0              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e92    | 0x140036eb6              | [object Object]  | [object Object]  | [object Object] |
| 0x140036eb1    | 0x140037077              | [object Object]  | [object Object]  | [object Object] |
| 0x140036eb6    | stack:0xffffffffffffff00 | [object Object]  |                  | [object Object] |
| 0x140036ebb    | stack:0xffffffffffffff00 | [object Object]  |                  | [object Object] |
| 0x140036ec3    | EXTERNAL:0x263           | [object Object]  | [object Object]  | [object Object] |
| 0x140036ec3    | 0x14037a7f0              | [object Object]  |                  | [object Object] |
| 0x140036ecb    | 0x140037038              | [object Object]  | [object Object]  | [object Object] |
| 0x140036ed1    | stack:0xffffffffffffff00 | [object Object]  |                  | [object Object] |
| 0x140036ed9    | 0x140037038              | [object Object]  | [object Object]  | [object Object] |
| 0x140036ee5    | 0x140036f06              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f01    | 0x140037077              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f06    | stack:0xffffffffffffff10 | [object Object]  |                  | [object Object] |
| 0x140036f0b    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036f10    | stack:0xffffffffffffff28 | [object Object]  |                  | [object Object] |
| 0x140036f15    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x140036f1e    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036f26    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036f2b    | 0x1400399e0              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f33    | stack:0xffffffffffffff28 | [object Object]  |                  | [object Object] |
| 0x140036f3b    | 0x140036fa2              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f5a    | stack:0xfffffffffffffef8 | [object Object]  |                  | [object Object] |
| 0x140036f5f    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036f64    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x140036f6a    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036f73    | stack:0xfffffffffffffed8 | [object Object]  |                  | [object Object] |
| 0x140036f78    | stack:0xfffffffffffffef8 | [object Object]  |                  | [object Object] |
| 0x140036f83    | EXTERNAL:0x262           | [object Object]  | [object Object]  | [object Object] |
| 0x140036f83    | 0x14037a7e8              | [object Object]  |                  | [object Object] |
| 0x140036f8b    | 0x140036fc9              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f8d    | stack:0xfffffffffffffef8 | [object Object]  |                  | [object Object] |
| 0x140036f93    | 0x140036fc9              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f98    | stack:0xffffffffffffff28 | [object Object]  |                  | [object Object] |
| 0x140036fa0    | 0x140036f50              | [object Object]  | [object Object]  | [object Object] |
| 0x140036fa2    | stack:0xffffffffffffff10 | [object Object]  |                  | [object Object] |
| 0x140036fa8    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036fb1    | stack:0xffffffffffffff20 | [object Object]  |                  | [object Object] |
| 0x140036fbe    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x140036fc7    | 0x14003701c              | [object Object]  | [object Object]  | [object Object] |
| 0x140036fe3    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x140036fec    | 0x14003701c              | [object Object]  | [object Object]  | [object Object] |
| 0x140036ff1    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036ffd    | 0x140037017              | [object Object]  | [object Object]  | [object Object] |
| 0x14003700e    | 0x140037031              | [object Object]  | [object Object]  | [object Object] |
| 0x140037017    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14003701c    | stack:0xffffffffffffff28 | [object Object]  |                  | [object Object] |
| 0x140037021    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x14003702a    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x14003702f    | 0x140037077              | [object Object]  | [object Object]  | [object Object] |
| 0x14003703b    | 0x140036e9a              | [object Object]  | [object Object]  | [object Object] |
| 0x140037040    | EXTERNAL:0x286           | [object Object]  | [object Object]  | [object Object] |
| 0x140037040    | 0x14037a908              | [object Object]  |                  | [object Object] |
| 0x140037075    | 0x140037081              | [object Object]  | [object Object]  | [object Object] |
| 0x14003707a    | EXTERNAL:0x285           | [object Object]  | [object Object]  | [object Object] |
| 0x14003707a    | 0x14037a900              | [object Object]  |                  | [object Object] |
| 0x140037081    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140037085    | 0x140038810              | [object Object]  | [object Object]  | [object Object] |
| 0x14003708a    | stack:0xffffffffffffff80 | [object Object]  |                  | [object Object] |
| 0x14003708e    | 0x1400388d0              | [object Object]  | [object Object]  | [object Object] |
| 0x140037093    | stack:0xffffffffffffff60 | [object Object]  |                  | [object Object] |
| 0x140037097    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x14003709c    | stack:0xffffffffffffff40 | [object Object]  |                  | [object Object] |
| 0x1400370a0    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1400370a8    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1400370af    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1400370b4    | stack:0x10               | [object Object]  |                  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address        | value                       | source_address |
|----------------|-----------------------------|----------------|
| 0x1400055b0    | FUN_1400055b0               | 0x140037097    |
| 0x1400055b0    | FUN_1400055b0               | 0x1400370a0    |
| 0x1400348d0    | FUN_1400348d0               | 0x140036dff    |
| 0x140034ec0    | FUN_140034ec0               | 0x140036e8b    |
| 0x140036e0f    | LAB_140036e0f               | 0x140036e35    |
| 0x140036e2b    | LAB_140036e2b               | 0x140036e0b    |
| 0x140036e37    | LAB_140036e37               | 0x140036e2d    |
| 0x140036e9a    | LAB_140036e9a               | 0x14003703b    |
| 0x140036eb6    | LAB_140036eb6               | 0x140036e92    |
| 0x140036f06    | LAB_140036f06               | 0x140036ee5    |
| 0x140036f50    | LAB_140036f50               | 0x140036fa0    |
| 0x140036fa2    | LAB_140036fa2               | 0x140036f3b    |
| 0x140036fc9    | LAB_140036fc9               | 0x140036f8b    |
| 0x140036fc9    | LAB_140036fc9               | 0x140036f93    |
| 0x140037017    | LAB_140037017               | 0x140036ffd    |
| 0x14003701c    | LAB_14003701c               | 0x140036fc7    |
| 0x14003701c    | LAB_14003701c               | 0x140036fec    |
| 0x140037031    | LAB_140037031               | 0x14003700e    |
| 0x140037038    | LAB_140037038               | 0x140036ecb    |
| 0x140037038    | LAB_140037038               | 0x140036ed9    |
| 0x140037040    | LAB_140037040               | 0x140036e80    |
| 0x140037077    | LAB_140037077               | 0x140036eb1    |
| 0x140037077    | LAB_140037077               | 0x140036f01    |
| 0x140037077    | LAB_140037077               | 0x14003702f    |
| 0x140037081    | LAB_140037081               | 0x140036e26    |
| 0x140037081    | LAB_140037081               | 0x140037075    |
| 0x140038810    | FUN_140038810               | 0x140037085    |
| 0x1400388d0    | FUN_1400388d0               | 0x14003708e    |
| 0x1400399e0    | FUN_1400399e0               | 0x140036f2b    |
| 0x1403272f0    | thunk_FUN_140327e20         | 0x140037017    |
| 0x140327740    | __security_check_cookie     | 0x1400370af    |
| 0x14037a7e8    | PTR_ReadFile_14037a7e8      | 0x140036f83    |
| 0x14037a7f0    | PTR_GetFileSizeEx_14037a7f0 | 0x140036ec3    |
| 0x14037a900    | PTR_CloseHandle_14037a900   | 0x14003707a    |
| 0x14037a908    | PTR_GetLastError_14037a908  | 0x140037040    |
| 0x14037a9d8    | PTR_CreateFileW_14037a9d8   | 0x140036e6b    |
| 0x1404c7ac0    | DAT_1404c7ac0               | 0x140036ddc    |
| EXTERNAL:0x262 | KERNEL32.DLL::ReadFile      | 0x140036f83    |
| EXTERNAL:0x263 | KERNEL32.DLL::GetFileSizeEx | 0x140036ec3    |
| EXTERNAL:0x285 | KERNEL32.DLL::CloseHandle   | 0x14003707a    |
| EXTERNAL:0x286 | KERNEL32.DLL::GetLastError  | 0x140037040    |
| EXTERNAL:0x2a0 | KERNEL32.DLL::CreateFileW   | 0x140036e6b    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140036dc0 | 0x140036e0d | 0x140036e0d,0x140036e2b |
| 0x140036e0d | 0x140036e0f | 0x140036e0f             |
| 0x140036e0f | 0x140036e2b | 0x140037081             |
| 0x140036e2b | 0x140036e2f | 0x140036e2f,0x140036e37 |
| 0x140036e2f | 0x140036e37 | 0x140036e0f             |
| 0x140036e37 | 0x140036e86 | 0x140036e86,0x140037040 |
| 0x140036e86 | 0x140036e94 | 0x140036e94,0x140036eb6 |
| 0x140036e94 | 0x140036e9a | 0x140036e9a             |
| 0x140036e9a | 0x140036eb6 | 0x140037077             |
| 0x140036eb6 | 0x140036ed1 | 0x140036ed1,0x140037038 |
| 0x140036ed1 | 0x140036edf | 0x140036edf,0x140037038 |
| 0x140036edf | 0x140036ee7 | 0x140036ee7,0x140036f06 |
| 0x140036ee7 | 0x140036f06 | 0x140037077             |
| 0x140036f06 | 0x140036f3d | 0x140036f3d,0x140036fa2 |
| 0x140036f3d | 0x140036f50 | 0x140036f50             |
| 0x140036f50 | 0x140036f8d | 0x140036f8d,0x140036fc9 |
| 0x140036f8d | 0x140036f95 | 0x140036f95,0x140036fc9 |
| 0x140036f95 | 0x140036fa2 | 0x140036f50,0x140036fa2 |
| 0x140036fa2 | 0x140036fc9 | 0x14003701c             |
| 0x140036fc9 | 0x140036fee | 0x140036fee,0x14003701c |
| 0x140036fee | 0x140036fff | 0x140036fff,0x140037017 |
| 0x140036fff | 0x140037010 | 0x140037010,0x140037031 |
| 0x140037010 | 0x140037017 | 0x140037017             |
| 0x140037017 | 0x14003701c | 0x14003701c             |
| 0x14003701c | 0x140037031 | 0x140037077             |
| 0x140037031 | 0x140037038 | 0x140037038             |
| 0x140037038 | 0x140037040 | 0x140036e9a             |
| 0x140037040 | 0x140037077 | 0x140037077,0x140037081 |
| 0x140037077 | 0x140037081 | 0x140037081             |
| 0x140037081 | 0x1400370cf |                         |

## raw_result.value.native_api.available

true

## raw_result.value.native_api.provenance

ghidra-high-function

## raw_result.value.native_api.signature_source

default

## raw_result.value.native_api.calling_convention

__fastcall

## raw_result.value.native_api.return_type.role

return

## raw_result.value.native_api.return_type.ordinal

null

## raw_result.value.native_api.return_type.name

null

## raw_result.value.native_api.return_type.data_type

LARGE_INTEGER

## raw_result.value.native_api.return_type.size_bytes

8

## raw_result.value.native_api.return_type.storage

RAX:8

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                          |
|------------------|-------------------------|-------------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.           |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type LARGE_INTEGER. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters

| role      | ordinal | name    | data_type     | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|---------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | LARGE_INTEGER | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | undefined8    | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 2       | param_3 | LARGE_INTEGER | 8          | R8:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

## raw_result.value.native_api.jump_tables



## raw_result.value.native_api.pseudocode

| Key            | Value                           |
|----------------|---------------------------------|
| classification | decompiler-generated-non-source |
| compilable     | false                           |

## raw_result.value.native_api.decompiler_artifacts

recovered-signature,register-and-stack-variables,compiler-generated-control-flow,pointer-arithmetic,pseudocode

## raw_result.value.native_api.limitations

Types and calling conventions are Ghidra decompiler observations, not source declarations.,Register variables, compiler-generated blocks, and pointer arithmetic remain decompiler artifacts.,Pseudocode is neither original source nor guaranteed to compile.

## raw_result.value.native_value_flow.available

true

## raw_result.value.native_value_flow.provenance

ghidra-high-pcode

## raw_result.value.native_value_flow.operations

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------------------------------------------------------|-----------------|
| 0x140036dd5#2383 | 0x140036dd5 | 2383     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2384 | 0x140036dd5 | 2384     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2385 | 0x140036dd5 | 2385     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2386 | 0x140036dd5 | 2386     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2387 | 0x140036dd5 | 2387     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2388 | 0x140036dd5 | 2388     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2389 | 0x140036dd5 | 2389     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2390 | 0x140036dd5 | 2390     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2391 | 0x140036dd5 | 2391     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036de3#38   | 0x140036de3 | 38       | INT_XOR      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036de3#2421 | 0x140036de3 | 2421     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036df5#1317 | 0x140036df5 | 1317     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036dfb#2392 | 0x140036dfb | 2392     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#76   | 0x140036dff | 76       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 |                 |
| 0x140036dff#1666 | 0x140036dff | 1666     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#1873 | 0x140036dff | 1873     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#1900 | 0x140036dff | 1900     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#1927 | 0x140036dff | 1927     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#1958 | 0x140036dff | 1958     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#1985 | 0x140036dff | 1985     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2012 | 0x140036dff | 2012     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2039 | 0x140036dff | 2039     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2066 | 0x140036dff | 2066     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2093 | 0x140036dff | 2093     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2120 | 0x140036dff | 2120     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2147 | 0x140036dff | 2147     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2419 | 0x140036dff | 2419     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e08#86   | 0x140036e08 | 86       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e0b#92   | 0x140036e0b | 92       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036e0d#94   | 0x140036e0d | 94       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e0d#1681 | 0x140036e0d | 1681     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e0d#2475 | 0x140036e0d | 2475     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e0f#1731 | 0x140036e0f | 1731     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e12#99   | 0x140036e12 | 99       | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e12#1627 | 0x140036e12 | 1627     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e12#1628 | 0x140036e12 | 1628     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e12#1629 | 0x140036e12 | 1629     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e12#1714 | 0x140036e12 | 1714     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e12#1715 | 0x140036e12 | 1715     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e12#2476 | 0x140036e12 | 2476     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e12#2477 | 0x140036e12 | 2477     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e16#102  | 0x140036e16 | 102      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e16#104  | 0x140036e16 | 104      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e16#1682 | 0x140036e16 | 1682     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e16#2478 | 0x140036e16 | 2478     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e1a#105  | 0x140036e1a | 105      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e1a#107  | 0x140036e1a | 107      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e1a#1683 | 0x140036e1a | 1683     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e1a#2479 | 0x140036e1a | 2479     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e22#108  | 0x140036e22 | 108      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e22#110  | 0x140036e22 | 110      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e22#1684 | 0x140036e22 | 1684     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e22#2480 | 0x140036e22 | 2480     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e26#111  | 0x140036e26 | 111      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140036e26#2415 | 0x140036e26 | 2415     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e2b#194  | 0x140036e2b | 194      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e2d#199  | 0x140036e2d | 199      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036e2f#201  | 0x140036e2f | 201      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e2f#1690 | 0x140036e2f | 1690     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e2f#2474 | 0x140036e2f | 2474     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e35#202  | 0x140036e35 | 202      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140036e37#2393 | 0x140036e37 | 2393     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e40#218  | 0x140036e40 | 218      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e40#223  | 0x140036e40 | 223      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036e40#2406 | 0x140036e40 | 2406     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e40#2407 | 0x140036e40 | 2407     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e40#2422 | 0x140036e40 | 2422     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e45#1167 | 0x140036e45 | 1167     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#250  | 0x140036e6b | 250      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140036e6b#1667 | 0x140036e6b | 1667     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#1901 | 0x140036e6b | 1901     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#1928 | 0x140036e6b | 1928     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#1959 | 0x140036e6b | 1959     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#1986 | 0x140036e6b | 1986     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#2013 | 0x140036e6b | 2013     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#2040 | 0x140036e6b | 2040     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#2148 | 0x140036e6b | 2148     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#2423 | 0x140036e6b | 2423     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e79#256  | 0x140036e79 | 256      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e79#2424 | 0x140036e79 | 2424     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e80#273  | 0x140036e80 | 273      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e80#275  | 0x140036e80 | 275      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036e80#2420 | 0x140036e80 | 2420     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e8b#289  | 0x140036e8b | 289      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140036e8b#1669 | 0x140036e8b | 1669     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#1876 | 0x140036e8b | 1876     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#1903 | 0x140036e8b | 1903     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#1930 | 0x140036e8b | 1930     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#1961 | 0x140036e8b | 1961     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#1988 | 0x140036e8b | 1988     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#2015 | 0x140036e8b | 2015     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#2042 | 0x140036e8b | 2042     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#2150 | 0x140036e8b | 2150     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e90#294  | 0x140036e90 | 294      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e92#300  | 0x140036e92 | 300      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036e94#302  | 0x140036e94 | 302      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e94#1691 | 0x140036e94 | 1691     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e94#2467 | 0x140036e94 | 2467     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e9a#1205 | 0x140036e9a | 1205     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#1729 | 0x140036e9a | 1729     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#1898 | 0x140036e9a | 1898     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#1925 | 0x140036e9a | 1925     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#1952 | 0x140036e9a | 1952     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#1983 | 0x140036e9a | 1983     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#2010 | 0x140036e9a | 2010     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#2037 | 0x140036e9a | 2037     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#2064 | 0x140036e9a | 2064     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#2172 | 0x140036e9a | 2172     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9d#307  | 0x140036e9d | 307      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9d#1632 | 0x140036e9d | 1632     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e9d#1633 | 0x140036e9d | 1633     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e9d#1634 | 0x140036e9d | 1634     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9d#1716 | 0x140036e9d | 1716     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9d#1717 | 0x140036e9d | 1717     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9d#2468 | 0x140036e9d | 2468     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e9d#2469 | 0x140036e9d | 2469     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ea1#310  | 0x140036ea1 | 310      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ea1#312  | 0x140036ea1 | 312      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ea1#1692 | 0x140036ea1 | 1692     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ea1#2470 | 0x140036ea1 | 2470     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ea5#313  | 0x140036ea5 | 313      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ea5#315  | 0x140036ea5 | 315      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ea5#1693 | 0x140036ea5 | 1693     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ea5#2471 | 0x140036ea5 | 2471     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ead#316  | 0x140036ead | 316      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ead#318  | 0x140036ead | 318      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ead#1694 | 0x140036ead | 1694     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ead#2472 | 0x140036ead | 2472     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036eb1#319  | 0x140036eb1 | 319      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140036eb1#2412 | 0x140036eb1 | 2412     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036eb6#327  | 0x140036eb6 | 327      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ebb#2394 | 0x140036ebb | 2394     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#334  | 0x140036ec3 | 334      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140036ec3#1670 | 0x140036ec3 | 1670     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#1877 | 0x140036ec3 | 1877     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#1904 | 0x140036ec3 | 1904     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#1931 | 0x140036ec3 | 1931     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#1962 | 0x140036ec3 | 1962     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#1989 | 0x140036ec3 | 1989     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#2016 | 0x140036ec3 | 2016     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#2043 | 0x140036ec3 | 2043     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#2151 | 0x140036ec3 | 2151     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec9#339  | 0x140036ec9 | 339      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ecb#344  | 0x140036ecb | 344      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036ecb#2410 | 0x140036ecb | 2410     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ed6#351  | 0x140036ed6 | 351      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ed9#357  | 0x140036ed9 | 357      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036ed9#2411 | 0x140036ed9 | 2411     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ee5#372  | 0x140036ee5 | 372      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ee5#373  | 0x140036ee5 | 373      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036ee5#2432 | 0x140036ee5 | 2432     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ee5#2433 | 0x140036ee5 | 2433     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ee7#375  | 0x140036ee7 | 375      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ee7#1696 | 0x140036ee7 | 1696     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ee7#2460 | 0x140036ee7 | 2460     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036eed#376  | 0x140036eed | 376      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036eed#1637 | 0x140036eed | 1637     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036eed#1638 | 0x140036eed | 1638     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036eed#1639 | 0x140036eed | 1639     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036eed#1718 | 0x140036eed | 1718     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036eed#1719 | 0x140036eed | 1719     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036eed#2461 | 0x140036eed | 2461     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036eed#2462 | 0x140036eed | 2462     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ef1#379  | 0x140036ef1 | 379      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ef1#381  | 0x140036ef1 | 381      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ef1#1697 | 0x140036ef1 | 1697     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ef1#2463 | 0x140036ef1 | 2463     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ef5#382  | 0x140036ef5 | 382      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ef5#384  | 0x140036ef5 | 384      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ef5#1698 | 0x140036ef5 | 1698     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ef5#2464 | 0x140036ef5 | 2464     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036efd#385  | 0x140036efd | 385      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036efd#387  | 0x140036efd | 387      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036efd#1699 | 0x140036efd | 1699     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036efd#2465 | 0x140036efd | 2465     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f01#388  | 0x140036f01 | 388      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140036f01#2413 | 0x140036f01 | 2413     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f06#391  | 0x140036f06 | 391      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f0b#1643 | 0x140036f0b | 1643     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f10#397  | 0x140036f10 | 397      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f15#400  | 0x140036f15 | 400      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f1e#1955 | 0x140036f1e | 1955     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f26#2395 | 0x140036f26 | 2395     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#418  | 0x140036f2b | 418      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 |                 |
| 0x140036f2b#1671 | 0x140036f2b | 1671     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#1878 | 0x140036f2b | 1878     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#1905 | 0x140036f2b | 1905     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#1932 | 0x140036f2b | 1932     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#1963 | 0x140036f2b | 1963     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#1990 | 0x140036f2b | 1990     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#2017 | 0x140036f2b | 2017     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#2044 | 0x140036f2b | 2044     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#2152 | 0x140036f2b | 2152     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f38#427  | 0x140036f38 | 427      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f3b#432  | 0x140036f3b | 432      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036f50#438  | 0x140036f50 | 438      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1302 | 0x140036f50 | 1302     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1727 | 0x140036f50 | 1727     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1896 | 0x140036f50 | 1896     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1923 | 0x140036f50 | 1923     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1950 | 0x140036f50 | 1950     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1981 | 0x140036f50 | 1981     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#2008 | 0x140036f50 | 2008     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#2035 | 0x140036f50 | 2035     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#2062 | 0x140036f50 | 2062     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#2170 | 0x140036f50 | 2170     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f56#455  | 0x140036f56 | 455      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f56#460  | 0x140036f56 | 460      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036f56#1592 | 0x140036f56 | 1592     | SUBPIECE     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f56#1593 | 0x140036f56 | 1593     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f5a#1594 | 0x140036f5a | 1594     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f5a#1872 | 0x140036f5a | 1872     | INT_AND      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f5a#2434 | 0x140036f5a | 2434     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f5a#2435 | 0x140036f5a | 2435     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f5f#2396 | 0x140036f5f | 2396     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f6a#480  | 0x140036f6a | 480      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f6a#485  | 0x140036f6a | 485      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036f6a#2408 | 0x140036f6a | 2408     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f6a#2409 | 0x140036f6a | 2409     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f6a#2436 | 0x140036f6a | 2436     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f70#489  | 0x140036f70 | 489      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f70#1195 | 0x140036f70 | 1195     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f70#2437 | 0x140036f70 | 2437     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f70#2438 | 0x140036f70 | 2438     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f78#2397 | 0x140036f78 | 2397     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#507  | 0x140036f83 | 507      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140036f83#1672 | 0x140036f83 | 1672     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#1879 | 0x140036f83 | 1879     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#1906 | 0x140036f83 | 1906     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#1933 | 0x140036f83 | 1933     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#1964 | 0x140036f83 | 1964     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#1991 | 0x140036f83 | 1991     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#2018 | 0x140036f83 | 2018     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#2045 | 0x140036f83 | 2045     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#2153 | 0x140036f83 | 2153     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#2439 | 0x140036f83 | 2439     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f89#512  | 0x140036f89 | 512      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f8b#517  | 0x140036f8b | 517      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036f8d#1111 | 0x140036f8d | 1111     | INT_AND      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f8d#1870 | 0x140036f8d | 1870     | SUBPIECE     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f8d#2440 | 0x140036f8d | 2440     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f91#527  | 0x140036f91 | 527      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f93#533  | 0x140036f93 | 533      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036f95#536  | 0x140036f95 | 536      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f9d#547  | 0x140036f9d | 547      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa0#556  | 0x140036fa0 | 556      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036fa2#1212 | 0x140036fa2 | 1212     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#1726 | 0x140036fa2 | 1726     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#1895 | 0x140036fa2 | 1895     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#1922 | 0x140036fa2 | 1922     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#1949 | 0x140036fa2 | 1949     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#1980 | 0x140036fa2 | 1980     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#2007 | 0x140036fa2 | 2007     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#2061 | 0x140036fa2 | 2061     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#2169 | 0x140036fa2 | 2169     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa6#562  | 0x140036fa6 | 562      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fa6#1700 | 0x140036fa6 | 1700     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa6#2453 | 0x140036fa6 | 2453     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fad#566  | 0x140036fad | 566      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fad#568  | 0x140036fad | 568      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fad#1701 | 0x140036fad | 1701     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fad#2454 | 0x140036fad | 2454     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fb6#572  | 0x140036fb6 | 572      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fb6#574  | 0x140036fb6 | 574      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fb6#1702 | 0x140036fb6 | 1702     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fb6#2455 | 0x140036fb6 | 2455     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fba#575  | 0x140036fba | 575      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fba#577  | 0x140036fba | 577      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fba#1703 | 0x140036fba | 1703     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fba#2456 | 0x140036fba | 2456     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fc3#581  | 0x140036fc3 | 581      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fc3#583  | 0x140036fc3 | 583      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fc3#1704 | 0x140036fc3 | 1704     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fc3#2457 | 0x140036fc3 | 2457     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fc7#584  | 0x140036fc7 | 584      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140036fc9#596  | 0x140036fc9 | 596      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fc9#1705 | 0x140036fc9 | 1705     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fc9#2441 | 0x140036fc9 | 2441     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fcf#601  | 0x140036fcf | 601      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fcf#1647 | 0x140036fcf | 1647     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fcf#1648 | 0x140036fcf | 1648     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fcf#1649 | 0x140036fcf | 1649     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fcf#1720 | 0x140036fcf | 1720     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fcf#1721 | 0x140036fcf | 1721     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fcf#2442 | 0x140036fcf | 2442     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fcf#2443 | 0x140036fcf | 2443     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fd3#604  | 0x140036fd3 | 604      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fd3#606  | 0x140036fd3 | 606      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fd3#1706 | 0x140036fd3 | 1706     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fd3#2444 | 0x140036fd3 | 2444     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fd7#607  | 0x140036fd7 | 607      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fd7#609  | 0x140036fd7 | 609      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fd7#1707 | 0x140036fd7 | 1707     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fd7#2445 | 0x140036fd7 | 2445     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fdf#610  | 0x140036fdf | 610      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fdf#612  | 0x140036fdf | 612      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fdf#1708 | 0x140036fdf | 1708     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fdf#2446 | 0x140036fdf | 2446     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fec#626  | 0x140036fec | 626      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fec#627  | 0x140036fec | 627      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036fee#629  | 0x140036fee | 629      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ff6#640  | 0x140036ff6 | 640      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ffd#649  | 0x140036ffd | 649      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036ffd#2405 | 0x140036ffd | 2405     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ffd#2447 | 0x140036ffd | 2447     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fff#651  | 0x140036fff | 651      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fff#2398 | 0x140036fff | 2398     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140036fff#2448 | 0x140036fff | 2448     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037006#664  | 0x140037006 | 664      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037006#2399 | 0x140037006 | 2399     | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037006#2449 | 0x140037006 | 2449     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037006#2450 | 0x140037006 | 2450     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003700e#681  | 0x14003700e | 681      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003700e#683  | 0x14003700e | 683      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x14003700e#2451 | 0x14003700e | 2451     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037010#686  | 0x140037010 | 686      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#696  | 0x140037017 | 696      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037017#1159 | 0x140037017 | 1159     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1191 | 0x140037017 | 1191     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1674 | 0x140037017 | 1674     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1881 | 0x140037017 | 1881     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1908 | 0x140037017 | 1908     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1935 | 0x140037017 | 1935     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1966 | 0x140037017 | 1966     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1993 | 0x140037017 | 1993     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#2020 | 0x140037017 | 2020     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#2047 | 0x140037017 | 2047     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#2155 | 0x140037017 | 2155     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003701c#587  | 0x14003701c | 587      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003701c#1725 | 0x14003701c | 1725     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#1894 | 0x14003701c | 1894     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#1921 | 0x14003701c | 1921     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#1948 | 0x14003701c | 1948     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#1979 | 0x14003701c | 1979     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#2006 | 0x14003701c | 2006     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#2168 | 0x14003701c | 2168     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037021#590  | 0x140037021 | 590      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003702a#1957 | 0x14003702a | 1957     | INT_AND      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003702a#2458 | 0x14003702a | 2458     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003702a#2459 | 0x14003702a | 2459     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003702f#594  | 0x14003702f | 594      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x14003702f#2414 | 0x14003702f | 2414     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037036#698  | 0x140037036 | 698      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#699  | 0x140037036 | 699      | CALLIND      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140037036#1673 | 0x140037036 | 1673     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#1880 | 0x140037036 | 1880     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#1907 | 0x140037036 | 1907     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#1934 | 0x140037036 | 1934     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#1965 | 0x140037036 | 1965     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#1992 | 0x140037036 | 1992     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#2019 | 0x140037036 | 2019     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#2046 | 0x140037036 | 2046     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#2154 | 0x140037036 | 2154     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#2400 | 0x140037036 | 2400     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#2452 | 0x140037036 | 2452     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037038#701  | 0x140037038 | 701      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037038#1200 | 0x140037038 | 1200     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#1709 | 0x140037038 | 1709     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037038#1724 | 0x140037038 | 1724     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#1893 | 0x140037038 | 1893     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#1920 | 0x140037038 | 1920     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#1947 | 0x140037038 | 1947     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#1978 | 0x140037038 | 1978     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#2005 | 0x140037038 | 2005     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#2032 | 0x140037038 | 2032     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#2059 | 0x140037038 | 2059     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#2167 | 0x140037038 | 2167     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#2466 | 0x140037038 | 2466     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003703b#702  | 0x14003703b | 702      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140037040#706  | 0x140037040 | 706      | CALL         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037040#1668 | 0x140037040 | 1668     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#1875 | 0x140037040 | 1875     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#1902 | 0x140037040 | 1902     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#1929 | 0x140037040 | 1929     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#1960 | 0x140037040 | 1960     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#1987 | 0x140037040 | 1987     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#2014 | 0x140037040 | 2014     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#2041 | 0x140037040 | 2041     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#2149 | 0x140037040 | 2149     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037046#709  | 0x140037046 | 709      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003704e#1139 | 0x14003704e | 1139     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037050#732  | 0x140037050 | 732      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037050#733  | 0x140037050 | 733      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140037050#1615 | 0x140037050 | 1615     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037054#736  | 0x140037054 | 736      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037054#1614 | 0x140037054 | 1614     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037054#1710 | 0x140037054 | 1710     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037054#2425 | 0x140037054 | 2425     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037059#741  | 0x140037059 | 741      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037059#1652 | 0x140037059 | 1652     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037059#1653 | 0x140037059 | 1653     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037059#1654 | 0x140037059 | 1654     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037059#1722 | 0x140037059 | 1722     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037059#1723 | 0x140037059 | 1723     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037059#2426 | 0x140037059 | 2426     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037059#2427 | 0x140037059 | 2427     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003705d#744  | 0x14003705d | 744      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003705d#746  | 0x14003705d | 746      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x14003705d#1711 | 0x14003705d | 1711     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003705d#2428 | 0x14003705d | 2428     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037061#747  | 0x140037061 | 747      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037061#749  | 0x140037061 | 749      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037061#1712 | 0x140037061 | 1712     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037061#2429 | 0x140037061 | 2429     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037069#750  | 0x140037069 | 750      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037069#752  | 0x140037069 | 752      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037069#1713 | 0x140037069 | 1713     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037069#2430 | 0x140037069 | 2430     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003706d#753  | 0x14003706d | 753      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003706d#2431 | 0x14003706d | 2431     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037075#765  | 0x140037075 | 765      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037075#767  | 0x140037075 | 767      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140037077#1204 | 0x140037077 | 1204     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#1728 | 0x140037077 | 1728     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#1897 | 0x140037077 | 1897     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#1924 | 0x140037077 | 1924     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#1951 | 0x140037077 | 1951     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#1982 | 0x140037077 | 1982     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#2009 | 0x140037077 | 2009     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#2036 | 0x140037077 | 2036     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#2063 | 0x140037077 | 2063     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#2171 | 0x140037077 | 2171     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x14003707a#322  | 0x14003707a | 322      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003707a#323  | 0x14003707a | 323      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x14003707a#324  | 0x14003707a | 324      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x14003707a#1675 | 0x14003707a | 1675     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#1882 | 0x14003707a | 1882     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#1909 | 0x14003707a | 1909     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#1936 | 0x14003707a | 1936     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#1967 | 0x14003707a | 1967     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#1994 | 0x14003707a | 1994     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#2021 | 0x14003707a | 2021     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#2048 | 0x14003707a | 2048     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#2156 | 0x14003707a | 2156     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#2416 | 0x14003707a | 2416     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003707a#2473 | 0x14003707a | 2473     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037081#1206 | 0x140037081 | 1206     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#1730 | 0x140037081 | 1730     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#1899 | 0x140037081 | 1899     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#1926 | 0x140037081 | 1926     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#1953 | 0x140037081 | 1953     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#1984 | 0x140037081 | 1984     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#2011 | 0x140037081 | 2011     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#2038 | 0x140037081 | 2038     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#2065 | 0x140037081 | 2065     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#2173 | 0x140037081 | 2173     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#2401 | 0x140037081 | 2401     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#114  | 0x140037085 | 114      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037085#115  | 0x140037085 | 115      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037085#116  | 0x140037085 | 116      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140037085#1676 | 0x140037085 | 1676     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#1883 | 0x140037085 | 1883     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#1910 | 0x140037085 | 1910     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#1937 | 0x140037085 | 1937     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#1968 | 0x140037085 | 1968     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#1995 | 0x140037085 | 1995     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#2022 | 0x140037085 | 2022     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#2049 | 0x140037085 | 2049     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#2157 | 0x140037085 | 2157     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#2481 | 0x140037085 | 2481     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003708a#2402 | 0x14003708a | 2402     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#119  | 0x14003708e | 119      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003708e#120  | 0x14003708e | 120      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x14003708e#121  | 0x14003708e | 121      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x14003708e#1677 | 0x14003708e | 1677     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#1884 | 0x14003708e | 1884     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#1911 | 0x14003708e | 1911     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#1938 | 0x14003708e | 1938     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#1969 | 0x14003708e | 1969     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#1996 | 0x14003708e | 1996     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#2023 | 0x14003708e | 2023     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#2050 | 0x14003708e | 2050     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#2158 | 0x14003708e | 2158     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#2482 | 0x14003708e | 2482     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037093#2403 | 0x140037093 | 2403     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#124  | 0x140037097 | 124      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037097#125  | 0x140037097 | 125      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037097#126  | 0x140037097 | 126      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140037097#1678 | 0x140037097 | 1678     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#1885 | 0x140037097 | 1885     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#1912 | 0x140037097 | 1912     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#1939 | 0x140037097 | 1939     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#1970 | 0x140037097 | 1970     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#1997 | 0x140037097 | 1997     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#2024 | 0x140037097 | 2024     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#2051 | 0x140037097 | 2051     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#2159 | 0x140037097 | 2159     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#2483 | 0x140037097 | 2483     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003709c#2404 | 0x14003709c | 2404     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#129  | 0x1400370a0 | 129      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1400370a0#130  | 0x1400370a0 | 130      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1400370a0#131  | 0x1400370a0 | 131      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1400370a0#1679 | 0x1400370a0 | 1679     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#1886 | 0x1400370a0 | 1886     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#1913 | 0x1400370a0 | 1913     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#1940 | 0x1400370a0 | 1940     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#1971 | 0x1400370a0 | 1971     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#1998 | 0x1400370a0 | 1998     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#2025 | 0x1400370a0 | 2025     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#2052 | 0x1400370a0 | 2052     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#2160 | 0x1400370a0 | 2160     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#2484 | 0x1400370a0 | 2484     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1400370a5#132  | 0x1400370a5 | 132      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1400370af#144  | 0x1400370af | 144      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1400370af#145  | 0x1400370af | 145      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1400370af#2485 | 0x1400370af | 2485     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1400370ce#189  | 0x1400370ce | 189      | RETURN       | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1400370ce#1680 | 0x1400370ce | 1680     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1400370ce#2486 | 0x1400370ce | 2486     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x140036de3#2421 | 0x140036de3#38   | 1           |
| 0x140036dd5#2383 | 0x140036de3#2421 | 0           |
| 0x140036dfb#2392 | 0x140036dff#76   | 1           |
| 0x140036dff#2419 | 0x140036dff#1900 | 0           |
| 0x140036de3#38   | 0x140036dff#2147 | 0           |
| 0x140036dff#2066 | 0x140036e08#86   | 0           |
| 0x140036e08#86   | 0x140036e0b#92   | 1           |
| 0x140036e0d#2475 | 0x140036e0d#94   | 1           |
| 0x140036dff#1666 | 0x140036e0d#1681 | 0           |
| 0x140036e0d#1681 | 0x140036e0f#1731 | 0           |
| 0x140036e2f#1690 | 0x140036e0f#1731 | 1           |
| 0x140036e12#2476 | 0x140036e12#1627 | 1           |
| 0x140036e12#2477 | 0x140036e12#1628 | 1           |
| 0x140036e0f#1731 | 0x140036e12#1714 | 0           |
| 0x140036e12#1714 | 0x140036e12#1715 | 0           |
| 0x140036e12#99   | 0x140036e12#2476 | 0           |
| 0x140036e12#1629 | 0x140036e12#2477 | 0           |
| 0x140036e16#2478 | 0x140036e16#104  | 1           |
| 0x140036e12#1715 | 0x140036e16#1682 | 0           |
| 0x140036e16#102  | 0x140036e16#2478 | 0           |
| 0x140036e1a#2479 | 0x140036e1a#107  | 1           |
| 0x140036e16#1682 | 0x140036e1a#1683 | 0           |
| 0x140036e1a#105  | 0x140036e1a#2479 | 0           |
| 0x140036e22#2480 | 0x140036e22#110  | 1           |
| 0x140036e1a#1683 | 0x140036e22#1684 | 0           |
| 0x140036e22#108  | 0x140036e22#2480 | 0           |
| 0x140036dd5#2387 | 0x140036e26#2415 | 0           |
| 0x140036dff#2066 | 0x140036e2b#194  | 0           |
| 0x140036e2b#194  | 0x140036e2d#199  | 1           |
| 0x140036e2f#2474 | 0x140036e2f#201  | 1           |
| 0x140036dff#1666 | 0x140036e2f#1690 | 0           |
| 0x140036dff#2120 | 0x140036e40#218  | 1           |
| 0x140036e40#218  | 0x140036e40#223  | 1           |
| 0x140036e37#2393 | 0x140036e40#2406 | 0           |
| 0x140036e40#2422 | 0x140036e40#2407 | 0           |
| 0x140036dff#2093 | 0x140036e40#2422 | 0           |
| 0x140036e40#2406 | 0x140036e45#1167 | 0           |
| 0x140036e40#2407 | 0x140036e45#1167 | 1           |
| 0x140036e6b#2423 | 0x140036e6b#250  | 1           |
| 0x140036dff#1666 | 0x140036e6b#1667 | 0           |
| 0x140036dff#1900 | 0x140036e6b#1901 | 0           |
| 0x140036dff#1927 | 0x140036e6b#1928 | 0           |
| 0x140036dff#1958 | 0x140036e6b#1959 | 0           |
| 0x140036dff#1985 | 0x140036e6b#1986 | 0           |
| 0x140036dff#2012 | 0x140036e6b#2013 | 0           |
| 0x140036dff#2039 | 0x140036e6b#2040 | 0           |
| 0x140036dff#2147 | 0x140036e6b#2148 | 0           |
| 0x140036e45#1167 | 0x140036e6b#2423 | 0           |
| 0x140036e79#2424 | 0x140036e79#256  | 0           |
| 0x140036e6b#250  | 0x140036e79#2424 | 0           |
| 0x140036e79#256  | 0x140036e80#273  | 0           |
| 0x140036e80#273  | 0x140036e80#275  | 1           |
| 0x140036e6b#250  | 0x140036e80#2420 | 0           |
| 0x140036e6b#250  | 0x140036e8b#289  | 1           |
| 0x140036e6b#1667 | 0x140036e8b#1669 | 0           |
| 0x140036e80#2420 | 0x140036e8b#1876 | 0           |
| 0x140036e6b#1901 | 0x140036e8b#1903 | 0           |
| 0x140036e6b#1928 | 0x140036e8b#1930 | 0           |
| 0x140036e6b#1959 | 0x140036e8b#1961 | 0           |
| 0x140036e6b#1986 | 0x140036e8b#1988 | 0           |
| 0x140036e6b#2013 | 0x140036e8b#2015 | 0           |
| 0x140036e6b#2040 | 0x140036e8b#2042 | 0           |
| 0x140036e6b#2148 | 0x140036e8b#2150 | 0           |
| 0x140036e8b#289  | 0x140036e90#294  | 0           |
| 0x140036e90#294  | 0x140036e92#300  | 1           |
| 0x140036e94#2467 | 0x140036e94#302  | 1           |
| 0x140036e8b#1669 | 0x140036e94#1691 | 0           |
| 0x140036dd5#2384 | 0x140036e9a#1205 | 0           |
| 0x140037038#1200 | 0x140036e9a#1205 | 1           |
| 0x140036e94#1691 | 0x140036e9a#1729 | 0           |
| 0x140037038#1709 | 0x140036e9a#1729 | 1           |
| 0x140036e8b#1876 | 0x140036e9a#1898 | 0           |
| 0x140037038#1893 | 0x140036e9a#1898 | 1           |
| 0x140036e8b#1903 | 0x140036e9a#1925 | 0           |
| 0x140037038#1920 | 0x140036e9a#1925 | 1           |
| 0x140036e8b#1930 | 0x140036e9a#1952 | 0           |
| 0x140037038#1947 | 0x140036e9a#1952 | 1           |
| 0x140036e8b#1961 | 0x140036e9a#1983 | 0           |
| 0x140037038#1978 | 0x140036e9a#1983 | 1           |
| 0x140036e8b#1988 | 0x140036e9a#2010 | 0           |
| 0x140037038#2005 | 0x140036e9a#2010 | 1           |
| 0x140036e8b#2015 | 0x140036e9a#2037 | 0           |
| 0x140037038#2032 | 0x140036e9a#2037 | 1           |
| 0x140036e8b#2042 | 0x140036e9a#2064 | 0           |
| 0x140037038#2059 | 0x140036e9a#2064 | 1           |
| 0x140036e8b#2150 | 0x140036e9a#2172 | 0           |
| 0x140037038#2167 | 0x140036e9a#2172 | 1           |
| 0x140036e9d#2468 | 0x140036e9d#1632 | 1           |
| 0x140036e9d#2469 | 0x140036e9d#1633 | 1           |
| 0x140036e9a#1729 | 0x140036e9d#1716 | 0           |
| 0x140036e9d#1716 | 0x140036e9d#1717 | 0           |
| 0x140036e9d#307  | 0x140036e9d#2468 | 0           |
| 0x140036e9d#1634 | 0x140036e9d#2469 | 0           |
| 0x140036ea1#2470 | 0x140036ea1#312  | 1           |
| 0x140036e9d#1717 | 0x140036ea1#1692 | 0           |
| 0x140036ea1#310  | 0x140036ea1#2470 | 0           |
| 0x140036ea5#2471 | 0x140036ea5#315  | 1           |
| 0x140036ea1#1692 | 0x140036ea5#1693 | 0           |
| 0x140036ea5#313  | 0x140036ea5#2471 | 0           |
| 0x140036ead#2472 | 0x140036ead#318  | 1           |
| 0x140036ea5#1693 | 0x140036ead#1694 | 0           |
| 0x140036ead#316  | 0x140036ead#2472 | 0           |
| 0x140036e9a#1205 | 0x140036eb1#2412 | 0           |
| 0x140036e6b#250  | 0x140036ec3#334  | 1           |
| 0x140036ebb#2394 | 0x140036ec3#334  | 2           |
| 0x140036e8b#1669 | 0x140036ec3#1670 | 0           |
| 0x140036e8b#1876 | 0x140036ec3#1877 | 0           |
| 0x140036eb6#327  | 0x140036ec3#1904 | 0           |
| 0x140036e8b#1930 | 0x140036ec3#1931 | 0           |
| 0x140036e8b#1961 | 0x140036ec3#1962 | 0           |
| 0x140036e8b#1988 | 0x140036ec3#1989 | 0           |
| 0x140036e8b#2015 | 0x140036ec3#2016 | 0           |
| 0x140036e8b#2042 | 0x140036ec3#2043 | 0           |
| 0x140036e8b#2150 | 0x140036ec3#2151 | 0           |
| 0x140036ec3#334  | 0x140036ec9#339  | 0           |
| 0x140036ec9#339  | 0x140036ecb#344  | 1           |
| 0x140036dd5#2385 | 0x140036ecb#2410 | 0           |
| 0x140036ec3#1904 | 0x140036ed6#351  | 1           |
| 0x140036ed6#351  | 0x140036ed9#357  | 1           |
| 0x140036dd5#2388 | 0x140036ed9#2411 | 0           |
| 0x140036ee5#2432 | 0x140036ee5#372  | 0           |
| 0x140036ee5#2433 | 0x140036ee5#372  | 1           |
| 0x140036ee5#372  | 0x140036ee5#373  | 1           |
| 0x140036ec3#1904 | 0x140036ee5#2433 | 0           |
| 0x140036ee7#2460 | 0x140036ee7#375  | 1           |
| 0x140036ec3#1670 | 0x140036ee7#1696 | 0           |
| 0x140036eed#2461 | 0x140036eed#1637 | 1           |
| 0x140036eed#2462 | 0x140036eed#1638 | 1           |
| 0x140036ee7#1696 | 0x140036eed#1718 | 0           |
| 0x140036eed#1718 | 0x140036eed#1719 | 0           |
| 0x140036eed#376  | 0x140036eed#2461 | 0           |
| 0x140036eed#1639 | 0x140036eed#2462 | 0           |
| 0x140036ef1#2463 | 0x140036ef1#381  | 1           |
| 0x140036eed#1719 | 0x140036ef1#1697 | 0           |
| 0x140036ef1#379  | 0x140036ef1#2463 | 0           |
| 0x140036ef5#2464 | 0x140036ef5#384  | 1           |
| 0x140036ef1#1697 | 0x140036ef5#1698 | 0           |
| 0x140036ef5#382  | 0x140036ef5#2464 | 0           |
| 0x140036efd#2465 | 0x140036efd#387  | 1           |
| 0x140036ef5#1698 | 0x140036efd#1699 | 0           |
| 0x140036efd#385  | 0x140036efd#2465 | 0           |
| 0x140036dd5#2386 | 0x140036f01#2413 | 0           |
| 0x140036f26#2395 | 0x140036f2b#418  | 1           |
| 0x140036ec3#1904 | 0x140036f2b#418  | 2           |
| 0x140036ec3#1670 | 0x140036f2b#1671 | 0           |
| 0x140036ec3#1877 | 0x140036f2b#1878 | 0           |
| 0x140036ec3#1904 | 0x140036f2b#1905 | 0           |
| 0x140036f06#391  | 0x140036f2b#1932 | 0           |
| 0x140036f1e#1955 | 0x140036f2b#1963 | 0           |
| 0x140036f0b#1643 | 0x140036f2b#1990 | 0           |
| 0x140036f10#397  | 0x140036f2b#2017 | 0           |
| 0x140036f15#400  | 0x140036f2b#2044 | 0           |
| 0x140036ec3#2151 | 0x140036f2b#2152 | 0           |
| 0x140036f2b#2017 | 0x140036f38#427  | 0           |
| 0x140036f38#427  | 0x140036f3b#432  | 1           |
| 0x140036f50#2035 | 0x140036f50#438  | 0           |
| 0x140036f50#1302 | 0x140036f50#438  | 1           |
| 0x140036f95#536  | 0x140036f50#1302 | 0           |
| 0x140036df5#1317 | 0x140036f50#1302 | 1           |
| 0x140036f83#1672 | 0x140036f50#1727 | 0           |
| 0x140036f2b#1671 | 0x140036f50#1727 | 1           |
| 0x140036f83#1879 | 0x140036f50#1896 | 0           |
| 0x140036f2b#1878 | 0x140036f50#1896 | 1           |
| 0x140036f83#1906 | 0x140036f50#1923 | 0           |
| 0x140036f2b#1905 | 0x140036f50#1923 | 1           |
| 0x140036f83#1933 | 0x140036f50#1950 | 0           |
| 0x140036f2b#1932 | 0x140036f50#1950 | 1           |
| 0x140036f83#1964 | 0x140036f50#1981 | 0           |
| 0x140036f2b#1963 | 0x140036f50#1981 | 1           |
| 0x140036f83#1991 | 0x140036f50#2008 | 0           |
| 0x140036f2b#1990 | 0x140036f50#2008 | 1           |
| 0x140036f83#2018 | 0x140036f50#2035 | 0           |
| 0x140036f2b#2017 | 0x140036f50#2035 | 1           |
| 0x140036f83#2045 | 0x140036f50#2062 | 0           |
| 0x140036f2b#2044 | 0x140036f50#2062 | 1           |
| 0x140036f83#2153 | 0x140036f50#2170 | 0           |
| 0x140036f2b#2152 | 0x140036f50#2170 | 1           |
| 0x140036f50#438  | 0x140036f56#455  | 1           |
| 0x140036f56#455  | 0x140036f56#460  | 1           |
| 0x140036f50#438  | 0x140036f56#1592 | 0           |
| 0x140036f56#1592 | 0x140036f5a#1594 | 0           |
| 0x140036f56#1593 | 0x140036f5a#1594 | 1           |
| 0x140036f5a#2434 | 0x140036f5a#1872 | 0           |
| 0x140036f50#1896 | 0x140036f5a#2434 | 0           |
| 0x140036f5a#1872 | 0x140036f5a#2435 | 0           |
| 0x140036f50#2062 | 0x140036f6a#480  | 1           |
| 0x140036f6a#480  | 0x140036f6a#485  | 1           |
| 0x140036f5f#2396 | 0x140036f6a#2408 | 0           |
| 0x140036f6a#2436 | 0x140036f6a#2409 | 0           |
| 0x140036f50#1981 | 0x140036f6a#2436 | 0           |
| 0x140036f70#2437 | 0x140036f70#489  | 0           |
| 0x140036f50#1302 | 0x140036f70#489  | 1           |
| 0x140036f6a#2408 | 0x140036f70#1195 | 0           |
| 0x140036f6a#2409 | 0x140036f70#1195 | 1           |
| 0x140036f70#1195 | 0x140036f70#2437 | 0           |
| 0x140036f70#489  | 0x140036f70#2438 | 0           |
| 0x140036e6b#250  | 0x140036f83#507  | 1           |
| 0x140036f70#2438 | 0x140036f83#507  | 2           |
| 0x140036f5a#1594 | 0x140036f83#507  | 3           |
| 0x140036f83#2439 | 0x140036f83#507  | 4           |
| 0x140036f50#1727 | 0x140036f83#1672 | 0           |
| 0x140036f5a#2435 | 0x140036f83#1879 | 0           |
| 0x140036f50#1923 | 0x140036f83#1906 | 0           |
| 0x140036f50#1950 | 0x140036f83#1933 | 0           |
| 0x140036f50#1981 | 0x140036f83#1964 | 0           |
| 0x140036f50#2008 | 0x140036f83#1991 | 0           |
| 0x140036f50#2035 | 0x140036f83#2018 | 0           |
| 0x140036f50#2062 | 0x140036f83#2045 | 0           |
| 0x140036f50#2170 | 0x140036f83#2153 | 0           |
| 0x140036f78#2397 | 0x140036f83#2439 | 0           |
| 0x140036f83#507  | 0x140036f89#512  | 0           |
| 0x140036f89#512  | 0x140036f8b#517  | 1           |
| 0x140036f8d#2440 | 0x140036f8d#1111 | 0           |
| 0x140036f83#1879 | 0x140036f8d#1870 | 0           |
| 0x140036f83#1879 | 0x140036f8d#2440 | 0           |
| 0x140036f8d#1870 | 0x140036f91#527  | 0           |
| 0x140036f5a#1594 | 0x140036f91#527  | 1           |
| 0x140036f91#527  | 0x140036f93#533  | 1           |
| 0x140036f50#1302 | 0x140036f95#536  | 0           |
| 0x140036f8d#1111 | 0x140036f95#536  | 1           |
| 0x140036f95#536  | 0x140036f9d#547  | 0           |
| 0x140036f83#2018 | 0x140036f9d#547  | 1           |
| 0x140036f9d#547  | 0x140036fa0#556  | 1           |
| 0x140036f2b#2017 | 0x140036fa2#1212 | 0           |
| 0x140036f83#2018 | 0x140036fa2#1212 | 1           |
| 0x140036f2b#1671 | 0x140036fa2#1726 | 0           |
| 0x140036f83#1672 | 0x140036fa2#1726 | 1           |
| 0x140036f2b#1878 | 0x140036fa2#1895 | 0           |
| 0x140036f83#1879 | 0x140036fa2#1895 | 1           |
| 0x140036f2b#1905 | 0x140036fa2#1922 | 0           |
| 0x140036f83#1906 | 0x140036fa2#1922 | 1           |
| 0x140036f2b#1932 | 0x140036fa2#1949 | 0           |
| 0x140036f83#1933 | 0x140036fa2#1949 | 1           |
| 0x140036f2b#1963 | 0x140036fa2#1980 | 0           |
| 0x140036f83#1964 | 0x140036fa2#1980 | 1           |
| 0x140036f2b#1990 | 0x140036fa2#2007 | 0           |
| 0x140036f83#1991 | 0x140036fa2#2007 | 1           |
| 0x140036f2b#2044 | 0x140036fa2#2061 | 0           |
| 0x140036f83#2045 | 0x140036fa2#2061 | 1           |
| 0x140036f2b#2152 | 0x140036fa2#2169 | 0           |
| 0x140036f83#2153 | 0x140036fa2#2169 | 1           |
| 0x140036fa6#2453 | 0x140036fa6#562  | 1           |
| 0x140036fa2#1949 | 0x140036fa6#562  | 2           |
| 0x140036fa2#1726 | 0x140036fa6#1700 | 0           |
| 0x140036fad#2454 | 0x140036fad#568  | 1           |
| 0x140036fa2#1980 | 0x140036fad#568  | 2           |
| 0x140036fa6#1700 | 0x140036fad#1701 | 0           |
| 0x140036fad#566  | 0x140036fad#2454 | 0           |
| 0x140036fb6#2455 | 0x140036fb6#574  | 1           |
| 0x140036fa2#2007 | 0x140036fb6#574  | 2           |
| 0x140036fad#1701 | 0x140036fb6#1702 | 0           |
| 0x140036fb6#572  | 0x140036fb6#2455 | 0           |
| 0x140036fba#2456 | 0x140036fba#577  | 1           |
| 0x140036fa2#1212 | 0x140036fba#577  | 2           |
| 0x140036fb6#1702 | 0x140036fba#1703 | 0           |
| 0x140036fba#575  | 0x140036fba#2456 | 0           |
| 0x140036fc3#2457 | 0x140036fc3#583  | 1           |
| 0x140036fa2#2061 | 0x140036fc3#583  | 2           |
| 0x140036fba#1703 | 0x140036fc3#1704 | 0           |
| 0x140036fc3#581  | 0x140036fc3#2457 | 0           |
| 0x140036fc9#2441 | 0x140036fc9#596  | 1           |
| 0x140036f83#1672 | 0x140036fc9#1705 | 0           |
| 0x140036fcf#2442 | 0x140036fcf#1647 | 1           |
| 0x140036fcf#2443 | 0x140036fcf#1648 | 1           |
| 0x140036fc9#1705 | 0x140036fcf#1720 | 0           |
| 0x140036fcf#1720 | 0x140036fcf#1721 | 0           |
| 0x140036fcf#601  | 0x140036fcf#2442 | 0           |
| 0x140036fcf#1649 | 0x140036fcf#2443 | 0           |
| 0x140036fd3#2444 | 0x140036fd3#606  | 1           |
| 0x140036fcf#1721 | 0x140036fd3#1706 | 0           |
| 0x140036fd3#604  | 0x140036fd3#2444 | 0           |
| 0x140036fd7#2445 | 0x140036fd7#609  | 1           |
| 0x140036fd3#1706 | 0x140036fd7#1707 | 0           |
| 0x140036fd7#607  | 0x140036fd7#2445 | 0           |
| 0x140036fdf#2446 | 0x140036fdf#612  | 1           |
| 0x140036fd7#1707 | 0x140036fdf#1708 | 0           |
| 0x140036fdf#610  | 0x140036fdf#2446 | 0           |
| 0x140036f83#2045 | 0x140036fec#626  | 0           |
| 0x140036fec#626  | 0x140036fec#627  | 1           |
| 0x140036f83#2045 | 0x140036fee#629  | 0           |
| 0x140036fee#629  | 0x140036ff6#640  | 1           |
| 0x140036ff6#640  | 0x140036ffd#649  | 1           |
| 0x140036ffd#2447 | 0x140036ffd#2405 | 0           |
| 0x140036f83#1964 | 0x140036ffd#2447 | 0           |
| 0x140036fff#2398 | 0x140036fff#651  | 1           |
| 0x140036f83#1964 | 0x140036fff#2398 | 0           |
| 0x140036fff#651  | 0x140036fff#2448 | 0           |
| 0x140037006#2450 | 0x140037006#664  | 0           |
| 0x140037006#2399 | 0x140037006#664  | 1           |
| 0x140037006#2449 | 0x140037006#2399 | 1           |
| 0x140036fff#2448 | 0x140037006#2449 | 0           |
| 0x140036f83#1964 | 0x140037006#2450 | 0           |
| 0x14003700e#2451 | 0x14003700e#681  | 1           |
| 0x14003700e#681  | 0x14003700e#683  | 1           |
| 0x140037006#664  | 0x14003700e#2451 | 0           |
| 0x140036f83#2045 | 0x140037010#686  | 0           |
| 0x140037017#1159 | 0x140037017#696  | 1           |
| 0x140037017#1191 | 0x140037017#696  | 2           |
| 0x140036ffd#2405 | 0x140037017#1159 | 0           |
| 0x140036fff#2448 | 0x140037017#1159 | 1           |
| 0x140036fee#629  | 0x140037017#1191 | 0           |
| 0x140037010#686  | 0x140037017#1191 | 1           |
| 0x140036fdf#1708 | 0x140037017#1674 | 0           |
| 0x140036f83#1879 | 0x140037017#1881 | 0           |
| 0x140036f83#1906 | 0x140037017#1908 | 0           |
| 0x140036f83#1933 | 0x140037017#1935 | 0           |
| 0x140036f83#1964 | 0x140037017#1966 | 0           |
| 0x140036f83#1991 | 0x140037017#1993 | 0           |
| 0x140036f83#2018 | 0x140037017#2020 | 0           |
| 0x140036f83#2045 | 0x140037017#2047 | 0           |
| 0x140036f83#2153 | 0x140037017#2155 | 0           |
| 0x140036fc3#1704 | 0x14003701c#1725 | 0           |
| 0x140036fdf#1708 | 0x14003701c#1725 | 1           |
| 0x140037017#1674 | 0x14003701c#1725 | 2           |
| 0x140036fa2#1895 | 0x14003701c#1894 | 0           |
| 0x140036f83#1879 | 0x14003701c#1894 | 1           |
| 0x140037017#1881 | 0x14003701c#1894 | 2           |
| 0x140036fa2#1922 | 0x14003701c#1921 | 0           |
| 0x140036f83#1906 | 0x14003701c#1921 | 1           |
| 0x140037017#1908 | 0x14003701c#1921 | 2           |
| 0x140036fa2#1949 | 0x14003701c#1948 | 0           |
| 0x140036f83#1933 | 0x14003701c#1948 | 1           |
| 0x140037017#1935 | 0x14003701c#1948 | 2           |
| 0x140036fa2#1980 | 0x14003701c#1979 | 0           |
| 0x140036f83#1964 | 0x14003701c#1979 | 1           |
| 0x140037017#1966 | 0x14003701c#1979 | 2           |
| 0x140036fa2#2007 | 0x14003701c#2006 | 0           |
| 0x140036f83#1991 | 0x14003701c#2006 | 1           |
| 0x140037017#1993 | 0x14003701c#2006 | 2           |
| 0x140036fa2#2169 | 0x14003701c#2168 | 0           |
| 0x140036f83#2153 | 0x14003701c#2168 | 1           |
| 0x140037017#2155 | 0x14003701c#2168 | 2           |
| 0x14003702a#2458 | 0x14003702a#1957 | 0           |
| 0x14003701c#1979 | 0x14003702a#2458 | 0           |
| 0x14003702a#1957 | 0x14003702a#2459 | 0           |
| 0x140036dd5#2389 | 0x14003702f#2414 | 0           |
| 0x140037036#2452 | 0x140037036#699  | 0           |
| 0x140036fdf#1708 | 0x140037036#1673 | 0           |
| 0x140036f83#1879 | 0x140037036#1880 | 0           |
| 0x140036f83#1906 | 0x140037036#1907 | 0           |
| 0x140036f83#1933 | 0x140037036#1934 | 0           |
| 0x140036f83#1964 | 0x140037036#1965 | 0           |
| 0x140036f83#1991 | 0x140037036#1992 | 0           |
| 0x140036f83#2018 | 0x140037036#2019 | 0           |
| 0x140036f83#2045 | 0x140037036#2046 | 0           |
| 0x140036f83#2153 | 0x140037036#2154 | 0           |
| 0x140037036#698  | 0x140037036#2452 | 0           |
| 0x140037038#2466 | 0x140037038#701  | 1           |
| 0x140036ecb#2410 | 0x140037038#1200 | 0           |
| 0x140036ed9#2411 | 0x140037038#1200 | 1           |
| 0x140037036#2400 | 0x140037038#1200 | 2           |
| 0x140037038#1724 | 0x140037038#1709 | 0           |
| 0x140036ec3#1670 | 0x140037038#1724 | 0           |
| 0x140036ec3#1670 | 0x140037038#1724 | 1           |
| 0x140037036#1673 | 0x140037038#1724 | 2           |
| 0x140036ec3#1877 | 0x140037038#1893 | 0           |
| 0x140036ec3#1877 | 0x140037038#1893 | 1           |
| 0x140037036#1880 | 0x140037038#1893 | 2           |
| 0x140036ec3#1904 | 0x140037038#1920 | 0           |
| 0x140036ec3#1904 | 0x140037038#1920 | 1           |
| 0x140037036#1907 | 0x140037038#1920 | 2           |
| 0x140036ec3#1931 | 0x140037038#1947 | 0           |
| 0x140036ec3#1931 | 0x140037038#1947 | 1           |
| 0x140037036#1934 | 0x140037038#1947 | 2           |
| 0x140036ec3#1962 | 0x140037038#1978 | 0           |
| 0x140036ec3#1962 | 0x140037038#1978 | 1           |
| 0x140037036#1965 | 0x140037038#1978 | 2           |
| 0x140036ec3#1989 | 0x140037038#2005 | 0           |
| 0x140036ec3#1989 | 0x140037038#2005 | 1           |
| 0x140037036#1992 | 0x140037038#2005 | 2           |
| 0x140036ec3#2016 | 0x140037038#2032 | 0           |
| 0x140036ec3#2016 | 0x140037038#2032 | 1           |
| 0x140037036#2019 | 0x140037038#2032 | 2           |
| 0x140036ec3#2043 | 0x140037038#2059 | 0           |
| 0x140036ec3#2043 | 0x140037038#2059 | 1           |
| 0x140037036#2046 | 0x140037038#2059 | 2           |
| 0x140036ec3#2151 | 0x140037038#2167 | 0           |
| 0x140036ec3#2151 | 0x140037038#2167 | 1           |
| 0x140037036#2154 | 0x140037038#2167 | 2           |
| 0x140036e6b#1667 | 0x140037040#1668 | 0           |
| 0x140036e80#2420 | 0x140037040#1875 | 0           |
| 0x140036e6b#1901 | 0x140037040#1902 | 0           |
| 0x140036e6b#1928 | 0x140037040#1929 | 0           |
| 0x140036e6b#1959 | 0x140037040#1960 | 0           |
| 0x140036e6b#1986 | 0x140037040#1987 | 0           |
| 0x140036e6b#2013 | 0x140037040#2014 | 0           |
| 0x140036e6b#2040 | 0x140037040#2041 | 0           |
| 0x140036e6b#2148 | 0x140037040#2149 | 0           |
| 0x140037040#706  | 0x140037046#709  | 0           |
| 0x140037046#709  | 0x140037050#732  | 1           |
| 0x140037050#732  | 0x140037050#733  | 1           |
| 0x140037054#2425 | 0x140037054#736  | 1           |
| 0x140037054#1614 | 0x140037054#736  | 2           |
| 0x14003704e#1139 | 0x140037054#1614 | 0           |
| 0x140037050#1615 | 0x140037054#1614 | 1           |
| 0x140037040#1668 | 0x140037054#1710 | 0           |
| 0x140037059#2426 | 0x140037059#1652 | 1           |
| 0x140037059#2427 | 0x140037059#1653 | 1           |
| 0x140037054#1710 | 0x140037059#1722 | 0           |
| 0x140037059#1722 | 0x140037059#1723 | 0           |
| 0x140037059#741  | 0x140037059#2426 | 0           |
| 0x140037059#1654 | 0x140037059#2427 | 0           |
| 0x14003705d#2428 | 0x14003705d#746  | 1           |
| 0x140037059#1723 | 0x14003705d#1711 | 0           |
| 0x14003705d#744  | 0x14003705d#2428 | 0           |
| 0x140037061#2429 | 0x140037061#749  | 1           |
| 0x14003705d#1711 | 0x140037061#1712 | 0           |
| 0x140037061#747  | 0x140037061#2429 | 0           |
| 0x140037069#2430 | 0x140037069#752  | 1           |
| 0x140037061#1712 | 0x140037069#1713 | 0           |
| 0x140037069#750  | 0x140037069#2430 | 0           |
| 0x14003706d#2431 | 0x14003706d#753  | 0           |
| 0x140036e6b#250  | 0x14003706d#2431 | 0           |
| 0x14003706d#753  | 0x140037075#765  | 1           |
| 0x140037075#765  | 0x140037075#767  | 1           |
| 0x140036eb1#2412 | 0x140037077#1204 | 0           |
| 0x140036f01#2413 | 0x140037077#1204 | 1           |
| 0x14003702f#2414 | 0x140037077#1204 | 2           |
| 0x140036dd5#2390 | 0x140037077#1204 | 3           |
| 0x140036ead#1694 | 0x140037077#1728 | 0           |
| 0x140036efd#1699 | 0x140037077#1728 | 1           |
| 0x14003701c#1725 | 0x140037077#1728 | 2           |
| 0x140037069#1713 | 0x140037077#1728 | 3           |
| 0x140036e9a#1898 | 0x140037077#1897 | 0           |
| 0x140036ec3#1877 | 0x140037077#1897 | 1           |
| 0x14003701c#1894 | 0x140037077#1897 | 2           |
| 0x140037040#1875 | 0x140037077#1897 | 3           |
| 0x140036e9a#1925 | 0x140037077#1924 | 0           |
| 0x140036ec3#1904 | 0x140037077#1924 | 1           |
| 0x14003701c#1921 | 0x140037077#1924 | 2           |
| 0x140037040#1902 | 0x140037077#1924 | 3           |
| 0x140036e9a#1952 | 0x140037077#1951 | 0           |
| 0x140036ec3#1931 | 0x140037077#1951 | 1           |
| 0x14003701c#1948 | 0x140037077#1951 | 2           |
| 0x140037040#1929 | 0x140037077#1951 | 3           |
| 0x140036e9a#1983 | 0x140037077#1982 | 0           |
| 0x140036ec3#1962 | 0x140037077#1982 | 1           |
| 0x14003702a#2459 | 0x140037077#1982 | 2           |
| 0x140037040#1960 | 0x140037077#1982 | 3           |
| 0x140036e9a#2010 | 0x140037077#2009 | 0           |
| 0x140036ec3#1989 | 0x140037077#2009 | 1           |
| 0x14003701c#2006 | 0x140037077#2009 | 2           |
| 0x140037040#1987 | 0x140037077#2009 | 3           |
| 0x140036e9a#2037 | 0x140037077#2036 | 0           |
| 0x140036ec3#2016 | 0x140037077#2036 | 1           |
| 0x14003701c#587  | 0x140037077#2036 | 2           |
| 0x140037040#2014 | 0x140037077#2036 | 3           |
| 0x140036e9a#2064 | 0x140037077#2063 | 0           |
| 0x140036ec3#2043 | 0x140037077#2063 | 1           |
| 0x140037021#590  | 0x140037077#2063 | 2           |
| 0x140037040#2041 | 0x140037077#2063 | 3           |
| 0x140036e9a#2172 | 0x140037077#2171 | 0           |
| 0x140036ec3#2151 | 0x140037077#2171 | 1           |
| 0x14003701c#2168 | 0x140037077#2171 | 2           |
| 0x140037040#2149 | 0x140037077#2171 | 3           |
| 0x140037077#1204 | 0x14003707a#322  | 0           |
| 0x14003707a#2473 | 0x14003707a#323  | 1           |
| 0x140036e6b#250  | 0x14003707a#324  | 1           |
| 0x140037077#1728 | 0x14003707a#1675 | 0           |
| 0x140037077#1897 | 0x14003707a#1882 | 0           |
| 0x140037077#1924 | 0x14003707a#1909 | 0           |
| 0x140037077#1951 | 0x14003707a#1936 | 0           |
| 0x140037077#1982 | 0x14003707a#1967 | 0           |
| 0x140037077#2009 | 0x14003707a#1994 | 0           |
| 0x140037077#2036 | 0x14003707a#2021 | 0           |
| 0x140037077#2063 | 0x14003707a#2048 | 0           |
| 0x140037077#2171 | 0x14003707a#2156 | 0           |
| 0x140037077#1204 | 0x14003707a#2416 | 0           |
| 0x14003707a#322  | 0x14003707a#2473 | 0           |
| 0x140036e26#2415 | 0x140037081#1206 | 0           |
| 0x14003707a#2416 | 0x140037081#1206 | 1           |
| 0x140036dd5#2391 | 0x140037081#1206 | 2           |
| 0x140036e22#1684 | 0x140037081#1730 | 0           |
| 0x14003707a#1675 | 0x140037081#1730 | 1           |
| 0x140037069#1713 | 0x140037081#1730 | 2           |
| 0x140036dff#1873 | 0x140037081#1899 | 0           |
| 0x14003707a#1882 | 0x140037081#1899 | 1           |
| 0x140037040#1875 | 0x140037081#1899 | 2           |
| 0x140036dff#1900 | 0x140037081#1926 | 0           |
| 0x14003707a#1909 | 0x140037081#1926 | 1           |
| 0x140037040#1902 | 0x140037081#1926 | 2           |
| 0x140036dff#1927 | 0x140037081#1953 | 0           |
| 0x14003707a#1936 | 0x140037081#1953 | 1           |
| 0x140037040#1929 | 0x140037081#1953 | 2           |
| 0x140036dff#1958 | 0x140037081#1984 | 0           |
| 0x14003707a#1967 | 0x140037081#1984 | 1           |
| 0x140037040#1960 | 0x140037081#1984 | 2           |
| 0x140036dff#1985 | 0x140037081#2011 | 0           |
| 0x14003707a#1994 | 0x140037081#2011 | 1           |
| 0x140037040#1987 | 0x140037081#2011 | 2           |
| 0x140036dff#2012 | 0x140037081#2038 | 0           |
| 0x14003707a#2021 | 0x140037081#2038 | 1           |
| 0x140037040#2014 | 0x140037081#2038 | 2           |
| 0x140036dff#2039 | 0x140037081#2065 | 0           |
| 0x14003707a#2048 | 0x140037081#2065 | 1           |
| 0x140037040#2041 | 0x140037081#2065 | 2           |
| 0x140036dff#2147 | 0x140037081#2173 | 0           |
| 0x14003707a#2156 | 0x140037081#2173 | 1           |
| 0x140037040#2149 | 0x140037081#2173 | 2           |
| 0x140037081#1206 | 0x140037085#114  | 0           |
| 0x140037085#2481 | 0x140037085#115  | 1           |
| 0x140037081#2401 | 0x140037085#116  | 1           |
| 0x140037081#1730 | 0x140037085#1676 | 0           |
| 0x140037081#1899 | 0x140037085#1883 | 0           |
| 0x140037081#1926 | 0x140037085#1910 | 0           |
| 0x140037081#1953 | 0x140037085#1937 | 0           |
| 0x140037081#1984 | 0x140037085#1968 | 0           |
| 0x140037081#2011 | 0x140037085#1995 | 0           |
| 0x140037081#2038 | 0x140037085#2022 | 0           |
| 0x140037081#2065 | 0x140037085#2049 | 0           |
| 0x140037081#2173 | 0x140037085#2157 | 0           |
| 0x140037085#114  | 0x140037085#2481 | 0           |
| 0x140037081#1206 | 0x14003708e#119  | 0           |
| 0x14003708e#2482 | 0x14003708e#120  | 1           |
| 0x14003708a#2402 | 0x14003708e#121  | 1           |
| 0x140037085#1676 | 0x14003708e#1677 | 0           |
| 0x140037085#1883 | 0x14003708e#1884 | 0           |
| 0x140037085#1910 | 0x14003708e#1911 | 0           |
| 0x140037085#1937 | 0x14003708e#1938 | 0           |
| 0x140037085#1968 | 0x14003708e#1969 | 0           |
| 0x140037085#1995 | 0x14003708e#1996 | 0           |
| 0x140037085#2022 | 0x14003708e#2023 | 0           |
| 0x140037085#2049 | 0x14003708e#2050 | 0           |
| 0x140037085#2157 | 0x14003708e#2158 | 0           |
| 0x14003708e#119  | 0x14003708e#2482 | 0           |
| 0x140037081#1206 | 0x140037097#124  | 0           |
| 0x140037097#2483 | 0x140037097#125  | 1           |
| 0x140037093#2403 | 0x140037097#126  | 1           |
| 0x14003708e#1677 | 0x140037097#1678 | 0           |
| 0x14003708e#1884 | 0x140037097#1885 | 0           |
| 0x14003708e#1911 | 0x140037097#1912 | 0           |
| 0x14003708e#1938 | 0x140037097#1939 | 0           |
| 0x14003708e#1969 | 0x140037097#1970 | 0           |
| 0x14003708e#1996 | 0x140037097#1997 | 0           |
| 0x14003708e#2023 | 0x140037097#2024 | 0           |
| 0x14003708e#2050 | 0x140037097#2051 | 0           |
| 0x14003708e#2158 | 0x140037097#2159 | 0           |
| 0x140037097#124  | 0x140037097#2483 | 0           |
| 0x140037081#1206 | 0x1400370a0#129  | 0           |
| 0x1400370a0#2484 | 0x1400370a0#130  | 1           |
| 0x14003709c#2404 | 0x1400370a0#131  | 1           |
| 0x140037097#1678 | 0x1400370a0#1679 | 0           |
| 0x140037097#1885 | 0x1400370a0#1886 | 0           |
| 0x140037097#1912 | 0x1400370a0#1913 | 0           |
| 0x140037097#1939 | 0x1400370a0#1940 | 0           |
| 0x140037097#1970 | 0x1400370a0#1971 | 0           |
| 0x140037097#1997 | 0x1400370a0#1998 | 0           |
| 0x140037097#2024 | 0x1400370a0#2025 | 0           |
| 0x140037097#2051 | 0x1400370a0#2052 | 0           |
| 0x140037097#2159 | 0x1400370a0#2160 | 0           |
| 0x1400370a0#129  | 0x1400370a0#2484 | 0           |
| 0x140037081#1206 | 0x1400370af#144  | 0           |
| 0x1400370af#2485 | 0x1400370af#145  | 1           |
| 0x1400370af#144  | 0x1400370af#2485 | 0           |
| 0x1400370ce#2486 | 0x1400370ce#189  | 1           |
| 0x1400370a0#1679 | 0x1400370ce#1680 | 0           |
| 0x1400370a5#132  | 0x1400370ce#2486 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type              |
|---------|---------|------------------------|
| 0       | param_1 | /winnt.h/LARGE_INTEGER |
| 1       | param_2 | /undefined8            |
| 2       | param_3 | /winnt.h/LARGE_INTEGER |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 1       | 0x140036dff#76   | 2           |
| 0       | 0x140036dff#2419 | 0           |
| 0       | 0x140036e0d#2475 | 0           |
| 0       | 0x140036e12#99   | 0           |
| 0       | 0x140036e12#1629 | 0           |
| 0       | 0x140036e16#102  | 0           |
| 0       | 0x140036e1a#105  | 0           |
| 0       | 0x140036e22#108  | 0           |
| 0       | 0x140036e2f#2474 | 0           |
| 0       | 0x140036e94#2467 | 0           |
| 0       | 0x140036e9d#307  | 0           |
| 0       | 0x140036e9d#1634 | 0           |
| 0       | 0x140036ea1#310  | 0           |
| 0       | 0x140036ea5#313  | 0           |
| 0       | 0x140036ead#316  | 0           |
| 2       | 0x140036ee5#2432 | 0           |
| 0       | 0x140036ee7#2460 | 0           |
| 0       | 0x140036eed#376  | 0           |
| 0       | 0x140036eed#1639 | 0           |
| 0       | 0x140036ef1#379  | 0           |
| 0       | 0x140036ef5#382  | 0           |
| 0       | 0x140036efd#385  | 0           |
| 0       | 0x140036fa6#2453 | 0           |
| 0       | 0x140036fad#566  | 0           |
| 0       | 0x140036fb6#572  | 0           |
| 0       | 0x140036fba#575  | 0           |
| 0       | 0x140036fc3#581  | 0           |
| 0       | 0x140036fc9#2441 | 0           |
| 0       | 0x140036fcf#601  | 0           |
| 0       | 0x140036fcf#1649 | 0           |
| 0       | 0x140036fd3#604  | 0           |
| 0       | 0x140036fd7#607  | 0           |
| 0       | 0x140036fdf#610  | 0           |
| 0       | 0x140037038#2466 | 0           |
| 0       | 0x140037054#2425 | 0           |
| 0       | 0x140037059#741  | 0           |
| 0       | 0x140037059#1654 | 0           |
| 0       | 0x14003705d#744  | 0           |
| 0       | 0x140037061#747  | 0           |
| 0       | 0x140037069#750  | 0           |
| 0       | 0x1400370a5#132  | 0           |

## raw_result.value.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x140036dff#76   | direct_call        | 0             |             |
| 0x140036e0b#92   | conditional_branch |               | 1           |
| 0x140036e0d#94   | memory_write       | 1             | 2           |
| 0x140036e12#1627 | memory_write       | 1             | 2           |
| 0x140036e12#1628 | memory_write       | 1             | 2           |
| 0x140036e16#104  | memory_write       | 1             | 2           |
| 0x140036e1a#107  | memory_write       | 1             | 2           |
| 0x140036e22#110  | memory_write       | 1             | 2           |
| 0x140036e2d#199  | conditional_branch |               | 1           |
| 0x140036e2f#201  | memory_write       | 1             | 2           |
| 0x140036e40#223  | conditional_branch |               | 1           |
| 0x140036e6b#250  | direct_call        | 0             |             |
| 0x140036e80#275  | conditional_branch |               | 1           |
| 0x140036e8b#289  | direct_call        | 0             |             |
| 0x140036e92#300  | conditional_branch |               | 1           |
| 0x140036e94#302  | memory_write       | 1             | 2           |
| 0x140036e9d#1632 | memory_write       | 1             | 2           |
| 0x140036e9d#1633 | memory_write       | 1             | 2           |
| 0x140036ea1#312  | memory_write       | 1             | 2           |
| 0x140036ea5#315  | memory_write       | 1             | 2           |
| 0x140036ead#318  | memory_write       | 1             | 2           |
| 0x140036ec3#334  | direct_call        | 0             |             |
| 0x140036ecb#344  | conditional_branch |               | 1           |
| 0x140036ed9#357  | conditional_branch |               | 1           |
| 0x140036ee5#373  | conditional_branch |               | 1           |
| 0x140036ee7#375  | memory_write       | 1             | 2           |
| 0x140036eed#1637 | memory_write       | 1             | 2           |
| 0x140036eed#1638 | memory_write       | 1             | 2           |
| 0x140036ef1#381  | memory_write       | 1             | 2           |
| 0x140036ef5#384  | memory_write       | 1             | 2           |
| 0x140036efd#387  | memory_write       | 1             | 2           |
| 0x140036f2b#418  | direct_call        | 0             |             |
| 0x140036f3b#432  | conditional_branch |               | 1           |
| 0x140036f56#460  | conditional_branch |               | 1           |
| 0x140036f6a#485  | conditional_branch |               | 1           |
| 0x140036f83#507  | direct_call        | 0             |             |
| 0x140036f8b#517  | conditional_branch |               | 1           |
| 0x140036f93#533  | conditional_branch |               | 1           |
| 0x140036fa0#556  | conditional_branch |               | 1           |
| 0x140036fa6#562  | memory_write       | 1             | 2           |
| 0x140036fad#568  | memory_write       | 1             | 2           |
| 0x140036fb6#574  | memory_write       | 1             | 2           |
| 0x140036fba#577  | memory_write       | 1             | 2           |
| 0x140036fc3#583  | memory_write       | 1             | 2           |
| 0x140036fc9#596  | memory_write       | 1             | 2           |
| 0x140036fcf#1647 | memory_write       | 1             | 2           |
| 0x140036fcf#1648 | memory_write       | 1             | 2           |
| 0x140036fd3#606  | memory_write       | 1             | 2           |
| 0x140036fd7#609  | memory_write       | 1             | 2           |
| 0x140036fdf#612  | memory_write       | 1             | 2           |
| 0x140036fec#627  | conditional_branch |               | 1           |
| 0x140036ffd#649  | conditional_branch |               | 1           |
| 0x140036fff#651  | memory_read        | 1             |             |
| 0x14003700e#683  | conditional_branch |               | 1           |
| 0x140037017#696  | direct_call        | 0             |             |
| 0x140037036#699  | indirect_call      | 0             |             |
| 0x140037038#701  | memory_write       | 1             | 2           |
| 0x140037040#706  | direct_call        | 0             |             |
| 0x140037050#733  | conditional_branch |               | 1           |
| 0x140037054#736  | memory_write       | 1             | 2           |
| 0x140037059#1652 | memory_write       | 1             | 2           |
| 0x140037059#1653 | memory_write       | 1             | 2           |
| 0x14003705d#746  | memory_write       | 1             | 2           |
| 0x140037061#749  | memory_write       | 1             | 2           |
| 0x140037069#752  | memory_write       | 1             | 2           |
| 0x140037075#767  | conditional_branch |               | 1           |
| 0x14003707a#323  | memory_write       | 1             | 2           |
| 0x14003707a#324  | direct_call        | 0             |             |
| 0x140037085#115  | memory_write       | 1             | 2           |
| 0x140037085#116  | direct_call        | 0             |             |
| 0x14003708e#120  | memory_write       | 1             | 2           |
| 0x14003708e#121  | direct_call        | 0             |             |
| 0x140037097#125  | memory_write       | 1             | 2           |
| 0x140037097#126  | direct_call        | 0             |             |
| 0x1400370a0#130  | memory_write       | 1             | 2           |
| 0x1400370a0#131  | direct_call        | 0             |             |
| 0x1400370af#145  | memory_write       | 1             | 2           |

## raw_result.value.native_value_flow.truncated

false

## raw_result.value.native_value_flow.omitted_operations_lower_bound

0

## raw_result.value.native_value_flow.known_omitted_inputs

0

## raw_result.value.native_value_flow.known_omitted_edges

0

## raw_result.value.native_value_flow.limitations

High p-code is decompiler-derived, not original source or runtime behavior. is_dead preserves the Java AST flag; decoded block members can retain that flag, so block_membership separately reports actual syntax-tree membership.,Def-use links do not cross function boundaries and may omit memory aliasing, call side effects, or unresolved indirect flow.,Memory read/write effects include stack and temporary memory operations; they do not identify persistent state or business meaning.,Operation, input, and def-use limits can truncate large functions; inspect truncation, omitted lower bounds, and known omitted counts before drawing conclusions.,Known omitted-edge counts cover links omitted from retained operations; omitted operations may contain additional uncounted links.

## raw_result.value.limitations

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.

## raw_result.limitations



## normalized_result.procedure.address

0x140036dc0

## normalized_result.procedure.name

FUN_140036dc0

## normalized_result.procedure.classification

| Key          | Value                   |
|--------------|-------------------------|
| external     | false                   |
| thunk        | false                   |
| thunk_target | null                    |
| provenance   | ghidra-function-manager |

## normalized_result.procedure.body.available

true

## normalized_result.procedure.body.provenance

ghidra-function-body-address-set

## normalized_result.procedure.body.ranges

| start       | end         |
|-------------|-------------|
| 0x140036dc0 | 0x1400370ce |

## normalized_result.procedure.body.total_bytes

783

## normalized_result.procedure.body.span_bytes

783

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_140036dc0()

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_100 @ Stack[-0x100]:8    | ghidra-function-database |
| undefined8 local_108 @ Stack[-0x108]:8    | ghidra-function-database |
| undefined8 local_118 @ Stack[-0x118]:8    | ghidra-function-database |
| undefined4 local_120 @ Stack[-0x120]:4    | ghidra-function-database |
| undefined8 local_128 @ Stack[-0x128]:8    | ghidra-function-database |
| undefined8 local_48 @ Stack[-0x48]:8      | ghidra-function-database |
| undefined local_68 @ Stack[-0x68]:1       | ghidra-function-database |
| undefined local_80 @ Stack[-0x80]:1       | ghidra-function-database |
| undefined local_a0 @ Stack[-0xa0]:1       | ghidra-function-database |
| undefined8 local_a8 @ Stack[-0xa8]:8      | ghidra-function-database |
| undefined8 local_c0 @ Stack[-0xc0]:8      | ghidra-function-database |
| undefined4 local_c8 @ Stack[-0xc8]:4      | ghidra-function-database |
| undefined8 local_d0 @ Stack[-0xd0]:8      | ghidra-function-database |
| undefined8 local_d8 @ Stack[-0xd8]:8      | ghidra-function-database |
| undefined1[16] local_e8 @ Stack[-0xe8]:16 | ghidra-function-database |
| undefined4 local_f0 @ Stack[-0xf0]:4      | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8    | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8    | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LARGE_INTEGER FUN_140036dc0(LARGE_INTEGER param_1,undefined8 param_2,LARGE_INTEGER param_3)

{
  code *pcVar1;
  char cVar2;
  BOOL BVar3;
  DWORD DVar4;
  HANDLE hFile;
  undefined4 uVar5;
  LPCWSTR ***lpFileName;
  undefined8 ****ppppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStackY_148 [8];
  undefined1 auStackY_140 [24];
  HANDLE local_108;
  LARGE_INTEGER local_100 [2];
  undefined4 local_f0;
  undefined8 ***local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  int local_c8 [2];
  LPCWSTR **local_c0 [3];
  ulonglong local_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  puVar7 = auStackY_148;
  puVar8 = auStackY_148;
  puVar9 = auStackY_148;
  local_48 = DAT_1404c7ac0 ^ (ulonglong)auStackY_148;
  uVar10 = 0;
  local_100[0] = param_1;
  FUN_1400348d0(local_c8,param_2,0);
  if (local_c8[0] == 1) {
    *(undefined4 *)param_1 = 1;
  }
  else {
    if (local_c8[0] == 0) {
      lpFileName = local_c0;
      if (7 < local_a8) {
        lpFileName = (LPCWSTR ***)local_c0[0];
      }
      hFile = CreateFileW((LPCWSTR)lpFileName,0x80000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x8200000,
                          (HANDLE)0x0);
      local_108 = hFile;
      if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
        cVar2 = FUN_140034ec0(hFile,0);
        if (cVar2 == '\0') {
          *(undefined4 *)param_1 = 2;
        }
        else {
          local_100[0].QuadPart = 0;
          BVar3 = GetFileSizeEx(hFile,local_100);
          puVar7 = auStackY_148;
          if ((BVar3 != 0) && (puVar7 = auStackY_148, -1 < local_100[0].QuadPart)) {
            if ((ulonglong)param_3 < (ulonglong)local_100[0]) {
              *(undefined4 *)param_1 = 4;
              *(undefined8 *)(param_1.QuadPart + 8) = 0;
              *(undefined8 *)(param_1.QuadPart + 0x10) = 0;
              *(undefined8 *)(param_1.QuadPart + 0x18) = 0;
              *(undefined8 *)(param_1.QuadPart + 0x20) = 0xf;
              *(undefined1 *)(param_1.QuadPart + 8) = 0;
              puVar8 = auStackY_148;
            }
            else {
              local_f0 = 0;
              uStack_e0 = 0;
              local_d8 = 0;
              local_d0 = 0xf;
              local_e8 = (undefined8 ****)0x0;
              FUN_1400399e0(&local_e8,local_100[0].QuadPart,0);
              if (local_d8 != 0) {
                do {
                  DVar4 = (DWORD)(local_d8 - uVar10);
                  if (0xffffffff < local_d8 - uVar10) {
                    DVar4 = 0xffffffff;
                  }
                  local_108 = (HANDLE)((ulonglong)local_108 & 0xffffffff00000000);
                  ppppuVar6 = &local_e8;
                  if (0xf < local_d0) {
                    ppppuVar6 = (undefined8 ****)local_e8;
                  }
                  BVar3 = ReadFile(hFile,(LPVOID)((longlong)ppppuVar6 + uVar10),DVar4,
                                   (LPDWORD)&local_108,(LPOVERLAPPED)0x0);
                  if (BVar3 == 0) {
LAB_140036fc9:
                    *(undefined4 *)param_1 = 3;
                    *(undefined8 *)(param_1.QuadPart + 8) = 0;
                    *(undefined8 *)(param_1.QuadPart + 0x10) = 0;
                    *(undefined8 *)(param_1.QuadPart + 0x18) = 0;
                    *(undefined8 *)(param_1.QuadPart + 0x20) = 0xf;
                    *(undefined1 *)(param_1.QuadPart + 8) = 0;
                    if (local_d0 < 0x10) goto LAB_14003701c;
                    uVar10 = local_d0 + 1;
                    ppppuVar6 = (undefined8 ****)local_e8;
                    if (0xfff < uVar10) {
                      ppppuVar6 = (undefined8 ****)local_e8[-1];
                      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)ppppuVar6))) {
                        pcVar1 = (code *)swi(0x29);
                        (*pcVar1)(5);
                        puVar7 = auStackY_140;
                        goto LAB_140037038;
                      }
                      uVar10 = local_d0 + 0x28;
                    }
                    thunk_FUN_140327e20(ppppuVar6,uVar10);
                    goto LAB_14003701c;
                  }
                  if ((DWORD)local_108 != DVar4) goto LAB_140036fc9;
                  uVar10 = uVar10 + ((ulonglong)local_108 & 0xffffffff);
                } while (uVar10 < local_d8);
              }
              *(undefined4 *)param_1 = local_f0;
              *(undefined8 ****)(param_1.QuadPart + 8) = local_e8;
              *(undefined8 *)(param_1.QuadPart + 0x10) = uStack_e0;
              *(ulonglong *)(param_1.QuadPart + 0x18) = local_d8;
              *(ulonglong *)(param_1.QuadPart + 0x20) = local_d0;
LAB_14003701c:
              local_d8 = 0;
              local_d0 = 0xf;
              local_e8 = (undefined8 ***)((ulonglong)local_e8 & 0xffffffffffffff00);
              puVar8 = auStackY_148;
            }
            goto LAB_140037077;
          }
LAB_140037038:
          *(undefined4 *)param_1 = 3;
        }
        *(undefined8 *)(param_1.QuadPart + 8) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x10) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x18) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x20) = 0xf;
        *(undefined1 *)(param_1.QuadPart + 8) = 0;
        puVar8 = puVar7;
      }
      else {
        DVar4 = GetLastError();
        uVar5 = 1;
        if (1 < DVar4 - 2) {
          uVar5 = 3;
        }
        *(undefined4 *)param_1 = uVar5;
        *(undefined8 *)(param_1.QuadPart + 8) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x10) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x18) = 0;
        *(undefined8 *)(param_1.QuadPart + 0x20) = 0xf;
        *(undefined1 *)(param_1.QuadPart + 8) = 0;
        if (0xfffffffffffffffd < (longlong)hFile - 1U) goto LAB_140037081;
      }
LAB_140037077:
      *(undefined8 *)(puVar8 + -8) = 0x140037080;
      CloseHandle(hFile);
      puVar9 = puVar8;
      goto LAB_140037081;
    }
    *(undefined4 *)param_1 = 2;
  }
  *(undefined8 *)(param_1.QuadPart + 8) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x10) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x18) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x20) = 0xf;
  *(undefined1 *)(param_1.QuadPart + 8) = 0;
  puVar9 = auStackY_148;
LAB_140037081:
  *(undefined8 *)(puVar9 + -8) = 0x14003708a;
  FUN_140038810(local_68);
  *(undefined8 *)(puVar9 + -8) = 0x140037093;
  FUN_1400388d0(local_80);
  *(undefined8 *)(puVar9 + -8) = 0x14003709c;
  FUN_1400055b0(local_a0);
  *(undefined8 *)(puVar9 + -8) = 0x1400370a5;
  FUN_1400055b0(local_c0);
  *(undefined8 *)(puVar9 + -8) = 0x1400370b4;
  return (LARGE_INTEGER)param_1.s;
}



## normalized_result.assembly

0x140036dc0: MOV qword ptr [RSP + 0x18], RBX,0x140036dc5: PUSH RBP,0x140036dc6: PUSH RSI,0x140036dc7: PUSH RDI,0x140036dc8: PUSH R12,0x140036dca: PUSH R13,0x140036dcc: PUSH R14,0x140036dce: PUSH R15,0x140036dd0: LEA RBP, [RSP + -0x10],0x140036dd5: SUB RSP, 0x110,0x140036ddc: MOV RAX, qword ptr [0x1404c7ac0],0x140036de3: XOR RAX, RSP,0x140036de6: MOV qword ptr [RBP], RAX,0x140036dea: MOV RSI, R8,0x140036ded: MOV RDI, RCX,0x140036df0: MOV qword ptr [RSP + 0x48], RCX,0x140036df5: XOR R15D, R15D,0x140036df8: XOR R8D, R8D,0x140036dfb: LEA RCX, [RBP + -0x80],0x140036dff: CALL 0x1400348d0,0x140036e04: NOP,0x140036e05: MOV EAX, dword ptr [RBP + -0x80],0x140036e08: CMP EAX, 0x1,0x140036e0b: JNZ 0x140036e2b,0x140036e0d: MOV dword ptr [RDI], EAX,0x140036e0f: XORPS XMM0, XMM0,0x140036e12: MOVUPS xmmword ptr [RDI + 0x8], XMM0,0x140036e16: MOV qword ptr [RDI + 0x18], R15,0x140036e1a: MOV qword ptr [RDI + 0x20], 0xf,0x140036e22: MOV byte ptr [RDI + 0x8], 0x0,0x140036e26: JMP 0x140037081,0x140036e2b: TEST EAX, EAX,0x140036e2d: JZ 0x140036e37,0x140036e2f: MOV dword ptr [RDI], 0x2,0x140036e35: JMP 0x140036e0f,0x140036e37: LEA RCX, [RBP + -0x78],0x140036e3b: CMP qword ptr [RBP + -0x60], 0x7,0x140036e40: CMOVA RCX, qword ptr [RBP + -0x78],0x140036e45: MOV qword ptr [RSP + 0x30], R15,0x140036e4a: MOV dword ptr [RSP + 0x28], 0x8200000,0x140036e52: MOV R12D, 0x3,0x140036e58: MOV dword ptr [RSP + 0x20], R12D,0x140036e5d: XOR R9D, R9D,0x140036e60: MOV EDX, 0x80000000,0x140036e65: MOV R8D, 0x7,0x140036e6b: CALL qword ptr [0x14037a9d8],0x140036e71: MOV RBX, RAX,0x140036e74: MOV qword ptr [RSP + 0x40], RAX,0x140036e79: DEC RAX,0x140036e7c: CMP RAX, -0x3,0x140036e80: JA 0x140037040,0x140036e86: XOR EDX, EDX,0x140036e88: MOV RCX, RBX,0x140036e8b: CALL 0x140034ec0,0x140036e90: TEST AL, AL,0x140036e92: JNZ 0x140036eb6,0x140036e94: MOV dword ptr [RDI], 0x2,0x140036e9a: XORPS XMM0, XMM0,0x140036e9d: MOVUPS xmmword ptr [RDI + 0x8], XMM0,0x140036ea1: MOV qword ptr [RDI + 0x18], R15,0x140036ea5: MOV qword ptr [RDI + 0x20], 0xf,0x140036ead: MOV byte ptr [RDI + 0x8], 0x0,0x140036eb1: JMP 0x140037077,0x140036eb6: MOV qword ptr [RSP + 0x48], R15,0x140036ebb: LEA RDX, [RSP + 0x48],0x140036ec0: MOV RCX, RBX,0x140036ec3: CALL qword ptr [0x14037a7f0],0x140036ec9: TEST EAX, EAX,0x140036ecb: JZ 0x140037038,0x140036ed1: MOV RDX, qword ptr [RSP + 0x48],0x140036ed6: TEST RDX, RDX,0x140036ed9: JS 0x140037038,0x140036edf: XORPS XMM0, XMM0,0x140036ee2: CMP RDX, RSI,0x140036ee5: JBE 0x140036f06,0x140036ee7: MOV dword ptr [RDI], 0x4,0x140036eed: MOVUPS xmmword ptr [RDI + 0x8], XMM0,0x140036ef1: MOV qword ptr [RDI + 0x18], R15,0x140036ef5: MOV qword ptr [RDI + 0x20], 0xf,0x140036efd: MOV byte ptr [RDI + 0x8], 0x0,0x140036f01: JMP 0x140037077,0x140036f06: MOV dword ptr [RSP + 0x58], R15D,0x140036f0b: MOVUPS xmmword ptr [RSP + 0x60], XMM0,0x140036f10: MOV qword ptr [RSP + 0x70], R15,0x140036f15: MOV qword ptr [RSP + 0x78], 0xf,0x140036f1e: MOV byte ptr [RSP + 0x60], 0x0,0x140036f23: XOR R8D, R8D,0x140036f26: LEA RCX, [RSP + 0x60],0x140036f2b: CALL 0x1400399e0,0x140036f30: MOV R14, R15,0x140036f33: MOV RSI, qword ptr [RSP + 0x70],0x140036f38: TEST RSI, RSI,0x140036f3b: JZ 0x140036fa2,0x140036f3d: MOV R13D, 0xffffffff,0x140036f43: NOP dword ptr [RAX],0x140036f47: NOP word ptr [RAX + RAX*0x1],0x140036f50: SUB RSI, R14,0x140036f53: CMP RSI, R13,0x140036f56: CMOVA ESI, R13D,0x140036f5a: MOV dword ptr [RSP + 0x40], R15D,0x140036f5f: LEA RDX, [RSP + 0x60],0x140036f64: CMP qword ptr [RSP + 0x78], 0xf,0x140036f6a: CMOVA RDX, qword ptr [RSP + 0x60],0x140036f70: ADD RDX, R14,0x140036f73: MOV qword ptr [RSP + 0x20], R15,0x140036f78: LEA R9, [RSP + 0x40],0x140036f7d: MOV R8D, ESI,0x140036f80: MOV RCX, RBX,0x140036f83: CALL qword ptr [0x14037a7e8],0x140036f89: TEST EAX, EAX,0x140036f8b: JZ 0x140036fc9,0x140036f8d: MOV EAX, dword ptr [RSP + 0x40],0x140036f91: CMP EAX, ESI,0x140036f93: JNZ 0x140036fc9,0x140036f95: ADD R14, RAX,0x140036f98: MOV RSI, qword ptr [RSP + 0x70],0x140036f9d: CMP R14, RSI,0x140036fa0: JC 0x140036f50,0x140036fa2: MOV EAX, dword ptr [RSP + 0x58],0x140036fa6: MOV dword ptr [RDI], EAX,0x140036fa8: MOV RAX, qword ptr [RSP + 0x60],0x140036fad: MOV qword ptr [RDI + 0x8], RAX,0x140036fb1: MOV RAX, qword ptr [RSP + 0x68],0x140036fb6: MOV qword ptr [RDI + 0x10], RAX,0x140036fba: MOV qword ptr [RDI + 0x18], RSI,0x140036fbe: MOV RAX, qword ptr [RSP + 0x78],0x140036fc3: MOV qword ptr [RDI + 0x20], RAX,0x140036fc7: JMP 0x14003701c,0x140036fc9: MOV dword ptr [RDI], R12D,0x140036fcc: XORPS XMM0, XMM0,0x140036fcf: MOVUPS xmmword ptr [RDI + 0x8], XMM0,0x140036fd3: MOV qword ptr [RDI + 0x18], R15,0x140036fd7: MOV qword ptr [RDI + 0x20], 0xf,0x140036fdf: MOV byte ptr [RDI + 0x8], 0x0,0x140036fe3: MOV RDX, qword ptr [RSP + 0x78],0x140036fe8: CMP RDX, 0xf,0x140036fec: JBE 0x14003701c,0x140036fee: INC RDX,0x140036ff1: MOV RCX, qword ptr [RSP + 0x60],0x140036ff6: CMP RDX, 0x1000,0x140036ffd: JC 0x140037017,0x140036fff: MOV RAX, qword ptr [RCX + -0x8],0x140037003: SUB RCX, RAX,0x140037006: SUB RCX, 0x8,0x14003700a: CMP RCX, 0x1f,0x14003700e: JA 0x140037031,0x140037010: ADD RDX, 0x27,0x140037014: MOV RCX, RAX,0x140037017: CALL 0x1403272f0,0x14003701c: MOV qword ptr [RSP + 0x70], R15,0x140037021: MOV qword ptr [RSP + 0x78], 0xf,0x14003702a: MOV byte ptr [RSP + 0x60], 0x0,0x14003702f: JMP 0x140037077,0x140037031: MOV ECX, 0x5,0x140037036: INT 0x29,0x140037038: MOV dword ptr [RDI], R12D,0x14003703b: JMP 0x140036e9a,0x140037040: CALL qword ptr [0x14037a908],0x140037046: SUB EAX, 0x2,0x140037049: MOV ECX, 0x1,0x14003704e: CMP EAX, ECX,0x140037050: CMOVA ECX, R12D,0x140037054: MOV dword ptr [RDI], ECX,0x140037056: XORPS XMM0, XMM0,0x140037059: MOVUPS xmmword ptr [RDI + 0x8], XMM0,0x14003705d: MOV qword ptr [RDI + 0x18], R15,0x140037061: MOV qword ptr [RDI + 0x20], 0xf,0x140037069: MOV byte ptr [RDI + 0x8], 0x0,0x14003706d: LEA RAX, [RBX + -0x1],0x140037071: CMP RAX, -0x3,0x140037075: JA 0x140037081,0x140037077: MOV RCX, RBX,0x14003707a: CALL qword ptr [0x14037a900],0x140037080: NOP,0x140037081: LEA RCX, [RBP + -0x20],0x140037085: CALL 0x140038810,0x14003708a: LEA RCX, [RBP + -0x38],0x14003708e: CALL 0x1400388d0,0x140037093: LEA RCX, [RBP + -0x58],0x140037097: CALL 0x1400055b0,0x14003709c: LEA RCX, [RBP + -0x78],0x1400370a0: CALL 0x1400055b0,0x1400370a5: MOV RAX, RDI,0x1400370a8: MOV RCX, qword ptr [RBP],0x1400370ac: XOR RCX, RSP,0x1400370af: CALL 0x140327740,0x1400370b4: MOV RBX, qword ptr [RSP + 0x160],0x1400370bc: ADD RSP, 0x110,0x1400370c3: POP R15,0x1400370c5: POP R14,0x1400370c7: POP R13,0x1400370c9: POP R12,0x1400370cb: POP RDI,0x1400370cc: POP RSI,0x1400370cd: POP RBP,0x1400370ce: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140042a30 | FUN_140042a30 | [object Object] | [object Object] |
| 0x140043680 | FUN_140043680 | [object Object] | [object Object] |
| 0x1400a94c0 | FUN_1400a94c0 | [object Object] | [object Object] |
| 0x1400ec590 | FUN_1400ec590 | [object Object] | [object Object] |
| 0x1400ed060 | FUN_1400ed060 | [object Object] | [object Object] |
| 0x1401b5c40 | FUN_1401b5c40 | [object Object] | [object Object] |
| 0x1401f4c80 | FUN_1401f4c80 | [object Object] | [object Object] |
| 0x1401f4e20 | FUN_1401f4e20 | [object Object] | [object Object] |
| 0x1401f4ef0 | FUN_1401f4ef0 | [object Object] | [object Object] |

## normalized_result.callees

| address        | name                        | classification  | body            |
|----------------|-----------------------------|-----------------|-----------------|
| EXTERNAL:0x262 | KERNEL32.DLL::ReadFile      | [object Object] | [object Object] |
| EXTERNAL:0x263 | KERNEL32.DLL::GetFileSizeEx | [object Object] | [object Object] |
| EXTERNAL:0x285 | KERNEL32.DLL::CloseHandle   | [object Object] | [object Object] |
| EXTERNAL:0x286 | KERNEL32.DLL::GetLastError  | [object Object] | [object Object] |
| EXTERNAL:0x2a0 | KERNEL32.DLL::CreateFileW   | [object Object] | [object Object] |
| 0x1400055b0    | FUN_1400055b0               | [object Object] | [object Object] |
| 0x1400348d0    | FUN_1400348d0               | [object Object] | [object Object] |
| 0x140034ec0    | FUN_140034ec0               | [object Object] | [object Object] |
| 0x140038810    | FUN_140038810               | [object Object] | [object Object] |
| 0x1400388d0    | FUN_1400388d0               | [object Object] | [object Object] |
| 0x1400399e0    | FUN_1400399e0               | [object Object] | [object Object] |
| 0x1403272f0    | thunk_FUN_140327e20         | [object Object] | [object Object] |
| 0x140327740    | __security_check_cookie     | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140042c3c    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x140044015    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400a9750    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400ec999    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400ed694    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401b5eb6    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cd5    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e6c    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f510d    | 0x140036dc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404d25b0    | 0x140036dc0    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x140036dc0    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x140036dd0    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x140036ddc    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x140036de6    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x140036df0    | stack:0xffffffffffffff00 | [object Object]  |                  | [object Object] |
| 0x140036dfb    | stack:0xffffffffffffff38 | [object Object]  |                  | [object Object] |
| 0x140036dff    | 0x1400348d0              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e05    | stack:0xffffffffffffff38 | [object Object]  |                  | [object Object] |
| 0x140036e0b    | 0x140036e2b              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e26    | 0x140037081              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e2d    | 0x140036e37              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e35    | 0x140036e0f              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e37    | stack:0xffffffffffffff40 | [object Object]  |                  | [object Object] |
| 0x140036e3b    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x140036e40    | stack:0xffffffffffffff40 | [object Object]  |                  | [object Object] |
| 0x140036e45    | stack:0xfffffffffffffee8 | [object Object]  |                  | [object Object] |
| 0x140036e4a    | stack:0xfffffffffffffee0 | [object Object]  |                  | [object Object] |
| 0x140036e58    | stack:0xfffffffffffffed8 | [object Object]  |                  | [object Object] |
| 0x140036e6b    | EXTERNAL:0x2a0           | [object Object]  | [object Object]  | [object Object] |
| 0x140036e6b    | 0x14037a9d8              | [object Object]  |                  | [object Object] |
| 0x140036e74    | stack:0xfffffffffffffef8 | [object Object]  |                  | [object Object] |
| 0x140036e80    | 0x140037040              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e8b    | 0x140034ec0              | [object Object]  | [object Object]  | [object Object] |
| 0x140036e92    | 0x140036eb6              | [object Object]  | [object Object]  | [object Object] |
| 0x140036eb1    | 0x140037077              | [object Object]  | [object Object]  | [object Object] |
| 0x140036eb6    | stack:0xffffffffffffff00 | [object Object]  |                  | [object Object] |
| 0x140036ebb    | stack:0xffffffffffffff00 | [object Object]  |                  | [object Object] |
| 0x140036ec3    | EXTERNAL:0x263           | [object Object]  | [object Object]  | [object Object] |
| 0x140036ec3    | 0x14037a7f0              | [object Object]  |                  | [object Object] |
| 0x140036ecb    | 0x140037038              | [object Object]  | [object Object]  | [object Object] |
| 0x140036ed1    | stack:0xffffffffffffff00 | [object Object]  |                  | [object Object] |
| 0x140036ed9    | 0x140037038              | [object Object]  | [object Object]  | [object Object] |
| 0x140036ee5    | 0x140036f06              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f01    | 0x140037077              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f06    | stack:0xffffffffffffff10 | [object Object]  |                  | [object Object] |
| 0x140036f0b    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036f10    | stack:0xffffffffffffff28 | [object Object]  |                  | [object Object] |
| 0x140036f15    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x140036f1e    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036f26    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036f2b    | 0x1400399e0              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f33    | stack:0xffffffffffffff28 | [object Object]  |                  | [object Object] |
| 0x140036f3b    | 0x140036fa2              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f5a    | stack:0xfffffffffffffef8 | [object Object]  |                  | [object Object] |
| 0x140036f5f    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036f64    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x140036f6a    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036f73    | stack:0xfffffffffffffed8 | [object Object]  |                  | [object Object] |
| 0x140036f78    | stack:0xfffffffffffffef8 | [object Object]  |                  | [object Object] |
| 0x140036f83    | EXTERNAL:0x262           | [object Object]  | [object Object]  | [object Object] |
| 0x140036f83    | 0x14037a7e8              | [object Object]  |                  | [object Object] |
| 0x140036f8b    | 0x140036fc9              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f8d    | stack:0xfffffffffffffef8 | [object Object]  |                  | [object Object] |
| 0x140036f93    | 0x140036fc9              | [object Object]  | [object Object]  | [object Object] |
| 0x140036f98    | stack:0xffffffffffffff28 | [object Object]  |                  | [object Object] |
| 0x140036fa0    | 0x140036f50              | [object Object]  | [object Object]  | [object Object] |
| 0x140036fa2    | stack:0xffffffffffffff10 | [object Object]  |                  | [object Object] |
| 0x140036fa8    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036fb1    | stack:0xffffffffffffff20 | [object Object]  |                  | [object Object] |
| 0x140036fbe    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x140036fc7    | 0x14003701c              | [object Object]  | [object Object]  | [object Object] |
| 0x140036fe3    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x140036fec    | 0x14003701c              | [object Object]  | [object Object]  | [object Object] |
| 0x140036ff1    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x140036ffd    | 0x140037017              | [object Object]  | [object Object]  | [object Object] |
| 0x14003700e    | 0x140037031              | [object Object]  | [object Object]  | [object Object] |
| 0x140037017    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14003701c    | stack:0xffffffffffffff28 | [object Object]  |                  | [object Object] |
| 0x140037021    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x14003702a    | stack:0xffffffffffffff18 | [object Object]  |                  | [object Object] |
| 0x14003702f    | 0x140037077              | [object Object]  | [object Object]  | [object Object] |
| 0x14003703b    | 0x140036e9a              | [object Object]  | [object Object]  | [object Object] |
| 0x140037040    | EXTERNAL:0x286           | [object Object]  | [object Object]  | [object Object] |
| 0x140037040    | 0x14037a908              | [object Object]  |                  | [object Object] |
| 0x140037075    | 0x140037081              | [object Object]  | [object Object]  | [object Object] |
| 0x14003707a    | EXTERNAL:0x285           | [object Object]  | [object Object]  | [object Object] |
| 0x14003707a    | 0x14037a900              | [object Object]  |                  | [object Object] |
| 0x140037081    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140037085    | 0x140038810              | [object Object]  | [object Object]  | [object Object] |
| 0x14003708a    | stack:0xffffffffffffff80 | [object Object]  |                  | [object Object] |
| 0x14003708e    | 0x1400388d0              | [object Object]  | [object Object]  | [object Object] |
| 0x140037093    | stack:0xffffffffffffff60 | [object Object]  |                  | [object Object] |
| 0x140037097    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x14003709c    | stack:0xffffffffffffff40 | [object Object]  |                  | [object Object] |
| 0x1400370a0    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1400370a8    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1400370af    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1400370b4    | stack:0x10               | [object Object]  |                  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address        | value                       | source_address |
|----------------|-----------------------------|----------------|
| 0x1400055b0    | FUN_1400055b0               | 0x140037097    |
| 0x1400055b0    | FUN_1400055b0               | 0x1400370a0    |
| 0x1400348d0    | FUN_1400348d0               | 0x140036dff    |
| 0x140034ec0    | FUN_140034ec0               | 0x140036e8b    |
| 0x140036e0f    | LAB_140036e0f               | 0x140036e35    |
| 0x140036e2b    | LAB_140036e2b               | 0x140036e0b    |
| 0x140036e37    | LAB_140036e37               | 0x140036e2d    |
| 0x140036e9a    | LAB_140036e9a               | 0x14003703b    |
| 0x140036eb6    | LAB_140036eb6               | 0x140036e92    |
| 0x140036f06    | LAB_140036f06               | 0x140036ee5    |
| 0x140036f50    | LAB_140036f50               | 0x140036fa0    |
| 0x140036fa2    | LAB_140036fa2               | 0x140036f3b    |
| 0x140036fc9    | LAB_140036fc9               | 0x140036f8b    |
| 0x140036fc9    | LAB_140036fc9               | 0x140036f93    |
| 0x140037017    | LAB_140037017               | 0x140036ffd    |
| 0x14003701c    | LAB_14003701c               | 0x140036fc7    |
| 0x14003701c    | LAB_14003701c               | 0x140036fec    |
| 0x140037031    | LAB_140037031               | 0x14003700e    |
| 0x140037038    | LAB_140037038               | 0x140036ecb    |
| 0x140037038    | LAB_140037038               | 0x140036ed9    |
| 0x140037040    | LAB_140037040               | 0x140036e80    |
| 0x140037077    | LAB_140037077               | 0x140036eb1    |
| 0x140037077    | LAB_140037077               | 0x140036f01    |
| 0x140037077    | LAB_140037077               | 0x14003702f    |
| 0x140037081    | LAB_140037081               | 0x140036e26    |
| 0x140037081    | LAB_140037081               | 0x140037075    |
| 0x140038810    | FUN_140038810               | 0x140037085    |
| 0x1400388d0    | FUN_1400388d0               | 0x14003708e    |
| 0x1400399e0    | FUN_1400399e0               | 0x140036f2b    |
| 0x1403272f0    | thunk_FUN_140327e20         | 0x140037017    |
| 0x140327740    | __security_check_cookie     | 0x1400370af    |
| 0x14037a7e8    | PTR_ReadFile_14037a7e8      | 0x140036f83    |
| 0x14037a7f0    | PTR_GetFileSizeEx_14037a7f0 | 0x140036ec3    |
| 0x14037a900    | PTR_CloseHandle_14037a900   | 0x14003707a    |
| 0x14037a908    | PTR_GetLastError_14037a908  | 0x140037040    |
| 0x14037a9d8    | PTR_CreateFileW_14037a9d8   | 0x140036e6b    |
| 0x1404c7ac0    | DAT_1404c7ac0               | 0x140036ddc    |
| EXTERNAL:0x262 | KERNEL32.DLL::ReadFile      | 0x140036f83    |
| EXTERNAL:0x263 | KERNEL32.DLL::GetFileSizeEx | 0x140036ec3    |
| EXTERNAL:0x285 | KERNEL32.DLL::CloseHandle   | 0x14003707a    |
| EXTERNAL:0x286 | KERNEL32.DLL::GetLastError  | 0x140037040    |
| EXTERNAL:0x2a0 | KERNEL32.DLL::CreateFileW   | 0x140036e6b    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140036dc0 | 0x140036e0d | 0x140036e0d,0x140036e2b |
| 0x140036e0d | 0x140036e0f | 0x140036e0f             |
| 0x140036e0f | 0x140036e2b | 0x140037081             |
| 0x140036e2b | 0x140036e2f | 0x140036e2f,0x140036e37 |
| 0x140036e2f | 0x140036e37 | 0x140036e0f             |
| 0x140036e37 | 0x140036e86 | 0x140036e86,0x140037040 |
| 0x140036e86 | 0x140036e94 | 0x140036e94,0x140036eb6 |
| 0x140036e94 | 0x140036e9a | 0x140036e9a             |
| 0x140036e9a | 0x140036eb6 | 0x140037077             |
| 0x140036eb6 | 0x140036ed1 | 0x140036ed1,0x140037038 |
| 0x140036ed1 | 0x140036edf | 0x140036edf,0x140037038 |
| 0x140036edf | 0x140036ee7 | 0x140036ee7,0x140036f06 |
| 0x140036ee7 | 0x140036f06 | 0x140037077             |
| 0x140036f06 | 0x140036f3d | 0x140036f3d,0x140036fa2 |
| 0x140036f3d | 0x140036f50 | 0x140036f50             |
| 0x140036f50 | 0x140036f8d | 0x140036f8d,0x140036fc9 |
| 0x140036f8d | 0x140036f95 | 0x140036f95,0x140036fc9 |
| 0x140036f95 | 0x140036fa2 | 0x140036f50,0x140036fa2 |
| 0x140036fa2 | 0x140036fc9 | 0x14003701c             |
| 0x140036fc9 | 0x140036fee | 0x140036fee,0x14003701c |
| 0x140036fee | 0x140036fff | 0x140036fff,0x140037017 |
| 0x140036fff | 0x140037010 | 0x140037010,0x140037031 |
| 0x140037010 | 0x140037017 | 0x140037017             |
| 0x140037017 | 0x14003701c | 0x14003701c             |
| 0x14003701c | 0x140037031 | 0x140037077             |
| 0x140037031 | 0x140037038 | 0x140037038             |
| 0x140037038 | 0x140037040 | 0x140036e9a             |
| 0x140037040 | 0x140037077 | 0x140037077,0x140037081 |
| 0x140037077 | 0x140037081 | 0x140037081             |
| 0x140037081 | 0x1400370cf |                         |

## normalized_result.native_api.available

true

## normalized_result.native_api.provenance

ghidra-high-function

## normalized_result.native_api.signature_source

default

## normalized_result.native_api.calling_convention

__fastcall

## normalized_result.native_api.return_type.ordinal

null

## normalized_result.native_api.return_type.name

null

## normalized_result.native_api.return_type.data_type

LARGE_INTEGER

## normalized_result.native_api.return_type.size_bytes

8

## normalized_result.native_api.return_type.storage

RAX:8

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                          |
|------------------|-------------------------|-------------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.           |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type LARGE_INTEGER. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters

| ordinal | name    | data_type     | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|---------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | LARGE_INTEGER | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | undefined8    | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 2       | param_3 | LARGE_INTEGER | 8          | R8:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

## normalized_result.native_api.jump_tables



## normalized_result.native_api.pseudocode

| Key            | Value                           |
|----------------|---------------------------------|
| classification | decompiler-generated-non-source |
| compilable     | false                           |

## normalized_result.native_api.decompiler_artifacts

recovered-signature,register-and-stack-variables,compiler-generated-control-flow,pointer-arithmetic,pseudocode

## normalized_result.native_api.limitations

Types and calling conventions are Ghidra decompiler observations, not source declarations.,Register variables, compiler-generated blocks, and pointer arithmetic remain decompiler artifacts.,Pseudocode is neither original source nor guaranteed to compile.

## normalized_result.native_value_flow.available

true

## normalized_result.native_value_flow.provenance

ghidra-high-pcode

## normalized_result.native_value_flow.operations

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------------------------------------------------------|-----------------|
| 0x140036dd5#2383 | 0x140036dd5 | 2383     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2384 | 0x140036dd5 | 2384     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2385 | 0x140036dd5 | 2385     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2386 | 0x140036dd5 | 2386     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2387 | 0x140036dd5 | 2387     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2388 | 0x140036dd5 | 2388     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2389 | 0x140036dd5 | 2389     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2390 | 0x140036dd5 | 2390     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dd5#2391 | 0x140036dd5 | 2391     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036de3#38   | 0x140036de3 | 38       | INT_XOR      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036de3#2421 | 0x140036de3 | 2421     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036df5#1317 | 0x140036df5 | 1317     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036dfb#2392 | 0x140036dfb | 2392     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#76   | 0x140036dff | 76       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 |                 |
| 0x140036dff#1666 | 0x140036dff | 1666     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#1873 | 0x140036dff | 1873     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#1900 | 0x140036dff | 1900     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#1927 | 0x140036dff | 1927     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#1958 | 0x140036dff | 1958     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#1985 | 0x140036dff | 1985     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2012 | 0x140036dff | 2012     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2039 | 0x140036dff | 2039     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2066 | 0x140036dff | 2066     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2093 | 0x140036dff | 2093     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2120 | 0x140036dff | 2120     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2147 | 0x140036dff | 2147     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036dff#2419 | 0x140036dff | 2419     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e08#86   | 0x140036e08 | 86       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e0b#92   | 0x140036e0b | 92       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036e0d#94   | 0x140036e0d | 94       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e0d#1681 | 0x140036e0d | 1681     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e0d#2475 | 0x140036e0d | 2475     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e0f#1731 | 0x140036e0f | 1731     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e12#99   | 0x140036e12 | 99       | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e12#1627 | 0x140036e12 | 1627     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e12#1628 | 0x140036e12 | 1628     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e12#1629 | 0x140036e12 | 1629     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e12#1714 | 0x140036e12 | 1714     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e12#1715 | 0x140036e12 | 1715     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e12#2476 | 0x140036e12 | 2476     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e12#2477 | 0x140036e12 | 2477     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e16#102  | 0x140036e16 | 102      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e16#104  | 0x140036e16 | 104      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e16#1682 | 0x140036e16 | 1682     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e16#2478 | 0x140036e16 | 2478     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e1a#105  | 0x140036e1a | 105      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e1a#107  | 0x140036e1a | 107      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e1a#1683 | 0x140036e1a | 1683     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e1a#2479 | 0x140036e1a | 2479     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e22#108  | 0x140036e22 | 108      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e22#110  | 0x140036e22 | 110      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e22#1684 | 0x140036e22 | 1684     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e22#2480 | 0x140036e22 | 2480     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e26#111  | 0x140036e26 | 111      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140036e26#2415 | 0x140036e26 | 2415     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e2b#194  | 0x140036e2b | 194      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e2d#199  | 0x140036e2d | 199      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036e2f#201  | 0x140036e2f | 201      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e2f#1690 | 0x140036e2f | 1690     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e2f#2474 | 0x140036e2f | 2474     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e35#202  | 0x140036e35 | 202      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140036e37#2393 | 0x140036e37 | 2393     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e40#218  | 0x140036e40 | 218      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e40#223  | 0x140036e40 | 223      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036e40#2406 | 0x140036e40 | 2406     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e40#2407 | 0x140036e40 | 2407     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e40#2422 | 0x140036e40 | 2422     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e45#1167 | 0x140036e45 | 1167     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#250  | 0x140036e6b | 250      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140036e6b#1667 | 0x140036e6b | 1667     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#1901 | 0x140036e6b | 1901     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#1928 | 0x140036e6b | 1928     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#1959 | 0x140036e6b | 1959     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#1986 | 0x140036e6b | 1986     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#2013 | 0x140036e6b | 2013     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#2040 | 0x140036e6b | 2040     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#2148 | 0x140036e6b | 2148     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e6b#2423 | 0x140036e6b | 2423     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e79#256  | 0x140036e79 | 256      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e79#2424 | 0x140036e79 | 2424     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e80#273  | 0x140036e80 | 273      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e80#275  | 0x140036e80 | 275      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036e80#2420 | 0x140036e80 | 2420     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e8b#289  | 0x140036e8b | 289      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140036e8b#1669 | 0x140036e8b | 1669     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#1876 | 0x140036e8b | 1876     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#1903 | 0x140036e8b | 1903     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#1930 | 0x140036e8b | 1930     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#1961 | 0x140036e8b | 1961     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#1988 | 0x140036e8b | 1988     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#2015 | 0x140036e8b | 2015     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#2042 | 0x140036e8b | 2042     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e8b#2150 | 0x140036e8b | 2150     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e90#294  | 0x140036e90 | 294      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e92#300  | 0x140036e92 | 300      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036e94#302  | 0x140036e94 | 302      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e94#1691 | 0x140036e94 | 1691     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e94#2467 | 0x140036e94 | 2467     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e9a#1205 | 0x140036e9a | 1205     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#1729 | 0x140036e9a | 1729     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#1898 | 0x140036e9a | 1898     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#1925 | 0x140036e9a | 1925     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#1952 | 0x140036e9a | 1952     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#1983 | 0x140036e9a | 1983     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#2010 | 0x140036e9a | 2010     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#2037 | 0x140036e9a | 2037     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#2064 | 0x140036e9a | 2064     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9a#2172 | 0x140036e9a | 2172     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9d#307  | 0x140036e9d | 307      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9d#1632 | 0x140036e9d | 1632     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e9d#1633 | 0x140036e9d | 1633     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036e9d#1634 | 0x140036e9d | 1634     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9d#1716 | 0x140036e9d | 1716     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9d#1717 | 0x140036e9d | 1717     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036e9d#2468 | 0x140036e9d | 2468     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036e9d#2469 | 0x140036e9d | 2469     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ea1#310  | 0x140036ea1 | 310      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ea1#312  | 0x140036ea1 | 312      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ea1#1692 | 0x140036ea1 | 1692     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ea1#2470 | 0x140036ea1 | 2470     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ea5#313  | 0x140036ea5 | 313      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ea5#315  | 0x140036ea5 | 315      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ea5#1693 | 0x140036ea5 | 1693     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ea5#2471 | 0x140036ea5 | 2471     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ead#316  | 0x140036ead | 316      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ead#318  | 0x140036ead | 318      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ead#1694 | 0x140036ead | 1694     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ead#2472 | 0x140036ead | 2472     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036eb1#319  | 0x140036eb1 | 319      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140036eb1#2412 | 0x140036eb1 | 2412     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036eb6#327  | 0x140036eb6 | 327      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ebb#2394 | 0x140036ebb | 2394     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#334  | 0x140036ec3 | 334      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140036ec3#1670 | 0x140036ec3 | 1670     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#1877 | 0x140036ec3 | 1877     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#1904 | 0x140036ec3 | 1904     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#1931 | 0x140036ec3 | 1931     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#1962 | 0x140036ec3 | 1962     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#1989 | 0x140036ec3 | 1989     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#2016 | 0x140036ec3 | 2016     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#2043 | 0x140036ec3 | 2043     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec3#2151 | 0x140036ec3 | 2151     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ec9#339  | 0x140036ec9 | 339      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ecb#344  | 0x140036ecb | 344      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036ecb#2410 | 0x140036ecb | 2410     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ed6#351  | 0x140036ed6 | 351      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ed9#357  | 0x140036ed9 | 357      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036ed9#2411 | 0x140036ed9 | 2411     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ee5#372  | 0x140036ee5 | 372      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ee5#373  | 0x140036ee5 | 373      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036ee5#2432 | 0x140036ee5 | 2432     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ee5#2433 | 0x140036ee5 | 2433     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ee7#375  | 0x140036ee7 | 375      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ee7#1696 | 0x140036ee7 | 1696     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ee7#2460 | 0x140036ee7 | 2460     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036eed#376  | 0x140036eed | 376      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036eed#1637 | 0x140036eed | 1637     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036eed#1638 | 0x140036eed | 1638     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036eed#1639 | 0x140036eed | 1639     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036eed#1718 | 0x140036eed | 1718     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036eed#1719 | 0x140036eed | 1719     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036eed#2461 | 0x140036eed | 2461     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036eed#2462 | 0x140036eed | 2462     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ef1#379  | 0x140036ef1 | 379      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ef1#381  | 0x140036ef1 | 381      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ef1#1697 | 0x140036ef1 | 1697     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ef1#2463 | 0x140036ef1 | 2463     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ef5#382  | 0x140036ef5 | 382      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ef5#384  | 0x140036ef5 | 384      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036ef5#1698 | 0x140036ef5 | 1698     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ef5#2464 | 0x140036ef5 | 2464     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036efd#385  | 0x140036efd | 385      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036efd#387  | 0x140036efd | 387      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036efd#1699 | 0x140036efd | 1699     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036efd#2465 | 0x140036efd | 2465     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f01#388  | 0x140036f01 | 388      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140036f01#2413 | 0x140036f01 | 2413     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f06#391  | 0x140036f06 | 391      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f0b#1643 | 0x140036f0b | 1643     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f10#397  | 0x140036f10 | 397      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f15#400  | 0x140036f15 | 400      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f1e#1955 | 0x140036f1e | 1955     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f26#2395 | 0x140036f26 | 2395     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#418  | 0x140036f2b | 418      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 |                 |
| 0x140036f2b#1671 | 0x140036f2b | 1671     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#1878 | 0x140036f2b | 1878     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#1905 | 0x140036f2b | 1905     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#1932 | 0x140036f2b | 1932     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#1963 | 0x140036f2b | 1963     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#1990 | 0x140036f2b | 1990     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#2017 | 0x140036f2b | 2017     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#2044 | 0x140036f2b | 2044     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f2b#2152 | 0x140036f2b | 2152     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f38#427  | 0x140036f38 | 427      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f3b#432  | 0x140036f3b | 432      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036f50#438  | 0x140036f50 | 438      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1302 | 0x140036f50 | 1302     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1727 | 0x140036f50 | 1727     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1896 | 0x140036f50 | 1896     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1923 | 0x140036f50 | 1923     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1950 | 0x140036f50 | 1950     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#1981 | 0x140036f50 | 1981     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#2008 | 0x140036f50 | 2008     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#2035 | 0x140036f50 | 2035     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#2062 | 0x140036f50 | 2062     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f50#2170 | 0x140036f50 | 2170     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f56#455  | 0x140036f56 | 455      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f56#460  | 0x140036f56 | 460      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036f56#1592 | 0x140036f56 | 1592     | SUBPIECE     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f56#1593 | 0x140036f56 | 1593     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f5a#1594 | 0x140036f5a | 1594     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f5a#1872 | 0x140036f5a | 1872     | INT_AND      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f5a#2434 | 0x140036f5a | 2434     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f5a#2435 | 0x140036f5a | 2435     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f5f#2396 | 0x140036f5f | 2396     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f6a#480  | 0x140036f6a | 480      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f6a#485  | 0x140036f6a | 485      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036f6a#2408 | 0x140036f6a | 2408     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f6a#2409 | 0x140036f6a | 2409     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f6a#2436 | 0x140036f6a | 2436     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f70#489  | 0x140036f70 | 489      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f70#1195 | 0x140036f70 | 1195     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f70#2437 | 0x140036f70 | 2437     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f70#2438 | 0x140036f70 | 2438     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f78#2397 | 0x140036f78 | 2397     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#507  | 0x140036f83 | 507      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140036f83#1672 | 0x140036f83 | 1672     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#1879 | 0x140036f83 | 1879     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#1906 | 0x140036f83 | 1906     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#1933 | 0x140036f83 | 1933     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#1964 | 0x140036f83 | 1964     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#1991 | 0x140036f83 | 1991     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#2018 | 0x140036f83 | 2018     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#2045 | 0x140036f83 | 2045     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#2153 | 0x140036f83 | 2153     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f83#2439 | 0x140036f83 | 2439     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f89#512  | 0x140036f89 | 512      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f8b#517  | 0x140036f8b | 517      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036f8d#1111 | 0x140036f8d | 1111     | INT_AND      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f8d#1870 | 0x140036f8d | 1870     | SUBPIECE     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f8d#2440 | 0x140036f8d | 2440     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036f91#527  | 0x140036f91 | 527      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f93#533  | 0x140036f93 | 533      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036f95#536  | 0x140036f95 | 536      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036f9d#547  | 0x140036f9d | 547      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa0#556  | 0x140036fa0 | 556      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036fa2#1212 | 0x140036fa2 | 1212     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#1726 | 0x140036fa2 | 1726     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#1895 | 0x140036fa2 | 1895     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#1922 | 0x140036fa2 | 1922     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#1949 | 0x140036fa2 | 1949     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#1980 | 0x140036fa2 | 1980     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#2007 | 0x140036fa2 | 2007     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#2061 | 0x140036fa2 | 2061     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa2#2169 | 0x140036fa2 | 2169     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa6#562  | 0x140036fa6 | 562      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fa6#1700 | 0x140036fa6 | 1700     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fa6#2453 | 0x140036fa6 | 2453     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fad#566  | 0x140036fad | 566      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fad#568  | 0x140036fad | 568      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fad#1701 | 0x140036fad | 1701     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fad#2454 | 0x140036fad | 2454     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fb6#572  | 0x140036fb6 | 572      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fb6#574  | 0x140036fb6 | 574      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fb6#1702 | 0x140036fb6 | 1702     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fb6#2455 | 0x140036fb6 | 2455     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fba#575  | 0x140036fba | 575      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fba#577  | 0x140036fba | 577      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fba#1703 | 0x140036fba | 1703     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fba#2456 | 0x140036fba | 2456     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fc3#581  | 0x140036fc3 | 581      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fc3#583  | 0x140036fc3 | 583      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fc3#1704 | 0x140036fc3 | 1704     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fc3#2457 | 0x140036fc3 | 2457     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fc7#584  | 0x140036fc7 | 584      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140036fc9#596  | 0x140036fc9 | 596      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fc9#1705 | 0x140036fc9 | 1705     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fc9#2441 | 0x140036fc9 | 2441     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fcf#601  | 0x140036fcf | 601      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fcf#1647 | 0x140036fcf | 1647     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fcf#1648 | 0x140036fcf | 1648     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fcf#1649 | 0x140036fcf | 1649     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fcf#1720 | 0x140036fcf | 1720     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fcf#1721 | 0x140036fcf | 1721     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fcf#2442 | 0x140036fcf | 2442     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fcf#2443 | 0x140036fcf | 2443     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fd3#604  | 0x140036fd3 | 604      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fd3#606  | 0x140036fd3 | 606      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fd3#1706 | 0x140036fd3 | 1706     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fd3#2444 | 0x140036fd3 | 2444     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fd7#607  | 0x140036fd7 | 607      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fd7#609  | 0x140036fd7 | 609      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fd7#1707 | 0x140036fd7 | 1707     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fd7#2445 | 0x140036fd7 | 2445     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fdf#610  | 0x140036fdf | 610      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fdf#612  | 0x140036fdf | 612      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140036fdf#1708 | 0x140036fdf | 1708     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fdf#2446 | 0x140036fdf | 2446     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fec#626  | 0x140036fec | 626      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fec#627  | 0x140036fec | 627      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036fee#629  | 0x140036fee | 629      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ff6#640  | 0x140036ff6 | 640      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036ffd#649  | 0x140036ffd | 649      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140036ffd#2405 | 0x140036ffd | 2405     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036ffd#2447 | 0x140036ffd | 2447     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140036fff#651  | 0x140036fff | 651      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140036fff#2398 | 0x140036fff | 2398     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140036fff#2448 | 0x140036fff | 2448     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037006#664  | 0x140037006 | 664      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037006#2399 | 0x140037006 | 2399     | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037006#2449 | 0x140037006 | 2449     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037006#2450 | 0x140037006 | 2450     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003700e#681  | 0x14003700e | 681      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003700e#683  | 0x14003700e | 683      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x14003700e#2451 | 0x14003700e | 2451     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037010#686  | 0x140037010 | 686      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#696  | 0x140037017 | 696      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037017#1159 | 0x140037017 | 1159     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1191 | 0x140037017 | 1191     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1674 | 0x140037017 | 1674     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1881 | 0x140037017 | 1881     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1908 | 0x140037017 | 1908     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1935 | 0x140037017 | 1935     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1966 | 0x140037017 | 1966     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#1993 | 0x140037017 | 1993     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#2020 | 0x140037017 | 2020     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#2047 | 0x140037017 | 2047     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037017#2155 | 0x140037017 | 2155     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003701c#587  | 0x14003701c | 587      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003701c#1725 | 0x14003701c | 1725     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#1894 | 0x14003701c | 1894     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#1921 | 0x14003701c | 1921     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#1948 | 0x14003701c | 1948     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#1979 | 0x14003701c | 1979     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#2006 | 0x14003701c | 2006     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003701c#2168 | 0x14003701c | 2168     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037021#590  | 0x140037021 | 590      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003702a#1957 | 0x14003702a | 1957     | INT_AND      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003702a#2458 | 0x14003702a | 2458     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003702a#2459 | 0x14003702a | 2459     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003702f#594  | 0x14003702f | 594      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x14003702f#2414 | 0x14003702f | 2414     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037036#698  | 0x140037036 | 698      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#699  | 0x140037036 | 699      | CALLIND      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140037036#1673 | 0x140037036 | 1673     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#1880 | 0x140037036 | 1880     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#1907 | 0x140037036 | 1907     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#1934 | 0x140037036 | 1934     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#1965 | 0x140037036 | 1965     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#1992 | 0x140037036 | 1992     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#2019 | 0x140037036 | 2019     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#2046 | 0x140037036 | 2046     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#2154 | 0x140037036 | 2154     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#2400 | 0x140037036 | 2400     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037036#2452 | 0x140037036 | 2452     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037038#701  | 0x140037038 | 701      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037038#1200 | 0x140037038 | 1200     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#1709 | 0x140037038 | 1709     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037038#1724 | 0x140037038 | 1724     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#1893 | 0x140037038 | 1893     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#1920 | 0x140037038 | 1920     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#1947 | 0x140037038 | 1947     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#1978 | 0x140037038 | 1978     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#2005 | 0x140037038 | 2005     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#2032 | 0x140037038 | 2032     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#2059 | 0x140037038 | 2059     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#2167 | 0x140037038 | 2167     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037038#2466 | 0x140037038 | 2466     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003703b#702  | 0x14003703b | 702      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x140037040#706  | 0x140037040 | 706      | CALL         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037040#1668 | 0x140037040 | 1668     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#1875 | 0x140037040 | 1875     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#1902 | 0x140037040 | 1902     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#1929 | 0x140037040 | 1929     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#1960 | 0x140037040 | 1960     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#1987 | 0x140037040 | 1987     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#2014 | 0x140037040 | 2014     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#2041 | 0x140037040 | 2041     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037040#2149 | 0x140037040 | 2149     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037046#709  | 0x140037046 | 709      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003704e#1139 | 0x14003704e | 1139     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037050#732  | 0x140037050 | 732      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037050#733  | 0x140037050 | 733      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140037050#1615 | 0x140037050 | 1615     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037054#736  | 0x140037054 | 736      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037054#1614 | 0x140037054 | 1614     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037054#1710 | 0x140037054 | 1710     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037054#2425 | 0x140037054 | 2425     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037059#741  | 0x140037059 | 741      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037059#1652 | 0x140037059 | 1652     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037059#1653 | 0x140037059 | 1653     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037059#1654 | 0x140037059 | 1654     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037059#1722 | 0x140037059 | 1722     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037059#1723 | 0x140037059 | 1723     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037059#2426 | 0x140037059 | 2426     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037059#2427 | 0x140037059 | 2427     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003705d#744  | 0x14003705d | 744      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003705d#746  | 0x14003705d | 746      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x14003705d#1711 | 0x14003705d | 1711     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003705d#2428 | 0x14003705d | 2428     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037061#747  | 0x140037061 | 747      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037061#749  | 0x140037061 | 749      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037061#1712 | 0x140037061 | 1712     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037061#2429 | 0x140037061 | 2429     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037069#750  | 0x140037069 | 750      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037069#752  | 0x140037069 | 752      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037069#1713 | 0x140037069 | 1713     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037069#2430 | 0x140037069 | 2430     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003706d#753  | 0x14003706d | 753      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003706d#2431 | 0x14003706d | 2431     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037075#765  | 0x140037075 | 765      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037075#767  | 0x140037075 | 767      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140037077#1204 | 0x140037077 | 1204     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#1728 | 0x140037077 | 1728     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#1897 | 0x140037077 | 1897     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#1924 | 0x140037077 | 1924     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#1951 | 0x140037077 | 1951     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#1982 | 0x140037077 | 1982     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#2009 | 0x140037077 | 2009     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#2036 | 0x140037077 | 2036     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#2063 | 0x140037077 | 2063     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x140037077#2171 | 0x140037077 | 2171     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x14003707a#322  | 0x14003707a | 322      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003707a#323  | 0x14003707a | 323      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x14003707a#324  | 0x14003707a | 324      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x14003707a#1675 | 0x14003707a | 1675     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#1882 | 0x14003707a | 1882     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#1909 | 0x14003707a | 1909     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#1936 | 0x14003707a | 1936     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#1967 | 0x14003707a | 1967     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#1994 | 0x14003707a | 1994     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#2021 | 0x14003707a | 2021     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#2048 | 0x14003707a | 2048     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#2156 | 0x14003707a | 2156     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003707a#2416 | 0x14003707a | 2416     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003707a#2473 | 0x14003707a | 2473     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037081#1206 | 0x140037081 | 1206     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#1730 | 0x140037081 | 1730     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#1899 | 0x140037081 | 1899     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#1926 | 0x140037081 | 1926     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#1953 | 0x140037081 | 1953     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#1984 | 0x140037081 | 1984     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#2011 | 0x140037081 | 2011     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#2038 | 0x140037081 | 2038     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#2065 | 0x140037081 | 2065     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#2173 | 0x140037081 | 2173     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037081#2401 | 0x140037081 | 2401     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#114  | 0x140037085 | 114      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037085#115  | 0x140037085 | 115      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037085#116  | 0x140037085 | 116      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140037085#1676 | 0x140037085 | 1676     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#1883 | 0x140037085 | 1883     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#1910 | 0x140037085 | 1910     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#1937 | 0x140037085 | 1937     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#1968 | 0x140037085 | 1968     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#1995 | 0x140037085 | 1995     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#2022 | 0x140037085 | 2022     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#2049 | 0x140037085 | 2049     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#2157 | 0x140037085 | 2157     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037085#2481 | 0x140037085 | 2481     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003708a#2402 | 0x14003708a | 2402     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#119  | 0x14003708e | 119      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x14003708e#120  | 0x14003708e | 120      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x14003708e#121  | 0x14003708e | 121      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x14003708e#1677 | 0x14003708e | 1677     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#1884 | 0x14003708e | 1884     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#1911 | 0x14003708e | 1911     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#1938 | 0x14003708e | 1938     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#1969 | 0x14003708e | 1969     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#1996 | 0x14003708e | 1996     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#2023 | 0x14003708e | 2023     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#2050 | 0x14003708e | 2050     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#2158 | 0x14003708e | 2158     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x14003708e#2482 | 0x14003708e | 2482     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x140037093#2403 | 0x140037093 | 2403     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#124  | 0x140037097 | 124      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x140037097#125  | 0x140037097 | 125      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x140037097#126  | 0x140037097 | 126      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x140037097#1678 | 0x140037097 | 1678     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#1885 | 0x140037097 | 1885     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#1912 | 0x140037097 | 1912     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#1939 | 0x140037097 | 1939     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#1970 | 0x140037097 | 1970     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#1997 | 0x140037097 | 1997     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#2024 | 0x140037097 | 2024     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#2051 | 0x140037097 | 2051     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#2159 | 0x140037097 | 2159     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x140037097#2483 | 0x140037097 | 2483     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x14003709c#2404 | 0x14003709c | 2404     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#129  | 0x1400370a0 | 129      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1400370a0#130  | 0x1400370a0 | 130      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1400370a0#131  | 0x1400370a0 | 131      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1400370a0#1679 | 0x1400370a0 | 1679     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#1886 | 0x1400370a0 | 1886     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#1913 | 0x1400370a0 | 1913     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#1940 | 0x1400370a0 | 1940     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#1971 | 0x1400370a0 | 1971     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#1998 | 0x1400370a0 | 1998     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#2025 | 0x1400370a0 | 2025     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#2052 | 0x1400370a0 | 2052     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#2160 | 0x1400370a0 | 2160     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1400370a0#2484 | 0x1400370a0 | 2484     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1400370a5#132  | 0x1400370a5 | 132      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1400370af#144  | 0x1400370af | 144      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1400370af#145  | 0x1400370af | 145      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1400370af#2485 | 0x1400370af | 2485     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1400370ce#189  | 0x1400370ce | 189      | RETURN       | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1400370ce#1680 | 0x1400370ce | 1680     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1400370ce#2486 | 0x1400370ce | 2486     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x140036de3#2421 | 0x140036de3#38   | 1           |
| 0x140036dd5#2383 | 0x140036de3#2421 | 0           |
| 0x140036dfb#2392 | 0x140036dff#76   | 1           |
| 0x140036dff#2419 | 0x140036dff#1900 | 0           |
| 0x140036de3#38   | 0x140036dff#2147 | 0           |
| 0x140036dff#2066 | 0x140036e08#86   | 0           |
| 0x140036e08#86   | 0x140036e0b#92   | 1           |
| 0x140036e0d#2475 | 0x140036e0d#94   | 1           |
| 0x140036dff#1666 | 0x140036e0d#1681 | 0           |
| 0x140036e0d#1681 | 0x140036e0f#1731 | 0           |
| 0x140036e2f#1690 | 0x140036e0f#1731 | 1           |
| 0x140036e12#2476 | 0x140036e12#1627 | 1           |
| 0x140036e12#2477 | 0x140036e12#1628 | 1           |
| 0x140036e0f#1731 | 0x140036e12#1714 | 0           |
| 0x140036e12#1714 | 0x140036e12#1715 | 0           |
| 0x140036e12#99   | 0x140036e12#2476 | 0           |
| 0x140036e12#1629 | 0x140036e12#2477 | 0           |
| 0x140036e16#2478 | 0x140036e16#104  | 1           |
| 0x140036e12#1715 | 0x140036e16#1682 | 0           |
| 0x140036e16#102  | 0x140036e16#2478 | 0           |
| 0x140036e1a#2479 | 0x140036e1a#107  | 1           |
| 0x140036e16#1682 | 0x140036e1a#1683 | 0           |
| 0x140036e1a#105  | 0x140036e1a#2479 | 0           |
| 0x140036e22#2480 | 0x140036e22#110  | 1           |
| 0x140036e1a#1683 | 0x140036e22#1684 | 0           |
| 0x140036e22#108  | 0x140036e22#2480 | 0           |
| 0x140036dd5#2387 | 0x140036e26#2415 | 0           |
| 0x140036dff#2066 | 0x140036e2b#194  | 0           |
| 0x140036e2b#194  | 0x140036e2d#199  | 1           |
| 0x140036e2f#2474 | 0x140036e2f#201  | 1           |
| 0x140036dff#1666 | 0x140036e2f#1690 | 0           |
| 0x140036dff#2120 | 0x140036e40#218  | 1           |
| 0x140036e40#218  | 0x140036e40#223  | 1           |
| 0x140036e37#2393 | 0x140036e40#2406 | 0           |
| 0x140036e40#2422 | 0x140036e40#2407 | 0           |
| 0x140036dff#2093 | 0x140036e40#2422 | 0           |
| 0x140036e40#2406 | 0x140036e45#1167 | 0           |
| 0x140036e40#2407 | 0x140036e45#1167 | 1           |
| 0x140036e6b#2423 | 0x140036e6b#250  | 1           |
| 0x140036dff#1666 | 0x140036e6b#1667 | 0           |
| 0x140036dff#1900 | 0x140036e6b#1901 | 0           |
| 0x140036dff#1927 | 0x140036e6b#1928 | 0           |
| 0x140036dff#1958 | 0x140036e6b#1959 | 0           |
| 0x140036dff#1985 | 0x140036e6b#1986 | 0           |
| 0x140036dff#2012 | 0x140036e6b#2013 | 0           |
| 0x140036dff#2039 | 0x140036e6b#2040 | 0           |
| 0x140036dff#2147 | 0x140036e6b#2148 | 0           |
| 0x140036e45#1167 | 0x140036e6b#2423 | 0           |
| 0x140036e79#2424 | 0x140036e79#256  | 0           |
| 0x140036e6b#250  | 0x140036e79#2424 | 0           |
| 0x140036e79#256  | 0x140036e80#273  | 0           |
| 0x140036e80#273  | 0x140036e80#275  | 1           |
| 0x140036e6b#250  | 0x140036e80#2420 | 0           |
| 0x140036e6b#250  | 0x140036e8b#289  | 1           |
| 0x140036e6b#1667 | 0x140036e8b#1669 | 0           |
| 0x140036e80#2420 | 0x140036e8b#1876 | 0           |
| 0x140036e6b#1901 | 0x140036e8b#1903 | 0           |
| 0x140036e6b#1928 | 0x140036e8b#1930 | 0           |
| 0x140036e6b#1959 | 0x140036e8b#1961 | 0           |
| 0x140036e6b#1986 | 0x140036e8b#1988 | 0           |
| 0x140036e6b#2013 | 0x140036e8b#2015 | 0           |
| 0x140036e6b#2040 | 0x140036e8b#2042 | 0           |
| 0x140036e6b#2148 | 0x140036e8b#2150 | 0           |
| 0x140036e8b#289  | 0x140036e90#294  | 0           |
| 0x140036e90#294  | 0x140036e92#300  | 1           |
| 0x140036e94#2467 | 0x140036e94#302  | 1           |
| 0x140036e8b#1669 | 0x140036e94#1691 | 0           |
| 0x140036dd5#2384 | 0x140036e9a#1205 | 0           |
| 0x140037038#1200 | 0x140036e9a#1205 | 1           |
| 0x140036e94#1691 | 0x140036e9a#1729 | 0           |
| 0x140037038#1709 | 0x140036e9a#1729 | 1           |
| 0x140036e8b#1876 | 0x140036e9a#1898 | 0           |
| 0x140037038#1893 | 0x140036e9a#1898 | 1           |
| 0x140036e8b#1903 | 0x140036e9a#1925 | 0           |
| 0x140037038#1920 | 0x140036e9a#1925 | 1           |
| 0x140036e8b#1930 | 0x140036e9a#1952 | 0           |
| 0x140037038#1947 | 0x140036e9a#1952 | 1           |
| 0x140036e8b#1961 | 0x140036e9a#1983 | 0           |
| 0x140037038#1978 | 0x140036e9a#1983 | 1           |
| 0x140036e8b#1988 | 0x140036e9a#2010 | 0           |
| 0x140037038#2005 | 0x140036e9a#2010 | 1           |
| 0x140036e8b#2015 | 0x140036e9a#2037 | 0           |
| 0x140037038#2032 | 0x140036e9a#2037 | 1           |
| 0x140036e8b#2042 | 0x140036e9a#2064 | 0           |
| 0x140037038#2059 | 0x140036e9a#2064 | 1           |
| 0x140036e8b#2150 | 0x140036e9a#2172 | 0           |
| 0x140037038#2167 | 0x140036e9a#2172 | 1           |
| 0x140036e9d#2468 | 0x140036e9d#1632 | 1           |
| 0x140036e9d#2469 | 0x140036e9d#1633 | 1           |
| 0x140036e9a#1729 | 0x140036e9d#1716 | 0           |
| 0x140036e9d#1716 | 0x140036e9d#1717 | 0           |
| 0x140036e9d#307  | 0x140036e9d#2468 | 0           |
| 0x140036e9d#1634 | 0x140036e9d#2469 | 0           |
| 0x140036ea1#2470 | 0x140036ea1#312  | 1           |
| 0x140036e9d#1717 | 0x140036ea1#1692 | 0           |
| 0x140036ea1#310  | 0x140036ea1#2470 | 0           |
| 0x140036ea5#2471 | 0x140036ea5#315  | 1           |
| 0x140036ea1#1692 | 0x140036ea5#1693 | 0           |
| 0x140036ea5#313  | 0x140036ea5#2471 | 0           |
| 0x140036ead#2472 | 0x140036ead#318  | 1           |
| 0x140036ea5#1693 | 0x140036ead#1694 | 0           |
| 0x140036ead#316  | 0x140036ead#2472 | 0           |
| 0x140036e9a#1205 | 0x140036eb1#2412 | 0           |
| 0x140036e6b#250  | 0x140036ec3#334  | 1           |
| 0x140036ebb#2394 | 0x140036ec3#334  | 2           |
| 0x140036e8b#1669 | 0x140036ec3#1670 | 0           |
| 0x140036e8b#1876 | 0x140036ec3#1877 | 0           |
| 0x140036eb6#327  | 0x140036ec3#1904 | 0           |
| 0x140036e8b#1930 | 0x140036ec3#1931 | 0           |
| 0x140036e8b#1961 | 0x140036ec3#1962 | 0           |
| 0x140036e8b#1988 | 0x140036ec3#1989 | 0           |
| 0x140036e8b#2015 | 0x140036ec3#2016 | 0           |
| 0x140036e8b#2042 | 0x140036ec3#2043 | 0           |
| 0x140036e8b#2150 | 0x140036ec3#2151 | 0           |
| 0x140036ec3#334  | 0x140036ec9#339  | 0           |
| 0x140036ec9#339  | 0x140036ecb#344  | 1           |
| 0x140036dd5#2385 | 0x140036ecb#2410 | 0           |
| 0x140036ec3#1904 | 0x140036ed6#351  | 1           |
| 0x140036ed6#351  | 0x140036ed9#357  | 1           |
| 0x140036dd5#2388 | 0x140036ed9#2411 | 0           |
| 0x140036ee5#2432 | 0x140036ee5#372  | 0           |
| 0x140036ee5#2433 | 0x140036ee5#372  | 1           |
| 0x140036ee5#372  | 0x140036ee5#373  | 1           |
| 0x140036ec3#1904 | 0x140036ee5#2433 | 0           |
| 0x140036ee7#2460 | 0x140036ee7#375  | 1           |
| 0x140036ec3#1670 | 0x140036ee7#1696 | 0           |
| 0x140036eed#2461 | 0x140036eed#1637 | 1           |
| 0x140036eed#2462 | 0x140036eed#1638 | 1           |
| 0x140036ee7#1696 | 0x140036eed#1718 | 0           |
| 0x140036eed#1718 | 0x140036eed#1719 | 0           |
| 0x140036eed#376  | 0x140036eed#2461 | 0           |
| 0x140036eed#1639 | 0x140036eed#2462 | 0           |
| 0x140036ef1#2463 | 0x140036ef1#381  | 1           |
| 0x140036eed#1719 | 0x140036ef1#1697 | 0           |
| 0x140036ef1#379  | 0x140036ef1#2463 | 0           |
| 0x140036ef5#2464 | 0x140036ef5#384  | 1           |
| 0x140036ef1#1697 | 0x140036ef5#1698 | 0           |
| 0x140036ef5#382  | 0x140036ef5#2464 | 0           |
| 0x140036efd#2465 | 0x140036efd#387  | 1           |
| 0x140036ef5#1698 | 0x140036efd#1699 | 0           |
| 0x140036efd#385  | 0x140036efd#2465 | 0           |
| 0x140036dd5#2386 | 0x140036f01#2413 | 0           |
| 0x140036f26#2395 | 0x140036f2b#418  | 1           |
| 0x140036ec3#1904 | 0x140036f2b#418  | 2           |
| 0x140036ec3#1670 | 0x140036f2b#1671 | 0           |
| 0x140036ec3#1877 | 0x140036f2b#1878 | 0           |
| 0x140036ec3#1904 | 0x140036f2b#1905 | 0           |
| 0x140036f06#391  | 0x140036f2b#1932 | 0           |
| 0x140036f1e#1955 | 0x140036f2b#1963 | 0           |
| 0x140036f0b#1643 | 0x140036f2b#1990 | 0           |
| 0x140036f10#397  | 0x140036f2b#2017 | 0           |
| 0x140036f15#400  | 0x140036f2b#2044 | 0           |
| 0x140036ec3#2151 | 0x140036f2b#2152 | 0           |
| 0x140036f2b#2017 | 0x140036f38#427  | 0           |
| 0x140036f38#427  | 0x140036f3b#432  | 1           |
| 0x140036f50#2035 | 0x140036f50#438  | 0           |
| 0x140036f50#1302 | 0x140036f50#438  | 1           |
| 0x140036f95#536  | 0x140036f50#1302 | 0           |
| 0x140036df5#1317 | 0x140036f50#1302 | 1           |
| 0x140036f83#1672 | 0x140036f50#1727 | 0           |
| 0x140036f2b#1671 | 0x140036f50#1727 | 1           |
| 0x140036f83#1879 | 0x140036f50#1896 | 0           |
| 0x140036f2b#1878 | 0x140036f50#1896 | 1           |
| 0x140036f83#1906 | 0x140036f50#1923 | 0           |
| 0x140036f2b#1905 | 0x140036f50#1923 | 1           |
| 0x140036f83#1933 | 0x140036f50#1950 | 0           |
| 0x140036f2b#1932 | 0x140036f50#1950 | 1           |
| 0x140036f83#1964 | 0x140036f50#1981 | 0           |
| 0x140036f2b#1963 | 0x140036f50#1981 | 1           |
| 0x140036f83#1991 | 0x140036f50#2008 | 0           |
| 0x140036f2b#1990 | 0x140036f50#2008 | 1           |
| 0x140036f83#2018 | 0x140036f50#2035 | 0           |
| 0x140036f2b#2017 | 0x140036f50#2035 | 1           |
| 0x140036f83#2045 | 0x140036f50#2062 | 0           |
| 0x140036f2b#2044 | 0x140036f50#2062 | 1           |
| 0x140036f83#2153 | 0x140036f50#2170 | 0           |
| 0x140036f2b#2152 | 0x140036f50#2170 | 1           |
| 0x140036f50#438  | 0x140036f56#455  | 1           |
| 0x140036f56#455  | 0x140036f56#460  | 1           |
| 0x140036f50#438  | 0x140036f56#1592 | 0           |
| 0x140036f56#1592 | 0x140036f5a#1594 | 0           |
| 0x140036f56#1593 | 0x140036f5a#1594 | 1           |
| 0x140036f5a#2434 | 0x140036f5a#1872 | 0           |
| 0x140036f50#1896 | 0x140036f5a#2434 | 0           |
| 0x140036f5a#1872 | 0x140036f5a#2435 | 0           |
| 0x140036f50#2062 | 0x140036f6a#480  | 1           |
| 0x140036f6a#480  | 0x140036f6a#485  | 1           |
| 0x140036f5f#2396 | 0x140036f6a#2408 | 0           |
| 0x140036f6a#2436 | 0x140036f6a#2409 | 0           |
| 0x140036f50#1981 | 0x140036f6a#2436 | 0           |
| 0x140036f70#2437 | 0x140036f70#489  | 0           |
| 0x140036f50#1302 | 0x140036f70#489  | 1           |
| 0x140036f6a#2408 | 0x140036f70#1195 | 0           |
| 0x140036f6a#2409 | 0x140036f70#1195 | 1           |
| 0x140036f70#1195 | 0x140036f70#2437 | 0           |
| 0x140036f70#489  | 0x140036f70#2438 | 0           |
| 0x140036e6b#250  | 0x140036f83#507  | 1           |
| 0x140036f70#2438 | 0x140036f83#507  | 2           |
| 0x140036f5a#1594 | 0x140036f83#507  | 3           |
| 0x140036f83#2439 | 0x140036f83#507  | 4           |
| 0x140036f50#1727 | 0x140036f83#1672 | 0           |
| 0x140036f5a#2435 | 0x140036f83#1879 | 0           |
| 0x140036f50#1923 | 0x140036f83#1906 | 0           |
| 0x140036f50#1950 | 0x140036f83#1933 | 0           |
| 0x140036f50#1981 | 0x140036f83#1964 | 0           |
| 0x140036f50#2008 | 0x140036f83#1991 | 0           |
| 0x140036f50#2035 | 0x140036f83#2018 | 0           |
| 0x140036f50#2062 | 0x140036f83#2045 | 0           |
| 0x140036f50#2170 | 0x140036f83#2153 | 0           |
| 0x140036f78#2397 | 0x140036f83#2439 | 0           |
| 0x140036f83#507  | 0x140036f89#512  | 0           |
| 0x140036f89#512  | 0x140036f8b#517  | 1           |
| 0x140036f8d#2440 | 0x140036f8d#1111 | 0           |
| 0x140036f83#1879 | 0x140036f8d#1870 | 0           |
| 0x140036f83#1879 | 0x140036f8d#2440 | 0           |
| 0x140036f8d#1870 | 0x140036f91#527  | 0           |
| 0x140036f5a#1594 | 0x140036f91#527  | 1           |
| 0x140036f91#527  | 0x140036f93#533  | 1           |
| 0x140036f50#1302 | 0x140036f95#536  | 0           |
| 0x140036f8d#1111 | 0x140036f95#536  | 1           |
| 0x140036f95#536  | 0x140036f9d#547  | 0           |
| 0x140036f83#2018 | 0x140036f9d#547  | 1           |
| 0x140036f9d#547  | 0x140036fa0#556  | 1           |
| 0x140036f2b#2017 | 0x140036fa2#1212 | 0           |
| 0x140036f83#2018 | 0x140036fa2#1212 | 1           |
| 0x140036f2b#1671 | 0x140036fa2#1726 | 0           |
| 0x140036f83#1672 | 0x140036fa2#1726 | 1           |
| 0x140036f2b#1878 | 0x140036fa2#1895 | 0           |
| 0x140036f83#1879 | 0x140036fa2#1895 | 1           |
| 0x140036f2b#1905 | 0x140036fa2#1922 | 0           |
| 0x140036f83#1906 | 0x140036fa2#1922 | 1           |
| 0x140036f2b#1932 | 0x140036fa2#1949 | 0           |
| 0x140036f83#1933 | 0x140036fa2#1949 | 1           |
| 0x140036f2b#1963 | 0x140036fa2#1980 | 0           |
| 0x140036f83#1964 | 0x140036fa2#1980 | 1           |
| 0x140036f2b#1990 | 0x140036fa2#2007 | 0           |
| 0x140036f83#1991 | 0x140036fa2#2007 | 1           |
| 0x140036f2b#2044 | 0x140036fa2#2061 | 0           |
| 0x140036f83#2045 | 0x140036fa2#2061 | 1           |
| 0x140036f2b#2152 | 0x140036fa2#2169 | 0           |
| 0x140036f83#2153 | 0x140036fa2#2169 | 1           |
| 0x140036fa6#2453 | 0x140036fa6#562  | 1           |
| 0x140036fa2#1949 | 0x140036fa6#562  | 2           |
| 0x140036fa2#1726 | 0x140036fa6#1700 | 0           |
| 0x140036fad#2454 | 0x140036fad#568  | 1           |
| 0x140036fa2#1980 | 0x140036fad#568  | 2           |
| 0x140036fa6#1700 | 0x140036fad#1701 | 0           |
| 0x140036fad#566  | 0x140036fad#2454 | 0           |
| 0x140036fb6#2455 | 0x140036fb6#574  | 1           |
| 0x140036fa2#2007 | 0x140036fb6#574  | 2           |
| 0x140036fad#1701 | 0x140036fb6#1702 | 0           |
| 0x140036fb6#572  | 0x140036fb6#2455 | 0           |
| 0x140036fba#2456 | 0x140036fba#577  | 1           |
| 0x140036fa2#1212 | 0x140036fba#577  | 2           |
| 0x140036fb6#1702 | 0x140036fba#1703 | 0           |
| 0x140036fba#575  | 0x140036fba#2456 | 0           |
| 0x140036fc3#2457 | 0x140036fc3#583  | 1           |
| 0x140036fa2#2061 | 0x140036fc3#583  | 2           |
| 0x140036fba#1703 | 0x140036fc3#1704 | 0           |
| 0x140036fc3#581  | 0x140036fc3#2457 | 0           |
| 0x140036fc9#2441 | 0x140036fc9#596  | 1           |
| 0x140036f83#1672 | 0x140036fc9#1705 | 0           |
| 0x140036fcf#2442 | 0x140036fcf#1647 | 1           |
| 0x140036fcf#2443 | 0x140036fcf#1648 | 1           |
| 0x140036fc9#1705 | 0x140036fcf#1720 | 0           |
| 0x140036fcf#1720 | 0x140036fcf#1721 | 0           |
| 0x140036fcf#601  | 0x140036fcf#2442 | 0           |
| 0x140036fcf#1649 | 0x140036fcf#2443 | 0           |
| 0x140036fd3#2444 | 0x140036fd3#606  | 1           |
| 0x140036fcf#1721 | 0x140036fd3#1706 | 0           |
| 0x140036fd3#604  | 0x140036fd3#2444 | 0           |
| 0x140036fd7#2445 | 0x140036fd7#609  | 1           |
| 0x140036fd3#1706 | 0x140036fd7#1707 | 0           |
| 0x140036fd7#607  | 0x140036fd7#2445 | 0           |
| 0x140036fdf#2446 | 0x140036fdf#612  | 1           |
| 0x140036fd7#1707 | 0x140036fdf#1708 | 0           |
| 0x140036fdf#610  | 0x140036fdf#2446 | 0           |
| 0x140036f83#2045 | 0x140036fec#626  | 0           |
| 0x140036fec#626  | 0x140036fec#627  | 1           |
| 0x140036f83#2045 | 0x140036fee#629  | 0           |
| 0x140036fee#629  | 0x140036ff6#640  | 1           |
| 0x140036ff6#640  | 0x140036ffd#649  | 1           |
| 0x140036ffd#2447 | 0x140036ffd#2405 | 0           |
| 0x140036f83#1964 | 0x140036ffd#2447 | 0           |
| 0x140036fff#2398 | 0x140036fff#651  | 1           |
| 0x140036f83#1964 | 0x140036fff#2398 | 0           |
| 0x140036fff#651  | 0x140036fff#2448 | 0           |
| 0x140037006#2450 | 0x140037006#664  | 0           |
| 0x140037006#2399 | 0x140037006#664  | 1           |
| 0x140037006#2449 | 0x140037006#2399 | 1           |
| 0x140036fff#2448 | 0x140037006#2449 | 0           |
| 0x140036f83#1964 | 0x140037006#2450 | 0           |
| 0x14003700e#2451 | 0x14003700e#681  | 1           |
| 0x14003700e#681  | 0x14003700e#683  | 1           |
| 0x140037006#664  | 0x14003700e#2451 | 0           |
| 0x140036f83#2045 | 0x140037010#686  | 0           |
| 0x140037017#1159 | 0x140037017#696  | 1           |
| 0x140037017#1191 | 0x140037017#696  | 2           |
| 0x140036ffd#2405 | 0x140037017#1159 | 0           |
| 0x140036fff#2448 | 0x140037017#1159 | 1           |
| 0x140036fee#629  | 0x140037017#1191 | 0           |
| 0x140037010#686  | 0x140037017#1191 | 1           |
| 0x140036fdf#1708 | 0x140037017#1674 | 0           |
| 0x140036f83#1879 | 0x140037017#1881 | 0           |
| 0x140036f83#1906 | 0x140037017#1908 | 0           |
| 0x140036f83#1933 | 0x140037017#1935 | 0           |
| 0x140036f83#1964 | 0x140037017#1966 | 0           |
| 0x140036f83#1991 | 0x140037017#1993 | 0           |
| 0x140036f83#2018 | 0x140037017#2020 | 0           |
| 0x140036f83#2045 | 0x140037017#2047 | 0           |
| 0x140036f83#2153 | 0x140037017#2155 | 0           |
| 0x140036fc3#1704 | 0x14003701c#1725 | 0           |
| 0x140036fdf#1708 | 0x14003701c#1725 | 1           |
| 0x140037017#1674 | 0x14003701c#1725 | 2           |
| 0x140036fa2#1895 | 0x14003701c#1894 | 0           |
| 0x140036f83#1879 | 0x14003701c#1894 | 1           |
| 0x140037017#1881 | 0x14003701c#1894 | 2           |
| 0x140036fa2#1922 | 0x14003701c#1921 | 0           |
| 0x140036f83#1906 | 0x14003701c#1921 | 1           |
| 0x140037017#1908 | 0x14003701c#1921 | 2           |
| 0x140036fa2#1949 | 0x14003701c#1948 | 0           |
| 0x140036f83#1933 | 0x14003701c#1948 | 1           |
| 0x140037017#1935 | 0x14003701c#1948 | 2           |
| 0x140036fa2#1980 | 0x14003701c#1979 | 0           |
| 0x140036f83#1964 | 0x14003701c#1979 | 1           |
| 0x140037017#1966 | 0x14003701c#1979 | 2           |
| 0x140036fa2#2007 | 0x14003701c#2006 | 0           |
| 0x140036f83#1991 | 0x14003701c#2006 | 1           |
| 0x140037017#1993 | 0x14003701c#2006 | 2           |
| 0x140036fa2#2169 | 0x14003701c#2168 | 0           |
| 0x140036f83#2153 | 0x14003701c#2168 | 1           |
| 0x140037017#2155 | 0x14003701c#2168 | 2           |
| 0x14003702a#2458 | 0x14003702a#1957 | 0           |
| 0x14003701c#1979 | 0x14003702a#2458 | 0           |
| 0x14003702a#1957 | 0x14003702a#2459 | 0           |
| 0x140036dd5#2389 | 0x14003702f#2414 | 0           |
| 0x140037036#2452 | 0x140037036#699  | 0           |
| 0x140036fdf#1708 | 0x140037036#1673 | 0           |
| 0x140036f83#1879 | 0x140037036#1880 | 0           |
| 0x140036f83#1906 | 0x140037036#1907 | 0           |
| 0x140036f83#1933 | 0x140037036#1934 | 0           |
| 0x140036f83#1964 | 0x140037036#1965 | 0           |
| 0x140036f83#1991 | 0x140037036#1992 | 0           |
| 0x140036f83#2018 | 0x140037036#2019 | 0           |
| 0x140036f83#2045 | 0x140037036#2046 | 0           |
| 0x140036f83#2153 | 0x140037036#2154 | 0           |
| 0x140037036#698  | 0x140037036#2452 | 0           |
| 0x140037038#2466 | 0x140037038#701  | 1           |
| 0x140036ecb#2410 | 0x140037038#1200 | 0           |
| 0x140036ed9#2411 | 0x140037038#1200 | 1           |
| 0x140037036#2400 | 0x140037038#1200 | 2           |
| 0x140037038#1724 | 0x140037038#1709 | 0           |
| 0x140036ec3#1670 | 0x140037038#1724 | 0           |
| 0x140036ec3#1670 | 0x140037038#1724 | 1           |
| 0x140037036#1673 | 0x140037038#1724 | 2           |
| 0x140036ec3#1877 | 0x140037038#1893 | 0           |
| 0x140036ec3#1877 | 0x140037038#1893 | 1           |
| 0x140037036#1880 | 0x140037038#1893 | 2           |
| 0x140036ec3#1904 | 0x140037038#1920 | 0           |
| 0x140036ec3#1904 | 0x140037038#1920 | 1           |
| 0x140037036#1907 | 0x140037038#1920 | 2           |
| 0x140036ec3#1931 | 0x140037038#1947 | 0           |
| 0x140036ec3#1931 | 0x140037038#1947 | 1           |
| 0x140037036#1934 | 0x140037038#1947 | 2           |
| 0x140036ec3#1962 | 0x140037038#1978 | 0           |
| 0x140036ec3#1962 | 0x140037038#1978 | 1           |
| 0x140037036#1965 | 0x140037038#1978 | 2           |
| 0x140036ec3#1989 | 0x140037038#2005 | 0           |
| 0x140036ec3#1989 | 0x140037038#2005 | 1           |
| 0x140037036#1992 | 0x140037038#2005 | 2           |
| 0x140036ec3#2016 | 0x140037038#2032 | 0           |
| 0x140036ec3#2016 | 0x140037038#2032 | 1           |
| 0x140037036#2019 | 0x140037038#2032 | 2           |
| 0x140036ec3#2043 | 0x140037038#2059 | 0           |
| 0x140036ec3#2043 | 0x140037038#2059 | 1           |
| 0x140037036#2046 | 0x140037038#2059 | 2           |
| 0x140036ec3#2151 | 0x140037038#2167 | 0           |
| 0x140036ec3#2151 | 0x140037038#2167 | 1           |
| 0x140037036#2154 | 0x140037038#2167 | 2           |
| 0x140036e6b#1667 | 0x140037040#1668 | 0           |
| 0x140036e80#2420 | 0x140037040#1875 | 0           |
| 0x140036e6b#1901 | 0x140037040#1902 | 0           |
| 0x140036e6b#1928 | 0x140037040#1929 | 0           |
| 0x140036e6b#1959 | 0x140037040#1960 | 0           |
| 0x140036e6b#1986 | 0x140037040#1987 | 0           |
| 0x140036e6b#2013 | 0x140037040#2014 | 0           |
| 0x140036e6b#2040 | 0x140037040#2041 | 0           |
| 0x140036e6b#2148 | 0x140037040#2149 | 0           |
| 0x140037040#706  | 0x140037046#709  | 0           |
| 0x140037046#709  | 0x140037050#732  | 1           |
| 0x140037050#732  | 0x140037050#733  | 1           |
| 0x140037054#2425 | 0x140037054#736  | 1           |
| 0x140037054#1614 | 0x140037054#736  | 2           |
| 0x14003704e#1139 | 0x140037054#1614 | 0           |
| 0x140037050#1615 | 0x140037054#1614 | 1           |
| 0x140037040#1668 | 0x140037054#1710 | 0           |
| 0x140037059#2426 | 0x140037059#1652 | 1           |
| 0x140037059#2427 | 0x140037059#1653 | 1           |
| 0x140037054#1710 | 0x140037059#1722 | 0           |
| 0x140037059#1722 | 0x140037059#1723 | 0           |
| 0x140037059#741  | 0x140037059#2426 | 0           |
| 0x140037059#1654 | 0x140037059#2427 | 0           |
| 0x14003705d#2428 | 0x14003705d#746  | 1           |
| 0x140037059#1723 | 0x14003705d#1711 | 0           |
| 0x14003705d#744  | 0x14003705d#2428 | 0           |
| 0x140037061#2429 | 0x140037061#749  | 1           |
| 0x14003705d#1711 | 0x140037061#1712 | 0           |
| 0x140037061#747  | 0x140037061#2429 | 0           |
| 0x140037069#2430 | 0x140037069#752  | 1           |
| 0x140037061#1712 | 0x140037069#1713 | 0           |
| 0x140037069#750  | 0x140037069#2430 | 0           |
| 0x14003706d#2431 | 0x14003706d#753  | 0           |
| 0x140036e6b#250  | 0x14003706d#2431 | 0           |
| 0x14003706d#753  | 0x140037075#765  | 1           |
| 0x140037075#765  | 0x140037075#767  | 1           |
| 0x140036eb1#2412 | 0x140037077#1204 | 0           |
| 0x140036f01#2413 | 0x140037077#1204 | 1           |
| 0x14003702f#2414 | 0x140037077#1204 | 2           |
| 0x140036dd5#2390 | 0x140037077#1204 | 3           |
| 0x140036ead#1694 | 0x140037077#1728 | 0           |
| 0x140036efd#1699 | 0x140037077#1728 | 1           |
| 0x14003701c#1725 | 0x140037077#1728 | 2           |
| 0x140037069#1713 | 0x140037077#1728 | 3           |
| 0x140036e9a#1898 | 0x140037077#1897 | 0           |
| 0x140036ec3#1877 | 0x140037077#1897 | 1           |
| 0x14003701c#1894 | 0x140037077#1897 | 2           |
| 0x140037040#1875 | 0x140037077#1897 | 3           |
| 0x140036e9a#1925 | 0x140037077#1924 | 0           |
| 0x140036ec3#1904 | 0x140037077#1924 | 1           |
| 0x14003701c#1921 | 0x140037077#1924 | 2           |
| 0x140037040#1902 | 0x140037077#1924 | 3           |
| 0x140036e9a#1952 | 0x140037077#1951 | 0           |
| 0x140036ec3#1931 | 0x140037077#1951 | 1           |
| 0x14003701c#1948 | 0x140037077#1951 | 2           |
| 0x140037040#1929 | 0x140037077#1951 | 3           |
| 0x140036e9a#1983 | 0x140037077#1982 | 0           |
| 0x140036ec3#1962 | 0x140037077#1982 | 1           |
| 0x14003702a#2459 | 0x140037077#1982 | 2           |
| 0x140037040#1960 | 0x140037077#1982 | 3           |
| 0x140036e9a#2010 | 0x140037077#2009 | 0           |
| 0x140036ec3#1989 | 0x140037077#2009 | 1           |
| 0x14003701c#2006 | 0x140037077#2009 | 2           |
| 0x140037040#1987 | 0x140037077#2009 | 3           |
| 0x140036e9a#2037 | 0x140037077#2036 | 0           |
| 0x140036ec3#2016 | 0x140037077#2036 | 1           |
| 0x14003701c#587  | 0x140037077#2036 | 2           |
| 0x140037040#2014 | 0x140037077#2036 | 3           |
| 0x140036e9a#2064 | 0x140037077#2063 | 0           |
| 0x140036ec3#2043 | 0x140037077#2063 | 1           |
| 0x140037021#590  | 0x140037077#2063 | 2           |
| 0x140037040#2041 | 0x140037077#2063 | 3           |
| 0x140036e9a#2172 | 0x140037077#2171 | 0           |
| 0x140036ec3#2151 | 0x140037077#2171 | 1           |
| 0x14003701c#2168 | 0x140037077#2171 | 2           |
| 0x140037040#2149 | 0x140037077#2171 | 3           |
| 0x140037077#1204 | 0x14003707a#322  | 0           |
| 0x14003707a#2473 | 0x14003707a#323  | 1           |
| 0x140036e6b#250  | 0x14003707a#324  | 1           |
| 0x140037077#1728 | 0x14003707a#1675 | 0           |
| 0x140037077#1897 | 0x14003707a#1882 | 0           |
| 0x140037077#1924 | 0x14003707a#1909 | 0           |
| 0x140037077#1951 | 0x14003707a#1936 | 0           |
| 0x140037077#1982 | 0x14003707a#1967 | 0           |
| 0x140037077#2009 | 0x14003707a#1994 | 0           |
| 0x140037077#2036 | 0x14003707a#2021 | 0           |
| 0x140037077#2063 | 0x14003707a#2048 | 0           |
| 0x140037077#2171 | 0x14003707a#2156 | 0           |
| 0x140037077#1204 | 0x14003707a#2416 | 0           |
| 0x14003707a#322  | 0x14003707a#2473 | 0           |
| 0x140036e26#2415 | 0x140037081#1206 | 0           |
| 0x14003707a#2416 | 0x140037081#1206 | 1           |
| 0x140036dd5#2391 | 0x140037081#1206 | 2           |
| 0x140036e22#1684 | 0x140037081#1730 | 0           |
| 0x14003707a#1675 | 0x140037081#1730 | 1           |
| 0x140037069#1713 | 0x140037081#1730 | 2           |
| 0x140036dff#1873 | 0x140037081#1899 | 0           |
| 0x14003707a#1882 | 0x140037081#1899 | 1           |
| 0x140037040#1875 | 0x140037081#1899 | 2           |
| 0x140036dff#1900 | 0x140037081#1926 | 0           |
| 0x14003707a#1909 | 0x140037081#1926 | 1           |
| 0x140037040#1902 | 0x140037081#1926 | 2           |
| 0x140036dff#1927 | 0x140037081#1953 | 0           |
| 0x14003707a#1936 | 0x140037081#1953 | 1           |
| 0x140037040#1929 | 0x140037081#1953 | 2           |
| 0x140036dff#1958 | 0x140037081#1984 | 0           |
| 0x14003707a#1967 | 0x140037081#1984 | 1           |
| 0x140037040#1960 | 0x140037081#1984 | 2           |
| 0x140036dff#1985 | 0x140037081#2011 | 0           |
| 0x14003707a#1994 | 0x140037081#2011 | 1           |
| 0x140037040#1987 | 0x140037081#2011 | 2           |
| 0x140036dff#2012 | 0x140037081#2038 | 0           |
| 0x14003707a#2021 | 0x140037081#2038 | 1           |
| 0x140037040#2014 | 0x140037081#2038 | 2           |
| 0x140036dff#2039 | 0x140037081#2065 | 0           |
| 0x14003707a#2048 | 0x140037081#2065 | 1           |
| 0x140037040#2041 | 0x140037081#2065 | 2           |
| 0x140036dff#2147 | 0x140037081#2173 | 0           |
| 0x14003707a#2156 | 0x140037081#2173 | 1           |
| 0x140037040#2149 | 0x140037081#2173 | 2           |
| 0x140037081#1206 | 0x140037085#114  | 0           |
| 0x140037085#2481 | 0x140037085#115  | 1           |
| 0x140037081#2401 | 0x140037085#116  | 1           |
| 0x140037081#1730 | 0x140037085#1676 | 0           |
| 0x140037081#1899 | 0x140037085#1883 | 0           |
| 0x140037081#1926 | 0x140037085#1910 | 0           |
| 0x140037081#1953 | 0x140037085#1937 | 0           |
| 0x140037081#1984 | 0x140037085#1968 | 0           |
| 0x140037081#2011 | 0x140037085#1995 | 0           |
| 0x140037081#2038 | 0x140037085#2022 | 0           |
| 0x140037081#2065 | 0x140037085#2049 | 0           |
| 0x140037081#2173 | 0x140037085#2157 | 0           |
| 0x140037085#114  | 0x140037085#2481 | 0           |
| 0x140037081#1206 | 0x14003708e#119  | 0           |
| 0x14003708e#2482 | 0x14003708e#120  | 1           |
| 0x14003708a#2402 | 0x14003708e#121  | 1           |
| 0x140037085#1676 | 0x14003708e#1677 | 0           |
| 0x140037085#1883 | 0x14003708e#1884 | 0           |
| 0x140037085#1910 | 0x14003708e#1911 | 0           |
| 0x140037085#1937 | 0x14003708e#1938 | 0           |
| 0x140037085#1968 | 0x14003708e#1969 | 0           |
| 0x140037085#1995 | 0x14003708e#1996 | 0           |
| 0x140037085#2022 | 0x14003708e#2023 | 0           |
| 0x140037085#2049 | 0x14003708e#2050 | 0           |
| 0x140037085#2157 | 0x14003708e#2158 | 0           |
| 0x14003708e#119  | 0x14003708e#2482 | 0           |
| 0x140037081#1206 | 0x140037097#124  | 0           |
| 0x140037097#2483 | 0x140037097#125  | 1           |
| 0x140037093#2403 | 0x140037097#126  | 1           |
| 0x14003708e#1677 | 0x140037097#1678 | 0           |
| 0x14003708e#1884 | 0x140037097#1885 | 0           |
| 0x14003708e#1911 | 0x140037097#1912 | 0           |
| 0x14003708e#1938 | 0x140037097#1939 | 0           |
| 0x14003708e#1969 | 0x140037097#1970 | 0           |
| 0x14003708e#1996 | 0x140037097#1997 | 0           |
| 0x14003708e#2023 | 0x140037097#2024 | 0           |
| 0x14003708e#2050 | 0x140037097#2051 | 0           |
| 0x14003708e#2158 | 0x140037097#2159 | 0           |
| 0x140037097#124  | 0x140037097#2483 | 0           |
| 0x140037081#1206 | 0x1400370a0#129  | 0           |
| 0x1400370a0#2484 | 0x1400370a0#130  | 1           |
| 0x14003709c#2404 | 0x1400370a0#131  | 1           |
| 0x140037097#1678 | 0x1400370a0#1679 | 0           |
| 0x140037097#1885 | 0x1400370a0#1886 | 0           |
| 0x140037097#1912 | 0x1400370a0#1913 | 0           |
| 0x140037097#1939 | 0x1400370a0#1940 | 0           |
| 0x140037097#1970 | 0x1400370a0#1971 | 0           |
| 0x140037097#1997 | 0x1400370a0#1998 | 0           |
| 0x140037097#2024 | 0x1400370a0#2025 | 0           |
| 0x140037097#2051 | 0x1400370a0#2052 | 0           |
| 0x140037097#2159 | 0x1400370a0#2160 | 0           |
| 0x1400370a0#129  | 0x1400370a0#2484 | 0           |
| 0x140037081#1206 | 0x1400370af#144  | 0           |
| 0x1400370af#2485 | 0x1400370af#145  | 1           |
| 0x1400370af#144  | 0x1400370af#2485 | 0           |
| 0x1400370ce#2486 | 0x1400370ce#189  | 1           |
| 0x1400370a0#1679 | 0x1400370ce#1680 | 0           |
| 0x1400370a5#132  | 0x1400370ce#2486 | 0           |

## normalized_result.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x140036dff#76   | direct_call        | 0             |             |
| 0x140036e0b#92   | conditional_branch |               | 1           |
| 0x140036e0d#94   | memory_write       | 1             | 2           |
| 0x140036e12#1627 | memory_write       | 1             | 2           |
| 0x140036e12#1628 | memory_write       | 1             | 2           |
| 0x140036e16#104  | memory_write       | 1             | 2           |
| 0x140036e1a#107  | memory_write       | 1             | 2           |
| 0x140036e22#110  | memory_write       | 1             | 2           |
| 0x140036e2d#199  | conditional_branch |               | 1           |
| 0x140036e2f#201  | memory_write       | 1             | 2           |
| 0x140036e40#223  | conditional_branch |               | 1           |
| 0x140036e6b#250  | direct_call        | 0             |             |
| 0x140036e80#275  | conditional_branch |               | 1           |
| 0x140036e8b#289  | direct_call        | 0             |             |
| 0x140036e92#300  | conditional_branch |               | 1           |
| 0x140036e94#302  | memory_write       | 1             | 2           |
| 0x140036e9d#1632 | memory_write       | 1             | 2           |
| 0x140036e9d#1633 | memory_write       | 1             | 2           |
| 0x140036ea1#312  | memory_write       | 1             | 2           |
| 0x140036ea5#315  | memory_write       | 1             | 2           |
| 0x140036ead#318  | memory_write       | 1             | 2           |
| 0x140036ec3#334  | direct_call        | 0             |             |
| 0x140036ecb#344  | conditional_branch |               | 1           |
| 0x140036ed9#357  | conditional_branch |               | 1           |
| 0x140036ee5#373  | conditional_branch |               | 1           |
| 0x140036ee7#375  | memory_write       | 1             | 2           |
| 0x140036eed#1637 | memory_write       | 1             | 2           |
| 0x140036eed#1638 | memory_write       | 1             | 2           |
| 0x140036ef1#381  | memory_write       | 1             | 2           |
| 0x140036ef5#384  | memory_write       | 1             | 2           |
| 0x140036efd#387  | memory_write       | 1             | 2           |
| 0x140036f2b#418  | direct_call        | 0             |             |
| 0x140036f3b#432  | conditional_branch |               | 1           |
| 0x140036f56#460  | conditional_branch |               | 1           |
| 0x140036f6a#485  | conditional_branch |               | 1           |
| 0x140036f83#507  | direct_call        | 0             |             |
| 0x140036f8b#517  | conditional_branch |               | 1           |
| 0x140036f93#533  | conditional_branch |               | 1           |
| 0x140036fa0#556  | conditional_branch |               | 1           |
| 0x140036fa6#562  | memory_write       | 1             | 2           |
| 0x140036fad#568  | memory_write       | 1             | 2           |
| 0x140036fb6#574  | memory_write       | 1             | 2           |
| 0x140036fba#577  | memory_write       | 1             | 2           |
| 0x140036fc3#583  | memory_write       | 1             | 2           |
| 0x140036fc9#596  | memory_write       | 1             | 2           |
| 0x140036fcf#1647 | memory_write       | 1             | 2           |
| 0x140036fcf#1648 | memory_write       | 1             | 2           |
| 0x140036fd3#606  | memory_write       | 1             | 2           |
| 0x140036fd7#609  | memory_write       | 1             | 2           |
| 0x140036fdf#612  | memory_write       | 1             | 2           |
| 0x140036fec#627  | conditional_branch |               | 1           |
| 0x140036ffd#649  | conditional_branch |               | 1           |
| 0x140036fff#651  | memory_read        | 1             |             |
| 0x14003700e#683  | conditional_branch |               | 1           |
| 0x140037017#696  | direct_call        | 0             |             |
| 0x140037036#699  | indirect_call      | 0             |             |
| 0x140037038#701  | memory_write       | 1             | 2           |
| 0x140037040#706  | direct_call        | 0             |             |
| 0x140037050#733  | conditional_branch |               | 1           |
| 0x140037054#736  | memory_write       | 1             | 2           |
| 0x140037059#1652 | memory_write       | 1             | 2           |
| 0x140037059#1653 | memory_write       | 1             | 2           |
| 0x14003705d#746  | memory_write       | 1             | 2           |
| 0x140037061#749  | memory_write       | 1             | 2           |
| 0x140037069#752  | memory_write       | 1             | 2           |
| 0x140037075#767  | conditional_branch |               | 1           |
| 0x14003707a#323  | memory_write       | 1             | 2           |
| 0x14003707a#324  | direct_call        | 0             |             |
| 0x140037085#115  | memory_write       | 1             | 2           |
| 0x140037085#116  | direct_call        | 0             |             |
| 0x14003708e#120  | memory_write       | 1             | 2           |
| 0x14003708e#121  | direct_call        | 0             |             |
| 0x140037097#125  | memory_write       | 1             | 2           |
| 0x140037097#126  | direct_call        | 0             |             |
| 0x1400370a0#130  | memory_write       | 1             | 2           |
| 0x1400370a0#131  | direct_call        | 0             |             |
| 0x1400370af#145  | memory_write       | 1             | 2           |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type              |
|---------|---------|------------------------|
| 0       | param_1 | /winnt.h/LARGE_INTEGER |
| 1       | param_2 | /undefined8            |
| 2       | param_3 | /winnt.h/LARGE_INTEGER |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 1       | 0x140036dff#76   | 2           |
| 0       | 0x140036dff#2419 | 0           |
| 0       | 0x140036e0d#2475 | 0           |
| 0       | 0x140036e12#99   | 0           |
| 0       | 0x140036e12#1629 | 0           |
| 0       | 0x140036e16#102  | 0           |
| 0       | 0x140036e1a#105  | 0           |
| 0       | 0x140036e22#108  | 0           |
| 0       | 0x140036e2f#2474 | 0           |
| 0       | 0x140036e94#2467 | 0           |
| 0       | 0x140036e9d#307  | 0           |
| 0       | 0x140036e9d#1634 | 0           |
| 0       | 0x140036ea1#310  | 0           |
| 0       | 0x140036ea5#313  | 0           |
| 0       | 0x140036ead#316  | 0           |
| 2       | 0x140036ee5#2432 | 0           |
| 0       | 0x140036ee7#2460 | 0           |
| 0       | 0x140036eed#376  | 0           |
| 0       | 0x140036eed#1639 | 0           |
| 0       | 0x140036ef1#379  | 0           |
| 0       | 0x140036ef5#382  | 0           |
| 0       | 0x140036efd#385  | 0           |
| 0       | 0x140036fa6#2453 | 0           |
| 0       | 0x140036fad#566  | 0           |
| 0       | 0x140036fb6#572  | 0           |
| 0       | 0x140036fba#575  | 0           |
| 0       | 0x140036fc3#581  | 0           |
| 0       | 0x140036fc9#2441 | 0           |
| 0       | 0x140036fcf#601  | 0           |
| 0       | 0x140036fcf#1649 | 0           |
| 0       | 0x140036fd3#604  | 0           |
| 0       | 0x140036fd7#607  | 0           |
| 0       | 0x140036fdf#610  | 0           |
| 0       | 0x140037038#2466 | 0           |
| 0       | 0x140037054#2425 | 0           |
| 0       | 0x140037059#741  | 0           |
| 0       | 0x140037059#1654 | 0           |
| 0       | 0x14003705d#744  | 0           |
| 0       | 0x140037061#747  | 0           |
| 0       | 0x140037069#750  | 0           |
| 0       | 0x1400370a5#132  | 0           |

## normalized_result.native_value_flow.truncated

false

## normalized_result.native_value_flow.omitted_operations_lower_bound

0

## normalized_result.native_value_flow.known_omitted_inputs

0

## normalized_result.native_value_flow.known_omitted_edges

0

## normalized_result.native_value_flow.limitations

High p-code is decompiler-derived, not original source or runtime behavior. is_dead preserves the Java AST flag; decoded block members can retain that flag, so block_membership separately reports actual syntax-tree membership.,Def-use links do not cross function boundaries and may omit memory aliasing, call side effects, or unresolved indirect flow.,Memory read/write effects include stack and temporary memory operations; they do not identify persistent state or business meaning.,Operation, input, and def-use limits can truncate large functions; inspect truncation, omitted lower bounds, and known omitted counts before drawing conclusions.,Known omitted-edge counts cover links omitted from retained operations; omitted operations may contain additional uncounted links.

## normalized_result.limitations

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

