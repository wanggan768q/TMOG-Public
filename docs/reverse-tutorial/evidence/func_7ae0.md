## evidence_id

ev_2db6e9980fc535e2c9f6547c3a4cd927f048419658ad0dda8357ab31740f7315

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
| procedure | 0x1401f7ae0 |

## raw_result.value.procedure.address

0x1401f7ae0

## raw_result.value.procedure.name

FUN_1401f7ae0

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
| 0x1401f7ae0 | 0x1401f7b67 |
| 0x1401f7b6a | 0x1401f7b84 |

## raw_result.value.procedure.body.total_bytes

163

## raw_result.value.procedure.body.span_bytes

165

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f7ae0()

## raw_result.value.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8 | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8 | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8 | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1401f7ae0(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_58;
  FUN_1401f74f0(local_38);
  if (local_28 != 0) {
    cVar2 = FUN_1401f7bb0(local_38,0,0);
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_1401f7b21;
    }
  }
  uVar3 = 0;
LAB_1401f7b21:
  if (7 < local_20) {
    uVar5 = local_20 * 2 + 2;
    lVar4 = local_38[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_38[0] + -8);
      if (0x1f < (local_38[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uVar5 = local_20 * 2 + 0x29;
    }
    thunk_FUN_140327e20(lVar4,uVar5);
  }
  return uVar3;
}



## raw_result.value.assembly

0x1401f7ae0: PUSH RBX,0x1401f7ae2: SUB RSP, 0x50,0x1401f7ae6: MOV RAX, qword ptr [0x1404c7ac0],0x1401f7aed: XOR RAX, RSP,0x1401f7af0: MOV qword ptr [RSP + 0x40], RAX,0x1401f7af5: LEA RCX, [RSP + 0x20],0x1401f7afa: CALL 0x1401f74f0,0x1401f7aff: NOP,0x1401f7b00: CMP qword ptr [RSP + 0x30], 0x0,0x1401f7b06: JZ 0x1401f7b1f,0x1401f7b08: XOR R8D, R8D,0x1401f7b0b: XOR EDX, EDX,0x1401f7b0d: LEA RCX, [RSP + 0x20],0x1401f7b12: CALL 0x1401f7bb0,0x1401f7b17: TEST AL, AL,0x1401f7b19: JZ 0x1401f7b1f,0x1401f7b1b: MOV BL, 0x1,0x1401f7b1d: JMP 0x1401f7b21,0x1401f7b1f: XOR BL, BL,0x1401f7b21: MOV RAX, qword ptr [RSP + 0x38],0x1401f7b26: CMP RAX, 0x7,0x1401f7b2a: JBE 0x1401f7b63,0x1401f7b2c: LEA RDX, [0x2 + RAX*0x2],0x1401f7b34: MOV RCX, qword ptr [RSP + 0x20],0x1401f7b39: CMP RDX, 0x1000,0x1401f7b40: JC 0x1401f7b5e,0x1401f7b42: MOV R8, qword ptr [RCX + -0x8],0x1401f7b46: SUB RCX, R8,0x1401f7b49: SUB RCX, 0x8,0x1401f7b4d: CMP RCX, 0x1f,0x1401f7b51: JA 0x1401f7b7d,0x1401f7b53: LEA RDX, [0x29 + RAX*0x2],0x1401f7b5b: MOV RCX, R8,0x1401f7b5e: CALL 0x1403272f0,0x1401f7b63: MOVZX EAX, BL,0x1401f7b66: JMP 0x1401f7b6a,0x1401f7b6a: MOV RCX, qword ptr [RSP + 0x40],0x1401f7b6f: XOR RCX, RSP,0x1401f7b72: CALL 0x140327740,0x1401f7b77: ADD RSP, 0x50,0x1401f7b7b: POP RBX,0x1401f7b7c: RET,0x1401f7b7d: MOV ECX, 0x5,0x1401f7b82: INT 0x29,0x1401f7b84: INT3

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140063f50 | FUN_140063f50 | [object Object] | [object Object] |
| 0x140065490 | FUN_140065490 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1401f74f0 | FUN_1401f74f0           | [object Object] | [object Object] |
| 0x1401f7bb0 | FUN_1401f7bb0           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140063fa5    | 0x1401f7ae0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400654d2    | 0x1401f7ae0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f74b0    | 0x1401f7ae0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfb10    | 0x1401f7ae0    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f7ae6    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f7af0    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f7af5    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f7afa    | 0x1401f74f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b00    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f7b06    | 0x1401f7b1f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b0d    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f7b12    | 0x1401f7bb0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b19    | 0x1401f7b1f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b1d    | 0x1401f7b21              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b21    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f7b2a    | 0x1401f7b63              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b34    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f7b40    | 0x1401f7b5e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b51    | 0x1401f7b7d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b5e    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b66    | 0x1401f7b6a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b6a    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f7b72    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1401f74f0 | FUN_1401f74f0           | 0x1401f7afa    |
| 0x1401f7b1f | LAB_1401f7b1f           | 0x1401f7b06    |
| 0x1401f7b1f | LAB_1401f7b1f           | 0x1401f7b19    |
| 0x1401f7b21 | LAB_1401f7b21           | 0x1401f7b1d    |
| 0x1401f7b5e | LAB_1401f7b5e           | 0x1401f7b40    |
| 0x1401f7b63 | LAB_1401f7b63           | 0x1401f7b2a    |
| 0x1401f7b6a | LAB_1401f7b6a           | 0x1401f7b66    |
| 0x1401f7b7d | LAB_1401f7b7d           | 0x1401f7b51    |
| 0x1401f7bb0 | FUN_1401f7bb0           | 0x1401f7b12    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x1401f7b5e    |
| 0x140327740 | __security_check_cookie | 0x1401f7b72    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f7ae6    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f7ae0 | 0x1401f7b08 | 0x1401f7b08,0x1401f7b1f |
| 0x1401f7b08 | 0x1401f7b1b | 0x1401f7b1b,0x1401f7b1f |
| 0x1401f7b1b | 0x1401f7b1f | 0x1401f7b21             |
| 0x1401f7b1f | 0x1401f7b21 | 0x1401f7b21             |
| 0x1401f7b21 | 0x1401f7b2c | 0x1401f7b2c,0x1401f7b63 |
| 0x1401f7b2c | 0x1401f7b42 | 0x1401f7b42,0x1401f7b5e |
| 0x1401f7b42 | 0x1401f7b53 | 0x1401f7b53,0x1401f7b7d |
| 0x1401f7b53 | 0x1401f7b5e | 0x1401f7b5e             |
| 0x1401f7b5e | 0x1401f7b63 | 0x1401f7b63             |
| 0x1401f7b63 | 0x1401f7b68 | 0x1401f7b6a             |
| 0x1401f7b6a | 0x1401f7b7d |                         |
| 0x1401f7b7d | 0x1401f7b85 |                         |

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

undefined8

## raw_result.value.native_api.return_type.size_bytes

8

## raw_result.value.native_api.return_type.storage

RAX:8

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                       |
|------------------|-------------------------|----------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.        |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined8. |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x1401f7ae2#467 | 0x1401f7ae2 | 467      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7aed#15  | 0x1401f7aed | 15       | INT_XOR      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7aed#471 | 0x1401f7aed | 471      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7af5#468 | 0x1401f7af5 | 468      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7afa#29  | 0x1401f7afa | 29       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7afa#405 | 0x1401f7afa | 405      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7afa#423 | 0x1401f7afa | 423      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7afa#431 | 0x1401f7afa | 431      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7afa#439 | 0x1401f7afa | 439      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7afa#447 | 0x1401f7afa | 447      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b00#37  | 0x1401f7b00 | 37       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b06#42  | 0x1401f7b06 | 42       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b0d#469 | 0x1401f7b0d | 469      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b12#67  | 0x1401f7b12 | 67       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7b12#406 | 0x1401f7b12 | 406      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b12#424 | 0x1401f7b12 | 424      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b12#440 | 0x1401f7b12 | 440      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b12#448 | 0x1401f7b12 | 448      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b17#72  | 0x1401f7b17 | 72       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b19#77  | 0x1401f7b19 | 77       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b1b#313 | 0x1401f7b1b | 313      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b1d#79  | 0x1401f7b1d | 79       | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f7b1f#315 | 0x1401f7b1f | 315      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b1f#413 | 0x1401f7b1f | 413      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b1f#429 | 0x1401f7b1f | 429      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b1f#445 | 0x1401f7b1f | 445      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b1f#453 | 0x1401f7b1f | 453      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b21#316 | 0x1401f7b21 | 316      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b21#414 | 0x1401f7b21 | 414      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b21#430 | 0x1401f7b21 | 430      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b21#446 | 0x1401f7b21 | 446      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b21#454 | 0x1401f7b21 | 454      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b2a#93  | 0x1401f7b2a | 93       | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b2a#94  | 0x1401f7b2a | 94       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b2c#95  | 0x1401f7b2c | 95       | INT_MULT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b2c#96  | 0x1401f7b2c | 96       | INT_ADD      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b39#102 | 0x1401f7b39 | 102      | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b40#111 | 0x1401f7b40 | 111      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b40#470 | 0x1401f7b40 | 470      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b42#112 | 0x1401f7b42 | 112      | INT_ADD      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b42#113 | 0x1401f7b42 | 113      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b42#472 | 0x1401f7b42 | 472      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b46#117 | 0x1401f7b46 | 117      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b49#126 | 0x1401f7b49 | 126      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b51#143 | 0x1401f7b51 | 143      | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b51#145 | 0x1401f7b51 | 145      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b53#146 | 0x1401f7b53 | 146      | INT_MULT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b53#147 | 0x1401f7b53 | 147      | INT_ADD      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b5e#152 | 0x1401f7b5e | 152      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f7b5e#285 | 0x1401f7b5e | 285      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b5e#302 | 0x1401f7b5e | 302      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b5e#409 | 0x1401f7b5e | 409      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b5e#451 | 0x1401f7b5e | 451      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b63#154 | 0x1401f7b63 | 154      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b63#412 | 0x1401f7b63 | 412      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b7c#186 | 0x1401f7b7c | 186      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b7c#410 | 0x1401f7b7c | 410      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b82#188 | 0x1401f7b82 | 188      | CALLOTHER    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b82#189 | 0x1401f7b82 | 189      | CALLIND      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b82#407 | 0x1401f7b82 | 407      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b82#449 | 0x1401f7b82 | 449      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b82#473 | 0x1401f7b82 | 473      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b84#190 | 0x1401f7b84 | 190      | CALLOTHER    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b84#191 | 0x1401f7b84 | 191      | CALLIND      | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b84#192 | 0x1401f7b84 | 192      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b84#408 | 0x1401f7b84 | 408      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b84#411 | 0x1401f7b84 | 411      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b84#450 | 0x1401f7b84 | 450      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b84#474 | 0x1401f7b84 | 474      | CAST         | true    | member           | [object Object]                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f7aed#471 | 0x1401f7aed#15  | 1           |
| 0x1401f7ae2#467 | 0x1401f7aed#471 | 0           |
| 0x1401f7af5#468 | 0x1401f7afa#29  | 1           |
| 0x1401f7aed#15  | 0x1401f7afa#447 | 0           |
| 0x1401f7afa#431 | 0x1401f7b00#37  | 0           |
| 0x1401f7b00#37  | 0x1401f7b06#42  | 1           |
| 0x1401f7b0d#469 | 0x1401f7b12#67  | 1           |
| 0x1401f7afa#405 | 0x1401f7b12#406 | 0           |
| 0x1401f7afa#423 | 0x1401f7b12#424 | 0           |
| 0x1401f7afa#439 | 0x1401f7b12#440 | 0           |
| 0x1401f7afa#447 | 0x1401f7b12#448 | 0           |
| 0x1401f7b12#67  | 0x1401f7b17#72  | 0           |
| 0x1401f7b17#72  | 0x1401f7b19#77  | 1           |
| 0x1401f7afa#405 | 0x1401f7b1f#413 | 0           |
| 0x1401f7b12#406 | 0x1401f7b1f#413 | 1           |
| 0x1401f7afa#423 | 0x1401f7b1f#429 | 0           |
| 0x1401f7b12#424 | 0x1401f7b1f#429 | 1           |
| 0x1401f7afa#439 | 0x1401f7b1f#445 | 0           |
| 0x1401f7b12#440 | 0x1401f7b1f#445 | 1           |
| 0x1401f7afa#447 | 0x1401f7b1f#453 | 0           |
| 0x1401f7b12#448 | 0x1401f7b1f#453 | 1           |
| 0x1401f7b1b#313 | 0x1401f7b21#316 | 0           |
| 0x1401f7b1f#315 | 0x1401f7b21#316 | 1           |
| 0x1401f7b12#406 | 0x1401f7b21#414 | 0           |
| 0x1401f7b1f#413 | 0x1401f7b21#414 | 1           |
| 0x1401f7b12#424 | 0x1401f7b21#430 | 0           |
| 0x1401f7b1f#429 | 0x1401f7b21#430 | 1           |
| 0x1401f7b12#440 | 0x1401f7b21#446 | 0           |
| 0x1401f7b1f#445 | 0x1401f7b21#446 | 1           |
| 0x1401f7b12#448 | 0x1401f7b21#454 | 0           |
| 0x1401f7b1f#453 | 0x1401f7b21#454 | 1           |
| 0x1401f7b21#446 | 0x1401f7b2a#93  | 1           |
| 0x1401f7b2a#93  | 0x1401f7b2a#94  | 1           |
| 0x1401f7b21#446 | 0x1401f7b2c#95  | 0           |
| 0x1401f7b2c#95  | 0x1401f7b2c#96  | 0           |
| 0x1401f7b2c#96  | 0x1401f7b39#102 | 1           |
| 0x1401f7b39#102 | 0x1401f7b40#111 | 1           |
| 0x1401f7b21#430 | 0x1401f7b40#470 | 0           |
| 0x1401f7b21#430 | 0x1401f7b42#112 | 0           |
| 0x1401f7b42#472 | 0x1401f7b42#113 | 1           |
| 0x1401f7b42#112 | 0x1401f7b42#472 | 0           |
| 0x1401f7b21#430 | 0x1401f7b46#117 | 0           |
| 0x1401f7b42#113 | 0x1401f7b46#117 | 1           |
| 0x1401f7b46#117 | 0x1401f7b49#126 | 0           |
| 0x1401f7b49#126 | 0x1401f7b51#143 | 1           |
| 0x1401f7b51#143 | 0x1401f7b51#145 | 1           |
| 0x1401f7b21#446 | 0x1401f7b53#146 | 0           |
| 0x1401f7b53#146 | 0x1401f7b53#147 | 0           |
| 0x1401f7b5e#285 | 0x1401f7b5e#152 | 1           |
| 0x1401f7b5e#302 | 0x1401f7b5e#152 | 2           |
| 0x1401f7b40#470 | 0x1401f7b5e#285 | 0           |
| 0x1401f7b42#113 | 0x1401f7b5e#285 | 1           |
| 0x1401f7b2c#96  | 0x1401f7b5e#302 | 0           |
| 0x1401f7b53#147 | 0x1401f7b5e#302 | 1           |
| 0x1401f7b21#414 | 0x1401f7b5e#409 | 0           |
| 0x1401f7b21#454 | 0x1401f7b5e#451 | 0           |
| 0x1401f7b21#316 | 0x1401f7b63#154 | 0           |
| 0x1401f7b21#414 | 0x1401f7b63#412 | 0           |
| 0x1401f7b5e#409 | 0x1401f7b63#412 | 1           |
| 0x1401f7b63#154 | 0x1401f7b7c#186 | 1           |
| 0x1401f7b63#412 | 0x1401f7b7c#410 | 0           |
| 0x1401f7b82#473 | 0x1401f7b82#189 | 0           |
| 0x1401f7b21#414 | 0x1401f7b82#407 | 0           |
| 0x1401f7b21#454 | 0x1401f7b82#449 | 0           |
| 0x1401f7b82#188 | 0x1401f7b82#473 | 0           |
| 0x1401f7b84#474 | 0x1401f7b84#191 | 0           |
| 0x1401f7b84#191 | 0x1401f7b84#192 | 1           |
| 0x1401f7b82#407 | 0x1401f7b84#408 | 0           |
| 0x1401f7b84#408 | 0x1401f7b84#411 | 0           |
| 0x1401f7b82#449 | 0x1401f7b84#450 | 0           |
| 0x1401f7b84#190 | 0x1401f7b84#474 | 0           |

## raw_result.value.native_value_flow.parameters



## raw_result.value.native_value_flow.parameter_uses



## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f7afa#29  | direct_call        | 0             |             |
| 0x1401f7b06#42  | conditional_branch |               | 1           |
| 0x1401f7b12#67  | direct_call        | 0             |             |
| 0x1401f7b19#77  | conditional_branch |               | 1           |
| 0x1401f7b2a#94  | conditional_branch |               | 1           |
| 0x1401f7b40#111 | conditional_branch |               | 1           |
| 0x1401f7b42#113 | memory_read        | 1             |             |
| 0x1401f7b51#145 | conditional_branch |               | 1           |
| 0x1401f7b5e#152 | direct_call        | 0             |             |
| 0x1401f7b82#189 | indirect_call      | 0             |             |
| 0x1401f7b84#191 | indirect_call      | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f7b84 with no resolved callee; its no-return basis is unknown.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401f7b84 with no resolved callee; its no-return basis is unknown.

## normalized_result.procedure.address

0x1401f7ae0

## normalized_result.procedure.name

FUN_1401f7ae0

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
| 0x1401f7ae0 | 0x1401f7b67 |
| 0x1401f7b6a | 0x1401f7b84 |

## normalized_result.procedure.body.total_bytes

163

## normalized_result.procedure.body.span_bytes

165

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f7ae0()

## normalized_result.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8 | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8 | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8 | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1401f7ae0(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_58;
  FUN_1401f74f0(local_38);
  if (local_28 != 0) {
    cVar2 = FUN_1401f7bb0(local_38,0,0);
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_1401f7b21;
    }
  }
  uVar3 = 0;
