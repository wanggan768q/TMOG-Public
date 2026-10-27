## evidence_id

ev_539eb27950e22eaa80514f8fc58288b46cd3fd96ccd5041a06a46fa985d3458c

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
| procedure | 0x140445889 |

## raw_result.value.procedure.address

0x140445850

## raw_result.value.procedure.name

FUN_140445850

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
| 0x140445850 | 0x1404458f5 |

## raw_result.value.procedure.body.total_bytes

166

## raw_result.value.procedure.body.span_bytes

166

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_140445850()

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined local_10 @ Stack[-0x10]:1       | ghidra-function-database |
| undefined8 local_18 @ Stack[-0x18]:8      | ghidra-function-database |
| undefined1[16] local_28 @ Stack[-0x28]:16 | ghidra-function-database |
| undefined8 local_30 @ Stack[-0x30]:8      | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8      | ghidra-function-database |
| undefined4 local_48 @ Stack[-0x48]:4      | ghidra-function-database |
| undefined local_res10 @ Stack[0x10]:1     | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8      | ghidra-function-database |

## raw_result.value.pseudocode


undefined8 FUN_140445850(undefined8 param_1)

{
  undefined1 local_res10 [24];
  undefined4 **local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined4 *puStack_20;
  undefined4 *local_18;
  undefined1 local_10 [8];
  
  local_28 = (undefined4 *)0x0;
  puStack_20 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_28 = (undefined4 *)FUN_140496f10(0x20);
  puStack_20 = local_28 + 8;
  *local_28 = 0x30af5b49;
  local_28[1] = 0xf5bb68e6;
  local_28[2] = 0x40b8ac97;
  local_28[3] = 0x84d23289;
  local_28[4] = 0x69c839a4;
  local_28[5] = 0x3f5951f1;
  local_28[6] = 0x59bab4d3;
  local_28[7] = 0x8e9e51cc;
  local_38 = &local_28;
  local_30 = local_10;
  local_18 = puStack_20;
  FUN_1404432d0(param_1,&local_38,local_res10);
  FUN_1404979b0(&local_28,0x18,1,FUN_14000cd80,1);
  return param_1;
}



## raw_result.value.assembly

