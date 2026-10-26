## evidence_id

ev_a4cc0d7f2cf8f206908922d6b472b343bb77b45ecb4e072f4fd4e15572006b5f

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
| procedure | 0x1401f4d90 |

## raw_result.value.procedure.address

0x1401f4d90

## raw_result.value.procedure.name

FUN_1401f4d90

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
| 0x1401f4d90 | 0x1401f4e07 |
| 0x1401f4e09 | 0x1401f4e12 |

## raw_result.value.procedure.body.total_bytes

130

## raw_result.value.procedure.body.span_bytes

131

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f4d90()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## raw_result.value.pseudocode


undefined8 FUN_1401f4d90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1403265a0(param_1 + 0x1e0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140325560(5);
  }
  if (*(int *)(param_1 + 0x22c) != 0x7fffffff) {
    FUN_140011e60(param_2,param_1 + 0x2a8);
    FUN_1403266c0(param_1 + 0x1e0);
    return param_2;
  }
  *(undefined4 *)(param_1 + 0x22c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140325560(6);
}



## raw_result.value.assembly

0x1401f4d90: MOV qword ptr [RSP + 0x10], RBX,0x1401f4d95: MOV qword ptr [RSP + 0x18], RSI,0x1401f4d9a: PUSH RDI,0x1401f4d9b: SUB RSP, 0x30,0x1401f4d9f: MOV RDI, RDX,0x1401f4da2: MOV RBX, RCX,0x1401f4da5: LEA RSI, [RCX + 0x1e0],0x1401f4dac: MOV qword ptr [RSP + 0x40], RSI,0x1401f4db1: MOV RCX, RSI,0x1401f4db4: CALL 0x1403265a0,0x1401f4db9: TEST EAX, EAX,0x1401f4dbb: JNZ 0x1401f4e09,0x1401f4dbd: CMP dword ptr [RBX + 0x22c], 0x7fffffff,0x1401f4dc7: JZ 0x1401f4df4,0x1401f4dc9: LEA RDX, [RBX + 0x2a8],0x1401f4dd0: MOV RCX, RDI,0x1401f4dd3: CALL 0x140011e60,0x1401f4dd8: NOP,0x1401f4dd9: MOV RCX, RSI,0x1401f4ddc: CALL 0x1403266c0,0x1401f4de1: MOV RAX, RDI,0x1401f4de4: MOV RBX, qword ptr [RSP + 0x48],0x1401f4de9: MOV RSI, qword ptr [RSP + 0x50],0x1401f4dee: ADD RSP, 0x30,0x1401f4df2: POP RDI,0x1401f4df3: RET,0x1401f4df4: MOV dword ptr [RBX + 0x22c], 0x7ffffffe,0x1401f4dfe: MOV ECX, 0x6,0x1401f4e03: CALL 0x140325560,0x1401f4e09: MOV ECX, 0x5,0x1401f4e0e: CALL 0x140325560

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f9940 | FUN_1401f9940 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140011e60 | FUN_140011e60 | [object Object] | [object Object] |
| 0x140325560 | FUN_140325560 | [object Object] | [object Object] |
| 0x1403265a0 | FUN_1403265a0 | [object Object] | [object Object] |
| 0x1403266c0 | FUN_1403266c0 | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f9e48    | 0x1401f4d90    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df9fc    | 0x1401f4d90    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f4d90    | stack:0x10     | [object Object]  |                  | [object Object] |
| 0x1401f4d95    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x1401f4dac    | stack:0x8      | [object Object]  |                  | [object Object] |
| 0x1401f4db4    | 0x1403265a0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4dbb    | 0x1401f4e09    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4dc7    | 0x1401f4df4    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4dd3    | 0x140011e60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ddc    | 0x1403266c0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4de4    | stack:0x10     | [object Object]  |                  | [object Object] |
| 0x1401f4de9    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x1401f4e03    | 0x140325560    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e0e    | 0x140325560    | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x140011e60 | FUN_140011e60 | 0x1401f4dd3    |
| 0x1401f4df4 | LAB_1401f4df4 | 0x1401f4dc7    |
| 0x1401f4e09 | LAB_1401f4e09 | 0x1401f4dbb    |
| 0x140325560 | FUN_140325560 | 0x1401f4e03    |
| 0x140325560 | FUN_140325560 | 0x1401f4e0e    |
| 0x1403265a0 | FUN_1403265a0 | 0x1401f4db4    |
| 0x1403266c0 | FUN_1403266c0 | 0x1401f4ddc    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4d90 | 0x1401f4dbd | 0x1401f4dbd,0x1401f4e09 |
| 0x1401f4dbd | 0x1401f4dc9 | 0x1401f4dc9,0x1401f4df4 |
| 0x1401f4dc9 | 0x1401f4df4 |                         |
| 0x1401f4df4 | 0x1401f4e08 |                         |
| 0x1401f4e09 | 0x1401f4e13 |                         |

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

