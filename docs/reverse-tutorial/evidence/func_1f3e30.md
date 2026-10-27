## evidence_id

ev_e44ce711553848c62235feac187d2c62b4d3862a14f3bcc9068b01e43136be9e

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
| procedure | 0x1401f3e30 |

## raw_result.value.procedure.address

0x1401f3e30

## raw_result.value.procedure.name

FUN_1401f3e30

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
| 0x1401f3e30 | 0x1401f3e8e |

## raw_result.value.procedure.body.total_bytes

95

## raw_result.value.procedure.body.span_bytes

95

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f3e30()

## raw_result.value.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8 | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8 | ghidra-function-database |
| undefined local_38 @ Stack[-0x38]:1  | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1401f3e30(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_58;
  FUN_1401f5580(local_38,param_1);
  if (local_28 != 0) {
    cVar1 = FUN_1400370d0(local_38);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_1401f3e6f;
    }
  }
  uVar2 = 0;
LAB_1401f3e6f:
  FUN_1400055b0(local_38);
  return uVar2;
}



## raw_result.value.assembly

0x1401f3e30: PUSH RBX,0x1401f3e32: SUB RSP, 0x50,0x1401f3e36: MOV RAX, qword ptr [0x1404c7ac0],0x1401f3e3d: XOR RAX, RSP,0x1401f3e40: MOV qword ptr [RSP + 0x40], RAX,0x1401f3e45: MOV RDX, RCX,0x1401f3e48: LEA RCX, [RSP + 0x20],0x1401f3e4d: CALL 0x1401f5580,0x1401f3e52: NOP,0x1401f3e53: CMP qword ptr [RSP + 0x30], 0x0,0x1401f3e59: JZ 0x1401f3e6d,0x1401f3e5b: LEA RCX, [RSP + 0x20],0x1401f3e60: CALL 0x1400370d0,0x1401f3e65: TEST AL, AL,0x1401f3e67: JZ 0x1401f3e6d,0x1401f3e69: MOV BL, 0x1,0x1401f3e6b: JMP 0x1401f3e6f,0x1401f3e6d: XOR BL, BL,0x1401f3e6f: LEA RCX, [RSP + 0x20],0x1401f3e74: CALL 0x1400055b0,0x1401f3e79: MOVZX EAX, BL,0x1401f3e7c: MOV RCX, qword ptr [RSP + 0x40],0x1401f3e81: XOR RCX, RSP,0x1401f3e84: CALL 0x140327740,0x1401f3e89: ADD RSP, 0x50,0x1401f3e8d: POP RBX,0x1401f3e8e: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f5c80 | FUN_1401f5c80 | [object Object] | [object Object] |
| 0x1401f6280 | FUN_1401f6280 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1400055b0 | FUN_1400055b0           | [object Object] | [object Object] |
| 0x1400370d0 | FUN_1400370d0           | [object Object] | [object Object] |
| 0x1401f5580 | FUN_1401f5580           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f3411    | 0x1401f3e30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d4c    | 0x1401f3e30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f69a6    | 0x1401f3e30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6a08    | 0x1401f3e30    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df978    | 0x1401f3e30    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f3e36    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f3e40    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f3e48    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f3e4d    | 0x1401f5580              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e53    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f3e59    | 0x1401f3e6d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e5b    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f3e60    | 0x1400370d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e67    | 0x1401f3e6d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e6b    | 0x1401f3e6f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e6f    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f3e74    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e7c    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f3e84    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1400055b0 | FUN_1400055b0           | 0x1401f3e74    |
| 0x1400370d0 | FUN_1400370d0           | 0x1401f3e60    |
| 0x1401f3e6d | LAB_1401f3e6d           | 0x1401f3e59    |
| 0x1401f3e6d | LAB_1401f3e6d           | 0x1401f3e67    |
| 0x1401f3e6f | LAB_1401f3e6f           | 0x1401f3e6b    |
| 0x1401f5580 | FUN_1401f5580           | 0x1401f3e4d    |
| 0x140327740 | __security_check_cookie | 0x1401f3e84    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f3e36    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f3e30 | 0x1401f3e5b | 0x1401f3e5b,0x1401f3e6d |
| 0x1401f3e5b | 0x1401f3e69 | 0x1401f3e69,0x1401f3e6d |
| 0x1401f3e69 | 0x1401f3e6d | 0x1401f3e6f             |
| 0x1401f3e6d | 0x1401f3e6f | 0x1401f3e6f             |
| 0x1401f3e6f | 0x1401f3e8f |                         |

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
| parameter | 0       | param_1 | undefined8 | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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
| 0x1401f3e32#236 | 0x1401f3e32 | 236      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e3d#15  | 0x1401f3e3d | 15       | INT_XOR      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e3d#240 | 0x1401f3e3d | 240      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f3e48#237 | 0x1401f3e48 | 237      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e4d#30  | 0x1401f3e4d | 30       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f3e4d#208 | 0x1401f3e4d | 208      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e4d#219 | 0x1401f3e4d | 219      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e4d#224 | 0x1401f3e4d | 224      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e53#38  | 0x1401f3e53 | 38       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e59#43  | 0x1401f3e59 | 43       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f3e5b#238 | 0x1401f3e5b | 238      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e60#48  | 0x1401f3e60 | 48       | CALL         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e60#209 | 0x1401f3e60 | 209      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e60#225 | 0x1401f3e60 | 225      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e65#53  | 0x1401f3e65 | 53       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e67#58  | 0x1401f3e67 | 58       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f3e69#163 | 0x1401f3e69 | 163      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f3e6b#60  | 0x1401f3e6b | 60       | BRANCH       | true    | member           | [object Object]                                 |                 |
| 0x1401f3e6d#165 | 0x1401f3e6d | 165      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f3e6d#212 | 0x1401f3e6d | 212      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e6d#227 | 0x1401f3e6d | 227      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e6f#166 | 0x1401f3e6f | 166      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e6f#213 | 0x1401f3e6f | 213      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e6f#228 | 0x1401f3e6f | 228      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e6f#239 | 0x1401f3e6f | 239      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e74#65  | 0x1401f3e74 | 65       | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f3e74#210 | 0x1401f3e74 | 210      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e74#226 | 0x1401f3e74 | 226      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e79#67  | 0x1401f3e79 | 67       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f3e8e#98  | 0x1401f3e8e | 98       | RETURN       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f3e8e#211 | 0x1401f3e8e | 211      | COPY         | true    | member           | [object Object]                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f3e3d#240 | 0x1401f3e3d#15  | 1           |
| 0x1401f3e32#236 | 0x1401f3e3d#240 | 0           |
| 0x1401f3e48#237 | 0x1401f3e4d#30  | 1           |
| 0x1401f3e3d#15  | 0x1401f3e4d#224 | 0           |
| 0x1401f3e4d#219 | 0x1401f3e53#38  | 0           |
| 0x1401f3e53#38  | 0x1401f3e59#43  | 1           |
| 0x1401f3e5b#238 | 0x1401f3e60#48  | 1           |
| 0x1401f3e4d#208 | 0x1401f3e60#209 | 0           |
| 0x1401f3e4d#224 | 0x1401f3e60#225 | 0           |
| 0x1401f3e60#48  | 0x1401f3e65#53  | 0           |
| 0x1401f3e65#53  | 0x1401f3e67#58  | 1           |
| 0x1401f3e4d#208 | 0x1401f3e6d#212 | 0           |
| 0x1401f3e60#209 | 0x1401f3e6d#212 | 1           |
| 0x1401f3e4d#224 | 0x1401f3e6d#227 | 0           |
| 0x1401f3e60#225 | 0x1401f3e6d#227 | 1           |
| 0x1401f3e69#163 | 0x1401f3e6f#166 | 0           |
| 0x1401f3e6d#165 | 0x1401f3e6f#166 | 1           |
| 0x1401f3e60#209 | 0x1401f3e6f#213 | 0           |
| 0x1401f3e6d#212 | 0x1401f3e6f#213 | 1           |
| 0x1401f3e60#225 | 0x1401f3e6f#228 | 0           |
| 0x1401f3e6d#227 | 0x1401f3e6f#228 | 1           |
| 0x1401f3e6f#239 | 0x1401f3e74#65  | 1           |
| 0x1401f3e6f#213 | 0x1401f3e74#210 | 0           |
| 0x1401f3e6f#228 | 0x1401f3e74#226 | 0           |
| 0x1401f3e6f#166 | 0x1401f3e79#67  | 0           |
| 0x1401f3e79#67  | 0x1401f3e8e#98  | 1           |
| 0x1401f3e74#210 | 0x1401f3e8e#211 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /undefined8 |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use            | input_index |
|---------|----------------|-------------|
| 0       | 0x1401f3e4d#30 | 2           |