0x140445850: MOV qword ptr [RSP + 0x8], RCX,0x140445855: PUSH RBX,0x140445856: SUB RSP, 0x60,0x14044585a: MOV RBX, RCX,0x14044585d: XOR EAX, EAX,0x14044585f: MOV dword ptr [RSP + 0x20], EAX,0x140445863: XORPS XMM0, XMM0,0x140445866: MOVDQU xmmword ptr [RSP + 0x40], XMM0,0x14044586c: MOV qword ptr [RSP + 0x50], RAX,0x140445871: MOV ECX, 0x20,0x140445876: CALL 0x140496f10,0x14044587b: MOV qword ptr [RSP + 0x40], RAX,0x140445880: LEA RCX, [RAX + 0x20],0x140445884: MOV qword ptr [RSP + 0x50], RCX,0x140445889: MOVUPS XMM0, xmmword ptr [0x14062d080],0x140445890: MOVUPS xmmword ptr [RAX], XMM0,0x140445893: MOVUPS XMM1, xmmword ptr [0x14062d090],0x14044589a: MOVUPS xmmword ptr [RAX + 0x10], XMM1,0x14044589e: MOV qword ptr [RSP + 0x48], RCX,0x1404458a3: LEA RAX, [RSP + 0x40],0x1404458a8: MOV qword ptr [RSP + 0x30], RAX,0x1404458ad: LEA RAX, [RSP + 0x58],0x1404458b2: MOV qword ptr [RSP + 0x38], RAX,0x1404458b7: LEA R8, [RSP + 0x78],0x1404458bc: LEA RDX, [RSP + 0x30],0x1404458c1: MOV RCX, RBX,0x1404458c4: CALL 0x1404432d0,0x1404458c9: MOV dword ptr [RSP + 0x20], 0x1,0x1404458d1: LEA R9, [0x14000cd80],0x1404458d8: MOV EDX, 0x18,0x1404458dd: MOV R8D, 0x1,0x1404458e3: LEA RCX, [RSP + 0x40],0x1404458e8: CALL 0x1404979b0,0x1404458ed: MOV RAX, RBX,0x1404458f0: ADD RSP, 0x60,0x1404458f4: POP RBX,0x1404458f5: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1402a5370 | FUN_1402a5370 | [object Object] | [object Object] |
| 0x1402a7ae0 | FUN_1402a7ae0 | [object Object] | [object Object] |
| 0x1402aaae0 | FUN_1402aaae0 | [object Object] | [object Object] |
| 0x1402b0670 | FUN_1402b0670 | [object Object] | [object Object] |
| 0x1402b0b30 | FUN_1402b0b30 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1404432d0 | FUN_1404432d0 | [object Object] | [object Object] |
| 0x140496f10 | FUN_140496f10 | [object Object] | [object Object] |
| 0x1404979b0 | FUN_1404979b0 | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1402a5a58    | 0x140445850    | [object Object]  | [object Object]  | [object Object] |
| 0x1402a7db1    | 0x140445850    | [object Object]  | [object Object]  | [object Object] |
| 0x1402aac3b    | 0x140445850    | [object Object]  | [object Object]  | [object Object] |
| 0x1402b072a    | 0x140445850    | [object Object]  | [object Object]  | [object Object] |
| 0x1402b0dc4    | 0x140445850    | [object Object]  | [object Object]  | [object Object] |
| 0x1407045f8    | 0x140445850    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x140445850    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x14044585f    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x140445866    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x14044586c    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x140445876    | 0x140496f10              | [object Object]  | [object Object]  | [object Object] |
| 0x14044587b    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x140445884    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x140445889    | 0x14062d080              | [object Object]  |                  | [object Object] |
| 0x140445893    | 0x14062d090              | [object Object]  |                  | [object Object] |
| 0x14044589e    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1404458a3    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1404458a8    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1404458ad    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1404458b2    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x1404458b7    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1404458bc    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1404458c4    | 0x1404432d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1404458c9    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1404458d1    | 0x14000cd80              | [object Object]  | [object Object]  | [object Object] |
| 0x1404458e3    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1404458e8    | 0x1404979b0              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x14000cd80 | FUN_14000cd80 | 0x1404458d1    |
| 0x1404432d0 | FUN_1404432d0 | 0x1404458c4    |
| 0x140496f10 | FUN_140496f10 | 0x140445876    |
| 0x1404979b0 | FUN_1404979b0 | 0x1404458e8    |
| 0x14062d080 | DAT_14062d080 | 0x140445889    |
| 0x14062d090 | DAT_14062d090 | 0x140445893    |

## raw_result.value.basic_blocks

| start       | end         | successors |
|-------------|-------------|------------|
| 0x140445850 | 0x1404458f6 |            |

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

