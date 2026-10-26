## evidence_id

ev_b0b57babc44c6cf821b6a85c66a0d79c760d7b901080f1f5a2bb22b3212fb3ae

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
| procedure | 0x14010eebc |

## raw_result.value.procedure.address

0x14010ee30

## raw_result.value.procedure.name

FUN_14010ee30

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
| 0x14010ee30 | 0x14010f0c2 |
| 0x14010f2e2 | 0x14010f2e2 |

## raw_result.value.procedure.body.total_bytes

660

## raw_result.value.procedure.body.span_bytes

1203

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_14010ee30()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8   | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |

## raw_result.value.pseudocode


void FUN_14010ee30(longlong param_1,ulonglong param_2)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [80];
  ulonglong local_18;
  
  if (0xf < param_2) {
    return;
  }
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_68;
  if (param_2 != 0xf) {
    FUN_1401bbbb0();
  }
  if (((*(ulonglong *)(param_1 + 0x2ec8) - 0xd < 2) && (param_2 != *(ulonglong *)(param_1 + 0x2ec8))
      ) && (*(HWND *)(param_1 + 0x230) != (HWND)0x0)) {
    KillTimer(*(HWND *)(param_1 + 0x230),3);
    *(undefined1 *)(param_1 + 0x1828) = 0;
  }
  if (param_2 == 8) {
    cVar1 = FUN_1401f84c0(param_1,5);
    if (cVar1 == '\0') goto LAB_14010ef5c;
    *(undefined1 *)(param_1 + 0x1f5b) = 1;
LAB_14010eec3:
    *(undefined1 *)(param_1 + 0x1f5c) = 0;
    if (param_2 != 10) goto LAB_14010ef89;
    cVar1 = FUN_1401f84c0(param_1,7);
    if (cVar1 == '\0') goto LAB_14010ef89;
    FUN_1400d11f0(param_1,1);
LAB_14010eef3:
    FUN_1400d5b70(param_1,0);
    if (param_2 != 0xc) goto LAB_14010efbc;
    cVar1 = FUN_1401f84c0(param_1,8);
    if (cVar1 == '\0') goto LAB_14010efbc;
    FUN_14012c5c0(param_1,1);
LAB_14010ef26:
    *(undefined1 *)(param_1 + 0x1f5d) = 0;
    if (param_2 != 0xe) goto LAB_14010efec;
    cVar1 = FUN_1401f84c0(param_1,0);
    if (cVar1 == '\0') goto LAB_14010efec;
    *(undefined1 *)(param_1 + 0x1f5e) = 1;
    *(undefined1 *)(param_1 + 0xb92) = 0;
  }
  else {
LAB_14010ef5c:
    *(undefined1 *)(param_1 + 0x1f5b) = 0;
    if (param_2 != 9) goto LAB_14010eec3;
    cVar1 = FUN_1401f84c0(param_1,6);
    if (cVar1 == '\0') goto LAB_14010eec3;
    *(undefined1 *)(param_1 + 0x1f5c) = 1;
LAB_14010ef89:
    FUN_1400d11f0(param_1,0);
    if (param_2 != 0xb) goto LAB_14010eef3;
    cVar1 = FUN_1401f84c0(param_1,2);
    if (cVar1 == '\0') goto LAB_14010eef3;
    FUN_1400d5b70(param_1,1);
LAB_14010efbc:
    FUN_14012c5c0(param_1,0);
    if (param_2 != 0xd) goto LAB_14010ef26;
    cVar1 = FUN_1401f84c0(param_1,1);
    if (cVar1 == '\0') goto LAB_14010ef26;
    *(undefined1 *)(param_1 + 0x1f5d) = 1;
LAB_14010efec:
    *(undefined1 *)(param_1 + 0x1f5e) = 0;
    *(undefined1 *)(param_1 + 0xb92) = 0;
    if (param_2 == 0xf) goto LAB_14010f007;
  }
  *(ulonglong *)(param_1 + 0x2ed0) = param_2;
