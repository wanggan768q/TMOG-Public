## evidence_id

ev_6379ec5a82b4651096dafffd2410fd3bfe47560ab62c8e9aea0d70e7358d7ac7

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
| procedure | 0x1401a6c50 |

## raw_result.value.procedure.address

0x1401a6c50

## raw_result.value.procedure.name

FUN_1401a6c50

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
| 0x1401a6c50 | 0x1401a6e4e |
| 0x1401a6e50 | 0x1401a6e59 |

## raw_result.value.procedure.body.total_bytes

521

## raw_result.value.procedure.body.span_bytes

522

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401a6c50()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_10 @ Stack[-0x10]:8   | ghidra-function-database |
| undefined8 local_18 @ Stack[-0x18]:8   | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8   | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |
| undefined1 local_res8 @ Stack[0x8]:1   | ghidra-function-database |

## raw_result.value.pseudocode


void FUN_1401a6c50(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  
  if (*(longlong *)(param_1 + 0x230) == 0) {
    return;
  }
  if (((*(char *)(param_1 + 0xd60) == '\0') || (*(char *)(param_1 + 0xd61) == '\0')) ||
     (*(char *)(param_1 + 0xd62) != '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  lVar3 = *(longlong *)(param_1 + 0x5e0);
  lVar4 = *(longlong *)(param_1 + 0xe8);
  cVar1 = *(char *)(param_1 + 4);
  iVar10 = FUN_1403265a0(param_1 + 0x17c0);
  if (iVar10 != 0) {
LAB_1401a6e50:
                    /* WARNING: Subroutine does not return */
    FUN_140325560(5);
  }
  if (*(int *)(param_1 + 0x180c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x180c) = 0x7ffffffe;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x1810);
    FUN_1403266c0(param_1 + 0x17c0);
    iVar10 = FUN_1403265a0(param_1 + 0xb98);
    if (iVar10 != 0) goto LAB_1401a6e50;
    if (*(int *)(param_1 + 0xbe4) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0xbe4) = 0x7ffffffe;
    }
    else {
      cVar2 = *(char *)(param_1 + 0xcd8);
      FUN_1403266c0(param_1 + 0xb98);
      iVar10 = FUN_1403265a0(param_1 + 0xe18);
      if (iVar10 != 0) goto LAB_1401a6e50;
      if (*(int *)(param_1 + 0xe64) != 0x7fffffff) {
        cVar9 = *(char *)(param_1 + 0xf08);
        FUN_1403266c0();
        if ((cVar9 == '\0') &&
           (((*(char *)(param_1 + 0xdd2) == '\0' || (*(char *)(param_1 + 0xdd3) == '\0')) ||
            (*(char *)(param_1 + 0xdd4) != '\0')))) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((*(char *)(param_1 + 0x1630) == '\0') || (cVar9 = FUN_1401cd1b0(), cVar9 == '\0')) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (((((!bVar6 && cVar2 == '\0') && *(char *)(param_1 + 0x1f59) == '\0') &&
             (!bVar7 && lVar3 == 0)) && (lVar4 == 0 && cVar1 == '\0')) && (lVar5 == 0 && !bVar8)) {
          KillTimer(*(HWND *)(param_1 + 0x230),0xe);
          return;
        }
        SetTimer(*(HWND *)(param_1 + 0x230),0xe,0xfa,(TIMERPROC)0x0);
        return;
      }
      *(undefined4 *)(param_1 + 0xe64) = 0x7ffffffe;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140325560(6);
}



## raw_result.value.assembly

0x1401a6c50: PUSH RDI,0x1401a6c52: SUB RSP, 0x40,0x1401a6c56: CMP qword ptr [RCX + 0x230], 0x0,0x1401a6c5e: MOV RDI, RCX,0x1401a6c61: JZ 0x1401a6e18,0x1401a6c67: CMP byte ptr [RCX + 0xd60], 0x0,0x1401a6c6e: MOV qword ptr [RSP + 0x58], RBX,0x1401a6c73: MOV qword ptr [RSP + 0x38], R12,0x1401a6c78: MOV qword ptr [RSP + 0x30], R13,0x1401a6c7d: MOV qword ptr [RSP + 0x20], R15,0x1401a6c82: MOV qword ptr [RSP + 0x68], RSI,0x1401a6c87: JZ 0x1401a6ca0,0x1401a6c89: CMP byte ptr [RCX + 0xd61], 0x0,0x1401a6c90: JZ 0x1401a6ca0,0x1401a6c92: CMP byte ptr [RCX + 0xd62], 0x0,0x1401a6c99: JNZ 0x1401a6ca0,0x1401a6c9b: MOV SIL, 0x1,0x1401a6c9e: JMP 0x1401a6ca3,0x1401a6ca0: XOR SIL, SIL,0x1401a6ca3: MOV R13, qword ptr [RCX + 0x5e0],0x1401a6caa: MOV qword ptr [RSP + 0x60], RBP,0x1401a6caf: MOV qword ptr [RSP + 0x28], R14,0x1401a6cb4: MOV R15, qword ptr [RCX + 0xe8],0x1401a6cbb: MOVZX R12D, byte ptr [RCX + 0x4],0x1401a6cc0: ADD RCX, 0x17c0,0x1401a6cc7: CALL 0x1403265a0,0x1401a6ccc: TEST EAX, EAX,0x1401a6cce: JNZ 0x1401a6e50,0x1401a6cd4: CMP dword ptr [RDI + 0x180c], 0x7fffffff,0x1401a6cde: JNZ 0x1401a6cef,0x1401a6ce0: MOV dword ptr [RDI + 0x180c], 0x7ffffffe,0x1401a6cea: JMP 0x1401a6e45,0x1401a6cef: MOV RBP, qword ptr [RDI + 0x1810],0x1401a6cf6: LEA RCX, [RDI + 0x17c0],0x1401a6cfd: CALL 0x1403266c0,0x1401a6d02: LEA RCX, [RDI + 0xb98],0x1401a6d09: CALL 0x1403265a0,0x1401a6d0e: TEST EAX, EAX,0x1401a6d10: JNZ 0x1401a6e50,0x1401a6d16: CMP dword ptr [RDI + 0xbe4], 0x7fffffff,0x1401a6d20: JNZ 0x1401a6d31,0x1401a6d22: MOV dword ptr [RDI + 0xbe4], 0x7ffffffe,0x1401a6d2c: JMP 0x1401a6e45,0x1401a6d31: MOVZX EAX, byte ptr [RDI + 0xcd8],0x1401a6d38: LEA RCX, [RDI + 0xb98],0x1401a6d3f: MOV byte ptr [RSP + 0x50], AL,0x1401a6d43: CALL 0x1403266c0,0x1401a6d48: LEA RCX, [RDI + 0xe18],0x1401a6d4f: CALL 0x1403265a0,0x1401a6d54: TEST EAX, EAX,0x1401a6d56: JNZ 0x1401a6e50,0x1401a6d5c: CMP dword ptr [RDI + 0xe64], 0x7fffffff,0x1401a6d66: JZ 0x1401a6e3b,0x1401a6d6c: MOVZX EBX, byte ptr [RDI + 0xf08],0x1401a6d73: LEA RCX, [RDI + 0xe18],0x1401a6d7a: CALL 0x1403266c0,0x1401a6d7f: TEST BL, BL,0x1401a6d81: JNZ 0x1401a6d9f,0x1401a6d83: CMP byte ptr [RDI + 0xdd2], BL,0x1401a6d89: JZ 0x1401a6d9b,0x1401a6d8b: CMP byte ptr [RDI + 0xdd3], BL,0x1401a6d91: JZ 0x1401a6d9b,0x1401a6d93: CMP byte ptr [RDI + 0xdd4], BL,0x1401a6d99: JZ 0x1401a6d9f,0x1401a6d9b: XOR BL, BL,0x1401a6d9d: JMP 0x1401a6da1,0x1401a6d9f: MOV BL, 0x1,0x1401a6da1: CMP byte ptr [RDI + 0x1630], 0x0,0x1401a6da8: JZ 0x1401a6dbe,0x1401a6daa: LEA RCX, [RDI + 0x1608],0x1401a6db1: CALL 0x1401cd1b0,0x1401a6db6: TEST AL, AL,0x1401a6db8: JZ 0x1401a6dbe,0x1401a6dba: MOV CL, 0x1,0x1401a6dbc: JMP 0x1401a6dc0,0x1401a6dbe: XOR CL, CL,0x1401a6dc0: OR SIL, byte ptr [RSP + 0x50],0x1401a6dc5: OR SIL, byte ptr [RDI + 0x1f59],0x1401a6dcc: JNZ 0x1401a6e1e,0x1401a6dce: MOVZX EAX, BL,0x1401a6dd1: OR RAX, R13,0x1401a6dd4: JNZ 0x1401a6e1e,0x1401a6dd6: OR R15, R12,0x1401a6dd9: JNZ 0x1401a6e1e,0x1401a6ddb: MOVZX EAX, CL,0x1401a6dde: OR RBP, RAX,0x1401a6de1: JNZ 0x1401a6e1e,0x1401a6de3: MOV RCX, qword ptr [RDI + 0x230],0x1401a6dea: MOV EDX, 0xe,0x1401a6def: CALL qword ptr [0x14037af78],0x1401a6df5: MOV R14, qword ptr [RSP + 0x28],0x1401a6dfa: MOV RBP, qword ptr [RSP + 0x60],0x1401a6dff: MOV RSI, qword ptr [RSP + 0x68],0x1401a6e04: MOV R12, qword ptr [RSP + 0x38],0x1401a6e09: MOV R13, qword ptr [RSP + 0x30],0x1401a6e0e: MOV RBX, qword ptr [RSP + 0x58],0x1401a6e13: MOV R15, qword ptr [RSP + 0x20],0x1401a6e18: ADD RSP, 0x40,0x1401a6e1c: POP RDI,0x1401a6e1d: RET,0x1401a6e1e: MOV RCX, qword ptr [RDI + 0x230],0x1401a6e25: XOR R9D, R9D,0x1401a6e28: MOV EDX, 0xe,0x1401a6e2d: MOV R8D, 0xfa,0x1401a6e33: CALL qword ptr [0x14037afa8],0x1401a6e39: JMP 0x1401a6df5,0x1401a6e3b: MOV dword ptr [RDI + 0xe64], 0x7ffffffe,0x1401a6e45: MOV ECX, 0x6,0x1401a6e4a: CALL 0x140325560,0x1401a6e50: MOV ECX, 0x5,0x1401a6e55: CALL 0x140325560

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1400d3970 | FUN_1400d3970 | [object Object] | [object Object] |
| 0x1400d5830 | FUN_1400d5830 | [object Object] | [object Object] |
| 0x1400d5ad0 | FUN_1400d5ad0 | [object Object] | [object Object] |
| 0x14010b950 | FUN_14010b950 | [object Object] | [object Object] |
| 0x140129550 | FUN_140129550 | [object Object] | [object Object] |
| 0x14012af30 | FUN_14012af30 | [object Object] | [object Object] |
| 0x14012bdf0 | FUN_14012bdf0 | [object Object] | [object Object] |
| 0x1401a0590 | FUN_1401a0590 | [object Object] | [object Object] |
| 0x1401a4670 | FUN_1401a4670 | [object Object] | [object Object] |
| 0x1401a5ae0 | FUN_1401a5ae0 | [object Object] | [object Object] |
| 0x1401a5fd0 | FUN_1401a5fd0 | [object Object] | [object Object] |
| 0x1401c1bb0 | FUN_1401c1bb0 | [object Object] | [object Object] |
| 0x1401c2a70 | FUN_1401c2a70 | [object Object] | [object Object] |
| 0x1401c7370 | FUN_1401c7370 | [object Object] | [object Object] |
| 0x1401c8640 | FUN_1401c8640 | [object Object] | [object Object] |
| 0x1401e51d0 | FUN_1401e51d0 | [object Object] | [object Object] |
| 0x14036daf0 | FUN_14036daf0 | [object Object] | [object Object] |

## raw_result.value.callees

| address        | name                  | classification  | body            |
|----------------|-----------------------|-----------------|-----------------|
| EXTERNAL:0x18e | USER32.DLL::KillTimer | [object Object] | [object Object] |
| EXTERNAL:0x194 | USER32.DLL::SetTimer  | [object Object] | [object Object] |
| 0x1401cd1b0    | FUN_1401cd1b0         | [object Object] | [object Object] |
| 0x140325560    | FUN_140325560         | [object Object] | [object Object] |
| 0x1403265a0    | FUN_1403265a0         | [object Object] | [object Object] |
| 0x1403266c0    | FUN_1403266c0         | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1400d4920    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1400d58ea    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1400d5b35    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14010b9ae    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14010ba05    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14012989a    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14012b4ef    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14012be6e    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a06ad    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a4793    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a5c3b    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a608d    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c1c0b    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c2b04    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c7495    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c866a    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e58be    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14036db16    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14049f874    | 0x1401a6c50    |                  | [object Object]  | [object Object] |
| 0x14049f878    | 0x1401a6c6e    |                  | [object Object]  | [object Object] |
| 0x14049f884    | 0x1401a6c50    |                  | [object Object]  | [object Object] |
| 0x14049f888    | 0x1401a6c6e    |                  | [object Object]  | [object Object] |
| 0x14049f8b0    | 0x1401a6c50    |                  | [object Object]  | [object Object] |
| 0x14049f8b4    | 0x1401a6c6e    |                  | [object Object]  | [object Object] |
| 0x1404dda04    | 0x1401a6c50    |                  | [object Object]  | [object Object] |
| 0x1404dda10    | 0x1401a6c6e    |                  | [object Object]  | [object Object] |
| 0x1404dda1c    | 0x1401a6e18    |                  | [object Object]  | [object Object] |
| 0x1404dda28    | 0x1401a6e1e    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401a6c61    | 0x1401a6e18              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6c6e    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401a6c73    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1401a6c78    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401a6c7d    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401a6c82    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401a6c87    | 0x1401a6ca0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6c90    | 0x1401a6ca0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6c99    | 0x1401a6ca0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6c9e    | 0x1401a6ca3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6caa    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401a6caf    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401a6cc7    | 0x1403265a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6cce    | 0x1401a6e50              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6cde    | 0x1401a6cef              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6cea    | 0x1401a6e45              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6cfd    | 0x1403266c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d09    | 0x1403265a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d10    | 0x1401a6e50              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d20    | 0x1401a6d31              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d2c    | 0x1401a6e45              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d3f    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401a6d43    | 0x1403266c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d4f    | 0x1403265a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d56    | 0x1401a6e50              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d66    | 0x1401a6e3b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d7a    | 0x1403266c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d81    | 0x1401a6d9f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d89    | 0x1401a6d9b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d91    | 0x1401a6d9b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d99    | 0x1401a6d9f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d9d    | 0x1401a6da1              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6da8    | 0x1401a6dbe              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6db1    | 0x1401cd1b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6db8    | 0x1401a6dbe              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6dbc    | 0x1401a6dc0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6dc0    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401a6dcc    | 0x1401a6e1e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6dd4    | 0x1401a6e1e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6dd9    | 0x1401a6e1e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6de1    | 0x1401a6e1e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6def    | EXTERNAL:0x18e           | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6def    | 0x14037af78              | [object Object]  |                  | [object Object] |
| 0x1401a6df5    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401a6dfa    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401a6dff    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401a6e04    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1401a6e09    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401a6e0e    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401a6e13    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401a6e33    | EXTERNAL:0x194           | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6e33    | 0x14037afa8              | [object Object]  |                  | [object Object] |
| 0x1401a6e39    | 0x1401a6df5              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6e4a    | 0x140325560              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6e55    | 0x140325560              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address        | value                   | source_address |
|----------------|-------------------------|----------------|
| 0x1401a6ca0    | LAB_1401a6ca0           | 0x1401a6c87    |
| 0x1401a6ca0    | LAB_1401a6ca0           | 0x1401a6c90    |
| 0x1401a6ca0    | LAB_1401a6ca0           | 0x1401a6c99    |
| 0x1401a6ca3    | LAB_1401a6ca3           | 0x1401a6c9e    |
| 0x1401a6cef    | LAB_1401a6cef           | 0x1401a6cde    |
| 0x1401a6d31    | LAB_1401a6d31           | 0x1401a6d20    |
| 0x1401a6d9b    | LAB_1401a6d9b           | 0x1401a6d89    |
| 0x1401a6d9b    | LAB_1401a6d9b           | 0x1401a6d91    |
| 0x1401a6d9f    | LAB_1401a6d9f           | 0x1401a6d81    |
| 0x1401a6d9f    | LAB_1401a6d9f           | 0x1401a6d99    |
| 0x1401a6da1    | LAB_1401a6da1           | 0x1401a6d9d    |
| 0x1401a6dbe    | LAB_1401a6dbe           | 0x1401a6da8    |
| 0x1401a6dbe    | LAB_1401a6dbe           | 0x1401a6db8    |
| 0x1401a6dc0    | LAB_1401a6dc0           | 0x1401a6dbc    |
| 0x1401a6df5    | LAB_1401a6df5           | 0x1401a6e39    |
| 0x1401a6e18    | LAB_1401a6e18           | 0x1401a6c61    |
| 0x1401a6e1e    | LAB_1401a6e1e           | 0x1401a6dcc    |
| 0x1401a6e1e    | LAB_1401a6e1e           | 0x1401a6dd4    |
| 0x1401a6e1e    | LAB_1401a6e1e           | 0x1401a6dd9    |
| 0x1401a6e1e    | LAB_1401a6e1e           | 0x1401a6de1    |
| 0x1401a6e3b    | LAB_1401a6e3b           | 0x1401a6d66    |
| 0x1401a6e45    | LAB_1401a6e45           | 0x1401a6cea    |
| 0x1401a6e45    | LAB_1401a6e45           | 0x1401a6d2c    |
| 0x1401a6e50    | LAB_1401a6e50           | 0x1401a6cce    |
| 0x1401a6e50    | LAB_1401a6e50           | 0x1401a6d10    |
| 0x1401a6e50    | LAB_1401a6e50           | 0x1401a6d56    |
| 0x1401cd1b0    | FUN_1401cd1b0           | 0x1401a6db1    |
| 0x140325560    | FUN_140325560           | 0x1401a6e4a    |
| 0x140325560    | FUN_140325560           | 0x1401a6e55    |
| 0x1403265a0    | FUN_1403265a0           | 0x1401a6cc7    |
| 0x1403265a0    | FUN_1403265a0           | 0x1401a6d09    |
| 0x1403265a0    | FUN_1403265a0           | 0x1401a6d4f    |
| 0x1403266c0    | FUN_1403266c0           | 0x1401a6cfd    |
| 0x1403266c0    | FUN_1403266c0           | 0x1401a6d43    |
| 0x1403266c0    | FUN_1403266c0           | 0x1401a6d7a    |
| 0x14037af78    | PTR_KillTimer_14037af78 | 0x1401a6def    |
| 0x14037afa8    | PTR_SetTimer_14037afa8  | 0x1401a6e33    |
| EXTERNAL:0x18e | USER32.DLL::KillTimer   | 0x1401a6def    |
| EXTERNAL:0x194 | USER32.DLL::SetTimer    | 0x1401a6e33    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401a6c50 | 0x1401a6c67 | 0x1401a6c67,0x1401a6e18 |
| 0x1401a6c67 | 0x1401a6c6e | 0x1401a6c6e             |
| 0x1401a6c6e | 0x1401a6c89 | 0x1401a6c89,0x1401a6ca0 |
| 0x1401a6c89 | 0x1401a6c92 | 0x1401a6c92,0x1401a6ca0 |
| 0x1401a6c92 | 0x1401a6c9b | 0x1401a6c9b,0x1401a6ca0 |
| 0x1401a6c9b | 0x1401a6ca0 | 0x1401a6ca3             |
| 0x1401a6ca0 | 0x1401a6ca3 | 0x1401a6ca3             |
| 0x1401a6ca3 | 0x1401a6cd4 | 0x1401a6cd4,0x1401a6e50 |
| 0x1401a6cd4 | 0x1401a6ce0 | 0x1401a6ce0,0x1401a6cef |
| 0x1401a6ce0 | 0x1401a6cef | 0x1401a6e45             |
| 0x1401a6cef | 0x1401a6d16 | 0x1401a6d16,0x1401a6e50 |
| 0x1401a6d16 | 0x1401a6d22 | 0x1401a6d22,0x1401a6d31 |
| 0x1401a6d22 | 0x1401a6d31 | 0x1401a6e45             |
| 0x1401a6d31 | 0x1401a6d5c | 0x1401a6d5c,0x1401a6e50 |
| 0x1401a6d5c | 0x1401a6d6c | 0x1401a6d6c,0x1401a6e3b |
| 0x1401a6d6c | 0x1401a6d83 | 0x1401a6d83,0x1401a6d9f |
| 0x1401a6d83 | 0x1401a6d8b | 0x1401a6d8b,0x1401a6d9b |
| 0x1401a6d8b | 0x1401a6d93 | 0x1401a6d93,0x1401a6d9b |
| 0x1401a6d93 | 0x1401a6d9b | 0x1401a6d9b,0x1401a6d9f |
| 0x1401a6d9b | 0x1401a6d9f | 0x1401a6da1             |
| 0x1401a6d9f | 0x1401a6da1 | 0x1401a6da1             |
| 0x1401a6da1 | 0x1401a6daa | 0x1401a6daa,0x1401a6dbe |
| 0x1401a6daa | 0x1401a6dba | 0x1401a6dba,0x1401a6dbe |
| 0x1401a6dba | 0x1401a6dbe | 0x1401a6dc0             |
| 0x1401a6dbe | 0x1401a6dc0 | 0x1401a6dc0             |
| 0x1401a6dc0 | 0x1401a6dce | 0x1401a6dce,0x1401a6e1e |
| 0x1401a6dce | 0x1401a6dd6 | 0x1401a6dd6,0x1401a6e1e |
| 0x1401a6dd6 | 0x1401a6ddb | 0x1401a6ddb,0x1401a6e1e |
| 0x1401a6ddb | 0x1401a6de3 | 0x1401a6de3,0x1401a6e1e |
| 0x1401a6de3 | 0x1401a6df5 | 0x1401a6df5             |
| 0x1401a6df5 | 0x1401a6e18 | 0x1401a6e18             |
| 0x1401a6e18 | 0x1401a6e1e |                         |
| 0x1401a6e1e | 0x1401a6e3b | 0x1401a6df5             |
| 0x1401a6e3b | 0x1401a6e45 | 0x1401a6e45             |
| 0x1401a6e45 | 0x1401a6e4f |                         |
| 0x1401a6e50 | 0x1401a6e5a |                         |

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
| 0x1401a6c56#12   | 0x1401a6c56 | 12       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c56#13   | 0x1401a6c56 | 13       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c56#19   | 0x1401a6c56 | 19       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c56#1277 | 0x1401a6c56 | 1277     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6c61#25   | 0x1401a6c61 | 25       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6c67#26   | 0x1401a6c67 | 26       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c67#27   | 0x1401a6c67 | 27       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c67#33   | 0x1401a6c67 | 33       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c67#1278 | 0x1401a6c67 | 1278     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6c87#53   | 0x1401a6c87 | 53       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6c89#54   | 0x1401a6c89 | 54       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c89#55   | 0x1401a6c89 | 55       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c89#61   | 0x1401a6c89 | 61       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c89#1279 | 0x1401a6c89 | 1279     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6c90#66   | 0x1401a6c90 | 66       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6c92#67   | 0x1401a6c92 | 67       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c92#68   | 0x1401a6c92 | 68       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c92#74   | 0x1401a6c92 | 74       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c92#1280 | 0x1401a6c92 | 1280     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6c99#80   | 0x1401a6c99 | 80       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6c9b#1251 | 0x1401a6c9b | 1251     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6c9e#82   | 0x1401a6c9e | 82       | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6ca0#1250 | 0x1401a6ca0 | 1250     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6ca3#83   | 0x1401a6ca3 | 83       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6ca3#84   | 0x1401a6ca3 | 84       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6ca3#1249 | 0x1401a6ca3 | 1249     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6ca3#1281 | 0x1401a6ca3 | 1281     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cb4#92   | 0x1401a6cb4 | 92       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cb4#93   | 0x1401a6cb4 | 93       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cb4#1282 | 0x1401a6cb4 | 1282     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cbb#95   | 0x1401a6cbb | 95       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cbb#96   | 0x1401a6cbb | 96       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cbb#1283 | 0x1401a6cbb | 1283     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cc0#101  | 0x1401a6cc0 | 101      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cc7#110  | 0x1401a6cc7 | 110      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6ccc#115  | 0x1401a6ccc | 115      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cce#121  | 0x1401a6cce | 121      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6cd4#122  | 0x1401a6cd4 | 122      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cd4#123  | 0x1401a6cd4 | 123      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cd4#129  | 0x1401a6cd4 | 129      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cd4#1284 | 0x1401a6cd4 | 1284     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cde#135  | 0x1401a6cde | 135      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6ce0#136  | 0x1401a6ce0 | 136      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6ce0#138  | 0x1401a6ce0 | 138      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401a6ce0#1285 | 0x1401a6ce0 | 1285     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cea#139  | 0x1401a6cea | 139      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6cef#146  | 0x1401a6cef | 146      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cef#147  | 0x1401a6cef | 147      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cef#1286 | 0x1401a6cef | 1286     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cf6#149  | 0x1401a6cf6 | 149      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cfd#153  | 0x1401a6cfd | 153      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d02#154  | 0x1401a6d02 | 154      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d09#158  | 0x1401a6d09 | 158      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d0e#163  | 0x1401a6d0e | 163      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d10#169  | 0x1401a6d10 | 169      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d16#170  | 0x1401a6d16 | 170      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d16#171  | 0x1401a6d16 | 171      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d16#177  | 0x1401a6d16 | 177      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d16#1287 | 0x1401a6d16 | 1287     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d20#183  | 0x1401a6d20 | 183      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d22#184  | 0x1401a6d22 | 184      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d22#186  | 0x1401a6d22 | 186      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401a6d22#1288 | 0x1401a6d22 | 1288     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d2c#187  | 0x1401a6d2c | 187      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6d31#188  | 0x1401a6d31 | 188      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d31#189  | 0x1401a6d31 | 189      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d31#1289 | 0x1401a6d31 | 1289     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d38#192  | 0x1401a6d38 | 192      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d43#199  | 0x1401a6d43 | 199      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d48#200  | 0x1401a6d48 | 200      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d4f#204  | 0x1401a6d4f | 204      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d54#209  | 0x1401a6d54 | 209      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d56#215  | 0x1401a6d56 | 215      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d5c#216  | 0x1401a6d5c | 216      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d5c#217  | 0x1401a6d5c | 217      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d5c#223  | 0x1401a6d5c | 223      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d5c#1290 | 0x1401a6d5c | 1290     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d66#228  | 0x1401a6d66 | 228      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d6c#229  | 0x1401a6d6c | 229      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d6c#230  | 0x1401a6d6c | 230      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d6c#1291 | 0x1401a6d6c | 1291     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d7a#237  | 0x1401a6d7a | 237      | CALL         | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6d7f#242  | 0x1401a6d7f | 242      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d81#248  | 0x1401a6d81 | 248      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d83#249  | 0x1401a6d83 | 249      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d83#250  | 0x1401a6d83 | 250      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d83#256  | 0x1401a6d83 | 256      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d83#1292 | 0x1401a6d83 | 1292     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d89#261  | 0x1401a6d89 | 261      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d8b#262  | 0x1401a6d8b | 262      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d8b#263  | 0x1401a6d8b | 263      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d8b#269  | 0x1401a6d8b | 269      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d8b#1293 | 0x1401a6d8b | 1293     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d91#274  | 0x1401a6d91 | 274      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d93#275  | 0x1401a6d93 | 275      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d93#276  | 0x1401a6d93 | 276      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d93#282  | 0x1401a6d93 | 282      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d93#1294 | 0x1401a6d93 | 1294     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d99#287  | 0x1401a6d99 | 287      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d9b#1254 | 0x1401a6d9b | 1254     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d9d#297  | 0x1401a6d9d | 297      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6d9f#1253 | 0x1401a6d9f | 1253     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6da1#298  | 0x1401a6da1 | 298      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6da1#299  | 0x1401a6da1 | 299      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6da1#305  | 0x1401a6da1 | 305      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6da1#1252 | 0x1401a6da1 | 1252     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6da1#1295 | 0x1401a6da1 | 1295     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6da8#310  | 0x1401a6da8 | 310      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6db1#315  | 0x1401a6db1 | 315      | CALL         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6db6#320  | 0x1401a6db6 | 320      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6db8#325  | 0x1401a6db8 | 325      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6dba#1257 | 0x1401a6dba | 1257     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6dbc#327  | 0x1401a6dbc | 327      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6dbe#1256 | 0x1401a6dbe | 1256     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6dc0#1255 | 0x1401a6dc0 | 1255     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dc5#339  | 0x1401a6dc5 | 339      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dc5#342  | 0x1401a6dc5 | 342      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dc5#1071 | 0x1401a6dc5 | 1071     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dc5#1073 | 0x1401a6dc5 | 1073     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dc5#1296 | 0x1401a6dc5 | 1296     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6dcc#351  | 0x1401a6dcc | 351      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6dcc#1263 | 0x1401a6dcc | 1263     | BOOL_AND     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dcc#1264 | 0x1401a6dcc | 1264     | BOOL_AND     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dcc#1266 | 0x1401a6dcc | 1266     | BOOL_NEGATE  | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6dd1#1051 | 0x1401a6dd1 | 1051     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dd4#364  | 0x1401a6dd4 | 364      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6dd4#1268 | 0x1401a6dd4 | 1268     | BOOL_AND     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dd4#1269 | 0x1401a6dd4 | 1269     | BOOL_NEGATE  | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6dd6#1054 | 0x1401a6dd6 | 1054     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dd6#1055 | 0x1401a6dd6 | 1055     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dd9#375  | 0x1401a6dd9 | 375      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6dd9#1271 | 0x1401a6dd9 | 1271     | BOOL_AND     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dde#1058 | 0x1401a6dde | 1058     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6de1#388  | 0x1401a6de1 | 388      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6de1#1274 | 0x1401a6de1 | 1274     | BOOL_AND     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6de1#1276 | 0x1401a6de1 | 1276     | BOOL_NEGATE  | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6de3#389  | 0x1401a6de3 | 389      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6de3#390  | 0x1401a6de3 | 390      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6de3#1298 | 0x1401a6de3 | 1298     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6def#396  | 0x1401a6def | 396      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401a6e1d#433  | 0x1401a6e1d | 433      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6e1d#1260 | 0x1401a6e1d | 1260     | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6e1d#1261 | 0x1401a6e1d | 1261     | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6e1e#434  | 0x1401a6e1e | 434      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6e1e#435  | 0x1401a6e1e | 435      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6e1e#1297 | 0x1401a6e1e | 1297     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6e33#452  | 0x1401a6e33 | 452      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401a6e3b#464  | 0x1401a6e3b | 464      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6e3b#466  | 0x1401a6e3b | 466      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401a6e3b#1299 | 0x1401a6e3b | 1299     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6e4a#143  | 0x1401a6e4a | 143      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6e4a#145  | 0x1401a6e4a | 145      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6e55#470  | 0x1401a6e55 | 470      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6e55#472  | 0x1401a6e55 | 472      | RETURN       | true    | member           | [object Object]                                                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401a6c56#1277 | 0x1401a6c56#13   | 1           |
| 0x1401a6c56#13   | 0x1401a6c56#19   | 0           |
| 0x1401a6c56#12   | 0x1401a6c56#1277 | 0           |
| 0x1401a6c56#19   | 0x1401a6c61#25   | 1           |
| 0x1401a6c67#1278 | 0x1401a6c67#27   | 1           |
| 0x1401a6c67#27   | 0x1401a6c67#33   | 0           |
| 0x1401a6c67#26   | 0x1401a6c67#1278 | 0           |
| 0x1401a6c67#33   | 0x1401a6c87#53   | 1           |
| 0x1401a6c89#1279 | 0x1401a6c89#55   | 1           |
| 0x1401a6c89#55   | 0x1401a6c89#61   | 0           |
| 0x1401a6c89#54   | 0x1401a6c89#1279 | 0           |
| 0x1401a6c89#61   | 0x1401a6c90#66   | 1           |
| 0x1401a6c92#1280 | 0x1401a6c92#68   | 1           |
| 0x1401a6c92#68   | 0x1401a6c92#74   | 0           |
| 0x1401a6c92#67   | 0x1401a6c92#1280 | 0           |
| 0x1401a6c92#74   | 0x1401a6c99#80   | 1           |
| 0x1401a6ca3#1281 | 0x1401a6ca3#84   | 1           |
| 0x1401a6c9b#1251 | 0x1401a6ca3#1249 | 0           |
| 0x1401a6ca0#1250 | 0x1401a6ca3#1249 | 1           |
| 0x1401a6ca3#83   | 0x1401a6ca3#1281 | 0           |
| 0x1401a6cb4#1282 | 0x1401a6cb4#93   | 1           |
| 0x1401a6cb4#92   | 0x1401a6cb4#1282 | 0           |
| 0x1401a6cbb#1283 | 0x1401a6cbb#96   | 1           |
| 0x1401a6cbb#95   | 0x1401a6cbb#1283 | 0           |
| 0x1401a6cc0#101  | 0x1401a6cc7#110  | 1           |
| 0x1401a6cc7#110  | 0x1401a6ccc#115  | 0           |
| 0x1401a6ccc#115  | 0x1401a6cce#121  | 1           |
| 0x1401a6cd4#1284 | 0x1401a6cd4#123  | 1           |
| 0x1401a6cd4#123  | 0x1401a6cd4#129  | 0           |
| 0x1401a6cd4#122  | 0x1401a6cd4#1284 | 0           |
| 0x1401a6cd4#129  | 0x1401a6cde#135  | 1           |
| 0x1401a6ce0#1285 | 0x1401a6ce0#138  | 1           |
| 0x1401a6ce0#136  | 0x1401a6ce0#1285 | 0           |
| 0x1401a6cef#1286 | 0x1401a6cef#147  | 1           |
| 0x1401a6cef#146  | 0x1401a6cef#1286 | 0           |
| 0x1401a6cf6#149  | 0x1401a6cfd#153  | 1           |
| 0x1401a6d02#154  | 0x1401a6d09#158  | 1           |
| 0x1401a6d09#158  | 0x1401a6d0e#163  | 0           |
| 0x1401a6d0e#163  | 0x1401a6d10#169  | 1           |
| 0x1401a6d16#1287 | 0x1401a6d16#171  | 1           |
| 0x1401a6d16#171  | 0x1401a6d16#177  | 0           |
| 0x1401a6d16#170  | 0x1401a6d16#1287 | 0           |
| 0x1401a6d16#177  | 0x1401a6d20#183  | 1           |
| 0x1401a6d22#1288 | 0x1401a6d22#186  | 1           |
| 0x1401a6d22#184  | 0x1401a6d22#1288 | 0           |
| 0x1401a6d31#1289 | 0x1401a6d31#189  | 1           |
| 0x1401a6d31#188  | 0x1401a6d31#1289 | 0           |
| 0x1401a6d38#192  | 0x1401a6d43#199  | 1           |
| 0x1401a6d48#200  | 0x1401a6d4f#204  | 1           |
| 0x1401a6d4f#204  | 0x1401a6d54#209  | 0           |
| 0x1401a6d54#209  | 0x1401a6d56#215  | 1           |
| 0x1401a6d5c#1290 | 0x1401a6d5c#217  | 1           |
| 0x1401a6d5c#217  | 0x1401a6d5c#223  | 0           |
| 0x1401a6d5c#216  | 0x1401a6d5c#1290 | 0           |
| 0x1401a6d5c#223  | 0x1401a6d66#228  | 1           |
| 0x1401a6d6c#1291 | 0x1401a6d6c#230  | 1           |
| 0x1401a6d6c#229  | 0x1401a6d6c#1291 | 0           |
| 0x1401a6d6c#230  | 0x1401a6d7f#242  | 0           |
| 0x1401a6d7f#242  | 0x1401a6d81#248  | 1           |
| 0x1401a6d83#1292 | 0x1401a6d83#250  | 1           |
| 0x1401a6d83#250  | 0x1401a6d83#256  | 0           |
| 0x1401a6d83#249  | 0x1401a6d83#1292 | 0           |
| 0x1401a6d83#256  | 0x1401a6d89#261  | 1           |
| 0x1401a6d8b#1293 | 0x1401a6d8b#263  | 1           |
| 0x1401a6d8b#263  | 0x1401a6d8b#269  | 0           |
| 0x1401a6d8b#262  | 0x1401a6d8b#1293 | 0           |
| 0x1401a6d8b#269  | 0x1401a6d91#274  | 1           |
| 0x1401a6d93#1294 | 0x1401a6d93#276  | 1           |
| 0x1401a6d93#276  | 0x1401a6d93#282  | 0           |
| 0x1401a6d93#275  | 0x1401a6d93#1294 | 0           |
| 0x1401a6d93#282  | 0x1401a6d99#287  | 1           |
| 0x1401a6da1#1295 | 0x1401a6da1#299  | 1           |
| 0x1401a6da1#299  | 0x1401a6da1#305  | 0           |
| 0x1401a6d9b#1254 | 0x1401a6da1#1252 | 0           |
| 0x1401a6d9f#1253 | 0x1401a6da1#1252 | 1           |
| 0x1401a6da1#298  | 0x1401a6da1#1295 | 0           |
| 0x1401a6da1#305  | 0x1401a6da8#310  | 1           |
| 0x1401a6db1#315  | 0x1401a6db6#320  | 0           |
| 0x1401a6db6#320  | 0x1401a6db8#325  | 1           |
| 0x1401a6dba#1257 | 0x1401a6dc0#1255 | 0           |
| 0x1401a6dbe#1256 | 0x1401a6dc0#1255 | 1           |
| 0x1401a6dc5#1296 | 0x1401a6dc5#342  | 1           |
| 0x1401a6dc5#342  | 0x1401a6dc5#1071 | 0           |
| 0x1401a6d31#189  | 0x1401a6dc5#1073 | 0           |
| 0x1401a6dc5#339  | 0x1401a6dc5#1296 | 0           |
| 0x1401a6dcc#1263 | 0x1401a6dcc#351  | 1           |
| 0x1401a6dcc#1264 | 0x1401a6dcc#1263 | 0           |
| 0x1401a6dc5#1071 | 0x1401a6dcc#1263 | 1           |
| 0x1401a6dcc#1266 | 0x1401a6dcc#1264 | 0           |
| 0x1401a6dc5#1073 | 0x1401a6dcc#1264 | 1           |
| 0x1401a6ca3#1249 | 0x1401a6dcc#1266 | 0           |
| 0x1401a6ca3#84   | 0x1401a6dd1#1051 | 0           |
| 0x1401a6dd4#1268 | 0x1401a6dd4#364  | 1           |
| 0x1401a6dd4#1269 | 0x1401a6dd4#1268 | 0           |
| 0x1401a6dd1#1051 | 0x1401a6dd4#1268 | 1           |
| 0x1401a6da1#1252 | 0x1401a6dd4#1269 | 0           |
| 0x1401a6cb4#93   | 0x1401a6dd6#1054 | 0           |
| 0x1401a6cbb#96   | 0x1401a6dd6#1055 | 0           |
| 0x1401a6dd9#1271 | 0x1401a6dd9#375  | 1           |
| 0x1401a6dd6#1054 | 0x1401a6dd9#1271 | 0           |
| 0x1401a6dd6#1055 | 0x1401a6dd9#1271 | 1           |
| 0x1401a6cef#147  | 0x1401a6dde#1058 | 0           |
| 0x1401a6de1#1274 | 0x1401a6de1#388  | 1           |
| 0x1401a6dde#1058 | 0x1401a6de1#1274 | 0           |
| 0x1401a6de1#1276 | 0x1401a6de1#1274 | 1           |
| 0x1401a6dc0#1255 | 0x1401a6de1#1276 | 0           |
| 0x1401a6de3#1298 | 0x1401a6de3#390  | 1           |
| 0x1401a6de3#389  | 0x1401a6de3#1298 | 0           |
| 0x1401a6de3#390  | 0x1401a6def#396  | 1           |
| 0x1401a6e1e#1297 | 0x1401a6e1e#435  | 1           |
| 0x1401a6e1e#434  | 0x1401a6e1e#1297 | 0           |
| 0x1401a6e1e#435  | 0x1401a6e33#452  | 1           |
| 0x1401a6e3b#1299 | 0x1401a6e3b#466  | 1           |
| 0x1401a6e3b#464  | 0x1401a6e3b#1299 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401a6c56#12  | 0           |
| 0       | 0x1401a6c67#26  | 0           |
| 0       | 0x1401a6c89#54  | 0           |
| 0       | 0x1401a6c92#67  | 0           |
| 0       | 0x1401a6ca3#83  | 0           |
| 0       | 0x1401a6cb4#92  | 0           |
| 0       | 0x1401a6cbb#95  | 0           |
| 0       | 0x1401a6cc0#101 | 0           |
| 0       | 0x1401a6cd4#122 | 0           |
| 0       | 0x1401a6ce0#136 | 0           |
| 0       | 0x1401a6cef#146 | 0           |
| 0       | 0x1401a6cf6#149 | 0           |
| 0       | 0x1401a6d02#154 | 0           |
| 0       | 0x1401a6d16#170 | 0           |
| 0       | 0x1401a6d22#184 | 0           |
| 0       | 0x1401a6d31#188 | 0           |
| 0       | 0x1401a6d38#192 | 0           |
| 0       | 0x1401a6d48#200 | 0           |
| 0       | 0x1401a6d5c#216 | 0           |
| 0       | 0x1401a6d6c#229 | 0           |
| 0       | 0x1401a6d83#249 | 0           |
| 0       | 0x1401a6d8b#262 | 0           |
| 0       | 0x1401a6d93#275 | 0           |
| 0       | 0x1401a6da1#298 | 0           |
| 0       | 0x1401a6dc5#339 | 0           |
| 0       | 0x1401a6de3#389 | 0           |
| 0       | 0x1401a6e1e#434 | 0           |
| 0       | 0x1401a6e3b#464 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401a6c56#13  | memory_read        | 1             |             |
| 0x1401a6c61#25  | conditional_branch |               | 1           |
| 0x1401a6c67#27  | memory_read        | 1             |             |
| 0x1401a6c87#53  | conditional_branch |               | 1           |
| 0x1401a6c89#55  | memory_read        | 1             |             |
| 0x1401a6c90#66  | conditional_branch |               | 1           |
| 0x1401a6c92#68  | memory_read        | 1             |             |
| 0x1401a6c99#80  | conditional_branch |               | 1           |
| 0x1401a6ca3#84  | memory_read        | 1             |             |
| 0x1401a6cb4#93  | memory_read        | 1             |             |
| 0x1401a6cbb#96  | memory_read        | 1             |             |
| 0x1401a6cc7#110 | direct_call        | 0             |             |
| 0x1401a6cce#121 | conditional_branch |               | 1           |
| 0x1401a6cd4#123 | memory_read        | 1             |             |
| 0x1401a6cde#135 | conditional_branch |               | 1           |
| 0x1401a6ce0#138 | memory_write       | 1             | 2           |
| 0x1401a6cef#147 | memory_read        | 1             |             |
| 0x1401a6cfd#153 | direct_call        | 0             |             |
| 0x1401a6d09#158 | direct_call        | 0             |             |
| 0x1401a6d10#169 | conditional_branch |               | 1           |
| 0x1401a6d16#171 | memory_read        | 1             |             |
| 0x1401a6d20#183 | conditional_branch |               | 1           |
| 0x1401a6d22#186 | memory_write       | 1             | 2           |
| 0x1401a6d31#189 | memory_read        | 1             |             |
| 0x1401a6d43#199 | direct_call        | 0             |             |
| 0x1401a6d4f#204 | direct_call        | 0             |             |
| 0x1401a6d56#215 | conditional_branch |               | 1           |
| 0x1401a6d5c#217 | memory_read        | 1             |             |
| 0x1401a6d66#228 | conditional_branch |               | 1           |
| 0x1401a6d6c#230 | memory_read        | 1             |             |
| 0x1401a6d7a#237 | direct_call        | 0             |             |
| 0x1401a6d81#248 | conditional_branch |               | 1           |
| 0x1401a6d83#250 | memory_read        | 1             |             |
| 0x1401a6d89#261 | conditional_branch |               | 1           |
| 0x1401a6d8b#263 | memory_read        | 1             |             |
| 0x1401a6d91#274 | conditional_branch |               | 1           |
| 0x1401a6d93#276 | memory_read        | 1             |             |
| 0x1401a6d99#287 | conditional_branch |               | 1           |
| 0x1401a6da1#299 | memory_read        | 1             |             |
| 0x1401a6da8#310 | conditional_branch |               | 1           |
| 0x1401a6db1#315 | direct_call        | 0             |             |
| 0x1401a6db8#325 | conditional_branch |               | 1           |
| 0x1401a6dc5#342 | memory_read        | 1             |             |
| 0x1401a6dcc#351 | conditional_branch |               | 1           |
| 0x1401a6dd4#364 | conditional_branch |               | 1           |
| 0x1401a6dd9#375 | conditional_branch |               | 1           |
| 0x1401a6de1#388 | conditional_branch |               | 1           |
| 0x1401a6de3#390 | memory_read        | 1             |             |
| 0x1401a6def#396 | direct_call        | 0             |             |
| 0x1401a6e1e#435 | memory_read        | 1             |             |
| 0x1401a6e33#452 | direct_call        | 0             |             |
| 0x1401a6e3b#466 | memory_write       | 1             | 2           |
| 0x1401a6e4a#143 | direct_call        | 0             |             |
| 0x1401a6e55#470 | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401a6e4a to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401a6e55 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401a6e4a to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401a6e55 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x1401a6c50

## normalized_result.procedure.name

FUN_1401a6c50

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
| 0x1401a6c50 | 0x1401a6e4e |
| 0x1401a6e50 | 0x1401a6e59 |

## normalized_result.procedure.body.total_bytes

521

## normalized_result.procedure.body.span_bytes

522

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401a6c50()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_10 @ Stack[-0x10]:8   | ghidra-function-database |
| undefined8 local_18 @ Stack[-0x18]:8   | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8   | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |
| undefined1 local_res8 @ Stack[0x8]:1   | ghidra-function-database |

## normalized_result.pseudocode


void FUN_1401a6c50(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  
  if (*(longlong *)(param_1 + 0x230) == 0) {
    return;
  }
  if (((*(char *)(param_1 + 0xd60) == '\0') || (*(char *)(param_1 + 0xd61) == '\0')) ||
     (*(char *)(param_1 + 0xd62) != '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  lVar3 = *(longlong *)(param_1 + 0x5e0);
  lVar4 = *(longlong *)(param_1 + 0xe8);
  cVar1 = *(char *)(param_1 + 4);
  iVar10 = FUN_1403265a0(param_1 + 0x17c0);
  if (iVar10 != 0) {
LAB_1401a6e50:
                    /* WARNING: Subroutine does not return */
    FUN_140325560(5);
  }
  if (*(int *)(param_1 + 0x180c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x180c) = 0x7ffffffe;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x1810);
    FUN_1403266c0(param_1 + 0x17c0);
    iVar10 = FUN_1403265a0(param_1 + 0xb98);
    if (iVar10 != 0) goto LAB_1401a6e50;
    if (*(int *)(param_1 + 0xbe4) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0xbe4) = 0x7ffffffe;
    }
    else {
      cVar2 = *(char *)(param_1 + 0xcd8);
      FUN_1403266c0(param_1 + 0xb98);
      iVar10 = FUN_1403265a0(param_1 + 0xe18);
      if (iVar10 != 0) goto LAB_1401a6e50;
      if (*(int *)(param_1 + 0xe64) != 0x7fffffff) {
        cVar9 = *(char *)(param_1 + 0xf08);
        FUN_1403266c0();
        if ((cVar9 == '\0') &&
           (((*(char *)(param_1 + 0xdd2) == '\0' || (*(char *)(param_1 + 0xdd3) == '\0')) ||
            (*(char *)(param_1 + 0xdd4) != '\0')))) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((*(char *)(param_1 + 0x1630) == '\0') || (cVar9 = FUN_1401cd1b0(), cVar9 == '\0')) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (((((!bVar6 && cVar2 == '\0') && *(char *)(param_1 + 0x1f59) == '\0') &&
             (!bVar7 && lVar3 == 0)) && (lVar4 == 0 && cVar1 == '\0')) && (lVar5 == 0 && !bVar8)) {
          KillTimer(*(HWND *)(param_1 + 0x230),0xe);
          return;
        }
        SetTimer(*(HWND *)(param_1 + 0x230),0xe,0xfa,(TIMERPROC)0x0);
        return;
      }
      *(undefined4 *)(param_1 + 0xe64) = 0x7ffffffe;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140325560(6);
}



## normalized_result.assembly

0x1401a6c50: PUSH RDI,0x1401a6c52: SUB RSP, 0x40,0x1401a6c56: CMP qword ptr [RCX + 0x230], 0x0,0x1401a6c5e: MOV RDI, RCX,0x1401a6c61: JZ 0x1401a6e18,0x1401a6c67: CMP byte ptr [RCX + 0xd60], 0x0,0x1401a6c6e: MOV qword ptr [RSP + 0x58], RBX,0x1401a6c73: MOV qword ptr [RSP + 0x38], R12,0x1401a6c78: MOV qword ptr [RSP + 0x30], R13,0x1401a6c7d: MOV qword ptr [RSP + 0x20], R15,0x1401a6c82: MOV qword ptr [RSP + 0x68], RSI,0x1401a6c87: JZ 0x1401a6ca0,0x1401a6c89: CMP byte ptr [RCX + 0xd61], 0x0,0x1401a6c90: JZ 0x1401a6ca0,0x1401a6c92: CMP byte ptr [RCX + 0xd62], 0x0,0x1401a6c99: JNZ 0x1401a6ca0,0x1401a6c9b: MOV SIL, 0x1,0x1401a6c9e: JMP 0x1401a6ca3,0x1401a6ca0: XOR SIL, SIL,0x1401a6ca3: MOV R13, qword ptr [RCX + 0x5e0],0x1401a6caa: MOV qword ptr [RSP + 0x60], RBP,0x1401a6caf: MOV qword ptr [RSP + 0x28], R14,0x1401a6cb4: MOV R15, qword ptr [RCX + 0xe8],0x1401a6cbb: MOVZX R12D, byte ptr [RCX + 0x4],0x1401a6cc0: ADD RCX, 0x17c0,0x1401a6cc7: CALL 0x1403265a0,0x1401a6ccc: TEST EAX, EAX,0x1401a6cce: JNZ 0x1401a6e50,0x1401a6cd4: CMP dword ptr [RDI + 0x180c], 0x7fffffff,0x1401a6cde: JNZ 0x1401a6cef,0x1401a6ce0: MOV dword ptr [RDI + 0x180c], 0x7ffffffe,0x1401a6cea: JMP 0x1401a6e45,0x1401a6cef: MOV RBP, qword ptr [RDI + 0x1810],0x1401a6cf6: LEA RCX, [RDI + 0x17c0],0x1401a6cfd: CALL 0x1403266c0,0x1401a6d02: LEA RCX, [RDI + 0xb98],0x1401a6d09: CALL 0x1403265a0,0x1401a6d0e: TEST EAX, EAX,0x1401a6d10: JNZ 0x1401a6e50,0x1401a6d16: CMP dword ptr [RDI + 0xbe4], 0x7fffffff,0x1401a6d20: JNZ 0x1401a6d31,0x1401a6d22: MOV dword ptr [RDI + 0xbe4], 0x7ffffffe,0x1401a6d2c: JMP 0x1401a6e45,0x1401a6d31: MOVZX EAX, byte ptr [RDI + 0xcd8],0x1401a6d38: LEA RCX, [RDI + 0xb98],0x1401a6d3f: MOV byte ptr [RSP + 0x50], AL,0x1401a6d43: CALL 0x1403266c0,0x1401a6d48: LEA RCX, [RDI + 0xe18],0x1401a6d4f: CALL 0x1403265a0,0x1401a6d54: TEST EAX, EAX,0x1401a6d56: JNZ 0x1401a6e50,0x1401a6d5c: CMP dword ptr [RDI + 0xe64], 0x7fffffff,0x1401a6d66: JZ 0x1401a6e3b,0x1401a6d6c: MOVZX EBX, byte ptr [RDI + 0xf08],0x1401a6d73: LEA RCX, [RDI + 0xe18],0x1401a6d7a: CALL 0x1403266c0,0x1401a6d7f: TEST BL, BL,0x1401a6d81: JNZ 0x1401a6d9f,0x1401a6d83: CMP byte ptr [RDI + 0xdd2], BL,0x1401a6d89: JZ 0x1401a6d9b,0x1401a6d8b: CMP byte ptr [RDI + 0xdd3], BL,0x1401a6d91: JZ 0x1401a6d9b,0x1401a6d93: CMP byte ptr [RDI + 0xdd4], BL,0x1401a6d99: JZ 0x1401a6d9f,0x1401a6d9b: XOR BL, BL,0x1401a6d9d: JMP 0x1401a6da1,0x1401a6d9f: MOV BL, 0x1,0x1401a6da1: CMP byte ptr [RDI + 0x1630], 0x0,0x1401a6da8: JZ 0x1401a6dbe,0x1401a6daa: LEA RCX, [RDI + 0x1608],0x1401a6db1: CALL 0x1401cd1b0,0x1401a6db6: TEST AL, AL,0x1401a6db8: JZ 0x1401a6dbe,0x1401a6dba: MOV CL, 0x1,0x1401a6dbc: JMP 0x1401a6dc0,0x1401a6dbe: XOR CL, CL,0x1401a6dc0: OR SIL, byte ptr [RSP + 0x50],0x1401a6dc5: OR SIL, byte ptr [RDI + 0x1f59],0x1401a6dcc: JNZ 0x1401a6e1e,0x1401a6dce: MOVZX EAX, BL,0x1401a6dd1: OR RAX, R13,0x1401a6dd4: JNZ 0x1401a6e1e,0x1401a6dd6: OR R15, R12,0x1401a6dd9: JNZ 0x1401a6e1e,0x1401a6ddb: MOVZX EAX, CL,0x1401a6dde: OR RBP, RAX,0x1401a6de1: JNZ 0x1401a6e1e,0x1401a6de3: MOV RCX, qword ptr [RDI + 0x230],0x1401a6dea: MOV EDX, 0xe,0x1401a6def: CALL qword ptr [0x14037af78],0x1401a6df5: MOV R14, qword ptr [RSP + 0x28],0x1401a6dfa: MOV RBP, qword ptr [RSP + 0x60],0x1401a6dff: MOV RSI, qword ptr [RSP + 0x68],0x1401a6e04: MOV R12, qword ptr [RSP + 0x38],0x1401a6e09: MOV R13, qword ptr [RSP + 0x30],0x1401a6e0e: MOV RBX, qword ptr [RSP + 0x58],0x1401a6e13: MOV R15, qword ptr [RSP + 0x20],0x1401a6e18: ADD RSP, 0x40,0x1401a6e1c: POP RDI,0x1401a6e1d: RET,0x1401a6e1e: MOV RCX, qword ptr [RDI + 0x230],0x1401a6e25: XOR R9D, R9D,0x1401a6e28: MOV EDX, 0xe,0x1401a6e2d: MOV R8D, 0xfa,0x1401a6e33: CALL qword ptr [0x14037afa8],0x1401a6e39: JMP 0x1401a6df5,0x1401a6e3b: MOV dword ptr [RDI + 0xe64], 0x7ffffffe,0x1401a6e45: MOV ECX, 0x6,0x1401a6e4a: CALL 0x140325560,0x1401a6e50: MOV ECX, 0x5,0x1401a6e55: CALL 0x140325560

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1400d3970 | FUN_1400d3970 | [object Object] | [object Object] |
| 0x1400d5830 | FUN_1400d5830 | [object Object] | [object Object] |
| 0x1400d5ad0 | FUN_1400d5ad0 | [object Object] | [object Object] |
| 0x14010b950 | FUN_14010b950 | [object Object] | [object Object] |
| 0x140129550 | FUN_140129550 | [object Object] | [object Object] |
| 0x14012af30 | FUN_14012af30 | [object Object] | [object Object] |
| 0x14012bdf0 | FUN_14012bdf0 | [object Object] | [object Object] |
| 0x1401a0590 | FUN_1401a0590 | [object Object] | [object Object] |
| 0x1401a4670 | FUN_1401a4670 | [object Object] | [object Object] |
| 0x1401a5ae0 | FUN_1401a5ae0 | [object Object] | [object Object] |
| 0x1401a5fd0 | FUN_1401a5fd0 | [object Object] | [object Object] |
| 0x1401c1bb0 | FUN_1401c1bb0 | [object Object] | [object Object] |
| 0x1401c2a70 | FUN_1401c2a70 | [object Object] | [object Object] |
| 0x1401c7370 | FUN_1401c7370 | [object Object] | [object Object] |
| 0x1401c8640 | FUN_1401c8640 | [object Object] | [object Object] |
| 0x1401e51d0 | FUN_1401e51d0 | [object Object] | [object Object] |
| 0x14036daf0 | FUN_14036daf0 | [object Object] | [object Object] |

## normalized_result.callees

| address        | name                  | classification  | body            |
|----------------|-----------------------|-----------------|-----------------|
| EXTERNAL:0x18e | USER32.DLL::KillTimer | [object Object] | [object Object] |
| EXTERNAL:0x194 | USER32.DLL::SetTimer  | [object Object] | [object Object] |
| 0x1401cd1b0    | FUN_1401cd1b0         | [object Object] | [object Object] |
| 0x140325560    | FUN_140325560         | [object Object] | [object Object] |
| 0x1403265a0    | FUN_1403265a0         | [object Object] | [object Object] |
| 0x1403266c0    | FUN_1403266c0         | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1400d4920    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1400d58ea    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1400d5b35    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14010b9ae    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14010ba05    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14012989a    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14012b4ef    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14012be6e    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a06ad    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a4793    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a5c3b    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a608d    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c1c0b    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c2b04    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c7495    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c866a    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e58be    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14036db16    | 0x1401a6c50    | [object Object]  | [object Object]  | [object Object] |
| 0x14049f874    | 0x1401a6c50    |                  | [object Object]  | [object Object] |
| 0x14049f878    | 0x1401a6c6e    |                  | [object Object]  | [object Object] |
| 0x14049f884    | 0x1401a6c50    |                  | [object Object]  | [object Object] |
| 0x14049f888    | 0x1401a6c6e    |                  | [object Object]  | [object Object] |
| 0x14049f8b0    | 0x1401a6c50    |                  | [object Object]  | [object Object] |
| 0x14049f8b4    | 0x1401a6c6e    |                  | [object Object]  | [object Object] |
| 0x1404dda04    | 0x1401a6c50    |                  | [object Object]  | [object Object] |
| 0x1404dda10    | 0x1401a6c6e    |                  | [object Object]  | [object Object] |
| 0x1404dda1c    | 0x1401a6e18    |                  | [object Object]  | [object Object] |
| 0x1404dda28    | 0x1401a6e1e    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401a6c61    | 0x1401a6e18              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6c6e    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401a6c73    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1401a6c78    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401a6c7d    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401a6c82    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401a6c87    | 0x1401a6ca0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6c90    | 0x1401a6ca0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6c99    | 0x1401a6ca0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6c9e    | 0x1401a6ca3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6caa    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401a6caf    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401a6cc7    | 0x1403265a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6cce    | 0x1401a6e50              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6cde    | 0x1401a6cef              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6cea    | 0x1401a6e45              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6cfd    | 0x1403266c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d09    | 0x1403265a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d10    | 0x1401a6e50              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d20    | 0x1401a6d31              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d2c    | 0x1401a6e45              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d3f    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401a6d43    | 0x1403266c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d4f    | 0x1403265a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d56    | 0x1401a6e50              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d66    | 0x1401a6e3b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d7a    | 0x1403266c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d81    | 0x1401a6d9f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d89    | 0x1401a6d9b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d91    | 0x1401a6d9b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d99    | 0x1401a6d9f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6d9d    | 0x1401a6da1              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6da8    | 0x1401a6dbe              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6db1    | 0x1401cd1b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6db8    | 0x1401a6dbe              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6dbc    | 0x1401a6dc0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6dc0    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401a6dcc    | 0x1401a6e1e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6dd4    | 0x1401a6e1e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6dd9    | 0x1401a6e1e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6de1    | 0x1401a6e1e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6def    | EXTERNAL:0x18e           | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6def    | 0x14037af78              | [object Object]  |                  | [object Object] |
| 0x1401a6df5    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401a6dfa    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401a6dff    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401a6e04    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1401a6e09    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401a6e0e    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401a6e13    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401a6e33    | EXTERNAL:0x194           | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6e33    | 0x14037afa8              | [object Object]  |                  | [object Object] |
| 0x1401a6e39    | 0x1401a6df5              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6e4a    | 0x140325560              | [object Object]  | [object Object]  | [object Object] |
| 0x1401a6e55    | 0x140325560              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address        | value                   | source_address |
|----------------|-------------------------|----------------|
| 0x1401a6ca0    | LAB_1401a6ca0           | 0x1401a6c87    |
| 0x1401a6ca0    | LAB_1401a6ca0           | 0x1401a6c90    |
| 0x1401a6ca0    | LAB_1401a6ca0           | 0x1401a6c99    |
| 0x1401a6ca3    | LAB_1401a6ca3           | 0x1401a6c9e    |
| 0x1401a6cef    | LAB_1401a6cef           | 0x1401a6cde    |
| 0x1401a6d31    | LAB_1401a6d31           | 0x1401a6d20    |
| 0x1401a6d9b    | LAB_1401a6d9b           | 0x1401a6d89    |
| 0x1401a6d9b    | LAB_1401a6d9b           | 0x1401a6d91    |
| 0x1401a6d9f    | LAB_1401a6d9f           | 0x1401a6d81    |
| 0x1401a6d9f    | LAB_1401a6d9f           | 0x1401a6d99    |
| 0x1401a6da1    | LAB_1401a6da1           | 0x1401a6d9d    |
| 0x1401a6dbe    | LAB_1401a6dbe           | 0x1401a6da8    |
| 0x1401a6dbe    | LAB_1401a6dbe           | 0x1401a6db8    |
| 0x1401a6dc0    | LAB_1401a6dc0           | 0x1401a6dbc    |
| 0x1401a6df5    | LAB_1401a6df5           | 0x1401a6e39    |
| 0x1401a6e18    | LAB_1401a6e18           | 0x1401a6c61    |
| 0x1401a6e1e    | LAB_1401a6e1e           | 0x1401a6dcc    |
| 0x1401a6e1e    | LAB_1401a6e1e           | 0x1401a6dd4    |
| 0x1401a6e1e    | LAB_1401a6e1e           | 0x1401a6dd9    |
| 0x1401a6e1e    | LAB_1401a6e1e           | 0x1401a6de1    |
| 0x1401a6e3b    | LAB_1401a6e3b           | 0x1401a6d66    |
| 0x1401a6e45    | LAB_1401a6e45           | 0x1401a6cea    |
| 0x1401a6e45    | LAB_1401a6e45           | 0x1401a6d2c    |
| 0x1401a6e50    | LAB_1401a6e50           | 0x1401a6cce    |
| 0x1401a6e50    | LAB_1401a6e50           | 0x1401a6d10    |
| 0x1401a6e50    | LAB_1401a6e50           | 0x1401a6d56    |
| 0x1401cd1b0    | FUN_1401cd1b0           | 0x1401a6db1    |
| 0x140325560    | FUN_140325560           | 0x1401a6e4a    |
| 0x140325560    | FUN_140325560           | 0x1401a6e55    |
| 0x1403265a0    | FUN_1403265a0           | 0x1401a6cc7    |
| 0x1403265a0    | FUN_1403265a0           | 0x1401a6d09    |
| 0x1403265a0    | FUN_1403265a0           | 0x1401a6d4f    |
| 0x1403266c0    | FUN_1403266c0           | 0x1401a6cfd    |
| 0x1403266c0    | FUN_1403266c0           | 0x1401a6d43    |
| 0x1403266c0    | FUN_1403266c0           | 0x1401a6d7a    |
| 0x14037af78    | PTR_KillTimer_14037af78 | 0x1401a6def    |
| 0x14037afa8    | PTR_SetTimer_14037afa8  | 0x1401a6e33    |
| EXTERNAL:0x18e | USER32.DLL::KillTimer   | 0x1401a6def    |
| EXTERNAL:0x194 | USER32.DLL::SetTimer    | 0x1401a6e33    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401a6c50 | 0x1401a6c67 | 0x1401a6c67,0x1401a6e18 |
| 0x1401a6c67 | 0x1401a6c6e | 0x1401a6c6e             |
| 0x1401a6c6e | 0x1401a6c89 | 0x1401a6c89,0x1401a6ca0 |
| 0x1401a6c89 | 0x1401a6c92 | 0x1401a6c92,0x1401a6ca0 |
| 0x1401a6c92 | 0x1401a6c9b | 0x1401a6c9b,0x1401a6ca0 |
| 0x1401a6c9b | 0x1401a6ca0 | 0x1401a6ca3             |
| 0x1401a6ca0 | 0x1401a6ca3 | 0x1401a6ca3             |
| 0x1401a6ca3 | 0x1401a6cd4 | 0x1401a6cd4,0x1401a6e50 |
| 0x1401a6cd4 | 0x1401a6ce0 | 0x1401a6ce0,0x1401a6cef |
| 0x1401a6ce0 | 0x1401a6cef | 0x1401a6e45             |
| 0x1401a6cef | 0x1401a6d16 | 0x1401a6d16,0x1401a6e50 |
| 0x1401a6d16 | 0x1401a6d22 | 0x1401a6d22,0x1401a6d31 |
| 0x1401a6d22 | 0x1401a6d31 | 0x1401a6e45             |
| 0x1401a6d31 | 0x1401a6d5c | 0x1401a6d5c,0x1401a6e50 |
| 0x1401a6d5c | 0x1401a6d6c | 0x1401a6d6c,0x1401a6e3b |
| 0x1401a6d6c | 0x1401a6d83 | 0x1401a6d83,0x1401a6d9f |
| 0x1401a6d83 | 0x1401a6d8b | 0x1401a6d8b,0x1401a6d9b |
| 0x1401a6d8b | 0x1401a6d93 | 0x1401a6d93,0x1401a6d9b |
| 0x1401a6d93 | 0x1401a6d9b | 0x1401a6d9b,0x1401a6d9f |
| 0x1401a6d9b | 0x1401a6d9f | 0x1401a6da1             |
| 0x1401a6d9f | 0x1401a6da1 | 0x1401a6da1             |
| 0x1401a6da1 | 0x1401a6daa | 0x1401a6daa,0x1401a6dbe |
| 0x1401a6daa | 0x1401a6dba | 0x1401a6dba,0x1401a6dbe |
| 0x1401a6dba | 0x1401a6dbe | 0x1401a6dc0             |
| 0x1401a6dbe | 0x1401a6dc0 | 0x1401a6dc0             |
| 0x1401a6dc0 | 0x1401a6dce | 0x1401a6dce,0x1401a6e1e |
| 0x1401a6dce | 0x1401a6dd6 | 0x1401a6dd6,0x1401a6e1e |
| 0x1401a6dd6 | 0x1401a6ddb | 0x1401a6ddb,0x1401a6e1e |
| 0x1401a6ddb | 0x1401a6de3 | 0x1401a6de3,0x1401a6e1e |
| 0x1401a6de3 | 0x1401a6df5 | 0x1401a6df5             |
| 0x1401a6df5 | 0x1401a6e18 | 0x1401a6e18             |
| 0x1401a6e18 | 0x1401a6e1e |                         |
| 0x1401a6e1e | 0x1401a6e3b | 0x1401a6df5             |
| 0x1401a6e3b | 0x1401a6e45 | 0x1401a6e45             |
| 0x1401a6e45 | 0x1401a6e4f |                         |
| 0x1401a6e50 | 0x1401a6e5a |                         |

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
| 0x1401a6c56#12   | 0x1401a6c56 | 12       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c56#13   | 0x1401a6c56 | 13       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c56#19   | 0x1401a6c56 | 19       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c56#1277 | 0x1401a6c56 | 1277     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6c61#25   | 0x1401a6c61 | 25       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6c67#26   | 0x1401a6c67 | 26       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c67#27   | 0x1401a6c67 | 27       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c67#33   | 0x1401a6c67 | 33       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c67#1278 | 0x1401a6c67 | 1278     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6c87#53   | 0x1401a6c87 | 53       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6c89#54   | 0x1401a6c89 | 54       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c89#55   | 0x1401a6c89 | 55       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c89#61   | 0x1401a6c89 | 61       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c89#1279 | 0x1401a6c89 | 1279     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6c90#66   | 0x1401a6c90 | 66       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6c92#67   | 0x1401a6c92 | 67       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c92#68   | 0x1401a6c92 | 68       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c92#74   | 0x1401a6c92 | 74       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6c92#1280 | 0x1401a6c92 | 1280     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6c99#80   | 0x1401a6c99 | 80       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6c9b#1251 | 0x1401a6c9b | 1251     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6c9e#82   | 0x1401a6c9e | 82       | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6ca0#1250 | 0x1401a6ca0 | 1250     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6ca3#83   | 0x1401a6ca3 | 83       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6ca3#84   | 0x1401a6ca3 | 84       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6ca3#1249 | 0x1401a6ca3 | 1249     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6ca3#1281 | 0x1401a6ca3 | 1281     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cb4#92   | 0x1401a6cb4 | 92       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cb4#93   | 0x1401a6cb4 | 93       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cb4#1282 | 0x1401a6cb4 | 1282     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cbb#95   | 0x1401a6cbb | 95       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cbb#96   | 0x1401a6cbb | 96       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cbb#1283 | 0x1401a6cbb | 1283     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cc0#101  | 0x1401a6cc0 | 101      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cc7#110  | 0x1401a6cc7 | 110      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6ccc#115  | 0x1401a6ccc | 115      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cce#121  | 0x1401a6cce | 121      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6cd4#122  | 0x1401a6cd4 | 122      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cd4#123  | 0x1401a6cd4 | 123      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cd4#129  | 0x1401a6cd4 | 129      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cd4#1284 | 0x1401a6cd4 | 1284     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cde#135  | 0x1401a6cde | 135      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6ce0#136  | 0x1401a6ce0 | 136      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6ce0#138  | 0x1401a6ce0 | 138      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401a6ce0#1285 | 0x1401a6ce0 | 1285     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cea#139  | 0x1401a6cea | 139      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6cef#146  | 0x1401a6cef | 146      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cef#147  | 0x1401a6cef | 147      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cef#1286 | 0x1401a6cef | 1286     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6cf6#149  | 0x1401a6cf6 | 149      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6cfd#153  | 0x1401a6cfd | 153      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d02#154  | 0x1401a6d02 | 154      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d09#158  | 0x1401a6d09 | 158      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d0e#163  | 0x1401a6d0e | 163      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d10#169  | 0x1401a6d10 | 169      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d16#170  | 0x1401a6d16 | 170      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d16#171  | 0x1401a6d16 | 171      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d16#177  | 0x1401a6d16 | 177      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d16#1287 | 0x1401a6d16 | 1287     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d20#183  | 0x1401a6d20 | 183      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d22#184  | 0x1401a6d22 | 184      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d22#186  | 0x1401a6d22 | 186      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401a6d22#1288 | 0x1401a6d22 | 1288     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d2c#187  | 0x1401a6d2c | 187      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6d31#188  | 0x1401a6d31 | 188      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d31#189  | 0x1401a6d31 | 189      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d31#1289 | 0x1401a6d31 | 1289     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d38#192  | 0x1401a6d38 | 192      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d43#199  | 0x1401a6d43 | 199      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d48#200  | 0x1401a6d48 | 200      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d4f#204  | 0x1401a6d4f | 204      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d54#209  | 0x1401a6d54 | 209      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d56#215  | 0x1401a6d56 | 215      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d5c#216  | 0x1401a6d5c | 216      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d5c#217  | 0x1401a6d5c | 217      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d5c#223  | 0x1401a6d5c | 223      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d5c#1290 | 0x1401a6d5c | 1290     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d66#228  | 0x1401a6d66 | 228      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d6c#229  | 0x1401a6d6c | 229      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d6c#230  | 0x1401a6d6c | 230      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d6c#1291 | 0x1401a6d6c | 1291     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d7a#237  | 0x1401a6d7a | 237      | CALL         | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6d7f#242  | 0x1401a6d7f | 242      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d81#248  | 0x1401a6d81 | 248      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d83#249  | 0x1401a6d83 | 249      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d83#250  | 0x1401a6d83 | 250      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d83#256  | 0x1401a6d83 | 256      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d83#1292 | 0x1401a6d83 | 1292     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d89#261  | 0x1401a6d89 | 261      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d8b#262  | 0x1401a6d8b | 262      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d8b#263  | 0x1401a6d8b | 263      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d8b#269  | 0x1401a6d8b | 269      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d8b#1293 | 0x1401a6d8b | 1293     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d91#274  | 0x1401a6d91 | 274      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d93#275  | 0x1401a6d93 | 275      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d93#276  | 0x1401a6d93 | 276      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d93#282  | 0x1401a6d93 | 282      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6d93#1294 | 0x1401a6d93 | 1294     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d99#287  | 0x1401a6d99 | 287      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6d9b#1254 | 0x1401a6d9b | 1254     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6d9d#297  | 0x1401a6d9d | 297      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6d9f#1253 | 0x1401a6d9f | 1253     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6da1#298  | 0x1401a6da1 | 298      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6da1#299  | 0x1401a6da1 | 299      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6da1#305  | 0x1401a6da1 | 305      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6da1#1252 | 0x1401a6da1 | 1252     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6da1#1295 | 0x1401a6da1 | 1295     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6da8#310  | 0x1401a6da8 | 310      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6db1#315  | 0x1401a6db1 | 315      | CALL         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6db6#320  | 0x1401a6db6 | 320      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6db8#325  | 0x1401a6db8 | 325      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6dba#1257 | 0x1401a6dba | 1257     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6dbc#327  | 0x1401a6dbc | 327      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6dbe#1256 | 0x1401a6dbe | 1256     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6dc0#1255 | 0x1401a6dc0 | 1255     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dc5#339  | 0x1401a6dc5 | 339      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dc5#342  | 0x1401a6dc5 | 342      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dc5#1071 | 0x1401a6dc5 | 1071     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dc5#1073 | 0x1401a6dc5 | 1073     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dc5#1296 | 0x1401a6dc5 | 1296     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6dcc#351  | 0x1401a6dcc | 351      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6dcc#1263 | 0x1401a6dcc | 1263     | BOOL_AND     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dcc#1264 | 0x1401a6dcc | 1264     | BOOL_AND     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dcc#1266 | 0x1401a6dcc | 1266     | BOOL_NEGATE  | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6dd1#1051 | 0x1401a6dd1 | 1051     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dd4#364  | 0x1401a6dd4 | 364      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6dd4#1268 | 0x1401a6dd4 | 1268     | BOOL_AND     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dd4#1269 | 0x1401a6dd4 | 1269     | BOOL_NEGATE  | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6dd6#1054 | 0x1401a6dd6 | 1054     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dd6#1055 | 0x1401a6dd6 | 1055     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dd9#375  | 0x1401a6dd9 | 375      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6dd9#1271 | 0x1401a6dd9 | 1271     | BOOL_AND     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6dde#1058 | 0x1401a6dde | 1058     | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6de1#388  | 0x1401a6de1 | 388      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6de1#1274 | 0x1401a6de1 | 1274     | BOOL_AND     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6de1#1276 | 0x1401a6de1 | 1276     | BOOL_NEGATE  | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6de3#389  | 0x1401a6de3 | 389      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6de3#390  | 0x1401a6de3 | 390      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6de3#1298 | 0x1401a6de3 | 1298     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6def#396  | 0x1401a6def | 396      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401a6e1d#433  | 0x1401a6e1d | 433      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6e1d#1260 | 0x1401a6e1d | 1260     | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6e1d#1261 | 0x1401a6e1d | 1261     | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6e1e#434  | 0x1401a6e1e | 434      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6e1e#435  | 0x1401a6e1e | 435      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6e1e#1297 | 0x1401a6e1e | 1297     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6e33#452  | 0x1401a6e33 | 452      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401a6e3b#464  | 0x1401a6e3b | 464      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401a6e3b#466  | 0x1401a6e3b | 466      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401a6e3b#1299 | 0x1401a6e3b | 1299     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401a6e4a#143  | 0x1401a6e4a | 143      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6e4a#145  | 0x1401a6e4a | 145      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401a6e55#470  | 0x1401a6e55 | 470      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401a6e55#472  | 0x1401a6e55 | 472      | RETURN       | true    | member           | [object Object]                                                                 |                 |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401a6c56#1277 | 0x1401a6c56#13   | 1           |
| 0x1401a6c56#13   | 0x1401a6c56#19   | 0           |
| 0x1401a6c56#12   | 0x1401a6c56#1277 | 0           |
| 0x1401a6c56#19   | 0x1401a6c61#25   | 1           |
| 0x1401a6c67#1278 | 0x1401a6c67#27   | 1           |
| 0x1401a6c67#27   | 0x1401a6c67#33   | 0           |
| 0x1401a6c67#26   | 0x1401a6c67#1278 | 0           |
| 0x1401a6c67#33   | 0x1401a6c87#53   | 1           |
| 0x1401a6c89#1279 | 0x1401a6c89#55   | 1           |
| 0x1401a6c89#55   | 0x1401a6c89#61   | 0           |
| 0x1401a6c89#54   | 0x1401a6c89#1279 | 0           |
| 0x1401a6c89#61   | 0x1401a6c90#66   | 1           |
| 0x1401a6c92#1280 | 0x1401a6c92#68   | 1           |
| 0x1401a6c92#68   | 0x1401a6c92#74   | 0           |
| 0x1401a6c92#67   | 0x1401a6c92#1280 | 0           |
| 0x1401a6c92#74   | 0x1401a6c99#80   | 1           |
| 0x1401a6ca3#1281 | 0x1401a6ca3#84   | 1           |
| 0x1401a6c9b#1251 | 0x1401a6ca3#1249 | 0           |
| 0x1401a6ca0#1250 | 0x1401a6ca3#1249 | 1           |
| 0x1401a6ca3#83   | 0x1401a6ca3#1281 | 0           |
| 0x1401a6cb4#1282 | 0x1401a6cb4#93   | 1           |
| 0x1401a6cb4#92   | 0x1401a6cb4#1282 | 0           |
| 0x1401a6cbb#1283 | 0x1401a6cbb#96   | 1           |
| 0x1401a6cbb#95   | 0x1401a6cbb#1283 | 0           |
| 0x1401a6cc0#101  | 0x1401a6cc7#110  | 1           |
| 0x1401a6cc7#110  | 0x1401a6ccc#115  | 0           |
| 0x1401a6ccc#115  | 0x1401a6cce#121  | 1           |
| 0x1401a6cd4#1284 | 0x1401a6cd4#123  | 1           |
| 0x1401a6cd4#123  | 0x1401a6cd4#129  | 0           |
| 0x1401a6cd4#122  | 0x1401a6cd4#1284 | 0           |
| 0x1401a6cd4#129  | 0x1401a6cde#135  | 1           |
| 0x1401a6ce0#1285 | 0x1401a6ce0#138  | 1           |
| 0x1401a6ce0#136  | 0x1401a6ce0#1285 | 0           |
| 0x1401a6cef#1286 | 0x1401a6cef#147  | 1           |
| 0x1401a6cef#146  | 0x1401a6cef#1286 | 0           |
| 0x1401a6cf6#149  | 0x1401a6cfd#153  | 1           |
| 0x1401a6d02#154  | 0x1401a6d09#158  | 1           |
| 0x1401a6d09#158  | 0x1401a6d0e#163  | 0           |
| 0x1401a6d0e#163  | 0x1401a6d10#169  | 1           |
| 0x1401a6d16#1287 | 0x1401a6d16#171  | 1           |
| 0x1401a6d16#171  | 0x1401a6d16#177  | 0           |
| 0x1401a6d16#170  | 0x1401a6d16#1287 | 0           |
| 0x1401a6d16#177  | 0x1401a6d20#183  | 1           |
| 0x1401a6d22#1288 | 0x1401a6d22#186  | 1           |
| 0x1401a6d22#184  | 0x1401a6d22#1288 | 0           |
| 0x1401a6d31#1289 | 0x1401a6d31#189  | 1           |
| 0x1401a6d31#188  | 0x1401a6d31#1289 | 0           |
| 0x1401a6d38#192  | 0x1401a6d43#199  | 1           |
| 0x1401a6d48#200  | 0x1401a6d4f#204  | 1           |
| 0x1401a6d4f#204  | 0x1401a6d54#209  | 0           |
| 0x1401a6d54#209  | 0x1401a6d56#215  | 1           |
| 0x1401a6d5c#1290 | 0x1401a6d5c#217  | 1           |
| 0x1401a6d5c#217  | 0x1401a6d5c#223  | 0           |
| 0x1401a6d5c#216  | 0x1401a6d5c#1290 | 0           |
| 0x1401a6d5c#223  | 0x1401a6d66#228  | 1           |
| 0x1401a6d6c#1291 | 0x1401a6d6c#230  | 1           |
| 0x1401a6d6c#229  | 0x1401a6d6c#1291 | 0           |
| 0x1401a6d6c#230  | 0x1401a6d7f#242  | 0           |
| 0x1401a6d7f#242  | 0x1401a6d81#248  | 1           |
| 0x1401a6d83#1292 | 0x1401a6d83#250  | 1           |
| 0x1401a6d83#250  | 0x1401a6d83#256  | 0           |
| 0x1401a6d83#249  | 0x1401a6d83#1292 | 0           |
| 0x1401a6d83#256  | 0x1401a6d89#261  | 1           |
| 0x1401a6d8b#1293 | 0x1401a6d8b#263  | 1           |
| 0x1401a6d8b#263  | 0x1401a6d8b#269  | 0           |
| 0x1401a6d8b#262  | 0x1401a6d8b#1293 | 0           |
| 0x1401a6d8b#269  | 0x1401a6d91#274  | 1           |
| 0x1401a6d93#1294 | 0x1401a6d93#276  | 1           |
| 0x1401a6d93#276  | 0x1401a6d93#282  | 0           |
| 0x1401a6d93#275  | 0x1401a6d93#1294 | 0           |
| 0x1401a6d93#282  | 0x1401a6d99#287  | 1           |
| 0x1401a6da1#1295 | 0x1401a6da1#299  | 1           |
| 0x1401a6da1#299  | 0x1401a6da1#305  | 0           |
| 0x1401a6d9b#1254 | 0x1401a6da1#1252 | 0           |
| 0x1401a6d9f#1253 | 0x1401a6da1#1252 | 1           |
| 0x1401a6da1#298  | 0x1401a6da1#1295 | 0           |
| 0x1401a6da1#305  | 0x1401a6da8#310  | 1           |
| 0x1401a6db1#315  | 0x1401a6db6#320  | 0           |
| 0x1401a6db6#320  | 0x1401a6db8#325  | 1           |
| 0x1401a6dba#1257 | 0x1401a6dc0#1255 | 0           |
| 0x1401a6dbe#1256 | 0x1401a6dc0#1255 | 1           |
| 0x1401a6dc5#1296 | 0x1401a6dc5#342  | 1           |
| 0x1401a6dc5#342  | 0x1401a6dc5#1071 | 0           |
| 0x1401a6d31#189  | 0x1401a6dc5#1073 | 0           |
| 0x1401a6dc5#339  | 0x1401a6dc5#1296 | 0           |
| 0x1401a6dcc#1263 | 0x1401a6dcc#351  | 1           |
| 0x1401a6dcc#1264 | 0x1401a6dcc#1263 | 0           |
| 0x1401a6dc5#1071 | 0x1401a6dcc#1263 | 1           |
| 0x1401a6dcc#1266 | 0x1401a6dcc#1264 | 0           |
| 0x1401a6dc5#1073 | 0x1401a6dcc#1264 | 1           |
| 0x1401a6ca3#1249 | 0x1401a6dcc#1266 | 0           |
| 0x1401a6ca3#84   | 0x1401a6dd1#1051 | 0           |
| 0x1401a6dd4#1268 | 0x1401a6dd4#364  | 1           |
| 0x1401a6dd4#1269 | 0x1401a6dd4#1268 | 0           |
| 0x1401a6dd1#1051 | 0x1401a6dd4#1268 | 1           |
| 0x1401a6da1#1252 | 0x1401a6dd4#1269 | 0           |
| 0x1401a6cb4#93   | 0x1401a6dd6#1054 | 0           |
| 0x1401a6cbb#96   | 0x1401a6dd6#1055 | 0           |
| 0x1401a6dd9#1271 | 0x1401a6dd9#375  | 1           |
| 0x1401a6dd6#1054 | 0x1401a6dd9#1271 | 0           |
| 0x1401a6dd6#1055 | 0x1401a6dd9#1271 | 1           |
| 0x1401a6cef#147  | 0x1401a6dde#1058 | 0           |
| 0x1401a6de1#1274 | 0x1401a6de1#388  | 1           |
| 0x1401a6dde#1058 | 0x1401a6de1#1274 | 0           |
| 0x1401a6de1#1276 | 0x1401a6de1#1274 | 1           |
| 0x1401a6dc0#1255 | 0x1401a6de1#1276 | 0           |
| 0x1401a6de3#1298 | 0x1401a6de3#390  | 1           |
| 0x1401a6de3#389  | 0x1401a6de3#1298 | 0           |
| 0x1401a6de3#390  | 0x1401a6def#396  | 1           |
| 0x1401a6e1e#1297 | 0x1401a6e1e#435  | 1           |
| 0x1401a6e1e#434  | 0x1401a6e1e#1297 | 0           |
| 0x1401a6e1e#435  | 0x1401a6e33#452  | 1           |
| 0x1401a6e3b#1299 | 0x1401a6e3b#466  | 1           |
| 0x1401a6e3b#464  | 0x1401a6e3b#1299 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401a6c56#13  | memory_read        | 1             |             |
| 0x1401a6c61#25  | conditional_branch |               | 1           |
| 0x1401a6c67#27  | memory_read        | 1             |             |
| 0x1401a6c87#53  | conditional_branch |               | 1           |
| 0x1401a6c89#55  | memory_read        | 1             |             |
| 0x1401a6c90#66  | conditional_branch |               | 1           |
| 0x1401a6c92#68  | memory_read        | 1             |             |
| 0x1401a6c99#80  | conditional_branch |               | 1           |
| 0x1401a6ca3#84  | memory_read        | 1             |             |
| 0x1401a6cb4#93  | memory_read        | 1             |             |
| 0x1401a6cbb#96  | memory_read        | 1             |             |
| 0x1401a6cc7#110 | direct_call        | 0             |             |
| 0x1401a6cce#121 | conditional_branch |               | 1           |
| 0x1401a6cd4#123 | memory_read        | 1             |             |
| 0x1401a6cde#135 | conditional_branch |               | 1           |
| 0x1401a6ce0#138 | memory_write       | 1             | 2           |
| 0x1401a6cef#147 | memory_read        | 1             |             |
| 0x1401a6cfd#153 | direct_call        | 0             |             |
| 0x1401a6d09#158 | direct_call        | 0             |             |
| 0x1401a6d10#169 | conditional_branch |               | 1           |
| 0x1401a6d16#171 | memory_read        | 1             |             |
| 0x1401a6d20#183 | conditional_branch |               | 1           |
| 0x1401a6d22#186 | memory_write       | 1             | 2           |
| 0x1401a6d31#189 | memory_read        | 1             |             |
| 0x1401a6d43#199 | direct_call        | 0             |             |
| 0x1401a6d4f#204 | direct_call        | 0             |             |
| 0x1401a6d56#215 | conditional_branch |               | 1           |
| 0x1401a6d5c#217 | memory_read        | 1             |             |
| 0x1401a6d66#228 | conditional_branch |               | 1           |
| 0x1401a6d6c#230 | memory_read        | 1             |             |
| 0x1401a6d7a#237 | direct_call        | 0             |             |
| 0x1401a6d81#248 | conditional_branch |               | 1           |
| 0x1401a6d83#250 | memory_read        | 1             |             |
| 0x1401a6d89#261 | conditional_branch |               | 1           |
| 0x1401a6d8b#263 | memory_read        | 1             |             |
| 0x1401a6d91#274 | conditional_branch |               | 1           |
| 0x1401a6d93#276 | memory_read        | 1             |             |
| 0x1401a6d99#287 | conditional_branch |               | 1           |
| 0x1401a6da1#299 | memory_read        | 1             |             |
| 0x1401a6da8#310 | conditional_branch |               | 1           |
| 0x1401a6db1#315 | direct_call        | 0             |             |
| 0x1401a6db8#325 | conditional_branch |               | 1           |
| 0x1401a6dc5#342 | memory_read        | 1             |             |
| 0x1401a6dcc#351 | conditional_branch |               | 1           |
| 0x1401a6dd4#364 | conditional_branch |               | 1           |
| 0x1401a6dd9#375 | conditional_branch |               | 1           |
| 0x1401a6de1#388 | conditional_branch |               | 1           |
| 0x1401a6de3#390 | memory_read        | 1             |             |
| 0x1401a6def#396 | direct_call        | 0             |             |
| 0x1401a6e1e#435 | memory_read        | 1             |             |
| 0x1401a6e33#452 | direct_call        | 0             |             |
| 0x1401a6e3b#466 | memory_write       | 1             | 2           |
| 0x1401a6e4a#143 | direct_call        | 0             |             |
| 0x1401a6e55#470 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401a6c56#12  | 0           |
| 0       | 0x1401a6c67#26  | 0           |
| 0       | 0x1401a6c89#54  | 0           |
| 0       | 0x1401a6c92#67  | 0           |
| 0       | 0x1401a6ca3#83  | 0           |
| 0       | 0x1401a6cb4#92  | 0           |
| 0       | 0x1401a6cbb#95  | 0           |
| 0       | 0x1401a6cc0#101 | 0           |
| 0       | 0x1401a6cd4#122 | 0           |
| 0       | 0x1401a6ce0#136 | 0           |
| 0       | 0x1401a6cef#146 | 0           |
| 0       | 0x1401a6cf6#149 | 0           |
| 0       | 0x1401a6d02#154 | 0           |
| 0       | 0x1401a6d16#170 | 0           |
| 0       | 0x1401a6d22#184 | 0           |
| 0       | 0x1401a6d31#188 | 0           |
| 0       | 0x1401a6d38#192 | 0           |
| 0       | 0x1401a6d48#200 | 0           |
| 0       | 0x1401a6d5c#216 | 0           |
| 0       | 0x1401a6d6c#229 | 0           |
| 0       | 0x1401a6d83#249 | 0           |
| 0       | 0x1401a6d8b#262 | 0           |
| 0       | 0x1401a6d93#275 | 0           |
| 0       | 0x1401a6da1#298 | 0           |
| 0       | 0x1401a6dc5#339 | 0           |
| 0       | 0x1401a6de3#389 | 0           |
| 0       | 0x1401a6e1e#434 | 0           |
| 0       | 0x1401a6e3b#464 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401a6e4a to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401a6e55 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401a6e4a to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401a6e55 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

