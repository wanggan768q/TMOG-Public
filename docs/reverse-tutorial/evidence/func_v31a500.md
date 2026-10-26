## evidence_id

ev_9ac1ec47732f09636ee1253c6c37f14d87d13714669b1cabbf47fc7139d41085

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
| procedure | 0x14031a500 |

## raw_result.value.procedure.address

0x14031a500

## raw_result.value.procedure.name

FUN_14031a500

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
| 0x14031a500 | 0x14031a614 |

## raw_result.value.procedure.body.total_bytes

277

## raw_result.value.procedure.body.span_bytes

277

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_14031a500()

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_10 @ Stack[-0x10]:8      | ghidra-function-database |
| undefined1[16] local_20 @ Stack[-0x20]:16 | ghidra-function-database |
| undefined1[16] local_30 @ Stack[-0x30]:16 | ghidra-function-database |
| undefined local_50 @ Stack[-0x50]:1       | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8      | ghidra-function-database |
| undefined8 local_60 @ Stack[-0x60]:8      | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined4 local_74 @ Stack[-0x74]:4      | ghidra-function-database |
| undefined1 local_78 @ Stack[-0x78]:1      | ghidra-function-database |
| undefined1 local_88 @ Stack[-0x88]:1      | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14031a500(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_1404c7ac0 ^ (ulonglong)auStack_a8;
  local_74 = 0;
  local_68 = *param_2;
  local_60 = param_2[1];
  local_58 = param_1;
  puVar1 = (undefined8 *)FUN_1403198b0(local_50,&local_68);
  local_30 = *puVar1;
  uStack_28 = puVar1[1];
  local_20 = *(undefined4 *)(puVar1 + 2);
  uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_18 = *(undefined4 *)(puVar1 + 3);
  uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_74 = 2;
  local_88 = 0;
  FUN_140033b80(param_1,0x40,local_78);
  uVar2 = 0;
  do {
    puVar1 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar1 = (undefined8 *)*param_1;
    }
    *(char *)((longlong)puVar1 + uVar2 * 2) =
         "Dl0123456789abcdef"[(ulonglong)(*(byte *)((longlong)&local_30 + uVar2) >> 4) + 2];
    puVar1 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar1 = (undefined8 *)*param_1;
    }
    *(char *)((longlong)puVar1 + uVar2 * 2 + 1) =
         "Dl0123456789abcdef"[(ulonglong)(*(byte *)((longlong)&local_30 + uVar2) & 0xf) + 2];
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  return param_1;
}



## raw_result.value.assembly

0x14031a500: PUSH RBX,0x14031a502: SUB RSP, 0xa0,0x14031a509: MOV RAX, qword ptr [0x1404c7ac0],0x14031a510: XOR RAX, RSP,0x14031a513: MOV qword ptr [RSP + 0x98], RAX,0x14031a51b: MOV RBX, RCX,0x14031a51e: MOV qword ptr [RSP + 0x50], RCX,0x14031a523: MOV dword ptr [RSP + 0x34], 0x0,0x14031a52b: MOV RAX, qword ptr [RDX],0x14031a52e: MOV qword ptr [RSP + 0x40], RAX,0x14031a533: MOV RAX, qword ptr [RDX + 0x8],0x14031a537: MOV qword ptr [RSP + 0x48], RAX,0x14031a53c: LEA RDX, [RSP + 0x40],0x14031a541: LEA RCX, [RSP + 0x58],0x14031a546: CALL 0x1403198b0,0x14031a54b: MOVUPS XMM0, xmmword ptr [RAX],0x14031a54e: MOVUPS xmmword ptr [RSP + 0x78], XMM0,0x14031a553: MOVUPS XMM1, xmmword ptr [RAX + 0x10],0x14031a557: MOVUPS xmmword ptr [RSP + 0x88], XMM1,0x14031a55f: XORPS XMM0, XMM0,0x14031a562: MOVUPS xmmword ptr [RBX], XMM0,0x14031a565: MOV qword ptr [RBX + 0x10], 0x0,0x14031a56d: MOV qword ptr [RBX + 0x18], 0xf,0x14031a575: MOV byte ptr [RBX], 0x0,0x14031a578: MOV dword ptr [RSP + 0x34], 0x2,0x14031a580: MOV byte ptr [RSP + 0x20], 0x0,0x14031a585: MOV R9D, 0x40,0x14031a58b: MOVZX R8D, byte ptr [RSP + 0x30],0x14031a591: MOV EDX, R9D,0x14031a594: MOV RCX, RBX,0x14031a597: CALL 0x140033b80,0x14031a59c: XOR EAX, EAX,0x14031a59e: LEA R8, [0x140449f00],0x14031a5a5: NOP word ptr [RAX + RAX*0x1],0x14031a5b0: MOVZX ECX, byte ptr [RSP + RAX*0x1 + 0x78],0x14031a5b5: SHR RCX, 0x4,0x14031a5b9: MOVZX EDX, byte ptr [R8 + RCX*0x1],0x14031a5be: CMP qword ptr [RBX + 0x18], 0xf,0x14031a5c3: JBE 0x14031a5ca,0x14031a5c5: MOV RCX, qword ptr [RBX],0x14031a5c8: JMP 0x14031a5cd,0x14031a5ca: MOV RCX, RBX,0x14031a5cd: MOV byte ptr [RCX + RAX*0x2], DL,0x14031a5d0: MOVZX ECX, byte ptr [RSP + RAX*0x1 + 0x78],0x14031a5d5: AND ECX, 0xf,0x14031a5d8: MOVZX EDX, byte ptr [R8 + RCX*0x1],0x14031a5dd: CMP qword ptr [RBX + 0x18], 0xf,0x14031a5e2: JBE 0x14031a5e9,0x14031a5e4: MOV RCX, qword ptr [RBX],0x14031a5e7: JMP 0x14031a5ec,0x14031a5e9: MOV RCX, RBX,0x14031a5ec: MOV byte ptr [RCX + RAX*0x2 + 0x1], DL,0x14031a5f0: INC RAX,0x14031a5f3: CMP RAX, 0x20,0x14031a5f7: JC 0x14031a5b0,0x14031a5f9: MOV RAX, RBX,0x14031a5fc: MOV RCX, qword ptr [RSP + 0x98],0x14031a604: XOR RCX, RSP,0x14031a607: CALL 0x140327740,0x14031a60c: ADD RSP, 0xa0,0x14031a613: POP RBX,0x14031a614: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1403059c0 | FUN_1403059c0 | [object Object] | [object Object] |
| 0x140308ab0 | FUN_140308ab0 | [object Object] | [object Object] |
| 0x14030b220 | FUN_14030b220 | [object Object] | [object Object] |
| 0x14030bba0 | FUN_14030bba0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140033b80 | FUN_140033b80           | [object Object] | [object Object] |
| 0x1403198b0 | FUN_1403198b0           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140305b12    | 0x14031a500    | [object Object]  | [object Object]  | [object Object] |
| 0x140308df7    | 0x14031a500    | [object Object]  | [object Object]  | [object Object] |
| 0x14030b335    | 0x14031a500    | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc01    | 0x14031a500    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e7370    | 0x14031a500    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14031a509    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x14031a513    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x14031a51e    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x14031a523    | stack:0xffffffffffffff8c | [object Object]  |                  | [object Object] |
| 0x14031a52e    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x14031a537    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x14031a53c    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x14031a541    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x14031a546    | 0x1403198b0              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a54e    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x14031a557    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x14031a578    | stack:0xffffffffffffff8c | [object Object]  |                  | [object Object] |
| 0x14031a580    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x14031a58b    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x14031a597    | 0x140033b80              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a59e    | 0x140449f00              | [object Object]  |                  | [object Object] |
| 0x14031a5b0    | stack:0xffffffffffffffd1 | [object Object]  |                  | [object Object] |
| 0x14031a5b9    | 0x140449f00              | [object Object]  |                  | [object Object] |
| 0x14031a5c3    | 0x14031a5ca              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a5c8    | 0x14031a5cd              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a5d0    | stack:0xffffffffffffffd1 | [object Object]  |                  | [object Object] |
| 0x14031a5d8    | 0x140449f00              | [object Object]  |                  | [object Object] |
| 0x14031a5e2    | 0x14031a5e9              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a5e7    | 0x14031a5ec              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a5f7    | 0x14031a5b0              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a5fc    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x14031a607    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings

| address     | value              | source_address |
|-------------|--------------------|----------------|
| 0x140449efe | Dl0123456789abcdef | 0x14031a59e    |
| 0x140449efe | Dl0123456789abcdef | 0x14031a5b9    |
| 0x140449efe | Dl0123456789abcdef | 0x14031a5d8    |

## raw_result.value.referenced_names

| address     | value                          | source_address |
|-------------|--------------------------------|----------------|
| 0x140033b80 | FUN_140033b80                  | 0x14031a597    |
| 0x1403198b0 | FUN_1403198b0                  | 0x14031a546    |
| 0x14031a5b0 | LAB_14031a5b0                  | 0x14031a5f7    |
| 0x14031a5ca | LAB_14031a5ca                  | 0x14031a5c3    |
| 0x14031a5cd | LAB_14031a5cd                  | 0x14031a5c8    |
| 0x14031a5e9 | LAB_14031a5e9                  | 0x14031a5e2    |
| 0x14031a5ec | LAB_14031a5ec                  | 0x14031a5e7    |
| 0x140327740 | __security_check_cookie        | 0x14031a607    |
| 0x140449f00 | s_0123456789abcdef_140449efe+2 | 0x14031a59e    |
| 0x140449f00 | s_0123456789abcdef_140449efe+2 | 0x14031a5b9    |
| 0x140449f00 | s_0123456789abcdef_140449efe+2 | 0x14031a5d8    |
| 0x1404c7ac0 | DAT_1404c7ac0                  | 0x14031a509    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14031a500 | 0x14031a5b0 | 0x14031a5b0             |
| 0x14031a5b0 | 0x14031a5c5 | 0x14031a5c5,0x14031a5ca |
| 0x14031a5c5 | 0x14031a5ca | 0x14031a5cd             |
| 0x14031a5ca | 0x14031a5cd | 0x14031a5cd             |
| 0x14031a5cd | 0x14031a5e4 | 0x14031a5e4,0x14031a5e9 |
| 0x14031a5e4 | 0x14031a5e9 | 0x14031a5ec             |
| 0x14031a5e9 | 0x14031a5ec | 0x14031a5ec             |
| 0x14031a5ec | 0x14031a5f9 | 0x14031a5b0,0x14031a5f9 |
| 0x14031a5f9 | 0x14031a615 |                         |

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

