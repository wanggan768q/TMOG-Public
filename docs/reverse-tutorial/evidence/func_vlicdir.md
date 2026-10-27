## evidence_id

ev_c653c822c2e4cf810d43d1e2b077fd16cd5f437b158f1d7bf75434114794e721

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
| procedure | 0x1401f4520 |

## raw_result.value.procedure.address

0x1401f4520

## raw_result.value.procedure.name

FUN_1401f4520

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
| 0x1401f4520 | 0x1401f45d6 |

## raw_result.value.procedure.body.total_bytes

183

## raw_result.value.procedure.body.span_bytes

183

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f4520()

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8      | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8      | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8      | ghidra-function-database |
| undefined1[16] local_38 @ Stack[-0x38]:16 | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8      | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1401f4520(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [6];
  
  local_38[4] = DAT_1404c7ac0 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_40 = param_1;
  FUN_1400017a0(local_38,L"TMOG",4);
  FUN_1400363d0(param_1,local_38);
  if (7 < (ulonglong)local_38[3]) {
    uVar4 = local_38[3] * 2 + 2;
    lVar3 = local_38[0];
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(local_38[0] + -8);
      if (0x1f < (local_38[0] - lVar3) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      uVar4 = local_38[3] * 2 + 0x29;
    }
    thunk_FUN_140327e20(lVar3,uVar4);
  }
  return param_1;
}



## raw_result.value.assembly

0x1401f4520: PUSH RBX,0x1401f4522: SUB RSP, 0x60,0x1401f4526: MOV RAX, qword ptr [0x1404c7ac0],0x1401f452d: XOR RAX, RSP,0x1401f4530: MOV qword ptr [RSP + 0x50], RAX,0x1401f4535: MOV RBX, RCX,0x1401f4538: MOV qword ptr [RSP + 0x28], RCX,0x1401f453d: XOR ECX, ECX,0x1401f453f: XORPS XMM0, XMM0,0x1401f4542: MOVUPS xmmword ptr [RSP + 0x30], XMM0,0x1401f4547: MOV qword ptr [RSP + 0x40], RCX,0x1401f454c: MOV qword ptr [RSP + 0x48], RCX,0x1401f4551: MOV R8D, 0x4,0x1401f4557: LEA RDX, [0x14037d0a0],0x1401f455e: LEA RCX, [RSP + 0x30],0x1401f4563: CALL 0x1400017a0,0x1401f4568: NOP,0x1401f4569: LEA RDX, [RSP + 0x30],0x1401f456e: MOV RCX, RBX,0x1401f4571: CALL 0x1400363d0,0x1401f4576: NOP,0x1401f4577: MOV R8, qword ptr [RSP + 0x48],0x1401f457c: CMP R8, 0x7,0x1401f4580: JBE 0x1401f45b9,0x1401f4582: LEA RDX, [0x2 + R8*0x2],0x1401f458a: MOV RCX, qword ptr [RSP + 0x30],0x1401f458f: CMP RDX, 0x1000,0x1401f4596: JC 0x1401f45b4,0x1401f4598: MOV RAX, qword ptr [RCX + -0x8],0x1401f459c: SUB RCX, RAX,0x1401f459f: SUB RCX, 0x8,0x1401f45a3: CMP RCX, 0x1f,0x1401f45a7: JA 0x1401f45cf,0x1401f45a9: LEA RDX, [0x29 + R8*0x2],0x1401f45b1: MOV RCX, RAX,0x1401f45b4: CALL 0x1403272f0,0x1401f45b9: MOV RAX, RBX,0x1401f45bc: MOV RCX, qword ptr [RSP + 0x50],0x1401f45c1: XOR RCX, RSP,0x1401f45c4: CALL 0x140327740,0x1401f45c9: ADD RSP, 0x60,0x1401f45cd: POP RBX,0x1401f45ce: RET,0x1401f45cf: MOV ECX, 0x5,0x1401f45d4: INT 0x29,0x1401f45d6: INT3

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f4800 | FUN_1401f4800 | [object Object] | [object Object] |
| 0x1401f5440 | FUN_1401f5440 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1400017a0 | FUN_1400017a0           | [object Object] | [object Object] |
| 0x1400363d0 | FUN_1400363d0           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f482b    | 0x1401f4520    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5476    | 0x1401f4520    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df99c    | 0x1401f4520    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4526    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f4530    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f4538    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f4542    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4547    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f454c    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f4557    | 0x14037d0a0              | [object Object]  |                  | [object Object] |
| 0x1401f455e    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4563    | 0x1400017a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4569    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4571    | 0x1400363d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4577    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f4580    | 0x1401f45b9              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f458a    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4596    | 0x1401f45b4              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f45a7    | 0x1401f45cf              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f45b4    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f45bc    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f45c4    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings

| address     | value | source_address |
|-------------|-------|----------------|
| 0x14037d0a0 | TMOG  | 0x1401f4557    |

## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1400017a0 | FUN_1400017a0           | 0x1401f4563    |
| 0x1400363d0 | FUN_1400363d0           | 0x1401f4571    |
| 0x1401f45b4 | LAB_1401f45b4           | 0x1401f4596    |
| 0x1401f45b9 | LAB_1401f45b9           | 0x1401f4580    |
| 0x1401f45cf | LAB_1401f45cf           | 0x1401f45a7    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x1401f45b4    |
| 0x140327740 | __security_check_cookie | 0x1401f45c4    |
| 0x14037d0a0 | u_TMOG_14037d0a0        | 0x1401f4557    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f4526    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4520 | 0x1401f4582 | 0x1401f4582,0x1401f45b9 |
| 0x1401f4582 | 0x1401f4598 | 0x1401f4598,0x1401f45b4 |
| 0x1401f4598 | 0x1401f45a9 | 0x1401f45a9,0x1401f45cf |
| 0x1401f45a9 | 0x1401f45b4 | 0x1401f45b4             |
| 0x1401f45b4 | 0x1401f45b9 | 0x1401f45b9             |
| 0x1401f45b9 | 0x1401f45cf |                         |
| 0x1401f45cf | 0x1401f45d7 |                         |

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

