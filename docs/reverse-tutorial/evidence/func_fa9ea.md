## evidence_id

ev_57242342f50d119319ce9e413244f6e32dec929d526c8ed7a833d045bb46b7b9

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
| procedure | 0x1401fa9ea |

## raw_result.value.procedure.address

0x1401fa910

## raw_result.value.procedure.name

FUN_1401fa910

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
| 0x1401fa910 | 0x1401faa3d |

## raw_result.value.procedure.body.total_bytes

302

## raw_result.value.procedure.body.span_bytes

302

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401fa910()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_38 @ Stack[-0x38]:8   | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8   | ghidra-function-database |
| undefined4 local_48 @ Stack[-0x48]:4   | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## raw_result.value.pseudocode


longlong * FUN_1401fa910(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  piVar2 = (int *)FUN_1403272a0(0x20);
  piVar4 = piVar5;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 1;
    piVar2[1] = 2;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar4 = piVar2;
  }
  param_1[2] = (longlong)piVar4;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  piVar2 = (int *)FUN_1403272a0(0x58);
  if (piVar2 != (int *)0x0) {
    *(int **)piVar2 = piVar4;
    *(undefined8 *)(piVar2 + 2) = *param_2;
    *(undefined8 *)(piVar2 + 4) = param_2[1];
    FUN_140002a80(piVar2 + 6,param_2 + 2);
    FUN_140002a80(piVar2 + 0xe,param_2 + 6);
    piVar4 = piVar5;
    piVar5 = piVar2;
  }
  lVar3 = FUN_140338744(0,0,FUN_1401faa40,piVar5,0,param_1 + 1);
  *param_1 = lVar3;
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_140325560(6);
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      thunk_FUN_140327e20(piVar4,0x20);
    }
  }
  return param_1;
}



## raw_result.value.assembly