| id              | address     | sequence | opcode     | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x14031a502#563 | 0x14031a502 | 563      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a510#15  | 0x14031a510 | 15       | INT_XOR    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a510#593 | 0x14031a510 | 593      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a523#31  | 0x14031a523 | 31       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a52b#32  | 0x14031a52b | 32       | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a533#38  | 0x14031a533 | 38       | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a533#564 | 0x14031a533 | 564      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a53c#565 | 0x14031a53c | 565      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a541#566 | 0x14031a541 | 566      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#49  | 0x14031a546 | 49       | CALL       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a546#487 | 0x14031a546 | 487      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#506 | 0x14031a546 | 506      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#510 | 0x14031a546 | 510      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#514 | 0x14031a546 | 514      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#518 | 0x14031a546 | 518      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#522 | 0x14031a546 | 522      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#550 | 0x14031a546 | 550      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#592 | 0x14031a546 | 592      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a546#594 | 0x14031a546 | 594      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a54b#476 | 0x14031a54b | 476      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a54b#477 | 0x14031a54b | 477      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a54b#567 | 0x14031a54b | 567      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a553#462 | 0x14031a553 | 462      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#463 | 0x14031a553 | 463      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#464 | 0x14031a553 | 464      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#465 | 0x14031a553 | 465      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#467 | 0x14031a553 | 467      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#468 | 0x14031a553 | 468      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#568 | 0x14031a553 | 568      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a553#569 | 0x14031a553 | 569      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a553#595 | 0x14031a553 | 595      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a553#596 | 0x14031a553 | 596      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a553#597 | 0x14031a553 | 597      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a553#598 | 0x14031a553 | 598      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a553#599 | 0x14031a553 | 599      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a553#600 | 0x14031a553 | 600      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a562#484 | 0x14031a562 | 484      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a562#485 | 0x14031a562 | 485      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a562#495 | 0x14031a562 | 495      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a562#496 | 0x14031a562 | 496      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a562#570 | 0x14031a562 | 570      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a565#77  | 0x14031a565 | 77       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a565#490 | 0x14031a565 | 490      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a565#571 | 0x14031a565 | 571      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a56d#80  | 0x14031a56d | 80       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a56d#491 | 0x14031a56d | 491      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a56d#572 | 0x14031a56d | 572      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a575#82  | 0x14031a575 | 82       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a575#492 | 0x14031a575 | 492      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a575#601 | 0x14031a575 | 601      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a578#85  | 0x14031a578 | 85       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a580#88  | 0x14031a580 | 88       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a597#99  | 0x14031a597 | 99       | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14031a597#488 | 0x14031a597 | 488      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#503 | 0x14031a597 | 503      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#511 | 0x14031a597 | 511      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#515 | 0x14031a597 | 515      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#519 | 0x14031a597 | 519      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#523 | 0x14031a597 | 523      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#527 | 0x14031a597 | 527      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#531 | 0x14031a597 | 531      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#535 | 0x14031a597 | 535      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#539 | 0x14031a597 | 539      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#543 | 0x14031a597 | 543      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#547 | 0x14031a597 | 547      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#551 | 0x14031a597 | 551      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a59c#359 | 0x14031a59c | 359      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5b0#116 | 0x14031a5b0 | 116      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b0#362 | 0x14031a5b0 | 362      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b0#497 | 0x14031a5b0 | 497      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b0#575 | 0x14031a5b0 | 575      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b0#576 | 0x14031a5b0 | 576      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b0#602 | 0x14031a5b0 | 602      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5b0#603 | 0x14031a5b0 | 603      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5b5#121 | 0x14031a5b5 | 121      | INT_ZEXT   | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5b5#450 | 0x14031a5b5 | 450      | INT_RIGHT  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b9#161 | 0x14031a5b9 | 161      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a5b9#162 | 0x14031a5b9 | 162      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b9#559 | 0x14031a5b9 | 559      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5b9#577 | 0x14031a5b9 | 577      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5be#166 | 0x14031a5be | 166      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5be#578 | 0x14031a5be | 578      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a5c3#177 | 0x14031a5c3 | 177      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5c3#178 | 0x14031a5c3 | 178      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14031a5c3#591 | 0x14031a5c3 | 591      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5c3#604 | 0x14031a5c3 | 604      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5c5#179 | 0x14031a5c5 | 179      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5c5#605 | 0x14031a5c5 | 605      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5c8#181 | 0x14031a5c8 | 181      | BRANCH     | true    | member           | [object Object]                                                 |                 |
| 0x14031a5c8#590 | 0x14031a5c8 | 590      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5cd#182 | 0x14031a5cd | 182      | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5cd#183 | 0x14031a5cd | 183      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5cd#185 | 0x14031a5cd | 185      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a5cd#380 | 0x14031a5cd | 380      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5cd#493 | 0x14031a5cd | 493      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5cd#606 | 0x14031a5cd | 606      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5cd#607 | 0x14031a5cd | 607      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d0#189 | 0x14031a5d0 | 189      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5d0#581 | 0x14031a5d0 | 581      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5d0#582 | 0x14031a5d0 | 582      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5d0#608 | 0x14031a5d0 | 608      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d0#609 | 0x14031a5d0 | 609      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d5#194 | 0x14031a5d5 | 194      | INT_AND    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5d5#365 | 0x14031a5d5 | 365      | INT_ZEXT   | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d5#375 | 0x14031a5d5 | 375      | INT_ZEXT   | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d8#203 | 0x14031a5d8 | 203      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a5d8#204 | 0x14031a5d8 | 204      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5d8#561 | 0x14031a5d8 | 561      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d8#583 | 0x14031a5d8 | 583      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5dd#208 | 0x14031a5dd | 208      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5dd#584 | 0x14031a5dd | 584      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a5e2#219 | 0x14031a5e2 | 219      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5e2#220 | 0x14031a5e2 | 220      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14031a5e2#589 | 0x14031a5e2 | 589      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5e2#610 | 0x14031a5e2 | 610      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5e4#221 | 0x14031a5e4 | 221      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5e4#611 | 0x14031a5e4 | 611      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5e7#223 | 0x14031a5e7 | 223      | BRANCH     | true    | member           | [object Object]                                                 |                 |
| 0x14031a5e7#588 | 0x14031a5e7 | 588      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5ec#225 | 0x14031a5ec | 225      | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5ec#226 | 0x14031a5ec | 226      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5ec#228 | 0x14031a5ec | 228      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a5ec#378 | 0x14031a5ec | 378      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5ec#494 | 0x14031a5ec | 494      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5ec#585 | 0x14031a5ec | 585      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5ec#612 | 0x14031a5ec | 612      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5ec#613 | 0x14031a5ec | 613      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5f0#230 | 0x14031a5f0 | 230      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5f3#238 | 0x14031a5f3 | 238      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5f7#247 | 0x14031a5f7 | 247      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14031a5f9#248 | 0x14031a5f9 | 248      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a614#279 | 0x14031a614 | 279      | RETURN     | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14031a614#489 | 0x14031a614 | 489      | COPY       | true    | member           | [object Object]                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x14031a510#593 | 0x14031a510#15  | 1           |
| 0x14031a502#563 | 0x14031a510#593 | 0           |
| 0x14031a533#564 | 0x14031a533#38  | 1           |
| 0x14031a541#566 | 0x14031a546#49  | 1           |
| 0x14031a53c#565 | 0x14031a546#49  | 2           |
| 0x14031a523#31  | 0x14031a546#510 | 0           |
| 0x14031a52b#32  | 0x14031a546#514 | 0           |
| 0x14031a533#38  | 0x14031a546#518 | 0           |
| 0x14031a546#592 | 0x14031a546#522 | 0           |
| 0x14031a510#15  | 0x14031a546#550 | 0           |
| 0x14031a546#49  | 0x14031a546#594 | 0           |
| 0x14031a546#594 | 0x14031a54b#476 | 1           |
| 0x14031a54b#567 | 0x14031a54b#477 | 1           |
| 0x14031a546#594 | 0x14031a54b#567 | 0           |
| 0x14031a553#595 | 0x14031a553#462 | 1           |
| 0x14031a553#597 | 0x14031a553#463 | 1           |
| 0x14031a553#596 | 0x14031a553#464 | 0           |
| 0x14031a553#598 | 0x14031a553#465 | 1           |
| 0x14031a553#600 | 0x14031a553#467 | 1           |
| 0x14031a553#599 | 0x14031a553#468 | 0           |
| 0x14031a546#594 | 0x14031a553#568 | 0           |
| 0x14031a546#594 | 0x14031a553#569 | 0           |
| 0x14031a553#568 | 0x14031a553#595 | 0           |
| 0x14031a546#594 | 0x14031a553#596 | 0           |
| 0x14031a553#464 | 0x14031a553#597 | 0           |
| 0x14031a553#569 | 0x14031a553#598 | 0           |
| 0x14031a546#594 | 0x14031a553#599 | 0           |
| 0x14031a553#468 | 0x14031a553#600 | 0           |
| 0x14031a562#570 | 0x14031a562#485 | 1           |
| 0x14031a546#487 | 0x14031a562#495 | 0           |
| 0x14031a562#495 | 0x14031a562#496 | 0           |
| 0x14031a565#571 | 0x14031a565#77  | 1           |
| 0x14031a562#496 | 0x14031a565#490 | 0           |
| 0x14031a56d#572 | 0x14031a56d#80  | 1           |
| 0x14031a565#490 | 0x14031a56d#491 | 0           |
| 0x14031a575#601 | 0x14031a575#82  | 1           |
| 0x14031a56d#491 | 0x14031a575#492 | 0           |
| 0x14031a546#506 | 0x14031a597#99  | 3           |
| 0x14031a575#492 | 0x14031a597#488 | 0           |
| 0x14031a580#88  | 0x14031a597#503 | 0           |
| 0x14031a578#85  | 0x14031a597#511 | 0           |
| 0x14031a546#514 | 0x14031a597#515 | 0           |
| 0x14031a546#518 | 0x14031a597#519 | 0           |
| 0x14031a546#522 | 0x14031a597#523 | 0           |
| 0x14031a54b#476 | 0x14031a597#527 | 0           |
| 0x14031a54b#477 | 0x14031a597#531 | 0           |
| 0x14031a553#462 | 0x14031a597#535 | 0           |
| 0x14031a553#463 | 0x14031a597#539 | 0           |
| 0x14031a553#465 | 0x14031a597#543 | 0           |
| 0x14031a553#467 | 0x14031a597#547 | 0           |
| 0x14031a546#550 | 0x14031a597#551 | 0           |
| 0x14031a5b0#603 | 0x14031a5b0#116 | 1           |
| 0x14031a59c#359 | 0x14031a5b0#362 | 0           |
| 0x14031a5f0#230 | 0x14031a5b0#362 | 1           |
| 0x14031a597#488 | 0x14031a5b0#497 | 0           |
| 0x14031a5ec#494 | 0x14031a5b0#497 | 1           |
| 0x14031a5b0#602 | 0x14031a5b0#576 | 0           |
| 0x14031a5b0#362 | 0x14031a5b0#576 | 1           |
| 0x14031a5b0#575 | 0x14031a5b0#602 | 0           |
| 0x14031a5b0#576 | 0x14031a5b0#603 | 0           |
| 0x14031a5b5#450 | 0x14031a5b5#121 | 0           |
| 0x14031a5b0#116 | 0x14031a5b5#450 | 0           |
| 0x14031a5b9#559 | 0x14031a5b9#161 | 0           |
| 0x14031a5b9#577 | 0x14031a5b9#161 | 1           |
| 0x14031a5b9#161 | 0x14031a5b9#162 | 1           |
| 0x14031a5b5#121 | 0x14031a5b9#577 | 0           |
| 0x14031a5be#578 | 0x14031a5be#166 | 1           |
| 0x14031a5c3#604 | 0x14031a5c3#177 | 1           |
| 0x14031a5c3#177 | 0x14031a5c3#178 | 1           |
| 0x14031a5be#166 | 0x14031a5c3#604 | 0           |
| 0x14031a5c5#179 | 0x14031a5c5#605 | 0           |
| 0x14031a5c5#605 | 0x14031a5c8#590 | 0           |
| 0x14031a5b0#362 | 0x14031a5cd#182 | 0           |
| 0x14031a5cd#606 | 0x14031a5cd#183 | 0           |
| 0x14031a5cd#182 | 0x14031a5cd#183 | 1           |
| 0x14031a5cd#607 | 0x14031a5cd#185 | 1           |
| 0x14031a5b9#162 | 0x14031a5cd#185 | 2           |
| 0x14031a5c8#590 | 0x14031a5cd#380 | 0           |
| 0x14031a5c3#591 | 0x14031a5cd#380 | 1           |
| 0x14031a5b0#497 | 0x14031a5cd#493 | 0           |
| 0x14031a5cd#380 | 0x14031a5cd#606 | 0           |
| 0x14031a5cd#183 | 0x14031a5cd#607 | 0           |
| 0x14031a5d0#609 | 0x14031a5d0#189 | 1           |
| 0x14031a5d0#608 | 0x14031a5d0#582 | 0           |
| 0x14031a5b0#362 | 0x14031a5d0#582 | 1           |
| 0x14031a5d0#581 | 0x14031a5d0#608 | 0           |
| 0x14031a5d0#582 | 0x14031a5d0#609 | 0           |
| 0x14031a5d5#365 | 0x14031a5d5#194 | 0           |
| 0x14031a5d0#189 | 0x14031a5d5#365 | 0           |
| 0x14031a5d5#194 | 0x14031a5d5#375 | 0           |
| 0x14031a5d8#561 | 0x14031a5d8#203 | 0           |
| 0x14031a5d8#583 | 0x14031a5d8#203 | 1           |
| 0x14031a5d8#203 | 0x14031a5d8#204 | 1           |
| 0x14031a5d5#375 | 0x14031a5d8#583 | 0           |
| 0x14031a5dd#584 | 0x14031a5dd#208 | 1           |
| 0x14031a5e2#610 | 0x14031a5e2#219 | 1           |
| 0x14031a5e2#219 | 0x14031a5e2#220 | 1           |
| 0x14031a5dd#208 | 0x14031a5e2#610 | 0           |
| 0x14031a5e4#221 | 0x14031a5e4#611 | 0           |
| 0x14031a5e4#611 | 0x14031a5e7#588 | 0           |
| 0x14031a5b0#362 | 0x14031a5ec#225 | 0           |
| 0x14031a5ec#612 | 0x14031a5ec#226 | 0           |
| 0x14031a5ec#585 | 0x14031a5ec#226 | 1           |
| 0x14031a5ec#613 | 0x14031a5ec#228 | 1           |
| 0x14031a5d8#204 | 0x14031a5ec#228 | 2           |
| 0x14031a5e7#588 | 0x14031a5ec#378 | 0           |
| 0x14031a5e2#589 | 0x14031a5ec#378 | 1           |
| 0x14031a5cd#493 | 0x14031a5ec#494 | 0           |
| 0x14031a5ec#225 | 0x14031a5ec#585 | 0           |
| 0x14031a5ec#378 | 0x14031a5ec#612 | 0           |
| 0x14031a5ec#226 | 0x14031a5ec#613 | 0           |
| 0x14031a5b0#362 | 0x14031a5f0#230 | 0           |
| 0x14031a5f0#230 | 0x14031a5f3#238 | 0           |
| 0x14031a5f3#238 | 0x14031a5f7#247 | 1           |
| 0x14031a5f9#248 | 0x14031a614#279 | 1           |
| 0x14031a5ec#494 | 0x14031a614#489 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |
| 1       | param_2 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 1       | 0x14031a52b#32  | 1           |
| 1       | 0x14031a533#564 | 0           |
| 0       | 0x14031a546#592 | 0           |
| 0       | 0x14031a562#484 | 1           |
| 0       | 0x14031a562#570 | 0           |
| 0       | 0x14031a565#571 | 0           |
| 0       | 0x14031a56d#572 | 0           |
| 0       | 0x14031a575#601 | 0           |
| 0       | 0x14031a597#99  | 1           |
| 0       | 0x14031a5be#578 | 0           |
| 0       | 0x14031a5c3#591 | 0           |
| 0       | 0x14031a5c5#179 | 1           |
| 0       | 0x14031a5dd#584 | 0           |
| 0       | 0x14031a5e2#589 | 0           |
| 0       | 0x14031a5e4#221 | 1           |
| 0       | 0x14031a5f9#248 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x14031a52b#32  | memory_read        | 1             |             |
| 0x14031a533#38  | memory_read        | 1             |             |
| 0x14031a546#49  | direct_call        | 0             |             |
| 0x14031a54b#476 | memory_read        | 1             |             |
| 0x14031a54b#477 | memory_read        | 1             |             |
| 0x14031a553#462 | memory_read        | 1             |             |
| 0x14031a553#463 | memory_read        | 1             |             |
| 0x14031a553#465 | memory_read        | 1             |             |
| 0x14031a553#467 | memory_read        | 1             |             |
| 0x14031a562#484 | memory_write       | 1             | 2           |
| 0x14031a562#485 | memory_write       | 1             | 2           |
| 0x14031a565#77  | memory_write       | 1             | 2           |
| 0x14031a56d#80  | memory_write       | 1             | 2           |
| 0x14031a575#82  | memory_write       | 1             | 2           |
| 0x14031a597#99  | direct_call        | 0             |             |
| 0x14031a5b0#116 | memory_read        | 1             |             |
| 0x14031a5b9#162 | memory_read        | 1             |             |
| 0x14031a5be#166 | memory_read        | 1             |             |
| 0x14031a5c3#178 | conditional_branch |               | 1           |
| 0x14031a5c5#179 | memory_read        | 1             |             |
| 0x14031a5cd#185 | memory_write       | 1             | 2           |
| 0x14031a5d0#189 | memory_read        | 1             |             |
| 0x14031a5d8#204 | memory_read        | 1             |             |
| 0x14031a5dd#208 | memory_read        | 1             |             |
| 0x14031a5e2#220 | conditional_branch |               | 1           |
| 0x14031a5e4#221 | memory_read        | 1             |             |
| 0x14031a5ec#228 | memory_write       | 1             | 2           |
| 0x14031a5f7#247 | conditional_branch |               | 1           |

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

