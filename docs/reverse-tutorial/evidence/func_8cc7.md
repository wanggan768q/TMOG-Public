## evidence_id

ev_19cb66eadfd0ab6e6140508294882aeda1614e177d4e310d69cd38c7eec6c8c0

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
| procedure | 0x1401f8cc7 |

## raw_result.value.procedure.address

0x1401f8cc0

## raw_result.value.procedure.name

FUN_1401f8cc0

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
| 0x1401f8cc0 | 0x1401f8ccb |

## raw_result.value.procedure.body.total_bytes

12

## raw_result.value.procedure.body.span_bytes

12

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f8cc0()

## raw_result.value.procedure.locals



## raw_result.value.pseudocode


void FUN_1401f8cc0(longlong param_1)

{
  FUN_1401f5c70(param_1 + 0x1a38);
  return;
}



## raw_result.value.assembly

0x1401f8cc0: ADD RCX, 0x1a38,0x1401f8cc7: JMP 0x1401f5c70

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x14009b5f0 | FUN_14009b5f0 | [object Object] | [object Object] |
| 0x1400a7230 | FUN_1400a7230 | [object Object] | [object Object] |
| 0x1400a7640 | FUN_1400a7640 | [object Object] | [object Object] |
| 0x1400a8d60 | FUN_1400a8d60 | [object Object] | [object Object] |
| 0x1400ab770 | FUN_1400ab770 | [object Object] | [object Object] |
| 0x14010ba10 | FUN_14010ba10 | [object Object] | [object Object] |
| 0x1401848d0 | FUN_1401848d0 | [object Object] | [object Object] |
| 0x1401a1dc0 | FUN_1401a1dc0 | [object Object] | [object Object] |
| 0x1401a3340 | FUN_1401a3340 | [object Object] | [object Object] |
| 0x1401ae210 | FUN_1401ae210 | [object Object] | [object Object] |
| 0x1401c84e0 | FUN_1401c84e0 | [object Object] | [object Object] |
| 0x1401d0f40 | FUN_1401d0f40 | [object Object] | [object Object] |
| 0x1401d1e20 | FUN_1401d1e20 | [object Object] | [object Object] |
| 0x1401e43d0 | FUN_1401e43d0 | [object Object] | [object Object] |
| 0x1401e59c0 | FUN_1401e59c0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f5c70 | FUN_1401f5c70 | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14009c0db    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400a7252    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400a7669    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400a8d75    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400ab781    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x14010ba35    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401853c4    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a1e54    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a33c8    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401ae242    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c8524    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401d1306    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401d1edc    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e464e    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e6785    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e6cff    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f8cc7    | 0x1401f5c70    | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x1401f5c70 | FUN_1401f5c70 | 0x1401f8cc7    |

## raw_result.value.basic_blocks

| start       | end         | successors |
|-------------|-------------|------------|
| 0x1401f8cc0 | 0x1401f8ccc |            |

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

| id             | address     | sequence | opcode  | is_dead | block_membership | inputs                          | output          |
|----------------|-------------|----------|---------|---------|------------------|---------------------------------|-----------------|
| 0x1401f8cc0#2  | 0x1401f8cc0 | 2        | INT_ADD | true    | member           | [object Object],[object Object] | [object Object] |
| 0x1401f8cc7#9  | 0x1401f8cc7 | 9        | CALL    | true    | member           | [object Object],[object Object] |                 |
| 0x1401f8cc7#10 | 0x1401f8cc7 | 10       | RETURN  | true    | member           | [object Object]                 |                 |

## raw_result.value.native_value_flow.def_use

| definition    | use           | input_index |
|---------------|---------------|-------------|
| 0x1401f8cc0#2 | 0x1401f8cc7#9 | 1           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use           | input_index |
|---------|---------------|-------------|
| 0       | 0x1401f8cc0#2 | 0           |

## raw_result.value.native_value_flow.effects

| operation     | kind        | operand_input | value_input |
|---------------|-------------|---------------|-------------|
| 0x1401f8cc7#9 | direct_call | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f8cc7 to 0x1401f5c70 FUN_1401f5c70 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401f8cc7 to 0x1401f5c70 FUN_1401f5c70 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.

