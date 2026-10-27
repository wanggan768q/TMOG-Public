## evidence_id

ev_a779e42aa56deccb865fdeb97cb974b479842bafe62dd914e22ab69086da0542

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
| procedure | 0x1401f4800 |

## raw_result.value.procedure.address

0x1401f4800

## raw_result.value.procedure.name

FUN_1401f4800

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
| 0x1401f4800 | 0x1401f4917 |

## raw_result.value.procedure.body.total_bytes

280

## raw_result.value.procedure.body.span_bytes

280

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f4800()

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8      | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8      | ghidra-function-database |
| undefined local_38 @ Stack[-0x38]:1       | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8      | ghidra-function-database |
| undefined8 local_48 @ Stack[-0x48]:8      | ghidra-function-database |
| undefined1[16] local_58 @ Stack[-0x58]:16 | ghidra-function-database |
| undefined8 local_60 @ Stack[-0x60]:8      | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8    | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8      | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401f4800(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  ulonglong local_58 [4];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  FUN_1401f4520(local_38);
  if (local_28 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    FUN_1400017a0(local_58,L"license.json",0xc);
    FUN_14002bae0(param_1,local_38,local_58);
    if (7 < local_58[3]) {
      uVar4 = local_58[3] * 2 + 2;
      uVar3 = local_58[0];
      if (0xfff < uVar4) {
        uVar3 = *(ulonglong *)(local_58[0] - 8);
        if (0x1f < (local_58[0] - uVar3) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          puVar2 = (undefined8 *)(*pcVar1)();
          return puVar2;
        }
        uVar4 = local_58[3] * 2 + 0x29;
      }
      thunk_FUN_140327e20(uVar3,uVar4);
    }
    local_58[2] = 0;
    local_58[3] = 7;
    local_58[0] = local_58[0] & 0xffffffffffff0000;
  }
  FUN_1400055b0(local_38);
  return param_1;
}



## raw_result.value.assembly

0x1401f4800: MOV qword ptr [RSP + 0x10], RBX,0x1401f4805: PUSH RDI,0x1401f4806: SUB RSP, 0x80,0x1401f480d: MOV RAX, qword ptr [0x1404c7ac0],0x1401f4814: XOR RAX, RSP,0x1401f4817: MOV qword ptr [RSP + 0x70], RAX,0x1401f481c: MOV RBX, RCX,0x1401f481f: MOV qword ptr [RSP + 0x28], RCX,0x1401f4824: XOR EDI, EDI,0x1401f4826: LEA RCX, [RSP + 0x50],0x1401f482b: CALL 0x1401f4520,0x1401f4830: NOP,0x1401f4831: XORPS XMM0, XMM0,0x1401f4834: CMP qword ptr [RSP + 0x60], RDI,0x1401f4839: JNZ 0x1401f4856,0x1401f483b: MOVUPS xmmword ptr [RBX + 0x10], XMM0,0x1401f483f: MOVUPS xmmword ptr [RBX], XMM0,0x1401f4842: MOV qword ptr [RBX + 0x10], RDI,0x1401f4846: MOV qword ptr [RBX + 0x18], 0x7,0x1401f484e: MOV word ptr [RBX], DI,0x1401f4851: JMP 0x1401f48e5,0x1401f4856: MOVUPS xmmword ptr [RSP + 0x30], XMM0,0x1401f485b: MOV qword ptr [RSP + 0x40], RDI,0x1401f4860: MOV qword ptr [RSP + 0x48], RDI,0x1401f4865: MOV R8D, 0xc,0x1401f486b: LEA RDX, [0x14043c210],0x1401f4872: LEA RCX, [RSP + 0x30],0x1401f4877: CALL 0x1400017a0,0x1401f487c: NOP,0x1401f487d: LEA R8, [RSP + 0x30],0x1401f4882: LEA RDX, [RSP + 0x50],0x1401f4887: MOV RCX, RBX,0x1401f488a: CALL 0x14002bae0,0x1401f488f: NOP,0x1401f4890: MOV RAX, qword ptr [RSP + 0x48],0x1401f4895: CMP RAX, 0x7,0x1401f4899: JBE 0x1401f48d2,0x1401f489b: LEA RDX, [0x2 + RAX*0x2],0x1401f48a3: MOV RCX, qword ptr [RSP + 0x30],0x1401f48a8: CMP RDX, 0x1000,0x1401f48af: JC 0x1401f48cd,0x1401f48b1: MOV R8, qword ptr [RCX + -0x8],0x1401f48b5: SUB RCX, R8,0x1401f48b8: SUB RCX, 0x8,0x1401f48bc: CMP RCX, 0x1f,0x1401f48c0: JA 0x1401f4910,0x1401f48c2: LEA RDX, [0x29 + RAX*0x2],0x1401f48ca: MOV RCX, R8,0x1401f48cd: CALL 0x1403272f0,0x1401f48d2: MOV qword ptr [RSP + 0x40], RDI,0x1401f48d7: MOV qword ptr [RSP + 0x48], 0x7,0x1401f48e0: MOV word ptr [RSP + 0x30], DI,0x1401f48e5: LEA RCX, [RSP + 0x50],0x1401f48ea: CALL 0x1400055b0,0x1401f48ef: MOV RAX, RBX,0x1401f48f2: MOV RCX, qword ptr [RSP + 0x70],0x1401f48f7: XOR RCX, RSP,0x1401f48fa: CALL 0x140327740,0x1401f48ff: MOV RBX, qword ptr [RSP + 0x98],0x1401f4907: ADD RSP, 0x80,0x1401f490e: POP RDI,0x1401f490f: RET,0x1401f4910: MOV ECX, 0x5,0x1401f4915: INT 0x29,0x1401f4917: INT3

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |
| 0x1401f4c80 | FUN_1401f4c80 | [object Object] | [object Object] |
| 0x1401f4e20 | FUN_1401f4e20 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1400017a0 | FUN_1400017a0           | [object Object] | [object Object] |
| 0x1400055b0 | FUN_1400055b0           | [object Object] | [object Object] |
| 0x14002bae0 | FUN_14002bae0           | [object Object] | [object Object] |
| 0x1401f4520 | FUN_1401f4520           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f3181    | 0x1401f4800    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4112    | 0x1401f4800    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cab    | 0x1401f4800    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e48    | 0x1401f4800    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df9b4    | 0x1401f4800    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4800    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401f480d    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f4817    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f481f    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f4826    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f482b    | 0x1401f4520              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4834    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f4839    | 0x1401f4856              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4851    | 0x1401f48e5              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4856    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f485b    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f4860    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f486b    | 0x14043c210              | [object Object]  |                  | [object Object] |
| 0x1401f4872    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f4877    | 0x1400017a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f487d    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f4882    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f488a    | 0x14002bae0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4890    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f4899    | 0x1401f48d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48a3    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f48af    | 0x1401f48cd              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48c0    | 0x1401f4910              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48cd    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48d2    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f48d7    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f48e0    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f48e5    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f48ea    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48f2    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f48fa    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48ff    | stack:0x8                | [object Object]  |                  | [object Object] |