| id              | address     | sequence | opcode   | is_dead | block_membership | inputs                                                                                          | output          |
|-----------------|-------------|----------|----------|---------|------------------|-------------------------------------------------------------------------------------------------|-----------------|
| 0x140445866#242 | 0x140445866 | 242      | COPY     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x140445866#243 | 0x140445866 | 243      | COPY     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14044586c#38  | 0x14044586c | 38       | COPY     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x140445876#42  | 0x140445876 | 42       | CALL     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x140445876#260 | 0x140445876 | 260      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x140445876#263 | 0x140445876 | 263      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x140445876#266 | 0x140445876 | 266      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x140445876#287 | 0x140445876 | 287      | CAST     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x140445880#273 | 0x140445880 | 273      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x140445890#222 | 0x140445890 | 222      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x140445890#223 | 0x140445890 | 223      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x140445890#225 | 0x140445890 | 225      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x140445890#227 | 0x140445890 | 227      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x140445890#274 | 0x140445890 | 274      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x140445890#275 | 0x140445890 | 275      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x140445890#276 | 0x140445890 | 276      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14044589a#233 | 0x14044589a | 233      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14044589a#234 | 0x14044589a | 234      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14044589a#236 | 0x14044589a | 236      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14044589a#238 | 0x14044589a | 238      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14044589a#277 | 0x14044589a | 277      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14044589a#278 | 0x14044589a | 278      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14044589a#279 | 0x14044589a | 279      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14044589a#280 | 0x14044589a | 280      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x1404458a3#281 | 0x1404458a3 | 281      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458ad#282 | 0x1404458ad | 282      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458b7#283 | 0x1404458b7 | 283      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458bc#284 | 0x1404458bc | 284      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#86  | 0x1404458c4 | 86       | CALL     | true    | member           | [object Object],[object Object],[object Object],[object Object]                                 |                 |
| 0x1404458c4#255 | 0x1404458c4 | 255      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#258 | 0x1404458c4 | 258      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#261 | 0x1404458c4 | 261      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#264 | 0x1404458c4 | 264      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#267 | 0x1404458c4 | 267      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#286 | 0x1404458c4 | 286      | COPY     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x1404458e3#285 | 0x1404458e3 | 285      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#97  | 0x1404458e8 | 97       | CALL     | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1404458e8#256 | 0x1404458e8 | 256      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#259 | 0x1404458e8 | 259      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#262 | 0x1404458e8 | 262      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#265 | 0x1404458e8 | 265      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#268 | 0x1404458e8 | 268      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#272 | 0x1404458e8 | 272      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458ed#98  | 0x1404458ed | 98       | COPY     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x1404458f5#114 | 0x1404458f5 | 114      | RETURN   | true    | member           | [object Object],[object Object]                                                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x140445866#242 | 0x140445876#260 | 0           |
| 0x140445866#243 | 0x140445876#263 | 0           |
| 0x14044586c#38  | 0x140445876#266 | 0           |
| 0x140445876#42  | 0x140445876#287 | 0           |
| 0x140445876#287 | 0x140445880#273 | 0           |
| 0x140445876#287 | 0x140445890#222 | 1           |
| 0x140445890#274 | 0x140445890#223 | 1           |
| 0x140445890#275 | 0x140445890#225 | 1           |
| 0x140445890#276 | 0x140445890#227 | 1           |
| 0x140445876#287 | 0x140445890#274 | 0           |
| 0x140445876#287 | 0x140445890#275 | 0           |
| 0x140445876#287 | 0x140445890#276 | 0           |
| 0x14044589a#277 | 0x14044589a#233 | 1           |
| 0x14044589a#278 | 0x14044589a#234 | 1           |
| 0x14044589a#279 | 0x14044589a#236 | 1           |
| 0x14044589a#280 | 0x14044589a#238 | 1           |
| 0x140445876#287 | 0x14044589a#277 | 0           |
| 0x140445876#287 | 0x14044589a#278 | 0           |
| 0x140445876#287 | 0x14044589a#279 | 0           |
| 0x140445876#287 | 0x14044589a#280 | 0           |
| 0x1404458bc#284 | 0x1404458c4#86  | 2           |
| 0x1404458b7#283 | 0x1404458c4#86  | 3           |
| 0x1404458a3#281 | 0x1404458c4#255 | 0           |
| 0x1404458ad#282 | 0x1404458c4#258 | 0           |
| 0x140445876#287 | 0x1404458c4#261 | 0           |
| 0x140445880#273 | 0x1404458c4#264 | 0           |
| 0x1404458c4#286 | 0x1404458c4#267 | 0           |
| 0x140445880#273 | 0x1404458c4#286 | 0           |
| 0x1404458e3#285 | 0x1404458e8#97  | 1           |
| 0x1404458e8#272 | 0x1404458e8#97  | 4           |
| 0x1404458c4#255 | 0x1404458e8#256 | 0           |
| 0x1404458c4#258 | 0x1404458e8#259 | 0           |
| 0x1404458c4#261 | 0x1404458e8#262 | 0           |
| 0x1404458c4#264 | 0x1404458e8#265 | 0           |
| 0x1404458c4#267 | 0x1404458e8#268 | 0           |
| 0x1404458ed#98  | 0x1404458f5#114 | 1           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /undefined8 |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use            | input_index |
|---------|----------------|-------------|
| 0       | 0x1404458c4#86 | 1           |
| 0       | 0x1404458ed#98 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind         | operand_input | value_input |
|-----------------|--------------|---------------|-------------|
| 0x140445876#42  | direct_call  | 0             |             |
| 0x140445890#222 | memory_write | 1             | 2           |
| 0x140445890#223 | memory_write | 1             | 2           |
| 0x140445890#225 | memory_write | 1             | 2           |
| 0x140445890#227 | memory_write | 1             | 2           |
| 0x14044589a#233 | memory_write | 1             | 2           |
| 0x14044589a#234 | memory_write | 1             | 2           |
| 0x14044589a#236 | memory_write | 1             | 2           |
| 0x14044589a#238 | memory_write | 1             | 2           |
| 0x1404458c4#86  | direct_call  | 0             |             |
| 0x1404458e8#97  | direct_call  | 0             |             |

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