0x14031a500

## normalized_result.procedure.name

FUN_14031a500

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
| 0x14031a500 | 0x14031a614 |

## normalized_result.procedure.body.total_bytes

277

## normalized_result.procedure.body.span_bytes

277

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_14031a500()

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_10 @ Stack[-0x10]:8      | ghidra-function-database |
| undefined1[16] local_20 @ Stack[-0x20]:16 | ghidra-function-database |
| undefined1[16] local_30 @ Stack[-0x30]:16 | ghidra-function-database |
| undefined local_50 @ Stack[-0x50]:1       | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8      | ghidra-function-database |
| undefined8 local_60 @ Stack[-0x60]:8      | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined4 local_74 @ Stack[-0x74]:4      | ghidra-function-database |
| undefined1 local_78 @ Stack[-0x78]:1      | ghidra-function-database |
| undefined1 local_88 @ Stack[-0x88]:1      | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14031a500(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_1404c7ac0 ^ (ulonglong)auStack_a8;
  local_74 = 0;
  local_68 = *param_2;
  local_60 = param_2[1];
  local_58 = param_1;
  puVar1 = (undefined8 *)FUN_1403198b0(local_50,&local_68);
  local_30 = *puVar1;
  uStack_28 = puVar1[1];
  local_20 = *(undefined4 *)(puVar1 + 2);
  uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_18 = *(undefined4 *)(puVar1 + 3);
  uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_74 = 2;
  local_88 = 0;
  FUN_140033b80(param_1,0x40,local_78);
  uVar2 = 0;
  do {
    puVar1 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar1 = (undefined8 *)*param_1;
    }
    *(char *)((longlong)puVar1 + uVar2 * 2) =
         "Dl0123456789abcdef"[(ulonglong)(*(byte *)((longlong)&local_30 + uVar2) >> 4) + 2];
    puVar1 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar1 = (undefined8 *)*param_1;
    }
    *(char *)((longlong)puVar1 + uVar2 * 2 + 1) =
         "Dl0123456789abcdef"[(ulonglong)(*(byte *)((longlong)&local_30 + uVar2) & 0xf) + 2];
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  return param_1;
}