## raw_result.value.referenced_strings

| address     | value        | source_address |
|-------------|--------------|----------------|
| 0x14043c210 | license.json | 0x1401f486b    |

## raw_result.value.referenced_names

| address     | value                    | source_address |
|-------------|--------------------------|----------------|
| 0x1400017a0 | FUN_1400017a0            | 0x1401f4877    |
| 0x1400055b0 | FUN_1400055b0            | 0x1401f48ea    |
| 0x14002bae0 | FUN_14002bae0            | 0x1401f488a    |
| 0x1401f4520 | FUN_1401f4520            | 0x1401f482b    |
| 0x1401f4856 | LAB_1401f4856            | 0x1401f4839    |
| 0x1401f48cd | LAB_1401f48cd            | 0x1401f48af    |
| 0x1401f48d2 | LAB_1401f48d2            | 0x1401f4899    |
| 0x1401f48e5 | LAB_1401f48e5            | 0x1401f4851    |
| 0x1401f4910 | LAB_1401f4910            | 0x1401f48c0    |
| 0x1403272f0 | thunk_FUN_140327e20      | 0x1401f48cd    |
| 0x140327740 | __security_check_cookie  | 0x1401f48fa    |
| 0x14043c210 | u_license.json_14043c210 | 0x1401f486b    |
| 0x1404c7ac0 | DAT_1404c7ac0            | 0x1401f480d    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4800 | 0x1401f483b | 0x1401f483b,0x1401f4856 |
| 0x1401f483b | 0x1401f4856 | 0x1401f48e5             |
| 0x1401f4856 | 0x1401f489b | 0x1401f489b,0x1401f48d2 |
| 0x1401f489b | 0x1401f48b1 | 0x1401f48b1,0x1401f48cd |
| 0x1401f48b1 | 0x1401f48c2 | 0x1401f48c2,0x1401f4910 |
| 0x1401f48c2 | 0x1401f48cd | 0x1401f48cd             |
| 0x1401f48cd | 0x1401f48d2 | 0x1401f48d2             |
| 0x1401f48d2 | 0x1401f48e5 | 0x1401f48e5             |
| 0x1401f48e5 | 0x1401f4910 |                         |
| 0x1401f4910 | 0x1401f4918 |                         |

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
| 0x1401f4806#600 | 0x1401f4806 | 600      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4814#18  | 0x1401f4814 | 18       | INT_XOR    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4814#613 | 0x1401f4814 | 613      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4826#601 | 0x1401f4826 | 601      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#46  | 0x1401f482b | 46       | CALL       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f482b#486 | 0x1401f482b | 486      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#522 | 0x1401f482b | 522      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#533 | 0x1401f482b | 533      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#542 | 0x1401f482b | 542      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#551 | 0x1401f482b | 551      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#560 | 0x1401f482b | 560      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#569 | 0x1401f482b | 569      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#578 | 0x1401f482b | 578      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#612 | 0x1401f482b | 612      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4834#58  | 0x1401f4834 | 58       | INT_EQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4839#64  | 0x1401f4839 | 64       | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f483b#473 | 0x1401f483b | 473      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f483b#474 | 0x1401f483b | 474      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f483b#498 | 0x1401f483b | 498      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f483b#499 | 0x1401f483b | 499      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f483b#602 | 0x1401f483b | 602      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f483b#603 | 0x1401f483b | 603      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f483f#478 | 0x1401f483f | 478      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f483f#479 | 0x1401f483f | 479      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f483f#500 | 0x1401f483f | 500      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f483f#501 | 0x1401f483f | 501      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f483f#604 | 0x1401f483f | 604      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4842#72  | 0x1401f4842 | 72       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4842#495 | 0x1401f4842 | 495      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4842#605 | 0x1401f4842 | 605      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4846#75  | 0x1401f4846 | 75       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4846#496 | 0x1401f4846 | 496      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4846#606 | 0x1401f4846 | 606      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f484e#77  | 0x1401f484e | 77       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f484e#497 | 0x1401f484e | 497      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f484e#618 | 0x1401f484e | 618      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4851#78  | 0x1401f4851 | 78       | BRANCH     | true    | member           | [object Object]                                                 |                 |
| 0x1401f4856#483 | 0x1401f4856 | 483      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4856#484 | 0x1401f4856 | 484      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f485b#124 | 0x1401f485b | 124      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4860#127 | 0x1401f4860 | 127      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4872#607 | 0x1401f4872 | 607      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#134 | 0x1401f4877 | 134      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f4877#487 | 0x1401f4877 | 487      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#523 | 0x1401f4877 | 523      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#534 | 0x1401f4877 | 534      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#543 | 0x1401f4877 | 543      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#552 | 0x1401f4877 | 552      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#561 | 0x1401f4877 | 561      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#579 | 0x1401f4877 | 579      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#599 | 0x1401f4877 | 599      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f487d#608 | 0x1401f487d | 608      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4882#609 | 0x1401f4882 | 609      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#142 | 0x1401f488a | 142      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f488a#488 | 0x1401f488a | 488      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#524 | 0x1401f488a | 524      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#535 | 0x1401f488a | 535      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#544 | 0x1401f488a | 544      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#553 | 0x1401f488a | 553      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#562 | 0x1401f488a | 562      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#580 | 0x1401f488a | 580      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4899#156 | 0x1401f4899 | 156      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4899#157 | 0x1401f4899 | 157      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f489b#158 | 0x1401f489b | 158      | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f489b#159 | 0x1401f489b | 159      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48a8#165 | 0x1401f48a8 | 165      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48af#174 | 0x1401f48af | 174      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f48af#611 | 0x1401f48af | 611      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f48b1#175 | 0x1401f48b1 | 175      | INT_SUB    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48b1#176 | 0x1401f48b1 | 176      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48b1#614 | 0x1401f48b1 | 614      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f48b5#180 | 0x1401f48b5 | 180      | INT_SUB    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48b8#189 | 0x1401f48b8 | 189      | INT_SUB    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48c0#206 | 0x1401f48c0 | 206      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48c0#208 | 0x1401f48c0 | 208      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f48c2#209 | 0x1401f48c2 | 209      | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48c2#210 | 0x1401f48c2 | 210      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#215 | 0x1401f48cd | 215      | CALL       | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f48cd#317 | 0x1401f48cd | 317      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#327 | 0x1401f48cd | 327      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#491 | 0x1401f48cd | 491      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#527 | 0x1401f48cd | 527      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#538 | 0x1401f48cd | 538      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#547 | 0x1401f48cd | 547      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#556 | 0x1401f48cd | 556      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#565 | 0x1401f48cd | 565      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#583 | 0x1401f48cd | 583      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d2#218 | 0x1401f48d2 | 218      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f48d2#502 | 0x1401f48d2 | 502      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d2#529 | 0x1401f48d2 | 529      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d2#540 | 0x1401f48d2 | 540      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d2#549 | 0x1401f48d2 | 549      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d2#585 | 0x1401f48d2 | 585      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d7#221 | 0x1401f48d7 | 221      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f48e0#532 | 0x1401f48e0 | 532      | INT_AND    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#503 | 0x1401f48e5 | 503      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#530 | 0x1401f48e5 | 530      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#541 | 0x1401f48e5 | 541      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#550 | 0x1401f48e5 | 550      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#559 | 0x1401f48e5 | 559      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#568 | 0x1401f48e5 | 568      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#586 | 0x1401f48e5 | 586      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#610 | 0x1401f48e5 | 610      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#83  | 0x1401f48ea | 83       | CALL       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f48ea#492 | 0x1401f48ea | 492      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#528 | 0x1401f48ea | 528      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#539 | 0x1401f48ea | 539      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#548 | 0x1401f48ea | 548      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#557 | 0x1401f48ea | 557      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#566 | 0x1401f48ea | 566      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#584 | 0x1401f48ea | 584      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ef#84  | 0x1401f48ef | 84       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f490f#118 | 0x1401f490f | 118      | RETURN     | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f490f#493 | 0x1401f490f | 493      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4915#226 | 0x1401f4915 | 226      | CALLOTHER  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#227 | 0x1401f4915 | 227      | CALLIND    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4915#489 | 0x1401f4915 | 489      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#525 | 0x1401f4915 | 525      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#536 | 0x1401f4915 | 536      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#545 | 0x1401f4915 | 545      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#554 | 0x1401f4915 | 554      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#563 | 0x1401f4915 | 563      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#581 | 0x1401f4915 | 581      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#615 | 0x1401f4915 | 615      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4917#228 | 0x1401f4917 | 228      | CALLOTHER  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#229 | 0x1401f4917 | 229      | CALLIND    | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4917#230 | 0x1401f4917 | 230      | RETURN     | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4917#490 | 0x1401f4917 | 490      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#494 | 0x1401f4917 | 494      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4917#526 | 0x1401f4917 | 526      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#537 | 0x1401f4917 | 537      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#546 | 0x1401f4917 | 546      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#555 | 0x1401f4917 | 555      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#564 | 0x1401f4917 | 564      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#582 | 0x1401f4917 | 582      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#616 | 0x1401f4917 | 616      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4917#617 | 0x1401f4917 | 617      | CAST       | true    | member           | [object Object]                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f4814#613 | 0x1401f4814#18  | 1           |
| 0x1401f4806#600 | 0x1401f4814#613 | 0           |
| 0x1401f4826#601 | 0x1401f482b#46  | 1           |
| 0x1401f482b#612 | 0x1401f482b#522 | 0           |
| 0x1401f4814#18  | 0x1401f482b#578 | 0           |
| 0x1401f482b#569 | 0x1401f4834#58  | 0           |
| 0x1401f4834#58  | 0x1401f4839#64  | 1           |
| 0x1401f483b#602 | 0x1401f483b#473 | 1           |
| 0x1401f483b#603 | 0x1401f483b#474 | 1           |
| 0x1401f482b#486 | 0x1401f483b#498 | 0           |
| 0x1401f483b#498 | 0x1401f483b#499 | 0           |
| 0x1401f483f#604 | 0x1401f483f#479 | 1           |
| 0x1401f483b#499 | 0x1401f483f#500 | 0           |
| 0x1401f483f#500 | 0x1401f483f#501 | 0           |
| 0x1401f4842#605 | 0x1401f4842#72  | 1           |
| 0x1401f483f#501 | 0x1401f4842#495 | 0           |
| 0x1401f4846#606 | 0x1401f4846#75  | 1           |
| 0x1401f4842#495 | 0x1401f4846#496 | 0           |
| 0x1401f484e#618 | 0x1401f484e#77  | 1           |
| 0x1401f4846#496 | 0x1401f484e#497 | 0           |
| 0x1401f4872#607 | 0x1401f4877#134 | 1           |
| 0x1401f4877#599 | 0x1401f4877#134 | 2           |
| 0x1401f482b#486 | 0x1401f4877#487 | 0           |
| 0x1401f482b#522 | 0x1401f4877#523 | 0           |
| 0x1401f4856#483 | 0x1401f4877#534 | 0           |
| 0x1401f4856#484 | 0x1401f4877#543 | 0           |
| 0x1401f485b#124 | 0x1401f4877#552 | 0           |
| 0x1401f4860#127 | 0x1401f4877#561 | 0           |
| 0x1401f482b#578 | 0x1401f4877#579 | 0           |
| 0x1401f4882#609 | 0x1401f488a#142 | 2           |
| 0x1401f487d#608 | 0x1401f488a#142 | 3           |
| 0x1401f4877#487 | 0x1401f488a#488 | 0           |
| 0x1401f4877#523 | 0x1401f488a#524 | 0           |
| 0x1401f4877#534 | 0x1401f488a#535 | 0           |
| 0x1401f4877#543 | 0x1401f488a#544 | 0           |
| 0x1401f4877#552 | 0x1401f488a#553 | 0           |
| 0x1401f4877#561 | 0x1401f488a#562 | 0           |
| 0x1401f4877#579 | 0x1401f488a#580 | 0           |
| 0x1401f488a#562 | 0x1401f4899#156 | 1           |
| 0x1401f4899#156 | 0x1401f4899#157 | 1           |
| 0x1401f488a#562 | 0x1401f489b#158 | 0           |
| 0x1401f489b#158 | 0x1401f489b#159 | 0           |
| 0x1401f489b#159 | 0x1401f48a8#165 | 1           |
| 0x1401f48a8#165 | 0x1401f48af#174 | 1           |
| 0x1401f488a#535 | 0x1401f48af#611 | 0           |
| 0x1401f488a#535 | 0x1401f48b1#175 | 0           |
| 0x1401f48b1#614 | 0x1401f48b1#176 | 1           |
| 0x1401f48b1#175 | 0x1401f48b1#614 | 0           |
| 0x1401f488a#535 | 0x1401f48b5#180 | 0           |
| 0x1401f48b1#176 | 0x1401f48b5#180 | 1           |
| 0x1401f48b5#180 | 0x1401f48b8#189 | 0           |
| 0x1401f48b8#189 | 0x1401f48c0#206 | 1           |
| 0x1401f48c0#206 | 0x1401f48c0#208 | 1           |
| 0x1401f488a#562 | 0x1401f48c2#209 | 0           |
| 0x1401f48c2#209 | 0x1401f48c2#210 | 0           |
| 0x1401f48cd#317 | 0x1401f48cd#215 | 1           |
| 0x1401f48cd#327 | 0x1401f48cd#215 | 2           |
| 0x1401f48af#611 | 0x1401f48cd#317 | 0           |
| 0x1401f48b1#176 | 0x1401f48cd#317 | 1           |
| 0x1401f489b#159 | 0x1401f48cd#327 | 0           |
| 0x1401f48c2#210 | 0x1401f48cd#327 | 1           |
| 0x1401f488a#488 | 0x1401f48cd#491 | 0           |
| 0x1401f488a#524 | 0x1401f48cd#527 | 0           |
| 0x1401f488a#535 | 0x1401f48cd#538 | 0           |
| 0x1401f488a#544 | 0x1401f48cd#547 | 0           |
| 0x1401f488a#553 | 0x1401f48cd#556 | 0           |
| 0x1401f488a#562 | 0x1401f48cd#565 | 0           |
| 0x1401f488a#580 | 0x1401f48cd#583 | 0           |
| 0x1401f488a#488 | 0x1401f48d2#502 | 0           |
| 0x1401f48cd#491 | 0x1401f48d2#502 | 1           |
| 0x1401f488a#524 | 0x1401f48d2#529 | 0           |
| 0x1401f48cd#527 | 0x1401f48d2#529 | 1           |
| 0x1401f488a#535 | 0x1401f48d2#540 | 0           |
| 0x1401f48cd#538 | 0x1401f48d2#540 | 1           |
| 0x1401f488a#544 | 0x1401f48d2#549 | 0           |
| 0x1401f48cd#547 | 0x1401f48d2#549 | 1           |
| 0x1401f488a#580 | 0x1401f48d2#585 | 0           |
| 0x1401f48cd#583 | 0x1401f48d2#585 | 1           |
| 0x1401f48d2#540 | 0x1401f48e0#532 | 0           |
| 0x1401f484e#497 | 0x1401f48e5#503 | 0           |
| 0x1401f48d2#502 | 0x1401f48e5#503 | 1           |
| 0x1401f482b#522 | 0x1401f48e5#530 | 0           |
| 0x1401f48d2#529 | 0x1401f48e5#530 | 1           |
| 0x1401f482b#533 | 0x1401f48e5#541 | 0           |
| 0x1401f48e0#532 | 0x1401f48e5#541 | 1           |
| 0x1401f482b#542 | 0x1401f48e5#550 | 0           |
| 0x1401f48d2#549 | 0x1401f48e5#550 | 1           |
| 0x1401f482b#551 | 0x1401f48e5#559 | 0           |
| 0x1401f48d2#218 | 0x1401f48e5#559 | 1           |
| 0x1401f482b#560 | 0x1401f48e5#568 | 0           |
| 0x1401f48d7#221 | 0x1401f48e5#568 | 1           |
| 0x1401f482b#578 | 0x1401f48e5#586 | 0           |
| 0x1401f48d2#585 | 0x1401f48e5#586 | 1           |
| 0x1401f48e5#610 | 0x1401f48ea#83  | 1           |
| 0x1401f48e5#503 | 0x1401f48ea#492 | 0           |
| 0x1401f48e5#530 | 0x1401f48ea#528 | 0           |
| 0x1401f48e5#541 | 0x1401f48ea#539 | 0           |
| 0x1401f48e5#550 | 0x1401f48ea#548 | 0           |
| 0x1401f48e5#559 | 0x1401f48ea#557 | 0           |
| 0x1401f48e5#568 | 0x1401f48ea#566 | 0           |
| 0x1401f48e5#586 | 0x1401f48ea#584 | 0           |
| 0x1401f48ef#84  | 0x1401f490f#118 | 1           |
| 0x1401f48ea#492 | 0x1401f490f#493 | 0           |
| 0x1401f4915#615 | 0x1401f4915#227 | 0           |
| 0x1401f488a#488 | 0x1401f4915#489 | 0           |
| 0x1401f488a#524 | 0x1401f4915#525 | 0           |
| 0x1401f488a#535 | 0x1401f4915#536 | 0           |
| 0x1401f488a#544 | 0x1401f4915#545 | 0           |
| 0x1401f488a#553 | 0x1401f4915#554 | 0           |
| 0x1401f488a#562 | 0x1401f4915#563 | 0           |
| 0x1401f488a#580 | 0x1401f4915#581 | 0           |
| 0x1401f4915#226 | 0x1401f4915#615 | 0           |
| 0x1401f4917#616 | 0x1401f4917#229 | 0           |
| 0x1401f4917#617 | 0x1401f4917#230 | 1           |
| 0x1401f4915#489 | 0x1401f4917#490 | 0           |
| 0x1401f4917#490 | 0x1401f4917#494 | 0           |
| 0x1401f4915#525 | 0x1401f4917#526 | 0           |
| 0x1401f4915#536 | 0x1401f4917#537 | 0           |
| 0x1401f4915#545 | 0x1401f4917#546 | 0           |
| 0x1401f4915#554 | 0x1401f4917#555 | 0           |
| 0x1401f4915#563 | 0x1401f4917#564 | 0           |
| 0x1401f4915#581 | 0x1401f4917#582 | 0           |
| 0x1401f4917#228 | 0x1401f4917#616 | 0           |
| 0x1401f4917#229 | 0x1401f4917#617 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f482b#612 | 0           |
| 0       | 0x1401f483b#602 | 0           |
| 0       | 0x1401f483b#603 | 0           |
| 0       | 0x1401f483f#478 | 1           |
| 0       | 0x1401f483f#604 | 0           |
| 0       | 0x1401f4842#605 | 0           |
| 0       | 0x1401f4846#606 | 0           |
| 0       | 0x1401f484e#618 | 0           |
| 0       | 0x1401f488a#142 | 1           |
| 0       | 0x1401f48ef#84  | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f482b#46  | direct_call        | 0             |             |
| 0x1401f4839#64  | conditional_branch |               | 1           |
| 0x1401f483b#473 | memory_write       | 1             | 2           |
| 0x1401f483b#474 | memory_write       | 1             | 2           |
| 0x1401f483f#478 | memory_write       | 1             | 2           |
| 0x1401f483f#479 | memory_write       | 1             | 2           |
| 0x1401f4842#72  | memory_write       | 1             | 2           |
| 0x1401f4846#75  | memory_write       | 1             | 2           |
| 0x1401f484e#77  | memory_write       | 1             | 2           |
| 0x1401f4877#134 | direct_call        | 0             |             |
| 0x1401f488a#142 | direct_call        | 0             |             |
| 0x1401f4899#157 | conditional_branch |               | 1           |
| 0x1401f48af#174 | conditional_branch |               | 1           |
| 0x1401f48b1#176 | memory_read        | 1             |             |
| 0x1401f48c0#208 | conditional_branch |               | 1           |
| 0x1401f48cd#215 | direct_call        | 0             |             |
| 0x1401f48ea#83  | direct_call        | 0             |             |
| 0x1401f4915#227 | indirect_call      | 0             |             |
| 0x1401f4917#229 | indirect_call      | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f4917 with no resolved callee; its no-return basis is unknown.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401f4917 with no resolved callee; its no-return basis is unknown.