LAB_14010f007:
  *(ulonglong *)(param_1 + 0x2ec8) = param_2;
  uVar2 = FUN_1400e6910(param_1);
  FUN_14003af90(*(undefined8 *)(param_1 + 0x290),0x1001,0,uVar2);
  uVar2 = FUN_1400e6910(param_1);
  FUN_14003af90(*(undefined8 *)(param_1 + 0x290),0x1026,0,uVar2);
  FUN_1400ddca0(param_1);
  uVar3 = param_2;
  if (param_2 == 0xf) {
    uVar3 = 0xffffffffffffffff;
  }
  FUN_14003af90(*(undefined8 *)(param_1 + 0x240),0x186,uVar3,0);
  InvalidateRect(*(HWND *)(param_1 + 0x240),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x248),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x260),(RECT *)0x0,0);
                    /* WARNING: Could not recover jumptable at 0x00014010f0c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&DAT_14010f2ec + param_2 * 4)))();
  return;
}



## raw_result.value.assembly

0x14010ee30: CMP RDX, 0x10,0x14010ee34: JNC 0x14010f2e2,0x14010ee3a: MOV qword ptr [RSP + 0x18], RBX,0x14010ee3f: MOV qword ptr [RSP + 0x20], RSI,0x14010ee44: PUSH RDI,0x14010ee45: SUB RSP, 0x60,0x14010ee49: MOV RAX, qword ptr [0x1404c7ac0],0x14010ee50: XOR RAX, RSP,0x14010ee53: MOV qword ptr [RSP + 0x50], RAX,0x14010ee58: MOV RDI, RDX,0x14010ee5b: MOV RBX, RCX,0x14010ee5e: CMP RDX, 0xf,0x14010ee62: JZ 0x14010ee69,0x14010ee64: CALL 0x1401bbbb0,0x14010ee69: MOV RCX, qword ptr [RBX + 0x2ec8],0x14010ee70: LEA RAX, [RCX + -0xd],0x14010ee74: CMP RAX, 0x1,0x14010ee78: JA 0x14010ee9d,0x14010ee7a: CMP RDI, RCX,0x14010ee7d: JZ 0x14010ee9d,0x14010ee7f: MOV RCX, qword ptr [RBX + 0x230],0x14010ee86: TEST RCX, RCX,0x14010ee89: JZ 0x14010ee9d,0x14010ee8b: MOV EDX, 0x3,0x14010ee90: CALL qword ptr [0x14037af78],0x14010ee96: MOV byte ptr [RBX + 0x1828], 0x0,0x14010ee9d: CMP RDI, 0x8,0x14010eea1: JNZ 0x14010ef5c,0x14010eea7: MOV EDX, 0x5,0x14010eeac: MOV RCX, RBX,0x14010eeaf: CALL 0x1401f84c0,0x14010eeb4: TEST AL, AL,0x14010eeb6: JZ 0x14010ef5c,0x14010eebc: MOV byte ptr [RBX + 0x1f5b], 0x1,0x14010eec3: MOV byte ptr [RBX + 0x1f5c], 0x0,0x14010eeca: CMP RDI, 0xa,0x14010eece: JNZ 0x14010ef89,0x14010eed4: MOV EDX, 0x7,0x14010eed9: MOV RCX, RBX,0x14010eedc: CALL 0x1401f84c0,0x14010eee1: TEST AL, AL,0x14010eee3: JZ 0x14010ef89,0x14010eee9: MOV DL, 0x1,0x14010eeeb: MOV RCX, RBX,0x14010eeee: CALL 0x1400d11f0,0x14010eef3: XOR EDX, EDX,0x14010eef5: MOV RCX, RBX,0x14010eef8: CALL 0x1400d5b70,0x14010eefd: CMP RDI, 0xc,0x14010ef01: JNZ 0x14010efbc,0x14010ef07: MOV EDX, 0x8,0x14010ef0c: MOV RCX, RBX,0x14010ef0f: CALL 0x1401f84c0,0x14010ef14: TEST AL, AL,0x14010ef16: JZ 0x14010efbc,0x14010ef1c: MOV DL, 0x1,0x14010ef1e: MOV RCX, RBX,0x14010ef21: CALL 0x14012c5c0,0x14010ef26: MOV byte ptr [RBX + 0x1f5d], 0x0,0x14010ef2d: CMP RDI, 0xe,0x14010ef31: JNZ 0x14010efec,0x14010ef37: XOR EDX, EDX,0x14010ef39: MOV RCX, RBX,0x14010ef3c: CALL 0x1401f84c0,0x14010ef41: TEST AL, AL,0x14010ef43: JZ 0x14010efec,0x14010ef49: MOV byte ptr [RBX + 0x1f5e], 0x1,0x14010ef50: MOV byte ptr [RBX + 0xb92], 0x0,0x14010ef57: JMP 0x14010f000,0x14010ef5c: MOV byte ptr [RBX + 0x1f5b], 0x0,0x14010ef63: CMP RDI, 0x9,0x14010ef67: JNZ 0x14010eec3,0x14010ef6d: MOV EDX, 0x6,0x14010ef72: MOV RCX, RBX,0x14010ef75: CALL 0x1401f84c0,0x14010ef7a: TEST AL, AL,0x14010ef7c: JZ 0x14010eec3,0x14010ef82: MOV byte ptr [RBX + 0x1f5c], 0x1,0x14010ef89: XOR EDX, EDX,0x14010ef8b: MOV RCX, RBX,0x14010ef8e: CALL 0x1400d11f0,0x14010ef93: CMP RDI, 0xb,0x14010ef97: JNZ 0x14010eef3,0x14010ef9d: MOV EDX, 0x2,0x14010efa2: MOV RCX, RBX,0x14010efa5: CALL 0x1401f84c0,0x14010efaa: TEST AL, AL,0x14010efac: JZ 0x14010eef3,0x14010efb2: MOV DL, 0x1,0x14010efb4: MOV RCX, RBX,0x14010efb7: CALL 0x1400d5b70,0x14010efbc: XOR EDX, EDX,0x14010efbe: MOV RCX, RBX,0x14010efc1: CALL 0x14012c5c0,0x14010efc6: CMP RDI, 0xd,0x14010efca: JNZ 0x14010ef26,0x14010efd0: MOV EDX, 0x1,0x14010efd5: MOV RCX, RBX,0x14010efd8: CALL 0x1401f84c0,0x14010efdd: TEST AL, AL,0x14010efdf: JZ 0x14010ef26,0x14010efe5: MOV byte ptr [RBX + 0x1f5d], 0x1,0x14010efec: MOV byte ptr [RBX + 0x1f5e], 0x0,0x14010eff3: MOV byte ptr [RBX + 0xb92], 0x0,0x14010effa: CMP RDI, 0xf,0x14010effe: JZ 0x14010f007,0x14010f000: MOV qword ptr [RBX + 0x2ed0], RDI,0x14010f007: MOV qword ptr [RBX + 0x2ec8], RDI,0x14010f00e: MOV RCX, RBX,0x14010f011: CALL 0x1400e6910,0x14010f016: MOV R9D, EAX,0x14010f019: XOR R8D, R8D,0x14010f01c: MOV EDX, 0x1001,0x14010f021: MOV RCX, qword ptr [RBX + 0x290],0x14010f028: CALL 0x14003af90,0x14010f02d: MOV RCX, RBX,0x14010f030: CALL 0x1400e6910,0x14010f035: MOV R9D, EAX,0x14010f038: XOR R8D, R8D,0x14010f03b: MOV EDX, 0x1026,0x14010f040: MOV RCX, qword ptr [RBX + 0x290],0x14010f047: CALL 0x14003af90,0x14010f04c: MOV RCX, RBX,0x14010f04f: CALL 0x1400ddca0,0x14010f054: MOV R8, RDI,0x14010f057: MOV RAX, -0x1,0x14010f05e: CMP RDI, 0xf,0x14010f062: CMOVZ R8, RAX,0x14010f066: XOR R9D, R9D,0x14010f069: MOV EDX, 0x186,0x14010f06e: MOV RCX, qword ptr [RBX + 0x240],0x14010f075: CALL 0x14003af90,0x14010f07a: XOR R8D, R8D,0x14010f07d: XOR EDX, EDX,0x14010f07f: MOV RCX, qword ptr [RBX + 0x240],0x14010f086: CALL qword ptr [0x14037ae58],0x14010f08c: XOR R8D, R8D,0x14010f08f: XOR EDX, EDX,0x14010f091: MOV RCX, qword ptr [RBX + 0x248],0x14010f098: CALL qword ptr [0x14037ae58],0x14010f09e: XOR R8D, R8D,0x14010f0a1: XOR EDX, EDX,0x14010f0a3: MOV RCX, qword ptr [RBX + 0x260],0x14010f0aa: CALL qword ptr [0x14037ae58],0x14010f0b0: LEA RCX, [0x140000000],0x14010f0b7: MOV EAX, dword ptr [RCX + RDI*0x4 + 0x10f2ec],0x14010f0be: ADD RAX, RCX,0x14010f0c1: JMP RAX,0x14010f2e2: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x14007a6d0 | FUN_14007a6d0 | [object Object] | [object Object] |
| 0x14007bb50 | FUN_14007bb50 | [object Object] | [object Object] |
| 0x1400bb4c0 | FUN_1400bb4c0 | [object Object] | [object Object] |
| 0x1400dc380 | FUN_1400dc380 | [object Object] | [object Object] |
| 0x1400e5c60 | FUN_1400e5c60 | [object Object] | [object Object] |
| 0x1400e9230 | FUN_1400e9230 | [object Object] | [object Object] |
| 0x14010b8e0 | FUN_14010b8e0 | [object Object] | [object Object] |
| 0x14010bbb0 | FUN_14010bbb0 | [object Object] | [object Object] |
| 0x14016f5e0 | FUN_14016f5e0 | [object Object] | [object Object] |
| 0x14017f7f0 | FUN_14017f7f0 | [object Object] | [object Object] |
| 0x14018e080 | FUN_14018e080 | [object Object] | [object Object] |
| 0x14018e2a0 | FUN_14018e2a0 | [object Object] | [object Object] |
| 0x1401a95d0 | FUN_1401a95d0 | [object Object] | [object Object] |
| 0x1401b3dc0 | FUN_1401b3dc0 | [object Object] | [object Object] |
| 0x1401bb1f0 | FUN_1401bb1f0 | [object Object] | [object Object] |
| 0x1401bb210 | FUN_1401bb210 | [object Object] | [object Object] |
| 0x1401e0850 | FUN_1401e0850 | [object Object] | [object Object] |
| 0x1401e9e90 | FUN_1401e9e90 | [object Object] | [object Object] |

## raw_result.value.callees

| address        | name                       | classification  | body            |
|----------------|----------------------------|-----------------|-----------------|
| EXTERNAL:0x16a | USER32.DLL::InvalidateRect | [object Object] | [object Object] |
| EXTERNAL:0x18e | USER32.DLL::KillTimer      | [object Object] | [object Object] |
| 0x14003af90    | FUN_14003af90              | [object Object] | [object Object] |
| 0x1400d11f0    | FUN_1400d11f0              | [object Object] | [object Object] |
| 0x1400d5b70    | FUN_1400d5b70              | [object Object] | [object Object] |
| 0x1400ddca0    | FUN_1400ddca0              | [object Object] | [object Object] |
| 0x1400e6910    | FUN_1400e6910              | [object Object] | [object Object] |
| 0x14012c5c0    | FUN_14012c5c0              | [object Object] | [object Object] |
| 0x1401bbbb0    | FUN_1401bbbb0              | [object Object] | [object Object] |
| 0x1401f84c0    | FUN_1401f84c0              | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14007a708    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14007bc1c    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400bcb79    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400bcba1    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400dc907    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400e5cc6    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400e5d1d    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400e926e    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14010b94b    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14010bbb6    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14010bbc9    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14016f791    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14016f7ed    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14016f91e    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14016faab    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14017f833    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14017fc3c    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14018e13e    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14018ea0d    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a9ad3    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a9b4f    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401b4532    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401bb202    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401bb242    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401bb281    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e08ea    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e0a66    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401ea122    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401ea1ea    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1404d9f48    | 0x14010ee30    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14010ee34    | 0x14010f2e2              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee3a    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14010ee3f    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x14010ee49    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x14010ee53    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x14010ee62    | 0x14010ee69              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee64    | 0x1401bbbb0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee78    | 0x14010ee9d              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee7d    | 0x14010ee9d              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee89    | 0x14010ee9d              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee90    | EXTERNAL:0x18e           | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee90    | 0x14037af78              | [object Object]  |                  | [object Object] |
| 0x14010eea1    | 0x14010ef5c              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eeaf    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eeb6    | 0x14010ef5c              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eece    | 0x14010ef89              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eedc    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eee3    | 0x14010ef89              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eeee    | 0x1400d11f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eef8    | 0x1400d5b70              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef01    | 0x14010efbc              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef0f    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef16    | 0x14010efbc              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef21    | 0x14012c5c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef31    | 0x14010efec              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef3c    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef43    | 0x14010efec              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef57    | 0x14010f000              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef67    | 0x14010eec3              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef75    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef7c    | 0x14010eec3              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef8e    | 0x1400d11f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef97    | 0x14010eef3              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efa5    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efac    | 0x14010eef3              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efb7    | 0x1400d5b70              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efc1    | 0x14012c5c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efca    | 0x14010ef26              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efd8    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efdf    | 0x14010ef26              | [object Object]  | [object Object]  | [object Object] |
| 0x14010effe    | 0x14010f007              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f011    | 0x1400e6910              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f028    | 0x14003af90              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f030    | 0x1400e6910              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f047    | 0x14003af90              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f04f    | 0x1400ddca0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f075    | 0x14003af90              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f086    | EXTERNAL:0x16a           | [object Object]  | [object Object]  | [object Object] |
| 0x14010f086    | 0x14037ae58              | [object Object]  |                  | [object Object] |
| 0x14010f098    | EXTERNAL:0x16a           | [object Object]  | [object Object]  | [object Object] |
| 0x14010f098    | 0x14037ae58              | [object Object]  |                  | [object Object] |
| 0x14010f0aa    | EXTERNAL:0x16a           | [object Object]  | [object Object]  | [object Object] |
| 0x14010f0aa    | 0x14037ae58              | [object Object]  |                  | [object Object] |
| 0x14010f0b0    | 0x140000000              | [object Object]  |                  | [object Object] |
| 0x14010f0b7    | 0x14010f2ec              | [object Object]  |                  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address        | value                        | source_address |
|----------------|------------------------------|----------------|
| 0x140000000    | IMAGE_DOS_HEADER_140000000   | 0x14010f0b0    |
| 0x14003af90    | FUN_14003af90                | 0x14010f028    |
| 0x14003af90    | FUN_14003af90                | 0x14010f047    |
| 0x14003af90    | FUN_14003af90                | 0x14010f075    |
| 0x1400d11f0    | FUN_1400d11f0                | 0x14010eeee    |
| 0x1400d11f0    | FUN_1400d11f0                | 0x14010ef8e    |
| 0x1400d5b70    | FUN_1400d5b70                | 0x14010eef8    |
| 0x1400d5b70    | FUN_1400d5b70                | 0x14010efb7    |
| 0x1400ddca0    | FUN_1400ddca0                | 0x14010f04f    |
| 0x1400e6910    | FUN_1400e6910                | 0x14010f011    |
| 0x1400e6910    | FUN_1400e6910                | 0x14010f030    |
| 0x14010ee69    | LAB_14010ee69                | 0x14010ee62    |
| 0x14010ee9d    | LAB_14010ee9d                | 0x14010ee78    |
| 0x14010ee9d    | LAB_14010ee9d                | 0x14010ee7d    |
| 0x14010ee9d    | LAB_14010ee9d                | 0x14010ee89    |
| 0x14010eec3    | LAB_14010eec3                | 0x14010ef67    |
| 0x14010eec3    | LAB_14010eec3                | 0x14010ef7c    |
| 0x14010eef3    | LAB_14010eef3                | 0x14010ef97    |
| 0x14010eef3    | LAB_14010eef3                | 0x14010efac    |
| 0x14010ef26    | LAB_14010ef26                | 0x14010efca    |
| 0x14010ef26    | LAB_14010ef26                | 0x14010efdf    |
| 0x14010ef5c    | LAB_14010ef5c                | 0x14010eea1    |
| 0x14010ef5c    | LAB_14010ef5c                | 0x14010eeb6    |
| 0x14010ef89    | LAB_14010ef89                | 0x14010eece    |
| 0x14010ef89    | LAB_14010ef89                | 0x14010eee3    |
| 0x14010efbc    | LAB_14010efbc                | 0x14010ef01    |
| 0x14010efbc    | LAB_14010efbc                | 0x14010ef16    |
| 0x14010efec    | LAB_14010efec                | 0x14010ef31    |
| 0x14010efec    | LAB_14010efec                | 0x14010ef43    |
| 0x14010f000    | LAB_14010f000                | 0x14010ef57    |
| 0x14010f007    | LAB_14010f007                | 0x14010effe    |
| 0x14010f2e2    | LAB_14010f2e2                | 0x14010ee34    |
| 0x14010f2ec    | DAT_14010f2ec                | 0x14010f0b7    |
| 0x14012c5c0    | FUN_14012c5c0                | 0x14010ef21    |
| 0x14012c5c0    | FUN_14012c5c0                | 0x14010efc1    |
| 0x1401bbbb0    | FUN_1401bbbb0                | 0x14010ee64    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010eeaf    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010eedc    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010ef0f    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010ef3c    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010ef75    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010efa5    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010efd8    |
| 0x14037ae58    | PTR_InvalidateRect_14037ae58 | 0x14010f086    |
| 0x14037ae58    | PTR_InvalidateRect_14037ae58 | 0x14010f098    |
| 0x14037ae58    | PTR_InvalidateRect_14037ae58 | 0x14010f0aa    |
| 0x14037af78    | PTR_KillTimer_14037af78      | 0x14010ee90    |
| 0x1404c7ac0    | DAT_1404c7ac0                | 0x14010ee49    |
| EXTERNAL:0x16a | USER32.DLL::InvalidateRect   | 0x14010f086    |
| EXTERNAL:0x16a | USER32.DLL::InvalidateRect   | 0x14010f098    |
| EXTERNAL:0x16a | USER32.DLL::InvalidateRect   | 0x14010f0aa    |
| EXTERNAL:0x18e | USER32.DLL::KillTimer        | 0x14010ee90    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14010ee30 | 0x14010ee3a | 0x14010ee3a,0x14010f2e2 |
| 0x14010ee3a | 0x14010ee64 | 0x14010ee64,0x14010ee69 |
| 0x14010ee64 | 0x14010ee69 | 0x14010ee69             |
| 0x14010ee69 | 0x14010ee7a | 0x14010ee7a,0x14010ee9d |
| 0x14010ee7a | 0x14010ee7f | 0x14010ee7f,0x14010ee9d |
| 0x14010ee7f | 0x14010ee8b | 0x14010ee8b,0x14010ee9d |
| 0x14010ee8b | 0x14010ee9d | 0x14010ee9d             |
| 0x14010ee9d | 0x14010eea7 | 0x14010eea7,0x14010ef5c |
| 0x14010eea7 | 0x14010eebc | 0x14010eebc,0x14010ef5c |
| 0x14010eebc | 0x14010eec3 | 0x14010eec3             |
| 0x14010eec3 | 0x14010eed4 | 0x14010eed4,0x14010ef89 |
| 0x14010eed4 | 0x14010eee9 | 0x14010eee9,0x14010ef89 |
| 0x14010eee9 | 0x14010eef3 | 0x14010eef3             |
| 0x14010eef3 | 0x14010ef07 | 0x14010ef07,0x14010efbc |
| 0x14010ef07 | 0x14010ef1c | 0x14010ef1c,0x14010efbc |
| 0x14010ef1c | 0x14010ef26 | 0x14010ef26             |
| 0x14010ef26 | 0x14010ef37 | 0x14010ef37,0x14010efec |
| 0x14010ef37 | 0x14010ef49 | 0x14010ef49,0x14010efec |
| 0x14010ef49 | 0x14010ef5c | 0x14010f000             |
| 0x14010ef5c | 0x14010ef6d | 0x14010eec3,0x14010ef6d |
| 0x14010ef6d | 0x14010ef82 | 0x14010eec3,0x14010ef82 |
| 0x14010ef82 | 0x14010ef89 | 0x14010ef89             |
| 0x14010ef89 | 0x14010ef9d | 0x14010eef3,0x14010ef9d |
| 0x14010ef9d | 0x14010efb2 | 0x14010eef3,0x14010efb2 |
| 0x14010efb2 | 0x14010efbc | 0x14010efbc             |
| 0x14010efbc | 0x14010efd0 | 0x14010ef26,0x14010efd0 |
| 0x14010efd0 | 0x14010efe5 | 0x14010ef26,0x14010efe5 |
| 0x14010efe5 | 0x14010efec | 0x14010efec             |
| 0x14010efec | 0x14010f000 | 0x14010f000,0x14010f007 |
| 0x14010f000 | 0x14010f007 | 0x14010f007             |
| 0x14010f007 | 0x14010f0c3 |                         |
| 0x14010f2e2 | 0x14010f2e3 |                         |

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

void

## raw_result.value.native_api.return_type.size_bytes

0

## raw_result.value.native_api.return_type.storage

<VOID>

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                 |
|------------------|-------------------------|----------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.  |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type void. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters

| role      | ordinal | name    | data_type | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|-----------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | longlong  | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | ulonglong | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x14010ee30#1    | 0x14010ee30 | 1        | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee34#11   | 0x14010ee34 | 11       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ee45#1670 | 0x14010ee45 | 1670     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee50#33   | 0x14010ee50 | 33       | INT_XOR      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee50#1674 | 0x14010ee50 | 1674     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ee5e#50   | 0x14010ee5e | 50       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee62#55   | 0x14010ee62 | 55       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ee64#58   | 0x14010ee64 | 58       | CALL         | true    | member           | [object Object]                                                                 |                 |
| 0x14010ee64#1427 | 0x14010ee64 | 1427     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee64#1586 | 0x14010ee64 | 1586     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee69#59   | 0x14010ee69 | 59       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee69#60   | 0x14010ee69 | 60       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee69#1477 | 0x14010ee69 | 1477     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee69#1621 | 0x14010ee69 | 1621     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee69#1675 | 0x14010ee69 | 1675     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ee70#62   | 0x14010ee70 | 62       | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee78#74   | 0x14010ee78 | 74       | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee78#76   | 0x14010ee78 | 76       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ee7a#82   | 0x14010ee7a | 82       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee7d#87   | 0x14010ee7d | 87       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ee7f#88   | 0x14010ee7f | 88       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee7f#89   | 0x14010ee7f | 89       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee7f#1676 | 0x14010ee7f | 1676     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ee86#95   | 0x14010ee86 | 95       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee89#100  | 0x14010ee89 | 100      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ee90#105  | 0x14010ee90 | 105      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ee90#1428 | 0x14010ee90 | 1428     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee90#1587 | 0x14010ee90 | 1587     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee96#106  | 0x14010ee96 | 106      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee96#108  | 0x14010ee96 | 108      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ee96#1454 | 0x14010ee96 | 1454     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee96#1677 | 0x14010ee96 | 1677     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ee9d#114  | 0x14010ee9d | 114      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee9d#1474 | 0x14010ee9d | 1474     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x14010ee9d#1618 | 0x14010ee9d | 1618     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x14010eea1#120  | 0x14010eea1 | 120      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010eeaf#125  | 0x14010eeaf | 125      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eeaf#1429 | 0x14010eeaf | 1429     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eeaf#1588 | 0x14010eeaf | 1588     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eeb4#130  | 0x14010eeb4 | 130      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eeb6#135  | 0x14010eeb6 | 135      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010eebc#136  | 0x14010eebc | 136      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eebc#138  | 0x14010eebc | 138      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010eebc#1455 | 0x14010eebc | 1455     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eebc#1680 | 0x14010eebc | 1680     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010eec3#139  | 0x14010eec3 | 139      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eec3#141  | 0x14010eec3 | 141      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010eec3#1456 | 0x14010eec3 | 1456     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eec3#1473 | 0x14010eec3 | 1473     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eec3#1617 | 0x14010eec3 | 1617     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eec3#1681 | 0x14010eec3 | 1681     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010eeca#147  | 0x14010eeca | 147      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eece#153  | 0x14010eece | 153      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010eedc#158  | 0x14010eedc | 158      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eedc#1431 | 0x14010eedc | 1431     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eedc#1590 | 0x14010eedc | 1590     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eee1#163  | 0x14010eee1 | 163      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eee3#168  | 0x14010eee3 | 168      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010eeee#173  | 0x14010eeee | 173      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010eeee#1435 | 0x14010eeee | 1435     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eeee#1594 | 0x14010eeee | 1594     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eef3#1471 | 0x14010eef3 | 1471     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eef3#1612 | 0x14010eef3 | 1612     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eef8#187  | 0x14010eef8 | 187      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010eef8#1436 | 0x14010eef8 | 1436     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eef8#1595 | 0x14010eef8 | 1595     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eefd#193  | 0x14010eefd | 193      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef01#199  | 0x14010ef01 | 199      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef0f#204  | 0x14010ef0f | 204      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef0f#1437 | 0x14010ef0f | 1437     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef0f#1596 | 0x14010ef0f | 1596     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef14#209  | 0x14010ef14 | 209      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef16#214  | 0x14010ef16 | 214      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef21#219  | 0x14010ef21 | 219      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef21#1440 | 0x14010ef21 | 1440     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef21#1599 | 0x14010ef21 | 1599     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef26#220  | 0x14010ef26 | 220      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef26#222  | 0x14010ef26 | 222      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef26#1457 | 0x14010ef26 | 1457     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef26#1470 | 0x14010ef26 | 1470     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef26#1611 | 0x14010ef26 | 1611     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef26#1683 | 0x14010ef26 | 1683     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ef2d#228  | 0x14010ef2d | 228      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef31#234  | 0x14010ef31 | 234      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef3c#248  | 0x14010ef3c | 248      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef3c#1441 | 0x14010ef3c | 1441     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef3c#1600 | 0x14010ef3c | 1600     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef41#253  | 0x14010ef41 | 253      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef43#258  | 0x14010ef43 | 258      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef49#259  | 0x14010ef49 | 259      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef49#261  | 0x14010ef49 | 261      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef49#1458 | 0x14010ef49 | 1458     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef49#1686 | 0x14010ef49 | 1686     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ef50#262  | 0x14010ef50 | 262      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef50#264  | 0x14010ef50 | 264      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef50#1459 | 0x14010ef50 | 1459     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef50#1687 | 0x14010ef50 | 1687     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ef57#265  | 0x14010ef57 | 265      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x14010ef5c#560  | 0x14010ef5c | 560      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef5c#562  | 0x14010ef5c | 562      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef5c#1465 | 0x14010ef5c | 1465     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef5c#1476 | 0x14010ef5c | 1476     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef5c#1620 | 0x14010ef5c | 1620     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef5c#1678 | 0x14010ef5c | 1678     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ef63#568  | 0x14010ef63 | 568      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef67#574  | 0x14010ef67 | 574      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef75#579  | 0x14010ef75 | 579      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef75#1430 | 0x14010ef75 | 1430     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef75#1589 | 0x14010ef75 | 1589     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef7a#584  | 0x14010ef7a | 584      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef7c#589  | 0x14010ef7c | 589      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef82#590  | 0x14010ef82 | 590      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef82#592  | 0x14010ef82 | 592      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef82#1466 | 0x14010ef82 | 1466     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef82#1679 | 0x14010ef82 | 1679     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ef89#1467 | 0x14010ef89 | 1467     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef89#1616 | 0x14010ef89 | 1616     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef8e#527  | 0x14010ef8e | 527      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef8e#1432 | 0x14010ef8e | 1432     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef8e#1591 | 0x14010ef8e | 1591     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef93#533  | 0x14010ef93 | 533      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef97#539  | 0x14010ef97 | 539      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010efa5#544  | 0x14010efa5 | 544      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efa5#1433 | 0x14010efa5 | 1433     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efa5#1592 | 0x14010efa5 | 1592     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efaa#549  | 0x14010efaa | 549      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efac#554  | 0x14010efac | 554      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010efb7#559  | 0x14010efb7 | 559      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010efb7#1434 | 0x14010efb7 | 1434     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efb7#1593 | 0x14010efb7 | 1593     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efbc#1472 | 0x14010efbc | 1472     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efbc#1613 | 0x14010efbc | 1613     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efc1#483  | 0x14010efc1 | 483      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010efc1#1438 | 0x14010efc1 | 1438     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efc1#1597 | 0x14010efc1 | 1597     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efc6#489  | 0x14010efc6 | 489      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efca#495  | 0x14010efca | 495      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010efd8#500  | 0x14010efd8 | 500      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efd8#1439 | 0x14010efd8 | 1439     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efd8#1598 | 0x14010efd8 | 1598     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efdd#505  | 0x14010efdd | 505      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efdf#510  | 0x14010efdf | 510      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010efe5#511  | 0x14010efe5 | 511      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efe5#513  | 0x14010efe5 | 513      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010efe5#1464 | 0x14010efe5 | 1464     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efe5#1682 | 0x14010efe5 | 1682     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010efec#453  | 0x14010efec | 453      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efec#455  | 0x14010efec | 455      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010efec#1462 | 0x14010efec | 1462     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efec#1468 | 0x14010efec | 1468     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efec#1614 | 0x14010efec | 1614     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efec#1684 | 0x14010efec | 1684     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010eff3#456  | 0x14010eff3 | 456      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eff3#458  | 0x14010eff3 | 458      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010eff3#1463 | 0x14010eff3 | 1463     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eff3#1685 | 0x14010eff3 | 1685     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010effa#464  | 0x14010effa | 464      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010effe#469  | 0x14010effe | 469      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010f000#266  | 0x14010f000 | 266      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f000#268  | 0x14010f000 | 268      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010f000#1460 | 0x14010f000 | 1460     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f000#1469 | 0x14010f000 | 1469     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f000#1615 | 0x14010f000 | 1615     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f000#1688 | 0x14010f000 | 1688     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f007#269  | 0x14010f007 | 269      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f007#271  | 0x14010f007 | 271      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010f007#1461 | 0x14010f007 | 1461     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f007#1475 | 0x14010f007 | 1475     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f007#1619 | 0x14010f007 | 1619     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f007#1689 | 0x14010f007 | 1689     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f011#275  | 0x14010f011 | 275      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f011#1442 | 0x14010f011 | 1442     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f011#1601 | 0x14010f011 | 1601     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f021#289  | 0x14010f021 | 289      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f021#290  | 0x14010f021 | 290      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f021#1690 | 0x14010f021 | 1690     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f028#294  | 0x14010f028 | 294      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x14010f028#1443 | 0x14010f028 | 1443     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f028#1602 | 0x14010f028 | 1602     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f030#298  | 0x14010f030 | 298      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f030#1444 | 0x14010f030 | 1444     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f030#1603 | 0x14010f030 | 1603     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f040#312  | 0x14010f040 | 312      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f040#313  | 0x14010f040 | 313      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f040#1691 | 0x14010f040 | 1691     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f047#317  | 0x14010f047 | 317      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x14010f047#1445 | 0x14010f047 | 1445     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f047#1604 | 0x14010f047 | 1604     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f04f#321  | 0x14010f04f | 321      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010f04f#1446 | 0x14010f04f | 1446     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f04f#1605 | 0x14010f04f | 1605     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f05e#329  | 0x14010f05e | 329      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f062#336  | 0x14010f062 | 336      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010f062#337  | 0x14010f062 | 337      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f062#1673 | 0x14010f062 | 1673     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f066#1094 | 0x14010f066 | 1094     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f06e#349  | 0x14010f06e | 349      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f06e#350  | 0x14010f06e | 350      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f06e#1692 | 0x14010f06e | 1692     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f075#354  | 0x14010f075 | 354      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x14010f075#1447 | 0x14010f075 | 1447     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f075#1606 | 0x14010f075 | 1606     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f07f#375  | 0x14010f07f | 375      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f07f#376  | 0x14010f07f | 376      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f07f#1693 | 0x14010f07f | 1693     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f086#381  | 0x14010f086 | 381      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14010f086#1448 | 0x14010f086 | 1448     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f086#1607 | 0x14010f086 | 1607     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f091#402  | 0x14010f091 | 402      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f091#403  | 0x14010f091 | 403      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f091#1694 | 0x14010f091 | 1694     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f098#408  | 0x14010f098 | 408      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14010f098#1449 | 0x14010f098 | 1449     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f098#1608 | 0x14010f098 | 1608     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0a3#429  | 0x14010f0a3 | 429      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0a3#430  | 0x14010f0a3 | 430      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0a3#1695 | 0x14010f0a3 | 1695     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f0aa#435  | 0x14010f0aa | 435      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14010f0aa#1450 | 0x14010f0aa | 1450     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0aa#1609 | 0x14010f0aa | 1609     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0b7#438  | 0x14010f0b7 | 438      | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0b7#439  | 0x14010f0b7 | 439      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010f0b7#440  | 0x14010f0b7 | 440      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0b7#839  | 0x14010f0b7 | 839      | INT_ZEXT     | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f0b7#1669 | 0x14010f0b7 | 1669     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0b7#1696 | 0x14010f0b7 | 1696     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f0be#1668 | 0x14010f0be | 1668     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0be#1671 | 0x14010f0be | 1671     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0be#1672 | 0x14010f0be | 1672     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010f0c1#452  | 0x14010f0c1 | 452      | CALLIND      | true    | member           | [object Object]                                                                 |                 |
| 0x14010f0c1#596  | 0x14010f0c1 | 596      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x14010f0c1#1451 | 0x14010f0c1 | 1451     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0c1#1453 | 0x14010f0c1 | 1453     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f0c1#1610 | 0x14010f0c1 | 1610     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0c1#1697 | 0x14010f0c1 | 1697     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f2e2#595  | 0x14010f2e2 | 595      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x14010f2e2#1452 | 0x14010f2e2 | 1452     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x14010ee30#1    | 0x14010ee34#11   | 1           |
| 0x14010ee50#1674 | 0x14010ee50#33   | 1           |
| 0x14010ee45#1670 | 0x14010ee50#1674 | 0           |
| 0x14010ee5e#50   | 0x14010ee62#55   | 1           |
| 0x14010ee50#33   | 0x14010ee64#1586 | 0           |
| 0x14010ee69#1675 | 0x14010ee69#60   | 1           |
| 0x14010ee64#1427 | 0x14010ee69#1477 | 1           |
| 0x14010ee50#33   | 0x14010ee69#1621 | 0           |
| 0x14010ee64#1586 | 0x14010ee69#1621 | 1           |
| 0x14010ee69#59   | 0x14010ee69#1675 | 0           |
| 0x14010ee69#60   | 0x14010ee70#62   | 0           |
| 0x14010ee70#62   | 0x14010ee78#74   | 0           |
| 0x14010ee78#74   | 0x14010ee78#76   | 1           |
| 0x14010ee69#60   | 0x14010ee7a#82   | 1           |
| 0x14010ee7a#82   | 0x14010ee7d#87   | 1           |
| 0x14010ee7f#1676 | 0x14010ee7f#89   | 1           |
| 0x14010ee7f#88   | 0x14010ee7f#1676 | 0           |
| 0x14010ee7f#89   | 0x14010ee86#95   | 0           |
| 0x14010ee86#95   | 0x14010ee89#100  | 1           |
| 0x14010ee7f#89   | 0x14010ee90#105  | 1           |
| 0x14010ee69#1477 | 0x14010ee90#1428 | 0           |
| 0x14010ee69#1621 | 0x14010ee90#1587 | 0           |
| 0x14010ee96#1677 | 0x14010ee96#108  | 1           |
| 0x14010ee90#1428 | 0x14010ee96#1454 | 0           |
| 0x14010ee96#106  | 0x14010ee96#1677 | 0           |
| 0x14010ee69#1477 | 0x14010ee9d#1474 | 0           |
| 0x14010ee69#1477 | 0x14010ee9d#1474 | 1           |
| 0x14010ee69#1477 | 0x14010ee9d#1474 | 2           |
| 0x14010ee96#1454 | 0x14010ee9d#1474 | 3           |
| 0x14010ee69#1621 | 0x14010ee9d#1618 | 0           |
| 0x14010ee69#1621 | 0x14010ee9d#1618 | 1           |
| 0x14010ee69#1621 | 0x14010ee9d#1618 | 2           |
| 0x14010ee90#1587 | 0x14010ee9d#1618 | 3           |
| 0x14010ee9d#114  | 0x14010eea1#120  | 1           |
| 0x14010ee9d#1474 | 0x14010eeaf#1429 | 0           |
| 0x14010ee9d#1618 | 0x14010eeaf#1588 | 0           |
| 0x14010eeaf#125  | 0x14010eeb4#130  | 0           |
| 0x14010eeb4#130  | 0x14010eeb6#135  | 1           |
| 0x14010eebc#1680 | 0x14010eebc#138  | 1           |
| 0x14010eeaf#1429 | 0x14010eebc#1455 | 0           |
| 0x14010eebc#136  | 0x14010eebc#1680 | 0           |
| 0x14010eec3#1681 | 0x14010eec3#141  | 1           |
| 0x14010eec3#1473 | 0x14010eec3#1456 | 0           |
| 0x14010eebc#1455 | 0x14010eec3#1473 | 0           |
| 0x14010ef5c#1465 | 0x14010eec3#1473 | 1           |
| 0x14010ef75#1430 | 0x14010eec3#1473 | 2           |
| 0x14010eeaf#1588 | 0x14010eec3#1617 | 0           |
| 0x14010ef5c#1620 | 0x14010eec3#1617 | 1           |
| 0x14010ef75#1589 | 0x14010eec3#1617 | 2           |
| 0x14010eec3#139  | 0x14010eec3#1681 | 0           |
| 0x14010eeca#147  | 0x14010eece#153  | 1           |
| 0x14010eec3#1456 | 0x14010eedc#1431 | 0           |
| 0x14010eec3#1617 | 0x14010eedc#1590 | 0           |
| 0x14010eedc#158  | 0x14010eee1#163  | 0           |
| 0x14010eee1#163  | 0x14010eee3#168  | 1           |
| 0x14010eedc#1431 | 0x14010eeee#1435 | 0           |
| 0x14010eedc#1590 | 0x14010eeee#1594 | 0           |
| 0x14010eeee#1435 | 0x14010eef3#1471 | 0           |
| 0x14010ef8e#1432 | 0x14010eef3#1471 | 1           |
| 0x14010efa5#1433 | 0x14010eef3#1471 | 2           |
| 0x14010eeee#1594 | 0x14010eef3#1612 | 0           |
| 0x14010ef8e#1591 | 0x14010eef3#1612 | 1           |
| 0x14010efa5#1592 | 0x14010eef3#1612 | 2           |
| 0x14010eef3#1471 | 0x14010eef8#1436 | 0           |
| 0x14010eef3#1612 | 0x14010eef8#1595 | 0           |
| 0x14010eefd#193  | 0x14010ef01#199  | 1           |
| 0x14010eef8#1436 | 0x14010ef0f#1437 | 0           |
| 0x14010eef8#1595 | 0x14010ef0f#1596 | 0           |
| 0x14010ef0f#204  | 0x14010ef14#209  | 0           |
| 0x14010ef14#209  | 0x14010ef16#214  | 1           |
| 0x14010ef0f#1437 | 0x14010ef21#1440 | 0           |
| 0x14010ef0f#1596 | 0x14010ef21#1599 | 0           |
| 0x14010ef26#1683 | 0x14010ef26#222  | 1           |
| 0x14010ef26#1470 | 0x14010ef26#1457 | 0           |
| 0x14010ef21#1440 | 0x14010ef26#1470 | 0           |
| 0x14010efc1#1438 | 0x14010ef26#1470 | 1           |
| 0x14010efd8#1439 | 0x14010ef26#1470 | 2           |
| 0x14010ef21#1599 | 0x14010ef26#1611 | 0           |
| 0x14010efc1#1597 | 0x14010ef26#1611 | 1           |
| 0x14010efd8#1598 | 0x14010ef26#1611 | 2           |
| 0x14010ef26#220  | 0x14010ef26#1683 | 0           |
| 0x14010ef2d#228  | 0x14010ef31#234  | 1           |
| 0x14010ef26#1457 | 0x14010ef3c#1441 | 0           |
| 0x14010ef26#1611 | 0x14010ef3c#1600 | 0           |
| 0x14010ef3c#248  | 0x14010ef41#253  | 0           |
| 0x14010ef41#253  | 0x14010ef43#258  | 1           |
| 0x14010ef49#1686 | 0x14010ef49#261  | 1           |
| 0x14010ef3c#1441 | 0x14010ef49#1458 | 0           |
| 0x14010ef49#259  | 0x14010ef49#1686 | 0           |
| 0x14010ef50#1687 | 0x14010ef50#264  | 1           |
| 0x14010ef49#1458 | 0x14010ef50#1459 | 0           |
| 0x14010ef50#262  | 0x14010ef50#1687 | 0           |
| 0x14010ef5c#1678 | 0x14010ef5c#562  | 1           |
| 0x14010ef5c#1476 | 0x14010ef5c#1465 | 0           |
| 0x14010ee9d#1474 | 0x14010ef5c#1476 | 0           |
| 0x14010eeaf#1429 | 0x14010ef5c#1476 | 1           |
| 0x14010ee9d#1618 | 0x14010ef5c#1620 | 0           |
| 0x14010eeaf#1588 | 0x14010ef5c#1620 | 1           |
| 0x14010ef5c#560  | 0x14010ef5c#1678 | 0           |
| 0x14010ef63#568  | 0x14010ef67#574  | 1           |
| 0x14010ef5c#1465 | 0x14010ef75#1430 | 0           |
| 0x14010ef5c#1620 | 0x14010ef75#1589 | 0           |
| 0x14010ef75#579  | 0x14010ef7a#584  | 0           |
| 0x14010ef7a#584  | 0x14010ef7c#589  | 1           |
| 0x14010ef82#1679 | 0x14010ef82#592  | 1           |
| 0x14010ef75#1430 | 0x14010ef82#1466 | 0           |
| 0x14010ef82#590  | 0x14010ef82#1679 | 0           |
| 0x14010eec3#1456 | 0x14010ef89#1467 | 0           |
| 0x14010eedc#1431 | 0x14010ef89#1467 | 1           |
| 0x14010ef82#1466 | 0x14010ef89#1467 | 2           |
| 0x14010eec3#1617 | 0x14010ef89#1616 | 0           |
| 0x14010eedc#1590 | 0x14010ef89#1616 | 1           |
| 0x14010ef75#1589 | 0x14010ef89#1616 | 2           |
| 0x14010ef89#1467 | 0x14010ef8e#1432 | 0           |
| 0x14010ef89#1616 | 0x14010ef8e#1591 | 0           |
| 0x14010ef93#533  | 0x14010ef97#539  | 1           |
| 0x14010ef8e#1432 | 0x14010efa5#1433 | 0           |
| 0x14010ef8e#1591 | 0x14010efa5#1592 | 0           |
| 0x14010efa5#544  | 0x14010efaa#549  | 0           |
| 0x14010efaa#549  | 0x14010efac#554  | 1           |
| 0x14010efa5#1433 | 0x14010efb7#1434 | 0           |
| 0x14010efa5#1592 | 0x14010efb7#1593 | 0           |
| 0x14010eef8#1436 | 0x14010efbc#1472 | 0           |
| 0x14010ef0f#1437 | 0x14010efbc#1472 | 1           |
| 0x14010efb7#1434 | 0x14010efbc#1472 | 2           |
| 0x14010eef8#1595 | 0x14010efbc#1613 | 0           |
| 0x14010ef0f#1596 | 0x14010efbc#1613 | 1           |
| 0x14010efb7#1593 | 0x14010efbc#1613 | 2           |
| 0x14010efbc#1472 | 0x14010efc1#1438 | 0           |
| 0x14010efbc#1613 | 0x14010efc1#1597 | 0           |
| 0x14010efc6#489  | 0x14010efca#495  | 1           |
| 0x14010efc1#1438 | 0x14010efd8#1439 | 0           |
| 0x14010efc1#1597 | 0x14010efd8#1598 | 0           |
| 0x14010efd8#500  | 0x14010efdd#505  | 0           |
| 0x14010efdd#505  | 0x14010efdf#510  | 1           |
| 0x14010efe5#1682 | 0x14010efe5#513  | 1           |
| 0x14010efd8#1439 | 0x14010efe5#1464 | 0           |
| 0x14010efe5#511  | 0x14010efe5#1682 | 0           |
| 0x14010efec#1684 | 0x14010efec#455  | 1           |
| 0x14010efec#1468 | 0x14010efec#1462 | 0           |
| 0x14010ef26#1457 | 0x14010efec#1468 | 0           |
| 0x14010ef3c#1441 | 0x14010efec#1468 | 1           |
| 0x14010efe5#1464 | 0x14010efec#1468 | 2           |
| 0x14010ef26#1611 | 0x14010efec#1614 | 0           |
| 0x14010ef3c#1600 | 0x14010efec#1614 | 1           |
| 0x14010efd8#1598 | 0x14010efec#1614 | 2           |
| 0x14010efec#453  | 0x14010efec#1684 | 0           |
| 0x14010eff3#1685 | 0x14010eff3#458  | 1           |
| 0x14010efec#1462 | 0x14010eff3#1463 | 0           |
| 0x14010eff3#456  | 0x14010eff3#1685 | 0           |
| 0x14010effa#464  | 0x14010effe#469  | 1           |
| 0x14010f000#1688 | 0x14010f000#268  | 1           |
| 0x14010f000#1469 | 0x14010f000#1460 | 0           |
| 0x14010ef50#1459 | 0x14010f000#1469 | 0           |
| 0x14010eff3#1463 | 0x14010f000#1469 | 1           |
| 0x14010ef3c#1600 | 0x14010f000#1615 | 0           |
| 0x14010efec#1614 | 0x14010f000#1615 | 1           |
| 0x14010f000#266  | 0x14010f000#1688 | 0           |
| 0x14010f007#1689 | 0x14010f007#271  | 1           |
| 0x14010f007#1475 | 0x14010f007#1461 | 0           |
| 0x14010f000#1460 | 0x14010f007#1475 | 0           |
| 0x14010eff3#1463 | 0x14010f007#1475 | 1           |
| 0x14010f000#1615 | 0x14010f007#1619 | 0           |
| 0x14010efec#1614 | 0x14010f007#1619 | 1           |
| 0x14010f007#269  | 0x14010f007#1689 | 0           |
| 0x14010f007#1461 | 0x14010f011#1442 | 0           |
| 0x14010f007#1619 | 0x14010f011#1601 | 0           |
| 0x14010f021#1690 | 0x14010f021#290  | 1           |
| 0x14010f021#289  | 0x14010f021#1690 | 0           |
| 0x14010f021#290  | 0x14010f028#294  | 1           |
| 0x14010f011#275  | 0x14010f028#294  | 4           |
| 0x14010f011#1442 | 0x14010f028#1443 | 0           |
| 0x14010f011#1601 | 0x14010f028#1602 | 0           |
| 0x14010f028#1443 | 0x14010f030#1444 | 0           |
| 0x14010f028#1602 | 0x14010f030#1603 | 0           |
| 0x14010f040#1691 | 0x14010f040#313  | 1           |
| 0x14010f040#312  | 0x14010f040#1691 | 0           |
| 0x14010f040#313  | 0x14010f047#317  | 1           |
| 0x14010f030#298  | 0x14010f047#317  | 4           |
| 0x14010f030#1444 | 0x14010f047#1445 | 0           |
| 0x14010f030#1603 | 0x14010f047#1604 | 0           |
| 0x14010f047#1445 | 0x14010f04f#1446 | 0           |
| 0x14010f047#1604 | 0x14010f04f#1605 | 0           |
| 0x14010f05e#329  | 0x14010f062#336  | 1           |
| 0x14010f062#1673 | 0x14010f066#1094 | 0           |
| 0x14010f062#337  | 0x14010f066#1094 | 1           |
| 0x14010f06e#1692 | 0x14010f06e#350  | 1           |
| 0x14010f06e#349  | 0x14010f06e#1692 | 0           |
| 0x14010f06e#350  | 0x14010f075#354  | 1           |
| 0x14010f066#1094 | 0x14010f075#354  | 3           |
| 0x14010f04f#1446 | 0x14010f075#1447 | 0           |
| 0x14010f04f#1605 | 0x14010f075#1606 | 0           |
| 0x14010f07f#1693 | 0x14010f07f#376  | 1           |
| 0x14010f07f#375  | 0x14010f07f#1693 | 0           |
| 0x14010f07f#376  | 0x14010f086#381  | 1           |
| 0x14010f075#1447 | 0x14010f086#1448 | 0           |
| 0x14010f075#1606 | 0x14010f086#1607 | 0           |
| 0x14010f091#1694 | 0x14010f091#403  | 1           |
| 0x14010f091#402  | 0x14010f091#1694 | 0           |
| 0x14010f091#403  | 0x14010f098#408  | 1           |
| 0x14010f086#1448 | 0x14010f098#1449 | 0           |
| 0x14010f086#1607 | 0x14010f098#1608 | 0           |
| 0x14010f0a3#1695 | 0x14010f0a3#430  | 1           |
| 0x14010f0a3#429  | 0x14010f0a3#1695 | 0           |
| 0x14010f0a3#430  | 0x14010f0aa#435  | 1           |
| 0x14010f098#1449 | 0x14010f0aa#1450 | 0           |
| 0x14010f098#1608 | 0x14010f0aa#1609 | 0           |
| 0x14010f0b7#1669 | 0x14010f0b7#439  | 0           |
| 0x14010f0b7#438  | 0x14010f0b7#439  | 1           |
| 0x14010f0b7#1696 | 0x14010f0b7#440  | 1           |
| 0x14010f0b7#440  | 0x14010f0b7#839  | 0           |
| 0x14010f0b7#439  | 0x14010f0b7#1696 | 0           |
| 0x14010f0be#1668 | 0x14010f0be#1671 | 0           |
| 0x14010f0be#1671 | 0x14010f0be#1672 | 0           |
| 0x14010f0b7#839  | 0x14010f0be#1672 | 1           |
| 0x14010f0c1#1697 | 0x14010f0c1#452  | 0           |
| 0x14010f0aa#1450 | 0x14010f0c1#1451 | 0           |
| 0x14010f0c1#1451 | 0x14010f0c1#1453 | 0           |
| 0x14010f0aa#1609 | 0x14010f0c1#1610 | 0           |
| 0x14010f0be#1672 | 0x14010f0c1#1697 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type  |
|---------|---------|------------|
| 0       | param_1 | /longlong  |
| 1       | param_2 | /ulonglong |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 1       | 0x14010ee30#1    | 1           |
| 1       | 0x14010ee5e#50   | 0           |
| 0       | 0x14010ee69#59   | 0           |
| 1       | 0x14010ee7a#82   | 0           |
| 0       | 0x14010ee7f#88   | 0           |
| 0       | 0x14010ee96#106  | 0           |
| 1       | 0x14010ee9d#114  | 0           |
| 0       | 0x14010eeaf#125  | 1           |
| 0       | 0x14010eebc#136  | 0           |
| 0       | 0x14010eec3#139  | 0           |
| 1       | 0x14010eeca#147  | 0           |
| 0       | 0x14010eedc#158  | 1           |
| 0       | 0x14010eeee#173  | 1           |
| 0       | 0x14010eef8#187  | 1           |
| 1       | 0x14010eefd#193  | 0           |
| 0       | 0x14010ef0f#204  | 1           |
| 0       | 0x14010ef21#219  | 1           |
| 0       | 0x14010ef26#220  | 0           |
| 1       | 0x14010ef2d#228  | 0           |
| 0       | 0x14010ef3c#248  | 1           |
| 0       | 0x14010ef49#259  | 0           |
| 0       | 0x14010ef50#262  | 0           |
| 0       | 0x14010ef5c#560  | 0           |
| 1       | 0x14010ef63#568  | 0           |
| 0       | 0x14010ef75#579  | 1           |
| 0       | 0x14010ef82#590  | 0           |
| 0       | 0x14010ef8e#527  | 1           |
| 1       | 0x14010ef93#533  | 0           |
| 0       | 0x14010efa5#544  | 1           |
| 0       | 0x14010efb7#559  | 1           |
| 0       | 0x14010efc1#483  | 1           |
| 1       | 0x14010efc6#489  | 0           |
| 0       | 0x14010efd8#500  | 1           |
| 0       | 0x14010efe5#511  | 0           |
| 0       | 0x14010efec#453  | 0           |
| 0       | 0x14010eff3#456  | 0           |
| 1       | 0x14010effa#464  | 0           |
| 0       | 0x14010f000#266  | 0           |
| 1       | 0x14010f000#268  | 2           |
| 0       | 0x14010f007#269  | 0           |
| 1       | 0x14010f007#271  | 2           |
| 0       | 0x14010f011#275  | 1           |
| 0       | 0x14010f021#289  | 0           |
| 0       | 0x14010f030#298  | 1           |
| 0       | 0x14010f040#312  | 0           |
| 0       | 0x14010f04f#321  | 1           |
| 1       | 0x14010f05e#329  | 0           |
| 1       | 0x14010f062#1673 | 0           |
| 0       | 0x14010f06e#349  | 0           |
| 0       | 0x14010f07f#375  | 0           |
| 0       | 0x14010f091#402  | 0           |
| 0       | 0x14010f0a3#429  | 0           |
| 1       | 0x14010f0b7#438  | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x14010ee34#11  | conditional_branch |               | 1           |
| 0x14010ee62#55  | conditional_branch |               | 1           |
| 0x14010ee64#58  | direct_call        | 0             |             |
| 0x14010ee69#60  | memory_read        | 1             |             |
| 0x14010ee78#76  | conditional_branch |               | 1           |
| 0x14010ee7d#87  | conditional_branch |               | 1           |
| 0x14010ee7f#89  | memory_read        | 1             |             |
| 0x14010ee89#100 | conditional_branch |               | 1           |
| 0x14010ee90#105 | direct_call        | 0             |             |
| 0x14010ee96#108 | memory_write       | 1             | 2           |
| 0x14010eea1#120 | conditional_branch |               | 1           |
| 0x14010eeaf#125 | direct_call        | 0             |             |
| 0x14010eeb6#135 | conditional_branch |               | 1           |
| 0x14010eebc#138 | memory_write       | 1             | 2           |
| 0x14010eec3#141 | memory_write       | 1             | 2           |
| 0x14010eece#153 | conditional_branch |               | 1           |
| 0x14010eedc#158 | direct_call        | 0             |             |
| 0x14010eee3#168 | conditional_branch |               | 1           |
| 0x14010eeee#173 | direct_call        | 0             |             |
| 0x14010eef8#187 | direct_call        | 0             |             |
| 0x14010ef01#199 | conditional_branch |               | 1           |
| 0x14010ef0f#204 | direct_call        | 0             |             |
| 0x14010ef16#214 | conditional_branch |               | 1           |
| 0x14010ef21#219 | direct_call        | 0             |             |
| 0x14010ef26#222 | memory_write       | 1             | 2           |
| 0x14010ef31#234 | conditional_branch |               | 1           |
| 0x14010ef3c#248 | direct_call        | 0             |             |
| 0x14010ef43#258 | conditional_branch |               | 1           |
| 0x14010ef49#261 | memory_write       | 1             | 2           |
| 0x14010ef50#264 | memory_write       | 1             | 2           |
| 0x14010ef5c#562 | memory_write       | 1             | 2           |
| 0x14010ef67#574 | conditional_branch |               | 1           |
| 0x14010ef75#579 | direct_call        | 0             |             |
| 0x14010ef7c#589 | conditional_branch |               | 1           |
| 0x14010ef82#592 | memory_write       | 1             | 2           |
| 0x14010ef8e#527 | direct_call        | 0             |             |
| 0x14010ef97#539 | conditional_branch |               | 1           |
| 0x14010efa5#544 | direct_call        | 0             |             |
| 0x14010efac#554 | conditional_branch |               | 1           |
| 0x14010efb7#559 | direct_call        | 0             |             |
| 0x14010efc1#483 | direct_call        | 0             |             |
| 0x14010efca#495 | conditional_branch |               | 1           |
| 0x14010efd8#500 | direct_call        | 0             |             |
| 0x14010efdf#510 | conditional_branch |               | 1           |
| 0x14010efe5#513 | memory_write       | 1             | 2           |
| 0x14010efec#455 | memory_write       | 1             | 2           |
| 0x14010eff3#458 | memory_write       | 1             | 2           |
| 0x14010effe#469 | conditional_branch |               | 1           |
| 0x14010f000#268 | memory_write       | 1             | 2           |
| 0x14010f007#271 | memory_write       | 1             | 2           |
| 0x14010f011#275 | direct_call        | 0             |             |
| 0x14010f021#290 | memory_read        | 1             |             |
| 0x14010f028#294 | direct_call        | 0             |             |
| 0x14010f030#298 | direct_call        | 0             |             |
| 0x14010f040#313 | memory_read        | 1             |             |
| 0x14010f047#317 | direct_call        | 0             |             |
| 0x14010f04f#321 | direct_call        | 0             |             |
| 0x14010f062#336 | conditional_branch |               | 1           |
| 0x14010f06e#350 | memory_read        | 1             |             |
| 0x14010f075#354 | direct_call        | 0             |             |
| 0x14010f07f#376 | memory_read        | 1             |             |
| 0x14010f086#381 | direct_call        | 0             |             |
| 0x14010f091#403 | memory_read        | 1             |             |
| 0x14010f098#408 | direct_call        | 0             |             |
| 0x14010f0a3#430 | memory_read        | 1             |             |
| 0x14010f0aa#435 | direct_call        | 0             |             |
| 0x14010f0b7#440 | memory_read        | 1             |             |
| 0x14010f0c1#452 | indirect_call      | 0             |             |

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

0x14010ee30

## normalized_result.procedure.name

FUN_14010ee30

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
| 0x14010ee30 | 0x14010f0c2 |
| 0x14010f2e2 | 0x14010f2e2 |

## normalized_result.procedure.body.total_bytes

660

## normalized_result.procedure.body.span_bytes

1203

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_14010ee30()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8   | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |

## normalized_result.pseudocode


void FUN_14010ee30(longlong param_1,ulonglong param_2)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [80];
  ulonglong local_18;
  
  if (0xf < param_2) {
    return;
  }
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_68;
  if (param_2 != 0xf) {
    FUN_1401bbbb0();
  }
  if (((*(ulonglong *)(param_1 + 0x2ec8) - 0xd < 2) && (param_2 != *(ulonglong *)(param_1 + 0x2ec8))
      ) && (*(HWND *)(param_1 + 0x230) != (HWND)0x0)) {
    KillTimer(*(HWND *)(param_1 + 0x230),3);
    *(undefined1 *)(param_1 + 0x1828) = 0;
  }
  if (param_2 == 8) {
    cVar1 = FUN_1401f84c0(param_1,5);
    if (cVar1 == '\0') goto LAB_14010ef5c;
    *(undefined1 *)(param_1 + 0x1f5b) = 1;
LAB_14010eec3:
    *(undefined1 *)(param_1 + 0x1f5c) = 0;
    if (param_2 != 10) goto LAB_14010ef89;
    cVar1 = FUN_1401f84c0(param_1,7);
    if (cVar1 == '\0') goto LAB_14010ef89;
    FUN_1400d11f0(param_1,1);
LAB_14010eef3:
    FUN_1400d5b70(param_1,0);
    if (param_2 != 0xc) goto LAB_14010efbc;
    cVar1 = FUN_1401f84c0(param_1,8);
    if (cVar1 == '\0') goto LAB_14010efbc;
    FUN_14012c5c0(param_1,1);
LAB_14010ef26:
    *(undefined1 *)(param_1 + 0x1f5d) = 0;
    if (param_2 != 0xe) goto LAB_14010efec;
    cVar1 = FUN_1401f84c0(param_1,0);
    if (cVar1 == '\0') goto LAB_14010efec;
    *(undefined1 *)(param_1 + 0x1f5e) = 1;
    *(undefined1 *)(param_1 + 0xb92) = 0;
  }
  else {
LAB_14010ef5c:
    *(undefined1 *)(param_1 + 0x1f5b) = 0;
    if (param_2 != 9) goto LAB_14010eec3;
    cVar1 = FUN_1401f84c0(param_1,6);
    if (cVar1 == '\0') goto LAB_14010eec3;
    *(undefined1 *)(param_1 + 0x1f5c) = 1;
LAB_14010ef89:
    FUN_1400d11f0(param_1,0);
    if (param_2 != 0xb) goto LAB_14010eef3;
    cVar1 = FUN_1401f84c0(param_1,2);
    if (cVar1 == '\0') goto LAB_14010eef3;
    FUN_1400d5b70(param_1,1);
LAB_14010efbc:
    FUN_14012c5c0(param_1,0);
    if (param_2 != 0xd) goto LAB_14010ef26;
    cVar1 = FUN_1401f84c0(param_1,1);
    if (cVar1 == '\0') goto LAB_14010ef26;
    *(undefined1 *)(param_1 + 0x1f5d) = 1;
LAB_14010efec:
    *(undefined1 *)(param_1 + 0x1f5e) = 0;
    *(undefined1 *)(param_1 + 0xb92) = 0;
    if (param_2 == 0xf) goto LAB_14010f007;
  }
  *(ulonglong *)(param_1 + 0x2ed0) = param_2;
LAB_14010f007:
  *(ulonglong *)(param_1 + 0x2ec8) = param_2;
  uVar2 = FUN_1400e6910(param_1);
  FUN_14003af90(*(undefined8 *)(param_1 + 0x290),0x1001,0,uVar2);
  uVar2 = FUN_1400e6910(param_1);
  FUN_14003af90(*(undefined8 *)(param_1 + 0x290),0x1026,0,uVar2);
  FUN_1400ddca0(param_1);
  uVar3 = param_2;
  if (param_2 == 0xf) {
    uVar3 = 0xffffffffffffffff;
  }
  FUN_14003af90(*(undefined8 *)(param_1 + 0x240),0x186,uVar3,0);
  InvalidateRect(*(HWND *)(param_1 + 0x240),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x248),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x260),(RECT *)0x0,0);
                    /* WARNING: Could not recover jumptable at 0x00014010f0c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&DAT_14010f2ec + param_2 * 4)))();
  return;
}



## normalized_result.assembly

0x14010ee30: CMP RDX, 0x10,0x14010ee34: JNC 0x14010f2e2,0x14010ee3a: MOV qword ptr [RSP + 0x18], RBX,0x14010ee3f: MOV qword ptr [RSP + 0x20], RSI,0x14010ee44: PUSH RDI,0x14010ee45: SUB RSP, 0x60,0x14010ee49: MOV RAX, qword ptr [0x1404c7ac0],0x14010ee50: XOR RAX, RSP,0x14010ee53: MOV qword ptr [RSP + 0x50], RAX,0x14010ee58: MOV RDI, RDX,0x14010ee5b: MOV RBX, RCX,0x14010ee5e: CMP RDX, 0xf,0x14010ee62: JZ 0x14010ee69,0x14010ee64: CALL 0x1401bbbb0,0x14010ee69: MOV RCX, qword ptr [RBX + 0x2ec8],0x14010ee70: LEA RAX, [RCX + -0xd],0x14010ee74: CMP RAX, 0x1,0x14010ee78: JA 0x14010ee9d,0x14010ee7a: CMP RDI, RCX,0x14010ee7d: JZ 0x14010ee9d,0x14010ee7f: MOV RCX, qword ptr [RBX + 0x230],0x14010ee86: TEST RCX, RCX,0x14010ee89: JZ 0x14010ee9d,0x14010ee8b: MOV EDX, 0x3,0x14010ee90: CALL qword ptr [0x14037af78],0x14010ee96: MOV byte ptr [RBX + 0x1828], 0x0,0x14010ee9d: CMP RDI, 0x8,0x14010eea1: JNZ 0x14010ef5c,0x14010eea7: MOV EDX, 0x5,0x14010eeac: MOV RCX, RBX,0x14010eeaf: CALL 0x1401f84c0,0x14010eeb4: TEST AL, AL,0x14010eeb6: JZ 0x14010ef5c,0x14010eebc: MOV byte ptr [RBX + 0x1f5b], 0x1,0x14010eec3: MOV byte ptr [RBX + 0x1f5c], 0x0,0x14010eeca: CMP RDI, 0xa,0x14010eece: JNZ 0x14010ef89,0x14010eed4: MOV EDX, 0x7,0x14010eed9: MOV RCX, RBX,0x14010eedc: CALL 0x1401f84c0,0x14010eee1: TEST AL, AL,0x14010eee3: JZ 0x14010ef89,0x14010eee9: MOV DL, 0x1,0x14010eeeb: MOV RCX, RBX,0x14010eeee: CALL 0x1400d11f0,0x14010eef3: XOR EDX, EDX,0x14010eef5: MOV RCX, RBX,0x14010eef8: CALL 0x1400d5b70,0x14010eefd: CMP RDI, 0xc,0x14010ef01: JNZ 0x14010efbc,0x14010ef07: MOV EDX, 0x8,0x14010ef0c: MOV RCX, RBX,0x14010ef0f: CALL 0x1401f84c0,0x14010ef14: TEST AL, AL,0x14010ef16: JZ 0x14010efbc,0x14010ef1c: MOV DL, 0x1,0x14010ef1e: MOV RCX, RBX,0x14010ef21: CALL 0x14012c5c0,0x14010ef26: MOV byte ptr [RBX + 0x1f5d], 0x0,0x14010ef2d: CMP RDI, 0xe,0x14010ef31: JNZ 0x14010efec,0x14010ef37: XOR EDX, EDX,0x14010ef39: MOV RCX, RBX,0x14010ef3c: CALL 0x1401f84c0,0x14010ef41: TEST AL, AL,0x14010ef43: JZ 0x14010efec,0x14010ef49: MOV byte ptr [RBX + 0x1f5e], 0x1,0x14010ef50: MOV byte ptr [RBX + 0xb92], 0x0,0x14010ef57: JMP 0x14010f000,0x14010ef5c: MOV byte ptr [RBX + 0x1f5b], 0x0,0x14010ef63: CMP RDI, 0x9,0x14010ef67: JNZ 0x14010eec3,0x14010ef6d: MOV EDX, 0x6,0x14010ef72: MOV RCX, RBX,0x14010ef75: CALL 0x1401f84c0,0x14010ef7a: TEST AL, AL,0x14010ef7c: JZ 0x14010eec3,0x14010ef82: MOV byte ptr [RBX + 0x1f5c], 0x1,0x14010ef89: XOR EDX, EDX,0x14010ef8b: MOV RCX, RBX,0x14010ef8e: CALL 0x1400d11f0,0x14010ef93: CMP RDI, 0xb,0x14010ef97: JNZ 0x14010eef3,0x14010ef9d: MOV EDX, 0x2,0x14010efa2: MOV RCX, RBX,0x14010efa5: CALL 0x1401f84c0,0x14010efaa: TEST AL, AL,0x14010efac: JZ 0x14010eef3,0x14010efb2: MOV DL, 0x1,0x14010efb4: MOV RCX, RBX,0x14010efb7: CALL 0x1400d5b70,0x14010efbc: XOR EDX, EDX,0x14010efbe: MOV RCX, RBX,0x14010efc1: CALL 0x14012c5c0,0x14010efc6: CMP RDI, 0xd,0x14010efca: JNZ 0x14010ef26,0x14010efd0: MOV EDX, 0x1,0x14010efd5: MOV RCX, RBX,0x14010efd8: CALL 0x1401f84c0,0x14010efdd: TEST AL, AL,0x14010efdf: JZ 0x14010ef26,0x14010efe5: MOV byte ptr [RBX + 0x1f5d], 0x1,0x14010efec: MOV byte ptr [RBX + 0x1f5e], 0x0,0x14010eff3: MOV byte ptr [RBX + 0xb92], 0x0,0x14010effa: CMP RDI, 0xf,0x14010effe: JZ 0x14010f007,0x14010f000: MOV qword ptr [RBX + 0x2ed0], RDI,0x14010f007: MOV qword ptr [RBX + 0x2ec8], RDI,0x14010f00e: MOV RCX, RBX,0x14010f011: CALL 0x1400e6910,0x14010f016: MOV R9D, EAX,0x14010f019: XOR R8D, R8D,0x14010f01c: MOV EDX, 0x1001,0x14010f021: MOV RCX, qword ptr [RBX + 0x290],0x14010f028: CALL 0x14003af90,0x14010f02d: MOV RCX, RBX,0x14010f030: CALL 0x1400e6910,0x14010f035: MOV R9D, EAX,0x14010f038: XOR R8D, R8D,0x14010f03b: MOV EDX, 0x1026,0x14010f040: MOV RCX, qword ptr [RBX + 0x290],0x14010f047: CALL 0x14003af90,0x14010f04c: MOV RCX, RBX,0x14010f04f: CALL 0x1400ddca0,0x14010f054: MOV R8, RDI,0x14010f057: MOV RAX, -0x1,0x14010f05e: CMP RDI, 0xf,0x14010f062: CMOVZ R8, RAX,0x14010f066: XOR R9D, R9D,0x14010f069: MOV EDX, 0x186,0x14010f06e: MOV RCX, qword ptr [RBX + 0x240],0x14010f075: CALL 0x14003af90,0x14010f07a: XOR R8D, R8D,0x14010f07d: XOR EDX, EDX,0x14010f07f: MOV RCX, qword ptr [RBX + 0x240],0x14010f086: CALL qword ptr [0x14037ae58],0x14010f08c: XOR R8D, R8D,0x14010f08f: XOR EDX, EDX,0x14010f091: MOV RCX, qword ptr [RBX + 0x248],0x14010f098: CALL qword ptr [0x14037ae58],0x14010f09e: XOR R8D, R8D,0x14010f0a1: XOR EDX, EDX,0x14010f0a3: MOV RCX, qword ptr [RBX + 0x260],0x14010f0aa: CALL qword ptr [0x14037ae58],0x14010f0b0: LEA RCX, [0x140000000],0x14010f0b7: MOV EAX, dword ptr [RCX + RDI*0x4 + 0x10f2ec],0x14010f0be: ADD RAX, RCX,0x14010f0c1: JMP RAX,0x14010f2e2: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x14007a6d0 | FUN_14007a6d0 | [object Object] | [object Object] |
| 0x14007bb50 | FUN_14007bb50 | [object Object] | [object Object] |
| 0x1400bb4c0 | FUN_1400bb4c0 | [object Object] | [object Object] |
| 0x1400dc380 | FUN_1400dc380 | [object Object] | [object Object] |
| 0x1400e5c60 | FUN_1400e5c60 | [object Object] | [object Object] |
| 0x1400e9230 | FUN_1400e9230 | [object Object] | [object Object] |
| 0x14010b8e0 | FUN_14010b8e0 | [object Object] | [object Object] |
| 0x14010bbb0 | FUN_14010bbb0 | [object Object] | [object Object] |
| 0x14016f5e0 | FUN_14016f5e0 | [object Object] | [object Object] |
| 0x14017f7f0 | FUN_14017f7f0 | [object Object] | [object Object] |
| 0x14018e080 | FUN_14018e080 | [object Object] | [object Object] |
| 0x14018e2a0 | FUN_14018e2a0 | [object Object] | [object Object] |
| 0x1401a95d0 | FUN_1401a95d0 | [object Object] | [object Object] |
| 0x1401b3dc0 | FUN_1401b3dc0 | [object Object] | [object Object] |
| 0x1401bb1f0 | FUN_1401bb1f0 | [object Object] | [object Object] |
| 0x1401bb210 | FUN_1401bb210 | [object Object] | [object Object] |
| 0x1401e0850 | FUN_1401e0850 | [object Object] | [object Object] |
| 0x1401e9e90 | FUN_1401e9e90 | [object Object] | [object Object] |

## normalized_result.callees

| address        | name                       | classification  | body            |
|----------------|----------------------------|-----------------|-----------------|
| EXTERNAL:0x16a | USER32.DLL::InvalidateRect | [object Object] | [object Object] |
| EXTERNAL:0x18e | USER32.DLL::KillTimer      | [object Object] | [object Object] |
| 0x14003af90    | FUN_14003af90              | [object Object] | [object Object] |
| 0x1400d11f0    | FUN_1400d11f0              | [object Object] | [object Object] |
| 0x1400d5b70    | FUN_1400d5b70              | [object Object] | [object Object] |
| 0x1400ddca0    | FUN_1400ddca0              | [object Object] | [object Object] |
| 0x1400e6910    | FUN_1400e6910              | [object Object] | [object Object] |
| 0x14012c5c0    | FUN_14012c5c0              | [object Object] | [object Object] |
| 0x1401bbbb0    | FUN_1401bbbb0              | [object Object] | [object Object] |
| 0x1401f84c0    | FUN_1401f84c0              | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14007a708    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14007bc1c    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400bcb79    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400bcba1    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400dc907    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400e5cc6    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400e5d1d    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1400e926e    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14010b94b    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14010bbb6    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14010bbc9    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14016f791    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14016f7ed    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14016f91e    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14016faab    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14017f833    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14017fc3c    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14018e13e    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x14018ea0d    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a9ad3    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a9b4f    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401b4532    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401bb202    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401bb242    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401bb281    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e08ea    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e0a66    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401ea122    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401ea1ea    | 0x14010ee30    | [object Object]  | [object Object]  | [object Object] |
| 0x1404d9f48    | 0x14010ee30    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14010ee34    | 0x14010f2e2              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee3a    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14010ee3f    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x14010ee49    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x14010ee53    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x14010ee62    | 0x14010ee69              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee64    | 0x1401bbbb0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee78    | 0x14010ee9d              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee7d    | 0x14010ee9d              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee89    | 0x14010ee9d              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee90    | EXTERNAL:0x18e           | [object Object]  | [object Object]  | [object Object] |
| 0x14010ee90    | 0x14037af78              | [object Object]  |                  | [object Object] |
| 0x14010eea1    | 0x14010ef5c              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eeaf    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eeb6    | 0x14010ef5c              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eece    | 0x14010ef89              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eedc    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eee3    | 0x14010ef89              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eeee    | 0x1400d11f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010eef8    | 0x1400d5b70              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef01    | 0x14010efbc              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef0f    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef16    | 0x14010efbc              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef21    | 0x14012c5c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef31    | 0x14010efec              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef3c    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef43    | 0x14010efec              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef57    | 0x14010f000              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef67    | 0x14010eec3              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef75    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef7c    | 0x14010eec3              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef8e    | 0x1400d11f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010ef97    | 0x14010eef3              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efa5    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efac    | 0x14010eef3              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efb7    | 0x1400d5b70              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efc1    | 0x14012c5c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efca    | 0x14010ef26              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efd8    | 0x1401f84c0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010efdf    | 0x14010ef26              | [object Object]  | [object Object]  | [object Object] |
| 0x14010effe    | 0x14010f007              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f011    | 0x1400e6910              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f028    | 0x14003af90              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f030    | 0x1400e6910              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f047    | 0x14003af90              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f04f    | 0x1400ddca0              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f075    | 0x14003af90              | [object Object]  | [object Object]  | [object Object] |
| 0x14010f086    | EXTERNAL:0x16a           | [object Object]  | [object Object]  | [object Object] |
| 0x14010f086    | 0x14037ae58              | [object Object]  |                  | [object Object] |
| 0x14010f098    | EXTERNAL:0x16a           | [object Object]  | [object Object]  | [object Object] |
| 0x14010f098    | 0x14037ae58              | [object Object]  |                  | [object Object] |
| 0x14010f0aa    | EXTERNAL:0x16a           | [object Object]  | [object Object]  | [object Object] |
| 0x14010f0aa    | 0x14037ae58              | [object Object]  |                  | [object Object] |
| 0x14010f0b0    | 0x140000000              | [object Object]  |                  | [object Object] |
| 0x14010f0b7    | 0x14010f2ec              | [object Object]  |                  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address        | value                        | source_address |
|----------------|------------------------------|----------------|
| 0x140000000    | IMAGE_DOS_HEADER_140000000   | 0x14010f0b0    |
| 0x14003af90    | FUN_14003af90                | 0x14010f028    |
| 0x14003af90    | FUN_14003af90                | 0x14010f047    |
| 0x14003af90    | FUN_14003af90                | 0x14010f075    |
| 0x1400d11f0    | FUN_1400d11f0                | 0x14010eeee    |
| 0x1400d11f0    | FUN_1400d11f0                | 0x14010ef8e    |
| 0x1400d5b70    | FUN_1400d5b70                | 0x14010eef8    |
| 0x1400d5b70    | FUN_1400d5b70                | 0x14010efb7    |
| 0x1400ddca0    | FUN_1400ddca0                | 0x14010f04f    |
| 0x1400e6910    | FUN_1400e6910                | 0x14010f011    |
| 0x1400e6910    | FUN_1400e6910                | 0x14010f030    |
| 0x14010ee69    | LAB_14010ee69                | 0x14010ee62    |
| 0x14010ee9d    | LAB_14010ee9d                | 0x14010ee78    |
| 0x14010ee9d    | LAB_14010ee9d                | 0x14010ee7d    |
| 0x14010ee9d    | LAB_14010ee9d                | 0x14010ee89    |
| 0x14010eec3    | LAB_14010eec3                | 0x14010ef67    |
| 0x14010eec3    | LAB_14010eec3                | 0x14010ef7c    |
| 0x14010eef3    | LAB_14010eef3                | 0x14010ef97    |
| 0x14010eef3    | LAB_14010eef3                | 0x14010efac    |
| 0x14010ef26    | LAB_14010ef26                | 0x14010efca    |
| 0x14010ef26    | LAB_14010ef26                | 0x14010efdf    |
| 0x14010ef5c    | LAB_14010ef5c                | 0x14010eea1    |
| 0x14010ef5c    | LAB_14010ef5c                | 0x14010eeb6    |
| 0x14010ef89    | LAB_14010ef89                | 0x14010eece    |
| 0x14010ef89    | LAB_14010ef89                | 0x14010eee3    |
| 0x14010efbc    | LAB_14010efbc                | 0x14010ef01    |
| 0x14010efbc    | LAB_14010efbc                | 0x14010ef16    |
| 0x14010efec    | LAB_14010efec                | 0x14010ef31    |
| 0x14010efec    | LAB_14010efec                | 0x14010ef43    |
| 0x14010f000    | LAB_14010f000                | 0x14010ef57    |
| 0x14010f007    | LAB_14010f007                | 0x14010effe    |
| 0x14010f2e2    | LAB_14010f2e2                | 0x14010ee34    |
| 0x14010f2ec    | DAT_14010f2ec                | 0x14010f0b7    |
| 0x14012c5c0    | FUN_14012c5c0                | 0x14010ef21    |
| 0x14012c5c0    | FUN_14012c5c0                | 0x14010efc1    |
| 0x1401bbbb0    | FUN_1401bbbb0                | 0x14010ee64    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010eeaf    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010eedc    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010ef0f    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010ef3c    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010ef75    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010efa5    |
| 0x1401f84c0    | FUN_1401f84c0                | 0x14010efd8    |
| 0x14037ae58    | PTR_InvalidateRect_14037ae58 | 0x14010f086    |
| 0x14037ae58    | PTR_InvalidateRect_14037ae58 | 0x14010f098    |
| 0x14037ae58    | PTR_InvalidateRect_14037ae58 | 0x14010f0aa    |
| 0x14037af78    | PTR_KillTimer_14037af78      | 0x14010ee90    |
| 0x1404c7ac0    | DAT_1404c7ac0                | 0x14010ee49    |
| EXTERNAL:0x16a | USER32.DLL::InvalidateRect   | 0x14010f086    |
| EXTERNAL:0x16a | USER32.DLL::InvalidateRect   | 0x14010f098    |
| EXTERNAL:0x16a | USER32.DLL::InvalidateRect   | 0x14010f0aa    |
| EXTERNAL:0x18e | USER32.DLL::KillTimer        | 0x14010ee90    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14010ee30 | 0x14010ee3a | 0x14010ee3a,0x14010f2e2 |
| 0x14010ee3a | 0x14010ee64 | 0x14010ee64,0x14010ee69 |
| 0x14010ee64 | 0x14010ee69 | 0x14010ee69             |
| 0x14010ee69 | 0x14010ee7a | 0x14010ee7a,0x14010ee9d |
| 0x14010ee7a | 0x14010ee7f | 0x14010ee7f,0x14010ee9d |
| 0x14010ee7f | 0x14010ee8b | 0x14010ee8b,0x14010ee9d |
| 0x14010ee8b | 0x14010ee9d | 0x14010ee9d             |
| 0x14010ee9d | 0x14010eea7 | 0x14010eea7,0x14010ef5c |
| 0x14010eea7 | 0x14010eebc | 0x14010eebc,0x14010ef5c |
| 0x14010eebc | 0x14010eec3 | 0x14010eec3             |
| 0x14010eec3 | 0x14010eed4 | 0x14010eed4,0x14010ef89 |
| 0x14010eed4 | 0x14010eee9 | 0x14010eee9,0x14010ef89 |
| 0x14010eee9 | 0x14010eef3 | 0x14010eef3             |
| 0x14010eef3 | 0x14010ef07 | 0x14010ef07,0x14010efbc |
| 0x14010ef07 | 0x14010ef1c | 0x14010ef1c,0x14010efbc |
| 0x14010ef1c | 0x14010ef26 | 0x14010ef26             |
| 0x14010ef26 | 0x14010ef37 | 0x14010ef37,0x14010efec |
| 0x14010ef37 | 0x14010ef49 | 0x14010ef49,0x14010efec |
| 0x14010ef49 | 0x14010ef5c | 0x14010f000             |
| 0x14010ef5c | 0x14010ef6d | 0x14010eec3,0x14010ef6d |
| 0x14010ef6d | 0x14010ef82 | 0x14010eec3,0x14010ef82 |
| 0x14010ef82 | 0x14010ef89 | 0x14010ef89             |
| 0x14010ef89 | 0x14010ef9d | 0x14010eef3,0x14010ef9d |
| 0x14010ef9d | 0x14010efb2 | 0x14010eef3,0x14010efb2 |
| 0x14010efb2 | 0x14010efbc | 0x14010efbc             |
| 0x14010efbc | 0x14010efd0 | 0x14010ef26,0x14010efd0 |
| 0x14010efd0 | 0x14010efe5 | 0x14010ef26,0x14010efe5 |
| 0x14010efe5 | 0x14010efec | 0x14010efec             |
| 0x14010efec | 0x14010f000 | 0x14010f000,0x14010f007 |
| 0x14010f000 | 0x14010f007 | 0x14010f007             |
| 0x14010f007 | 0x14010f0c3 |                         |
| 0x14010f2e2 | 0x14010f2e3 |                         |

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

void

## normalized_result.native_api.return_type.size_bytes

0

## normalized_result.native_api.return_type.storage

<VOID>

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                 |
|------------------|-------------------------|----------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.  |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type void. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters

| ordinal | name    | data_type | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|-----------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | longlong  | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | ulonglong | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x14010ee30#1    | 0x14010ee30 | 1        | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee34#11   | 0x14010ee34 | 11       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ee45#1670 | 0x14010ee45 | 1670     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee50#33   | 0x14010ee50 | 33       | INT_XOR      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee50#1674 | 0x14010ee50 | 1674     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ee5e#50   | 0x14010ee5e | 50       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee62#55   | 0x14010ee62 | 55       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ee64#58   | 0x14010ee64 | 58       | CALL         | true    | member           | [object Object]                                                                 |                 |
| 0x14010ee64#1427 | 0x14010ee64 | 1427     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee64#1586 | 0x14010ee64 | 1586     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee69#59   | 0x14010ee69 | 59       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee69#60   | 0x14010ee69 | 60       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee69#1477 | 0x14010ee69 | 1477     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee69#1621 | 0x14010ee69 | 1621     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee69#1675 | 0x14010ee69 | 1675     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ee70#62   | 0x14010ee70 | 62       | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee78#74   | 0x14010ee78 | 74       | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee78#76   | 0x14010ee78 | 76       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ee7a#82   | 0x14010ee7a | 82       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee7d#87   | 0x14010ee7d | 87       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ee7f#88   | 0x14010ee7f | 88       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee7f#89   | 0x14010ee7f | 89       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee7f#1676 | 0x14010ee7f | 1676     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ee86#95   | 0x14010ee86 | 95       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee89#100  | 0x14010ee89 | 100      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ee90#105  | 0x14010ee90 | 105      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ee90#1428 | 0x14010ee90 | 1428     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee90#1587 | 0x14010ee90 | 1587     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee96#106  | 0x14010ee96 | 106      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee96#108  | 0x14010ee96 | 108      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ee96#1454 | 0x14010ee96 | 1454     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee96#1677 | 0x14010ee96 | 1677     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ee9d#114  | 0x14010ee9d | 114      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ee9d#1474 | 0x14010ee9d | 1474     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x14010ee9d#1618 | 0x14010ee9d | 1618     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x14010eea1#120  | 0x14010eea1 | 120      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010eeaf#125  | 0x14010eeaf | 125      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eeaf#1429 | 0x14010eeaf | 1429     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eeaf#1588 | 0x14010eeaf | 1588     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eeb4#130  | 0x14010eeb4 | 130      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eeb6#135  | 0x14010eeb6 | 135      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010eebc#136  | 0x14010eebc | 136      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eebc#138  | 0x14010eebc | 138      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010eebc#1455 | 0x14010eebc | 1455     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eebc#1680 | 0x14010eebc | 1680     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010eec3#139  | 0x14010eec3 | 139      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eec3#141  | 0x14010eec3 | 141      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010eec3#1456 | 0x14010eec3 | 1456     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eec3#1473 | 0x14010eec3 | 1473     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eec3#1617 | 0x14010eec3 | 1617     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eec3#1681 | 0x14010eec3 | 1681     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010eeca#147  | 0x14010eeca | 147      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eece#153  | 0x14010eece | 153      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010eedc#158  | 0x14010eedc | 158      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eedc#1431 | 0x14010eedc | 1431     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eedc#1590 | 0x14010eedc | 1590     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eee1#163  | 0x14010eee1 | 163      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eee3#168  | 0x14010eee3 | 168      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010eeee#173  | 0x14010eeee | 173      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010eeee#1435 | 0x14010eeee | 1435     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eeee#1594 | 0x14010eeee | 1594     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eef3#1471 | 0x14010eef3 | 1471     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eef3#1612 | 0x14010eef3 | 1612     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010eef8#187  | 0x14010eef8 | 187      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010eef8#1436 | 0x14010eef8 | 1436     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eef8#1595 | 0x14010eef8 | 1595     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eefd#193  | 0x14010eefd | 193      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef01#199  | 0x14010ef01 | 199      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef0f#204  | 0x14010ef0f | 204      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef0f#1437 | 0x14010ef0f | 1437     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef0f#1596 | 0x14010ef0f | 1596     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef14#209  | 0x14010ef14 | 209      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef16#214  | 0x14010ef16 | 214      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef21#219  | 0x14010ef21 | 219      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef21#1440 | 0x14010ef21 | 1440     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef21#1599 | 0x14010ef21 | 1599     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef26#220  | 0x14010ef26 | 220      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef26#222  | 0x14010ef26 | 222      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef26#1457 | 0x14010ef26 | 1457     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef26#1470 | 0x14010ef26 | 1470     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef26#1611 | 0x14010ef26 | 1611     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef26#1683 | 0x14010ef26 | 1683     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ef2d#228  | 0x14010ef2d | 228      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef31#234  | 0x14010ef31 | 234      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef3c#248  | 0x14010ef3c | 248      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef3c#1441 | 0x14010ef3c | 1441     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef3c#1600 | 0x14010ef3c | 1600     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef41#253  | 0x14010ef41 | 253      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef43#258  | 0x14010ef43 | 258      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef49#259  | 0x14010ef49 | 259      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef49#261  | 0x14010ef49 | 261      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef49#1458 | 0x14010ef49 | 1458     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef49#1686 | 0x14010ef49 | 1686     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ef50#262  | 0x14010ef50 | 262      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef50#264  | 0x14010ef50 | 264      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef50#1459 | 0x14010ef50 | 1459     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef50#1687 | 0x14010ef50 | 1687     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ef57#265  | 0x14010ef57 | 265      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x14010ef5c#560  | 0x14010ef5c | 560      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef5c#562  | 0x14010ef5c | 562      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef5c#1465 | 0x14010ef5c | 1465     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef5c#1476 | 0x14010ef5c | 1476     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef5c#1620 | 0x14010ef5c | 1620     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef5c#1678 | 0x14010ef5c | 1678     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ef63#568  | 0x14010ef63 | 568      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef67#574  | 0x14010ef67 | 574      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef75#579  | 0x14010ef75 | 579      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef75#1430 | 0x14010ef75 | 1430     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef75#1589 | 0x14010ef75 | 1589     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef7a#584  | 0x14010ef7a | 584      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef7c#589  | 0x14010ef7c | 589      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010ef82#590  | 0x14010ef82 | 590      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef82#592  | 0x14010ef82 | 592      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef82#1466 | 0x14010ef82 | 1466     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef82#1679 | 0x14010ef82 | 1679     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010ef89#1467 | 0x14010ef89 | 1467     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef89#1616 | 0x14010ef89 | 1616     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010ef8e#527  | 0x14010ef8e | 527      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010ef8e#1432 | 0x14010ef8e | 1432     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef8e#1591 | 0x14010ef8e | 1591     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef93#533  | 0x14010ef93 | 533      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010ef97#539  | 0x14010ef97 | 539      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010efa5#544  | 0x14010efa5 | 544      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efa5#1433 | 0x14010efa5 | 1433     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efa5#1592 | 0x14010efa5 | 1592     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efaa#549  | 0x14010efaa | 549      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efac#554  | 0x14010efac | 554      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010efb7#559  | 0x14010efb7 | 559      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010efb7#1434 | 0x14010efb7 | 1434     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efb7#1593 | 0x14010efb7 | 1593     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efbc#1472 | 0x14010efbc | 1472     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efbc#1613 | 0x14010efbc | 1613     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efc1#483  | 0x14010efc1 | 483      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010efc1#1438 | 0x14010efc1 | 1438     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efc1#1597 | 0x14010efc1 | 1597     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efc6#489  | 0x14010efc6 | 489      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efca#495  | 0x14010efca | 495      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010efd8#500  | 0x14010efd8 | 500      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efd8#1439 | 0x14010efd8 | 1439     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efd8#1598 | 0x14010efd8 | 1598     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efdd#505  | 0x14010efdd | 505      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efdf#510  | 0x14010efdf | 510      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010efe5#511  | 0x14010efe5 | 511      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efe5#513  | 0x14010efe5 | 513      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010efe5#1464 | 0x14010efe5 | 1464     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efe5#1682 | 0x14010efe5 | 1682     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010efec#453  | 0x14010efec | 453      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efec#455  | 0x14010efec | 455      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010efec#1462 | 0x14010efec | 1462     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010efec#1468 | 0x14010efec | 1468     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efec#1614 | 0x14010efec | 1614     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010efec#1684 | 0x14010efec | 1684     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010eff3#456  | 0x14010eff3 | 456      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eff3#458  | 0x14010eff3 | 458      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010eff3#1463 | 0x14010eff3 | 1463     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010eff3#1685 | 0x14010eff3 | 1685     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010effa#464  | 0x14010effa | 464      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010effe#469  | 0x14010effe | 469      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010f000#266  | 0x14010f000 | 266      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f000#268  | 0x14010f000 | 268      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010f000#1460 | 0x14010f000 | 1460     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f000#1469 | 0x14010f000 | 1469     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f000#1615 | 0x14010f000 | 1615     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f000#1688 | 0x14010f000 | 1688     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f007#269  | 0x14010f007 | 269      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f007#271  | 0x14010f007 | 271      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14010f007#1461 | 0x14010f007 | 1461     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f007#1475 | 0x14010f007 | 1475     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f007#1619 | 0x14010f007 | 1619     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f007#1689 | 0x14010f007 | 1689     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f011#275  | 0x14010f011 | 275      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f011#1442 | 0x14010f011 | 1442     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f011#1601 | 0x14010f011 | 1601     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f021#289  | 0x14010f021 | 289      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f021#290  | 0x14010f021 | 290      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f021#1690 | 0x14010f021 | 1690     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f028#294  | 0x14010f028 | 294      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x14010f028#1443 | 0x14010f028 | 1443     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f028#1602 | 0x14010f028 | 1602     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f030#298  | 0x14010f030 | 298      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f030#1444 | 0x14010f030 | 1444     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f030#1603 | 0x14010f030 | 1603     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f040#312  | 0x14010f040 | 312      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f040#313  | 0x14010f040 | 313      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f040#1691 | 0x14010f040 | 1691     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f047#317  | 0x14010f047 | 317      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x14010f047#1445 | 0x14010f047 | 1445     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f047#1604 | 0x14010f047 | 1604     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f04f#321  | 0x14010f04f | 321      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010f04f#1446 | 0x14010f04f | 1446     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f04f#1605 | 0x14010f04f | 1605     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f05e#329  | 0x14010f05e | 329      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f062#336  | 0x14010f062 | 336      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14010f062#337  | 0x14010f062 | 337      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f062#1673 | 0x14010f062 | 1673     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f066#1094 | 0x14010f066 | 1094     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f06e#349  | 0x14010f06e | 349      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f06e#350  | 0x14010f06e | 350      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f06e#1692 | 0x14010f06e | 1692     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f075#354  | 0x14010f075 | 354      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x14010f075#1447 | 0x14010f075 | 1447     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f075#1606 | 0x14010f075 | 1606     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f07f#375  | 0x14010f07f | 375      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f07f#376  | 0x14010f07f | 376      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f07f#1693 | 0x14010f07f | 1693     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f086#381  | 0x14010f086 | 381      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14010f086#1448 | 0x14010f086 | 1448     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f086#1607 | 0x14010f086 | 1607     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f091#402  | 0x14010f091 | 402      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f091#403  | 0x14010f091 | 403      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f091#1694 | 0x14010f091 | 1694     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f098#408  | 0x14010f098 | 408      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14010f098#1449 | 0x14010f098 | 1449     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f098#1608 | 0x14010f098 | 1608     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0a3#429  | 0x14010f0a3 | 429      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0a3#430  | 0x14010f0a3 | 430      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0a3#1695 | 0x14010f0a3 | 1695     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f0aa#435  | 0x14010f0aa | 435      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14010f0aa#1450 | 0x14010f0aa | 1450     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0aa#1609 | 0x14010f0aa | 1609     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0b7#438  | 0x14010f0b7 | 438      | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0b7#439  | 0x14010f0b7 | 439      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010f0b7#440  | 0x14010f0b7 | 440      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0b7#839  | 0x14010f0b7 | 839      | INT_ZEXT     | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f0b7#1669 | 0x14010f0b7 | 1669     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0b7#1696 | 0x14010f0b7 | 1696     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f0be#1668 | 0x14010f0be | 1668     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0be#1671 | 0x14010f0be | 1671     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0be#1672 | 0x14010f0be | 1672     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14010f0c1#452  | 0x14010f0c1 | 452      | CALLIND      | true    | member           | [object Object]                                                                 |                 |
| 0x14010f0c1#596  | 0x14010f0c1 | 596      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x14010f0c1#1451 | 0x14010f0c1 | 1451     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0c1#1453 | 0x14010f0c1 | 1453     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f0c1#1610 | 0x14010f0c1 | 1610     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14010f0c1#1697 | 0x14010f0c1 | 1697     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14010f2e2#595  | 0x14010f2e2 | 595      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x14010f2e2#1452 | 0x14010f2e2 | 1452     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x14010ee30#1    | 0x14010ee34#11   | 1           |
| 0x14010ee50#1674 | 0x14010ee50#33   | 1           |
| 0x14010ee45#1670 | 0x14010ee50#1674 | 0           |
| 0x14010ee5e#50   | 0x14010ee62#55   | 1           |
| 0x14010ee50#33   | 0x14010ee64#1586 | 0           |
| 0x14010ee69#1675 | 0x14010ee69#60   | 1           |
| 0x14010ee64#1427 | 0x14010ee69#1477 | 1           |
| 0x14010ee50#33   | 0x14010ee69#1621 | 0           |
| 0x14010ee64#1586 | 0x14010ee69#1621 | 1           |
| 0x14010ee69#59   | 0x14010ee69#1675 | 0           |
| 0x14010ee69#60   | 0x14010ee70#62   | 0           |
| 0x14010ee70#62   | 0x14010ee78#74   | 0           |
| 0x14010ee78#74   | 0x14010ee78#76   | 1           |
| 0x14010ee69#60   | 0x14010ee7a#82   | 1           |
| 0x14010ee7a#82   | 0x14010ee7d#87   | 1           |
| 0x14010ee7f#1676 | 0x14010ee7f#89   | 1           |
| 0x14010ee7f#88   | 0x14010ee7f#1676 | 0           |
| 0x14010ee7f#89   | 0x14010ee86#95   | 0           |
| 0x14010ee86#95   | 0x14010ee89#100  | 1           |
| 0x14010ee7f#89   | 0x14010ee90#105  | 1           |
| 0x14010ee69#1477 | 0x14010ee90#1428 | 0           |
| 0x14010ee69#1621 | 0x14010ee90#1587 | 0           |
| 0x14010ee96#1677 | 0x14010ee96#108  | 1           |
| 0x14010ee90#1428 | 0x14010ee96#1454 | 0           |
| 0x14010ee96#106  | 0x14010ee96#1677 | 0           |
| 0x14010ee69#1477 | 0x14010ee9d#1474 | 0           |
| 0x14010ee69#1477 | 0x14010ee9d#1474 | 1           |
| 0x14010ee69#1477 | 0x14010ee9d#1474 | 2           |
| 0x14010ee96#1454 | 0x14010ee9d#1474 | 3           |
| 0x14010ee69#1621 | 0x14010ee9d#1618 | 0           |
| 0x14010ee69#1621 | 0x14010ee9d#1618 | 1           |
| 0x14010ee69#1621 | 0x14010ee9d#1618 | 2           |
| 0x14010ee90#1587 | 0x14010ee9d#1618 | 3           |
| 0x14010ee9d#114  | 0x14010eea1#120  | 1           |
| 0x14010ee9d#1474 | 0x14010eeaf#1429 | 0           |
| 0x14010ee9d#1618 | 0x14010eeaf#1588 | 0           |
| 0x14010eeaf#125  | 0x14010eeb4#130  | 0           |
| 0x14010eeb4#130  | 0x14010eeb6#135  | 1           |
| 0x14010eebc#1680 | 0x14010eebc#138  | 1           |
| 0x14010eeaf#1429 | 0x14010eebc#1455 | 0           |
| 0x14010eebc#136  | 0x14010eebc#1680 | 0           |
| 0x14010eec3#1681 | 0x14010eec3#141  | 1           |
| 0x14010eec3#1473 | 0x14010eec3#1456 | 0           |
| 0x14010eebc#1455 | 0x14010eec3#1473 | 0           |
| 0x14010ef5c#1465 | 0x14010eec3#1473 | 1           |
| 0x14010ef75#1430 | 0x14010eec3#1473 | 2           |
| 0x14010eeaf#1588 | 0x14010eec3#1617 | 0           |
| 0x14010ef5c#1620 | 0x14010eec3#1617 | 1           |
| 0x14010ef75#1589 | 0x14010eec3#1617 | 2           |
| 0x14010eec3#139  | 0x14010eec3#1681 | 0           |
| 0x14010eeca#147  | 0x14010eece#153  | 1           |
| 0x14010eec3#1456 | 0x14010eedc#1431 | 0           |
| 0x14010eec3#1617 | 0x14010eedc#1590 | 0           |
| 0x14010eedc#158  | 0x14010eee1#163  | 0           |
| 0x14010eee1#163  | 0x14010eee3#168  | 1           |
| 0x14010eedc#1431 | 0x14010eeee#1435 | 0           |
| 0x14010eedc#1590 | 0x14010eeee#1594 | 0           |
| 0x14010eeee#1435 | 0x14010eef3#1471 | 0           |
| 0x14010ef8e#1432 | 0x14010eef3#1471 | 1           |
| 0x14010efa5#1433 | 0x14010eef3#1471 | 2           |
| 0x14010eeee#1594 | 0x14010eef3#1612 | 0           |
| 0x14010ef8e#1591 | 0x14010eef3#1612 | 1           |
| 0x14010efa5#1592 | 0x14010eef3#1612 | 2           |
| 0x14010eef3#1471 | 0x14010eef8#1436 | 0           |
| 0x14010eef3#1612 | 0x14010eef8#1595 | 0           |
| 0x14010eefd#193  | 0x14010ef01#199  | 1           |
| 0x14010eef8#1436 | 0x14010ef0f#1437 | 0           |
| 0x14010eef8#1595 | 0x14010ef0f#1596 | 0           |
| 0x14010ef0f#204  | 0x14010ef14#209  | 0           |
| 0x14010ef14#209  | 0x14010ef16#214  | 1           |
| 0x14010ef0f#1437 | 0x14010ef21#1440 | 0           |
| 0x14010ef0f#1596 | 0x14010ef21#1599 | 0           |
| 0x14010ef26#1683 | 0x14010ef26#222  | 1           |
| 0x14010ef26#1470 | 0x14010ef26#1457 | 0           |
| 0x14010ef21#1440 | 0x14010ef26#1470 | 0           |
| 0x14010efc1#1438 | 0x14010ef26#1470 | 1           |
| 0x14010efd8#1439 | 0x14010ef26#1470 | 2           |
| 0x14010ef21#1599 | 0x14010ef26#1611 | 0           |
| 0x14010efc1#1597 | 0x14010ef26#1611 | 1           |
| 0x14010efd8#1598 | 0x14010ef26#1611 | 2           |
| 0x14010ef26#220  | 0x14010ef26#1683 | 0           |
| 0x14010ef2d#228  | 0x14010ef31#234  | 1           |
| 0x14010ef26#1457 | 0x14010ef3c#1441 | 0           |
| 0x14010ef26#1611 | 0x14010ef3c#1600 | 0           |
| 0x14010ef3c#248  | 0x14010ef41#253  | 0           |
| 0x14010ef41#253  | 0x14010ef43#258  | 1           |
| 0x14010ef49#1686 | 0x14010ef49#261  | 1           |
| 0x14010ef3c#1441 | 0x14010ef49#1458 | 0           |
| 0x14010ef49#259  | 0x14010ef49#1686 | 0           |
| 0x14010ef50#1687 | 0x14010ef50#264  | 1           |
| 0x14010ef49#1458 | 0x14010ef50#1459 | 0           |
| 0x14010ef50#262  | 0x14010ef50#1687 | 0           |
| 0x14010ef5c#1678 | 0x14010ef5c#562  | 1           |
| 0x14010ef5c#1476 | 0x14010ef5c#1465 | 0           |
| 0x14010ee9d#1474 | 0x14010ef5c#1476 | 0           |
| 0x14010eeaf#1429 | 0x14010ef5c#1476 | 1           |
| 0x14010ee9d#1618 | 0x14010ef5c#1620 | 0           |
| 0x14010eeaf#1588 | 0x14010ef5c#1620 | 1           |
| 0x14010ef5c#560  | 0x14010ef5c#1678 | 0           |
| 0x14010ef63#568  | 0x14010ef67#574  | 1           |
| 0x14010ef5c#1465 | 0x14010ef75#1430 | 0           |
| 0x14010ef5c#1620 | 0x14010ef75#1589 | 0           |
| 0x14010ef75#579  | 0x14010ef7a#584  | 0           |
| 0x14010ef7a#584  | 0x14010ef7c#589  | 1           |
| 0x14010ef82#1679 | 0x14010ef82#592  | 1           |
| 0x14010ef75#1430 | 0x14010ef82#1466 | 0           |
| 0x14010ef82#590  | 0x14010ef82#1679 | 0           |
| 0x14010eec3#1456 | 0x14010ef89#1467 | 0           |
| 0x14010eedc#1431 | 0x14010ef89#1467 | 1           |
| 0x14010ef82#1466 | 0x14010ef89#1467 | 2           |
| 0x14010eec3#1617 | 0x14010ef89#1616 | 0           |
| 0x14010eedc#1590 | 0x14010ef89#1616 | 1           |
| 0x14010ef75#1589 | 0x14010ef89#1616 | 2           |
| 0x14010ef89#1467 | 0x14010ef8e#1432 | 0           |
| 0x14010ef89#1616 | 0x14010ef8e#1591 | 0           |
| 0x14010ef93#533  | 0x14010ef97#539  | 1           |
| 0x14010ef8e#1432 | 0x14010efa5#1433 | 0           |
| 0x14010ef8e#1591 | 0x14010efa5#1592 | 0           |
| 0x14010efa5#544  | 0x14010efaa#549  | 0           |
| 0x14010efaa#549  | 0x14010efac#554  | 1           |
| 0x14010efa5#1433 | 0x14010efb7#1434 | 0           |
| 0x14010efa5#1592 | 0x14010efb7#1593 | 0           |
| 0x14010eef8#1436 | 0x14010efbc#1472 | 0           |
| 0x14010ef0f#1437 | 0x14010efbc#1472 | 1           |
| 0x14010efb7#1434 | 0x14010efbc#1472 | 2           |
| 0x14010eef8#1595 | 0x14010efbc#1613 | 0           |
| 0x14010ef0f#1596 | 0x14010efbc#1613 | 1           |
| 0x14010efb7#1593 | 0x14010efbc#1613 | 2           |
| 0x14010efbc#1472 | 0x14010efc1#1438 | 0           |
| 0x14010efbc#1613 | 0x14010efc1#1597 | 0           |
| 0x14010efc6#489  | 0x14010efca#495  | 1           |
| 0x14010efc1#1438 | 0x14010efd8#1439 | 0           |
| 0x14010efc1#1597 | 0x14010efd8#1598 | 0           |
| 0x14010efd8#500  | 0x14010efdd#505  | 0           |
| 0x14010efdd#505  | 0x14010efdf#510  | 1           |
| 0x14010efe5#1682 | 0x14010efe5#513  | 1           |
| 0x14010efd8#1439 | 0x14010efe5#1464 | 0           |
| 0x14010efe5#511  | 0x14010efe5#1682 | 0           |
| 0x14010efec#1684 | 0x14010efec#455  | 1           |
| 0x14010efec#1468 | 0x14010efec#1462 | 0           |
| 0x14010ef26#1457 | 0x14010efec#1468 | 0           |
| 0x14010ef3c#1441 | 0x14010efec#1468 | 1           |
| 0x14010efe5#1464 | 0x14010efec#1468 | 2           |
| 0x14010ef26#1611 | 0x14010efec#1614 | 0           |
| 0x14010ef3c#1600 | 0x14010efec#1614 | 1           |
| 0x14010efd8#1598 | 0x14010efec#1614 | 2           |
| 0x14010efec#453  | 0x14010efec#1684 | 0           |
| 0x14010eff3#1685 | 0x14010eff3#458  | 1           |
| 0x14010efec#1462 | 0x14010eff3#1463 | 0           |
| 0x14010eff3#456  | 0x14010eff3#1685 | 0           |
| 0x14010effa#464  | 0x14010effe#469  | 1           |
| 0x14010f000#1688 | 0x14010f000#268  | 1           |
| 0x14010f000#1469 | 0x14010f000#1460 | 0           |
| 0x14010ef50#1459 | 0x14010f000#1469 | 0           |
| 0x14010eff3#1463 | 0x14010f000#1469 | 1           |
| 0x14010ef3c#1600 | 0x14010f000#1615 | 0           |
| 0x14010efec#1614 | 0x14010f000#1615 | 1           |
| 0x14010f000#266  | 0x14010f000#1688 | 0           |
| 0x14010f007#1689 | 0x14010f007#271  | 1           |
| 0x14010f007#1475 | 0x14010f007#1461 | 0           |
| 0x14010f000#1460 | 0x14010f007#1475 | 0           |
| 0x14010eff3#1463 | 0x14010f007#1475 | 1           |
| 0x14010f000#1615 | 0x14010f007#1619 | 0           |
| 0x14010efec#1614 | 0x14010f007#1619 | 1           |
| 0x14010f007#269  | 0x14010f007#1689 | 0           |
| 0x14010f007#1461 | 0x14010f011#1442 | 0           |
| 0x14010f007#1619 | 0x14010f011#1601 | 0           |
| 0x14010f021#1690 | 0x14010f021#290  | 1           |
| 0x14010f021#289  | 0x14010f021#1690 | 0           |
| 0x14010f021#290  | 0x14010f028#294  | 1           |
| 0x14010f011#275  | 0x14010f028#294  | 4           |
| 0x14010f011#1442 | 0x14010f028#1443 | 0           |
| 0x14010f011#1601 | 0x14010f028#1602 | 0           |
| 0x14010f028#1443 | 0x14010f030#1444 | 0           |
| 0x14010f028#1602 | 0x14010f030#1603 | 0           |
| 0x14010f040#1691 | 0x14010f040#313  | 1           |
| 0x14010f040#312  | 0x14010f040#1691 | 0           |
| 0x14010f040#313  | 0x14010f047#317  | 1           |
| 0x14010f030#298  | 0x14010f047#317  | 4           |
| 0x14010f030#1444 | 0x14010f047#1445 | 0           |
| 0x14010f030#1603 | 0x14010f047#1604 | 0           |
| 0x14010f047#1445 | 0x14010f04f#1446 | 0           |
| 0x14010f047#1604 | 0x14010f04f#1605 | 0           |
| 0x14010f05e#329  | 0x14010f062#336  | 1           |
| 0x14010f062#1673 | 0x14010f066#1094 | 0           |
| 0x14010f062#337  | 0x14010f066#1094 | 1           |
| 0x14010f06e#1692 | 0x14010f06e#350  | 1           |
| 0x14010f06e#349  | 0x14010f06e#1692 | 0           |
| 0x14010f06e#350  | 0x14010f075#354  | 1           |
| 0x14010f066#1094 | 0x14010f075#354  | 3           |
| 0x14010f04f#1446 | 0x14010f075#1447 | 0           |
| 0x14010f04f#1605 | 0x14010f075#1606 | 0           |
| 0x14010f07f#1693 | 0x14010f07f#376  | 1           |
| 0x14010f07f#375  | 0x14010f07f#1693 | 0           |
| 0x14010f07f#376  | 0x14010f086#381  | 1           |
| 0x14010f075#1447 | 0x14010f086#1448 | 0           |
| 0x14010f075#1606 | 0x14010f086#1607 | 0           |
| 0x14010f091#1694 | 0x14010f091#403  | 1           |
| 0x14010f091#402  | 0x14010f091#1694 | 0           |
| 0x14010f091#403  | 0x14010f098#408  | 1           |
| 0x14010f086#1448 | 0x14010f098#1449 | 0           |
| 0x14010f086#1607 | 0x14010f098#1608 | 0           |
| 0x14010f0a3#1695 | 0x14010f0a3#430  | 1           |
| 0x14010f0a3#429  | 0x14010f0a3#1695 | 0           |
| 0x14010f0a3#430  | 0x14010f0aa#435  | 1           |
| 0x14010f098#1449 | 0x14010f0aa#1450 | 0           |
| 0x14010f098#1608 | 0x14010f0aa#1609 | 0           |
| 0x14010f0b7#1669 | 0x14010f0b7#439  | 0           |
| 0x14010f0b7#438  | 0x14010f0b7#439  | 1           |
| 0x14010f0b7#1696 | 0x14010f0b7#440  | 1           |
| 0x14010f0b7#440  | 0x14010f0b7#839  | 0           |
| 0x14010f0b7#439  | 0x14010f0b7#1696 | 0           |
| 0x14010f0be#1668 | 0x14010f0be#1671 | 0           |
| 0x14010f0be#1671 | 0x14010f0be#1672 | 0           |
| 0x14010f0b7#839  | 0x14010f0be#1672 | 1           |
| 0x14010f0c1#1697 | 0x14010f0c1#452  | 0           |
| 0x14010f0aa#1450 | 0x14010f0c1#1451 | 0           |
| 0x14010f0c1#1451 | 0x14010f0c1#1453 | 0           |
| 0x14010f0aa#1609 | 0x14010f0c1#1610 | 0           |
| 0x14010f0be#1672 | 0x14010f0c1#1697 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x14010ee34#11  | conditional_branch |               | 1           |
| 0x14010ee62#55  | conditional_branch |               | 1           |
| 0x14010ee64#58  | direct_call        | 0             |             |
| 0x14010ee69#60  | memory_read        | 1             |             |
| 0x14010ee78#76  | conditional_branch |               | 1           |
| 0x14010ee7d#87  | conditional_branch |               | 1           |
| 0x14010ee7f#89  | memory_read        | 1             |             |
| 0x14010ee89#100 | conditional_branch |               | 1           |
| 0x14010ee90#105 | direct_call        | 0             |             |
| 0x14010ee96#108 | memory_write       | 1             | 2           |
| 0x14010eea1#120 | conditional_branch |               | 1           |
| 0x14010eeaf#125 | direct_call        | 0             |             |
| 0x14010eeb6#135 | conditional_branch |               | 1           |
| 0x14010eebc#138 | memory_write       | 1             | 2           |
| 0x14010eec3#141 | memory_write       | 1             | 2           |
| 0x14010eece#153 | conditional_branch |               | 1           |
| 0x14010eedc#158 | direct_call        | 0             |             |
| 0x14010eee3#168 | conditional_branch |               | 1           |
| 0x14010eeee#173 | direct_call        | 0             |             |
| 0x14010eef8#187 | direct_call        | 0             |             |
| 0x14010ef01#199 | conditional_branch |               | 1           |
| 0x14010ef0f#204 | direct_call        | 0             |             |
| 0x14010ef16#214 | conditional_branch |               | 1           |
| 0x14010ef21#219 | direct_call        | 0             |             |
| 0x14010ef26#222 | memory_write       | 1             | 2           |
| 0x14010ef31#234 | conditional_branch |               | 1           |
| 0x14010ef3c#248 | direct_call        | 0             |             |
| 0x14010ef43#258 | conditional_branch |               | 1           |
| 0x14010ef49#261 | memory_write       | 1             | 2           |
| 0x14010ef50#264 | memory_write       | 1             | 2           |
| 0x14010ef5c#562 | memory_write       | 1             | 2           |
| 0x14010ef67#574 | conditional_branch |               | 1           |
| 0x14010ef75#579 | direct_call        | 0             |             |
| 0x14010ef7c#589 | conditional_branch |               | 1           |
| 0x14010ef82#592 | memory_write       | 1             | 2           |
| 0x14010ef8e#527 | direct_call        | 0             |             |
| 0x14010ef97#539 | conditional_branch |               | 1           |
| 0x14010efa5#544 | direct_call        | 0             |             |
| 0x14010efac#554 | conditional_branch |               | 1           |
| 0x14010efb7#559 | direct_call        | 0             |             |
| 0x14010efc1#483 | direct_call        | 0             |             |
| 0x14010efca#495 | conditional_branch |               | 1           |
| 0x14010efd8#500 | direct_call        | 0             |             |
| 0x14010efdf#510 | conditional_branch |               | 1           |
| 0x14010efe5#513 | memory_write       | 1             | 2           |
| 0x14010efec#455 | memory_write       | 1             | 2           |
| 0x14010eff3#458 | memory_write       | 1             | 2           |
| 0x14010effe#469 | conditional_branch |               | 1           |
| 0x14010f000#268 | memory_write       | 1             | 2           |
| 0x14010f007#271 | memory_write       | 1             | 2           |
| 0x14010f011#275 | direct_call        | 0             |             |
| 0x14010f021#290 | memory_read        | 1             |             |
| 0x14010f028#294 | direct_call        | 0             |             |
| 0x14010f030#298 | direct_call        | 0             |             |
| 0x14010f040#313 | memory_read        | 1             |             |
| 0x14010f047#317 | direct_call        | 0             |             |
| 0x14010f04f#321 | direct_call        | 0             |             |
| 0x14010f062#336 | conditional_branch |               | 1           |
| 0x14010f06e#350 | memory_read        | 1             |             |
| 0x14010f075#354 | direct_call        | 0             |             |
| 0x14010f07f#376 | memory_read        | 1             |             |
| 0x14010f086#381 | direct_call        | 0             |             |
| 0x14010f091#403 | memory_read        | 1             |             |
| 0x14010f098#408 | direct_call        | 0             |             |
| 0x14010f0a3#430 | memory_read        | 1             |             |
| 0x14010f0aa#435 | direct_call        | 0             |             |
| 0x14010f0b7#440 | memory_read        | 1             |             |
| 0x14010f0c1#452 | indirect_call      | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type  |
|---------|---------|------------|
| 0       | param_1 | /longlong  |
| 1       | param_2 | /ulonglong |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 1       | 0x14010ee30#1    | 1           |
| 1       | 0x14010ee5e#50   | 0           |
| 0       | 0x14010ee69#59   | 0           |
| 1       | 0x14010ee7a#82   | 0           |
| 0       | 0x14010ee7f#88   | 0           |
| 0       | 0x14010ee96#106  | 0           |
| 1       | 0x14010ee9d#114  | 0           |
| 0       | 0x14010eeaf#125  | 1           |
| 0       | 0x14010eebc#136  | 0           |
| 0       | 0x14010eec3#139  | 0           |
| 1       | 0x14010eeca#147  | 0           |
| 0       | 0x14010eedc#158  | 1           |
| 0       | 0x14010eeee#173  | 1           |
| 0       | 0x14010eef8#187  | 1           |
| 1       | 0x14010eefd#193  | 0           |
| 0       | 0x14010ef0f#204  | 1           |
| 0       | 0x14010ef21#219  | 1           |
| 0       | 0x14010ef26#220  | 0           |
| 1       | 0x14010ef2d#228  | 0           |
| 0       | 0x14010ef3c#248  | 1           |
| 0       | 0x14010ef49#259  | 0           |
| 0       | 0x14010ef50#262  | 0           |
| 0       | 0x14010ef5c#560  | 0           |
| 1       | 0x14010ef63#568  | 0           |
| 0       | 0x14010ef75#579  | 1           |
| 0       | 0x14010ef82#590  | 0           |
| 0       | 0x14010ef8e#527  | 1           |
| 1       | 0x14010ef93#533  | 0           |
| 0       | 0x14010efa5#544  | 1           |
| 0       | 0x14010efb7#559  | 1           |
| 0       | 0x14010efc1#483  | 1           |
| 1       | 0x14010efc6#489  | 0           |
| 0       | 0x14010efd8#500  | 1           |
| 0       | 0x14010efe5#511  | 0           |
| 0       | 0x14010efec#453  | 0           |
| 0       | 0x14010eff3#456  | 0           |
| 1       | 0x14010effa#464  | 0           |
| 0       | 0x14010f000#266  | 0           |
| 1       | 0x14010f000#268  | 2           |
| 0       | 0x14010f007#269  | 0           |
| 1       | 0x14010f007#271  | 2           |
| 0       | 0x14010f011#275  | 1           |
| 0       | 0x14010f021#289  | 0           |
| 0       | 0x14010f030#298  | 1           |
| 0       | 0x14010f040#312  | 0           |
| 0       | 0x14010f04f#321  | 1           |
| 1       | 0x14010f05e#329  | 0           |
| 1       | 0x14010f062#1673 | 0           |
| 0       | 0x14010f06e#349  | 0           |
| 0       | 0x14010f07f#375  | 0           |
| 0       | 0x14010f091#402  | 0           |
| 0       | 0x14010f0a3#429  | 0           |
| 1       | 0x14010f0b7#438  | 0           |

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