0x1401fa910: MOV qword ptr [RSP + 0x8], RCX,0x1401fa915: PUSH RBX,0x1401fa916: PUSH RBP,0x1401fa917: PUSH RSI,0x1401fa918: PUSH RDI,0x1401fa919: PUSH R14,0x1401fa91b: SUB RSP, 0x40,0x1401fa91f: MOV R14, RDX,0x1401fa922: MOV RSI, RCX,0x1401fa925: XOR EBP, EBP,0x1401fa927: XORPS XMM0, XMM0,0x1401fa92a: MOVUPS xmmword ptr [RCX], XMM0,0x1401fa92d: MOV ECX, 0x20,0x1401fa932: CALL 0x1403272a0,0x1401fa937: MOV RBX, RAX,0x1401fa93a: TEST RAX, RAX,0x1401fa93d: JZ 0x1401fa95b,0x1401fa93f: MOV dword ptr [RAX], 0x1,0x1401fa945: MOV dword ptr [RAX + 0x4], 0x2,0x1401fa94c: XOR EAX, EAX,0x1401fa94e: MOV qword ptr [RBX + 0x8], RAX,0x1401fa952: MOV qword ptr [RBX + 0x10], RBP,0x1401fa956: MOV dword ptr [RBX + 0x18], EBP,0x1401fa959: JMP 0x1401fa95e,0x1401fa95b: MOV RBX, RBP,0x1401fa95e: MOV qword ptr [RSI + 0x10], RBX,0x1401fa962: TEST RBX, RBX,0x1401fa965: JZ 0x1401fa96a,0x1401fa967: INC.LOCK dword ptr [RBX],0x1401fa96a: MOV qword ptr [RSP + 0x80], RBX,0x1401fa972: MOV ECX, 0x58,0x1401fa977: CALL 0x1403272a0,0x1401fa97c: MOV RDI, RAX,0x1401fa97f: MOV qword ptr [RSP + 0x88], RAX,0x1401fa987: TEST RAX, RAX,0x1401fa98a: JZ 0x1401fa9cf,0x1401fa98c: MOV qword ptr [RSP + 0x80], RBP,0x1401fa994: MOV qword ptr [RAX], RBX,0x1401fa997: LEA RBX, [RAX + 0x8],0x1401fa99b: MOV qword ptr [RSP + 0x30], RBX,0x1401fa9a0: MOV RAX, qword ptr [R14],0x1401fa9a3: MOV qword ptr [RBX], RAX,0x1401fa9a6: MOV RAX, qword ptr [R14 + 0x8],0x1401fa9aa: MOV qword ptr [RBX + 0x8], RAX,0x1401fa9ae: LEA RCX, [RBX + 0x10],0x1401fa9b2: LEA RDX, [R14 + 0x10],0x1401fa9b6: CALL 0x140002a80,0x1401fa9bb: NOP,0x1401fa9bc: LEA RCX, [RBX + 0x30],0x1401fa9c0: LEA RDX, [R14 + 0x30],0x1401fa9c4: CALL 0x140002a80,0x1401fa9c9: NOP,0x1401fa9ca: MOV RBX, RBP,0x1401fa9cd: JMP 0x1401fa9d2,0x1401fa9cf: MOV RDI, RBP,0x1401fa9d2: MOV qword ptr [RSP + 0x88], RDI,0x1401fa9da: LEA R14, [RSI + 0x8],0x1401fa9de: MOV qword ptr [RSP + 0x28], R14,0x1401fa9e3: MOV dword ptr [RSP + 0x20], EBP,0x1401fa9e7: MOV R9, RDI,0x1401fa9ea: LEA R8, [0x1401faa40],0x1401fa9f1: XOR EDX, EDX,0x1401fa9f3: XOR ECX, ECX,0x1401fa9f5: CALL 0x140338744,0x1401fa9fa: MOV qword ptr [RSI], RAX,0x1401fa9fd: TEST RAX, RAX,0x1401faa00: JZ 0x1401faa31,0x1401faa02: TEST RBX, RBX,0x1401faa05: JZ 0x1401faa23,0x1401faa07: MOV EAX, 0xffffffff,0x1401faa0c: XADD.LOCK dword ptr [RBX], EAX,0x1401faa10: CMP EAX, 0x1,0x1401faa13: JNZ 0x1401faa23,0x1401faa15: MOV EDX, 0x20,0x1401faa1a: MOV RCX, RBX,0x1401faa1d: CALL 0x1403272f0,0x1401faa22: NOP,0x1401faa23: MOV RAX, RSI,0x1401faa26: ADD RSP, 0x40,0x1401faa2a: POP R14,0x1401faa2c: POP RDI,0x1401faa2d: POP RSI,0x1401faa2e: POP RBP,0x1401faa2f: POP RBX,0x1401faa30: RET,0x1401faa31: MOV dword ptr [R14], EBP,0x1401faa34: MOV ECX, 0x6,0x1401faa39: CALL 0x140325560

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401fb2b0 | FUN_1401fb2b0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x140002a80 | FUN_140002a80       | [object Object] | [object Object] |
| 0x140325560 | FUN_140325560       | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0       | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20 | [object Object] | [object Object] |
| 0x140338744 | FUN_140338744       | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401fb6c6    | 0x1401fa910    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfcf0    | 0x1401fa910    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401fa910    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401fa932    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa93d    | 0x1401fa95b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa959    | 0x1401fa95e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa965    | 0x1401fa96a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa96a    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401fa977    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa97f    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401fa98a    | 0x1401fa9cf              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa98c    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401fa99b    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401fa9b6    | 0x140002a80              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa9c4    | 0x140002a80              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa9cd    | 0x1401fa9d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa9d2    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401fa9de    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401fa9e3    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401fa9ea    | 0x1401faa40              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa9f5    | 0x140338744              | [object Object]  | [object Object]  | [object Object] |
| 0x1401faa00    | 0x1401faa31              | [object Object]  | [object Object]  | [object Object] |
| 0x1401faa05    | 0x1401faa23              | [object Object]  | [object Object]  | [object Object] |
| 0x1401faa13    | 0x1401faa23              | [object Object]  | [object Object]  | [object Object] |
| 0x1401faa1d    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401faa39    | 0x140325560              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value               | source_address |
|-------------|---------------------|----------------|
| 0x140002a80 | FUN_140002a80       | 0x1401fa9b6    |
| 0x140002a80 | FUN_140002a80       | 0x1401fa9c4    |
| 0x1401fa95b | LAB_1401fa95b       | 0x1401fa93d    |
| 0x1401fa95e | LAB_1401fa95e       | 0x1401fa959    |
| 0x1401fa96a | LAB_1401fa96a       | 0x1401fa965    |
| 0x1401fa9cf | LAB_1401fa9cf       | 0x1401fa98a    |
| 0x1401fa9d2 | LAB_1401fa9d2       | 0x1401fa9cd    |
| 0x1401faa23 | LAB_1401faa23       | 0x1401faa05    |
| 0x1401faa23 | LAB_1401faa23       | 0x1401faa13    |
| 0x1401faa31 | LAB_1401faa31       | 0x1401faa00    |
| 0x1401faa40 | FUN_1401faa40       | 0x1401fa9ea    |
| 0x140325560 | FUN_140325560       | 0x1401faa39    |
| 0x1403272a0 | FUN_1403272a0       | 0x1401fa932    |
| 0x1403272a0 | FUN_1403272a0       | 0x1401fa977    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x1401faa1d    |
| 0x140338744 | FUN_140338744       | 0x1401fa9f5    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401fa910 | 0x1401fa93f | 0x1401fa93f,0x1401fa95b |
| 0x1401fa93f | 0x1401fa95b | 0x1401fa95e             |
| 0x1401fa95b | 0x1401fa95e | 0x1401fa95e             |
| 0x1401fa95e | 0x1401fa967 | 0x1401fa967,0x1401fa96a |
| 0x1401fa967 | 0x1401fa96a | 0x1401fa96a             |
| 0x1401fa96a | 0x1401fa98c | 0x1401fa98c,0x1401fa9cf |
| 0x1401fa98c | 0x1401fa9cf | 0x1401fa9d2             |
| 0x1401fa9cf | 0x1401fa9d2 | 0x1401fa9d2             |
| 0x1401fa9d2 | 0x1401faa02 | 0x1401faa02,0x1401faa31 |
| 0x1401faa02 | 0x1401faa07 | 0x1401faa07,0x1401faa23 |
| 0x1401faa07 | 0x1401faa15 | 0x1401faa15,0x1401faa23 |
| 0x1401faa15 | 0x1401faa23 | 0x1401faa23             |
| 0x1401faa23 | 0x1401faa31 |                         |
| 0x1401faa31 | 0x1401faa3e |                         |

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

longlong *

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
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type longlong *. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters

| role      | ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | longlong *   | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | undefined8 * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------------------------------------------------------|-----------------|
| 0x1401fa925#449 | 0x1401fa925 | 449      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa92a#594 | 0x1401fa92a | 594      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa92a#595 | 0x1401fa92a | 595      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa92a#710 | 0x1401fa92a | 710      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa932#48  | 0x1401fa932 | 48       | CALL         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa932#737 | 0x1401fa932 | 737      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa93a#54  | 0x1401fa93a | 54       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa93d#59  | 0x1401fa93d | 59       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401fa93d#735 | 0x1401fa93d | 735      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa93f#61  | 0x1401fa93f | 61       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa945#64  | 0x1401fa945 | 64       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa945#711 | 0x1401fa945 | 711      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa94e#77  | 0x1401fa94e | 77       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa94e#727 | 0x1401fa94e | 727      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa94e#728 | 0x1401fa94e | 728      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa94e#729 | 0x1401fa94e | 729      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa952#80  | 0x1401fa952 | 80       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa952#730 | 0x1401fa952 | 730      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa952#731 | 0x1401fa952 | 731      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa952#732 | 0x1401fa952 | 732      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa956#83  | 0x1401fa956 | 83       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa956#714 | 0x1401fa956 | 714      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa959#84  | 0x1401fa959 | 84       | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401fa959#734 | 0x1401fa959 | 734      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa95e#87  | 0x1401fa95e | 87       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa95e#436 | 0x1401fa95e | 436      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa95e#715 | 0x1401fa95e | 715      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa95e#738 | 0x1401fa95e | 738      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa962#92  | 0x1401fa962 | 92       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa965#97  | 0x1401fa965 | 97       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401fa967#98  | 0x1401fa967 | 98       | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401fa967#101 | 0x1401fa967 | 101      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa967#102 | 0x1401fa967 | 102      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa967#103 | 0x1401fa967 | 103      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa967#113 | 0x1401fa967 | 113      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401fa977#120 | 0x1401fa977 | 120      | CALL         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa977#739 | 0x1401fa977 | 739      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa987#129 | 0x1401fa987 | 129      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa98a#134 | 0x1401fa98a | 134      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401fa994#139 | 0x1401fa994 | 139      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa994#740 | 0x1401fa994 | 740      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa997#716 | 0x1401fa997 | 716      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9a0#145 | 0x1401fa9a0 | 145      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa9a3#148 | 0x1401fa9a3 | 148      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa9a3#741 | 0x1401fa9a3 | 741      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa9a6#150 | 0x1401fa9a6 | 150      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa9a6#717 | 0x1401fa9a6 | 717      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9aa#154 | 0x1401fa9aa | 154      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa9aa#718 | 0x1401fa9aa | 718      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9aa#742 | 0x1401fa9aa | 742      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa9ae#719 | 0x1401fa9ae | 719      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9b2#720 | 0x1401fa9b2 | 720      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9b6#161 | 0x1401fa9b6 | 161      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa9bc#721 | 0x1401fa9bc | 721      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9c0#722 | 0x1401fa9c0 | 722      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9c4#168 | 0x1401fa9c4 | 168      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa9cd#170 | 0x1401fa9cd | 170      | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401fa9cd#733 | 0x1401fa9cd | 733      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa9cd#736 | 0x1401fa9cd | 736      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa9d2#435 | 0x1401fa9d2 | 435      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa9d2#450 | 0x1401fa9d2 | 450      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa9da#723 | 0x1401fa9da | 723      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9f5#206 | 0x1401fa9f5 | 206      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401fa9f5#709 | 0x1401fa9f5 | 709      | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa9fa#208 | 0x1401fa9fa | 208      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa9fd#213 | 0x1401fa9fd | 213      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa00#218 | 0x1401faa00 | 218      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401faa02#223 | 0x1401faa02 | 223      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa05#228 | 0x1401faa05 | 228      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401faa0c#230 | 0x1401faa0c | 230      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401faa0c#235 | 0x1401faa0c | 235      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa0c#236 | 0x1401faa0c | 236      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa0c#237 | 0x1401faa0c | 237      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa0c#241 | 0x1401faa0c | 241      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401faa0c#248 | 0x1401faa0c | 248      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401faa10#254 | 0x1401faa10 | 254      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa13#260 | 0x1401faa13 | 260      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401faa1d#265 | 0x1401faa1d | 265      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401faa23#266 | 0x1401faa23 | 266      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401faa30#298 | 0x1401faa30 | 298      | RETURN       | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401faa31#300 | 0x1401faa31 | 300      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401faa31#743 | 0x1401faa31 | 743      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401faa39#304 | 0x1401faa39 | 304      | CALL         | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401faa39#306 | 0x1401faa39 | 306      | RETURN       | true    | member           | [object Object]                                                                                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401fa92a#710 | 0x1401fa92a#595 | 1           |
| 0x1401fa932#48  | 0x1401fa932#737 | 0           |
| 0x1401fa932#737 | 0x1401fa93a#54  | 0           |
| 0x1401fa93a#54  | 0x1401fa93d#59  | 1           |
| 0x1401fa925#449 | 0x1401fa93d#735 | 0           |
| 0x1401fa932#737 | 0x1401fa93f#61  | 1           |
| 0x1401fa945#711 | 0x1401fa945#64  | 1           |
| 0x1401fa932#737 | 0x1401fa945#711 | 0           |
| 0x1401fa94e#727 | 0x1401fa94e#77  | 1           |
| 0x1401fa932#737 | 0x1401fa94e#727 | 0           |
| 0x1401fa932#737 | 0x1401fa94e#728 | 0           |
| 0x1401fa94e#728 | 0x1401fa94e#729 | 1           |
| 0x1401fa952#730 | 0x1401fa952#80  | 1           |
| 0x1401fa932#737 | 0x1401fa952#730 | 0           |
| 0x1401fa932#737 | 0x1401fa952#731 | 0           |
| 0x1401fa952#731 | 0x1401fa952#732 | 1           |
| 0x1401fa956#714 | 0x1401fa956#83  | 1           |
| 0x1401fa932#737 | 0x1401fa956#714 | 0           |
| 0x1401fa932#737 | 0x1401fa959#734 | 0           |
| 0x1401fa95e#715 | 0x1401fa95e#87  | 1           |
| 0x1401fa95e#738 | 0x1401fa95e#87  | 2           |
| 0x1401fa959#734 | 0x1401fa95e#436 | 0           |
| 0x1401fa93d#735 | 0x1401fa95e#436 | 1           |
| 0x1401fa95e#436 | 0x1401fa95e#738 | 0           |
| 0x1401fa95e#436 | 0x1401fa962#92  | 0           |
| 0x1401fa962#92  | 0x1401fa965#97  | 1           |
| 0x1401fa95e#436 | 0x1401fa967#101 | 1           |
| 0x1401fa967#101 | 0x1401fa967#102 | 0           |
| 0x1401fa95e#436 | 0x1401fa967#103 | 1           |
| 0x1401fa967#102 | 0x1401fa967#103 | 2           |
| 0x1401fa977#120 | 0x1401fa977#739 | 0           |
| 0x1401fa977#739 | 0x1401fa987#129 | 0           |
| 0x1401fa987#129 | 0x1401fa98a#134 | 1           |
| 0x1401fa994#740 | 0x1401fa994#139 | 1           |
| 0x1401fa95e#436 | 0x1401fa994#139 | 2           |
| 0x1401fa977#739 | 0x1401fa994#740 | 0           |
| 0x1401fa977#739 | 0x1401fa997#716 | 0           |
| 0x1401fa9a3#741 | 0x1401fa9a3#148 | 1           |
| 0x1401fa9a0#145 | 0x1401fa9a3#148 | 2           |
| 0x1401fa997#716 | 0x1401fa9a3#741 | 0           |
| 0x1401fa9a6#717 | 0x1401fa9a6#150 | 1           |
| 0x1401fa9aa#742 | 0x1401fa9aa#154 | 1           |
| 0x1401fa9a6#150 | 0x1401fa9aa#154 | 2           |
| 0x1401fa977#739 | 0x1401fa9aa#718 | 0           |
| 0x1401fa9aa#718 | 0x1401fa9aa#742 | 0           |
| 0x1401fa977#739 | 0x1401fa9ae#719 | 0           |
| 0x1401fa9ae#719 | 0x1401fa9b6#161 | 1           |
| 0x1401fa9b2#720 | 0x1401fa9b6#161 | 2           |
| 0x1401fa977#739 | 0x1401fa9bc#721 | 0           |
| 0x1401fa9bc#721 | 0x1401fa9c4#168 | 1           |
| 0x1401fa9c0#722 | 0x1401fa9c4#168 | 2           |
| 0x1401fa925#449 | 0x1401fa9cd#733 | 0           |
| 0x1401fa977#739 | 0x1401fa9cd#736 | 0           |
| 0x1401fa9cd#733 | 0x1401fa9d2#435 | 0           |
| 0x1401fa95e#436 | 0x1401fa9d2#435 | 1           |
| 0x1401fa9cd#736 | 0x1401fa9d2#450 | 0           |
| 0x1401fa925#449 | 0x1401fa9d2#450 | 1           |
| 0x1401fa9f5#709 | 0x1401fa9f5#206 | 3           |
| 0x1401fa9d2#450 | 0x1401fa9f5#206 | 4           |
| 0x1401fa9da#723 | 0x1401fa9f5#206 | 6           |
| 0x1401fa9f5#206 | 0x1401fa9fa#208 | 2           |
| 0x1401fa9f5#206 | 0x1401fa9fd#213 | 0           |
| 0x1401fa9fd#213 | 0x1401faa00#218 | 1           |
| 0x1401fa9d2#435 | 0x1401faa02#223 | 0           |
| 0x1401faa02#223 | 0x1401faa05#228 | 1           |
| 0x1401fa9d2#435 | 0x1401faa0c#235 | 1           |
| 0x1401faa0c#235 | 0x1401faa0c#236 | 0           |
| 0x1401fa9d2#435 | 0x1401faa0c#237 | 1           |
| 0x1401fa9d2#435 | 0x1401faa0c#241 | 1           |
| 0x1401faa0c#236 | 0x1401faa0c#241 | 2           |
| 0x1401faa0c#237 | 0x1401faa10#254 | 0           |
| 0x1401faa10#254 | 0x1401faa13#260 | 1           |
| 0x1401fa9d2#435 | 0x1401faa1d#265 | 1           |
| 0x1401faa23#266 | 0x1401faa30#298 | 1           |
| 0x1401faa31#743 | 0x1401faa31#300 | 1           |
| 0x1401fa9da#723 | 0x1401faa31#743 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /longlong *   |
| 1       | param_2 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401fa92a#594 | 1           |
| 0       | 0x1401fa92a#710 | 0           |
| 0       | 0x1401fa95e#715 | 0           |
| 1       | 0x1401fa9a0#145 | 1           |
| 1       | 0x1401fa9a6#717 | 0           |
| 1       | 0x1401fa9b2#720 | 0           |
| 1       | 0x1401fa9c0#722 | 0           |
| 0       | 0x1401fa9da#723 | 0           |
| 0       | 0x1401fa9fa#208 | 1           |
| 0       | 0x1401faa23#266 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401fa92a#594 | memory_write       | 1             | 2           |
| 0x1401fa92a#595 | memory_write       | 1             | 2           |
| 0x1401fa932#48  | direct_call        | 0             |             |
| 0x1401fa93d#59  | conditional_branch |               | 1           |
| 0x1401fa93f#61  | memory_write       | 1             | 2           |
| 0x1401fa945#64  | memory_write       | 1             | 2           |
| 0x1401fa94e#77  | memory_write       | 1             | 2           |
| 0x1401fa94e#729 | memory_write       | 1             | 2           |
| 0x1401fa952#80  | memory_write       | 1             | 2           |
| 0x1401fa952#732 | memory_write       | 1             | 2           |
| 0x1401fa956#83  | memory_write       | 1             | 2           |
| 0x1401fa95e#87  | memory_write       | 1             | 2           |
| 0x1401fa965#97  | conditional_branch |               | 1           |
| 0x1401fa967#101 | memory_read        | 1             |             |
| 0x1401fa967#103 | memory_write       | 1             | 2           |
| 0x1401fa977#120 | direct_call        | 0             |             |
| 0x1401fa98a#134 | conditional_branch |               | 1           |
| 0x1401fa994#139 | memory_write       | 1             | 2           |
| 0x1401fa9a0#145 | memory_read        | 1             |             |
| 0x1401fa9a3#148 | memory_write       | 1             | 2           |
| 0x1401fa9a6#150 | memory_read        | 1             |             |
| 0x1401fa9aa#154 | memory_write       | 1             | 2           |
| 0x1401fa9b6#161 | direct_call        | 0             |             |
| 0x1401fa9c4#168 | direct_call        | 0             |             |
| 0x1401fa9f5#206 | direct_call        | 0             |             |
| 0x1401fa9fa#208 | memory_write       | 1             | 2           |
| 0x1401faa00#218 | conditional_branch |               | 1           |
| 0x1401faa05#228 | conditional_branch |               | 1           |
| 0x1401faa0c#235 | memory_read        | 1             |             |
| 0x1401faa0c#237 | memory_read        | 1             |             |
| 0x1401faa0c#241 | memory_write       | 1             | 2           |
| 0x1401faa13#260 | conditional_branch |               | 1           |
| 0x1401faa1d#265 | direct_call        | 0             |             |
| 0x1401faa31#300 | memory_write       | 1             | 2           |
| 0x1401faa39#304 | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401faa39 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401faa39 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x1401fa910