| id              | address     | sequence | opcode     | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x1401f4522#401 | 0x1401f4522 | 401      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f452d#15  | 0x1401f452d | 15       | INT_XOR    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f452d#406 | 0x1401f452d | 406      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4542#339 | 0x1401f4542 | 339      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4542#340 | 0x1401f4542 | 340      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4547#48  | 0x1401f4547 | 48       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f454c#51  | 0x1401f454c | 51       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f455e#402 | 0x1401f455e | 402      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#58  | 0x1401f4563 | 58       | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f4563#342 | 0x1401f4563 | 342      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#356 | 0x1401f4563 | 356      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#362 | 0x1401f4563 | 362      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#368 | 0x1401f4563 | 368      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#374 | 0x1401f4563 | 374      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#380 | 0x1401f4563 | 380      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#386 | 0x1401f4563 | 386      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#400 | 0x1401f4563 | 400      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4563#405 | 0x1401f4563 | 405      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4569#403 | 0x1401f4569 | 403      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#64  | 0x1401f4571 | 64       | CALL       | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4571#343 | 0x1401f4571 | 343      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#357 | 0x1401f4571 | 357      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#363 | 0x1401f4571 | 363      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#369 | 0x1401f4571 | 369      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#375 | 0x1401f4571 | 375      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#381 | 0x1401f4571 | 381      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#387 | 0x1401f4571 | 387      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4580#78  | 0x1401f4580 | 78       | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4580#79  | 0x1401f4580 | 79       | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4580#407 | 0x1401f4580 | 407      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4582#80  | 0x1401f4582 | 80       | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4582#81  | 0x1401f4582 | 81       | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f458f#87  | 0x1401f458f | 87       | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4596#96  | 0x1401f4596 | 96       | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4596#404 | 0x1401f4596 | 404      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4598#97  | 0x1401f4598 | 97       | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4598#98  | 0x1401f4598 | 98       | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4598#408 | 0x1401f4598 | 408      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f459c#102 | 0x1401f459c | 102      | INT_SUB    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f459f#111 | 0x1401f459f | 111      | INT_SUB    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45a7#128 | 0x1401f45a7 | 128      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45a7#130 | 0x1401f45a7 | 130      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f45a9#131 | 0x1401f45a9 | 131      | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45a9#132 | 0x1401f45a9 | 132      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#137 | 0x1401f45b4 | 137      | CALL       | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f45b4#242 | 0x1401f45b4 | 242      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#249 | 0x1401f45b4 | 249      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#346 | 0x1401f45b4 | 346      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#360 | 0x1401f45b4 | 360      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#366 | 0x1401f45b4 | 366      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#372 | 0x1401f45b4 | 372      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#378 | 0x1401f45b4 | 378      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#384 | 0x1401f45b4 | 384      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#390 | 0x1401f45b4 | 390      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b9#138 | 0x1401f45b9 | 138      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f45b9#349 | 0x1401f45b9 | 349      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45ce#169 | 0x1401f45ce | 169      | RETURN     | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f45ce#347 | 0x1401f45ce | 347      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f45d4#171 | 0x1401f45d4 | 171      | CALLOTHER  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#172 | 0x1401f45d4 | 172      | CALLIND    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f45d4#344 | 0x1401f45d4 | 344      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#358 | 0x1401f45d4 | 358      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#364 | 0x1401f45d4 | 364      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#370 | 0x1401f45d4 | 370      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#376 | 0x1401f45d4 | 376      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#382 | 0x1401f45d4 | 382      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#388 | 0x1401f45d4 | 388      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#409 | 0x1401f45d4 | 409      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f45d6#173 | 0x1401f45d6 | 173      | CALLOTHER  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#174 | 0x1401f45d6 | 174      | CALLIND    | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f45d6#175 | 0x1401f45d6 | 175      | RETURN     | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f45d6#345 | 0x1401f45d6 | 345      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#348 | 0x1401f45d6 | 348      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f45d6#359 | 0x1401f45d6 | 359      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#365 | 0x1401f45d6 | 365      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#371 | 0x1401f45d6 | 371      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#377 | 0x1401f45d6 | 377      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#383 | 0x1401f45d6 | 383      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#389 | 0x1401f45d6 | 389      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#410 | 0x1401f45d6 | 410      | CAST       | true    | member           | [object Object]                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f452d#406 | 0x1401f452d#15  | 1           |
| 0x1401f4522#401 | 0x1401f452d#406 | 0           |
| 0x1401f455e#402 | 0x1401f4563#58  | 1           |
| 0x1401f4563#400 | 0x1401f4563#58  | 2           |
| 0x1401f4563#405 | 0x1401f4563#356 | 0           |
| 0x1401f4542#339 | 0x1401f4563#362 | 0           |
| 0x1401f4542#340 | 0x1401f4563#368 | 0           |
| 0x1401f4547#48  | 0x1401f4563#374 | 0           |
| 0x1401f454c#51  | 0x1401f4563#380 | 0           |
| 0x1401f452d#15  | 0x1401f4563#386 | 0           |
| 0x1401f4569#403 | 0x1401f4571#64  | 2           |
| 0x1401f4563#342 | 0x1401f4571#343 | 0           |
| 0x1401f4563#356 | 0x1401f4571#357 | 0           |
| 0x1401f4563#362 | 0x1401f4571#363 | 0           |
| 0x1401f4563#368 | 0x1401f4571#369 | 0           |
| 0x1401f4563#374 | 0x1401f4571#375 | 0           |
| 0x1401f4563#380 | 0x1401f4571#381 | 0           |
| 0x1401f4563#386 | 0x1401f4571#387 | 0           |
| 0x1401f4580#407 | 0x1401f4580#78  | 1           |
| 0x1401f4580#78  | 0x1401f4580#79  | 1           |
| 0x1401f4571#381 | 0x1401f4580#407 | 0           |
| 0x1401f4571#381 | 0x1401f4582#80  | 0           |
| 0x1401f4582#80  | 0x1401f4582#81  | 0           |
| 0x1401f4582#81  | 0x1401f458f#87  | 1           |
| 0x1401f458f#87  | 0x1401f4596#96  | 1           |
| 0x1401f4571#363 | 0x1401f4596#404 | 0           |
| 0x1401f4571#363 | 0x1401f4598#97  | 0           |
| 0x1401f4598#408 | 0x1401f4598#98  | 1           |
| 0x1401f4598#97  | 0x1401f4598#408 | 0           |
| 0x1401f4571#363 | 0x1401f459c#102 | 0           |
| 0x1401f4598#98  | 0x1401f459c#102 | 1           |
| 0x1401f459c#102 | 0x1401f459f#111 | 0           |
| 0x1401f459f#111 | 0x1401f45a7#128 | 1           |
| 0x1401f45a7#128 | 0x1401f45a7#130 | 1           |
| 0x1401f4571#381 | 0x1401f45a9#131 | 0           |
| 0x1401f45a9#131 | 0x1401f45a9#132 | 0           |
| 0x1401f45b4#242 | 0x1401f45b4#137 | 1           |
| 0x1401f45b4#249 | 0x1401f45b4#137 | 2           |
| 0x1401f4596#404 | 0x1401f45b4#242 | 0           |
| 0x1401f4598#98  | 0x1401f45b4#242 | 1           |
| 0x1401f4582#81  | 0x1401f45b4#249 | 0           |
| 0x1401f45a9#132 | 0x1401f45b4#249 | 1           |
| 0x1401f4571#343 | 0x1401f45b4#346 | 0           |
| 0x1401f4571#357 | 0x1401f45b4#360 | 0           |
| 0x1401f4571#363 | 0x1401f45b4#366 | 0           |
| 0x1401f4571#369 | 0x1401f45b4#372 | 0           |
| 0x1401f4571#375 | 0x1401f45b4#378 | 0           |
| 0x1401f4571#381 | 0x1401f45b4#384 | 0           |
| 0x1401f4571#387 | 0x1401f45b4#390 | 0           |
| 0x1401f4571#343 | 0x1401f45b9#349 | 0           |
| 0x1401f45b4#346 | 0x1401f45b9#349 | 1           |
| 0x1401f45b9#138 | 0x1401f45ce#169 | 1           |
| 0x1401f45b9#349 | 0x1401f45ce#347 | 0           |
| 0x1401f45d4#409 | 0x1401f45d4#172 | 0           |
| 0x1401f4571#343 | 0x1401f45d4#344 | 0           |
| 0x1401f4571#357 | 0x1401f45d4#358 | 0           |
| 0x1401f4571#363 | 0x1401f45d4#364 | 0           |
| 0x1401f4571#369 | 0x1401f45d4#370 | 0           |
| 0x1401f4571#375 | 0x1401f45d4#376 | 0           |
| 0x1401f4571#381 | 0x1401f45d4#382 | 0           |
| 0x1401f4571#387 | 0x1401f45d4#388 | 0           |
| 0x1401f45d4#171 | 0x1401f45d4#409 | 0           |
| 0x1401f45d6#410 | 0x1401f45d6#174 | 0           |
| 0x1401f45d6#174 | 0x1401f45d6#175 | 1           |
| 0x1401f45d4#344 | 0x1401f45d6#345 | 0           |
| 0x1401f45d6#345 | 0x1401f45d6#348 | 0           |
| 0x1401f45d4#358 | 0x1401f45d6#359 | 0           |
| 0x1401f45d4#364 | 0x1401f45d6#365 | 0           |
| 0x1401f45d4#370 | 0x1401f45d6#371 | 0           |
| 0x1401f45d4#376 | 0x1401f45d6#377 | 0           |
| 0x1401f45d4#382 | 0x1401f45d6#383 | 0           |
| 0x1401f45d4#388 | 0x1401f45d6#389 | 0           |
| 0x1401f45d6#173 | 0x1401f45d6#410 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /undefined8 |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f4563#405 | 0           |
| 0       | 0x1401f4571#64  | 1           |
| 0       | 0x1401f45b9#138 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f4563#58  | direct_call        | 0             |             |
| 0x1401f4571#64  | direct_call        | 0             |             |
| 0x1401f4580#79  | conditional_branch |               | 1           |
| 0x1401f4596#96  | conditional_branch |               | 1           |
| 0x1401f4598#98  | memory_read        | 1             |             |
| 0x1401f45a7#130 | conditional_branch |               | 1           |
| 0x1401f45b4#137 | direct_call        | 0             |             |
| 0x1401f45d4#172 | indirect_call      | 0             |             |
| 0x1401f45d6#174 | indirect_call      | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f45d6 with no resolved callee; its no-return basis is unknown.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401f45d6 with no resolved callee; its no-return basis is unknown.