## raw_result.value.native_value_flow.effects

| operation      | kind               | operand_input | value_input |
|----------------|--------------------|---------------|-------------|
| 0x1401f3e4d#30 | direct_call        | 0             |             |
| 0x1401f3e59#43 | conditional_branch |               | 1           |
| 0x1401f3e60#48 | direct_call        | 0             |             |
| 0x1401f3e67#58 | conditional_branch |               | 1           |
| 0x1401f3e74#65 | direct_call        | 0             |             |

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

0x1401f3e30

## normalized_result.procedure.name

FUN_1401f3e30

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
| 0x1401f3e30 | 0x1401f3e8e |

## normalized_result.procedure.body.total_bytes

95

## normalized_result.procedure.body.span_bytes

95

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f3e30()

## normalized_result.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8 | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8 | ghidra-function-database |
| undefined local_38 @ Stack[-0x38]:1  | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1401f3e30(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_58;
  FUN_1401f5580(local_38,param_1);
  if (local_28 != 0) {
    cVar1 = FUN_1400370d0(local_38);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_1401f3e6f;
    }
  }
  uVar2 = 0;
LAB_1401f3e6f:
  FUN_1400055b0(local_38);
  return uVar2;
}



## normalized_result.assembly

0x1401f3e30: PUSH RBX,0x1401f3e32: SUB RSP, 0x50,0x1401f3e36: MOV RAX, qword ptr [0x1404c7ac0],0x1401f3e3d: XOR RAX, RSP,0x1401f3e40: MOV qword ptr [RSP + 0x40], RAX,0x1401f3e45: MOV RDX, RCX,0x1401f3e48: LEA RCX, [RSP + 0x20],0x1401f3e4d: CALL 0x1401f5580,0x1401f3e52: NOP,0x1401f3e53: CMP qword ptr [RSP + 0x30], 0x0,0x1401f3e59: JZ 0x1401f3e6d,0x1401f3e5b: LEA RCX, [RSP + 0x20],0x1401f3e60: CALL 0x1400370d0,0x1401f3e65: TEST AL, AL,0x1401f3e67: JZ 0x1401f3e6d,0x1401f3e69: MOV BL, 0x1,0x1401f3e6b: JMP 0x1401f3e6f,0x1401f3e6d: XOR BL, BL,0x1401f3e6f: LEA RCX, [RSP + 0x20],0x1401f3e74: CALL 0x1400055b0,0x1401f3e79: MOVZX EAX, BL,0x1401f3e7c: MOV RCX, qword ptr [RSP + 0x40],0x1401f3e81: XOR RCX, RSP,0x1401f3e84: CALL 0x140327740,0x1401f3e89: ADD RSP, 0x50,0x1401f3e8d: POP RBX,0x1401f3e8e: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f5c80 | FUN_1401f5c80 | [object Object] | [object Object] |
| 0x1401f6280 | FUN_1401f6280 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1400055b0 | FUN_1400055b0           | [object Object] | [object Object] |
| 0x1400370d0 | FUN_1400370d0           | [object Object] | [object Object] |
| 0x1401f5580 | FUN_1401f5580           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f3411    | 0x1401f3e30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d4c    | 0x1401f3e30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f69a6    | 0x1401f3e30    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6a08    | 0x1401f3e30    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df978    | 0x1401f3e30    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f3e36    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f3e40    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f3e48    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f3e4d    | 0x1401f5580              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e53    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f3e59    | 0x1401f3e6d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e5b    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f3e60    | 0x1400370d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e67    | 0x1401f3e6d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e6b    | 0x1401f3e6f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e6f    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f3e74    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3e7c    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f3e84    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1400055b0 | FUN_1400055b0           | 0x1401f3e74    |
| 0x1400370d0 | FUN_1400370d0           | 0x1401f3e60    |
| 0x1401f3e6d | LAB_1401f3e6d           | 0x1401f3e59    |
| 0x1401f3e6d | LAB_1401f3e6d           | 0x1401f3e67    |
| 0x1401f3e6f | LAB_1401f3e6f           | 0x1401f3e6b    |
| 0x1401f5580 | FUN_1401f5580           | 0x1401f3e4d    |
| 0x140327740 | __security_check_cookie | 0x1401f3e84    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f3e36    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f3e30 | 0x1401f3e5b | 0x1401f3e5b,0x1401f3e6d |
| 0x1401f3e5b | 0x1401f3e69 | 0x1401f3e69,0x1401f3e6d |
| 0x1401f3e69 | 0x1401f3e6d | 0x1401f3e6f             |
| 0x1401f3e6d | 0x1401f3e6f | 0x1401f3e6f             |
| 0x1401f3e6f | 0x1401f3e8f |                         |

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
| 0       | param_1 | undefined8 | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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
| 0x1401f3e32#236 | 0x1401f3e32 | 236      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e3d#15  | 0x1401f3e3d | 15       | INT_XOR      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e3d#240 | 0x1401f3e3d | 240      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f3e48#237 | 0x1401f3e48 | 237      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e4d#30  | 0x1401f3e4d | 30       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f3e4d#208 | 0x1401f3e4d | 208      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e4d#219 | 0x1401f3e4d | 219      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e4d#224 | 0x1401f3e4d | 224      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e53#38  | 0x1401f3e53 | 38       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e59#43  | 0x1401f3e59 | 43       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f3e5b#238 | 0x1401f3e5b | 238      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e60#48  | 0x1401f3e60 | 48       | CALL         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e60#209 | 0x1401f3e60 | 209      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e60#225 | 0x1401f3e60 | 225      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e65#53  | 0x1401f3e65 | 53       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e67#58  | 0x1401f3e67 | 58       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f3e69#163 | 0x1401f3e69 | 163      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f3e6b#60  | 0x1401f3e6b | 60       | BRANCH       | true    | member           | [object Object]                                 |                 |
| 0x1401f3e6d#165 | 0x1401f3e6d | 165      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f3e6d#212 | 0x1401f3e6d | 212      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e6d#227 | 0x1401f3e6d | 227      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e6f#166 | 0x1401f3e6f | 166      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e6f#213 | 0x1401f3e6f | 213      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e6f#228 | 0x1401f3e6f | 228      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e6f#239 | 0x1401f3e6f | 239      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e74#65  | 0x1401f3e74 | 65       | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f3e74#210 | 0x1401f3e74 | 210      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e74#226 | 0x1401f3e74 | 226      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f3e79#67  | 0x1401f3e79 | 67       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f3e8e#98  | 0x1401f3e8e | 98       | RETURN       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f3e8e#211 | 0x1401f3e8e | 211      | COPY         | true    | member           | [object Object]                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f3e3d#240 | 0x1401f3e3d#15  | 1           |
| 0x1401f3e32#236 | 0x1401f3e3d#240 | 0           |
| 0x1401f3e48#237 | 0x1401f3e4d#30  | 1           |
| 0x1401f3e3d#15  | 0x1401f3e4d#224 | 0           |
| 0x1401f3e4d#219 | 0x1401f3e53#38  | 0           |
| 0x1401f3e53#38  | 0x1401f3e59#43  | 1           |
| 0x1401f3e5b#238 | 0x1401f3e60#48  | 1           |
| 0x1401f3e4d#208 | 0x1401f3e60#209 | 0           |
| 0x1401f3e4d#224 | 0x1401f3e60#225 | 0           |
| 0x1401f3e60#48  | 0x1401f3e65#53  | 0           |
| 0x1401f3e65#53  | 0x1401f3e67#58  | 1           |
| 0x1401f3e4d#208 | 0x1401f3e6d#212 | 0           |
| 0x1401f3e60#209 | 0x1401f3e6d#212 | 1           |
| 0x1401f3e4d#224 | 0x1401f3e6d#227 | 0           |
| 0x1401f3e60#225 | 0x1401f3e6d#227 | 1           |
| 0x1401f3e69#163 | 0x1401f3e6f#166 | 0           |
| 0x1401f3e6d#165 | 0x1401f3e6f#166 | 1           |
| 0x1401f3e60#209 | 0x1401f3e6f#213 | 0           |
| 0x1401f3e6d#212 | 0x1401f3e6f#213 | 1           |
| 0x1401f3e60#225 | 0x1401f3e6f#228 | 0           |
| 0x1401f3e6d#227 | 0x1401f3e6f#228 | 1           |
| 0x1401f3e6f#239 | 0x1401f3e74#65  | 1           |
| 0x1401f3e6f#213 | 0x1401f3e74#210 | 0           |
| 0x1401f3e6f#228 | 0x1401f3e74#226 | 0           |
| 0x1401f3e6f#166 | 0x1401f3e79#67  | 0           |
| 0x1401f3e79#67  | 0x1401f3e8e#98  | 1           |
| 0x1401f3e74#210 | 0x1401f3e8e#211 | 0           |

## normalized_result.native_value_flow.effects

| operation      | kind               | operand_input | value_input |
|----------------|--------------------|---------------|-------------|
| 0x1401f3e4d#30 | direct_call        | 0             |             |
| 0x1401f3e59#43 | conditional_branch |               | 1           |
| 0x1401f3e60#48 | direct_call        | 0             |             |
| 0x1401f3e67#58 | conditional_branch |               | 1           |
| 0x1401f3e74#65 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /undefined8 |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use            | input_index |
|---------|----------------|-------------|
| 0       | 0x1401f3e4d#30 | 2           |

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

