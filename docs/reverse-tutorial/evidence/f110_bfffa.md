## evidence_id

ev_c1dcb2626592f62c7ff3aa7c9261893ad4b45302f0a506f64d9038418fbb42bc

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
| procedure | 0x1402bfffa |

## raw_result.value.procedure.address

0x1402bff20

## raw_result.value.procedure.name

FUN_1402bff20

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
| 0x1402bff20 | 0x1402c004d |

## raw_result.value.procedure.body.total_bytes

302

## raw_result.value.procedure.body.span_bytes

302

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1402bff20()

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


longlong * FUN_1402bff20(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  piVar2 = (int *)FUN_140496f10(0x20);
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
  piVar2 = (int *)FUN_140496f10(0x58);
  if (piVar2 != (int *)0x0) {
    *(int **)piVar2 = piVar4;
    *(undefined8 *)(piVar2 + 2) = *param_2;
    *(undefined8 *)(piVar2 + 4) = param_2[1];
    FUN_140002b20(piVar2 + 6,param_2 + 2);
    FUN_140002b20(piVar2 + 0xe,param_2 + 6);
    piVar4 = piVar5;
    piVar5 = piVar2;
  }
  lVar3 = FUN_1404a8d64(0,0,FUN_1402c0050,piVar5,0,param_1 + 1);
  *param_1 = lVar3;
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_140494f50(6);
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      thunk_FUN_140497c50(piVar4,0x20);
    }
  }
  return param_1;
}



## raw_result.value.assembly