| role      | ordinal | name    | data_type  | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | longlong   | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | undefined8 | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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
| 0x1401f4da5#20  | 0x1401f4da5 | 20       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4db4#28  | 0x1401f4db4 | 28       | CALL         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4db9#33  | 0x1401f4db9 | 33       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4dbb#39  | 0x1401f4dbb | 39       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4dbd#40  | 0x1401f4dbd | 40       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4dbd#41  | 0x1401f4dbd | 41       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4dbd#47  | 0x1401f4dbd | 47       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4dbd#206 | 0x1401f4dbd | 206      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f4dc7#52  | 0x1401f4dc7 | 52       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4dc9#53  | 0x1401f4dc9 | 53       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4dd3#58  | 0x1401f4dd3 | 58       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f4ddc#62  | 0x1401f4ddc | 62       | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4de1#63  | 0x1401f4de1 | 63       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f4df3#85  | 0x1401f4df3 | 85       | RETURN       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4df4#86  | 0x1401f4df4 | 86       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4df4#88  | 0x1401f4df4 | 88       | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f4df4#207 | 0x1401f4df4 | 207      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f4e03#92  | 0x1401f4e03 | 92       | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4e03#94  | 0x1401f4e03 | 94       | RETURN       | true    | member           | [object Object]                                 |                 |
| 0x1401f4e0e#98  | 0x1401f4e0e | 98       | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4e0e#100 | 0x1401f4e0e | 100      | RETURN       | true    | member           | [object Object]                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f4da5#20  | 0x1401f4db4#28  | 1           |
| 0x1401f4db4#28  | 0x1401f4db9#33  | 0           |
| 0x1401f4db9#33  | 0x1401f4dbb#39  | 1           |
| 0x1401f4dbd#206 | 0x1401f4dbd#41  | 1           |
| 0x1401f4dbd#41  | 0x1401f4dbd#47  | 0           |
| 0x1401f4dbd#40  | 0x1401f4dbd#206 | 0           |
| 0x1401f4dbd#47  | 0x1401f4dc7#52  | 1           |
| 0x1401f4dc9#53  | 0x1401f4dd3#58  | 2           |
| 0x1401f4da5#20  | 0x1401f4ddc#62  | 1           |
| 0x1401f4de1#63  | 0x1401f4df3#85  | 1           |
| 0x1401f4df4#207 | 0x1401f4df4#88  | 1           |
| 0x1401f4df4#86  | 0x1401f4df4#207 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /longlong   |
| 1       | param_2 | /undefined8 |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use            | input_index |
|---------|----------------|-------------|
| 0       | 0x1401f4da5#20 | 0           |
| 0       | 0x1401f4dbd#40 | 0           |
| 0       | 0x1401f4dc9#53 | 0           |
| 1       | 0x1401f4dd3#58 | 1           |
| 1       | 0x1401f4de1#63 | 0           |
| 0       | 0x1401f4df4#86 | 0           |

## raw_result.value.native_value_flow.effects

| operation      | kind               | operand_input | value_input |
|----------------|--------------------|---------------|-------------|
| 0x1401f4db4#28 | direct_call        | 0             |             |
| 0x1401f4dbb#39 | conditional_branch |               | 1           |
| 0x1401f4dbd#41 | memory_read        | 1             |             |
| 0x1401f4dc7#52 | conditional_branch |               | 1           |
| 0x1401f4dd3#58 | direct_call        | 0             |             |
| 0x1401f4ddc#62 | direct_call        | 0             |             |
| 0x1401f4df4#88 | memory_write       | 1             | 2           |
| 0x1401f4e03#92 | direct_call        | 0             |             |
| 0x1401f4e0e#98 | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f4e03 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f4e0e to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401f4e03 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f4e0e to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x1401f4d90