## normalized_result.procedure.address

0x1401f4800

## normalized_result.procedure.name

FUN_1401f4800

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
| 0x1401f4800 | 0x1401f4917 |

## normalized_result.procedure.body.total_bytes

280

## normalized_result.procedure.body.span_bytes

280

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f4800()

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8      | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8      | ghidra-function-database |
| undefined local_38 @ Stack[-0x38]:1       | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8      | ghidra-function-database |
| undefined8 local_48 @ Stack[-0x48]:8      | ghidra-function-database |
| undefined1[16] local_58 @ Stack[-0x58]:16 | ghidra-function-database |
| undefined8 local_60 @ Stack[-0x60]:8      | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8    | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8      | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401f4800(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  ulonglong local_58 [4];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  FUN_1401f4520(local_38);
  if (local_28 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    FUN_1400017a0(local_58,L"license.json",0xc);
    FUN_14002bae0(param_1,local_38,local_58);
    if (7 < local_58[3]) {
      uVar4 = local_58[3] * 2 + 2;
      uVar3 = local_58[0];
      if (0xfff < uVar4) {
        uVar3 = *(ulonglong *)(local_58[0] - 8);
        if (0x1f < (local_58[0] - uVar3) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          puVar2 = (undefined8 *)(*pcVar1)();
          return puVar2;
        }
        uVar4 = local_58[3] * 2 + 0x29;
      }
      thunk_FUN_140327e20(uVar3,uVar4);
    }
    local_58[2] = 0;
    local_58[3] = 7;
    local_58[0] = local_58[0] & 0xffffffffffff0000;
  }
  FUN_1400055b0(local_38);
  return param_1;
}



