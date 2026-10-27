## evidence_id

ev_34d3ba606e40067ea0e1353e37d3a0529ca5e4c240a3697c8b0ed37160628bcb

## subject.name

F:\Work\txtest\Task Manager TMOG\Task Manager v1.1.0 - 原始文件.exe

## subject.digest

| Key    | Value                                                            |
|--------|------------------------------------------------------------------|
| sha256 | fb57e1eb00cb259d4bd4cf6bd7289097be419f3ab171ee234f46c0ac1247d5a7 |

## subject.format

pe

## subject.architecture

x86_64

## subject.local_path

F:\Work\txtest\Task Manager TMOG\Task Manager v1.1.0 - 原始文件.exe

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
| procedure | 0x1402bccd0 |

## raw_result.value.procedure.address

0x1402bccd0

## raw_result.value.procedure.name

FUN_1402bccd0

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
| 0x1402bccd0 | 0x1402bce03 |
| 0x1402bce06 | 0x1402bce20 |

## raw_result.value.procedure.body.total_bytes

335

## raw_result.value.procedure.body.span_bytes

337

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1402bccd0()

## raw_result.value.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8 | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8 | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8 | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1402bccd0(void)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1406d1c00 ^ (ulonglong)auStack_58;
  FUN_1402bc6e0(local_38);
  if (local_28 == 0) {
    if (7 < local_20) {
      uVar5 = local_20 * 2 + 2;
      lVar4 = local_38[0];
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(local_38[0] + -8);
        if (0x1f < (local_38[0] - lVar4) - 8U) goto LAB_1402bce19;
        uVar5 = local_20 * 2 + 0x29;
      }
      thunk_FUN_140497c50(lVar4,uVar5);
    }
    uVar3 = 0;
  }
  else {
    cVar2 = FUN_1402bce50(local_38,0,0,0);
    if (cVar2 == '\0') {
      uVar3 = FUN_1402bce50(local_38,0,0,1);
      if (7 < local_20) {
        uVar5 = local_20 * 2 + 2;
        lVar4 = local_38[0];
        if (0xfff < uVar5) {
          lVar4 = *(longlong *)(local_38[0] + -8);
          if (0x1f < (local_38[0] - lVar4) - 8U) goto LAB_1402bce19;
          uVar5 = local_20 * 2 + 0x29;
        }
        thunk_FUN_140497c50(lVar4,uVar5);
      }
    }
    else {
      if (7 < local_20) {
        uVar5 = local_20 * 2 + 2;
        lVar4 = local_38[0];
        if (0xfff < uVar5) {
          lVar4 = *(longlong *)(local_38[0] + -8);
          if (0x1f < (local_38[0] - lVar4) - 8U) {
LAB_1402bce19:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          uVar5 = local_20 * 2 + 0x29;
        }
        thunk_FUN_140497c50(lVar4,uVar5);
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}



## raw_result.value.assembly

0x1402bccd0: PUSH RBX,0x1402bccd2: SUB RSP, 0x50,0x1402bccd6: MOV RAX, qword ptr [0x1406d1c00],0x1402bccdd: XOR RAX, RSP,0x1402bcce0: MOV qword ptr [RSP + 0x40], RAX,0x1402bcce5: LEA RCX, [RSP + 0x20],0x1402bccea: CALL 0x1402bc6e0,0x1402bccef: NOP,0x1402bccf0: CMP qword ptr [RSP + 0x30], 0x0,0x1402bccf6: JNZ 0x1402bcd45,0x1402bccf8: MOV RAX, qword ptr [RSP + 0x38],0x1402bccfd: CMP RAX, 0x7,0x1402bcd01: JBE 0x1402bcd3e,0x1402bcd03: LEA RDX, [0x2 + RAX*0x2],0x1402bcd0b: MOV RCX, qword ptr [RSP + 0x20],0x1402bcd10: CMP RDX, 0x1000,0x1402bcd17: JC 0x1402bcd39,0x1402bcd19: MOV R8, qword ptr [RCX + -0x8],0x1402bcd1d: SUB RCX, R8,0x1402bcd20: SUB RCX, 0x8,0x1402bcd24: CMP RCX, 0x1f,0x1402bcd28: JA 0x1402bce19,0x1402bcd2e: LEA RDX, [0x29 + RAX*0x2],0x1402bcd36: MOV RCX, R8,0x1402bcd39: CALL 0x140496f60,0x1402bcd3e: XOR AL, AL,0x1402bcd40: JMP 0x1402bce06,0x1402bcd45: XOR R9D, R9D,0x1402bcd48: XOR R8D, R8D,0x1402bcd4b: XOR EDX, EDX,0x1402bcd4d: LEA RCX, [RSP + 0x20],0x1402bcd52: CALL 0x1402bce50,0x1402bcd57: TEST AL, AL,0x1402bcd59: JZ 0x1402bcda5,0x1402bcd5b: MOV RAX, qword ptr [RSP + 0x38],0x1402bcd60: CMP RAX, 0x7,0x1402bcd64: JBE 0x1402bcda1,0x1402bcd66: LEA RDX, [0x2 + RAX*0x2],0x1402bcd6e: MOV RCX, qword ptr [RSP + 0x20],0x1402bcd73: CMP RDX, 0x1000,0x1402bcd7a: JC 0x1402bcd9c,0x1402bcd7c: MOV R8, qword ptr [RCX + -0x8],0x1402bcd80: SUB RCX, R8,0x1402bcd83: SUB RCX, 0x8,0x1402bcd87: CMP RCX, 0x1f,0x1402bcd8b: JA 0x1402bce19,0x1402bcd91: LEA RDX, [0x29 + RAX*0x2],0x1402bcd99: MOV RCX, R8,0x1402bcd9c: CALL 0x140496f60,0x1402bcda1: MOV AL, 0x1,0x1402bcda3: JMP 0x1402bce06,0x1402bcda5: MOV R9B, 0x1,0x1402bcda8: XOR R8D, R8D,0x1402bcdab: XOR EDX, EDX,0x1402bcdad: LEA RCX, [RSP + 0x20],0x1402bcdb2: CALL 0x1402bce50,0x1402bcdb7: MOVZX EBX, AL,0x1402bcdba: MOV RDX, qword ptr [RSP + 0x38],0x1402bcdbf: CMP RDX, 0x7,0x1402bcdc3: JBE 0x1402bcdff,0x1402bcdc5: LEA R8, [0x2 + RDX*0x2],0x1402bcdcd: MOV RCX, qword ptr [RSP + 0x20],0x1402bcdd2: CMP R8, 0x1000,0x1402bcdd9: JC 0x1402bcdf7,0x1402bcddb: MOV R9, qword ptr [RCX + -0x8],0x1402bcddf: SUB RCX, R9,0x1402bcde2: SUB RCX, 0x8,0x1402bcde6: CMP RCX, 0x1f,0x1402bcdea: JA 0x1402bce19,0x1402bcdec: LEA R8, [0x29 + RDX*0x2],0x1402bcdf4: MOV RCX, R9,0x1402bcdf7: MOV RDX, R8,0x1402bcdfa: CALL 0x140496f60,0x1402bcdff: MOVZX EAX, BL,0x1402bce02: JMP 0x1402bce06,0x1402bce06: MOV RCX, qword ptr [RSP + 0x40],0x1402bce0b: XOR RCX, RSP,0x1402bce0e: CALL 0x1404973b0,0x1402bce13: ADD RSP, 0x50,0x1402bce17: POP RBX,0x1402bce18: RET,0x1402bce19: MOV ECX, 0x5,0x1402bce1e: INT 0x29,0x1402bce20: INT3

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140094770 | FUN_140094770 | [object Object] | [object Object] |
| 0x140095cb0 | FUN_140095cb0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1402bc6e0 | FUN_1402bc6e0           | [object Object] | [object Object] |
| 0x1402bce50 | FUN_1402bce50           | [object Object] | [object Object] |
| 0x140496f60 | thunk_FUN_140497c50     | [object Object] | [object Object] |
| 0x1404973b0 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1400947c5    | 0x1402bccd0    | [object Object]  | [object Object]  | [object Object] |
| 0x140095cf2    | 0x1402bccd0    | [object Object]  | [object Object]  | [object Object] |
| 0x1402bc6a0    | 0x1402bccd0    | [object Object]  | [object Object]  | [object Object] |
| 0x1406f9c0c    | 0x1402bccd0    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1402bccd6    | 0x1406d1c00              | [object Object]  |                  | [object Object] |
| 0x1402bcce0    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1402bcce5    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bccea    | 0x1402bc6e0              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bccf0    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1402bccf6    | 0x1402bcd45              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bccf8    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1402bcd01    | 0x1402bcd3e              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd0b    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bcd17    | 0x1402bcd39              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd28    | 0x1402bce19              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd39    | 0x140496f60              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd40    | 0x1402bce06              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd4d    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bcd52    | 0x1402bce50              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd59    | 0x1402bcda5              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd5b    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1402bcd64    | 0x1402bcda1              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd6e    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bcd7a    | 0x1402bcd9c              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd8b    | 0x1402bce19              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd9c    | 0x140496f60              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcda3    | 0x1402bce06              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcdad    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bcdb2    | 0x1402bce50              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcdba    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1402bcdc3    | 0x1402bcdff              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcdcd    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bcdd9    | 0x1402bcdf7              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcdea    | 0x1402bce19              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcdfa    | 0x140496f60              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bce02    | 0x1402bce06              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bce06    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1402bce0e    | 0x1404973b0              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1402bc6e0 | FUN_1402bc6e0           | 0x1402bccea    |
| 0x1402bcd39 | LAB_1402bcd39           | 0x1402bcd17    |
| 0x1402bcd3e | LAB_1402bcd3e           | 0x1402bcd01    |
| 0x1402bcd45 | LAB_1402bcd45           | 0x1402bccf6    |
| 0x1402bcd9c | LAB_1402bcd9c           | 0x1402bcd7a    |
| 0x1402bcda1 | LAB_1402bcda1           | 0x1402bcd64    |
| 0x1402bcda5 | LAB_1402bcda5           | 0x1402bcd59    |
| 0x1402bcdf7 | LAB_1402bcdf7           | 0x1402bcdd9    |
| 0x1402bcdff | LAB_1402bcdff           | 0x1402bcdc3    |
| 0x1402bce06 | LAB_1402bce06           | 0x1402bcd40    |
| 0x1402bce06 | LAB_1402bce06           | 0x1402bcda3    |
| 0x1402bce06 | LAB_1402bce06           | 0x1402bce02    |
| 0x1402bce19 | LAB_1402bce19           | 0x1402bcd28    |
| 0x1402bce19 | LAB_1402bce19           | 0x1402bcd8b    |
| 0x1402bce19 | LAB_1402bce19           | 0x1402bcdea    |
| 0x1402bce50 | FUN_1402bce50           | 0x1402bcd52    |
| 0x1402bce50 | FUN_1402bce50           | 0x1402bcdb2    |
| 0x140496f60 | thunk_FUN_140497c50     | 0x1402bcd39    |
| 0x140496f60 | thunk_FUN_140497c50     | 0x1402bcd9c    |
| 0x140496f60 | thunk_FUN_140497c50     | 0x1402bcdfa    |
| 0x1404973b0 | __security_check_cookie | 0x1402bce0e    |
| 0x1406d1c00 | DAT_1406d1c00           | 0x1402bccd6    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1402bccd0 | 0x1402bccf8 | 0x1402bccf8,0x1402bcd45 |
| 0x1402bccf8 | 0x1402bcd03 | 0x1402bcd03,0x1402bcd3e |
| 0x1402bcd03 | 0x1402bcd19 | 0x1402bcd19,0x1402bcd39 |
| 0x1402bcd19 | 0x1402bcd2e | 0x1402bcd2e,0x1402bce19 |
| 0x1402bcd2e | 0x1402bcd39 | 0x1402bcd39             |
| 0x1402bcd39 | 0x1402bcd3e | 0x1402bcd3e             |
| 0x1402bcd3e | 0x1402bcd45 | 0x1402bce06             |
| 0x1402bcd45 | 0x1402bcd5b | 0x1402bcd5b,0x1402bcda5 |
| 0x1402bcd5b | 0x1402bcd66 | 0x1402bcd66,0x1402bcda1 |
| 0x1402bcd66 | 0x1402bcd7c | 0x1402bcd7c,0x1402bcd9c |
| 0x1402bcd7c | 0x1402bcd91 | 0x1402bcd91,0x1402bce19 |
| 0x1402bcd91 | 0x1402bcd9c | 0x1402bcd9c             |
| 0x1402bcd9c | 0x1402bcda1 | 0x1402bcda1             |
| 0x1402bcda1 | 0x1402bcda5 | 0x1402bce06             |
| 0x1402bcda5 | 0x1402bcdc5 | 0x1402bcdc5,0x1402bcdff |
| 0x1402bcdc5 | 0x1402bcddb | 0x1402bcddb,0x1402bcdf7 |
| 0x1402bcddb | 0x1402bcdec | 0x1402bcdec,0x1402bce19 |
| 0x1402bcdec | 0x1402bcdf7 | 0x1402bcdf7             |
| 0x1402bcdf7 | 0x1402bcdff | 0x1402bcdff             |
| 0x1402bcdff | 0x1402bce04 | 0x1402bce06             |
| 0x1402bce06 | 0x1402bce19 |                         |
| 0x1402bce19 | 0x1402bce21 |                         |

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

undefined1

## raw_result.value.native_api.return_type.size_bytes

1

## raw_result.value.native_api.return_type.storage

AL:1

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                       |
|------------------|-------------------------|----------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.        |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined1. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters



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

| id              | address     | sequence | opcode     | is_dead | block_membership | inputs                                                                          | output          |
|-----------------|-------------|----------|------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x1402bccd2#912 | 0x1402bccd2 | 912      | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccdd#15  | 0x1402bccdd | 15       | INT_XOR    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccdd#924 | 0x1402bccdd | 924      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcce5#913 | 0x1402bcce5 | 913      | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccea#29  | 0x1402bccea | 29       | CALL       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bccea#813 | 0x1402bccea | 813      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccea#841 | 0x1402bccea | 841      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccea#854 | 0x1402bccea | 854      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccea#867 | 0x1402bccea | 867      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccea#880 | 0x1402bccea | 880      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccf0#37  | 0x1402bccf0 | 37       | INT_EQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccf6#43  | 0x1402bccf6 | 43       | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd01#57  | 0x1402bcd01 | 57       | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd01#58  | 0x1402bcd01 | 58       | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd03#59  | 0x1402bcd03 | 59       | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd03#60  | 0x1402bcd03 | 60       | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd10#66  | 0x1402bcd10 | 66       | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd17#75  | 0x1402bcd17 | 75       | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd17#923 | 0x1402bcd17 | 923      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcd19#76  | 0x1402bcd19 | 76       | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd19#77  | 0x1402bcd19 | 77       | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd19#927 | 0x1402bcd19 | 927      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcd1d#81  | 0x1402bcd1d | 81       | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd20#90  | 0x1402bcd20 | 90       | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd28#107 | 0x1402bcd28 | 107      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd28#109 | 0x1402bcd28 | 109      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd2e#110 | 0x1402bcd2e | 110      | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd2e#111 | 0x1402bcd2e | 111      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd39#116 | 0x1402bcd39 | 116      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1402bcd39#585 | 0x1402bcd39 | 585      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd39#615 | 0x1402bcd39 | 615      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd39#820 | 0x1402bcd39 | 820      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd39#887 | 0x1402bcd39 | 887      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd3e#826 | 0x1402bcd3e | 826      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd3e#920 | 0x1402bcd3e | 920      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcd40#126 | 0x1402bcd40 | 126      | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x1402bcd4d#914 | 0x1402bcd4d | 914      | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd52#198 | 0x1402bcd52 | 198      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1402bcd52#814 | 0x1402bcd52 | 814      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd52#842 | 0x1402bcd52 | 842      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd52#868 | 0x1402bcd52 | 868      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd52#881 | 0x1402bcd52 | 881      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd57#203 | 0x1402bcd57 | 203      | INT_EQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd59#208 | 0x1402bcd59 | 208      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd64#222 | 0x1402bcd64 | 222      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd64#223 | 0x1402bcd64 | 223      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd66#224 | 0x1402bcd66 | 224      | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd66#225 | 0x1402bcd66 | 225      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd73#231 | 0x1402bcd73 | 231      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd7a#240 | 0x1402bcd7a | 240      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd7a#922 | 0x1402bcd7a | 922      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcd7c#241 | 0x1402bcd7c | 241      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd7c#242 | 0x1402bcd7c | 242      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd7c#926 | 0x1402bcd7c | 926      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcd80#246 | 0x1402bcd80 | 246      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd83#255 | 0x1402bcd83 | 255      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd8b#272 | 0x1402bcd8b | 272      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd8b#274 | 0x1402bcd8b | 274      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd91#275 | 0x1402bcd91 | 275      | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd91#276 | 0x1402bcd91 | 276      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd9c#281 | 0x1402bcd9c | 281      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1402bcd9c#581 | 0x1402bcd9c | 581      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd9c#612 | 0x1402bcd9c | 612      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd9c#817 | 0x1402bcd9c | 817      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd9c#884 | 0x1402bcd9c | 884      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcda1#823 | 0x1402bcda1 | 823      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcda1#919 | 0x1402bcda1 | 919      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcda3#283 | 0x1402bcda3 | 283      | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x1402bcdad#915 | 0x1402bcdad | 915      | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdb2#309 | 0x1402bcdb2 | 309      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1402bcdb2#815 | 0x1402bcdb2 | 815      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdb2#843 | 0x1402bcdb2 | 843      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdb2#869 | 0x1402bcdb2 | 869      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdb2#882 | 0x1402bcdb2 | 882      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdc3#325 | 0x1402bcdc3 | 325      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdc3#326 | 0x1402bcdc3 | 326      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcdc5#327 | 0x1402bcdc5 | 327      | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdc5#328 | 0x1402bcdc5 | 328      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdd2#334 | 0x1402bcdd2 | 334      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdd9#343 | 0x1402bcdd9 | 343      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcdd9#921 | 0x1402bcdd9 | 921      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcddb#344 | 0x1402bcddb | 344      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcddb#345 | 0x1402bcddb | 345      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcddb#925 | 0x1402bcddb | 925      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcddf#349 | 0x1402bcddf | 349      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcde2#358 | 0x1402bcde2 | 358      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdea#375 | 0x1402bcdea | 375      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdea#377 | 0x1402bcdea | 377      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcdec#378 | 0x1402bcdec | 378      | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdec#379 | 0x1402bcdec | 379      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdf7#580 | 0x1402bcdf7 | 580      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdf7#654 | 0x1402bcdf7 | 654      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdfa#385 | 0x1402bcdfa | 385      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1402bcdfa#816 | 0x1402bcdfa | 816      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdfa#883 | 0x1402bcdfa | 883      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce06#825 | 0x1402bce06 | 825      | MULTIEQUAL | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1402bce06#918 | 0x1402bce06 | 918      | MULTIEQUAL | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1402bce18#157 | 0x1402bce18 | 157      | RETURN     | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bce18#821 | 0x1402bce18 | 821      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bce19#827 | 0x1402bce19 | 827      | MULTIEQUAL | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1402bce19#892 | 0x1402bce19 | 892      | MULTIEQUAL | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1402bce1e#159 | 0x1402bce1e | 159      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce1e#160 | 0x1402bce1e | 160      | CALLIND    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bce1e#818 | 0x1402bce1e | 818      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce1e#885 | 0x1402bce1e | 885      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce1e#928 | 0x1402bce1e | 928      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bce20#161 | 0x1402bce20 | 161      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce20#162 | 0x1402bce20 | 162      | CALLIND    | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bce20#163 | 0x1402bce20 | 163      | RETURN     | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bce20#819 | 0x1402bce20 | 819      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce20#822 | 0x1402bce20 | 822      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bce20#886 | 0x1402bce20 | 886      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce20#929 | 0x1402bce20 | 929      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1402bccdd#924 | 0x1402bccdd#15  | 1           |
| 0x1402bccd2#912 | 0x1402bccdd#924 | 0           |
| 0x1402bcce5#913 | 0x1402bccea#29  | 1           |
| 0x1402bccdd#15  | 0x1402bccea#880 | 0           |
| 0x1402bccea#854 | 0x1402bccf0#37  | 0           |
| 0x1402bccf0#37  | 0x1402bccf6#43  | 1           |
| 0x1402bccea#867 | 0x1402bcd01#57  | 1           |
| 0x1402bcd01#57  | 0x1402bcd01#58  | 1           |
| 0x1402bccea#867 | 0x1402bcd03#59  | 0           |
| 0x1402bcd03#59  | 0x1402bcd03#60  | 0           |
| 0x1402bcd03#60  | 0x1402bcd10#66  | 1           |
| 0x1402bcd10#66  | 0x1402bcd17#75  | 1           |
| 0x1402bccea#841 | 0x1402bcd17#923 | 0           |
| 0x1402bccea#841 | 0x1402bcd19#76  | 0           |
| 0x1402bcd19#927 | 0x1402bcd19#77  | 1           |
| 0x1402bcd19#76  | 0x1402bcd19#927 | 0           |
| 0x1402bccea#841 | 0x1402bcd1d#81  | 0           |
| 0x1402bcd19#77  | 0x1402bcd1d#81  | 1           |
| 0x1402bcd1d#81  | 0x1402bcd20#90  | 0           |
| 0x1402bcd20#90  | 0x1402bcd28#107 | 1           |
| 0x1402bcd28#107 | 0x1402bcd28#109 | 1           |
| 0x1402bccea#867 | 0x1402bcd2e#110 | 0           |
| 0x1402bcd2e#110 | 0x1402bcd2e#111 | 0           |
| 0x1402bcd39#585 | 0x1402bcd39#116 | 1           |
| 0x1402bcd39#615 | 0x1402bcd39#116 | 2           |
| 0x1402bcd17#923 | 0x1402bcd39#585 | 0           |
| 0x1402bcd19#77  | 0x1402bcd39#585 | 1           |
| 0x1402bcd03#60  | 0x1402bcd39#615 | 0           |
| 0x1402bcd2e#111 | 0x1402bcd39#615 | 1           |
| 0x1402bccea#813 | 0x1402bcd39#820 | 0           |
| 0x1402bccea#880 | 0x1402bcd39#887 | 0           |
| 0x1402bccea#813 | 0x1402bcd3e#826 | 0           |
| 0x1402bcd39#820 | 0x1402bcd3e#826 | 1           |
| 0x1402bcd4d#914 | 0x1402bcd52#198 | 1           |
| 0x1402bccea#813 | 0x1402bcd52#814 | 0           |
| 0x1402bccea#841 | 0x1402bcd52#842 | 0           |
| 0x1402bccea#867 | 0x1402bcd52#868 | 0           |
| 0x1402bccea#880 | 0x1402bcd52#881 | 0           |
| 0x1402bcd52#198 | 0x1402bcd57#203 | 0           |
| 0x1402bcd57#203 | 0x1402bcd59#208 | 1           |
| 0x1402bcd52#868 | 0x1402bcd64#222 | 1           |
| 0x1402bcd64#222 | 0x1402bcd64#223 | 1           |
| 0x1402bcd52#868 | 0x1402bcd66#224 | 0           |
| 0x1402bcd66#224 | 0x1402bcd66#225 | 0           |
| 0x1402bcd66#225 | 0x1402bcd73#231 | 1           |
| 0x1402bcd73#231 | 0x1402bcd7a#240 | 1           |
| 0x1402bcd52#842 | 0x1402bcd7a#922 | 0           |
| 0x1402bcd52#842 | 0x1402bcd7c#241 | 0           |
| 0x1402bcd7c#926 | 0x1402bcd7c#242 | 1           |
| 0x1402bcd7c#241 | 0x1402bcd7c#926 | 0           |
| 0x1402bcd52#842 | 0x1402bcd80#246 | 0           |
| 0x1402bcd7c#242 | 0x1402bcd80#246 | 1           |
| 0x1402bcd80#246 | 0x1402bcd83#255 | 0           |
| 0x1402bcd83#255 | 0x1402bcd8b#272 | 1           |
| 0x1402bcd8b#272 | 0x1402bcd8b#274 | 1           |
| 0x1402bcd52#868 | 0x1402bcd91#275 | 0           |
| 0x1402bcd91#275 | 0x1402bcd91#276 | 0           |
| 0x1402bcd9c#581 | 0x1402bcd9c#281 | 1           |
| 0x1402bcd9c#612 | 0x1402bcd9c#281 | 2           |
| 0x1402bcd7a#922 | 0x1402bcd9c#581 | 0           |
| 0x1402bcd7c#242 | 0x1402bcd9c#581 | 1           |
| 0x1402bcd66#225 | 0x1402bcd9c#612 | 0           |
| 0x1402bcd91#276 | 0x1402bcd9c#612 | 1           |
| 0x1402bcd52#814 | 0x1402bcd9c#817 | 0           |
| 0x1402bcd52#881 | 0x1402bcd9c#884 | 0           |
| 0x1402bcd52#814 | 0x1402bcda1#823 | 0           |
| 0x1402bcd9c#817 | 0x1402bcda1#823 | 1           |
| 0x1402bcdad#915 | 0x1402bcdb2#309 | 1           |
| 0x1402bcd52#814 | 0x1402bcdb2#815 | 0           |
| 0x1402bcd52#842 | 0x1402bcdb2#843 | 0           |
| 0x1402bcd52#868 | 0x1402bcdb2#869 | 0           |
| 0x1402bcd52#881 | 0x1402bcdb2#882 | 0           |
| 0x1402bcdb2#869 | 0x1402bcdc3#325 | 1           |
| 0x1402bcdc3#325 | 0x1402bcdc3#326 | 1           |
| 0x1402bcdb2#869 | 0x1402bcdc5#327 | 0           |
| 0x1402bcdc5#327 | 0x1402bcdc5#328 | 0           |
| 0x1402bcdc5#328 | 0x1402bcdd2#334 | 1           |
| 0x1402bcdd2#334 | 0x1402bcdd9#343 | 1           |
| 0x1402bcdb2#843 | 0x1402bcdd9#921 | 0           |
| 0x1402bcdb2#843 | 0x1402bcddb#344 | 0           |
| 0x1402bcddb#925 | 0x1402bcddb#345 | 1           |
| 0x1402bcddb#344 | 0x1402bcddb#925 | 0           |
| 0x1402bcdb2#843 | 0x1402bcddf#349 | 0           |
| 0x1402bcddb#345 | 0x1402bcddf#349 | 1           |
| 0x1402bcddf#349 | 0x1402bcde2#358 | 0           |
| 0x1402bcde2#358 | 0x1402bcdea#375 | 1           |
| 0x1402bcdea#375 | 0x1402bcdea#377 | 1           |
| 0x1402bcdb2#869 | 0x1402bcdec#378 | 0           |
| 0x1402bcdec#378 | 0x1402bcdec#379 | 0           |
| 0x1402bcdd9#921 | 0x1402bcdf7#580 | 0           |
| 0x1402bcddb#345 | 0x1402bcdf7#580 | 1           |
| 0x1402bcdc5#328 | 0x1402bcdf7#654 | 0           |
| 0x1402bcdec#379 | 0x1402bcdf7#654 | 1           |
| 0x1402bcdf7#580 | 0x1402bcdfa#385 | 1           |
| 0x1402bcdf7#654 | 0x1402bcdfa#385 | 2           |
| 0x1402bcdb2#815 | 0x1402bcdfa#816 | 0           |
| 0x1402bcdb2#882 | 0x1402bcdfa#883 | 0           |
| 0x1402bcd3e#826 | 0x1402bce06#825 | 0           |
| 0x1402bcda1#823 | 0x1402bce06#825 | 1           |
| 0x1402bcdb2#815 | 0x1402bce06#825 | 2           |
| 0x1402bcdfa#816 | 0x1402bce06#825 | 3           |
| 0x1402bcd3e#920 | 0x1402bce06#918 | 0           |
| 0x1402bcda1#919 | 0x1402bce06#918 | 1           |
| 0x1402bcdb2#309 | 0x1402bce06#918 | 2           |
| 0x1402bcdb2#309 | 0x1402bce06#918 | 3           |
| 0x1402bce06#918 | 0x1402bce18#157 | 1           |
| 0x1402bce06#825 | 0x1402bce18#821 | 0           |
| 0x1402bccea#813 | 0x1402bce19#827 | 0           |
| 0x1402bcd52#814 | 0x1402bce19#827 | 1           |
| 0x1402bcdb2#815 | 0x1402bce19#827 | 2           |
| 0x1402bccea#880 | 0x1402bce19#892 | 0           |
| 0x1402bcd52#881 | 0x1402bce19#892 | 1           |
| 0x1402bcdb2#882 | 0x1402bce19#892 | 2           |
| 0x1402bce1e#928 | 0x1402bce1e#160 | 0           |
| 0x1402bce19#827 | 0x1402bce1e#818 | 0           |
| 0x1402bce19#892 | 0x1402bce1e#885 | 0           |
| 0x1402bce1e#159 | 0x1402bce1e#928 | 0           |
| 0x1402bce20#929 | 0x1402bce20#162 | 0           |
| 0x1402bce20#162 | 0x1402bce20#163 | 1           |
| 0x1402bce1e#818 | 0x1402bce20#819 | 0           |
| 0x1402bce20#819 | 0x1402bce20#822 | 0           |
| 0x1402bce1e#885 | 0x1402bce20#886 | 0           |
| 0x1402bce20#161 | 0x1402bce20#929 | 0           |

## raw_result.value.native_value_flow.parameters



## raw_result.value.native_value_flow.parameter_uses



## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1402bccea#29  | direct_call        | 0             |             |
| 0x1402bccf6#43  | conditional_branch |               | 1           |
| 0x1402bcd01#58  | conditional_branch |               | 1           |
| 0x1402bcd17#75  | conditional_branch |               | 1           |
| 0x1402bcd19#77  | memory_read        | 1             |             |
| 0x1402bcd28#109 | conditional_branch |               | 1           |
| 0x1402bcd39#116 | direct_call        | 0             |             |
| 0x1402bcd52#198 | direct_call        | 0             |             |
| 0x1402bcd59#208 | conditional_branch |               | 1           |
| 0x1402bcd64#223 | conditional_branch |               | 1           |
| 0x1402bcd7a#240 | conditional_branch |               | 1           |
| 0x1402bcd7c#242 | memory_read        | 1             |             |
| 0x1402bcd8b#274 | conditional_branch |               | 1           |
| 0x1402bcd9c#281 | direct_call        | 0             |             |
| 0x1402bcdb2#309 | direct_call        | 0             |             |
| 0x1402bcdc3#326 | conditional_branch |               | 1           |
| 0x1402bcdd9#343 | conditional_branch |               | 1           |
| 0x1402bcddb#345 | memory_read        | 1             |             |
| 0x1402bcdea#377 | conditional_branch |               | 1           |
| 0x1402bcdfa#385 | direct_call        | 0             |             |
| 0x1402bce1e#160 | indirect_call      | 0             |             |
| 0x1402bce20#162 | indirect_call      | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1402bce20 with no resolved callee; its no-return basis is unknown.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1402bce20 with no resolved callee; its no-return basis is unknown.

## normalized_result.procedure.address

0x1402bccd0

## normalized_result.procedure.name

FUN_1402bccd0

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
| 0x1402bccd0 | 0x1402bce03 |
| 0x1402bce06 | 0x1402bce20 |

## normalized_result.procedure.body.total_bytes

335

## normalized_result.procedure.body.span_bytes

337

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1402bccd0()

## normalized_result.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8 | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8 | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8 | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1402bccd0(void)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1406d1c00 ^ (ulonglong)auStack_58;
  FUN_1402bc6e0(local_38);
  if (local_28 == 0) {
    if (7 < local_20) {
      uVar5 = local_20 * 2 + 2;
      lVar4 = local_38[0];
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(local_38[0] + -8);
        if (0x1f < (local_38[0] - lVar4) - 8U) goto LAB_1402bce19;
        uVar5 = local_20 * 2 + 0x29;
      }
      thunk_FUN_140497c50(lVar4,uVar5);
    }
    uVar3 = 0;
  }
  else {
    cVar2 = FUN_1402bce50(local_38,0,0,0);
    if (cVar2 == '\0') {
      uVar3 = FUN_1402bce50(local_38,0,0,1);
      if (7 < local_20) {
        uVar5 = local_20 * 2 + 2;
        lVar4 = local_38[0];
        if (0xfff < uVar5) {
          lVar4 = *(longlong *)(local_38[0] + -8);
          if (0x1f < (local_38[0] - lVar4) - 8U) goto LAB_1402bce19;
          uVar5 = local_20 * 2 + 0x29;
        }
        thunk_FUN_140497c50(lVar4,uVar5);
      }
    }
    else {
      if (7 < local_20) {
        uVar5 = local_20 * 2 + 2;
        lVar4 = local_38[0];
        if (0xfff < uVar5) {
          lVar4 = *(longlong *)(local_38[0] + -8);
          if (0x1f < (local_38[0] - lVar4) - 8U) {
LAB_1402bce19:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          uVar5 = local_20 * 2 + 0x29;
        }
        thunk_FUN_140497c50(lVar4,uVar5);
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}



## normalized_result.assembly

0x1402bccd0: PUSH RBX,0x1402bccd2: SUB RSP, 0x50,0x1402bccd6: MOV RAX, qword ptr [0x1406d1c00],0x1402bccdd: XOR RAX, RSP,0x1402bcce0: MOV qword ptr [RSP + 0x40], RAX,0x1402bcce5: LEA RCX, [RSP + 0x20],0x1402bccea: CALL 0x1402bc6e0,0x1402bccef: NOP,0x1402bccf0: CMP qword ptr [RSP + 0x30], 0x0,0x1402bccf6: JNZ 0x1402bcd45,0x1402bccf8: MOV RAX, qword ptr [RSP + 0x38],0x1402bccfd: CMP RAX, 0x7,0x1402bcd01: JBE 0x1402bcd3e,0x1402bcd03: LEA RDX, [0x2 + RAX*0x2],0x1402bcd0b: MOV RCX, qword ptr [RSP + 0x20],0x1402bcd10: CMP RDX, 0x1000,0x1402bcd17: JC 0x1402bcd39,0x1402bcd19: MOV R8, qword ptr [RCX + -0x8],0x1402bcd1d: SUB RCX, R8,0x1402bcd20: SUB RCX, 0x8,0x1402bcd24: CMP RCX, 0x1f,0x1402bcd28: JA 0x1402bce19,0x1402bcd2e: LEA RDX, [0x29 + RAX*0x2],0x1402bcd36: MOV RCX, R8,0x1402bcd39: CALL 0x140496f60,0x1402bcd3e: XOR AL, AL,0x1402bcd40: JMP 0x1402bce06,0x1402bcd45: XOR R9D, R9D,0x1402bcd48: XOR R8D, R8D,0x1402bcd4b: XOR EDX, EDX,0x1402bcd4d: LEA RCX, [RSP + 0x20],0x1402bcd52: CALL 0x1402bce50,0x1402bcd57: TEST AL, AL,0x1402bcd59: JZ 0x1402bcda5,0x1402bcd5b: MOV RAX, qword ptr [RSP + 0x38],0x1402bcd60: CMP RAX, 0x7,0x1402bcd64: JBE 0x1402bcda1,0x1402bcd66: LEA RDX, [0x2 + RAX*0x2],0x1402bcd6e: MOV RCX, qword ptr [RSP + 0x20],0x1402bcd73: CMP RDX, 0x1000,0x1402bcd7a: JC 0x1402bcd9c,0x1402bcd7c: MOV R8, qword ptr [RCX + -0x8],0x1402bcd80: SUB RCX, R8,0x1402bcd83: SUB RCX, 0x8,0x1402bcd87: CMP RCX, 0x1f,0x1402bcd8b: JA 0x1402bce19,0x1402bcd91: LEA RDX, [0x29 + RAX*0x2],0x1402bcd99: MOV RCX, R8,0x1402bcd9c: CALL 0x140496f60,0x1402bcda1: MOV AL, 0x1,0x1402bcda3: JMP 0x1402bce06,0x1402bcda5: MOV R9B, 0x1,0x1402bcda8: XOR R8D, R8D,0x1402bcdab: XOR EDX, EDX,0x1402bcdad: LEA RCX, [RSP + 0x20],0x1402bcdb2: CALL 0x1402bce50,0x1402bcdb7: MOVZX EBX, AL,0x1402bcdba: MOV RDX, qword ptr [RSP + 0x38],0x1402bcdbf: CMP RDX, 0x7,0x1402bcdc3: JBE 0x1402bcdff,0x1402bcdc5: LEA R8, [0x2 + RDX*0x2],0x1402bcdcd: MOV RCX, qword ptr [RSP + 0x20],0x1402bcdd2: CMP R8, 0x1000,0x1402bcdd9: JC 0x1402bcdf7,0x1402bcddb: MOV R9, qword ptr [RCX + -0x8],0x1402bcddf: SUB RCX, R9,0x1402bcde2: SUB RCX, 0x8,0x1402bcde6: CMP RCX, 0x1f,0x1402bcdea: JA 0x1402bce19,0x1402bcdec: LEA R8, [0x29 + RDX*0x2],0x1402bcdf4: MOV RCX, R9,0x1402bcdf7: MOV RDX, R8,0x1402bcdfa: CALL 0x140496f60,0x1402bcdff: MOVZX EAX, BL,0x1402bce02: JMP 0x1402bce06,0x1402bce06: MOV RCX, qword ptr [RSP + 0x40],0x1402bce0b: XOR RCX, RSP,0x1402bce0e: CALL 0x1404973b0,0x1402bce13: ADD RSP, 0x50,0x1402bce17: POP RBX,0x1402bce18: RET,0x1402bce19: MOV ECX, 0x5,0x1402bce1e: INT 0x29,0x1402bce20: INT3

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140094770 | FUN_140094770 | [object Object] | [object Object] |
| 0x140095cb0 | FUN_140095cb0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1402bc6e0 | FUN_1402bc6e0           | [object Object] | [object Object] |
| 0x1402bce50 | FUN_1402bce50           | [object Object] | [object Object] |
| 0x140496f60 | thunk_FUN_140497c50     | [object Object] | [object Object] |
| 0x1404973b0 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1400947c5    | 0x1402bccd0    | [object Object]  | [object Object]  | [object Object] |
| 0x140095cf2    | 0x1402bccd0    | [object Object]  | [object Object]  | [object Object] |
| 0x1402bc6a0    | 0x1402bccd0    | [object Object]  | [object Object]  | [object Object] |
| 0x1406f9c0c    | 0x1402bccd0    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1402bccd6    | 0x1406d1c00              | [object Object]  |                  | [object Object] |
| 0x1402bcce0    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1402bcce5    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bccea    | 0x1402bc6e0              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bccf0    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1402bccf6    | 0x1402bcd45              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bccf8    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1402bcd01    | 0x1402bcd3e              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd0b    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bcd17    | 0x1402bcd39              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd28    | 0x1402bce19              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd39    | 0x140496f60              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd40    | 0x1402bce06              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd4d    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bcd52    | 0x1402bce50              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd59    | 0x1402bcda5              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd5b    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1402bcd64    | 0x1402bcda1              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd6e    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bcd7a    | 0x1402bcd9c              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd8b    | 0x1402bce19              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcd9c    | 0x140496f60              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcda3    | 0x1402bce06              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcdad    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bcdb2    | 0x1402bce50              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcdba    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1402bcdc3    | 0x1402bcdff              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcdcd    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bcdd9    | 0x1402bcdf7              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcdea    | 0x1402bce19              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bcdfa    | 0x140496f60              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bce02    | 0x1402bce06              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bce06    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1402bce0e    | 0x1404973b0              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1402bc6e0 | FUN_1402bc6e0           | 0x1402bccea    |
| 0x1402bcd39 | LAB_1402bcd39           | 0x1402bcd17    |
| 0x1402bcd3e | LAB_1402bcd3e           | 0x1402bcd01    |
| 0x1402bcd45 | LAB_1402bcd45           | 0x1402bccf6    |
| 0x1402bcd9c | LAB_1402bcd9c           | 0x1402bcd7a    |
| 0x1402bcda1 | LAB_1402bcda1           | 0x1402bcd64    |
| 0x1402bcda5 | LAB_1402bcda5           | 0x1402bcd59    |
| 0x1402bcdf7 | LAB_1402bcdf7           | 0x1402bcdd9    |
| 0x1402bcdff | LAB_1402bcdff           | 0x1402bcdc3    |
| 0x1402bce06 | LAB_1402bce06           | 0x1402bcd40    |
| 0x1402bce06 | LAB_1402bce06           | 0x1402bcda3    |
| 0x1402bce06 | LAB_1402bce06           | 0x1402bce02    |
| 0x1402bce19 | LAB_1402bce19           | 0x1402bcd28    |
| 0x1402bce19 | LAB_1402bce19           | 0x1402bcd8b    |
| 0x1402bce19 | LAB_1402bce19           | 0x1402bcdea    |
| 0x1402bce50 | FUN_1402bce50           | 0x1402bcd52    |
| 0x1402bce50 | FUN_1402bce50           | 0x1402bcdb2    |
| 0x140496f60 | thunk_FUN_140497c50     | 0x1402bcd39    |
| 0x140496f60 | thunk_FUN_140497c50     | 0x1402bcd9c    |
| 0x140496f60 | thunk_FUN_140497c50     | 0x1402bcdfa    |
| 0x1404973b0 | __security_check_cookie | 0x1402bce0e    |
| 0x1406d1c00 | DAT_1406d1c00           | 0x1402bccd6    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1402bccd0 | 0x1402bccf8 | 0x1402bccf8,0x1402bcd45 |
| 0x1402bccf8 | 0x1402bcd03 | 0x1402bcd03,0x1402bcd3e |
| 0x1402bcd03 | 0x1402bcd19 | 0x1402bcd19,0x1402bcd39 |
| 0x1402bcd19 | 0x1402bcd2e | 0x1402bcd2e,0x1402bce19 |
| 0x1402bcd2e | 0x1402bcd39 | 0x1402bcd39             |
| 0x1402bcd39 | 0x1402bcd3e | 0x1402bcd3e             |
| 0x1402bcd3e | 0x1402bcd45 | 0x1402bce06             |
| 0x1402bcd45 | 0x1402bcd5b | 0x1402bcd5b,0x1402bcda5 |
| 0x1402bcd5b | 0x1402bcd66 | 0x1402bcd66,0x1402bcda1 |
| 0x1402bcd66 | 0x1402bcd7c | 0x1402bcd7c,0x1402bcd9c |
| 0x1402bcd7c | 0x1402bcd91 | 0x1402bcd91,0x1402bce19 |
| 0x1402bcd91 | 0x1402bcd9c | 0x1402bcd9c             |
| 0x1402bcd9c | 0x1402bcda1 | 0x1402bcda1             |
| 0x1402bcda1 | 0x1402bcda5 | 0x1402bce06             |
| 0x1402bcda5 | 0x1402bcdc5 | 0x1402bcdc5,0x1402bcdff |
| 0x1402bcdc5 | 0x1402bcddb | 0x1402bcddb,0x1402bcdf7 |
| 0x1402bcddb | 0x1402bcdec | 0x1402bcdec,0x1402bce19 |
| 0x1402bcdec | 0x1402bcdf7 | 0x1402bcdf7             |
| 0x1402bcdf7 | 0x1402bcdff | 0x1402bcdff             |
| 0x1402bcdff | 0x1402bce04 | 0x1402bce06             |
| 0x1402bce06 | 0x1402bce19 |                         |
| 0x1402bce19 | 0x1402bce21 |                         |

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

undefined1

## normalized_result.native_api.return_type.size_bytes

1

## normalized_result.native_api.return_type.storage

AL:1

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                       |
|------------------|-------------------------|----------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.        |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined1. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters



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

| id              | address     | sequence | opcode     | is_dead | block_membership | inputs                                                                          | output          |
|-----------------|-------------|----------|------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x1402bccd2#912 | 0x1402bccd2 | 912      | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccdd#15  | 0x1402bccdd | 15       | INT_XOR    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccdd#924 | 0x1402bccdd | 924      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcce5#913 | 0x1402bcce5 | 913      | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccea#29  | 0x1402bccea | 29       | CALL       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bccea#813 | 0x1402bccea | 813      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccea#841 | 0x1402bccea | 841      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccea#854 | 0x1402bccea | 854      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccea#867 | 0x1402bccea | 867      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccea#880 | 0x1402bccea | 880      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccf0#37  | 0x1402bccf0 | 37       | INT_EQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bccf6#43  | 0x1402bccf6 | 43       | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd01#57  | 0x1402bcd01 | 57       | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd01#58  | 0x1402bcd01 | 58       | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd03#59  | 0x1402bcd03 | 59       | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd03#60  | 0x1402bcd03 | 60       | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd10#66  | 0x1402bcd10 | 66       | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd17#75  | 0x1402bcd17 | 75       | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd17#923 | 0x1402bcd17 | 923      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcd19#76  | 0x1402bcd19 | 76       | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd19#77  | 0x1402bcd19 | 77       | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd19#927 | 0x1402bcd19 | 927      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcd1d#81  | 0x1402bcd1d | 81       | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd20#90  | 0x1402bcd20 | 90       | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd28#107 | 0x1402bcd28 | 107      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd28#109 | 0x1402bcd28 | 109      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd2e#110 | 0x1402bcd2e | 110      | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd2e#111 | 0x1402bcd2e | 111      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd39#116 | 0x1402bcd39 | 116      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1402bcd39#585 | 0x1402bcd39 | 585      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd39#615 | 0x1402bcd39 | 615      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd39#820 | 0x1402bcd39 | 820      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd39#887 | 0x1402bcd39 | 887      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd3e#826 | 0x1402bcd3e | 826      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd3e#920 | 0x1402bcd3e | 920      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcd40#126 | 0x1402bcd40 | 126      | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x1402bcd4d#914 | 0x1402bcd4d | 914      | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd52#198 | 0x1402bcd52 | 198      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1402bcd52#814 | 0x1402bcd52 | 814      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd52#842 | 0x1402bcd52 | 842      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd52#868 | 0x1402bcd52 | 868      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd52#881 | 0x1402bcd52 | 881      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd57#203 | 0x1402bcd57 | 203      | INT_EQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd59#208 | 0x1402bcd59 | 208      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd64#222 | 0x1402bcd64 | 222      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd64#223 | 0x1402bcd64 | 223      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd66#224 | 0x1402bcd66 | 224      | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd66#225 | 0x1402bcd66 | 225      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd73#231 | 0x1402bcd73 | 231      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd7a#240 | 0x1402bcd7a | 240      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd7a#922 | 0x1402bcd7a | 922      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcd7c#241 | 0x1402bcd7c | 241      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd7c#242 | 0x1402bcd7c | 242      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd7c#926 | 0x1402bcd7c | 926      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcd80#246 | 0x1402bcd80 | 246      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd83#255 | 0x1402bcd83 | 255      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd8b#272 | 0x1402bcd8b | 272      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd8b#274 | 0x1402bcd8b | 274      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcd91#275 | 0x1402bcd91 | 275      | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd91#276 | 0x1402bcd91 | 276      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd9c#281 | 0x1402bcd9c | 281      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1402bcd9c#581 | 0x1402bcd9c | 581      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd9c#612 | 0x1402bcd9c | 612      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd9c#817 | 0x1402bcd9c | 817      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcd9c#884 | 0x1402bcd9c | 884      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcda1#823 | 0x1402bcda1 | 823      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcda1#919 | 0x1402bcda1 | 919      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcda3#283 | 0x1402bcda3 | 283      | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x1402bcdad#915 | 0x1402bcdad | 915      | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdb2#309 | 0x1402bcdb2 | 309      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1402bcdb2#815 | 0x1402bcdb2 | 815      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdb2#843 | 0x1402bcdb2 | 843      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdb2#869 | 0x1402bcdb2 | 869      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdb2#882 | 0x1402bcdb2 | 882      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdc3#325 | 0x1402bcdc3 | 325      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdc3#326 | 0x1402bcdc3 | 326      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcdc5#327 | 0x1402bcdc5 | 327      | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdc5#328 | 0x1402bcdc5 | 328      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdd2#334 | 0x1402bcdd2 | 334      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdd9#343 | 0x1402bcdd9 | 343      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcdd9#921 | 0x1402bcdd9 | 921      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcddb#344 | 0x1402bcddb | 344      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcddb#345 | 0x1402bcddb | 345      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcddb#925 | 0x1402bcddb | 925      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bcddf#349 | 0x1402bcddf | 349      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcde2#358 | 0x1402bcde2 | 358      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdea#375 | 0x1402bcdea | 375      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdea#377 | 0x1402bcdea | 377      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bcdec#378 | 0x1402bcdec | 378      | INT_MULT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdec#379 | 0x1402bcdec | 379      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdf7#580 | 0x1402bcdf7 | 580      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdf7#654 | 0x1402bcdf7 | 654      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdfa#385 | 0x1402bcdfa | 385      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1402bcdfa#816 | 0x1402bcdfa | 816      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bcdfa#883 | 0x1402bcdfa | 883      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce06#825 | 0x1402bce06 | 825      | MULTIEQUAL | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1402bce06#918 | 0x1402bce06 | 918      | MULTIEQUAL | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1402bce18#157 | 0x1402bce18 | 157      | RETURN     | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bce18#821 | 0x1402bce18 | 821      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bce19#827 | 0x1402bce19 | 827      | MULTIEQUAL | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1402bce19#892 | 0x1402bce19 | 892      | MULTIEQUAL | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1402bce1e#159 | 0x1402bce1e | 159      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce1e#160 | 0x1402bce1e | 160      | CALLIND    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bce1e#818 | 0x1402bce1e | 818      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce1e#885 | 0x1402bce1e | 885      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce1e#928 | 0x1402bce1e | 928      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bce20#161 | 0x1402bce20 | 161      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce20#162 | 0x1402bce20 | 162      | CALLIND    | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bce20#163 | 0x1402bce20 | 163      | RETURN     | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1402bce20#819 | 0x1402bce20 | 819      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce20#822 | 0x1402bce20 | 822      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1402bce20#886 | 0x1402bce20 | 886      | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1402bce20#929 | 0x1402bce20 | 929      | CAST       | true    | member           | [object Object]                                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1402bccdd#924 | 0x1402bccdd#15  | 1           |
| 0x1402bccd2#912 | 0x1402bccdd#924 | 0           |
| 0x1402bcce5#913 | 0x1402bccea#29  | 1           |
| 0x1402bccdd#15  | 0x1402bccea#880 | 0           |
| 0x1402bccea#854 | 0x1402bccf0#37  | 0           |
| 0x1402bccf0#37  | 0x1402bccf6#43  | 1           |
| 0x1402bccea#867 | 0x1402bcd01#57  | 1           |
| 0x1402bcd01#57  | 0x1402bcd01#58  | 1           |
| 0x1402bccea#867 | 0x1402bcd03#59  | 0           |
| 0x1402bcd03#59  | 0x1402bcd03#60  | 0           |
| 0x1402bcd03#60  | 0x1402bcd10#66  | 1           |
| 0x1402bcd10#66  | 0x1402bcd17#75  | 1           |
| 0x1402bccea#841 | 0x1402bcd17#923 | 0           |
| 0x1402bccea#841 | 0x1402bcd19#76  | 0           |
| 0x1402bcd19#927 | 0x1402bcd19#77  | 1           |
| 0x1402bcd19#76  | 0x1402bcd19#927 | 0           |
| 0x1402bccea#841 | 0x1402bcd1d#81  | 0           |
| 0x1402bcd19#77  | 0x1402bcd1d#81  | 1           |
| 0x1402bcd1d#81  | 0x1402bcd20#90  | 0           |
| 0x1402bcd20#90  | 0x1402bcd28#107 | 1           |
| 0x1402bcd28#107 | 0x1402bcd28#109 | 1           |
| 0x1402bccea#867 | 0x1402bcd2e#110 | 0           |
| 0x1402bcd2e#110 | 0x1402bcd2e#111 | 0           |
| 0x1402bcd39#585 | 0x1402bcd39#116 | 1           |
| 0x1402bcd39#615 | 0x1402bcd39#116 | 2           |
| 0x1402bcd17#923 | 0x1402bcd39#585 | 0           |
| 0x1402bcd19#77  | 0x1402bcd39#585 | 1           |
| 0x1402bcd03#60  | 0x1402bcd39#615 | 0           |
| 0x1402bcd2e#111 | 0x1402bcd39#615 | 1           |
| 0x1402bccea#813 | 0x1402bcd39#820 | 0           |
| 0x1402bccea#880 | 0x1402bcd39#887 | 0           |
| 0x1402bccea#813 | 0x1402bcd3e#826 | 0           |
| 0x1402bcd39#820 | 0x1402bcd3e#826 | 1           |
| 0x1402bcd4d#914 | 0x1402bcd52#198 | 1           |
| 0x1402bccea#813 | 0x1402bcd52#814 | 0           |
| 0x1402bccea#841 | 0x1402bcd52#842 | 0           |
| 0x1402bccea#867 | 0x1402bcd52#868 | 0           |
| 0x1402bccea#880 | 0x1402bcd52#881 | 0           |
| 0x1402bcd52#198 | 0x1402bcd57#203 | 0           |
| 0x1402bcd57#203 | 0x1402bcd59#208 | 1           |
| 0x1402bcd52#868 | 0x1402bcd64#222 | 1           |
| 0x1402bcd64#222 | 0x1402bcd64#223 | 1           |
| 0x1402bcd52#868 | 0x1402bcd66#224 | 0           |
| 0x1402bcd66#224 | 0x1402bcd66#225 | 0           |
| 0x1402bcd66#225 | 0x1402bcd73#231 | 1           |
| 0x1402bcd73#231 | 0x1402bcd7a#240 | 1           |
| 0x1402bcd52#842 | 0x1402bcd7a#922 | 0           |
| 0x1402bcd52#842 | 0x1402bcd7c#241 | 0           |
| 0x1402bcd7c#926 | 0x1402bcd7c#242 | 1           |
| 0x1402bcd7c#241 | 0x1402bcd7c#926 | 0           |
| 0x1402bcd52#842 | 0x1402bcd80#246 | 0           |
| 0x1402bcd7c#242 | 0x1402bcd80#246 | 1           |
| 0x1402bcd80#246 | 0x1402bcd83#255 | 0           |
| 0x1402bcd83#255 | 0x1402bcd8b#272 | 1           |
| 0x1402bcd8b#272 | 0x1402bcd8b#274 | 1           |
| 0x1402bcd52#868 | 0x1402bcd91#275 | 0           |
| 0x1402bcd91#275 | 0x1402bcd91#276 | 0           |
| 0x1402bcd9c#581 | 0x1402bcd9c#281 | 1           |
| 0x1402bcd9c#612 | 0x1402bcd9c#281 | 2           |
| 0x1402bcd7a#922 | 0x1402bcd9c#581 | 0           |
| 0x1402bcd7c#242 | 0x1402bcd9c#581 | 1           |
| 0x1402bcd66#225 | 0x1402bcd9c#612 | 0           |
| 0x1402bcd91#276 | 0x1402bcd9c#612 | 1           |
| 0x1402bcd52#814 | 0x1402bcd9c#817 | 0           |
| 0x1402bcd52#881 | 0x1402bcd9c#884 | 0           |
| 0x1402bcd52#814 | 0x1402bcda1#823 | 0           |
| 0x1402bcd9c#817 | 0x1402bcda1#823 | 1           |
| 0x1402bcdad#915 | 0x1402bcdb2#309 | 1           |
| 0x1402bcd52#814 | 0x1402bcdb2#815 | 0           |
| 0x1402bcd52#842 | 0x1402bcdb2#843 | 0           |
| 0x1402bcd52#868 | 0x1402bcdb2#869 | 0           |
| 0x1402bcd52#881 | 0x1402bcdb2#882 | 0           |
| 0x1402bcdb2#869 | 0x1402bcdc3#325 | 1           |
| 0x1402bcdc3#325 | 0x1402bcdc3#326 | 1           |
| 0x1402bcdb2#869 | 0x1402bcdc5#327 | 0           |
| 0x1402bcdc5#327 | 0x1402bcdc5#328 | 0           |
| 0x1402bcdc5#328 | 0x1402bcdd2#334 | 1           |
| 0x1402bcdd2#334 | 0x1402bcdd9#343 | 1           |
| 0x1402bcdb2#843 | 0x1402bcdd9#921 | 0           |
| 0x1402bcdb2#843 | 0x1402bcddb#344 | 0           |
| 0x1402bcddb#925 | 0x1402bcddb#345 | 1           |
| 0x1402bcddb#344 | 0x1402bcddb#925 | 0           |
| 0x1402bcdb2#843 | 0x1402bcddf#349 | 0           |
| 0x1402bcddb#345 | 0x1402bcddf#349 | 1           |
| 0x1402bcddf#349 | 0x1402bcde2#358 | 0           |
| 0x1402bcde2#358 | 0x1402bcdea#375 | 1           |
| 0x1402bcdea#375 | 0x1402bcdea#377 | 1           |
| 0x1402bcdb2#869 | 0x1402bcdec#378 | 0           |
| 0x1402bcdec#378 | 0x1402bcdec#379 | 0           |
| 0x1402bcdd9#921 | 0x1402bcdf7#580 | 0           |
| 0x1402bcddb#345 | 0x1402bcdf7#580 | 1           |
| 0x1402bcdc5#328 | 0x1402bcdf7#654 | 0           |
| 0x1402bcdec#379 | 0x1402bcdf7#654 | 1           |
| 0x1402bcdf7#580 | 0x1402bcdfa#385 | 1           |
| 0x1402bcdf7#654 | 0x1402bcdfa#385 | 2           |
| 0x1402bcdb2#815 | 0x1402bcdfa#816 | 0           |
| 0x1402bcdb2#882 | 0x1402bcdfa#883 | 0           |
| 0x1402bcd3e#826 | 0x1402bce06#825 | 0           |
| 0x1402bcda1#823 | 0x1402bce06#825 | 1           |
| 0x1402bcdb2#815 | 0x1402bce06#825 | 2           |
| 0x1402bcdfa#816 | 0x1402bce06#825 | 3           |
| 0x1402bcd3e#920 | 0x1402bce06#918 | 0           |
| 0x1402bcda1#919 | 0x1402bce06#918 | 1           |
| 0x1402bcdb2#309 | 0x1402bce06#918 | 2           |
| 0x1402bcdb2#309 | 0x1402bce06#918 | 3           |
| 0x1402bce06#918 | 0x1402bce18#157 | 1           |
| 0x1402bce06#825 | 0x1402bce18#821 | 0           |
| 0x1402bccea#813 | 0x1402bce19#827 | 0           |
| 0x1402bcd52#814 | 0x1402bce19#827 | 1           |
| 0x1402bcdb2#815 | 0x1402bce19#827 | 2           |
| 0x1402bccea#880 | 0x1402bce19#892 | 0           |
| 0x1402bcd52#881 | 0x1402bce19#892 | 1           |
| 0x1402bcdb2#882 | 0x1402bce19#892 | 2           |
| 0x1402bce1e#928 | 0x1402bce1e#160 | 0           |
| 0x1402bce19#827 | 0x1402bce1e#818 | 0           |
| 0x1402bce19#892 | 0x1402bce1e#885 | 0           |
| 0x1402bce1e#159 | 0x1402bce1e#928 | 0           |
| 0x1402bce20#929 | 0x1402bce20#162 | 0           |
| 0x1402bce20#162 | 0x1402bce20#163 | 1           |
| 0x1402bce1e#818 | 0x1402bce20#819 | 0           |
| 0x1402bce20#819 | 0x1402bce20#822 | 0           |
| 0x1402bce1e#885 | 0x1402bce20#886 | 0           |
| 0x1402bce20#161 | 0x1402bce20#929 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1402bccea#29  | direct_call        | 0             |             |
| 0x1402bccf6#43  | conditional_branch |               | 1           |
| 0x1402bcd01#58  | conditional_branch |               | 1           |
| 0x1402bcd17#75  | conditional_branch |               | 1           |
| 0x1402bcd19#77  | memory_read        | 1             |             |
| 0x1402bcd28#109 | conditional_branch |               | 1           |
| 0x1402bcd39#116 | direct_call        | 0             |             |
| 0x1402bcd52#198 | direct_call        | 0             |             |
| 0x1402bcd59#208 | conditional_branch |               | 1           |
| 0x1402bcd64#223 | conditional_branch |               | 1           |
| 0x1402bcd7a#240 | conditional_branch |               | 1           |
| 0x1402bcd7c#242 | memory_read        | 1             |             |
| 0x1402bcd8b#274 | conditional_branch |               | 1           |
| 0x1402bcd9c#281 | direct_call        | 0             |             |
| 0x1402bcdb2#309 | direct_call        | 0             |             |
| 0x1402bcdc3#326 | conditional_branch |               | 1           |
| 0x1402bcdd9#343 | conditional_branch |               | 1           |
| 0x1402bcddb#345 | memory_read        | 1             |             |
| 0x1402bcdea#377 | conditional_branch |               | 1           |
| 0x1402bcdfa#385 | direct_call        | 0             |             |
| 0x1402bce1e#160 | indirect_call      | 0             |             |
| 0x1402bce20#162 | indirect_call      | 0             |             |

## normalized_result.native_value_flow.parameters



## normalized_result.native_value_flow.parameter_uses



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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1402bce20 with no resolved callee; its no-return basis is unknown.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1402bce20 with no resolved callee; its no-return basis is unknown.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