## normalized_result.procedure.name

FUN_1401fa910

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
| 0x1401fa910 | 0x1401faa3d |

## normalized_result.procedure.body.total_bytes

302

## normalized_result.procedure.body.span_bytes

302

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401fa910()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_38 @ Stack[-0x38]:8   | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8   | ghidra-function-database |
| undefined4 local_48 @ Stack[-0x48]:4   | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## normalized_result.pseudocode


longlong * FUN_1401fa910(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  piVar2 = (int *)FUN_1403272a0(0x20);
  piVar4 = piVar5;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 1;
    piVar2[1] = 2;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar4 = piVar2;
  }
  param_1[2] = (longlong)piVar4;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  piVar2 = (int *)FUN_1403272a0(0x58);
  if (piVar2 != (int *)0x0) {
    *(int **)piVar2 = piVar4;
    *(undefined8 *)(piVar2 + 2) = *param_2;
    *(undefined8 *)(piVar2 + 4) = param_2[1];
    FUN_140002a80(piVar2 + 6,param_2 + 2);
    FUN_140002a80(piVar2 + 0xe,param_2 + 6);
    piVar4 = piVar5;
    piVar5 = piVar2;
  }
  lVar3 = FUN_140338744(0,0,FUN_1401faa40,piVar5,0,param_1 + 1);
  *param_1 = lVar3;
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_140325560(6);
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      thunk_FUN_140327e20(piVar4,0x20);
    }
  }
  return param_1;
}