## normalized_result.assembly

0x1401f4800: MOV qword ptr [RSP + 0x10], RBX,0x1401f4805: PUSH RDI,0x1401f4806: SUB RSP, 0x80,0x1401f480d: MOV RAX, qword ptr [0x1404c7ac0],0x1401f4814: XOR RAX, RSP,0x1401f4817: MOV qword ptr [RSP + 0x70], RAX,0x1401f481c: MOV RBX, RCX,0x1401f481f: MOV qword ptr [RSP + 0x28], RCX,0x1401f4824: XOR EDI, EDI,0x1401f4826: LEA RCX, [RSP + 0x50],0x1401f482b: CALL 0x1401f4520,0x1401f4830: NOP,0x1401f4831: XORPS XMM0, XMM0,0x1401f4834: CMP qword ptr [RSP + 0x60], RDI,0x1401f4839: JNZ 0x1401f4856,0x1401f483b: MOVUPS xmmword ptr [RBX + 0x10], XMM0,0x1401f483f: MOVUPS xmmword ptr [RBX], XMM0,0x1401f4842: MOV qword ptr [RBX + 0x10], RDI,0x1401f4846: MOV qword ptr [RBX + 0x18], 0x7,0x1401f484e: MOV word ptr [RBX], DI,0x1401f4851: JMP 0x1401f48e5,0x1401f4856: MOVUPS xmmword ptr [RSP + 0x30], XMM0,0x1401f485b: MOV qword ptr [RSP + 0x40], RDI,0x1401f4860: MOV qword ptr [RSP + 0x48], RDI,0x1401f4865: MOV R8D, 0xc,0x1401f486b: LEA RDX, [0x14043c210],0x1401f4872: LEA RCX, [RSP + 0x30],0x1401f4877: CALL 0x1400017a0,0x1401f487c: NOP,0x1401f487d: LEA R8, [RSP + 0x30],0x1401f4882: LEA RDX, [RSP + 0x50],0x1401f4887: MOV RCX, RBX,0x1401f488a: CALL 0x14002bae0,0x1401f488f: NOP,0x1401f4890: MOV RAX, qword ptr [RSP + 0x48],0x1401f4895: CMP RAX, 0x7,0x1401f4899: JBE 0x1401f48d2,0x1401f489b: LEA RDX, [0x2 + RAX*0x2],0x1401f48a3: MOV RCX, qword ptr [RSP + 0x30],0x1401f48a8: CMP RDX, 0x1000,0x1401f48af: JC 0x1401f48cd,0x1401f48b1: MOV R8, qword ptr [RCX + -0x8],0x1401f48b5: SUB RCX, R8,0x1401f48b8: SUB RCX, 0x8,0x1401f48bc: CMP RCX, 0x1f,0x1401f48c0: JA 0x1401f4910,0x1401f48c2: LEA RDX, [0x29 + RAX*0x2],0x1401f48ca: MOV RCX, R8,0x1401f48cd: CALL 0x1403272f0,0x1401f48d2: MOV qword ptr [RSP + 0x40], RDI,0x1401f48d7: MOV qword ptr [RSP + 0x48], 0x7,0x1401f48e0: MOV word ptr [RSP + 0x30], DI,0x1401f48e5: LEA RCX, [RSP + 0x50],0x1401f48ea: CALL 0x1400055b0,0x1401f48ef: MOV RAX, RBX,0x1401f48f2: MOV RCX, qword ptr [RSP + 0x70],0x1401f48f7: XOR RCX, RSP,0x1401f48fa: CALL 0x140327740,0x1401f48ff: MOV RBX, qword ptr [RSP + 0x98],0x1401f4907: ADD RSP, 0x80,0x1401f490e: POP RDI,0x1401f490f: RET,0x1401f4910: MOV ECX, 0x5,0x1401f4915: INT 0x29,0x1401f4917: INT3

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |
| 0x1401f4c80 | FUN_1401f4c80 | [object Object] | [object Object] |
| 0x1401f4e20 | FUN_1401f4e20 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1400017a0 | FUN_1400017a0           | [object Object] | [object Object] |
| 0x1400055b0 | FUN_1400055b0           | [object Object] | [object Object] |
| 0x14002bae0 | FUN_14002bae0           | [object Object] | [object Object] |
| 0x1401f4520 | FUN_1401f4520           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f3181    | 0x1401f4800    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4112    | 0x1401f4800    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cab    | 0x1401f4800    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e48    | 0x1401f4800    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df9b4    | 0x1401f4800    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4800    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401f480d    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f4817    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f481f    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f4826    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f482b    | 0x1401f4520              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4834    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f4839    | 0x1401f4856              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4851    | 0x1401f48e5              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4856    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f485b    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f4860    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f486b    | 0x14043c210              | [object Object]  |                  | [object Object] |
| 0x1401f4872    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f4877    | 0x1400017a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f487d    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f4882    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f488a    | 0x14002bae0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4890    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f4899    | 0x1401f48d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48a3    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f48af    | 0x1401f48cd              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48c0    | 0x1401f4910              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48cd    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48d2    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f48d7    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f48e0    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f48e5    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f48ea    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48f2    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f48fa    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f48ff    | stack:0x8                | [object Object]  |                  | [object Object] |