## normalized_result.procedure.address

0x1401f4520

## normalized_result.procedure.name

FUN_1401f4520

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
| 0x1401f4520 | 0x1401f45d6 |

## normalized_result.procedure.body.total_bytes

183

## normalized_result.procedure.body.span_bytes

183

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f4520()

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8      | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8      | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8      | ghidra-function-database |
| undefined1[16] local_38 @ Stack[-0x38]:16 | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8      | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1401f4520(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [6];
  
  local_38[4] = DAT_1404c7ac0 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_40 = param_1;
  FUN_1400017a0(local_38,L"TMOG",4);
  FUN_1400363d0(param_1,local_38);
  if (7 < (ulonglong)local_38[3]) {
    uVar4 = local_38[3] * 2 + 2;
    lVar3 = local_38[0];
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(local_38[0] + -8);
      if (0x1f < (local_38[0] - lVar3) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      uVar4 = local_38[3] * 2 + 0x29;
    }
    thunk_FUN_140327e20(lVar3,uVar4);
  }
  return param_1;
}



## normalized_result.assembly

0x1401f4520: PUSH RBX,0x1401f4522: SUB RSP, 0x60,0x1401f4526: MOV RAX, qword ptr [0x1404c7ac0],0x1401f452d: XOR RAX, RSP,0x1401f4530: MOV qword ptr [RSP + 0x50], RAX,0x1401f4535: MOV RBX, RCX,0x1401f4538: MOV qword ptr [RSP + 0x28], RCX,0x1401f453d: XOR ECX, ECX,0x1401f453f: XORPS XMM0, XMM0,0x1401f4542: MOVUPS xmmword ptr [RSP + 0x30], XMM0,0x1401f4547: MOV qword ptr [RSP + 0x40], RCX,0x1401f454c: MOV qword ptr [RSP + 0x48], RCX,0x1401f4551: MOV R8D, 0x4,0x1401f4557: LEA RDX, [0x14037d0a0],0x1401f455e: LEA RCX, [RSP + 0x30],0x1401f4563: CALL 0x1400017a0,0x1401f4568: NOP,0x1401f4569: LEA RDX, [RSP + 0x30],0x1401f456e: MOV RCX, RBX,0x1401f4571: CALL 0x1400363d0,0x1401f4576: NOP,0x1401f4577: MOV R8, qword ptr [RSP + 0x48],0x1401f457c: CMP R8, 0x7,0x1401f4580: JBE 0x1401f45b9,0x1401f4582: LEA RDX, [0x2 + R8*0x2],0x1401f458a: MOV RCX, qword ptr [RSP + 0x30],0x1401f458f: CMP RDX, 0x1000,0x1401f4596: JC 0x1401f45b4,0x1401f4598: MOV RAX, qword ptr [RCX + -0x8],0x1401f459c: SUB RCX, RAX,0x1401f459f: SUB RCX, 0x8,0x1401f45a3: CMP RCX, 0x1f,0x1401f45a7: JA 0x1401f45cf,0x1401f45a9: LEA RDX, [0x29 + R8*0x2],0x1401f45b1: MOV RCX, RAX,0x1401f45b4: CALL 0x1403272f0,0x1401f45b9: MOV RAX, RBX,0x1401f45bc: MOV RCX, qword ptr [RSP + 0x50],0x1401f45c1: XOR RCX, RSP,0x1401f45c4: CALL 0x140327740,0x1401f45c9: ADD RSP, 0x60,0x1401f45cd: POP RBX,0x1401f45ce: RET,0x1401f45cf: MOV ECX, 0x5,0x1401f45d4: INT 0x29,0x1401f45d6: INT3

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f4800 | FUN_1401f4800 | [object Object] | [object Object] |
| 0x1401f5440 | FUN_1401f5440 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1400017a0 | FUN_1400017a0           | [object Object] | [object Object] |
| 0x1400363d0 | FUN_1400363d0           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f482b    | 0x1401f4520    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5476    | 0x1401f4520    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df99c    | 0x1401f4520    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4526    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f4530    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f4538    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f4542    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4547    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f454c    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f4557    | 0x14037d0a0              | [object Object]  |                  | [object Object] |
| 0x1401f455e    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4563    | 0x1400017a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4569    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4571    | 0x1400363d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4577    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f4580    | 0x1401f45b9              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f458a    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4596    | 0x1401f45b4              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f45a7    | 0x1401f45cf              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f45b4    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f45bc    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f45c4    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings

| address     | value | source_address |
|-------------|-------|----------------|
| 0x14037d0a0 | TMOG  | 0x1401f4557    |

## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1400017a0 | FUN_1400017a0           | 0x1401f4563    |
| 0x1400363d0 | FUN_1400363d0           | 0x1401f4571    |
| 0x1401f45b4 | LAB_1401f45b4           | 0x1401f4596    |
| 0x1401f45b9 | LAB_1401f45b9           | 0x1401f4580    |
| 0x1401f45cf | LAB_1401f45cf           | 0x1401f45a7    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x1401f45b4    |
| 0x140327740 | __security_check_cookie | 0x1401f45c4    |
| 0x14037d0a0 | u_TMOG_14037d0a0        | 0x1401f4557    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f4526    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4520 | 0x1401f4582 | 0x1401f4582,0x1401f45b9 |
| 0x1401f4582 | 0x1401f4598 | 0x1401f4598,0x1401f45b4 |
| 0x1401f4598 | 0x1401f45a9 | 0x1401f45a9,0x1401f45cf |
| 0x1401f45a9 | 0x1401f45b4 | 0x1401f45b4             |
| 0x1401f45b4 | 0x1401f45b9 | 0x1401f45b9             |
| 0x1401f45b9 | 0x1401f45cf |                         |
| 0x1401f45cf | 0x1401f45d7 |                         |

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