## normalized_result.assembly

0x1401fa910: MOV qword ptr [RSP + 0x8], RCX,0x1401fa915: PUSH RBX,0x1401fa916: PUSH RBP,0x1401fa917: PUSH RSI,0x1401fa918: PUSH RDI,0x1401fa919: PUSH R14,0x1401fa91b: SUB RSP, 0x40,0x1401fa91f: MOV R14, RDX,0x1401fa922: MOV RSI, RCX,0x1401fa925: XOR EBP, EBP,0x1401fa927: XORPS XMM0, XMM0,0x1401fa92a: MOVUPS xmmword ptr [RCX], XMM0,0x1401fa92d: MOV ECX, 0x20,0x1401fa932: CALL 0x1403272a0,0x1401fa937: MOV RBX, RAX,0x1401fa93a: TEST RAX, RAX,0x1401fa93d: JZ 0x1401fa95b,0x1401fa93f: MOV dword ptr [RAX], 0x1,0x1401fa945: MOV dword ptr [RAX + 0x4], 0x2,0x1401fa94c: XOR EAX, EAX,0x1401fa94e: MOV qword ptr [RBX + 0x8], RAX,0x1401fa952: MOV qword ptr [RBX + 0x10], RBP,0x1401fa956: MOV dword ptr [RBX + 0x18], EBP,0x1401fa959: JMP 0x1401fa95e,0x1401fa95b: MOV RBX, RBP,0x1401fa95e: MOV qword ptr [RSI + 0x10], RBX,0x1401fa962: TEST RBX, RBX,0x1401fa965: JZ 0x1401fa96a,0x1401fa967: INC.LOCK dword ptr [RBX],0x1401fa96a: MOV qword ptr [RSP + 0x80], RBX,0x1401fa972: MOV ECX, 0x58,0x1401fa977: CALL 0x1403272a0,0x1401fa97c: MOV RDI, RAX,0x1401fa97f: MOV qword ptr [RSP + 0x88], RAX,0x1401fa987: TEST RAX, RAX,0x1401fa98a: JZ 0x1401fa9cf,0x1401fa98c: MOV qword ptr [RSP + 0x80], RBP,0x1401fa994: MOV qword ptr [RAX], RBX,0x1401fa997: LEA RBX, [RAX + 0x8],0x1401fa99b: MOV qword ptr [RSP + 0x30], RBX,0x1401fa9a0: MOV RAX, qword ptr [R14],0x1401fa9a3: MOV qword ptr [RBX], RAX,0x1401fa9a6: MOV RAX, qword ptr [R14 + 0x8],0x1401fa9aa: MOV qword ptr [RBX + 0x8], RAX,0x1401fa9ae: LEA RCX, [RBX + 0x10],0x1401fa9b2: LEA RDX, [R14 + 0x10],0x1401fa9b6: CALL 0x140002a80,0x1401fa9bb: NOP,0x1401fa9bc: LEA RCX, [RBX + 0x30],0x1401fa9c0: LEA RDX, [R14 + 0x30],0x1401fa9c4: CALL 0x140002a80,0x1401fa9c9: NOP,0x1401fa9ca: MOV RBX, RBP,0x1401fa9cd: JMP 0x1401fa9d2,0x1401fa9cf: MOV RDI, RBP,0x1401fa9d2: MOV qword ptr [RSP + 0x88], RDI,0x1401fa9da: LEA R14, [RSI + 0x8],0x1401fa9de: MOV qword ptr [RSP + 0x28], R14,0x1401fa9e3: MOV dword ptr [RSP + 0x20], EBP,0x1401fa9e7: MOV R9, RDI,0x1401fa9ea: LEA R8, [0x1401faa40],0x1401fa9f1: XOR EDX, EDX,0x1401fa9f3: XOR ECX, ECX,0x1401fa9f5: CALL 0x140338744,0x1401fa9fa: MOV qword ptr [RSI], RAX,0x1401fa9fd: TEST RAX, RAX,0x1401faa00: JZ 0x1401faa31,0x1401faa02: TEST RBX, RBX,0x1401faa05: JZ 0x1401faa23,0x1401faa07: MOV EAX, 0xffffffff,0x1401faa0c: XADD.LOCK dword ptr [RBX], EAX,0x1401faa10: CMP EAX, 0x1,0x1401faa13: JNZ 0x1401faa23,0x1401faa15: MOV EDX, 0x20,0x1401faa1a: MOV RCX, RBX,0x1401faa1d: CALL 0x1403272f0,0x1401faa22: NOP,0x1401faa23: MOV RAX, RSI,0x1401faa26: ADD RSP, 0x40,0x1401faa2a: POP R14,0x1401faa2c: POP RDI,0x1401faa2d: POP RSI,0x1401faa2e: POP RBP,0x1401faa2f: POP RBX,0x1401faa30: RET,0x1401faa31: MOV dword ptr [R14], EBP,0x1401faa34: MOV ECX, 0x6,0x1401faa39: CALL 0x140325560

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401fb2b0 | FUN_1401fb2b0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x140002a80 | FUN_140002a80       | [object Object] | [object Object] |
| 0x140325560 | FUN_140325560       | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0       | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20 | [object Object] | [object Object] |
| 0x140338744 | FUN_140338744       | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401fb6c6    | 0x1401fa910    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfcf0    | 0x1401fa910    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401fa910    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401fa932    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa93d    | 0x1401fa95b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa959    | 0x1401fa95e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa965    | 0x1401fa96a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa96a    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401fa977    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa97f    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401fa98a    | 0x1401fa9cf              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa98c    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401fa99b    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401fa9b6    | 0x140002a80              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa9c4    | 0x140002a80              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa9cd    | 0x1401fa9d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa9d2    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401fa9de    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401fa9e3    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401fa9ea    | 0x1401faa40              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa9f5    | 0x140338744              | [object Object]  | [object Object]  | [object Object] |
| 0x1401faa00    | 0x1401faa31              | [object Object]  | [object Object]  | [object Object] |
| 0x1401faa05    | 0x1401faa23              | [object Object]  | [object Object]  | [object Object] |
| 0x1401faa13    | 0x1401faa23              | [object Object]  | [object Object]  | [object Object] |
| 0x1401faa1d    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401faa39    | 0x140325560              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value               | source_address |
|-------------|---------------------|----------------|
| 0x140002a80 | FUN_140002a80       | 0x1401fa9b6    |
| 0x140002a80 | FUN_140002a80       | 0x1401fa9c4    |
| 0x1401fa95b | LAB_1401fa95b       | 0x1401fa93d    |
| 0x1401fa95e | LAB_1401fa95e       | 0x1401fa959    |
| 0x1401fa96a | LAB_1401fa96a       | 0x1401fa965    |
| 0x1401fa9cf | LAB_1401fa9cf       | 0x1401fa98a    |
| 0x1401fa9d2 | LAB_1401fa9d2       | 0x1401fa9cd    |
| 0x1401faa23 | LAB_1401faa23       | 0x1401faa05    |
| 0x1401faa23 | LAB_1401faa23       | 0x1401faa13    |
| 0x1401faa31 | LAB_1401faa31       | 0x1401faa00    |
| 0x1401faa40 | FUN_1401faa40       | 0x1401fa9ea    |
| 0x140325560 | FUN_140325560       | 0x1401faa39    |
| 0x1403272a0 | FUN_1403272a0       | 0x1401fa932    |
| 0x1403272a0 | FUN_1403272a0       | 0x1401fa977    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x1401faa1d    |
| 0x140338744 | FUN_140338744       | 0x1401fa9f5    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401fa910 | 0x1401fa93f | 0x1401fa93f,0x1401fa95b |
| 0x1401fa93f | 0x1401fa95b | 0x1401fa95e             |
| 0x1401fa95b | 0x1401fa95e | 0x1401fa95e             |
| 0x1401fa95e | 0x1401fa967 | 0x1401fa967,0x1401fa96a |
| 0x1401fa967 | 0x1401fa96a | 0x1401fa96a             |
| 0x1401fa96a | 0x1401fa98c | 0x1401fa98c,0x1401fa9cf |
| 0x1401fa98c | 0x1401fa9cf | 0x1401fa9d2             |
| 0x1401fa9cf | 0x1401fa9d2 | 0x1401fa9d2             |
| 0x1401fa9d2 | 0x1401faa02 | 0x1401faa02,0x1401faa31 |
| 0x1401faa02 | 0x1401faa07 | 0x1401faa07,0x1401faa23 |
| 0x1401faa07 | 0x1401faa15 | 0x1401faa15,0x1401faa23 |
| 0x1401faa15 | 0x1401faa23 | 0x1401faa23             |
| 0x1401faa23 | 0x1401faa31 |                         |
| 0x1401faa31 | 0x1401faa3e |                         |

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

