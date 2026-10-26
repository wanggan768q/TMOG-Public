## evidence_id

ev_b1377594c35c858a6a5a009049f6ee3f01bc3b9687db593ec7ec58c5fd427aed

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
| procedure | 0x1401f0bc0 |

## raw_result.value.procedure.address

0x1401f0bc0

## raw_result.value.procedure.name

FUN_1401f0bc0

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
| 0x1401f0bc0 | 0x1401f0c6c |

## raw_result.value.procedure.body.total_bytes

173

## raw_result.value.procedure.body.span_bytes

173

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f0bc0()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## raw_result.value.pseudocode


undefined8 * FUN_1401f0bc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_140002a80(param_1 + 1,param_2 + 1);
  FUN_140002a80(param_1 + 5,param_2 + 5);
  FUN_140002a80(param_1 + 9,param_2 + 9);
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (*(char *)(param_2 + 0x11) != '\0') {
    FUN_140002a80(param_1 + 0xd,param_2 + 0xd);
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  param_1[0x16] = param_2[0x16];
  return param_1;
}



## raw_result.value.assembly

0x1401f0bc0: MOV qword ptr [RSP + 0x18], RBX,0x1401f0bc5: MOV qword ptr [RSP + 0x20], RSI,0x1401f0bca: MOV qword ptr [RSP + 0x8], RCX,0x1401f0bcf: PUSH RDI,0x1401f0bd0: SUB RSP, 0x20,0x1401f0bd4: MOV RDI, RDX,0x1401f0bd7: MOV RBX, RCX,0x1401f0bda: MOV RAX, qword ptr [RDX],0x1401f0bdd: MOV qword ptr [RCX], RAX,0x1401f0be0: ADD RDX, 0x8,0x1401f0be4: ADD RCX, 0x8,0x1401f0be8: CALL 0x140002a80,0x1401f0bed: NOP,0x1401f0bee: LEA RDX, [RDI + 0x28],0x1401f0bf2: LEA RCX, [RBX + 0x28],0x1401f0bf6: CALL 0x140002a80,0x1401f0bfb: NOP,0x1401f0bfc: LEA RDX, [RDI + 0x48],0x1401f0c00: LEA RCX, [RBX + 0x48],0x1401f0c04: CALL 0x140002a80,0x1401f0c09: NOP,0x1401f0c0a: LEA RSI, [RBX + 0x68],0x1401f0c0e: MOV qword ptr [RSP + 0x38], RSI,0x1401f0c13: MOV byte ptr [RSI + 0x20], 0x0,0x1401f0c17: CMP byte ptr [RDI + 0x88], 0x0,0x1401f0c1e: JZ 0x1401f0c30,0x1401f0c20: LEA RDX, [RDI + 0x68],0x1401f0c24: MOV RCX, RSI,0x1401f0c27: CALL 0x140002a80,0x1401f0c2c: MOV byte ptr [RSI + 0x20], 0x1,0x1401f0c30: MOVUPS XMM0, xmmword ptr [RDI + 0x90],0x1401f0c37: MOVUPS xmmword ptr [RBX + 0x90], XMM0,0x1401f0c3e: MOVUPS XMM1, xmmword ptr [RDI + 0xa0],0x1401f0c45: MOVUPS xmmword ptr [RBX + 0xa0], XMM1,0x1401f0c4c: MOV RAX, qword ptr [RDI + 0xb0],0x1401f0c53: MOV qword ptr [RBX + 0xb0], RAX,0x1401f0c5a: MOV RAX, RBX,0x1401f0c5d: MOV RBX, qword ptr [RSP + 0x40],0x1401f0c62: MOV RSI, qword ptr [RSP + 0x48],0x1401f0c67: ADD RSP, 0x20,0x1401f0c6b: POP RDI,0x1401f0c6c: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |
| 0x1401f7240 | FUN_1401f7240 | [object Object] | [object Object] |
| 0x14030be50 | FUN_14030be50 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140002a80 | FUN_140002a80 | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f3f3e    | 0x1401f0bc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f728e    | 0x1401f0bc0    | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf90    | 0x1401f0bc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df7f8    | 0x1401f0bc0    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f0bc0    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x1401f0bc5    | stack:0x20     | [object Object]  |                  | [object Object] |
| 0x1401f0bca    | stack:0x8      | [object Object]  |                  | [object Object] |
| 0x1401f0be8    | 0x140002a80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0bf6    | 0x140002a80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0c04    | 0x140002a80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0c0e    | stack:0x10     | [object Object]  |                  | [object Object] |
| 0x1401f0c1e    | 0x1401f0c30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0c27    | 0x140002a80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0c5d    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x1401f0c62    | stack:0x20     | [object Object]  |                  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x140002a80 | FUN_140002a80 | 0x1401f0be8    |
| 0x140002a80 | FUN_140002a80 | 0x1401f0bf6    |
| 0x140002a80 | FUN_140002a80 | 0x1401f0c04    |
| 0x140002a80 | FUN_140002a80 | 0x1401f0c27    |
| 0x1401f0c30 | LAB_1401f0c30 | 0x1401f0c1e    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f0bc0 | 0x1401f0c20 | 0x1401f0c20,0x1401f0c30 |
| 0x1401f0c20 | 0x1401f0c30 | 0x1401f0c30             |
| 0x1401f0c30 | 0x1401f0c6d |                         |

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