0x140445850

## normalized_result.procedure.name

FUN_140445850

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
| 0x140445850 | 0x1404458f5 |

## normalized_result.procedure.body.total_bytes

166

## normalized_result.procedure.body.span_bytes

166

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_140445850()

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined local_10 @ Stack[-0x10]:1       | ghidra-function-database |
| undefined8 local_18 @ Stack[-0x18]:8      | ghidra-function-database |
| undefined1[16] local_28 @ Stack[-0x28]:16 | ghidra-function-database |
| undefined8 local_30 @ Stack[-0x30]:8      | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8      | ghidra-function-database |
| undefined4 local_48 @ Stack[-0x48]:4      | ghidra-function-database |
| undefined local_res10 @ Stack[0x10]:1     | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8      | ghidra-function-database |

## normalized_result.pseudocode


undefined8 FUN_140445850(undefined8 param_1)

{
  undefined1 local_res10 [24];
  undefined4 **local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined4 *puStack_20;
  undefined4 *local_18;
  undefined1 local_10 [8];
  
  local_28 = (undefined4 *)0x0;
  puStack_20 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_28 = (undefined4 *)FUN_140496f10(0x20);
  puStack_20 = local_28 + 8;
  *local_28 = 0x30af5b49;
  local_28[1] = 0xf5bb68e6;
  local_28[2] = 0x40b8ac97;
  local_28[3] = 0x84d23289;
  local_28[4] = 0x69c839a4;
  local_28[5] = 0x3f5951f1;
  local_28[6] = 0x59bab4d3;
  local_28[7] = 0x8e9e51cc;
  local_38 = &local_28;
  local_30 = local_10;
  local_18 = puStack_20;
  FUN_1404432d0(param_1,&local_38,local_res10);
  FUN_1404979b0(&local_28,0x18,1,FUN_14000cd80,1);
  return param_1;
}



## normalized_result.assembly

0x140445850: MOV qword ptr [RSP + 0x8], RCX,0x140445855: PUSH RBX,0x140445856: SUB RSP, 0x60,0x14044585a: MOV RBX, RCX,0x14044585d: XOR EAX, EAX,0x14044585f: MOV dword ptr [RSP + 0x20], EAX,0x140445863: XORPS XMM0, XMM0,0x140445866: MOVDQU xmmword ptr [RSP + 0x40], XMM0,0x14044586c: MOV qword ptr [RSP + 0x50], RAX,0x140445871: MOV ECX, 0x20,0x140445876: CALL 0x140496f10,0x14044587b: MOV qword ptr [RSP + 0x40], RAX,0x140445880: LEA RCX, [RAX + 0x20],0x140445884: MOV qword ptr [RSP + 0x50], RCX,0x140445889: MOVUPS XMM0, xmmword ptr [0x14062d080],0x140445890: MOVUPS xmmword ptr [RAX], XMM0,0x140445893: MOVUPS XMM1, xmmword ptr [0x14062d090],0x14044589a: MOVUPS xmmword ptr [RAX + 0x10], XMM1,0x14044589e: MOV qword ptr [RSP + 0x48], RCX,0x1404458a3: LEA RAX, [RSP + 0x40],0x1404458a8: MOV qword ptr [RSP + 0x30], RAX,0x1404458ad: LEA RAX, [RSP + 0x58],0x1404458b2: MOV qword ptr [RSP + 0x38], RAX,0x1404458b7: LEA R8, [RSP + 0x78],0x1404458bc: LEA RDX, [RSP + 0x30],0x1404458c1: MOV RCX, RBX,0x1404458c4: CALL 0x1404432d0,0x1404458c9: MOV dword ptr [RSP + 0x20], 0x1,0x1404458d1: LEA R9, [0x14000cd80],0x1404458d8: MOV EDX, 0x18,0x1404458dd: MOV R8D, 0x1,0x1404458e3: LEA RCX, [RSP + 0x40],0x1404458e8: CALL 0x1404979b0,0x1404458ed: MOV RAX, RBX,0x1404458f0: ADD RSP, 0x60,0x1404458f4: POP RBX,0x1404458f5: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1402a5370 | FUN_1402a5370 | [object Object] | [object Object] |
| 0x1402a7ae0 | FUN_1402a7ae0 | [object Object] | [object Object] |
| 0x1402aaae0 | FUN_1402aaae0 | [object Object] | [object Object] |
| 0x1402b0670 | FUN_1402b0670 | [object Object] | [object Object] |
| 0x1402b0b30 | FUN_1402b0b30 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1404432d0 | FUN_1404432d0 | [object Object] | [object Object] |
| 0x140496f10 | FUN_140496f10 | [object Object] | [object Object] |
| 0x1404979b0 | FUN_1404979b0 | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1402a5a58    | 0x140445850    | [object Object]  | [object Object]  | [object Object] |
| 0x1402a7db1    | 0x140445850    | [object Object]  | [object Object]  | [object Object] |
| 0x1402aac3b    | 0x140445850    | [object Object]  | [object Object]  | [object Object] |
| 0x1402b072a    | 0x140445850    | [object Object]  | [object Object]  | [object Object] |
| 0x1402b0dc4    | 0x140445850    | [object Object]  | [object Object]  | [object Object] |
| 0x1407045f8    | 0x140445850    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x140445850    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x14044585f    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x140445866    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x14044586c    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x140445876    | 0x140496f10              | [object Object]  | [object Object]  | [object Object] |
| 0x14044587b    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x140445884    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x140445889    | 0x14062d080              | [object Object]  |                  | [object Object] |
| 0x140445893    | 0x14062d090              | [object Object]  |                  | [object Object] |
| 0x14044589e    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1404458a3    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1404458a8    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1404458ad    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1404458b2    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x1404458b7    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1404458bc    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1404458c4    | 0x1404432d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1404458c9    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1404458d1    | 0x14000cd80              | [object Object]  | [object Object]  | [object Object] |
| 0x1404458e3    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1404458e8    | 0x1404979b0              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x14000cd80 | FUN_14000cd80 | 0x1404458d1    |
| 0x1404432d0 | FUN_1404432d0 | 0x1404458c4    |
| 0x140496f10 | FUN_140496f10 | 0x140445876    |
| 0x1404979b0 | FUN_1404979b0 | 0x1404458e8    |
| 0x14062d080 | DAT_14062d080 | 0x140445889    |
| 0x14062d090 | DAT_14062d090 | 0x140445893    |