0x1402bff20: MOV qword ptr [RSP + 0x8], RCX,0x1402bff25: PUSH RBX,0x1402bff26: PUSH RBP,0x1402bff27: PUSH RSI,0x1402bff28: PUSH RDI,0x1402bff29: PUSH R14,0x1402bff2b: SUB RSP, 0x40,0x1402bff2f: MOV R14, RDX,0x1402bff32: MOV RSI, RCX,0x1402bff35: XOR EBP, EBP,0x1402bff37: XORPS XMM0, XMM0,0x1402bff3a: MOVUPS xmmword ptr [RCX], XMM0,0x1402bff3d: MOV ECX, 0x20,0x1402bff42: CALL 0x140496f10,0x1402bff47: MOV RBX, RAX,0x1402bff4a: TEST RAX, RAX,0x1402bff4d: JZ 0x1402bff6b,0x1402bff4f: MOV dword ptr [RAX], 0x1,0x1402bff55: MOV dword ptr [RAX + 0x4], 0x2,0x1402bff5c: XOR EAX, EAX,0x1402bff5e: MOV qword ptr [RBX + 0x8], RAX,0x1402bff62: MOV qword ptr [RBX + 0x10], RBP,0x1402bff66: MOV dword ptr [RBX + 0x18], EBP,0x1402bff69: JMP 0x1402bff6e,0x1402bff6b: MOV RBX, RBP,0x1402bff6e: MOV qword ptr [RSI + 0x10], RBX,0x1402bff72: TEST RBX, RBX,0x1402bff75: JZ 0x1402bff7a,0x1402bff77: INC.LOCK dword ptr [RBX],0x1402bff7a: MOV qword ptr [RSP + 0x80], RBX,0x1402bff82: MOV ECX, 0x58,0x1402bff87: CALL 0x140496f10,0x1402bff8c: MOV RDI, RAX,0x1402bff8f: MOV qword ptr [RSP + 0x88], RAX,0x1402bff97: TEST RAX, RAX,0x1402bff9a: JZ 0x1402bffdf,0x1402bff9c: MOV qword ptr [RSP + 0x80], RBP,0x1402bffa4: MOV qword ptr [RAX], RBX,0x1402bffa7: LEA RBX, [RAX + 0x8],0x1402bffab: MOV qword ptr [RSP + 0x30], RBX,0x1402bffb0: MOV RAX, qword ptr [R14],0x1402bffb3: MOV qword ptr [RBX], RAX,0x1402bffb6: MOV RAX, qword ptr [R14 + 0x8],0x1402bffba: MOV qword ptr [RBX + 0x8], RAX,0x1402bffbe: LEA RCX, [RBX + 0x10],0x1402bffc2: LEA RDX, [R14 + 0x10],0x1402bffc6: CALL 0x140002b20,0x1402bffcb: NOP,0x1402bffcc: LEA RCX, [RBX + 0x30],0x1402bffd0: LEA RDX, [R14 + 0x30],0x1402bffd4: CALL 0x140002b20,0x1402bffd9: NOP,0x1402bffda: MOV RBX, RBP,0x1402bffdd: JMP 0x1402bffe2,0x1402bffdf: MOV RDI, RBP,0x1402bffe2: MOV qword ptr [RSP + 0x88], RDI,0x1402bffea: LEA R14, [RSI + 0x8],0x1402bffee: MOV qword ptr [RSP + 0x28], R14,0x1402bfff3: MOV dword ptr [RSP + 0x20], EBP,0x1402bfff7: MOV R9, RDI,0x1402bfffa: LEA R8, [0x1402c0050],0x1402c0001: XOR EDX, EDX,0x1402c0003: XOR ECX, ECX,0x1402c0005: CALL 0x1404a8d64,0x1402c000a: MOV qword ptr [RSI], RAX,0x1402c000d: TEST RAX, RAX,0x1402c0010: JZ 0x1402c0041,0x1402c0012: TEST RBX, RBX,0x1402c0015: JZ 0x1402c0033,0x1402c0017: MOV EAX, 0xffffffff,0x1402c001c: XADD.LOCK dword ptr [RBX], EAX,0x1402c0020: CMP EAX, 0x1,0x1402c0023: JNZ 0x1402c0033,0x1402c0025: MOV EDX, 0x20,0x1402c002a: MOV RCX, RBX,0x1402c002d: CALL 0x140496f60,0x1402c0032: NOP,0x1402c0033: MOV RAX, RSI,0x1402c0036: ADD RSP, 0x40,0x1402c003a: POP R14,0x1402c003c: POP RDI,0x1402c003d: POP RSI,0x1402c003e: POP RBP,0x1402c003f: POP RBX,0x1402c0040: RET,0x1402c0041: MOV dword ptr [R14], EBP,0x1402c0044: MOV ECX, 0x6,0x1402c0049: CALL 0x140494f50

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1402c0780 | FUN_1402c0780 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x140002b20 | FUN_140002b20       | [object Object] | [object Object] |
| 0x140494f50 | FUN_140494f50       | [object Object] | [object Object] |
| 0x140496f10 | FUN_140496f10       | [object Object] | [object Object] |
| 0x140496f60 | thunk_FUN_140497c50 | [object Object] | [object Object] |
| 0x1404a8d64 | FUN_1404a8d64       | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1402c0bbe    | 0x1402bff20    | [object Object]  | [object Object]  | [object Object] |
| 0x1406f9e04    | 0x1402bff20    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1402bff20    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1402bff42    | 0x140496f10              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff4d    | 0x1402bff6b              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff69    | 0x1402bff6e              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff75    | 0x1402bff7a              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff7a    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1402bff87    | 0x140496f10              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff8f    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1402bff9a    | 0x1402bffdf              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff9c    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1402bffab    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bffc6    | 0x140002b20              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bffd4    | 0x140002b20              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bffdd    | 0x1402bffe2              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bffe2    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1402bffee    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1402bfff3    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1402bfffa    | 0x1402c0050              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c0005    | 0x1404a8d64              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c0010    | 0x1402c0041              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c0015    | 0x1402c0033              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c0023    | 0x1402c0033              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c002d    | 0x140496f60              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c0049    | 0x140494f50              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value               | source_address |
|-------------|---------------------|----------------|
| 0x140002b20 | FUN_140002b20       | 0x1402bffc6    |
| 0x140002b20 | FUN_140002b20       | 0x1402bffd4    |
| 0x1402bff6b | LAB_1402bff6b       | 0x1402bff4d    |
| 0x1402bff6e | LAB_1402bff6e       | 0x1402bff69    |
| 0x1402bff7a | LAB_1402bff7a       | 0x1402bff75    |
| 0x1402bffdf | LAB_1402bffdf       | 0x1402bff9a    |
| 0x1402bffe2 | LAB_1402bffe2       | 0x1402bffdd    |
| 0x1402c0033 | LAB_1402c0033       | 0x1402c0015    |
| 0x1402c0033 | LAB_1402c0033       | 0x1402c0023    |
| 0x1402c0041 | LAB_1402c0041       | 0x1402c0010    |
| 0x1402c0050 | FUN_1402c0050       | 0x1402bfffa    |
| 0x140494f50 | FUN_140494f50       | 0x1402c0049    |
| 0x140496f10 | FUN_140496f10       | 0x1402bff42    |
| 0x140496f10 | FUN_140496f10       | 0x1402bff87    |
| 0x140496f60 | thunk_FUN_140497c50 | 0x1402c002d    |
| 0x1404a8d64 | FUN_1404a8d64       | 0x1402c0005    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1402bff20 | 0x1402bff4f | 0x1402bff4f,0x1402bff6b |
| 0x1402bff4f | 0x1402bff6b | 0x1402bff6e             |
| 0x1402bff6b | 0x1402bff6e | 0x1402bff6e             |
| 0x1402bff6e | 0x1402bff77 | 0x1402bff77,0x1402bff7a |
| 0x1402bff77 | 0x1402bff7a | 0x1402bff7a             |
| 0x1402bff7a | 0x1402bff9c | 0x1402bff9c,0x1402bffdf |
| 0x1402bff9c | 0x1402bffdf | 0x1402bffe2             |
| 0x1402bffdf | 0x1402bffe2 | 0x1402bffe2             |
| 0x1402bffe2 | 0x1402c0012 | 0x1402c0012,0x1402c0041 |
| 0x1402c0012 | 0x1402c0017 | 0x1402c0017,0x1402c0033 |
| 0x1402c0017 | 0x1402c0025 | 0x1402c0025,0x1402c0033 |
| 0x1402c0025 | 0x1402c0033 | 0x1402c0033             |
| 0x1402c0033 | 0x1402c0041 |                         |
| 0x1402c0041 | 0x1402c004e |                         |

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
| 0x1402bff35#449 | 0x1402bff35 | 449      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff3a#594 | 0x1402bff3a | 594      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff3a#595 | 0x1402bff3a | 595      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff3a#710 | 0x1402bff3a | 710      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff42#48  | 0x1402bff42 | 48       | CALL         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff42#737 | 0x1402bff42 | 737      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff4a#54  | 0x1402bff4a | 54       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff4d#59  | 0x1402bff4d | 59       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402bff4d#735 | 0x1402bff4d | 735      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff4f#61  | 0x1402bff4f | 61       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff55#64  | 0x1402bff55 | 64       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff55#711 | 0x1402bff55 | 711      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff5e#77  | 0x1402bff5e | 77       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff5e#727 | 0x1402bff5e | 727      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff5e#728 | 0x1402bff5e | 728      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff5e#729 | 0x1402bff5e | 729      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff62#80  | 0x1402bff62 | 80       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff62#730 | 0x1402bff62 | 730      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff62#731 | 0x1402bff62 | 731      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff62#732 | 0x1402bff62 | 732      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff66#83  | 0x1402bff66 | 83       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff66#714 | 0x1402bff66 | 714      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff69#84  | 0x1402bff69 | 84       | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402bff69#734 | 0x1402bff69 | 734      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff6e#87  | 0x1402bff6e | 87       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff6e#436 | 0x1402bff6e | 436      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff6e#715 | 0x1402bff6e | 715      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff6e#738 | 0x1402bff6e | 738      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff72#92  | 0x1402bff72 | 92       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff75#97  | 0x1402bff75 | 97       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402bff77#98  | 0x1402bff77 | 98       | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402bff77#101 | 0x1402bff77 | 101      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff77#102 | 0x1402bff77 | 102      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff77#103 | 0x1402bff77 | 103      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff77#113 | 0x1402bff77 | 113      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402bff87#120 | 0x1402bff87 | 120      | CALL         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff87#739 | 0x1402bff87 | 739      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff97#129 | 0x1402bff97 | 129      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff9a#134 | 0x1402bff9a | 134      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402bffa4#139 | 0x1402bffa4 | 139      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bffa4#740 | 0x1402bffa4 | 740      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bffa7#716 | 0x1402bffa7 | 716      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffb0#145 | 0x1402bffb0 | 145      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bffb3#148 | 0x1402bffb3 | 148      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bffb3#741 | 0x1402bffb3 | 741      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bffb6#150 | 0x1402bffb6 | 150      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bffb6#717 | 0x1402bffb6 | 717      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffba#154 | 0x1402bffba | 154      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bffba#718 | 0x1402bffba | 718      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffba#742 | 0x1402bffba | 742      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bffbe#719 | 0x1402bffbe | 719      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffc2#720 | 0x1402bffc2 | 720      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffc6#161 | 0x1402bffc6 | 161      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bffcc#721 | 0x1402bffcc | 721      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffd0#722 | 0x1402bffd0 | 722      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffd4#168 | 0x1402bffd4 | 168      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bffdd#170 | 0x1402bffdd | 170      | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402bffdd#733 | 0x1402bffdd | 733      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bffdd#736 | 0x1402bffdd | 736      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bffe2#435 | 0x1402bffe2 | 435      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bffe2#450 | 0x1402bffe2 | 450      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bffea#723 | 0x1402bffea | 723      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402c0005#206 | 0x1402c0005 | 206      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1402c0005#709 | 0x1402c0005 | 709      | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c000a#208 | 0x1402c000a | 208      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402c000d#213 | 0x1402c000d | 213      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c0010#218 | 0x1402c0010 | 218      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402c0012#223 | 0x1402c0012 | 223      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c0015#228 | 0x1402c0015 | 228      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402c001c#230 | 0x1402c001c | 230      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402c001c#235 | 0x1402c001c | 235      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c001c#236 | 0x1402c001c | 236      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c001c#237 | 0x1402c001c | 237      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c001c#241 | 0x1402c001c | 241      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402c001c#248 | 0x1402c001c | 248      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402c0020#254 | 0x1402c0020 | 254      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c0023#260 | 0x1402c0023 | 260      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402c002d#265 | 0x1402c002d | 265      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402c0033#266 | 0x1402c0033 | 266      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402c0040#298 | 0x1402c0040 | 298      | RETURN       | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402c0041#300 | 0x1402c0041 | 300      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402c0041#743 | 0x1402c0041 | 743      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402c0049#304 | 0x1402c0049 | 304      | CALL         | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402c0049#306 | 0x1402c0049 | 306      | RETURN       | true    | member           | [object Object]                                                                                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1402bff3a#710 | 0x1402bff3a#595 | 1           |
| 0x1402bff42#48  | 0x1402bff42#737 | 0           |
| 0x1402bff42#737 | 0x1402bff4a#54  | 0           |
| 0x1402bff4a#54  | 0x1402bff4d#59  | 1           |
| 0x1402bff35#449 | 0x1402bff4d#735 | 0           |
| 0x1402bff42#737 | 0x1402bff4f#61  | 1           |
| 0x1402bff55#711 | 0x1402bff55#64  | 1           |
| 0x1402bff42#737 | 0x1402bff55#711 | 0           |
| 0x1402bff5e#727 | 0x1402bff5e#77  | 1           |
| 0x1402bff42#737 | 0x1402bff5e#727 | 0           |
| 0x1402bff42#737 | 0x1402bff5e#728 | 0           |
| 0x1402bff5e#728 | 0x1402bff5e#729 | 1           |
| 0x1402bff62#730 | 0x1402bff62#80  | 1           |
| 0x1402bff42#737 | 0x1402bff62#730 | 0           |
| 0x1402bff42#737 | 0x1402bff62#731 | 0           |
| 0x1402bff62#731 | 0x1402bff62#732 | 1           |
| 0x1402bff66#714 | 0x1402bff66#83  | 1           |
| 0x1402bff42#737 | 0x1402bff66#714 | 0           |
| 0x1402bff42#737 | 0x1402bff69#734 | 0           |
| 0x1402bff6e#715 | 0x1402bff6e#87  | 1           |
| 0x1402bff6e#738 | 0x1402bff6e#87  | 2           |
| 0x1402bff69#734 | 0x1402bff6e#436 | 0           |
| 0x1402bff4d#735 | 0x1402bff6e#436 | 1           |
| 0x1402bff6e#436 | 0x1402bff6e#738 | 0           |
| 0x1402bff6e#436 | 0x1402bff72#92  | 0           |
| 0x1402bff72#92  | 0x1402bff75#97  | 1           |
| 0x1402bff6e#436 | 0x1402bff77#101 | 1           |
| 0x1402bff77#101 | 0x1402bff77#102 | 0           |
| 0x1402bff6e#436 | 0x1402bff77#103 | 1           |
| 0x1402bff77#102 | 0x1402bff77#103 | 2           |
| 0x1402bff87#120 | 0x1402bff87#739 | 0           |
| 0x1402bff87#739 | 0x1402bff97#129 | 0           |
| 0x1402bff97#129 | 0x1402bff9a#134 | 1           |
| 0x1402bffa4#740 | 0x1402bffa4#139 | 1           |
| 0x1402bff6e#436 | 0x1402bffa4#139 | 2           |
| 0x1402bff87#739 | 0x1402bffa4#740 | 0           |
| 0x1402bff87#739 | 0x1402bffa7#716 | 0           |
| 0x1402bffb3#741 | 0x1402bffb3#148 | 1           |
| 0x1402bffb0#145 | 0x1402bffb3#148 | 2           |
| 0x1402bffa7#716 | 0x1402bffb3#741 | 0           |
| 0x1402bffb6#717 | 0x1402bffb6#150 | 1           |
| 0x1402bffba#742 | 0x1402bffba#154 | 1           |
| 0x1402bffb6#150 | 0x1402bffba#154 | 2           |
| 0x1402bff87#739 | 0x1402bffba#718 | 0           |
| 0x1402bffba#718 | 0x1402bffba#742 | 0           |
| 0x1402bff87#739 | 0x1402bffbe#719 | 0           |
| 0x1402bffbe#719 | 0x1402bffc6#161 | 1           |
| 0x1402bffc2#720 | 0x1402bffc6#161 | 2           |
| 0x1402bff87#739 | 0x1402bffcc#721 | 0           |
| 0x1402bffcc#721 | 0x1402bffd4#168 | 1           |
| 0x1402bffd0#722 | 0x1402bffd4#168 | 2           |
| 0x1402bff35#449 | 0x1402bffdd#733 | 0           |
| 0x1402bff87#739 | 0x1402bffdd#736 | 0           |
| 0x1402bffdd#733 | 0x1402bffe2#435 | 0           |
| 0x1402bff6e#436 | 0x1402bffe2#435 | 1           |
| 0x1402bffdd#736 | 0x1402bffe2#450 | 0           |
| 0x1402bff35#449 | 0x1402bffe2#450 | 1           |
| 0x1402c0005#709 | 0x1402c0005#206 | 3           |
| 0x1402bffe2#450 | 0x1402c0005#206 | 4           |
| 0x1402bffea#723 | 0x1402c0005#206 | 6           |
| 0x1402c0005#206 | 0x1402c000a#208 | 2           |
| 0x1402c0005#206 | 0x1402c000d#213 | 0           |
| 0x1402c000d#213 | 0x1402c0010#218 | 1           |
| 0x1402bffe2#435 | 0x1402c0012#223 | 0           |
| 0x1402c0012#223 | 0x1402c0015#228 | 1           |
| 0x1402bffe2#435 | 0x1402c001c#235 | 1           |
| 0x1402c001c#235 | 0x1402c001c#236 | 0           |
| 0x1402bffe2#435 | 0x1402c001c#237 | 1           |
| 0x1402bffe2#435 | 0x1402c001c#241 | 1           |
| 0x1402c001c#236 | 0x1402c001c#241 | 2           |
| 0x1402c001c#237 | 0x1402c0020#254 | 0           |
| 0x1402c0020#254 | 0x1402c0023#260 | 1           |
| 0x1402bffe2#435 | 0x1402c002d#265 | 1           |
| 0x1402c0033#266 | 0x1402c0040#298 | 1           |
| 0x1402c0041#743 | 0x1402c0041#300 | 1           |
| 0x1402bffea#723 | 0x1402c0041#743 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /longlong *   |
| 1       | param_2 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1402bff3a#594 | 1           |
| 0       | 0x1402bff3a#710 | 0           |
| 0       | 0x1402bff6e#715 | 0           |
| 1       | 0x1402bffb0#145 | 1           |
| 1       | 0x1402bffb6#717 | 0           |
| 1       | 0x1402bffc2#720 | 0           |
| 1       | 0x1402bffd0#722 | 0           |
| 0       | 0x1402bffea#723 | 0           |
| 0       | 0x1402c000a#208 | 1           |
| 0       | 0x1402c0033#266 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1402bff3a#594 | memory_write       | 1             | 2           |
| 0x1402bff3a#595 | memory_write       | 1             | 2           |
| 0x1402bff42#48  | direct_call        | 0             |             |
| 0x1402bff4d#59  | conditional_branch |               | 1           |
| 0x1402bff4f#61  | memory_write       | 1             | 2           |
| 0x1402bff55#64  | memory_write       | 1             | 2           |
| 0x1402bff5e#77  | memory_write       | 1             | 2           |
| 0x1402bff5e#729 | memory_write       | 1             | 2           |
| 0x1402bff62#80  | memory_write       | 1             | 2           |
| 0x1402bff62#732 | memory_write       | 1             | 2           |
| 0x1402bff66#83  | memory_write       | 1             | 2           |
| 0x1402bff6e#87  | memory_write       | 1             | 2           |
| 0x1402bff75#97  | conditional_branch |               | 1           |
| 0x1402bff77#101 | memory_read        | 1             |             |
| 0x1402bff77#103 | memory_write       | 1             | 2           |
| 0x1402bff87#120 | direct_call        | 0             |             |
| 0x1402bff9a#134 | conditional_branch |               | 1           |
| 0x1402bffa4#139 | memory_write       | 1             | 2           |
| 0x1402bffb0#145 | memory_read        | 1             |             |
| 0x1402bffb3#148 | memory_write       | 1             | 2           |
| 0x1402bffb6#150 | memory_read        | 1             |             |
| 0x1402bffba#154 | memory_write       | 1             | 2           |
| 0x1402bffc6#161 | direct_call        | 0             |             |
| 0x1402bffd4#168 | direct_call        | 0             |             |
| 0x1402c0005#206 | direct_call        | 0             |             |
| 0x1402c000a#208 | memory_write       | 1             | 2           |
| 0x1402c0010#218 | conditional_branch |               | 1           |
| 0x1402c0015#228 | conditional_branch |               | 1           |
| 0x1402c001c#235 | memory_read        | 1             |             |
| 0x1402c001c#237 | memory_read        | 1             |             |
| 0x1402c001c#241 | memory_write       | 1             | 2           |
| 0x1402c0023#260 | conditional_branch |               | 1           |
| 0x1402c002d#265 | direct_call        | 0             |             |
| 0x1402c0041#300 | memory_write       | 1             | 2           |
| 0x1402c0049#304 | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1402c0049 to 0x140494f50 FUN_140494f50 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1402c0049 to 0x140494f50 FUN_140494f50 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x1402bff20