longlong *

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
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type longlong *. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters

| ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | longlong *   | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | undefined8 * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------------------------------------------------------|-----------------|
| 0x1401fa925#449 | 0x1401fa925 | 449      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa92a#594 | 0x1401fa92a | 594      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa92a#595 | 0x1401fa92a | 595      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa92a#710 | 0x1401fa92a | 710      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa932#48  | 0x1401fa932 | 48       | CALL         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa932#737 | 0x1401fa932 | 737      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa93a#54  | 0x1401fa93a | 54       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa93d#59  | 0x1401fa93d | 59       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401fa93d#735 | 0x1401fa93d | 735      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa93f#61  | 0x1401fa93f | 61       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa945#64  | 0x1401fa945 | 64       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa945#711 | 0x1401fa945 | 711      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa94e#77  | 0x1401fa94e | 77       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa94e#727 | 0x1401fa94e | 727      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa94e#728 | 0x1401fa94e | 728      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa94e#729 | 0x1401fa94e | 729      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa952#80  | 0x1401fa952 | 80       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa952#730 | 0x1401fa952 | 730      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa952#731 | 0x1401fa952 | 731      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa952#732 | 0x1401fa952 | 732      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa956#83  | 0x1401fa956 | 83       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa956#714 | 0x1401fa956 | 714      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa959#84  | 0x1401fa959 | 84       | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401fa959#734 | 0x1401fa959 | 734      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa95e#87  | 0x1401fa95e | 87       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa95e#436 | 0x1401fa95e | 436      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa95e#715 | 0x1401fa95e | 715      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa95e#738 | 0x1401fa95e | 738      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa962#92  | 0x1401fa962 | 92       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa965#97  | 0x1401fa965 | 97       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401fa967#98  | 0x1401fa967 | 98       | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401fa967#101 | 0x1401fa967 | 101      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa967#102 | 0x1401fa967 | 102      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa967#103 | 0x1401fa967 | 103      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa967#113 | 0x1401fa967 | 113      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401fa977#120 | 0x1401fa977 | 120      | CALL         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa977#739 | 0x1401fa977 | 739      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa987#129 | 0x1401fa987 | 129      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa98a#134 | 0x1401fa98a | 134      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401fa994#139 | 0x1401fa994 | 139      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa994#740 | 0x1401fa994 | 740      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa997#716 | 0x1401fa997 | 716      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9a0#145 | 0x1401fa9a0 | 145      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa9a3#148 | 0x1401fa9a3 | 148      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa9a3#741 | 0x1401fa9a3 | 741      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa9a6#150 | 0x1401fa9a6 | 150      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa9a6#717 | 0x1401fa9a6 | 717      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9aa#154 | 0x1401fa9aa | 154      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa9aa#718 | 0x1401fa9aa | 718      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9aa#742 | 0x1401fa9aa | 742      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa9ae#719 | 0x1401fa9ae | 719      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9b2#720 | 0x1401fa9b2 | 720      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9b6#161 | 0x1401fa9b6 | 161      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa9bc#721 | 0x1401fa9bc | 721      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9c0#722 | 0x1401fa9c0 | 722      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9c4#168 | 0x1401fa9c4 | 168      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa9cd#170 | 0x1401fa9cd | 170      | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401fa9cd#733 | 0x1401fa9cd | 733      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa9cd#736 | 0x1401fa9cd | 736      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401fa9d2#435 | 0x1401fa9d2 | 435      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa9d2#450 | 0x1401fa9d2 | 450      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa9da#723 | 0x1401fa9da | 723      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401fa9f5#206 | 0x1401fa9f5 | 206      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401fa9f5#709 | 0x1401fa9f5 | 709      | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa9fa#208 | 0x1401fa9fa | 208      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401fa9fd#213 | 0x1401fa9fd | 213      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa00#218 | 0x1401faa00 | 218      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401faa02#223 | 0x1401faa02 | 223      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa05#228 | 0x1401faa05 | 228      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401faa0c#230 | 0x1401faa0c | 230      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401faa0c#235 | 0x1401faa0c | 235      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa0c#236 | 0x1401faa0c | 236      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa0c#237 | 0x1401faa0c | 237      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa0c#241 | 0x1401faa0c | 241      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401faa0c#248 | 0x1401faa0c | 248      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401faa10#254 | 0x1401faa10 | 254      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401faa13#260 | 0x1401faa13 | 260      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401faa1d#265 | 0x1401faa1d | 265      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401faa23#266 | 0x1401faa23 | 266      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401faa30#298 | 0x1401faa30 | 298      | RETURN       | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401faa31#300 | 0x1401faa31 | 300      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401faa31#743 | 0x1401faa31 | 743      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401faa39#304 | 0x1401faa39 | 304      | CALL         | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401faa39#306 | 0x1401faa39 | 306      | RETURN       | true    | member           | [object Object]                                                                                                 |                 |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401fa92a#710 | 0x1401fa92a#595 | 1           |
| 0x1401fa932#48  | 0x1401fa932#737 | 0           |
| 0x1401fa932#737 | 0x1401fa93a#54  | 0           |
| 0x1401fa93a#54  | 0x1401fa93d#59  | 1           |
| 0x1401fa925#449 | 0x1401fa93d#735 | 0           |
| 0x1401fa932#737 | 0x1401fa93f#61  | 1           |
| 0x1401fa945#711 | 0x1401fa945#64  | 1           |
| 0x1401fa932#737 | 0x1401fa945#711 | 0           |
| 0x1401fa94e#727 | 0x1401fa94e#77  | 1           |
| 0x1401fa932#737 | 0x1401fa94e#727 | 0           |
| 0x1401fa932#737 | 0x1401fa94e#728 | 0           |
| 0x1401fa94e#728 | 0x1401fa94e#729 | 1           |
| 0x1401fa952#730 | 0x1401fa952#80  | 1           |
| 0x1401fa932#737 | 0x1401fa952#730 | 0           |
| 0x1401fa932#737 | 0x1401fa952#731 | 0           |
| 0x1401fa952#731 | 0x1401fa952#732 | 1           |
| 0x1401fa956#714 | 0x1401fa956#83  | 1           |
| 0x1401fa932#737 | 0x1401fa956#714 | 0           |
| 0x1401fa932#737 | 0x1401fa959#734 | 0           |
| 0x1401fa95e#715 | 0x1401fa95e#87  | 1           |
| 0x1401fa95e#738 | 0x1401fa95e#87  | 2           |
| 0x1401fa959#734 | 0x1401fa95e#436 | 0           |
| 0x1401fa93d#735 | 0x1401fa95e#436 | 1           |
| 0x1401fa95e#436 | 0x1401fa95e#738 | 0           |
| 0x1401fa95e#436 | 0x1401fa962#92  | 0           |
| 0x1401fa962#92  | 0x1401fa965#97  | 1           |
| 0x1401fa95e#436 | 0x1401fa967#101 | 1           |
| 0x1401fa967#101 | 0x1401fa967#102 | 0           |
| 0x1401fa95e#436 | 0x1401fa967#103 | 1           |
| 0x1401fa967#102 | 0x1401fa967#103 | 2           |
| 0x1401fa977#120 | 0x1401fa977#739 | 0           |
| 0x1401fa977#739 | 0x1401fa987#129 | 0           |
| 0x1401fa987#129 | 0x1401fa98a#134 | 1           |
| 0x1401fa994#740 | 0x1401fa994#139 | 1           |
| 0x1401fa95e#436 | 0x1401fa994#139 | 2           |
| 0x1401fa977#739 | 0x1401fa994#740 | 0           |
| 0x1401fa977#739 | 0x1401fa997#716 | 0           |
| 0x1401fa9a3#741 | 0x1401fa9a3#148 | 1           |
| 0x1401fa9a0#145 | 0x1401fa9a3#148 | 2           |
| 0x1401fa997#716 | 0x1401fa9a3#741 | 0           |
| 0x1401fa9a6#717 | 0x1401fa9a6#150 | 1           |
| 0x1401fa9aa#742 | 0x1401fa9aa#154 | 1           |
| 0x1401fa9a6#150 | 0x1401fa9aa#154 | 2           |
| 0x1401fa977#739 | 0x1401fa9aa#718 | 0           |
| 0x1401fa9aa#718 | 0x1401fa9aa#742 | 0           |
| 0x1401fa977#739 | 0x1401fa9ae#719 | 0           |
| 0x1401fa9ae#719 | 0x1401fa9b6#161 | 1           |
| 0x1401fa9b2#720 | 0x1401fa9b6#161 | 2           |
| 0x1401fa977#739 | 0x1401fa9bc#721 | 0           |
| 0x1401fa9bc#721 | 0x1401fa9c4#168 | 1           |
| 0x1401fa9c0#722 | 0x1401fa9c4#168 | 2           |
| 0x1401fa925#449 | 0x1401fa9cd#733 | 0           |
| 0x1401fa977#739 | 0x1401fa9cd#736 | 0           |
| 0x1401fa9cd#733 | 0x1401fa9d2#435 | 0           |
| 0x1401fa95e#436 | 0x1401fa9d2#435 | 1           |
| 0x1401fa9cd#736 | 0x1401fa9d2#450 | 0           |
| 0x1401fa925#449 | 0x1401fa9d2#450 | 1           |
| 0x1401fa9f5#709 | 0x1401fa9f5#206 | 3           |
| 0x1401fa9d2#450 | 0x1401fa9f5#206 | 4           |
| 0x1401fa9da#723 | 0x1401fa9f5#206 | 6           |
| 0x1401fa9f5#206 | 0x1401fa9fa#208 | 2           |
| 0x1401fa9f5#206 | 0x1401fa9fd#213 | 0           |
| 0x1401fa9fd#213 | 0x1401faa00#218 | 1           |
| 0x1401fa9d2#435 | 0x1401faa02#223 | 0           |
| 0x1401faa02#223 | 0x1401faa05#228 | 1           |
| 0x1401fa9d2#435 | 0x1401faa0c#235 | 1           |
| 0x1401faa0c#235 | 0x1401faa0c#236 | 0           |
| 0x1401fa9d2#435 | 0x1401faa0c#237 | 1           |
| 0x1401fa9d2#435 | 0x1401faa0c#241 | 1           |
| 0x1401faa0c#236 | 0x1401faa0c#241 | 2           |
| 0x1401faa0c#237 | 0x1401faa10#254 | 0           |
| 0x1401faa10#254 | 0x1401faa13#260 | 1           |
| 0x1401fa9d2#435 | 0x1401faa1d#265 | 1           |
| 0x1401faa23#266 | 0x1401faa30#298 | 1           |
| 0x1401faa31#743 | 0x1401faa31#300 | 1           |
| 0x1401fa9da#723 | 0x1401faa31#743 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401fa92a#594 | memory_write       | 1             | 2           |
| 0x1401fa92a#595 | memory_write       | 1             | 2           |
| 0x1401fa932#48  | direct_call        | 0             |             |
| 0x1401fa93d#59  | conditional_branch |               | 1           |
| 0x1401fa93f#61  | memory_write       | 1             | 2           |
| 0x1401fa945#64  | memory_write       | 1             | 2           |
| 0x1401fa94e#77  | memory_write       | 1             | 2           |
| 0x1401fa94e#729 | memory_write       | 1             | 2           |
| 0x1401fa952#80  | memory_write       | 1             | 2           |
| 0x1401fa952#732 | memory_write       | 1             | 2           |
| 0x1401fa956#83  | memory_write       | 1             | 2           |
| 0x1401fa95e#87  | memory_write       | 1             | 2           |
| 0x1401fa965#97  | conditional_branch |               | 1           |
| 0x1401fa967#101 | memory_read        | 1             |             |
| 0x1401fa967#103 | memory_write       | 1             | 2           |
| 0x1401fa977#120 | direct_call        | 0             |             |
| 0x1401fa98a#134 | conditional_branch |               | 1           |
| 0x1401fa994#139 | memory_write       | 1             | 2           |
| 0x1401fa9a0#145 | memory_read        | 1             |             |
| 0x1401fa9a3#148 | memory_write       | 1             | 2           |
| 0x1401fa9a6#150 | memory_read        | 1             |             |
| 0x1401fa9aa#154 | memory_write       | 1             | 2           |
| 0x1401fa9b6#161 | direct_call        | 0             |             |
| 0x1401fa9c4#168 | direct_call        | 0             |             |
| 0x1401fa9f5#206 | direct_call        | 0             |             |
| 0x1401fa9fa#208 | memory_write       | 1             | 2           |
| 0x1401faa00#218 | conditional_branch |               | 1           |
| 0x1401faa05#228 | conditional_branch |               | 1           |
| 0x1401faa0c#235 | memory_read        | 1             |             |
| 0x1401faa0c#237 | memory_read        | 1             |             |
| 0x1401faa0c#241 | memory_write       | 1             | 2           |
| 0x1401faa13#260 | conditional_branch |               | 1           |
| 0x1401faa1d#265 | direct_call        | 0             |             |
| 0x1401faa31#300 | memory_write       | 1             | 2           |
| 0x1401faa39#304 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /longlong *   |
| 1       | param_2 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401fa92a#594 | 1           |
| 0       | 0x1401fa92a#710 | 0           |
| 0       | 0x1401fa95e#715 | 0           |
| 1       | 0x1401fa9a0#145 | 1           |
| 1       | 0x1401fa9a6#717 | 0           |
| 1       | 0x1401fa9b2#720 | 0           |
| 1       | 0x1401fa9c0#722 | 0           |
| 0       | 0x1401fa9da#723 | 0           |
| 0       | 0x1401fa9fa#208 | 1           |
| 0       | 0x1401faa23#266 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401faa39 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401faa39 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