## normalized_result.assembly

0x14031a500: PUSH RBX,0x14031a502: SUB RSP, 0xa0,0x14031a509: MOV RAX, qword ptr [0x1404c7ac0],0x14031a510: XOR RAX, RSP,0x14031a513: MOV qword ptr [RSP + 0x98], RAX,0x14031a51b: MOV RBX, RCX,0x14031a51e: MOV qword ptr [RSP + 0x50], RCX,0x14031a523: MOV dword ptr [RSP + 0x34], 0x0,0x14031a52b: MOV RAX, qword ptr [RDX],0x14031a52e: MOV qword ptr [RSP + 0x40], RAX,0x14031a533: MOV RAX, qword ptr [RDX + 0x8],0x14031a537: MOV qword ptr [RSP + 0x48], RAX,0x14031a53c: LEA RDX, [RSP + 0x40],0x14031a541: LEA RCX, [RSP + 0x58],0x14031a546: CALL 0x1403198b0,0x14031a54b: MOVUPS XMM0, xmmword ptr [RAX],0x14031a54e: MOVUPS xmmword ptr [RSP + 0x78], XMM0,0x14031a553: MOVUPS XMM1, xmmword ptr [RAX + 0x10],0x14031a557: MOVUPS xmmword ptr [RSP + 0x88], XMM1,0x14031a55f: XORPS XMM0, XMM0,0x14031a562: MOVUPS xmmword ptr [RBX], XMM0,0x14031a565: MOV qword ptr [RBX + 0x10], 0x0,0x14031a56d: MOV qword ptr [RBX + 0x18], 0xf,0x14031a575: MOV byte ptr [RBX], 0x0,0x14031a578: MOV dword ptr [RSP + 0x34], 0x2,0x14031a580: MOV byte ptr [RSP + 0x20], 0x0,0x14031a585: MOV R9D, 0x40,0x14031a58b: MOVZX R8D, byte ptr [RSP + 0x30],0x14031a591: MOV EDX, R9D,0x14031a594: MOV RCX, RBX,0x14031a597: CALL 0x140033b80,0x14031a59c: XOR EAX, EAX,0x14031a59e: LEA R8, [0x140449f00],0x14031a5a5: NOP word ptr [RAX + RAX*0x1],0x14031a5b0: MOVZX ECX, byte ptr [RSP + RAX*0x1 + 0x78],0x14031a5b5: SHR RCX, 0x4,0x14031a5b9: MOVZX EDX, byte ptr [R8 + RCX*0x1],0x14031a5be: CMP qword ptr [RBX + 0x18], 0xf,0x14031a5c3: JBE 0x14031a5ca,0x14031a5c5: MOV RCX, qword ptr [RBX],0x14031a5c8: JMP 0x14031a5cd,0x14031a5ca: MOV RCX, RBX,0x14031a5cd: MOV byte ptr [RCX + RAX*0x2], DL,0x14031a5d0: MOVZX ECX, byte ptr [RSP + RAX*0x1 + 0x78],0x14031a5d5: AND ECX, 0xf,0x14031a5d8: MOVZX EDX, byte ptr [R8 + RCX*0x1],0x14031a5dd: CMP qword ptr [RBX + 0x18], 0xf,0x14031a5e2: JBE 0x14031a5e9,0x14031a5e4: MOV RCX, qword ptr [RBX],0x14031a5e7: JMP 0x14031a5ec,0x14031a5e9: MOV RCX, RBX,0x14031a5ec: MOV byte ptr [RCX + RAX*0x2 + 0x1], DL,0x14031a5f0: INC RAX,0x14031a5f3: CMP RAX, 0x20,0x14031a5f7: JC 0x14031a5b0,0x14031a5f9: MOV RAX, RBX,0x14031a5fc: MOV RCX, qword ptr [RSP + 0x98],0x14031a604: XOR RCX, RSP,0x14031a607: CALL 0x140327740,0x14031a60c: ADD RSP, 0xa0,0x14031a613: POP RBX,0x14031a614: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1403059c0 | FUN_1403059c0 | [object Object] | [object Object] |
| 0x140308ab0 | FUN_140308ab0 | [object Object] | [object Object] |
| 0x14030b220 | FUN_14030b220 | [object Object] | [object Object] |
| 0x14030bba0 | FUN_14030bba0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140033b80 | FUN_140033b80           | [object Object] | [object Object] |
| 0x1403198b0 | FUN_1403198b0           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140305b12    | 0x14031a500    | [object Object]  | [object Object]  | [object Object] |
| 0x140308df7    | 0x14031a500    | [object Object]  | [object Object]  | [object Object] |
| 0x14030b335    | 0x14031a500    | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc01    | 0x14031a500    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e7370    | 0x14031a500    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14031a509    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x14031a513    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x14031a51e    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x14031a523    | stack:0xffffffffffffff8c | [object Object]  |                  | [object Object] |
| 0x14031a52e    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x14031a537    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x14031a53c    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x14031a541    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x14031a546    | 0x1403198b0              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a54e    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x14031a557    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x14031a578    | stack:0xffffffffffffff8c | [object Object]  |                  | [object Object] |
| 0x14031a580    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x14031a58b    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x14031a597    | 0x140033b80              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a59e    | 0x140449f00              | [object Object]  |                  | [object Object] |
| 0x14031a5b0    | stack:0xffffffffffffffd1 | [object Object]  |                  | [object Object] |
| 0x14031a5b9    | 0x140449f00              | [object Object]  |                  | [object Object] |
| 0x14031a5c3    | 0x14031a5ca              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a5c8    | 0x14031a5cd              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a5d0    | stack:0xffffffffffffffd1 | [object Object]  |                  | [object Object] |
| 0x14031a5d8    | 0x140449f00              | [object Object]  |                  | [object Object] |
| 0x14031a5e2    | 0x14031a5e9              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a5e7    | 0x14031a5ec              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a5f7    | 0x14031a5b0              | [object Object]  | [object Object]  | [object Object] |
| 0x14031a5fc    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x14031a607    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings

| address     | value              | source_address |
|-------------|--------------------|----------------|
| 0x140449efe | Dl0123456789abcdef | 0x14031a59e    |
| 0x140449efe | Dl0123456789abcdef | 0x14031a5b9    |
| 0x140449efe | Dl0123456789abcdef | 0x14031a5d8    |

## normalized_result.referenced_names

| address     | value                          | source_address |
|-------------|--------------------------------|----------------|
| 0x140033b80 | FUN_140033b80                  | 0x14031a597    |
| 0x1403198b0 | FUN_1403198b0                  | 0x14031a546    |
| 0x14031a5b0 | LAB_14031a5b0                  | 0x14031a5f7    |
| 0x14031a5ca | LAB_14031a5ca                  | 0x14031a5c3    |
| 0x14031a5cd | LAB_14031a5cd                  | 0x14031a5c8    |
| 0x14031a5e9 | LAB_14031a5e9                  | 0x14031a5e2    |
| 0x14031a5ec | LAB_14031a5ec                  | 0x14031a5e7    |
| 0x140327740 | __security_check_cookie        | 0x14031a607    |
| 0x140449f00 | s_0123456789abcdef_140449efe+2 | 0x14031a59e    |
| 0x140449f00 | s_0123456789abcdef_140449efe+2 | 0x14031a5b9    |
| 0x140449f00 | s_0123456789abcdef_140449efe+2 | 0x14031a5d8    |
| 0x1404c7ac0 | DAT_1404c7ac0                  | 0x14031a509    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14031a500 | 0x14031a5b0 | 0x14031a5b0             |
| 0x14031a5b0 | 0x14031a5c5 | 0x14031a5c5,0x14031a5ca |
| 0x14031a5c5 | 0x14031a5ca | 0x14031a5cd             |
| 0x14031a5ca | 0x14031a5cd | 0x14031a5cd             |
| 0x14031a5cd | 0x14031a5e4 | 0x14031a5e4,0x14031a5e9 |
| 0x14031a5e4 | 0x14031a5e9 | 0x14031a5ec             |
| 0x14031a5e9 | 0x14031a5ec | 0x14031a5ec             |
| 0x14031a5ec | 0x14031a5f9 | 0x14031a5b0,0x14031a5f9 |
| 0x14031a5f9 | 0x14031a615 |                         |

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