## normalized_result.referenced_strings

| address     | value        | source_address |
|-------------|--------------|----------------|
| 0x14043c210 | license.json | 0x1401f486b    |

## normalized_result.referenced_names

| address     | value                    | source_address |
|-------------|--------------------------|----------------|
| 0x1400017a0 | FUN_1400017a0            | 0x1401f4877    |
| 0x1400055b0 | FUN_1400055b0            | 0x1401f48ea    |
| 0x14002bae0 | FUN_14002bae0            | 0x1401f488a    |
| 0x1401f4520 | FUN_1401f4520            | 0x1401f482b    |
| 0x1401f4856 | LAB_1401f4856            | 0x1401f4839    |
| 0x1401f48cd | LAB_1401f48cd            | 0x1401f48af    |
| 0x1401f48d2 | LAB_1401f48d2            | 0x1401f4899    |
| 0x1401f48e5 | LAB_1401f48e5            | 0x1401f4851    |
| 0x1401f4910 | LAB_1401f4910            | 0x1401f48c0    |
| 0x1403272f0 | thunk_FUN_140327e20      | 0x1401f48cd    |
| 0x140327740 | __security_check_cookie  | 0x1401f48fa    |
| 0x14043c210 | u_license.json_14043c210 | 0x1401f486b    |
| 0x1404c7ac0 | DAT_1404c7ac0            | 0x1401f480d    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4800 | 0x1401f483b | 0x1401f483b,0x1401f4856 |
| 0x1401f483b | 0x1401f4856 | 0x1401f48e5             |
| 0x1401f4856 | 0x1401f489b | 0x1401f489b,0x1401f48d2 |
| 0x1401f489b | 0x1401f48b1 | 0x1401f48b1,0x1401f48cd |
| 0x1401f48b1 | 0x1401f48c2 | 0x1401f48c2,0x1401f4910 |
| 0x1401f48c2 | 0x1401f48cd | 0x1401f48cd             |
| 0x1401f48cd | 0x1401f48d2 | 0x1401f48d2             |
| 0x1401f48d2 | 0x1401f48e5 | 0x1401f48e5             |
| 0x1401f48e5 | 0x1401f4910 |                         |
| 0x1401f4910 | 0x1401f4918 |                         |

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
| 0x1401f4806#600 | 0x1401f4806 | 600      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4814#18  | 0x1401f4814 | 18       | INT_XOR    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4814#613 | 0x1401f4814 | 613      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4826#601 | 0x1401f4826 | 601      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#46  | 0x1401f482b | 46       | CALL       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f482b#486 | 0x1401f482b | 486      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#522 | 0x1401f482b | 522      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#533 | 0x1401f482b | 533      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#542 | 0x1401f482b | 542      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#551 | 0x1401f482b | 551      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#560 | 0x1401f482b | 560      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#569 | 0x1401f482b | 569      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#578 | 0x1401f482b | 578      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f482b#612 | 0x1401f482b | 612      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4834#58  | 0x1401f4834 | 58       | INT_EQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4839#64  | 0x1401f4839 | 64       | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f483b#473 | 0x1401f483b | 473      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f483b#474 | 0x1401f483b | 474      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f483b#498 | 0x1401f483b | 498      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f483b#499 | 0x1401f483b | 499      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f483b#602 | 0x1401f483b | 602      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f483b#603 | 0x1401f483b | 603      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f483f#478 | 0x1401f483f | 478      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f483f#479 | 0x1401f483f | 479      | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f483f#500 | 0x1401f483f | 500      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f483f#501 | 0x1401f483f | 501      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f483f#604 | 0x1401f483f | 604      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4842#72  | 0x1401f4842 | 72       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4842#495 | 0x1401f4842 | 495      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4842#605 | 0x1401f4842 | 605      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4846#75  | 0x1401f4846 | 75       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4846#496 | 0x1401f4846 | 496      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4846#606 | 0x1401f4846 | 606      | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f484e#77  | 0x1401f484e | 77       | STORE      | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f484e#497 | 0x1401f484e | 497      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f484e#618 | 0x1401f484e | 618      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4851#78  | 0x1401f4851 | 78       | BRANCH     | true    | member           | [object Object]                                                 |                 |
| 0x1401f4856#483 | 0x1401f4856 | 483      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4856#484 | 0x1401f4856 | 484      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f485b#124 | 0x1401f485b | 124      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4860#127 | 0x1401f4860 | 127      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4872#607 | 0x1401f4872 | 607      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#134 | 0x1401f4877 | 134      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f4877#487 | 0x1401f4877 | 487      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#523 | 0x1401f4877 | 523      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#534 | 0x1401f4877 | 534      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#543 | 0x1401f4877 | 543      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#552 | 0x1401f4877 | 552      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#561 | 0x1401f4877 | 561      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#579 | 0x1401f4877 | 579      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4877#599 | 0x1401f4877 | 599      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f487d#608 | 0x1401f487d | 608      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4882#609 | 0x1401f4882 | 609      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#142 | 0x1401f488a | 142      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f488a#488 | 0x1401f488a | 488      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#524 | 0x1401f488a | 524      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#535 | 0x1401f488a | 535      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#544 | 0x1401f488a | 544      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#553 | 0x1401f488a | 553      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#562 | 0x1401f488a | 562      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f488a#580 | 0x1401f488a | 580      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4899#156 | 0x1401f4899 | 156      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4899#157 | 0x1401f4899 | 157      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f489b#158 | 0x1401f489b | 158      | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f489b#159 | 0x1401f489b | 159      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48a8#165 | 0x1401f48a8 | 165      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48af#174 | 0x1401f48af | 174      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f48af#611 | 0x1401f48af | 611      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f48b1#175 | 0x1401f48b1 | 175      | INT_SUB    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48b1#176 | 0x1401f48b1 | 176      | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48b1#614 | 0x1401f48b1 | 614      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f48b5#180 | 0x1401f48b5 | 180      | INT_SUB    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48b8#189 | 0x1401f48b8 | 189      | INT_SUB    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48c0#206 | 0x1401f48c0 | 206      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48c0#208 | 0x1401f48c0 | 208      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f48c2#209 | 0x1401f48c2 | 209      | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48c2#210 | 0x1401f48c2 | 210      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#215 | 0x1401f48cd | 215      | CALL       | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f48cd#317 | 0x1401f48cd | 317      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#327 | 0x1401f48cd | 327      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#491 | 0x1401f48cd | 491      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#527 | 0x1401f48cd | 527      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#538 | 0x1401f48cd | 538      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#547 | 0x1401f48cd | 547      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#556 | 0x1401f48cd | 556      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#565 | 0x1401f48cd | 565      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48cd#583 | 0x1401f48cd | 583      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d2#218 | 0x1401f48d2 | 218      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f48d2#502 | 0x1401f48d2 | 502      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d2#529 | 0x1401f48d2 | 529      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d2#540 | 0x1401f48d2 | 540      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d2#549 | 0x1401f48d2 | 549      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d2#585 | 0x1401f48d2 | 585      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48d7#221 | 0x1401f48d7 | 221      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f48e0#532 | 0x1401f48e0 | 532      | INT_AND    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#503 | 0x1401f48e5 | 503      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#530 | 0x1401f48e5 | 530      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#541 | 0x1401f48e5 | 541      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#550 | 0x1401f48e5 | 550      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#559 | 0x1401f48e5 | 559      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#568 | 0x1401f48e5 | 568      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#586 | 0x1401f48e5 | 586      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48e5#610 | 0x1401f48e5 | 610      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#83  | 0x1401f48ea | 83       | CALL       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f48ea#492 | 0x1401f48ea | 492      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#528 | 0x1401f48ea | 528      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#539 | 0x1401f48ea | 539      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#548 | 0x1401f48ea | 548      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#557 | 0x1401f48ea | 557      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#566 | 0x1401f48ea | 566      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ea#584 | 0x1401f48ea | 584      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f48ef#84  | 0x1401f48ef | 84       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f490f#118 | 0x1401f490f | 118      | RETURN     | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f490f#493 | 0x1401f490f | 493      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4915#226 | 0x1401f4915 | 226      | CALLOTHER  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#227 | 0x1401f4915 | 227      | CALLIND    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4915#489 | 0x1401f4915 | 489      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#525 | 0x1401f4915 | 525      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#536 | 0x1401f4915 | 536      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#545 | 0x1401f4915 | 545      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#554 | 0x1401f4915 | 554      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#563 | 0x1401f4915 | 563      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#581 | 0x1401f4915 | 581      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4915#615 | 0x1401f4915 | 615      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4917#228 | 0x1401f4917 | 228      | CALLOTHER  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#229 | 0x1401f4917 | 229      | CALLIND    | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4917#230 | 0x1401f4917 | 230      | RETURN     | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4917#490 | 0x1401f4917 | 490      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#494 | 0x1401f4917 | 494      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4917#526 | 0x1401f4917 | 526      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#537 | 0x1401f4917 | 537      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#546 | 0x1401f4917 | 546      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#555 | 0x1401f4917 | 555      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#564 | 0x1401f4917 | 564      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#582 | 0x1401f4917 | 582      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4917#616 | 0x1401f4917 | 616      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4917#617 | 0x1401f4917 | 617      | CAST       | true    | member           | [object Object]                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f4814#613 | 0x1401f4814#18  | 1           |
| 0x1401f4806#600 | 0x1401f4814#613 | 0           |
| 0x1401f4826#601 | 0x1401f482b#46  | 1           |
| 0x1401f482b#612 | 0x1401f482b#522 | 0           |
| 0x1401f4814#18  | 0x1401f482b#578 | 0           |
| 0x1401f482b#569 | 0x1401f4834#58  | 0           |
| 0x1401f4834#58  | 0x1401f4839#64  | 1           |
| 0x1401f483b#602 | 0x1401f483b#473 | 1           |
| 0x1401f483b#603 | 0x1401f483b#474 | 1           |
| 0x1401f482b#486 | 0x1401f483b#498 | 0           |
| 0x1401f483b#498 | 0x1401f483b#499 | 0           |
| 0x1401f483f#604 | 0x1401f483f#479 | 1           |
| 0x1401f483b#499 | 0x1401f483f#500 | 0           |
| 0x1401f483f#500 | 0x1401f483f#501 | 0           |
| 0x1401f4842#605 | 0x1401f4842#72  | 1           |
| 0x1401f483f#501 | 0x1401f4842#495 | 0           |
| 0x1401f4846#606 | 0x1401f4846#75  | 1           |
| 0x1401f4842#495 | 0x1401f4846#496 | 0           |
| 0x1401f484e#618 | 0x1401f484e#77  | 1           |
| 0x1401f4846#496 | 0x1401f484e#497 | 0           |
| 0x1401f4872#607 | 0x1401f4877#134 | 1           |
| 0x1401f4877#599 | 0x1401f4877#134 | 2           |
| 0x1401f482b#486 | 0x1401f4877#487 | 0           |
| 0x1401f482b#522 | 0x1401f4877#523 | 0           |
| 0x1401f4856#483 | 0x1401f4877#534 | 0           |
| 0x1401f4856#484 | 0x1401f4877#543 | 0           |
| 0x1401f485b#124 | 0x1401f4877#552 | 0           |
| 0x1401f4860#127 | 0x1401f4877#561 | 0           |
| 0x1401f482b#578 | 0x1401f4877#579 | 0           |
| 0x1401f4882#609 | 0x1401f488a#142 | 2           |
| 0x1401f487d#608 | 0x1401f488a#142 | 3           |
| 0x1401f4877#487 | 0x1401f488a#488 | 0           |
| 0x1401f4877#523 | 0x1401f488a#524 | 0           |
| 0x1401f4877#534 | 0x1401f488a#535 | 0           |
| 0x1401f4877#543 | 0x1401f488a#544 | 0           |
| 0x1401f4877#552 | 0x1401f488a#553 | 0           |
| 0x1401f4877#561 | 0x1401f488a#562 | 0           |
| 0x1401f4877#579 | 0x1401f488a#580 | 0           |
| 0x1401f488a#562 | 0x1401f4899#156 | 1           |
| 0x1401f4899#156 | 0x1401f4899#157 | 1           |
| 0x1401f488a#562 | 0x1401f489b#158 | 0           |
| 0x1401f489b#158 | 0x1401f489b#159 | 0           |
| 0x1401f489b#159 | 0x1401f48a8#165 | 1           |
| 0x1401f48a8#165 | 0x1401f48af#174 | 1           |
| 0x1401f488a#535 | 0x1401f48af#611 | 0           |
| 0x1401f488a#535 | 0x1401f48b1#175 | 0           |
| 0x1401f48b1#614 | 0x1401f48b1#176 | 1           |
| 0x1401f48b1#175 | 0x1401f48b1#614 | 0           |
| 0x1401f488a#535 | 0x1401f48b5#180 | 0           |
| 0x1401f48b1#176 | 0x1401f48b5#180 | 1           |
| 0x1401f48b5#180 | 0x1401f48b8#189 | 0           |
| 0x1401f48b8#189 | 0x1401f48c0#206 | 1           |
| 0x1401f48c0#206 | 0x1401f48c0#208 | 1           |
| 0x1401f488a#562 | 0x1401f48c2#209 | 0           |
| 0x1401f48c2#209 | 0x1401f48c2#210 | 0           |
| 0x1401f48cd#317 | 0x1401f48cd#215 | 1           |
| 0x1401f48cd#327 | 0x1401f48cd#215 | 2           |
| 0x1401f48af#611 | 0x1401f48cd#317 | 0           |
| 0x1401f48b1#176 | 0x1401f48cd#317 | 1           |
| 0x1401f489b#159 | 0x1401f48cd#327 | 0           |
| 0x1401f48c2#210 | 0x1401f48cd#327 | 1           |
| 0x1401f488a#488 | 0x1401f48cd#491 | 0           |
| 0x1401f488a#524 | 0x1401f48cd#527 | 0           |
| 0x1401f488a#535 | 0x1401f48cd#538 | 0           |
| 0x1401f488a#544 | 0x1401f48cd#547 | 0           |
| 0x1401f488a#553 | 0x1401f48cd#556 | 0           |
| 0x1401f488a#562 | 0x1401f48cd#565 | 0           |
| 0x1401f488a#580 | 0x1401f48cd#583 | 0           |
| 0x1401f488a#488 | 0x1401f48d2#502 | 0           |
| 0x1401f48cd#491 | 0x1401f48d2#502 | 1           |
| 0x1401f488a#524 | 0x1401f48d2#529 | 0           |
| 0x1401f48cd#527 | 0x1401f48d2#529 | 1           |
| 0x1401f488a#535 | 0x1401f48d2#540 | 0           |
| 0x1401f48cd#538 | 0x1401f48d2#540 | 1           |
| 0x1401f488a#544 | 0x1401f48d2#549 | 0           |
| 0x1401f48cd#547 | 0x1401f48d2#549 | 1           |
| 0x1401f488a#580 | 0x1401f48d2#585 | 0           |
| 0x1401f48cd#583 | 0x1401f48d2#585 | 1           |
| 0x1401f48d2#540 | 0x1401f48e0#532 | 0           |
| 0x1401f484e#497 | 0x1401f48e5#503 | 0           |
| 0x1401f48d2#502 | 0x1401f48e5#503 | 1           |
| 0x1401f482b#522 | 0x1401f48e5#530 | 0           |
| 0x1401f48d2#529 | 0x1401f48e5#530 | 1           |
| 0x1401f482b#533 | 0x1401f48e5#541 | 0           |
| 0x1401f48e0#532 | 0x1401f48e5#541 | 1           |
| 0x1401f482b#542 | 0x1401f48e5#550 | 0           |
| 0x1401f48d2#549 | 0x1401f48e5#550 | 1           |
| 0x1401f482b#551 | 0x1401f48e5#559 | 0           |
| 0x1401f48d2#218 | 0x1401f48e5#559 | 1           |
| 0x1401f482b#560 | 0x1401f48e5#568 | 0           |
| 0x1401f48d7#221 | 0x1401f48e5#568 | 1           |
| 0x1401f482b#578 | 0x1401f48e5#586 | 0           |
| 0x1401f48d2#585 | 0x1401f48e5#586 | 1           |
| 0x1401f48e5#610 | 0x1401f48ea#83  | 1           |
| 0x1401f48e5#503 | 0x1401f48ea#492 | 0           |
| 0x1401f48e5#530 | 0x1401f48ea#528 | 0           |
| 0x1401f48e5#541 | 0x1401f48ea#539 | 0           |
| 0x1401f48e5#550 | 0x1401f48ea#548 | 0           |
| 0x1401f48e5#559 | 0x1401f48ea#557 | 0           |
| 0x1401f48e5#568 | 0x1401f48ea#566 | 0           |
| 0x1401f48e5#586 | 0x1401f48ea#584 | 0           |
| 0x1401f48ef#84  | 0x1401f490f#118 | 1           |
| 0x1401f48ea#492 | 0x1401f490f#493 | 0           |
| 0x1401f4915#615 | 0x1401f4915#227 | 0           |
| 0x1401f488a#488 | 0x1401f4915#489 | 0           |
| 0x1401f488a#524 | 0x1401f4915#525 | 0           |
| 0x1401f488a#535 | 0x1401f4915#536 | 0           |
| 0x1401f488a#544 | 0x1401f4915#545 | 0           |
| 0x1401f488a#553 | 0x1401f4915#554 | 0           |
| 0x1401f488a#562 | 0x1401f4915#563 | 0           |
| 0x1401f488a#580 | 0x1401f4915#581 | 0           |
| 0x1401f4915#226 | 0x1401f4915#615 | 0           |
| 0x1401f4917#616 | 0x1401f4917#229 | 0           |
| 0x1401f4917#617 | 0x1401f4917#230 | 1           |
| 0x1401f4915#489 | 0x1401f4917#490 | 0           |
| 0x1401f4917#490 | 0x1401f4917#494 | 0           |
| 0x1401f4915#525 | 0x1401f4917#526 | 0           |
| 0x1401f4915#536 | 0x1401f4917#537 | 0           |
| 0x1401f4915#545 | 0x1401f4917#546 | 0           |
| 0x1401f4915#554 | 0x1401f4917#555 | 0           |
| 0x1401f4915#563 | 0x1401f4917#564 | 0           |
| 0x1401f4915#581 | 0x1401f4917#582 | 0           |
| 0x1401f4917#228 | 0x1401f4917#616 | 0           |
| 0x1401f4917#229 | 0x1401f4917#617 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f482b#46  | direct_call        | 0             |             |
| 0x1401f4839#64  | conditional_branch |               | 1           |
| 0x1401f483b#473 | memory_write       | 1             | 2           |
| 0x1401f483b#474 | memory_write       | 1             | 2           |
| 0x1401f483f#478 | memory_write       | 1             | 2           |
| 0x1401f483f#479 | memory_write       | 1             | 2           |
| 0x1401f4842#72  | memory_write       | 1             | 2           |
| 0x1401f4846#75  | memory_write       | 1             | 2           |
| 0x1401f484e#77  | memory_write       | 1             | 2           |
| 0x1401f4877#134 | direct_call        | 0             |             |
| 0x1401f488a#142 | direct_call        | 0             |             |
| 0x1401f4899#157 | conditional_branch |               | 1           |
| 0x1401f48af#174 | conditional_branch |               | 1           |
| 0x1401f48b1#176 | memory_read        | 1             |             |
| 0x1401f48c0#208 | conditional_branch |               | 1           |
| 0x1401f48cd#215 | direct_call        | 0             |             |
| 0x1401f48ea#83  | direct_call        | 0             |             |
| 0x1401f4915#227 | indirect_call      | 0             |             |
| 0x1401f4917#229 | indirect_call      | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f482b#612 | 0           |
| 0       | 0x1401f483b#602 | 0           |
| 0       | 0x1401f483b#603 | 0           |
| 0       | 0x1401f483f#478 | 1           |
| 0       | 0x1401f483f#604 | 0           |
| 0       | 0x1401f4842#605 | 0           |
| 0       | 0x1401f4846#606 | 0           |
| 0       | 0x1401f484e#618 | 0           |
| 0       | 0x1401f488a#142 | 1           |
| 0       | 0x1401f48ef#84  | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f4917 with no resolved callee; its no-return basis is unknown.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401f4917 with no resolved callee; its no-return basis is unknown.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