## normalized_result.basic_blocks

| start       | end         | successors |
|-------------|-------------|------------|
| 0x140445850 | 0x1404458f6 |            |

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

| id              | address     | sequence | opcode   | is_dead | block_membership | inputs                                                                                          | output          |
|-----------------|-------------|----------|----------|---------|------------------|-------------------------------------------------------------------------------------------------|-----------------|
| 0x140445866#242 | 0x140445866 | 242      | COPY     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x140445866#243 | 0x140445866 | 243      | COPY     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14044586c#38  | 0x14044586c | 38       | COPY     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x140445876#42  | 0x140445876 | 42       | CALL     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x140445876#260 | 0x140445876 | 260      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x140445876#263 | 0x140445876 | 263      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x140445876#266 | 0x140445876 | 266      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x140445876#287 | 0x140445876 | 287      | CAST     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x140445880#273 | 0x140445880 | 273      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x140445890#222 | 0x140445890 | 222      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x140445890#223 | 0x140445890 | 223      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x140445890#225 | 0x140445890 | 225      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x140445890#227 | 0x140445890 | 227      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x140445890#274 | 0x140445890 | 274      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x140445890#275 | 0x140445890 | 275      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x140445890#276 | 0x140445890 | 276      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14044589a#233 | 0x14044589a | 233      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14044589a#234 | 0x14044589a | 234      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14044589a#236 | 0x14044589a | 236      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14044589a#238 | 0x14044589a | 238      | STORE    | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14044589a#277 | 0x14044589a | 277      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14044589a#278 | 0x14044589a | 278      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14044589a#279 | 0x14044589a | 279      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14044589a#280 | 0x14044589a | 280      | PTRADD   | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x1404458a3#281 | 0x1404458a3 | 281      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458ad#282 | 0x1404458ad | 282      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458b7#283 | 0x1404458b7 | 283      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458bc#284 | 0x1404458bc | 284      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#86  | 0x1404458c4 | 86       | CALL     | true    | member           | [object Object],[object Object],[object Object],[object Object]                                 |                 |
| 0x1404458c4#255 | 0x1404458c4 | 255      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#258 | 0x1404458c4 | 258      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#261 | 0x1404458c4 | 261      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#264 | 0x1404458c4 | 264      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#267 | 0x1404458c4 | 267      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458c4#286 | 0x1404458c4 | 286      | COPY     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x1404458e3#285 | 0x1404458e3 | 285      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#97  | 0x1404458e8 | 97       | CALL     | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1404458e8#256 | 0x1404458e8 | 256      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#259 | 0x1404458e8 | 259      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#262 | 0x1404458e8 | 262      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#265 | 0x1404458e8 | 265      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#268 | 0x1404458e8 | 268      | INDIRECT | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458e8#272 | 0x1404458e8 | 272      | PTRSUB   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x1404458ed#98  | 0x1404458ed | 98       | COPY     | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x1404458f5#114 | 0x1404458f5 | 114      | RETURN   | true    | member           | [object Object],[object Object]                                                                 |                 |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x140445866#242 | 0x140445876#260 | 0           |
| 0x140445866#243 | 0x140445876#263 | 0           |
| 0x14044586c#38  | 0x140445876#266 | 0           |
| 0x140445876#42  | 0x140445876#287 | 0           |
| 0x140445876#287 | 0x140445880#273 | 0           |
| 0x140445876#287 | 0x140445890#222 | 1           |
| 0x140445890#274 | 0x140445890#223 | 1           |
| 0x140445890#275 | 0x140445890#225 | 1           |
| 0x140445890#276 | 0x140445890#227 | 1           |
| 0x140445876#287 | 0x140445890#274 | 0           |
| 0x140445876#287 | 0x140445890#275 | 0           |
| 0x140445876#287 | 0x140445890#276 | 0           |
| 0x14044589a#277 | 0x14044589a#233 | 1           |
| 0x14044589a#278 | 0x14044589a#234 | 1           |
| 0x14044589a#279 | 0x14044589a#236 | 1           |
| 0x14044589a#280 | 0x14044589a#238 | 1           |
| 0x140445876#287 | 0x14044589a#277 | 0           |
| 0x140445876#287 | 0x14044589a#278 | 0           |
| 0x140445876#287 | 0x14044589a#279 | 0           |
| 0x140445876#287 | 0x14044589a#280 | 0           |
| 0x1404458bc#284 | 0x1404458c4#86  | 2           |
| 0x1404458b7#283 | 0x1404458c4#86  | 3           |
| 0x1404458a3#281 | 0x1404458c4#255 | 0           |
| 0x1404458ad#282 | 0x1404458c4#258 | 0           |
| 0x140445876#287 | 0x1404458c4#261 | 0           |
| 0x140445880#273 | 0x1404458c4#264 | 0           |
| 0x1404458c4#286 | 0x1404458c4#267 | 0           |
| 0x140445880#273 | 0x1404458c4#286 | 0           |
| 0x1404458e3#285 | 0x1404458e8#97  | 1           |
| 0x1404458e8#272 | 0x1404458e8#97  | 4           |
| 0x1404458c4#255 | 0x1404458e8#256 | 0           |
| 0x1404458c4#258 | 0x1404458e8#259 | 0           |
| 0x1404458c4#261 | 0x1404458e8#262 | 0           |
| 0x1404458c4#264 | 0x1404458e8#265 | 0           |
| 0x1404458c4#267 | 0x1404458e8#268 | 0           |
| 0x1404458ed#98  | 0x1404458f5#114 | 1           |

## normalized_result.native_value_flow.effects

| operation       | kind         | operand_input | value_input |
|-----------------|--------------|---------------|-------------|
| 0x140445876#42  | direct_call  | 0             |             |
| 0x140445890#222 | memory_write | 1             | 2           |
| 0x140445890#223 | memory_write | 1             | 2           |
| 0x140445890#225 | memory_write | 1             | 2           |
| 0x140445890#227 | memory_write | 1             | 2           |
| 0x14044589a#233 | memory_write | 1             | 2           |
| 0x14044589a#234 | memory_write | 1             | 2           |
| 0x14044589a#236 | memory_write | 1             | 2           |
| 0x14044589a#238 | memory_write | 1             | 2           |
| 0x1404458c4#86  | direct_call  | 0             |             |
| 0x1404458e8#97  | direct_call  | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /undefined8 |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use            | input_index |
|---------|----------------|-------------|
| 0       | 0x1404458c4#86 | 1           |
| 0       | 0x1404458ed#98 | 0           |

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