| id              | address     | sequence | opcode     | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x1401f4522#401 | 0x1401f4522 | 401      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f452d#15  | 0x1401f452d | 15       | INT_XOR    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f452d#406 | 0x1401f452d | 406      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4542#339 | 0x1401f4542 | 339      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4542#340 | 0x1401f4542 | 340      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4547#48  | 0x1401f4547 | 48       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f454c#51  | 0x1401f454c | 51       | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f455e#402 | 0x1401f455e | 402      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#58  | 0x1401f4563 | 58       | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f4563#342 | 0x1401f4563 | 342      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#356 | 0x1401f4563 | 356      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#362 | 0x1401f4563 | 362      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#368 | 0x1401f4563 | 368      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#374 | 0x1401f4563 | 374      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#380 | 0x1401f4563 | 380      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#386 | 0x1401f4563 | 386      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4563#400 | 0x1401f4563 | 400      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4563#405 | 0x1401f4563 | 405      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4569#403 | 0x1401f4569 | 403      | PTRSUB     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#64  | 0x1401f4571 | 64       | CALL       | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4571#343 | 0x1401f4571 | 343      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#357 | 0x1401f4571 | 357      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#363 | 0x1401f4571 | 363      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#369 | 0x1401f4571 | 369      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#375 | 0x1401f4571 | 375      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#381 | 0x1401f4571 | 381      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4571#387 | 0x1401f4571 | 387      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4580#78  | 0x1401f4580 | 78       | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4580#79  | 0x1401f4580 | 79       | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4580#407 | 0x1401f4580 | 407      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4582#80  | 0x1401f4582 | 80       | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4582#81  | 0x1401f4582 | 81       | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f458f#87  | 0x1401f458f | 87       | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4596#96  | 0x1401f4596 | 96       | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4596#404 | 0x1401f4596 | 404      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4598#97  | 0x1401f4598 | 97       | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4598#98  | 0x1401f4598 | 98       | LOAD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4598#408 | 0x1401f4598 | 408      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f459c#102 | 0x1401f459c | 102      | INT_SUB    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f459f#111 | 0x1401f459f | 111      | INT_SUB    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45a7#128 | 0x1401f45a7 | 128      | INT_LESS   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45a7#130 | 0x1401f45a7 | 130      | CBRANCH    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f45a9#131 | 0x1401f45a9 | 131      | INT_MULT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45a9#132 | 0x1401f45a9 | 132      | INT_ADD    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#137 | 0x1401f45b4 | 137      | CALL       | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f45b4#242 | 0x1401f45b4 | 242      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#249 | 0x1401f45b4 | 249      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#346 | 0x1401f45b4 | 346      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#360 | 0x1401f45b4 | 360      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#366 | 0x1401f45b4 | 366      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#372 | 0x1401f45b4 | 372      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#378 | 0x1401f45b4 | 378      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#384 | 0x1401f45b4 | 384      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b4#390 | 0x1401f45b4 | 390      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45b9#138 | 0x1401f45b9 | 138      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f45b9#349 | 0x1401f45b9 | 349      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45ce#169 | 0x1401f45ce | 169      | RETURN     | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f45ce#347 | 0x1401f45ce | 347      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f45d4#171 | 0x1401f45d4 | 171      | CALLOTHER  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#172 | 0x1401f45d4 | 172      | CALLIND    | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f45d4#344 | 0x1401f45d4 | 344      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#358 | 0x1401f45d4 | 358      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#364 | 0x1401f45d4 | 364      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#370 | 0x1401f45d4 | 370      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#376 | 0x1401f45d4 | 376      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#382 | 0x1401f45d4 | 382      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#388 | 0x1401f45d4 | 388      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d4#409 | 0x1401f45d4 | 409      | CAST       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f45d6#173 | 0x1401f45d6 | 173      | CALLOTHER  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#174 | 0x1401f45d6 | 174      | CALLIND    | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f45d6#175 | 0x1401f45d6 | 175      | RETURN     | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f45d6#345 | 0x1401f45d6 | 345      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#348 | 0x1401f45d6 | 348      | COPY       | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f45d6#359 | 0x1401f45d6 | 359      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#365 | 0x1401f45d6 | 365      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#371 | 0x1401f45d6 | 371      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#377 | 0x1401f45d6 | 377      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#383 | 0x1401f45d6 | 383      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#389 | 0x1401f45d6 | 389      | INDIRECT   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f45d6#410 | 0x1401f45d6 | 410      | CAST       | true    | member           | [object Object]                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f452d#406 | 0x1401f452d#15  | 1           |
| 0x1401f4522#401 | 0x1401f452d#406 | 0           |
| 0x1401f455e#402 | 0x1401f4563#58  | 1           |
| 0x1401f4563#400 | 0x1401f4563#58  | 2           |
| 0x1401f4563#405 | 0x1401f4563#356 | 0           |
| 0x1401f4542#339 | 0x1401f4563#362 | 0           |
| 0x1401f4542#340 | 0x1401f4563#368 | 0           |
| 0x1401f4547#48  | 0x1401f4563#374 | 0           |
| 0x1401f454c#51  | 0x1401f4563#380 | 0           |
| 0x1401f452d#15  | 0x1401f4563#386 | 0           |
| 0x1401f4569#403 | 0x1401f4571#64  | 2           |
| 0x1401f4563#342 | 0x1401f4571#343 | 0           |
| 0x1401f4563#356 | 0x1401f4571#357 | 0           |
| 0x1401f4563#362 | 0x1401f4571#363 | 0           |
| 0x1401f4563#368 | 0x1401f4571#369 | 0           |
| 0x1401f4563#374 | 0x1401f4571#375 | 0           |
| 0x1401f4563#380 | 0x1401f4571#381 | 0           |
| 0x1401f4563#386 | 0x1401f4571#387 | 0           |
| 0x1401f4580#407 | 0x1401f4580#78  | 1           |
| 0x1401f4580#78  | 0x1401f4580#79  | 1           |
| 0x1401f4571#381 | 0x1401f4580#407 | 0           |
| 0x1401f4571#381 | 0x1401f4582#80  | 0           |
| 0x1401f4582#80  | 0x1401f4582#81  | 0           |
| 0x1401f4582#81  | 0x1401f458f#87  | 1           |
| 0x1401f458f#87  | 0x1401f4596#96  | 1           |
| 0x1401f4571#363 | 0x1401f4596#404 | 0           |
| 0x1401f4571#363 | 0x1401f4598#97  | 0           |
| 0x1401f4598#408 | 0x1401f4598#98  | 1           |
| 0x1401f4598#97  | 0x1401f4598#408 | 0           |
| 0x1401f4571#363 | 0x1401f459c#102 | 0           |
| 0x1401f4598#98  | 0x1401f459c#102 | 1           |
| 0x1401f459c#102 | 0x1401f459f#111 | 0           |
| 0x1401f459f#111 | 0x1401f45a7#128 | 1           |
| 0x1401f45a7#128 | 0x1401f45a7#130 | 1           |
| 0x1401f4571#381 | 0x1401f45a9#131 | 0           |
| 0x1401f45a9#131 | 0x1401f45a9#132 | 0           |
| 0x1401f45b4#242 | 0x1401f45b4#137 | 1           |
| 0x1401f45b4#249 | 0x1401f45b4#137 | 2           |
| 0x1401f4596#404 | 0x1401f45b4#242 | 0           |
| 0x1401f4598#98  | 0x1401f45b4#242 | 1           |
| 0x1401f4582#81  | 0x1401f45b4#249 | 0           |
| 0x1401f45a9#132 | 0x1401f45b4#249 | 1           |
| 0x1401f4571#343 | 0x1401f45b4#346 | 0           |
| 0x1401f4571#357 | 0x1401f45b4#360 | 0           |
| 0x1401f4571#363 | 0x1401f45b4#366 | 0           |
| 0x1401f4571#369 | 0x1401f45b4#372 | 0           |
| 0x1401f4571#375 | 0x1401f45b4#378 | 0           |
| 0x1401f4571#381 | 0x1401f45b4#384 | 0           |
| 0x1401f4571#387 | 0x1401f45b4#390 | 0           |
| 0x1401f4571#343 | 0x1401f45b9#349 | 0           |
| 0x1401f45b4#346 | 0x1401f45b9#349 | 1           |
| 0x1401f45b9#138 | 0x1401f45ce#169 | 1           |
| 0x1401f45b9#349 | 0x1401f45ce#347 | 0           |
| 0x1401f45d4#409 | 0x1401f45d4#172 | 0           |
| 0x1401f4571#343 | 0x1401f45d4#344 | 0           |
| 0x1401f4571#357 | 0x1401f45d4#358 | 0           |
| 0x1401f4571#363 | 0x1401f45d4#364 | 0           |
| 0x1401f4571#369 | 0x1401f45d4#370 | 0           |
| 0x1401f4571#375 | 0x1401f45d4#376 | 0           |
| 0x1401f4571#381 | 0x1401f45d4#382 | 0           |
| 0x1401f4571#387 | 0x1401f45d4#388 | 0           |
| 0x1401f45d4#171 | 0x1401f45d4#409 | 0           |
| 0x1401f45d6#410 | 0x1401f45d6#174 | 0           |
| 0x1401f45d6#174 | 0x1401f45d6#175 | 1           |
| 0x1401f45d4#344 | 0x1401f45d6#345 | 0           |
| 0x1401f45d6#345 | 0x1401f45d6#348 | 0           |
| 0x1401f45d4#358 | 0x1401f45d6#359 | 0           |
| 0x1401f45d4#364 | 0x1401f45d6#365 | 0           |
| 0x1401f45d4#370 | 0x1401f45d6#371 | 0           |
| 0x1401f45d4#376 | 0x1401f45d6#377 | 0           |
| 0x1401f45d4#382 | 0x1401f45d6#383 | 0           |
| 0x1401f45d4#388 | 0x1401f45d6#389 | 0           |
| 0x1401f45d6#173 | 0x1401f45d6#410 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f4563#58  | direct_call        | 0             |             |
| 0x1401f4571#64  | direct_call        | 0             |             |
| 0x1401f4580#79  | conditional_branch |               | 1           |
| 0x1401f4596#96  | conditional_branch |               | 1           |
| 0x1401f4598#98  | memory_read        | 1             |             |
| 0x1401f45a7#130 | conditional_branch |               | 1           |
| 0x1401f45b4#137 | direct_call        | 0             |             |
| 0x1401f45d4#172 | indirect_call      | 0             |             |
| 0x1401f45d6#174 | indirect_call      | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /undefined8 |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f4563#405 | 0           |
| 0       | 0x1401f4571#64  | 1           |
| 0       | 0x1401f45b9#138 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f45d6 with no resolved callee; its no-return basis is unknown.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401f45d6 with no resolved callee; its no-return basis is unknown.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