## normalized_result.procedure.address

0x1401f8cc0

## normalized_result.procedure.name

FUN_1401f8cc0

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
| 0x1401f8cc0 | 0x1401f8ccb |

## normalized_result.procedure.body.total_bytes

12

## normalized_result.procedure.body.span_bytes

12

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f8cc0()

## normalized_result.procedure.locals



## normalized_result.pseudocode


void FUN_1401f8cc0(longlong param_1)

{
  FUN_1401f5c70(param_1 + 0x1a38);
  return;
}



## normalized_result.assembly

0x1401f8cc0: ADD RCX, 0x1a38,0x1401f8cc7: JMP 0x1401f5c70

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x14009b5f0 | FUN_14009b5f0 | [object Object] | [object Object] |
| 0x1400a7230 | FUN_1400a7230 | [object Object] | [object Object] |
| 0x1400a7640 | FUN_1400a7640 | [object Object] | [object Object] |
| 0x1400a8d60 | FUN_1400a8d60 | [object Object] | [object Object] |
| 0x1400ab770 | FUN_1400ab770 | [object Object] | [object Object] |
| 0x14010ba10 | FUN_14010ba10 | [object Object] | [object Object] |
| 0x1401848d0 | FUN_1401848d0 | [object Object] | [object Object] |
| 0x1401a1dc0 | FUN_1401a1dc0 | [object Object] | [object Object] |
| 0x1401a3340 | FUN_1401a3340 | [object Object] | [object Object] |
| 0x1401ae210 | FUN_1401ae210 | [object Object] | [object Object] |
| 0x1401c84e0 | FUN_1401c84e0 | [object Object] | [object Object] |
| 0x1401d0f40 | FUN_1401d0f40 | [object Object] | [object Object] |
| 0x1401d1e20 | FUN_1401d1e20 | [object Object] | [object Object] |
| 0x1401e43d0 | FUN_1401e43d0 | [object Object] | [object Object] |
| 0x1401e59c0 | FUN_1401e59c0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f5c70 | FUN_1401f5c70 | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14009c0db    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400a7252    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400a7669    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400a8d75    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400ab781    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x14010ba35    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401853c4    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a1e54    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401a33c8    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401ae242    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c8524    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401d1306    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401d1edc    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e464e    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e6785    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e6cff    | 0x1401f8cc0    | [object Object]  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f8cc7    | 0x1401f5c70    | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x1401f5c70 | FUN_1401f5c70 | 0x1401f8cc7    |

## normalized_result.basic_blocks

| start       | end         | successors |
|-------------|-------------|------------|
| 0x1401f8cc0 | 0x1401f8ccc |            |

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

| id             | address     | sequence | opcode  | is_dead | block_membership | inputs                          | output          |
|----------------|-------------|----------|---------|---------|------------------|---------------------------------|-----------------|
| 0x1401f8cc0#2  | 0x1401f8cc0 | 2        | INT_ADD | true    | member           | [object Object],[object Object] | [object Object] |
| 0x1401f8cc7#9  | 0x1401f8cc7 | 9        | CALL    | true    | member           | [object Object],[object Object] |                 |
| 0x1401f8cc7#10 | 0x1401f8cc7 | 10       | RETURN  | true    | member           | [object Object]                 |                 |

## normalized_result.native_value_flow.def_use

| definition    | use           | input_index |
|---------------|---------------|-------------|
| 0x1401f8cc0#2 | 0x1401f8cc7#9 | 1           |

## normalized_result.native_value_flow.effects

| operation     | kind        | operand_input | value_input |
|---------------|-------------|---------------|-------------|
| 0x1401f8cc7#9 | direct_call | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use           | input_index |
|---------|---------------|-------------|
| 0       | 0x1401f8cc0#2 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f8cc7 to 0x1401f5c70 FUN_1401f5c70 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401f8cc7 to 0x1401f5c70 FUN_1401f5c70 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