## normalized_result.procedure.name

FUN_1402bff20

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
| 0x1402bff20 | 0x1402c004d |

## normalized_result.procedure.body.total_bytes

302

## normalized_result.procedure.body.span_bytes

302

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1402bff20()

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


longlong * FUN_1402bff20(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  piVar2 = (int *)FUN_140496f10(0x20);
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
  piVar2 = (int *)FUN_140496f10(0x58);
  if (piVar2 != (int *)0x0) {
    *(int **)piVar2 = piVar4;
    *(undefined8 *)(piVar2 + 2) = *param_2;
    *(undefined8 *)(piVar2 + 4) = param_2[1];
    FUN_140002b20(piVar2 + 6,param_2 + 2);
    FUN_140002b20(piVar2 + 0xe,param_2 + 6);
    piVar4 = piVar5;
    piVar5 = piVar2;
  }
  lVar3 = FUN_1404a8d64(0,0,FUN_1402c0050,piVar5,0,param_1 + 1);
  *param_1 = lVar3;
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_140494f50(6);
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      thunk_FUN_140497c50(piVar4,0x20);
    }
  }
  return param_1;
}



## normalized_result.assembly

0x1402bff20: MOV qword ptr [RSP + 0x8], RCX,0x1402bff25: PUSH RBX,0x1402bff26: PUSH RBP,0x1402bff27: PUSH RSI,0x1402bff28: PUSH RDI,0x1402bff29: PUSH R14,0x1402bff2b: SUB RSP, 0x40,0x1402bff2f: MOV R14, RDX,0x1402bff32: MOV RSI, RCX,0x1402bff35: XOR EBP, EBP,0x1402bff37: XORPS XMM0, XMM0,0x1402bff3a: MOVUPS xmmword ptr [RCX], XMM0,0x1402bff3d: MOV ECX, 0x20,0x1402bff42: CALL 0x140496f10,0x1402bff47: MOV RBX, RAX,0x1402bff4a: TEST RAX, RAX,0x1402bff4d: JZ 0x1402bff6b,0x1402bff4f: MOV dword ptr [RAX], 0x1,0x1402bff55: MOV dword ptr [RAX + 0x4], 0x2,0x1402bff5c: XOR EAX, EAX,0x1402bff5e: MOV qword ptr [RBX + 0x8], RAX,0x1402bff62: MOV qword ptr [RBX + 0x10], RBP,0x1402bff66: MOV dword ptr [RBX + 0x18], EBP,0x1402bff69: JMP 0x1402bff6e,0x1402bff6b: MOV RBX, RBP,0x1402bff6e: MOV qword ptr [RSI + 0x10], RBX,0x1402bff72: TEST RBX, RBX,0x1402bff75: JZ 0x1402bff7a,0x1402bff77: INC.LOCK dword ptr [RBX],0x1402bff7a: MOV qword ptr [RSP + 0x80], RBX,0x1402bff82: MOV ECX, 0x58,0x1402bff87: CALL 0x140496f10,0x1402bff8c: MOV RDI, RAX,0x1402bff8f: MOV qword ptr [RSP + 0x88], RAX,0x1402bff97: TEST RAX, RAX,0x1402bff9a: JZ 0x1402bffdf,0x1402bff9c: MOV qword ptr [RSP + 0x80], RBP,0x1402bffa4: MOV qword ptr [RAX], RBX,0x1402bffa7: LEA RBX, [RAX + 0x8],0x1402bffab: MOV qword ptr [RSP + 0x30], RBX,0x1402bffb0: MOV RAX, qword ptr [R14],0x1402bffb3: MOV qword ptr [RBX], RAX,0x1402bffb6: MOV RAX, qword ptr [R14 + 0x8],0x1402bffba: MOV qword ptr [RBX + 0x8], RAX,0x1402bffbe: LEA RCX, [RBX + 0x10],0x1402bffc2: LEA RDX, [R14 + 0x10],0x1402bffc6: CALL 0x140002b20,0x1402bffcb: NOP,0x1402bffcc: LEA RCX, [RBX + 0x30],0x1402bffd0: LEA RDX, [R14 + 0x30],0x1402bffd4: CALL 0x140002b20,0x1402bffd9: NOP,0x1402bffda: MOV RBX, RBP,0x1402bffdd: JMP 0x1402bffe2,0x1402bffdf: MOV RDI, RBP,0x1402bffe2: MOV qword ptr [RSP + 0x88], RDI,0x1402bffea: LEA R14, [RSI + 0x8],0x1402bffee: MOV qword ptr [RSP + 0x28], R14,0x1402bfff3: MOV dword ptr [RSP + 0x20], EBP,0x1402bfff7: MOV R9, RDI,0x1402bfffa: LEA R8, [0x1402c0050],0x1402c0001: XOR EDX, EDX,0x1402c0003: XOR ECX, ECX,0x1402c0005: CALL 0x1404a8d64,0x1402c000a: MOV qword ptr [RSI], RAX,0x1402c000d: TEST RAX, RAX,0x1402c0010: JZ 0x1402c0041,0x1402c0012: TEST RBX, RBX,0x1402c0015: JZ 0x1402c0033,0x1402c0017: MOV EAX, 0xffffffff,0x1402c001c: XADD.LOCK dword ptr [RBX], EAX,0x1402c0020: CMP EAX, 0x1,0x1402c0023: JNZ 0x1402c0033,0x1402c0025: MOV EDX, 0x20,0x1402c002a: MOV RCX, RBX,0x1402c002d: CALL 0x140496f60,0x1402c0032: NOP,0x1402c0033: MOV RAX, RSI,0x1402c0036: ADD RSP, 0x40,0x1402c003a: POP R14,0x1402c003c: POP RDI,0x1402c003d: POP RSI,0x1402c003e: POP RBP,0x1402c003f: POP RBX,0x1402c0040: RET,0x1402c0041: MOV dword ptr [R14], EBP,0x1402c0044: MOV ECX, 0x6,0x1402c0049: CALL 0x140494f50

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1402c0780 | FUN_1402c0780 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x140002b20 | FUN_140002b20       | [object Object] | [object Object] |
| 0x140494f50 | FUN_140494f50       | [object Object] | [object Object] |
| 0x140496f10 | FUN_140496f10       | [object Object] | [object Object] |
| 0x140496f60 | thunk_FUN_140497c50 | [object Object] | [object Object] |
| 0x1404a8d64 | FUN_1404a8d64       | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1402c0bbe    | 0x1402bff20    | [object Object]  | [object Object]  | [object Object] |
| 0x1406f9e04    | 0x1402bff20    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1402bff20    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1402bff42    | 0x140496f10              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff4d    | 0x1402bff6b              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff69    | 0x1402bff6e              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff75    | 0x1402bff7a              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff7a    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1402bff87    | 0x140496f10              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff8f    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1402bff9a    | 0x1402bffdf              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bff9c    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1402bffab    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1402bffc6    | 0x140002b20              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bffd4    | 0x140002b20              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bffdd    | 0x1402bffe2              | [object Object]  | [object Object]  | [object Object] |
| 0x1402bffe2    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1402bffee    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1402bfff3    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1402bfffa    | 0x1402c0050              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c0005    | 0x1404a8d64              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c0010    | 0x1402c0041              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c0015    | 0x1402c0033              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c0023    | 0x1402c0033              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c002d    | 0x140496f60              | [object Object]  | [object Object]  | [object Object] |
| 0x1402c0049    | 0x140494f50              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value               | source_address |
|-------------|---------------------|----------------|
| 0x140002b20 | FUN_140002b20       | 0x1402bffc6    |
| 0x140002b20 | FUN_140002b20       | 0x1402bffd4    |
| 0x1402bff6b | LAB_1402bff6b       | 0x1402bff4d    |
| 0x1402bff6e | LAB_1402bff6e       | 0x1402bff69    |
| 0x1402bff7a | LAB_1402bff7a       | 0x1402bff75    |
| 0x1402bffdf | LAB_1402bffdf       | 0x1402bff9a    |
| 0x1402bffe2 | LAB_1402bffe2       | 0x1402bffdd    |
| 0x1402c0033 | LAB_1402c0033       | 0x1402c0015    |
| 0x1402c0033 | LAB_1402c0033       | 0x1402c0023    |
| 0x1402c0041 | LAB_1402c0041       | 0x1402c0010    |
| 0x1402c0050 | FUN_1402c0050       | 0x1402bfffa    |
| 0x140494f50 | FUN_140494f50       | 0x1402c0049    |
| 0x140496f10 | FUN_140496f10       | 0x1402bff42    |
| 0x140496f10 | FUN_140496f10       | 0x1402bff87    |
| 0x140496f60 | thunk_FUN_140497c50 | 0x1402c002d    |
| 0x1404a8d64 | FUN_1404a8d64       | 0x1402c0005    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1402bff20 | 0x1402bff4f | 0x1402bff4f,0x1402bff6b |
| 0x1402bff4f | 0x1402bff6b | 0x1402bff6e             |
| 0x1402bff6b | 0x1402bff6e | 0x1402bff6e             |
| 0x1402bff6e | 0x1402bff77 | 0x1402bff77,0x1402bff7a |
| 0x1402bff77 | 0x1402bff7a | 0x1402bff7a             |
| 0x1402bff7a | 0x1402bff9c | 0x1402bff9c,0x1402bffdf |
| 0x1402bff9c | 0x1402bffdf | 0x1402bffe2             |
| 0x1402bffdf | 0x1402bffe2 | 0x1402bffe2             |
| 0x1402bffe2 | 0x1402c0012 | 0x1402c0012,0x1402c0041 |
| 0x1402c0012 | 0x1402c0017 | 0x1402c0017,0x1402c0033 |
| 0x1402c0017 | 0x1402c0025 | 0x1402c0025,0x1402c0033 |
| 0x1402c0025 | 0x1402c0033 | 0x1402c0033             |
| 0x1402c0033 | 0x1402c0041 |                         |
| 0x1402c0041 | 0x1402c004e |                         |

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
| 0x1402bff35#449 | 0x1402bff35 | 449      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff3a#594 | 0x1402bff3a | 594      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff3a#595 | 0x1402bff3a | 595      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff3a#710 | 0x1402bff3a | 710      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff42#48  | 0x1402bff42 | 48       | CALL         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff42#737 | 0x1402bff42 | 737      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff4a#54  | 0x1402bff4a | 54       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff4d#59  | 0x1402bff4d | 59       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402bff4d#735 | 0x1402bff4d | 735      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff4f#61  | 0x1402bff4f | 61       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff55#64  | 0x1402bff55 | 64       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff55#711 | 0x1402bff55 | 711      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff5e#77  | 0x1402bff5e | 77       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff5e#727 | 0x1402bff5e | 727      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff5e#728 | 0x1402bff5e | 728      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff5e#729 | 0x1402bff5e | 729      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff62#80  | 0x1402bff62 | 80       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff62#730 | 0x1402bff62 | 730      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff62#731 | 0x1402bff62 | 731      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff62#732 | 0x1402bff62 | 732      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff66#83  | 0x1402bff66 | 83       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff66#714 | 0x1402bff66 | 714      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff69#84  | 0x1402bff69 | 84       | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402bff69#734 | 0x1402bff69 | 734      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff6e#87  | 0x1402bff6e | 87       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff6e#436 | 0x1402bff6e | 436      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff6e#715 | 0x1402bff6e | 715      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bff6e#738 | 0x1402bff6e | 738      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff72#92  | 0x1402bff72 | 92       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff75#97  | 0x1402bff75 | 97       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402bff77#98  | 0x1402bff77 | 98       | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402bff77#101 | 0x1402bff77 | 101      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff77#102 | 0x1402bff77 | 102      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff77#103 | 0x1402bff77 | 103      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bff77#113 | 0x1402bff77 | 113      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402bff87#120 | 0x1402bff87 | 120      | CALL         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff87#739 | 0x1402bff87 | 739      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bff97#129 | 0x1402bff97 | 129      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bff9a#134 | 0x1402bff9a | 134      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402bffa4#139 | 0x1402bffa4 | 139      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bffa4#740 | 0x1402bffa4 | 740      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bffa7#716 | 0x1402bffa7 | 716      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffb0#145 | 0x1402bffb0 | 145      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bffb3#148 | 0x1402bffb3 | 148      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bffb3#741 | 0x1402bffb3 | 741      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bffb6#150 | 0x1402bffb6 | 150      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bffb6#717 | 0x1402bffb6 | 717      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffba#154 | 0x1402bffba | 154      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bffba#718 | 0x1402bffba | 718      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffba#742 | 0x1402bffba | 742      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bffbe#719 | 0x1402bffbe | 719      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffc2#720 | 0x1402bffc2 | 720      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffc6#161 | 0x1402bffc6 | 161      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bffcc#721 | 0x1402bffcc | 721      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffd0#722 | 0x1402bffd0 | 722      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402bffd4#168 | 0x1402bffd4 | 168      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402bffdd#170 | 0x1402bffdd | 170      | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402bffdd#733 | 0x1402bffdd | 733      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bffdd#736 | 0x1402bffdd | 736      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402bffe2#435 | 0x1402bffe2 | 435      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bffe2#450 | 0x1402bffe2 | 450      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402bffea#723 | 0x1402bffea | 723      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1402c0005#206 | 0x1402c0005 | 206      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1402c0005#709 | 0x1402c0005 | 709      | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c000a#208 | 0x1402c000a | 208      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402c000d#213 | 0x1402c000d | 213      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c0010#218 | 0x1402c0010 | 218      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402c0012#223 | 0x1402c0012 | 223      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c0015#228 | 0x1402c0015 | 228      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402c001c#230 | 0x1402c001c | 230      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402c001c#235 | 0x1402c001c | 235      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c001c#236 | 0x1402c001c | 236      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c001c#237 | 0x1402c001c | 237      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c001c#241 | 0x1402c001c | 241      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402c001c#248 | 0x1402c001c | 248      | CALLOTHER    | true    | member           | [object Object]                                                                                                 |                 |
| 0x1402c0020#254 | 0x1402c0020 | 254      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1402c0023#260 | 0x1402c0023 | 260      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402c002d#265 | 0x1402c002d | 265      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402c0033#266 | 0x1402c0033 | 266      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402c0040#298 | 0x1402c0040 | 298      | RETURN       | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402c0041#300 | 0x1402c0041 | 300      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1402c0041#743 | 0x1402c0041 | 743      | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1402c0049#304 | 0x1402c0049 | 304      | CALL         | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1402c0049#306 | 0x1402c0049 | 306      | RETURN       | true    | member           | [object Object]                                                                                                 |                 |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1402bff3a#710 | 0x1402bff3a#595 | 1           |
| 0x1402bff42#48  | 0x1402bff42#737 | 0           |
| 0x1402bff42#737 | 0x1402bff4a#54  | 0           |
| 0x1402bff4a#54  | 0x1402bff4d#59  | 1           |
| 0x1402bff35#449 | 0x1402bff4d#735 | 0           |
| 0x1402bff42#737 | 0x1402bff4f#61  | 1           |
| 0x1402bff55#711 | 0x1402bff55#64  | 1           |
| 0x1402bff42#737 | 0x1402bff55#711 | 0           |
| 0x1402bff5e#727 | 0x1402bff5e#77  | 1           |
| 0x1402bff42#737 | 0x1402bff5e#727 | 0           |
| 0x1402bff42#737 | 0x1402bff5e#728 | 0           |
| 0x1402bff5e#728 | 0x1402bff5e#729 | 1           |
| 0x1402bff62#730 | 0x1402bff62#80  | 1           |
| 0x1402bff42#737 | 0x1402bff62#730 | 0           |
| 0x1402bff42#737 | 0x1402bff62#731 | 0           |
| 0x1402bff62#731 | 0x1402bff62#732 | 1           |
| 0x1402bff66#714 | 0x1402bff66#83  | 1           |
| 0x1402bff42#737 | 0x1402bff66#714 | 0           |
| 0x1402bff42#737 | 0x1402bff69#734 | 0           |
| 0x1402bff6e#715 | 0x1402bff6e#87  | 1           |
| 0x1402bff6e#738 | 0x1402bff6e#87  | 2           |
| 0x1402bff69#734 | 0x1402bff6e#436 | 0           |
| 0x1402bff4d#735 | 0x1402bff6e#436 | 1           |
| 0x1402bff6e#436 | 0x1402bff6e#738 | 0           |
| 0x1402bff6e#436 | 0x1402bff72#92  | 0           |
| 0x1402bff72#92  | 0x1402bff75#97  | 1           |
| 0x1402bff6e#436 | 0x1402bff77#101 | 1           |
| 0x1402bff77#101 | 0x1402bff77#102 | 0           |
| 0x1402bff6e#436 | 0x1402bff77#103 | 1           |
| 0x1402bff77#102 | 0x1402bff77#103 | 2           |
| 0x1402bff87#120 | 0x1402bff87#739 | 0           |
| 0x1402bff87#739 | 0x1402bff97#129 | 0           |
| 0x1402bff97#129 | 0x1402bff9a#134 | 1           |
| 0x1402bffa4#740 | 0x1402bffa4#139 | 1           |
| 0x1402bff6e#436 | 0x1402bffa4#139 | 2           |
| 0x1402bff87#739 | 0x1402bffa4#740 | 0           |
| 0x1402bff87#739 | 0x1402bffa7#716 | 0           |
| 0x1402bffb3#741 | 0x1402bffb3#148 | 1           |
| 0x1402bffb0#145 | 0x1402bffb3#148 | 2           |
| 0x1402bffa7#716 | 0x1402bffb3#741 | 0           |
| 0x1402bffb6#717 | 0x1402bffb6#150 | 1           |
| 0x1402bffba#742 | 0x1402bffba#154 | 1           |
| 0x1402bffb6#150 | 0x1402bffba#154 | 2           |
| 0x1402bff87#739 | 0x1402bffba#718 | 0           |
| 0x1402bffba#718 | 0x1402bffba#742 | 0           |
| 0x1402bff87#739 | 0x1402bffbe#719 | 0           |
| 0x1402bffbe#719 | 0x1402bffc6#161 | 1           |
| 0x1402bffc2#720 | 0x1402bffc6#161 | 2           |
| 0x1402bff87#739 | 0x1402bffcc#721 | 0           |
| 0x1402bffcc#721 | 0x1402bffd4#168 | 1           |
| 0x1402bffd0#722 | 0x1402bffd4#168 | 2           |
| 0x1402bff35#449 | 0x1402bffdd#733 | 0           |
| 0x1402bff87#739 | 0x1402bffdd#736 | 0           |
| 0x1402bffdd#733 | 0x1402bffe2#435 | 0           |
| 0x1402bff6e#436 | 0x1402bffe2#435 | 1           |
| 0x1402bffdd#736 | 0x1402bffe2#450 | 0           |
| 0x1402bff35#449 | 0x1402bffe2#450 | 1           |
| 0x1402c0005#709 | 0x1402c0005#206 | 3           |
| 0x1402bffe2#450 | 0x1402c0005#206 | 4           |
| 0x1402bffea#723 | 0x1402c0005#206 | 6           |
| 0x1402c0005#206 | 0x1402c000a#208 | 2           |
| 0x1402c0005#206 | 0x1402c000d#213 | 0           |
| 0x1402c000d#213 | 0x1402c0010#218 | 1           |
| 0x1402bffe2#435 | 0x1402c0012#223 | 0           |
| 0x1402c0012#223 | 0x1402c0015#228 | 1           |
| 0x1402bffe2#435 | 0x1402c001c#235 | 1           |
| 0x1402c001c#235 | 0x1402c001c#236 | 0           |
| 0x1402bffe2#435 | 0x1402c001c#237 | 1           |
| 0x1402bffe2#435 | 0x1402c001c#241 | 1           |
| 0x1402c001c#236 | 0x1402c001c#241 | 2           |
| 0x1402c001c#237 | 0x1402c0020#254 | 0           |
| 0x1402c0020#254 | 0x1402c0023#260 | 1           |
| 0x1402bffe2#435 | 0x1402c002d#265 | 1           |
| 0x1402c0033#266 | 0x1402c0040#298 | 1           |
| 0x1402c0041#743 | 0x1402c0041#300 | 1           |
| 0x1402bffea#723 | 0x1402c0041#743 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1402bff3a#594 | memory_write       | 1             | 2           |
| 0x1402bff3a#595 | memory_write       | 1             | 2           |
| 0x1402bff42#48  | direct_call        | 0             |             |
| 0x1402bff4d#59  | conditional_branch |               | 1           |
| 0x1402bff4f#61  | memory_write       | 1             | 2           |
| 0x1402bff55#64  | memory_write       | 1             | 2           |
| 0x1402bff5e#77  | memory_write       | 1             | 2           |
| 0x1402bff5e#729 | memory_write       | 1             | 2           |
| 0x1402bff62#80  | memory_write       | 1             | 2           |
| 0x1402bff62#732 | memory_write       | 1             | 2           |
| 0x1402bff66#83  | memory_write       | 1             | 2           |
| 0x1402bff6e#87  | memory_write       | 1             | 2           |
| 0x1402bff75#97  | conditional_branch |               | 1           |
| 0x1402bff77#101 | memory_read        | 1             |             |
| 0x1402bff77#103 | memory_write       | 1             | 2           |
| 0x1402bff87#120 | direct_call        | 0             |             |
| 0x1402bff9a#134 | conditional_branch |               | 1           |
| 0x1402bffa4#139 | memory_write       | 1             | 2           |
| 0x1402bffb0#145 | memory_read        | 1             |             |
| 0x1402bffb3#148 | memory_write       | 1             | 2           |
| 0x1402bffb6#150 | memory_read        | 1             |             |
| 0x1402bffba#154 | memory_write       | 1             | 2           |
| 0x1402bffc6#161 | direct_call        | 0             |             |
| 0x1402bffd4#168 | direct_call        | 0             |             |
| 0x1402c0005#206 | direct_call        | 0             |             |
| 0x1402c000a#208 | memory_write       | 1             | 2           |
| 0x1402c0010#218 | conditional_branch |               | 1           |
| 0x1402c0015#228 | conditional_branch |               | 1           |
| 0x1402c001c#235 | memory_read        | 1             |             |
| 0x1402c001c#237 | memory_read        | 1             |             |
| 0x1402c001c#241 | memory_write       | 1             | 2           |
| 0x1402c0023#260 | conditional_branch |               | 1           |
| 0x1402c002d#265 | direct_call        | 0             |             |
| 0x1402c0041#300 | memory_write       | 1             | 2           |
| 0x1402c0049#304 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /longlong *   |
| 1       | param_2 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1402bff3a#594 | 1           |
| 0       | 0x1402bff3a#710 | 0           |
| 0       | 0x1402bff6e#715 | 0           |
| 1       | 0x1402bffb0#145 | 1           |
| 1       | 0x1402bffb6#717 | 0           |
| 1       | 0x1402bffc2#720 | 0           |
| 1       | 0x1402bffd0#722 | 0           |
| 0       | 0x1402bffea#723 | 0           |
| 0       | 0x1402c000a#208 | 1           |
| 0       | 0x1402c0033#266 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1402c0049 to 0x140494f50 FUN_140494f50 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1402c0049 to 0x140494f50 FUN_140494f50 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