| id              | address     | sequence | opcode     | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x14031a502#563 | 0x14031a502 | 563      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a510#15  | 0x14031a510 | 15       | INT_XOR    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a510#593 | 0x14031a510 | 593      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a523#31  | 0x14031a523 | 31       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a52b#32  | 0x14031a52b | 32       | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a533#38  | 0x14031a533 | 38       | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a533#564 | 0x14031a533 | 564      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a53c#565 | 0x14031a53c | 565      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a541#566 | 0x14031a541 | 566      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#49  | 0x14031a546 | 49       | CALL       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a546#487 | 0x14031a546 | 487      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#506 | 0x14031a546 | 506      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#510 | 0x14031a546 | 510      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#514 | 0x14031a546 | 514      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#518 | 0x14031a546 | 518      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#522 | 0x14031a546 | 522      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#550 | 0x14031a546 | 550      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a546#592 | 0x14031a546 | 592      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a546#594 | 0x14031a546 | 594      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a54b#476 | 0x14031a54b | 476      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a54b#477 | 0x14031a54b | 477      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a54b#567 | 0x14031a54b | 567      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a553#462 | 0x14031a553 | 462      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#463 | 0x14031a553 | 463      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#464 | 0x14031a553 | 464      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#465 | 0x14031a553 | 465      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#467 | 0x14031a553 | 467      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#468 | 0x14031a553 | 468      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a553#568 | 0x14031a553 | 568      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a553#569 | 0x14031a553 | 569      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a553#595 | 0x14031a553 | 595      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a553#596 | 0x14031a553 | 596      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a553#597 | 0x14031a553 | 597      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a553#598 | 0x14031a553 | 598      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a553#599 | 0x14031a553 | 599      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a553#600 | 0x14031a553 | 600      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a562#484 | 0x14031a562 | 484      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a562#485 | 0x14031a562 | 485      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a562#495 | 0x14031a562 | 495      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a562#496 | 0x14031a562 | 496      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a562#570 | 0x14031a562 | 570      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a565#77  | 0x14031a565 | 77       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a565#490 | 0x14031a565 | 490      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a565#571 | 0x14031a565 | 571      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a56d#80  | 0x14031a56d | 80       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a56d#491 | 0x14031a56d | 491      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a56d#572 | 0x14031a56d | 572      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a575#82  | 0x14031a575 | 82       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a575#492 | 0x14031a575 | 492      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a575#601 | 0x14031a575 | 601      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a578#85  | 0x14031a578 | 85       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a580#88  | 0x14031a580 | 88       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a597#99  | 0x14031a597 | 99       | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14031a597#488 | 0x14031a597 | 488      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#503 | 0x14031a597 | 503      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#511 | 0x14031a597 | 511      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#515 | 0x14031a597 | 515      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#519 | 0x14031a597 | 519      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#523 | 0x14031a597 | 523      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#527 | 0x14031a597 | 527      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#531 | 0x14031a597 | 531      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#535 | 0x14031a597 | 535      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#539 | 0x14031a597 | 539      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#543 | 0x14031a597 | 543      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#547 | 0x14031a597 | 547      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a597#551 | 0x14031a597 | 551      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a59c#359 | 0x14031a59c | 359      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5b0#116 | 0x14031a5b0 | 116      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b0#362 | 0x14031a5b0 | 362      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b0#497 | 0x14031a5b0 | 497      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b0#575 | 0x14031a5b0 | 575      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b0#576 | 0x14031a5b0 | 576      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b0#602 | 0x14031a5b0 | 602      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5b0#603 | 0x14031a5b0 | 603      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5b5#121 | 0x14031a5b5 | 121      | INT_ZEXT   | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5b5#450 | 0x14031a5b5 | 450      | INT_RIGHT  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b9#161 | 0x14031a5b9 | 161      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a5b9#162 | 0x14031a5b9 | 162      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5b9#559 | 0x14031a5b9 | 559      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5b9#577 | 0x14031a5b9 | 577      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5be#166 | 0x14031a5be | 166      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5be#578 | 0x14031a5be | 578      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a5c3#177 | 0x14031a5c3 | 177      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5c3#178 | 0x14031a5c3 | 178      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14031a5c3#591 | 0x14031a5c3 | 591      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5c3#604 | 0x14031a5c3 | 604      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5c5#179 | 0x14031a5c5 | 179      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5c5#605 | 0x14031a5c5 | 605      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5c8#181 | 0x14031a5c8 | 181      | BRANCH     | true    | member           | [object Object]                                                 |                 |
| 0x14031a5c8#590 | 0x14031a5c8 | 590      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5cd#182 | 0x14031a5cd | 182      | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5cd#183 | 0x14031a5cd | 183      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5cd#185 | 0x14031a5cd | 185      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a5cd#380 | 0x14031a5cd | 380      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5cd#493 | 0x14031a5cd | 493      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5cd#606 | 0x14031a5cd | 606      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5cd#607 | 0x14031a5cd | 607      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d0#189 | 0x14031a5d0 | 189      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5d0#581 | 0x14031a5d0 | 581      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5d0#582 | 0x14031a5d0 | 582      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5d0#608 | 0x14031a5d0 | 608      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d0#609 | 0x14031a5d0 | 609      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d5#194 | 0x14031a5d5 | 194      | INT_AND    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5d5#365 | 0x14031a5d5 | 365      | INT_ZEXT   | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d5#375 | 0x14031a5d5 | 375      | INT_ZEXT   | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d8#203 | 0x14031a5d8 | 203      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a5d8#204 | 0x14031a5d8 | 204      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5d8#561 | 0x14031a5d8 | 561      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5d8#583 | 0x14031a5d8 | 583      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5dd#208 | 0x14031a5dd | 208      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5dd#584 | 0x14031a5dd | 584      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14031a5e2#219 | 0x14031a5e2 | 219      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5e2#220 | 0x14031a5e2 | 220      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14031a5e2#589 | 0x14031a5e2 | 589      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5e2#610 | 0x14031a5e2 | 610      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5e4#221 | 0x14031a5e4 | 221      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5e4#611 | 0x14031a5e4 | 611      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5e7#223 | 0x14031a5e7 | 223      | BRANCH     | true    | member           | [object Object]                                                 |                 |
| 0x14031a5e7#588 | 0x14031a5e7 | 588      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5ec#225 | 0x14031a5ec | 225      | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5ec#226 | 0x14031a5ec | 226      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5ec#228 | 0x14031a5ec | 228      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14031a5ec#378 | 0x14031a5ec | 378      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5ec#494 | 0x14031a5ec | 494      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5ec#585 | 0x14031a5ec | 585      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5ec#612 | 0x14031a5ec | 612      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5ec#613 | 0x14031a5ec | 613      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a5f0#230 | 0x14031a5f0 | 230      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5f3#238 | 0x14031a5f3 | 238      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14031a5f7#247 | 0x14031a5f7 | 247      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14031a5f9#248 | 0x14031a5f9 | 248      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x14031a614#279 | 0x14031a614 | 279      | RETURN     | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14031a614#489 | 0x14031a614 | 489      | COPY       | true    | member           | [object Object]                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x14031a510#593 | 0x14031a510#15  | 1           |
| 0x14031a502#563 | 0x14031a510#593 | 0           |
| 0x14031a533#564 | 0x14031a533#38  | 1           |
| 0x14031a541#566 | 0x14031a546#49  | 1           |
| 0x14031a53c#565 | 0x14031a546#49  | 2           |
| 0x14031a523#31  | 0x14031a546#510 | 0           |
| 0x14031a52b#32  | 0x14031a546#514 | 0           |
| 0x14031a533#38  | 0x14031a546#518 | 0           |
| 0x14031a546#592 | 0x14031a546#522 | 0           |
| 0x14031a510#15  | 0x14031a546#550 | 0           |
| 0x14031a546#49  | 0x14031a546#594 | 0           |
| 0x14031a546#594 | 0x14031a54b#476 | 1           |
| 0x14031a54b#567 | 0x14031a54b#477 | 1           |
| 0x14031a546#594 | 0x14031a54b#567 | 0           |
| 0x14031a553#595 | 0x14031a553#462 | 1           |
| 0x14031a553#597 | 0x14031a553#463 | 1           |
| 0x14031a553#596 | 0x14031a553#464 | 0           |
| 0x14031a553#598 | 0x14031a553#465 | 1           |
| 0x14031a553#600 | 0x14031a553#467 | 1           |
| 0x14031a553#599 | 0x14031a553#468 | 0           |
| 0x14031a546#594 | 0x14031a553#568 | 0           |
| 0x14031a546#594 | 0x14031a553#569 | 0           |
| 0x14031a553#568 | 0x14031a553#595 | 0           |
| 0x14031a546#594 | 0x14031a553#596 | 0           |
| 0x14031a553#464 | 0x14031a553#597 | 0           |
| 0x14031a553#569 | 0x14031a553#598 | 0           |
| 0x14031a546#594 | 0x14031a553#599 | 0           |
| 0x14031a553#468 | 0x14031a553#600 | 0           |
| 0x14031a562#570 | 0x14031a562#485 | 1           |
| 0x14031a546#487 | 0x14031a562#495 | 0           |
| 0x14031a562#495 | 0x14031a562#496 | 0           |
| 0x14031a565#571 | 0x14031a565#77  | 1           |
| 0x14031a562#496 | 0x14031a565#490 | 0           |
| 0x14031a56d#572 | 0x14031a56d#80  | 1           |
| 0x14031a565#490 | 0x14031a56d#491 | 0           |
| 0x14031a575#601 | 0x14031a575#82  | 1           |
| 0x14031a56d#491 | 0x14031a575#492 | 0           |
| 0x14031a546#506 | 0x14031a597#99  | 3           |
| 0x14031a575#492 | 0x14031a597#488 | 0           |
| 0x14031a580#88  | 0x14031a597#503 | 0           |
| 0x14031a578#85  | 0x14031a597#511 | 0           |
| 0x14031a546#514 | 0x14031a597#515 | 0           |
| 0x14031a546#518 | 0x14031a597#519 | 0           |
| 0x14031a546#522 | 0x14031a597#523 | 0           |
| 0x14031a54b#476 | 0x14031a597#527 | 0           |
| 0x14031a54b#477 | 0x14031a597#531 | 0           |
| 0x14031a553#462 | 0x14031a597#535 | 0           |
| 0x14031a553#463 | 0x14031a597#539 | 0           |
| 0x14031a553#465 | 0x14031a597#543 | 0           |
| 0x14031a553#467 | 0x14031a597#547 | 0           |
| 0x14031a546#550 | 0x14031a597#551 | 0           |
| 0x14031a5b0#603 | 0x14031a5b0#116 | 1           |
| 0x14031a59c#359 | 0x14031a5b0#362 | 0           |
| 0x14031a5f0#230 | 0x14031a5b0#362 | 1           |
| 0x14031a597#488 | 0x14031a5b0#497 | 0           |
| 0x14031a5ec#494 | 0x14031a5b0#497 | 1           |
| 0x14031a5b0#602 | 0x14031a5b0#576 | 0           |
| 0x14031a5b0#362 | 0x14031a5b0#576 | 1           |
| 0x14031a5b0#575 | 0x14031a5b0#602 | 0           |
| 0x14031a5b0#576 | 0x14031a5b0#603 | 0           |
| 0x14031a5b5#450 | 0x14031a5b5#121 | 0           |
| 0x14031a5b0#116 | 0x14031a5b5#450 | 0           |
| 0x14031a5b9#559 | 0x14031a5b9#161 | 0           |
| 0x14031a5b9#577 | 0x14031a5b9#161 | 1           |
| 0x14031a5b9#161 | 0x14031a5b9#162 | 1           |
| 0x14031a5b5#121 | 0x14031a5b9#577 | 0           |
| 0x14031a5be#578 | 0x14031a5be#166 | 1           |
| 0x14031a5c3#604 | 0x14031a5c3#177 | 1           |
| 0x14031a5c3#177 | 0x14031a5c3#178 | 1           |
| 0x14031a5be#166 | 0x14031a5c3#604 | 0           |
| 0x14031a5c5#179 | 0x14031a5c5#605 | 0           |
| 0x14031a5c5#605 | 0x14031a5c8#590 | 0           |
| 0x14031a5b0#362 | 0x14031a5cd#182 | 0           |
| 0x14031a5cd#606 | 0x14031a5cd#183 | 0           |
| 0x14031a5cd#182 | 0x14031a5cd#183 | 1           |
| 0x14031a5cd#607 | 0x14031a5cd#185 | 1           |
| 0x14031a5b9#162 | 0x14031a5cd#185 | 2           |
| 0x14031a5c8#590 | 0x14031a5cd#380 | 0           |
| 0x14031a5c3#591 | 0x14031a5cd#380 | 1           |
| 0x14031a5b0#497 | 0x14031a5cd#493 | 0           |
| 0x14031a5cd#380 | 0x14031a5cd#606 | 0           |
| 0x14031a5cd#183 | 0x14031a5cd#607 | 0           |
| 0x14031a5d0#609 | 0x14031a5d0#189 | 1           |
| 0x14031a5d0#608 | 0x14031a5d0#582 | 0           |
| 0x14031a5b0#362 | 0x14031a5d0#582 | 1           |
| 0x14031a5d0#581 | 0x14031a5d0#608 | 0           |
| 0x14031a5d0#582 | 0x14031a5d0#609 | 0           |
| 0x14031a5d5#365 | 0x14031a5d5#194 | 0           |
| 0x14031a5d0#189 | 0x14031a5d5#365 | 0           |
| 0x14031a5d5#194 | 0x14031a5d5#375 | 0           |
| 0x14031a5d8#561 | 0x14031a5d8#203 | 0           |
| 0x14031a5d8#583 | 0x14031a5d8#203 | 1           |
| 0x14031a5d8#203 | 0x14031a5d8#204 | 1           |
| 0x14031a5d5#375 | 0x14031a5d8#583 | 0           |
| 0x14031a5dd#584 | 0x14031a5dd#208 | 1           |
| 0x14031a5e2#610 | 0x14031a5e2#219 | 1           |
| 0x14031a5e2#219 | 0x14031a5e2#220 | 1           |
| 0x14031a5dd#208 | 0x14031a5e2#610 | 0           |
| 0x14031a5e4#221 | 0x14031a5e4#611 | 0           |
| 0x14031a5e4#611 | 0x14031a5e7#588 | 0           |
| 0x14031a5b0#362 | 0x14031a5ec#225 | 0           |
| 0x14031a5ec#612 | 0x14031a5ec#226 | 0           |
| 0x14031a5ec#585 | 0x14031a5ec#226 | 1           |
| 0x14031a5ec#613 | 0x14031a5ec#228 | 1           |
| 0x14031a5d8#204 | 0x14031a5ec#228 | 2           |
| 0x14031a5e7#588 | 0x14031a5ec#378 | 0           |
| 0x14031a5e2#589 | 0x14031a5ec#378 | 1           |
| 0x14031a5cd#493 | 0x14031a5ec#494 | 0           |
| 0x14031a5ec#225 | 0x14031a5ec#585 | 0           |
| 0x14031a5ec#378 | 0x14031a5ec#612 | 0           |
| 0x14031a5ec#226 | 0x14031a5ec#613 | 0           |
| 0x14031a5b0#362 | 0x14031a5f0#230 | 0           |
| 0x14031a5f0#230 | 0x14031a5f3#238 | 0           |
| 0x14031a5f3#238 | 0x14031a5f7#247 | 1           |
| 0x14031a5f9#248 | 0x14031a614#279 | 1           |
| 0x14031a5ec#494 | 0x14031a614#489 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x14031a52b#32  | memory_read        | 1             |             |
| 0x14031a533#38  | memory_read        | 1             |             |
| 0x14031a546#49  | direct_call        | 0             |             |
| 0x14031a54b#476 | memory_read        | 1             |             |
| 0x14031a54b#477 | memory_read        | 1             |             |
| 0x14031a553#462 | memory_read        | 1             |             |
| 0x14031a553#463 | memory_read        | 1             |             |
| 0x14031a553#465 | memory_read        | 1             |             |
| 0x14031a553#467 | memory_read        | 1             |             |
| 0x14031a562#484 | memory_write       | 1             | 2           |
| 0x14031a562#485 | memory_write       | 1             | 2           |
| 0x14031a565#77  | memory_write       | 1             | 2           |
| 0x14031a56d#80  | memory_write       | 1             | 2           |
| 0x14031a575#82  | memory_write       | 1             | 2           |
| 0x14031a597#99  | direct_call        | 0             |             |
| 0x14031a5b0#116 | memory_read        | 1             |             |
| 0x14031a5b9#162 | memory_read        | 1             |             |
| 0x14031a5be#166 | memory_read        | 1             |             |
| 0x14031a5c3#178 | conditional_branch |               | 1           |
| 0x14031a5c5#179 | memory_read        | 1             |             |
| 0x14031a5cd#185 | memory_write       | 1             | 2           |
| 0x14031a5d0#189 | memory_read        | 1             |             |
| 0x14031a5d8#204 | memory_read        | 1             |             |
| 0x14031a5dd#208 | memory_read        | 1             |             |
| 0x14031a5e2#220 | conditional_branch |               | 1           |
| 0x14031a5e4#221 | memory_read        | 1             |             |
| 0x14031a5ec#228 | memory_write       | 1             | 2           |
| 0x14031a5f7#247 | conditional_branch |               | 1           |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |
| 1       | param_2 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 1       | 0x14031a52b#32  | 1           |
| 1       | 0x14031a533#564 | 0           |
| 0       | 0x14031a546#592 | 0           |
| 0       | 0x14031a562#484 | 1           |
| 0       | 0x14031a562#570 | 0           |
| 0       | 0x14031a565#571 | 0           |
| 0       | 0x14031a56d#572 | 0           |
| 0       | 0x14031a575#601 | 0           |
| 0       | 0x14031a597#99  | 1           |
| 0       | 0x14031a5be#578 | 0           |
| 0       | 0x14031a5c3#591 | 0           |
| 0       | 0x14031a5c5#179 | 1           |
| 0       | 0x14031a5dd#584 | 0           |
| 0       | 0x14031a5e2#589 | 0           |
| 0       | 0x14031a5e4#221 | 1           |
| 0       | 0x14031a5f9#248 | 0           |

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