undefined8 *

## raw_result.value.native_api.return_type.size_bytes

8

## raw_result.value.native_api.return_type.storage

RAX:8

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                         |
|------------------|-------------------------|------------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.          |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined8 *. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters

| role      | ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | undefined8 * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-------------------------------------------------|-----------------|
| 0x1401f0bda#23  | 0x1401f0bda | 23       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0bdd#26  | 0x1401f0bdd | 26       | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0be0#310 | 0x1401f0be0 | 310      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0be4#311 | 0x1401f0be4 | 311      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0be8#47  | 0x1401f0be8 | 47       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0bee#312 | 0x1401f0bee | 312      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0bf2#313 | 0x1401f0bf2 | 313      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0bf6#54  | 0x1401f0bf6 | 54       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0bfc#314 | 0x1401f0bfc | 314      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c00#315 | 0x1401f0c00 | 315      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c04#61  | 0x1401f0c04 | 61       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c0a#316 | 0x1401f0c0a | 316      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c13#69  | 0x1401f0c13 | 69       | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c13#317 | 0x1401f0c13 | 317      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c13#331 | 0x1401f0c13 | 331      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f0c17#71  | 0x1401f0c17 | 71       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c17#77  | 0x1401f0c17 | 77       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c17#318 | 0x1401f0c17 | 318      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c17#332 | 0x1401f0c17 | 332      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f0c1e#82  | 0x1401f0c1e | 82       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f0c20#319 | 0x1401f0c20 | 319      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c27#88  | 0x1401f0c27 | 88       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c2c#91  | 0x1401f0c2c | 91       | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c2c#320 | 0x1401f0c2c | 320      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c2c#333 | 0x1401f0c2c | 333      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f0c30#267 | 0x1401f0c30 | 267      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c30#268 | 0x1401f0c30 | 268      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c30#321 | 0x1401f0c30 | 321      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c30#322 | 0x1401f0c30 | 322      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c37#270 | 0x1401f0c37 | 270      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c37#271 | 0x1401f0c37 | 271      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c37#323 | 0x1401f0c37 | 323      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c37#324 | 0x1401f0c37 | 324      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c3e#273 | 0x1401f0c3e | 273      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c3e#274 | 0x1401f0c3e | 274      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c3e#325 | 0x1401f0c3e | 325      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c3e#326 | 0x1401f0c3e | 326      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c45#276 | 0x1401f0c45 | 276      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c45#277 | 0x1401f0c45 | 277      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c45#327 | 0x1401f0c45 | 327      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c45#328 | 0x1401f0c45 | 328      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c4c#113 | 0x1401f0c4c | 113      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c4c#329 | 0x1401f0c4c | 329      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c53#117 | 0x1401f0c53 | 117      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c53#330 | 0x1401f0c53 | 330      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c5a#118 | 0x1401f0c5a | 118      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f0c6c#140 | 0x1401f0c6c | 140      | RETURN       | true    | member           | [object Object],[object Object]                 |                 |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f0bda#23  | 0x1401f0bdd#26  | 2           |
| 0x1401f0be4#311 | 0x1401f0be8#47  | 1           |
| 0x1401f0be0#310 | 0x1401f0be8#47  | 2           |
| 0x1401f0bf2#313 | 0x1401f0bf6#54  | 1           |
| 0x1401f0bee#312 | 0x1401f0bf6#54  | 2           |
| 0x1401f0c00#315 | 0x1401f0c04#61  | 1           |
| 0x1401f0bfc#314 | 0x1401f0c04#61  | 2           |
| 0x1401f0c13#331 | 0x1401f0c13#69  | 1           |
| 0x1401f0c13#317 | 0x1401f0c13#331 | 0           |
| 0x1401f0c17#332 | 0x1401f0c17#71  | 1           |
| 0x1401f0c17#71  | 0x1401f0c17#77  | 0           |
| 0x1401f0c17#318 | 0x1401f0c17#332 | 0           |
| 0x1401f0c17#77  | 0x1401f0c1e#82  | 1           |
| 0x1401f0c0a#316 | 0x1401f0c27#88  | 1           |
| 0x1401f0c20#319 | 0x1401f0c27#88  | 2           |
| 0x1401f0c2c#333 | 0x1401f0c2c#91  | 1           |
| 0x1401f0c2c#320 | 0x1401f0c2c#333 | 0           |
| 0x1401f0c30#321 | 0x1401f0c30#267 | 1           |
| 0x1401f0c30#322 | 0x1401f0c30#268 | 1           |
| 0x1401f0c37#323 | 0x1401f0c37#270 | 1           |
| 0x1401f0c30#267 | 0x1401f0c37#270 | 2           |
| 0x1401f0c37#324 | 0x1401f0c37#271 | 1           |
| 0x1401f0c30#268 | 0x1401f0c37#271 | 2           |
| 0x1401f0c3e#325 | 0x1401f0c3e#273 | 1           |
| 0x1401f0c3e#326 | 0x1401f0c3e#274 | 1           |
| 0x1401f0c45#327 | 0x1401f0c45#276 | 1           |
| 0x1401f0c3e#273 | 0x1401f0c45#276 | 2           |
| 0x1401f0c45#328 | 0x1401f0c45#277 | 1           |
| 0x1401f0c3e#274 | 0x1401f0c45#277 | 2           |
| 0x1401f0c4c#329 | 0x1401f0c4c#113 | 1           |
| 0x1401f0c53#330 | 0x1401f0c53#117 | 1           |
| 0x1401f0c4c#113 | 0x1401f0c53#117 | 2           |
| 0x1401f0c5a#118 | 0x1401f0c6c#140 | 1           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |
| 1       | param_2 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 1       | 0x1401f0bda#23  | 1           |
| 0       | 0x1401f0bdd#26  | 1           |
| 1       | 0x1401f0be0#310 | 0           |
| 0       | 0x1401f0be4#311 | 0           |
| 1       | 0x1401f0bee#312 | 0           |
| 0       | 0x1401f0bf2#313 | 0           |
| 1       | 0x1401f0bfc#314 | 0           |
| 0       | 0x1401f0c00#315 | 0           |
| 0       | 0x1401f0c0a#316 | 0           |
| 0       | 0x1401f0c13#317 | 0           |
| 1       | 0x1401f0c17#318 | 0           |
| 1       | 0x1401f0c20#319 | 0           |
| 0       | 0x1401f0c2c#320 | 0           |
| 1       | 0x1401f0c30#321 | 0           |
| 1       | 0x1401f0c30#322 | 0           |
| 0       | 0x1401f0c37#323 | 0           |
| 0       | 0x1401f0c37#324 | 0           |
| 1       | 0x1401f0c3e#325 | 0           |
| 1       | 0x1401f0c3e#326 | 0           |
| 0       | 0x1401f0c45#327 | 0           |
| 0       | 0x1401f0c45#328 | 0           |
| 1       | 0x1401f0c4c#329 | 0           |
| 0       | 0x1401f0c53#330 | 0           |
| 0       | 0x1401f0c5a#118 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f0bda#23  | memory_read        | 1             |             |
| 0x1401f0bdd#26  | memory_write       | 1             | 2           |
| 0x1401f0be8#47  | direct_call        | 0             |             |
| 0x1401f0bf6#54  | direct_call        | 0             |             |
| 0x1401f0c04#61  | direct_call        | 0             |             |
| 0x1401f0c13#69  | memory_write       | 1             | 2           |
| 0x1401f0c17#71  | memory_read        | 1             |             |
| 0x1401f0c1e#82  | conditional_branch |               | 1           |
| 0x1401f0c27#88  | direct_call        | 0             |             |
| 0x1401f0c2c#91  | memory_write       | 1             | 2           |
| 0x1401f0c30#267 | memory_read        | 1             |             |
| 0x1401f0c30#268 | memory_read        | 1             |             |
| 0x1401f0c37#270 | memory_write       | 1             | 2           |
| 0x1401f0c37#271 | memory_write       | 1             | 2           |
| 0x1401f0c3e#273 | memory_read        | 1             |             |
| 0x1401f0c3e#274 | memory_read        | 1             |             |
| 0x1401f0c45#276 | memory_write       | 1             | 2           |
| 0x1401f0c45#277 | memory_write       | 1             | 2           |
| 0x1401f0c4c#113 | memory_read        | 1             |             |
| 0x1401f0c53#117 | memory_write       | 1             | 2           |

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