LAB_1401f7b21:
  if (7 < local_20) {
    uVar5 = local_20 * 2 + 2;
    lVar4 = local_38[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_38[0] + -8);
      if (0x1f < (local_38[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uVar5 = local_20 * 2 + 0x29;
    }
    thunk_FUN_140327e20(lVar4,uVar5);
  }
  return uVar3;
}



## normalized_result.assembly

0x1401f7ae0: PUSH RBX,0x1401f7ae2: SUB RSP, 0x50,0x1401f7ae6: MOV RAX, qword ptr [0x1404c7ac0],0x1401f7aed: XOR RAX, RSP,0x1401f7af0: MOV qword ptr [RSP + 0x40], RAX,0x1401f7af5: LEA RCX, [RSP + 0x20],0x1401f7afa: CALL 0x1401f74f0,0x1401f7aff: NOP,0x1401f7b00: CMP qword ptr [RSP + 0x30], 0x0,0x1401f7b06: JZ 0x1401f7b1f,0x1401f7b08: XOR R8D, R8D,0x1401f7b0b: XOR EDX, EDX,0x1401f7b0d: LEA RCX, [RSP + 0x20],0x1401f7b12: CALL 0x1401f7bb0,0x1401f7b17: TEST AL, AL,0x1401f7b19: JZ 0x1401f7b1f,0x1401f7b1b: MOV BL, 0x1,0x1401f7b1d: JMP 0x1401f7b21,0x1401f7b1f: XOR BL, BL,0x1401f7b21: MOV RAX, qword ptr [RSP + 0x38],0x1401f7b26: CMP RAX, 0x7,0x1401f7b2a: JBE 0x1401f7b63,0x1401f7b2c: LEA RDX, [0x2 + RAX*0x2],0x1401f7b34: MOV RCX, qword ptr [RSP + 0x20],0x1401f7b39: CMP RDX, 0x1000,0x1401f7b40: JC 0x1401f7b5e,0x1401f7b42: MOV R8, qword ptr [RCX + -0x8],0x1401f7b46: SUB RCX, R8,0x1401f7b49: SUB RCX, 0x8,0x1401f7b4d: CMP RCX, 0x1f,0x1401f7b51: JA 0x1401f7b7d,0x1401f7b53: LEA RDX, [0x29 + RAX*0x2],0x1401f7b5b: MOV RCX, R8,0x1401f7b5e: CALL 0x1403272f0,0x1401f7b63: MOVZX EAX, BL,0x1401f7b66: JMP 0x1401f7b6a,0x1401f7b6a: MOV RCX, qword ptr [RSP + 0x40],0x1401f7b6f: XOR RCX, RSP,0x1401f7b72: CALL 0x140327740,0x1401f7b77: ADD RSP, 0x50,0x1401f7b7b: POP RBX,0x1401f7b7c: RET,0x1401f7b7d: MOV ECX, 0x5,0x1401f7b82: INT 0x29,0x1401f7b84: INT3

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140063f50 | FUN_140063f50 | [object Object] | [object Object] |
| 0x140065490 | FUN_140065490 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1401f74f0 | FUN_1401f74f0           | [object Object] | [object Object] |
| 0x1401f7bb0 | FUN_1401f7bb0           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140063fa5    | 0x1401f7ae0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400654d2    | 0x1401f7ae0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f74b0    | 0x1401f7ae0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfb10    | 0x1401f7ae0    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f7ae6    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f7af0    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f7af5    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f7afa    | 0x1401f74f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b00    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f7b06    | 0x1401f7b1f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b0d    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f7b12    | 0x1401f7bb0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b19    | 0x1401f7b1f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b1d    | 0x1401f7b21              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b21    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f7b2a    | 0x1401f7b63              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b34    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f7b40    | 0x1401f7b5e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b51    | 0x1401f7b7d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b5e    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b66    | 0x1401f7b6a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7b6a    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f7b72    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1401f74f0 | FUN_1401f74f0           | 0x1401f7afa    |
| 0x1401f7b1f | LAB_1401f7b1f           | 0x1401f7b06    |
| 0x1401f7b1f | LAB_1401f7b1f           | 0x1401f7b19    |
| 0x1401f7b21 | LAB_1401f7b21           | 0x1401f7b1d    |
| 0x1401f7b5e | LAB_1401f7b5e           | 0x1401f7b40    |
| 0x1401f7b63 | LAB_1401f7b63           | 0x1401f7b2a    |
| 0x1401f7b6a | LAB_1401f7b6a           | 0x1401f7b66    |
| 0x1401f7b7d | LAB_1401f7b7d           | 0x1401f7b51    |
| 0x1401f7bb0 | FUN_1401f7bb0           | 0x1401f7b12    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x1401f7b5e    |
| 0x140327740 | __security_check_cookie | 0x1401f7b72    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f7ae6    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f7ae0 | 0x1401f7b08 | 0x1401f7b08,0x1401f7b1f |
| 0x1401f7b08 | 0x1401f7b1b | 0x1401f7b1b,0x1401f7b1f |
| 0x1401f7b1b | 0x1401f7b1f | 0x1401f7b21             |
| 0x1401f7b1f | 0x1401f7b21 | 0x1401f7b21             |
| 0x1401f7b21 | 0x1401f7b2c | 0x1401f7b2c,0x1401f7b63 |
| 0x1401f7b2c | 0x1401f7b42 | 0x1401f7b42,0x1401f7b5e |
| 0x1401f7b42 | 0x1401f7b53 | 0x1401f7b53,0x1401f7b7d |
| 0x1401f7b53 | 0x1401f7b5e | 0x1401f7b5e             |
| 0x1401f7b5e | 0x1401f7b63 | 0x1401f7b63             |
| 0x1401f7b63 | 0x1401f7b68 | 0x1401f7b6a             |
| 0x1401f7b6a | 0x1401f7b7d |                         |
| 0x1401f7b7d | 0x1401f7b85 |                         |

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

undefined8

## normalized_result.native_api.return_type.size_bytes

8

## normalized_result.native_api.return_type.storage

RAX:8

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                       |
|------------------|-------------------------|----------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.        |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined8. |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x1401f7ae2#467 | 0x1401f7ae2 | 467      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7aed#15  | 0x1401f7aed | 15       | INT_XOR      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7aed#471 | 0x1401f7aed | 471      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7af5#468 | 0x1401f7af5 | 468      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7afa#29  | 0x1401f7afa | 29       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7afa#405 | 0x1401f7afa | 405      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7afa#423 | 0x1401f7afa | 423      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7afa#431 | 0x1401f7afa | 431      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7afa#439 | 0x1401f7afa | 439      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7afa#447 | 0x1401f7afa | 447      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b00#37  | 0x1401f7b00 | 37       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b06#42  | 0x1401f7b06 | 42       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b0d#469 | 0x1401f7b0d | 469      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b12#67  | 0x1401f7b12 | 67       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7b12#406 | 0x1401f7b12 | 406      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b12#424 | 0x1401f7b12 | 424      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b12#440 | 0x1401f7b12 | 440      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b12#448 | 0x1401f7b12 | 448      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b17#72  | 0x1401f7b17 | 72       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b19#77  | 0x1401f7b19 | 77       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b1b#313 | 0x1401f7b1b | 313      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b1d#79  | 0x1401f7b1d | 79       | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f7b1f#315 | 0x1401f7b1f | 315      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b1f#413 | 0x1401f7b1f | 413      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b1f#429 | 0x1401f7b1f | 429      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b1f#445 | 0x1401f7b1f | 445      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b1f#453 | 0x1401f7b1f | 453      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b21#316 | 0x1401f7b21 | 316      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b21#414 | 0x1401f7b21 | 414      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b21#430 | 0x1401f7b21 | 430      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b21#446 | 0x1401f7b21 | 446      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b21#454 | 0x1401f7b21 | 454      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b2a#93  | 0x1401f7b2a | 93       | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b2a#94  | 0x1401f7b2a | 94       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b2c#95  | 0x1401f7b2c | 95       | INT_MULT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b2c#96  | 0x1401f7b2c | 96       | INT_ADD      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b39#102 | 0x1401f7b39 | 102      | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b40#111 | 0x1401f7b40 | 111      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b40#470 | 0x1401f7b40 | 470      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b42#112 | 0x1401f7b42 | 112      | INT_ADD      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b42#113 | 0x1401f7b42 | 113      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b42#472 | 0x1401f7b42 | 472      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b46#117 | 0x1401f7b46 | 117      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b49#126 | 0x1401f7b49 | 126      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b51#143 | 0x1401f7b51 | 143      | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b51#145 | 0x1401f7b51 | 145      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b53#146 | 0x1401f7b53 | 146      | INT_MULT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b53#147 | 0x1401f7b53 | 147      | INT_ADD      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b5e#152 | 0x1401f7b5e | 152      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f7b5e#285 | 0x1401f7b5e | 285      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b5e#302 | 0x1401f7b5e | 302      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b5e#409 | 0x1401f7b5e | 409      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b5e#451 | 0x1401f7b5e | 451      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b63#154 | 0x1401f7b63 | 154      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b63#412 | 0x1401f7b63 | 412      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b7c#186 | 0x1401f7b7c | 186      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b7c#410 | 0x1401f7b7c | 410      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b82#188 | 0x1401f7b82 | 188      | CALLOTHER    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b82#189 | 0x1401f7b82 | 189      | CALLIND      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b82#407 | 0x1401f7b82 | 407      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b82#449 | 0x1401f7b82 | 449      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b82#473 | 0x1401f7b82 | 473      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b84#190 | 0x1401f7b84 | 190      | CALLOTHER    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b84#191 | 0x1401f7b84 | 191      | CALLIND      | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b84#192 | 0x1401f7b84 | 192      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f7b84#408 | 0x1401f7b84 | 408      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b84#411 | 0x1401f7b84 | 411      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f7b84#450 | 0x1401f7b84 | 450      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f7b84#474 | 0x1401f7b84 | 474      | CAST         | true    | member           | [object Object]                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f7aed#471 | 0x1401f7aed#15  | 1           |
| 0x1401f7ae2#467 | 0x1401f7aed#471 | 0           |
| 0x1401f7af5#468 | 0x1401f7afa#29  | 1           |
| 0x1401f7aed#15  | 0x1401f7afa#447 | 0           |
| 0x1401f7afa#431 | 0x1401f7b00#37  | 0           |
| 0x1401f7b00#37  | 0x1401f7b06#42  | 1           |
| 0x1401f7b0d#469 | 0x1401f7b12#67  | 1           |
| 0x1401f7afa#405 | 0x1401f7b12#406 | 0           |
| 0x1401f7afa#423 | 0x1401f7b12#424 | 0           |
| 0x1401f7afa#439 | 0x1401f7b12#440 | 0           |
| 0x1401f7afa#447 | 0x1401f7b12#448 | 0           |
| 0x1401f7b12#67  | 0x1401f7b17#72  | 0           |
| 0x1401f7b17#72  | 0x1401f7b19#77  | 1           |
| 0x1401f7afa#405 | 0x1401f7b1f#413 | 0           |
| 0x1401f7b12#406 | 0x1401f7b1f#413 | 1           |
| 0x1401f7afa#423 | 0x1401f7b1f#429 | 0           |
| 0x1401f7b12#424 | 0x1401f7b1f#429 | 1           |
| 0x1401f7afa#439 | 0x1401f7b1f#445 | 0           |
| 0x1401f7b12#440 | 0x1401f7b1f#445 | 1           |
| 0x1401f7afa#447 | 0x1401f7b1f#453 | 0           |
| 0x1401f7b12#448 | 0x1401f7b1f#453 | 1           |
| 0x1401f7b1b#313 | 0x1401f7b21#316 | 0           |
| 0x1401f7b1f#315 | 0x1401f7b21#316 | 1           |
| 0x1401f7b12#406 | 0x1401f7b21#414 | 0           |
| 0x1401f7b1f#413 | 0x1401f7b21#414 | 1           |
| 0x1401f7b12#424 | 0x1401f7b21#430 | 0           |
| 0x1401f7b1f#429 | 0x1401f7b21#430 | 1           |
| 0x1401f7b12#440 | 0x1401f7b21#446 | 0           |
| 0x1401f7b1f#445 | 0x1401f7b21#446 | 1           |
| 0x1401f7b12#448 | 0x1401f7b21#454 | 0           |
| 0x1401f7b1f#453 | 0x1401f7b21#454 | 1           |
| 0x1401f7b21#446 | 0x1401f7b2a#93  | 1           |
| 0x1401f7b2a#93  | 0x1401f7b2a#94  | 1           |
| 0x1401f7b21#446 | 0x1401f7b2c#95  | 0           |
| 0x1401f7b2c#95  | 0x1401f7b2c#96  | 0           |
| 0x1401f7b2c#96  | 0x1401f7b39#102 | 1           |
| 0x1401f7b39#102 | 0x1401f7b40#111 | 1           |
| 0x1401f7b21#430 | 0x1401f7b40#470 | 0           |
| 0x1401f7b21#430 | 0x1401f7b42#112 | 0           |
| 0x1401f7b42#472 | 0x1401f7b42#113 | 1           |
| 0x1401f7b42#112 | 0x1401f7b42#472 | 0           |
| 0x1401f7b21#430 | 0x1401f7b46#117 | 0           |
| 0x1401f7b42#113 | 0x1401f7b46#117 | 1           |
| 0x1401f7b46#117 | 0x1401f7b49#126 | 0           |
| 0x1401f7b49#126 | 0x1401f7b51#143 | 1           |
| 0x1401f7b51#143 | 0x1401f7b51#145 | 1           |
| 0x1401f7b21#446 | 0x1401f7b53#146 | 0           |
| 0x1401f7b53#146 | 0x1401f7b53#147 | 0           |
| 0x1401f7b5e#285 | 0x1401f7b5e#152 | 1           |
| 0x1401f7b5e#302 | 0x1401f7b5e#152 | 2           |
| 0x1401f7b40#470 | 0x1401f7b5e#285 | 0           |
| 0x1401f7b42#113 | 0x1401f7b5e#285 | 1           |
| 0x1401f7b2c#96  | 0x1401f7b5e#302 | 0           |
| 0x1401f7b53#147 | 0x1401f7b5e#302 | 1           |
| 0x1401f7b21#414 | 0x1401f7b5e#409 | 0           |
| 0x1401f7b21#454 | 0x1401f7b5e#451 | 0           |
| 0x1401f7b21#316 | 0x1401f7b63#154 | 0           |
| 0x1401f7b21#414 | 0x1401f7b63#412 | 0           |
| 0x1401f7b5e#409 | 0x1401f7b63#412 | 1           |
| 0x1401f7b63#154 | 0x1401f7b7c#186 | 1           |
| 0x1401f7b63#412 | 0x1401f7b7c#410 | 0           |
| 0x1401f7b82#473 | 0x1401f7b82#189 | 0           |
| 0x1401f7b21#414 | 0x1401f7b82#407 | 0           |
| 0x1401f7b21#454 | 0x1401f7b82#449 | 0           |
| 0x1401f7b82#188 | 0x1401f7b82#473 | 0           |
| 0x1401f7b84#474 | 0x1401f7b84#191 | 0           |
| 0x1401f7b84#191 | 0x1401f7b84#192 | 1           |
| 0x1401f7b82#407 | 0x1401f7b84#408 | 0           |
| 0x1401f7b84#408 | 0x1401f7b84#411 | 0           |
| 0x1401f7b82#449 | 0x1401f7b84#450 | 0           |
| 0x1401f7b84#190 | 0x1401f7b84#474 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f7afa#29  | direct_call        | 0             |             |
| 0x1401f7b06#42  | conditional_branch |               | 1           |
| 0x1401f7b12#67  | direct_call        | 0             |             |
| 0x1401f7b19#77  | conditional_branch |               | 1           |
| 0x1401f7b2a#94  | conditional_branch |               | 1           |
| 0x1401f7b40#111 | conditional_branch |               | 1           |
| 0x1401f7b42#113 | memory_read        | 1             |             |
| 0x1401f7b51#145 | conditional_branch |               | 1           |
| 0x1401f7b5e#152 | direct_call        | 0             |             |
| 0x1401f7b82#189 | indirect_call      | 0             |             |
| 0x1401f7b84#191 | indirect_call      | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f7b84 with no resolved callee; its no-return basis is unknown.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401f7b84 with no resolved callee; its no-return basis is unknown.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