## normalized_result.procedure.name

FUN_1401f4d90

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
| 0x1401f4d90 | 0x1401f4e07 |
| 0x1401f4e09 | 0x1401f4e12 |

## normalized_result.procedure.body.total_bytes

130

## normalized_result.procedure.body.span_bytes

131

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f4d90()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## normalized_result.pseudocode


undefined8 FUN_1401f4d90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1403265a0(param_1 + 0x1e0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140325560(5);
  }
  if (*(int *)(param_1 + 0x22c) != 0x7fffffff) {
    FUN_140011e60(param_2,param_1 + 0x2a8);
    FUN_1403266c0(param_1 + 0x1e0);
    return param_2;
  }
  *(undefined4 *)(param_1 + 0x22c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140325560(6);
}



## normalized_result.assembly

0x1401f4d90: MOV qword ptr [RSP + 0x10], RBX,0x1401f4d95: MOV qword ptr [RSP + 0x18], RSI,0x1401f4d9a: PUSH RDI,0x1401f4d9b: SUB RSP, 0x30,0x1401f4d9f: MOV RDI, RDX,0x1401f4da2: MOV RBX, RCX,0x1401f4da5: LEA RSI, [RCX + 0x1e0],0x1401f4dac: MOV qword ptr [RSP + 0x40], RSI,0x1401f4db1: MOV RCX, RSI,0x1401f4db4: CALL 0x1403265a0,0x1401f4db9: TEST EAX, EAX,0x1401f4dbb: JNZ 0x1401f4e09,0x1401f4dbd: CMP dword ptr [RBX + 0x22c], 0x7fffffff,0x1401f4dc7: JZ 0x1401f4df4,0x1401f4dc9: LEA RDX, [RBX + 0x2a8],0x1401f4dd0: MOV RCX, RDI,0x1401f4dd3: CALL 0x140011e60,0x1401f4dd8: NOP,0x1401f4dd9: MOV RCX, RSI,0x1401f4ddc: CALL 0x1403266c0,0x1401f4de1: MOV RAX, RDI,0x1401f4de4: MOV RBX, qword ptr [RSP + 0x48],0x1401f4de9: MOV RSI, qword ptr [RSP + 0x50],0x1401f4dee: ADD RSP, 0x30,0x1401f4df2: POP RDI,0x1401f4df3: RET,0x1401f4df4: MOV dword ptr [RBX + 0x22c], 0x7ffffffe,0x1401f4dfe: MOV ECX, 0x6,0x1401f4e03: CALL 0x140325560,0x1401f4e09: MOV ECX, 0x5,0x1401f4e0e: CALL 0x140325560

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f9940 | FUN_1401f9940 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140011e60 | FUN_140011e60 | [object Object] | [object Object] |
| 0x140325560 | FUN_140325560 | [object Object] | [object Object] |
| 0x1403265a0 | FUN_1403265a0 | [object Object] | [object Object] |
| 0x1403266c0 | FUN_1403266c0 | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f9e48    | 0x1401f4d90    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df9fc    | 0x1401f4d90    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f4d90    | stack:0x10     | [object Object]  |                  | [object Object] |
| 0x1401f4d95    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x1401f4dac    | stack:0x8      | [object Object]  |                  | [object Object] |
| 0x1401f4db4    | 0x1403265a0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4dbb    | 0x1401f4e09    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4dc7    | 0x1401f4df4    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4dd3    | 0x140011e60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ddc    | 0x1403266c0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4de4    | stack:0x10     | [object Object]  |                  | [object Object] |
| 0x1401f4de9    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x1401f4e03    | 0x140325560    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e0e    | 0x140325560    | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x140011e60 | FUN_140011e60 | 0x1401f4dd3    |
| 0x1401f4df4 | LAB_1401f4df4 | 0x1401f4dc7    |
| 0x1401f4e09 | LAB_1401f4e09 | 0x1401f4dbb    |
| 0x140325560 | FUN_140325560 | 0x1401f4e03    |
| 0x140325560 | FUN_140325560 | 0x1401f4e0e    |
| 0x1403265a0 | FUN_1403265a0 | 0x1401f4db4    |
| 0x1403266c0 | FUN_1403266c0 | 0x1401f4ddc    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4d90 | 0x1401f4dbd | 0x1401f4dbd,0x1401f4e09 |
| 0x1401f4dbd | 0x1401f4dc9 | 0x1401f4dc9,0x1401f4df4 |
| 0x1401f4dc9 | 0x1401f4df4 |                         |
| 0x1401f4df4 | 0x1401f4e08 |                         |
| 0x1401f4e09 | 0x1401f4e13 |                         |

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