0x1401f0bc0

## normalized_result.procedure.name

FUN_1401f0bc0

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
| 0x1401f0bc0 | 0x1401f0c6c |

## normalized_result.procedure.body.total_bytes

173

## normalized_result.procedure.body.span_bytes

173

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f0bc0()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## normalized_result.pseudocode


undefined8 * FUN_1401f0bc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_140002a80(param_1 + 1,param_2 + 1);
  FUN_140002a80(param_1 + 5,param_2 + 5);
  FUN_140002a80(param_1 + 9,param_2 + 9);
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (*(char *)(param_2 + 0x11) != '\0') {
    FUN_140002a80(param_1 + 0xd,param_2 + 0xd);
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  param_1[0x16] = param_2[0x16];
  return param_1;
}



## normalized_result.assembly

0x1401f0bc0: MOV qword ptr [RSP + 0x18], RBX,0x1401f0bc5: MOV qword ptr [RSP + 0x20], RSI,0x1401f0bca: MOV qword ptr [RSP + 0x8], RCX,0x1401f0bcf: PUSH RDI,0x1401f0bd0: SUB RSP, 0x20,0x1401f0bd4: MOV RDI, RDX,0x1401f0bd7: MOV RBX, RCX,0x1401f0bda: MOV RAX, qword ptr [RDX],0x1401f0bdd: MOV qword ptr [RCX], RAX,0x1401f0be0: ADD RDX, 0x8,0x1401f0be4: ADD RCX, 0x8,0x1401f0be8: CALL 0x140002a80,0x1401f0bed: NOP,0x1401f0bee: LEA RDX, [RDI + 0x28],0x1401f0bf2: LEA RCX, [RBX + 0x28],0x1401f0bf6: CALL 0x140002a80,0x1401f0bfb: NOP,0x1401f0bfc: LEA RDX, [RDI + 0x48],0x1401f0c00: LEA RCX, [RBX + 0x48],0x1401f0c04: CALL 0x140002a80,0x1401f0c09: NOP,0x1401f0c0a: LEA RSI, [RBX + 0x68],0x1401f0c0e: MOV qword ptr [RSP + 0x38], RSI,0x1401f0c13: MOV byte ptr [RSI + 0x20], 0x0,0x1401f0c17: CMP byte ptr [RDI + 0x88], 0x0,0x1401f0c1e: JZ 0x1401f0c30,0x1401f0c20: LEA RDX, [RDI + 0x68],0x1401f0c24: MOV RCX, RSI,0x1401f0c27: CALL 0x140002a80,0x1401f0c2c: MOV byte ptr [RSI + 0x20], 0x1,0x1401f0c30: MOVUPS XMM0, xmmword ptr [RDI + 0x90],0x1401f0c37: MOVUPS xmmword ptr [RBX + 0x90], XMM0,0x1401f0c3e: MOVUPS XMM1, xmmword ptr [RDI + 0xa0],0x1401f0c45: MOVUPS xmmword ptr [RBX + 0xa0], XMM1,0x1401f0c4c: MOV RAX, qword ptr [RDI + 0xb0],0x1401f0c53: MOV qword ptr [RBX + 0xb0], RAX,0x1401f0c5a: MOV RAX, RBX,0x1401f0c5d: MOV RBX, qword ptr [RSP + 0x40],0x1401f0c62: MOV RSI, qword ptr [RSP + 0x48],0x1401f0c67: ADD RSP, 0x20,0x1401f0c6b: POP RDI,0x1401f0c6c: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |
| 0x1401f7240 | FUN_1401f7240 | [object Object] | [object Object] |
| 0x14030be50 | FUN_14030be50 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140002a80 | FUN_140002a80 | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f3f3e    | 0x1401f0bc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f728e    | 0x1401f0bc0    | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf90    | 0x1401f0bc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df7f8    | 0x1401f0bc0    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f0bc0    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x1401f0bc5    | stack:0x20     | [object Object]  |                  | [object Object] |
| 0x1401f0bca    | stack:0x8      | [object Object]  |                  | [object Object] |
| 0x1401f0be8    | 0x140002a80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0bf6    | 0x140002a80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0c04    | 0x140002a80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0c0e    | stack:0x10     | [object Object]  |                  | [object Object] |
| 0x1401f0c1e    | 0x1401f0c30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0c27    | 0x140002a80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0c5d    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x1401f0c62    | stack:0x20     | [object Object]  |                  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x140002a80 | FUN_140002a80 | 0x1401f0be8    |
| 0x140002a80 | FUN_140002a80 | 0x1401f0bf6    |
| 0x140002a80 | FUN_140002a80 | 0x1401f0c04    |
| 0x140002a80 | FUN_140002a80 | 0x1401f0c27    |
| 0x1401f0c30 | LAB_1401f0c30 | 0x1401f0c1e    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f0bc0 | 0x1401f0c20 | 0x1401f0c20,0x1401f0c30 |
| 0x1401f0c20 | 0x1401f0c30 | 0x1401f0c30             |
| 0x1401f0c30 | 0x1401f0c6d |                         |

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

undefined8 *

## normalized_result.native_api.return_type.size_bytes

8

## normalized_result.native_api.return_type.storage

RAX:8

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                         |
|------------------|-------------------------|------------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.          |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined8 *. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters

| ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | undefined8 * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-------------------------------------------------|-----------------|
| 0x1401f0bda#23  | 0x1401f0bda | 23       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0bdd#26  | 0x1401f0bdd | 26       | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0be0#310 | 0x1401f0be0 | 310      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0be4#311 | 0x1401f0be4 | 311      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0be8#47  | 0x1401f0be8 | 47       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0bee#312 | 0x1401f0bee | 312      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0bf2#313 | 0x1401f0bf2 | 313      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0bf6#54  | 0x1401f0bf6 | 54       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0bfc#314 | 0x1401f0bfc | 314      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c00#315 | 0x1401f0c00 | 315      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c04#61  | 0x1401f0c04 | 61       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c0a#316 | 0x1401f0c0a | 316      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c13#69  | 0x1401f0c13 | 69       | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c13#317 | 0x1401f0c13 | 317      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c13#331 | 0x1401f0c13 | 331      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f0c17#71  | 0x1401f0c17 | 71       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c17#77  | 0x1401f0c17 | 77       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c17#318 | 0x1401f0c17 | 318      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c17#332 | 0x1401f0c17 | 332      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f0c1e#82  | 0x1401f0c1e | 82       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f0c20#319 | 0x1401f0c20 | 319      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c27#88  | 0x1401f0c27 | 88       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c2c#91  | 0x1401f0c2c | 91       | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c2c#320 | 0x1401f0c2c | 320      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c2c#333 | 0x1401f0c2c | 333      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f0c30#267 | 0x1401f0c30 | 267      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c30#268 | 0x1401f0c30 | 268      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c30#321 | 0x1401f0c30 | 321      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c30#322 | 0x1401f0c30 | 322      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c37#270 | 0x1401f0c37 | 270      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c37#271 | 0x1401f0c37 | 271      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c37#323 | 0x1401f0c37 | 323      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c37#324 | 0x1401f0c37 | 324      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c3e#273 | 0x1401f0c3e | 273      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c3e#274 | 0x1401f0c3e | 274      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c3e#325 | 0x1401f0c3e | 325      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c3e#326 | 0x1401f0c3e | 326      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c45#276 | 0x1401f0c45 | 276      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c45#277 | 0x1401f0c45 | 277      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c45#327 | 0x1401f0c45 | 327      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c45#328 | 0x1401f0c45 | 328      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c4c#113 | 0x1401f0c4c | 113      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f0c4c#329 | 0x1401f0c4c | 329      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c53#117 | 0x1401f0c53 | 117      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f0c53#330 | 0x1401f0c53 | 330      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f0c5a#118 | 0x1401f0c5a | 118      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f0c6c#140 | 0x1401f0c6c | 140      | RETURN       | true    | member           | [object Object],[object Object]                 |                 |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f0bda#23  | 0x1401f0bdd#26  | 2           |
| 0x1401f0be4#311 | 0x1401f0be8#47  | 1           |
| 0x1401f0be0#310 | 0x1401f0be8#47  | 2           |
| 0x1401f0bf2#313 | 0x1401f0bf6#54  | 1           |
| 0x1401f0bee#312 | 0x1401f0bf6#54  | 2           |
| 0x1401f0c00#315 | 0x1401f0c04#61  | 1           |
| 0x1401f0bfc#314 | 0x1401f0c04#61  | 2           |
| 0x1401f0c13#331 | 0x1401f0c13#69  | 1           |
| 0x1401f0c13#317 | 0x1401f0c13#331 | 0           |
| 0x1401f0c17#332 | 0x1401f0c17#71  | 1           |
| 0x1401f0c17#71  | 0x1401f0c17#77  | 0           |
| 0x1401f0c17#318 | 0x1401f0c17#332 | 0           |
| 0x1401f0c17#77  | 0x1401f0c1e#82  | 1           |
| 0x1401f0c0a#316 | 0x1401f0c27#88  | 1           |
| 0x1401f0c20#319 | 0x1401f0c27#88  | 2           |
| 0x1401f0c2c#333 | 0x1401f0c2c#91  | 1           |
| 0x1401f0c2c#320 | 0x1401f0c2c#333 | 0           |
| 0x1401f0c30#321 | 0x1401f0c30#267 | 1           |
| 0x1401f0c30#322 | 0x1401f0c30#268 | 1           |
| 0x1401f0c37#323 | 0x1401f0c37#270 | 1           |
| 0x1401f0c30#267 | 0x1401f0c37#270 | 2           |
| 0x1401f0c37#324 | 0x1401f0c37#271 | 1           |
| 0x1401f0c30#268 | 0x1401f0c37#271 | 2           |
| 0x1401f0c3e#325 | 0x1401f0c3e#273 | 1           |
| 0x1401f0c3e#326 | 0x1401f0c3e#274 | 1           |
| 0x1401f0c45#327 | 0x1401f0c45#276 | 1           |
| 0x1401f0c3e#273 | 0x1401f0c45#276 | 2           |
| 0x1401f0c45#328 | 0x1401f0c45#277 | 1           |
| 0x1401f0c3e#274 | 0x1401f0c45#277 | 2           |
| 0x1401f0c4c#329 | 0x1401f0c4c#113 | 1           |
| 0x1401f0c53#330 | 0x1401f0c53#117 | 1           |
| 0x1401f0c4c#113 | 0x1401f0c53#117 | 2           |
| 0x1401f0c5a#118 | 0x1401f0c6c#140 | 1           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f0bda#23  | memory_read        | 1             |             |
| 0x1401f0bdd#26  | memory_write       | 1             | 2           |
| 0x1401f0be8#47  | direct_call        | 0             |             |
| 0x1401f0bf6#54  | direct_call        | 0             |             |
| 0x1401f0c04#61  | direct_call        | 0             |             |
| 0x1401f0c13#69  | memory_write       | 1             | 2           |
| 0x1401f0c17#71  | memory_read        | 1             |             |
| 0x1401f0c1e#82  | conditional_branch |               | 1           |
| 0x1401f0c27#88  | direct_call        | 0             |             |
| 0x1401f0c2c#91  | memory_write       | 1             | 2           |
| 0x1401f0c30#267 | memory_read        | 1             |             |
| 0x1401f0c30#268 | memory_read        | 1             |             |
| 0x1401f0c37#270 | memory_write       | 1             | 2           |
| 0x1401f0c37#271 | memory_write       | 1             | 2           |
| 0x1401f0c3e#273 | memory_read        | 1             |             |
| 0x1401f0c3e#274 | memory_read        | 1             |             |
| 0x1401f0c45#276 | memory_write       | 1             | 2           |
| 0x1401f0c45#277 | memory_write       | 1             | 2           |
| 0x1401f0c4c#113 | memory_read        | 1             |             |
| 0x1401f0c53#117 | memory_write       | 1             | 2           |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |
| 1       | param_2 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 1       | 0x1401f0bda#23  | 1           |
| 0       | 0x1401f0bdd#26  | 1           |
| 1       | 0x1401f0be0#310 | 0           |
| 0       | 0x1401f0be4#311 | 0           |
| 1       | 0x1401f0bee#312 | 0           |
| 0       | 0x1401f0bf2#313 | 0           |
| 1       | 0x1401f0bfc#314 | 0           |
| 0       | 0x1401f0c00#315 | 0           |
| 0       | 0x1401f0c0a#316 | 0           |
| 0       | 0x1401f0c13#317 | 0           |
| 1       | 0x1401f0c17#318 | 0           |
| 1       | 0x1401f0c20#319 | 0           |
| 0       | 0x1401f0c2c#320 | 0           |
| 1       | 0x1401f0c30#321 | 0           |
| 1       | 0x1401f0c30#322 | 0           |
| 0       | 0x1401f0c37#323 | 0           |
| 0       | 0x1401f0c37#324 | 0           |
| 1       | 0x1401f0c3e#325 | 0           |
| 1       | 0x1401f0c3e#326 | 0           |
| 0       | 0x1401f0c45#327 | 0           |
| 0       | 0x1401f0c45#328 | 0           |
| 1       | 0x1401f0c4c#329 | 0           |
| 0       | 0x1401f0c53#330 | 0           |
| 0       | 0x1401f0c5a#118 | 0           |

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