| ordinal | name    | data_type  | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | longlong   | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | undefined8 | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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
| 0x1401f4da5#20  | 0x1401f4da5 | 20       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4db4#28  | 0x1401f4db4 | 28       | CALL         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4db9#33  | 0x1401f4db9 | 33       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4dbb#39  | 0x1401f4dbb | 39       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4dbd#40  | 0x1401f4dbd | 40       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4dbd#41  | 0x1401f4dbd | 41       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4dbd#47  | 0x1401f4dbd | 47       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4dbd#206 | 0x1401f4dbd | 206      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f4dc7#52  | 0x1401f4dc7 | 52       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4dc9#53  | 0x1401f4dc9 | 53       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4dd3#58  | 0x1401f4dd3 | 58       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f4ddc#62  | 0x1401f4ddc | 62       | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4de1#63  | 0x1401f4de1 | 63       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f4df3#85  | 0x1401f4df3 | 85       | RETURN       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4df4#86  | 0x1401f4df4 | 86       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f4df4#88  | 0x1401f4df4 | 88       | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f4df4#207 | 0x1401f4df4 | 207      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f4e03#92  | 0x1401f4e03 | 92       | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4e03#94  | 0x1401f4e03 | 94       | RETURN       | true    | member           | [object Object]                                 |                 |
| 0x1401f4e0e#98  | 0x1401f4e0e | 98       | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f4e0e#100 | 0x1401f4e0e | 100      | RETURN       | true    | member           | [object Object]                                 |                 |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f4da5#20  | 0x1401f4db4#28  | 1           |
| 0x1401f4db4#28  | 0x1401f4db9#33  | 0           |
| 0x1401f4db9#33  | 0x1401f4dbb#39  | 1           |
| 0x1401f4dbd#206 | 0x1401f4dbd#41  | 1           |
| 0x1401f4dbd#41  | 0x1401f4dbd#47  | 0           |
| 0x1401f4dbd#40  | 0x1401f4dbd#206 | 0           |
| 0x1401f4dbd#47  | 0x1401f4dc7#52  | 1           |
| 0x1401f4dc9#53  | 0x1401f4dd3#58  | 2           |
| 0x1401f4da5#20  | 0x1401f4ddc#62  | 1           |
| 0x1401f4de1#63  | 0x1401f4df3#85  | 1           |
| 0x1401f4df4#207 | 0x1401f4df4#88  | 1           |
| 0x1401f4df4#86  | 0x1401f4df4#207 | 0           |

## normalized_result.native_value_flow.effects

| operation      | kind               | operand_input | value_input |
|----------------|--------------------|---------------|-------------|
| 0x1401f4db4#28 | direct_call        | 0             |             |
| 0x1401f4dbb#39 | conditional_branch |               | 1           |
| 0x1401f4dbd#41 | memory_read        | 1             |             |
| 0x1401f4dc7#52 | conditional_branch |               | 1           |
| 0x1401f4dd3#58 | direct_call        | 0             |             |
| 0x1401f4ddc#62 | direct_call        | 0             |             |
| 0x1401f4df4#88 | memory_write       | 1             | 2           |
| 0x1401f4e03#92 | direct_call        | 0             |             |
| 0x1401f4e0e#98 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /longlong   |
| 1       | param_2 | /undefined8 |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use            | input_index |
|---------|----------------|-------------|
| 0       | 0x1401f4da5#20 | 0           |
| 0       | 0x1401f4dbd#40 | 0           |
| 0       | 0x1401f4dc9#53 | 0           |
| 1       | 0x1401f4dd3#58 | 1           |
| 1       | 0x1401f4de1#63 | 0           |
| 0       | 0x1401f4df4#86 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f4e03 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f4e0e to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401f4e03 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f4e0e to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

