## evidence_id

ev_18d7697aaad0ad700ee802c68267a122e5ee2c1a28d8e11f5c1f638df5bb1475

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
| procedure | 0x1401f4c80 |

## raw_result.value.procedure.address

0x1401f4c80

## raw_result.value.procedure.name

FUN_1401f4c80

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
| 0x1401f4c80 | 0x1401f4d83 |

## raw_result.value.procedure.body.total_bytes

260

## raw_result.value.procedure.body.span_bytes

260

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f4c80()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8   | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8   | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8   | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8   | ghidra-function-database |
| undefined4 local_40 @ Stack[-0x40]:4   | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8   | ghidra-function-database |
| undefined local_5f @ Stack[-0x5f]:1    | ghidra-function-database |
| undefined local_60 @ Stack[-0x60]:1    | ghidra-function-database |
| undefined1 local_68 @ Stack[-0x68]:1   | ghidra-function-database |
| undefined local_98 @ Stack[-0x98]:1    | ghidra-function-database |
| undefined8 local_a0 @ Stack[-0xa0]:8   | ghidra-function-database |
| undefined8 local_a8 @ Stack[-0xa8]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *** FUN_1401f4c80(undefined8 ***param_1)

{
  undefined1 auStack_d8 [48];
  undefined8 **local_a8;
  longlong local_a0;
  undefined1 local_98 [48];
  char local_68;
  undefined1 local_60 [16];
  longlong local_50;
  int local_40 [2];
  undefined8 **local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_d8;
  local_a8 = param_1;
  FUN_1401f4800(local_60);
  if (local_50 == 0) {
    *(undefined4 *)param_1 = 2;
    *(undefined1 *)(param_1 + 7) = 0;
    goto LAB_1401f4d5b;
  }
  FUN_140036dc0(local_40,local_60,0x10000);
  if (local_40[0] == 1) {
    *(undefined4 *)param_1 = 0;
LAB_1401f4d4d:
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    if ((local_40[0] != 0) || (local_28 == 0)) {
LAB_1401f4d47:
      *(undefined4 *)param_1 = 2;
      goto LAB_1401f4d4d;
    }
    local_a8 = local_38;
    if (0xf < local_20) {
      local_a8 = local_38[0];
    }
    local_a0 = local_28;
    FUN_140309020(local_98,&local_a8);
    if (local_68 == '\0') goto LAB_1401f4d47;
    *(undefined4 *)param_1 = 1;
    FUN_1401f0910(param_1 + 1,local_98);
    if (local_68 != '\0') {
      FUN_1401f2780(local_98,0);
    }
  }
  FUN_140005540(local_38);
LAB_1401f4d5b:
  FUN_1400055b0(local_60);
  return param_1;
}



## raw_result.value.assembly

0x1401f4c80: MOV qword ptr [RSP + 0x10], RBX,0x1401f4c85: PUSH RBP,0x1401f4c86: LEA RBP, [RSP + -0x57],0x1401f4c8b: SUB RSP, 0xd0,0x1401f4c92: MOV RAX, qword ptr [0x1404c7ac0],0x1401f4c99: XOR RAX, RSP,0x1401f4c9c: MOV qword ptr [RBP + 0x47], RAX,0x1401f4ca0: MOV RBX, RCX,0x1401f4ca3: MOV qword ptr [RBP + -0x49], RCX,0x1401f4ca7: LEA RCX, [RBP + -0x1],0x1401f4cab: CALL 0x1401f4800,0x1401f4cb0: NOP,0x1401f4cb1: CMP qword ptr [RBP + 0xf], 0x0,0x1401f4cb6: JNZ 0x1401f4cc7,0x1401f4cb8: MOV dword ptr [RBX], 0x2,0x1401f4cbe: MOV byte ptr [RBX + 0x38], 0x0,0x1401f4cc2: JMP 0x1401f4d5b,0x1401f4cc7: MOV R8D, 0x10000,0x1401f4ccd: LEA RDX, [RBP + -0x1],0x1401f4cd1: LEA RCX, [RBP + 0x1f],0x1401f4cd5: CALL 0x140036dc0,0x1401f4cda: NOP,0x1401f4cdb: MOV EAX, dword ptr [RBP + 0x1f],0x1401f4cde: CMP EAX, 0x1,0x1401f4ce1: JNZ 0x1401f4ceb,0x1401f4ce3: MOV dword ptr [RBX], 0x0,0x1401f4ce9: JMP 0x1401f4d4d,0x1401f4ceb: TEST EAX, EAX,0x1401f4ced: JNZ 0x1401f4d47,0x1401f4cef: MOV RCX, qword ptr [RBP + 0x37],0x1401f4cf3: TEST RCX, RCX,0x1401f4cf6: JZ 0x1401f4d47,0x1401f4cf8: LEA RAX, [RBP + 0x27],0x1401f4cfc: CMP qword ptr [RBP + 0x3f], 0xf,0x1401f4d01: CMOVA RAX, qword ptr [RBP + 0x27],0x1401f4d06: MOV qword ptr [RBP + -0x49], RAX,0x1401f4d0a: MOV qword ptr [RBP + -0x41], RCX,0x1401f4d0e: LEA RDX, [RBP + -0x49],0x1401f4d12: LEA RCX, [RBP + -0x39],0x1401f4d16: CALL 0x140309020,0x1401f4d1b: CMP byte ptr [RBP + -0x9], 0x0,0x1401f4d1f: JZ 0x1401f4d47,0x1401f4d21: MOV dword ptr [RBX], 0x1,0x1401f4d27: LEA RCX, [RBX + 0x8],0x1401f4d2b: LEA RDX, [RBP + -0x39],0x1401f4d2f: CALL 0x1401f0910,0x1401f4d34: CMP byte ptr [RBP + -0x9], 0x0,0x1401f4d38: JZ 0x1401f4d51,0x1401f4d3a: XOR EDX, EDX,0x1401f4d3c: LEA RCX, [RBP + -0x39],0x1401f4d40: CALL 0x1401f2780,0x1401f4d45: JMP 0x1401f4d51,0x1401f4d47: MOV dword ptr [RBX], 0x2,0x1401f4d4d: MOV byte ptr [RBX + 0x38], 0x0,0x1401f4d51: LEA RCX, [RBP + 0x27],0x1401f4d55: CALL 0x140005540,0x1401f4d5a: NOP,0x1401f4d5b: LEA RCX, [RBP + -0x1],0x1401f4d5f: CALL 0x1400055b0,0x1401f4d64: MOV RAX, RBX,0x1401f4d67: MOV RCX, qword ptr [RBP + 0x47],0x1401f4d6b: XOR RCX, RSP,0x1401f4d6e: CALL 0x140327740,0x1401f4d73: MOV RBX, qword ptr [RSP + 0xe8],0x1401f4d7b: ADD RSP, 0xd0,0x1401f4d82: POP RBP,0x1401f4d83: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f6280 | FUN_1401f6280 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140005540 | FUN_140005540           | [object Object] | [object Object] |
| 0x1400055b0 | FUN_1400055b0           | [object Object] | [object Object] |
| 0x140036dc0 | FUN_140036dc0           | [object Object] | [object Object] |
| 0x1401f0910 | FUN_1401f0910           | [object Object] | [object Object] |
| 0x1401f2780 | FUN_1401f2780           | [object Object] | [object Object] |
| 0x1401f4800 | FUN_1401f4800           | [object Object] | [object Object] |
| 0x140309020 | FUN_140309020           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f31b1    | 0x1401f4c80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f67c7    | 0x1401f4c80    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df9f0    | 0x1401f4c80    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4c80    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401f4c86    | stack:0xffffffffffffffa1 | [object Object]  |                  | [object Object] |
| 0x1401f4c92    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f4c9c    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f4ca3    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x1401f4ca7    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f4cab    | 0x1401f4800              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cb1    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f4cb6    | 0x1401f4cc7              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cc2    | 0x1401f4d5b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ccd    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f4cd1    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f4cd5    | 0x140036dc0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cdb    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f4ce1    | 0x1401f4ceb              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ce9    | 0x1401f4d4d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ced    | 0x1401f4d47              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cef    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f4cf6    | 0x1401f4d47              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cf8    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4cfc    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f4d01    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4d06    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x1401f4d0a    | stack:0xffffffffffffff60 | [object Object]  |                  | [object Object] |
| 0x1401f4d0e    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x1401f4d12    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x1401f4d16    | 0x140309020              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d1b    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4d1f    | 0x1401f4d47              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d2b    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x1401f4d2f    | 0x1401f0910              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d34    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4d38    | 0x1401f4d51              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d3c    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x1401f4d40    | 0x1401f2780              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d45    | 0x1401f4d51              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d51    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4d55    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d5b    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f4d5f    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d67    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f4d6e    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d73    | stack:0x8                | [object Object]  |                  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140005540 | FUN_140005540           | 0x1401f4d55    |
| 0x1400055b0 | FUN_1400055b0           | 0x1401f4d5f    |
| 0x140036dc0 | FUN_140036dc0           | 0x1401f4cd5    |
| 0x1401f0910 | FUN_1401f0910           | 0x1401f4d2f    |
| 0x1401f2780 | FUN_1401f2780           | 0x1401f4d40    |
| 0x1401f4800 | FUN_1401f4800           | 0x1401f4cab    |
| 0x1401f4cc7 | LAB_1401f4cc7           | 0x1401f4cb6    |
| 0x1401f4ceb | LAB_1401f4ceb           | 0x1401f4ce1    |
| 0x1401f4d47 | LAB_1401f4d47           | 0x1401f4ced    |
| 0x1401f4d47 | LAB_1401f4d47           | 0x1401f4cf6    |
| 0x1401f4d47 | LAB_1401f4d47           | 0x1401f4d1f    |
| 0x1401f4d4d | LAB_1401f4d4d           | 0x1401f4ce9    |
| 0x1401f4d51 | LAB_1401f4d51           | 0x1401f4d38    |
| 0x1401f4d51 | LAB_1401f4d51           | 0x1401f4d45    |
| 0x1401f4d5b | LAB_1401f4d5b           | 0x1401f4cc2    |
| 0x140309020 | FUN_140309020           | 0x1401f4d16    |
| 0x140327740 | __security_check_cookie | 0x1401f4d6e    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f4c92    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4c80 | 0x1401f4cb8 | 0x1401f4cb8,0x1401f4cc7 |
| 0x1401f4cb8 | 0x1401f4cc7 | 0x1401f4d5b             |
| 0x1401f4cc7 | 0x1401f4ce3 | 0x1401f4ce3,0x1401f4ceb |
| 0x1401f4ce3 | 0x1401f4ceb | 0x1401f4d4d             |
| 0x1401f4ceb | 0x1401f4cef | 0x1401f4cef,0x1401f4d47 |
| 0x1401f4cef | 0x1401f4cf8 | 0x1401f4cf8,0x1401f4d47 |
| 0x1401f4cf8 | 0x1401f4d21 | 0x1401f4d21,0x1401f4d47 |
| 0x1401f4d21 | 0x1401f4d3a | 0x1401f4d3a,0x1401f4d51 |
| 0x1401f4d3a | 0x1401f4d47 | 0x1401f4d51             |
| 0x1401f4d47 | 0x1401f4d4d | 0x1401f4d4d             |
| 0x1401f4d4d | 0x1401f4d51 | 0x1401f4d51             |
| 0x1401f4d51 | 0x1401f4d5b | 0x1401f4d5b             |
| 0x1401f4d5b | 0x1401f4d84 |                         |

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

undefined8 * * *

## raw_result.value.native_api.return_type.size_bytes

8

## raw_result.value.native_api.return_type.storage

RAX:8

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                             |
|------------------|-------------------------|----------------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.              |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined8 * * *. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters

| role      | ordinal | name    | data_type        | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|------------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | undefined8 * * * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x1401f4c8b#663 | 0x1401f4c8b | 663      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4c99#20  | 0x1401f4c99 | 20       | INT_XOR      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4c99#680 | 0x1401f4c99 | 680      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4ca7#664 | 0x1401f4ca7 | 664      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#38  | 0x1401f4cab | 38       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4cab#510 | 0x1401f4cab | 510      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#550 | 0x1401f4cab | 550      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#561 | 0x1401f4cab | 561      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#572 | 0x1401f4cab | 572      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#583 | 0x1401f4cab | 583      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#594 | 0x1401f4cab | 594      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#605 | 0x1401f4cab | 605      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#616 | 0x1401f4cab | 616      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#627 | 0x1401f4cab | 627      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#638 | 0x1401f4cab | 638      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#679 | 0x1401f4cab | 679      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4cb1#46  | 0x1401f4cb1 | 46       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cb6#52  | 0x1401f4cb6 | 52       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4cb8#54  | 0x1401f4cb8 | 54       | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4cb8#518 | 0x1401f4cb8 | 518      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cb8#685 | 0x1401f4cb8 | 685      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4cbe#57  | 0x1401f4cbe | 57       | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4cbe#519 | 0x1401f4cbe | 519      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cbe#665 | 0x1401f4cbe | 665      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4cbe#686 | 0x1401f4cbe | 686      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4cc2#58  | 0x1401f4cc2 | 58       | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f4ccd#666 | 0x1401f4ccd | 666      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd1#667 | 0x1401f4cd1 | 667      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#106 | 0x1401f4cd5 | 106      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f4cd5#511 | 0x1401f4cd5 | 511      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#551 | 0x1401f4cd5 | 551      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#562 | 0x1401f4cd5 | 562      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#573 | 0x1401f4cd5 | 573      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#595 | 0x1401f4cd5 | 595      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#606 | 0x1401f4cd5 | 606      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#617 | 0x1401f4cd5 | 617      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#628 | 0x1401f4cd5 | 628      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#639 | 0x1401f4cd5 | 639      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cde#116 | 0x1401f4cde | 116      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ce1#122 | 0x1401f4ce1 | 122      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4ce3#124 | 0x1401f4ce3 | 124      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4ce3#520 | 0x1401f4ce3 | 520      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ce3#683 | 0x1401f4ce3 | 683      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4ce9#125 | 0x1401f4ce9 | 125      | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f4ceb#138 | 0x1401f4ceb | 138      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ced#144 | 0x1401f4ced | 144      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4cf3#152 | 0x1401f4cf3 | 152      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cf6#157 | 0x1401f4cf6 | 157      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4cf8#668 | 0x1401f4cf8 | 668      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d01#173 | 0x1401f4d01 | 173      | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d01#178 | 0x1401f4d01 | 178      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d01#677 | 0x1401f4d01 | 677      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d01#678 | 0x1401f4d01 | 678      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d06#378 | 0x1401f4d06 | 378      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d0a#185 | 0x1401f4d0a | 185      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d0e#669 | 0x1401f4d0e | 669      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d12#670 | 0x1401f4d12 | 670      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d16#192 | 0x1401f4d16 | 192      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d16#512 | 0x1401f4d16 | 512      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d16#552 | 0x1401f4d16 | 552      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d16#563 | 0x1401f4d16 | 563      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d16#574 | 0x1401f4d16 | 574      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d16#640 | 0x1401f4d16 | 640      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d1b#200 | 0x1401f4d1b | 200      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d1f#205 | 0x1401f4d1f | 205      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d21#207 | 0x1401f4d21 | 207      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d21#522 | 0x1401f4d21 | 522      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d21#682 | 0x1401f4d21 | 682      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d27#671 | 0x1401f4d27 | 671      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d2b#672 | 0x1401f4d2b | 672      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d2f#214 | 0x1401f4d2f | 214      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d2f#513 | 0x1401f4d2f | 513      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d2f#553 | 0x1401f4d2f | 553      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d2f#564 | 0x1401f4d2f | 564      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d2f#575 | 0x1401f4d2f | 575      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d2f#641 | 0x1401f4d2f | 641      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d34#222 | 0x1401f4d34 | 222      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d38#227 | 0x1401f4d38 | 227      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d3c#673 | 0x1401f4d3c | 673      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d40#242 | 0x1401f4d40 | 242      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d40#514 | 0x1401f4d40 | 514      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d40#554 | 0x1401f4d40 | 554      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d40#565 | 0x1401f4d40 | 565      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d40#642 | 0x1401f4d40 | 642      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d45#243 | 0x1401f4d45 | 243      | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f4d47#245 | 0x1401f4d47 | 245      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d47#523 | 0x1401f4d47 | 523      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d47#525 | 0x1401f4d47 | 525      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d47#558 | 0x1401f4d47 | 558      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d47#569 | 0x1401f4d47 | 569      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d47#646 | 0x1401f4d47 | 646      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d47#681 | 0x1401f4d47 | 681      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d4d#128 | 0x1401f4d4d | 128      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d4d#521 | 0x1401f4d4d | 521      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d4d#526 | 0x1401f4d4d | 526      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d4d#559 | 0x1401f4d4d | 559      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d4d#570 | 0x1401f4d4d | 570      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d4d#647 | 0x1401f4d4d | 647      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d4d#674 | 0x1401f4d4d | 674      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d4d#684 | 0x1401f4d4d | 684      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d51#524 | 0x1401f4d51 | 524      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d51#557 | 0x1401f4d51 | 557      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d51#568 | 0x1401f4d51 | 568      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d51#645 | 0x1401f4d51 | 645      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d51#675 | 0x1401f4d51 | 675      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d55#133 | 0x1401f4d55 | 133      | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d55#515 | 0x1401f4d55 | 515      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d55#555 | 0x1401f4d55 | 555      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d55#566 | 0x1401f4d55 | 566      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d55#643 | 0x1401f4d55 | 643      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5b#527 | 0x1401f4d5b | 527      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5b#560 | 0x1401f4d5b | 560      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5b#571 | 0x1401f4d5b | 571      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5b#648 | 0x1401f4d5b | 648      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5b#676 | 0x1401f4d5b | 676      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5f#63  | 0x1401f4d5f | 63       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d5f#516 | 0x1401f4d5f | 516      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5f#556 | 0x1401f4d5f | 556      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5f#567 | 0x1401f4d5f | 567      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5f#644 | 0x1401f4d5f | 644      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d64#64  | 0x1401f4d64 | 64       | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d83#98  | 0x1401f4d83 | 98       | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d83#517 | 0x1401f4d83 | 517      | COPY         | true    | member           | [object Object]                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f4c99#680 | 0x1401f4c99#20  | 1           |
| 0x1401f4c8b#663 | 0x1401f4c99#680 | 0           |
| 0x1401f4ca7#664 | 0x1401f4cab#38  | 1           |
| 0x1401f4cab#679 | 0x1401f4cab#550 | 0           |
| 0x1401f4c99#20  | 0x1401f4cab#638 | 0           |
| 0x1401f4cab#583 | 0x1401f4cb1#46  | 0           |
| 0x1401f4cb1#46  | 0x1401f4cb6#52  | 1           |
| 0x1401f4cb8#685 | 0x1401f4cb8#54  | 1           |
| 0x1401f4cab#510 | 0x1401f4cb8#518 | 0           |
| 0x1401f4cbe#686 | 0x1401f4cbe#57  | 1           |
| 0x1401f4cb8#518 | 0x1401f4cbe#519 | 0           |
| 0x1401f4cbe#665 | 0x1401f4cbe#686 | 0           |
| 0x1401f4cd1#667 | 0x1401f4cd5#106 | 1           |
| 0x1401f4ccd#666 | 0x1401f4cd5#106 | 2           |
| 0x1401f4cab#510 | 0x1401f4cd5#511 | 0           |
| 0x1401f4cab#550 | 0x1401f4cd5#551 | 0           |
| 0x1401f4cab#561 | 0x1401f4cd5#562 | 0           |
| 0x1401f4cab#572 | 0x1401f4cd5#573 | 0           |
| 0x1401f4cab#594 | 0x1401f4cd5#595 | 0           |
| 0x1401f4cab#605 | 0x1401f4cd5#606 | 0           |
| 0x1401f4cab#616 | 0x1401f4cd5#617 | 0           |
| 0x1401f4cab#627 | 0x1401f4cd5#628 | 0           |
| 0x1401f4cab#638 | 0x1401f4cd5#639 | 0           |
| 0x1401f4cd5#595 | 0x1401f4cde#116 | 0           |
| 0x1401f4cde#116 | 0x1401f4ce1#122 | 1           |
| 0x1401f4ce3#683 | 0x1401f4ce3#124 | 1           |
| 0x1401f4cd5#511 | 0x1401f4ce3#520 | 0           |
| 0x1401f4cd5#595 | 0x1401f4ceb#138 | 0           |
| 0x1401f4ceb#138 | 0x1401f4ced#144 | 1           |
| 0x1401f4cd5#617 | 0x1401f4cf3#152 | 0           |
| 0x1401f4cf3#152 | 0x1401f4cf6#157 | 1           |
| 0x1401f4cd5#628 | 0x1401f4d01#173 | 1           |
| 0x1401f4d01#173 | 0x1401f4d01#178 | 1           |
| 0x1401f4cf8#668 | 0x1401f4d01#677 | 0           |
| 0x1401f4cd5#606 | 0x1401f4d01#678 | 0           |
| 0x1401f4d01#677 | 0x1401f4d06#378 | 0           |
| 0x1401f4d01#678 | 0x1401f4d06#378 | 1           |
| 0x1401f4cd5#617 | 0x1401f4d0a#185 | 0           |
| 0x1401f4d12#670 | 0x1401f4d16#192 | 1           |
| 0x1401f4d0e#669 | 0x1401f4d16#192 | 2           |
| 0x1401f4cd5#511 | 0x1401f4d16#512 | 0           |
| 0x1401f4d06#378 | 0x1401f4d16#552 | 0           |
| 0x1401f4d0a#185 | 0x1401f4d16#563 | 0           |
| 0x1401f4cd5#573 | 0x1401f4d16#574 | 0           |
| 0x1401f4cd5#639 | 0x1401f4d16#640 | 0           |
| 0x1401f4d16#574 | 0x1401f4d1b#200 | 0           |
| 0x1401f4d1b#200 | 0x1401f4d1f#205 | 1           |
| 0x1401f4d21#682 | 0x1401f4d21#207 | 1           |
| 0x1401f4d16#512 | 0x1401f4d21#522 | 0           |
| 0x1401f4d27#671 | 0x1401f4d2f#214 | 1           |
| 0x1401f4d2b#672 | 0x1401f4d2f#214 | 2           |
| 0x1401f4d21#522 | 0x1401f4d2f#513 | 0           |
| 0x1401f4d16#552 | 0x1401f4d2f#553 | 0           |
| 0x1401f4d16#563 | 0x1401f4d2f#564 | 0           |
| 0x1401f4d16#574 | 0x1401f4d2f#575 | 0           |
| 0x1401f4d16#640 | 0x1401f4d2f#641 | 0           |
| 0x1401f4d2f#575 | 0x1401f4d34#222 | 0           |
| 0x1401f4d34#222 | 0x1401f4d38#227 | 1           |
| 0x1401f4d3c#673 | 0x1401f4d40#242 | 1           |
| 0x1401f4d2f#513 | 0x1401f4d40#514 | 0           |
| 0x1401f4d2f#553 | 0x1401f4d40#554 | 0           |
| 0x1401f4d2f#564 | 0x1401f4d40#565 | 0           |
| 0x1401f4d2f#641 | 0x1401f4d40#642 | 0           |
| 0x1401f4d47#681 | 0x1401f4d47#245 | 1           |
| 0x1401f4d47#525 | 0x1401f4d47#523 | 0           |
| 0x1401f4cd5#511 | 0x1401f4d47#525 | 0           |
| 0x1401f4cd5#511 | 0x1401f4d47#525 | 1           |
| 0x1401f4d16#512 | 0x1401f4d47#525 | 2           |
| 0x1401f4cd5#551 | 0x1401f4d47#558 | 0           |
| 0x1401f4cd5#551 | 0x1401f4d47#558 | 1           |
| 0x1401f4d16#552 | 0x1401f4d47#558 | 2           |
| 0x1401f4cd5#562 | 0x1401f4d47#569 | 0           |
| 0x1401f4cd5#562 | 0x1401f4d47#569 | 1           |
| 0x1401f4d16#563 | 0x1401f4d47#569 | 2           |
| 0x1401f4cd5#639 | 0x1401f4d47#646 | 0           |
| 0x1401f4cd5#639 | 0x1401f4d47#646 | 1           |
| 0x1401f4d16#640 | 0x1401f4d47#646 | 2           |
| 0x1401f4d4d#684 | 0x1401f4d4d#128 | 1           |
| 0x1401f4d4d#526 | 0x1401f4d4d#521 | 0           |
| 0x1401f4ce3#520 | 0x1401f4d4d#526 | 0           |
| 0x1401f4d47#523 | 0x1401f4d4d#526 | 1           |
| 0x1401f4cd5#551 | 0x1401f4d4d#559 | 0           |
| 0x1401f4d47#558 | 0x1401f4d4d#559 | 1           |
| 0x1401f4cd5#562 | 0x1401f4d4d#570 | 0           |
| 0x1401f4d47#569 | 0x1401f4d4d#570 | 1           |
| 0x1401f4cd5#639 | 0x1401f4d4d#647 | 0           |
| 0x1401f4d47#646 | 0x1401f4d4d#647 | 1           |
| 0x1401f4d4d#674 | 0x1401f4d4d#684 | 0           |
| 0x1401f4d4d#521 | 0x1401f4d51#524 | 0           |
| 0x1401f4d2f#513 | 0x1401f4d51#524 | 1           |
| 0x1401f4d40#514 | 0x1401f4d51#524 | 2           |
| 0x1401f4d4d#559 | 0x1401f4d51#557 | 0           |
| 0x1401f4d2f#553 | 0x1401f4d51#557 | 1           |
| 0x1401f4d40#554 | 0x1401f4d51#557 | 2           |
| 0x1401f4d4d#570 | 0x1401f4d51#568 | 0           |
| 0x1401f4d2f#564 | 0x1401f4d51#568 | 1           |
| 0x1401f4d40#565 | 0x1401f4d51#568 | 2           |
| 0x1401f4d4d#647 | 0x1401f4d51#645 | 0           |
| 0x1401f4d2f#641 | 0x1401f4d51#645 | 1           |
| 0x1401f4d40#642 | 0x1401f4d51#645 | 2           |
| 0x1401f4d51#675 | 0x1401f4d55#133 | 1           |
| 0x1401f4d51#524 | 0x1401f4d55#515 | 0           |
| 0x1401f4d51#557 | 0x1401f4d55#555 | 0           |
| 0x1401f4d51#568 | 0x1401f4d55#566 | 0           |
| 0x1401f4d51#645 | 0x1401f4d55#643 | 0           |
| 0x1401f4cbe#519 | 0x1401f4d5b#527 | 0           |
| 0x1401f4d55#515 | 0x1401f4d5b#527 | 1           |
| 0x1401f4cab#550 | 0x1401f4d5b#560 | 0           |
| 0x1401f4d55#555 | 0x1401f4d5b#560 | 1           |
| 0x1401f4cab#561 | 0x1401f4d5b#571 | 0           |
| 0x1401f4d55#566 | 0x1401f4d5b#571 | 1           |
| 0x1401f4cab#638 | 0x1401f4d5b#648 | 0           |
| 0x1401f4d55#643 | 0x1401f4d5b#648 | 1           |
| 0x1401f4d5b#676 | 0x1401f4d5f#63  | 1           |
| 0x1401f4d5b#527 | 0x1401f4d5f#516 | 0           |
| 0x1401f4d5b#560 | 0x1401f4d5f#556 | 0           |
| 0x1401f4d5b#571 | 0x1401f4d5f#567 | 0           |
| 0x1401f4d5b#648 | 0x1401f4d5f#644 | 0           |
| 0x1401f4d64#64  | 0x1401f4d83#98  | 1           |
| 0x1401f4d5f#516 | 0x1401f4d83#517 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type         |
|---------|---------|-------------------|
| 0       | param_1 | /undefined8 * * * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f4cab#679 | 0           |
| 0       | 0x1401f4cb8#685 | 0           |
| 0       | 0x1401f4cbe#665 | 0           |
| 0       | 0x1401f4ce3#683 | 0           |
| 0       | 0x1401f4d21#682 | 0           |
| 0       | 0x1401f4d27#671 | 0           |
| 0       | 0x1401f4d47#681 | 0           |
| 0       | 0x1401f4d4d#674 | 0           |
| 0       | 0x1401f4d64#64  | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f4cab#38  | direct_call        | 0             |             |
| 0x1401f4cb6#52  | conditional_branch |               | 1           |
| 0x1401f4cb8#54  | memory_write       | 1             | 2           |
| 0x1401f4cbe#57  | memory_write       | 1             | 2           |
| 0x1401f4cd5#106 | direct_call        | 0             |             |
| 0x1401f4ce1#122 | conditional_branch |               | 1           |
| 0x1401f4ce3#124 | memory_write       | 1             | 2           |
| 0x1401f4ced#144 | conditional_branch |               | 1           |
| 0x1401f4cf6#157 | conditional_branch |               | 1           |
| 0x1401f4d01#178 | conditional_branch |               | 1           |
| 0x1401f4d16#192 | direct_call        | 0             |             |
| 0x1401f4d1f#205 | conditional_branch |               | 1           |
| 0x1401f4d21#207 | memory_write       | 1             | 2           |
| 0x1401f4d2f#214 | direct_call        | 0             |             |
| 0x1401f4d38#227 | conditional_branch |               | 1           |
| 0x1401f4d40#242 | direct_call        | 0             |             |
| 0x1401f4d47#245 | memory_write       | 1             | 2           |
| 0x1401f4d4d#128 | memory_write       | 1             | 2           |
| 0x1401f4d55#133 | direct_call        | 0             |             |
| 0x1401f4d5f#63  | direct_call        | 0             |             |

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

0x1401f4c80

## normalized_result.procedure.name

FUN_1401f4c80

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
| 0x1401f4c80 | 0x1401f4d83 |

## normalized_result.procedure.body.total_bytes

260

## normalized_result.procedure.body.span_bytes

260

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f4c80()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8   | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8   | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8   | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8   | ghidra-function-database |
| undefined4 local_40 @ Stack[-0x40]:4   | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8   | ghidra-function-database |
| undefined local_5f @ Stack[-0x5f]:1    | ghidra-function-database |
| undefined local_60 @ Stack[-0x60]:1    | ghidra-function-database |
| undefined1 local_68 @ Stack[-0x68]:1   | ghidra-function-database |
| undefined local_98 @ Stack[-0x98]:1    | ghidra-function-database |
| undefined8 local_a0 @ Stack[-0xa0]:8   | ghidra-function-database |
| undefined8 local_a8 @ Stack[-0xa8]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *** FUN_1401f4c80(undefined8 ***param_1)

{
  undefined1 auStack_d8 [48];
  undefined8 **local_a8;
  longlong local_a0;
  undefined1 local_98 [48];
  char local_68;
  undefined1 local_60 [16];
  longlong local_50;
  int local_40 [2];
  undefined8 **local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_d8;
  local_a8 = param_1;
  FUN_1401f4800(local_60);
  if (local_50 == 0) {
    *(undefined4 *)param_1 = 2;
    *(undefined1 *)(param_1 + 7) = 0;
    goto LAB_1401f4d5b;
  }
  FUN_140036dc0(local_40,local_60,0x10000);
  if (local_40[0] == 1) {
    *(undefined4 *)param_1 = 0;
LAB_1401f4d4d:
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    if ((local_40[0] != 0) || (local_28 == 0)) {
LAB_1401f4d47:
      *(undefined4 *)param_1 = 2;
      goto LAB_1401f4d4d;
    }
    local_a8 = local_38;
    if (0xf < local_20) {
      local_a8 = local_38[0];
    }
    local_a0 = local_28;
    FUN_140309020(local_98,&local_a8);
    if (local_68 == '\0') goto LAB_1401f4d47;
    *(undefined4 *)param_1 = 1;
    FUN_1401f0910(param_1 + 1,local_98);
    if (local_68 != '\0') {
      FUN_1401f2780(local_98,0);
    }
  }
  FUN_140005540(local_38);
LAB_1401f4d5b:
  FUN_1400055b0(local_60);
  return param_1;
}



## normalized_result.assembly

0x1401f4c80: MOV qword ptr [RSP + 0x10], RBX,0x1401f4c85: PUSH RBP,0x1401f4c86: LEA RBP, [RSP + -0x57],0x1401f4c8b: SUB RSP, 0xd0,0x1401f4c92: MOV RAX, qword ptr [0x1404c7ac0],0x1401f4c99: XOR RAX, RSP,0x1401f4c9c: MOV qword ptr [RBP + 0x47], RAX,0x1401f4ca0: MOV RBX, RCX,0x1401f4ca3: MOV qword ptr [RBP + -0x49], RCX,0x1401f4ca7: LEA RCX, [RBP + -0x1],0x1401f4cab: CALL 0x1401f4800,0x1401f4cb0: NOP,0x1401f4cb1: CMP qword ptr [RBP + 0xf], 0x0,0x1401f4cb6: JNZ 0x1401f4cc7,0x1401f4cb8: MOV dword ptr [RBX], 0x2,0x1401f4cbe: MOV byte ptr [RBX + 0x38], 0x0,0x1401f4cc2: JMP 0x1401f4d5b,0x1401f4cc7: MOV R8D, 0x10000,0x1401f4ccd: LEA RDX, [RBP + -0x1],0x1401f4cd1: LEA RCX, [RBP + 0x1f],0x1401f4cd5: CALL 0x140036dc0,0x1401f4cda: NOP,0x1401f4cdb: MOV EAX, dword ptr [RBP + 0x1f],0x1401f4cde: CMP EAX, 0x1,0x1401f4ce1: JNZ 0x1401f4ceb,0x1401f4ce3: MOV dword ptr [RBX], 0x0,0x1401f4ce9: JMP 0x1401f4d4d,0x1401f4ceb: TEST EAX, EAX,0x1401f4ced: JNZ 0x1401f4d47,0x1401f4cef: MOV RCX, qword ptr [RBP + 0x37],0x1401f4cf3: TEST RCX, RCX,0x1401f4cf6: JZ 0x1401f4d47,0x1401f4cf8: LEA RAX, [RBP + 0x27],0x1401f4cfc: CMP qword ptr [RBP + 0x3f], 0xf,0x1401f4d01: CMOVA RAX, qword ptr [RBP + 0x27],0x1401f4d06: MOV qword ptr [RBP + -0x49], RAX,0x1401f4d0a: MOV qword ptr [RBP + -0x41], RCX,0x1401f4d0e: LEA RDX, [RBP + -0x49],0x1401f4d12: LEA RCX, [RBP + -0x39],0x1401f4d16: CALL 0x140309020,0x1401f4d1b: CMP byte ptr [RBP + -0x9], 0x0,0x1401f4d1f: JZ 0x1401f4d47,0x1401f4d21: MOV dword ptr [RBX], 0x1,0x1401f4d27: LEA RCX, [RBX + 0x8],0x1401f4d2b: LEA RDX, [RBP + -0x39],0x1401f4d2f: CALL 0x1401f0910,0x1401f4d34: CMP byte ptr [RBP + -0x9], 0x0,0x1401f4d38: JZ 0x1401f4d51,0x1401f4d3a: XOR EDX, EDX,0x1401f4d3c: LEA RCX, [RBP + -0x39],0x1401f4d40: CALL 0x1401f2780,0x1401f4d45: JMP 0x1401f4d51,0x1401f4d47: MOV dword ptr [RBX], 0x2,0x1401f4d4d: MOV byte ptr [RBX + 0x38], 0x0,0x1401f4d51: LEA RCX, [RBP + 0x27],0x1401f4d55: CALL 0x140005540,0x1401f4d5a: NOP,0x1401f4d5b: LEA RCX, [RBP + -0x1],0x1401f4d5f: CALL 0x1400055b0,0x1401f4d64: MOV RAX, RBX,0x1401f4d67: MOV RCX, qword ptr [RBP + 0x47],0x1401f4d6b: XOR RCX, RSP,0x1401f4d6e: CALL 0x140327740,0x1401f4d73: MOV RBX, qword ptr [RSP + 0xe8],0x1401f4d7b: ADD RSP, 0xd0,0x1401f4d82: POP RBP,0x1401f4d83: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f6280 | FUN_1401f6280 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140005540 | FUN_140005540           | [object Object] | [object Object] |
| 0x1400055b0 | FUN_1400055b0           | [object Object] | [object Object] |
| 0x140036dc0 | FUN_140036dc0           | [object Object] | [object Object] |
| 0x1401f0910 | FUN_1401f0910           | [object Object] | [object Object] |
| 0x1401f2780 | FUN_1401f2780           | [object Object] | [object Object] |
| 0x1401f4800 | FUN_1401f4800           | [object Object] | [object Object] |
| 0x140309020 | FUN_140309020           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f31b1    | 0x1401f4c80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f67c7    | 0x1401f4c80    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df9f0    | 0x1401f4c80    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4c80    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401f4c86    | stack:0xffffffffffffffa1 | [object Object]  |                  | [object Object] |
| 0x1401f4c92    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f4c9c    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f4ca3    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x1401f4ca7    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f4cab    | 0x1401f4800              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cb1    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f4cb6    | 0x1401f4cc7              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cc2    | 0x1401f4d5b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ccd    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f4cd1    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f4cd5    | 0x140036dc0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cdb    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f4ce1    | 0x1401f4ceb              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ce9    | 0x1401f4d4d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ced    | 0x1401f4d47              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cef    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f4cf6    | 0x1401f4d47              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4cf8    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4cfc    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f4d01    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4d06    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x1401f4d0a    | stack:0xffffffffffffff60 | [object Object]  |                  | [object Object] |
| 0x1401f4d0e    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x1401f4d12    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x1401f4d16    | 0x140309020              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d1b    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4d1f    | 0x1401f4d47              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d2b    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x1401f4d2f    | 0x1401f0910              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d34    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4d38    | 0x1401f4d51              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d3c    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x1401f4d40    | 0x1401f2780              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d45    | 0x1401f4d51              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d51    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4d55    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d5b    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f4d5f    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d67    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f4d6e    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4d73    | stack:0x8                | [object Object]  |                  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140005540 | FUN_140005540           | 0x1401f4d55    |
| 0x1400055b0 | FUN_1400055b0           | 0x1401f4d5f    |
| 0x140036dc0 | FUN_140036dc0           | 0x1401f4cd5    |
| 0x1401f0910 | FUN_1401f0910           | 0x1401f4d2f    |
| 0x1401f2780 | FUN_1401f2780           | 0x1401f4d40    |
| 0x1401f4800 | FUN_1401f4800           | 0x1401f4cab    |
| 0x1401f4cc7 | LAB_1401f4cc7           | 0x1401f4cb6    |
| 0x1401f4ceb | LAB_1401f4ceb           | 0x1401f4ce1    |
| 0x1401f4d47 | LAB_1401f4d47           | 0x1401f4ced    |
| 0x1401f4d47 | LAB_1401f4d47           | 0x1401f4cf6    |
| 0x1401f4d47 | LAB_1401f4d47           | 0x1401f4d1f    |
| 0x1401f4d4d | LAB_1401f4d4d           | 0x1401f4ce9    |
| 0x1401f4d51 | LAB_1401f4d51           | 0x1401f4d38    |
| 0x1401f4d51 | LAB_1401f4d51           | 0x1401f4d45    |
| 0x1401f4d5b | LAB_1401f4d5b           | 0x1401f4cc2    |
| 0x140309020 | FUN_140309020           | 0x1401f4d16    |
| 0x140327740 | __security_check_cookie | 0x1401f4d6e    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f4c92    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4c80 | 0x1401f4cb8 | 0x1401f4cb8,0x1401f4cc7 |
| 0x1401f4cb8 | 0x1401f4cc7 | 0x1401f4d5b             |
| 0x1401f4cc7 | 0x1401f4ce3 | 0x1401f4ce3,0x1401f4ceb |
| 0x1401f4ce3 | 0x1401f4ceb | 0x1401f4d4d             |
| 0x1401f4ceb | 0x1401f4cef | 0x1401f4cef,0x1401f4d47 |
| 0x1401f4cef | 0x1401f4cf8 | 0x1401f4cf8,0x1401f4d47 |
| 0x1401f4cf8 | 0x1401f4d21 | 0x1401f4d21,0x1401f4d47 |
| 0x1401f4d21 | 0x1401f4d3a | 0x1401f4d3a,0x1401f4d51 |
| 0x1401f4d3a | 0x1401f4d47 | 0x1401f4d51             |
| 0x1401f4d47 | 0x1401f4d4d | 0x1401f4d4d             |
| 0x1401f4d4d | 0x1401f4d51 | 0x1401f4d51             |
| 0x1401f4d51 | 0x1401f4d5b | 0x1401f4d5b             |
| 0x1401f4d5b | 0x1401f4d84 |                         |

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

undefined8 * * *

## normalized_result.native_api.return_type.size_bytes

8

## normalized_result.native_api.return_type.storage

RAX:8

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                             |
|------------------|-------------------------|----------------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.              |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined8 * * *. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters

| ordinal | name    | data_type        | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|------------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | undefined8 * * * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x1401f4c8b#663 | 0x1401f4c8b | 663      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4c99#20  | 0x1401f4c99 | 20       | INT_XOR      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4c99#680 | 0x1401f4c99 | 680      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4ca7#664 | 0x1401f4ca7 | 664      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#38  | 0x1401f4cab | 38       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4cab#510 | 0x1401f4cab | 510      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#550 | 0x1401f4cab | 550      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#561 | 0x1401f4cab | 561      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#572 | 0x1401f4cab | 572      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#583 | 0x1401f4cab | 583      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#594 | 0x1401f4cab | 594      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#605 | 0x1401f4cab | 605      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#616 | 0x1401f4cab | 616      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#627 | 0x1401f4cab | 627      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#638 | 0x1401f4cab | 638      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cab#679 | 0x1401f4cab | 679      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4cb1#46  | 0x1401f4cb1 | 46       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cb6#52  | 0x1401f4cb6 | 52       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4cb8#54  | 0x1401f4cb8 | 54       | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4cb8#518 | 0x1401f4cb8 | 518      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cb8#685 | 0x1401f4cb8 | 685      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4cbe#57  | 0x1401f4cbe | 57       | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4cbe#519 | 0x1401f4cbe | 519      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cbe#665 | 0x1401f4cbe | 665      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4cbe#686 | 0x1401f4cbe | 686      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4cc2#58  | 0x1401f4cc2 | 58       | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f4ccd#666 | 0x1401f4ccd | 666      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd1#667 | 0x1401f4cd1 | 667      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#106 | 0x1401f4cd5 | 106      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f4cd5#511 | 0x1401f4cd5 | 511      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#551 | 0x1401f4cd5 | 551      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#562 | 0x1401f4cd5 | 562      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#573 | 0x1401f4cd5 | 573      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#595 | 0x1401f4cd5 | 595      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#606 | 0x1401f4cd5 | 606      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#617 | 0x1401f4cd5 | 617      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#628 | 0x1401f4cd5 | 628      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cd5#639 | 0x1401f4cd5 | 639      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cde#116 | 0x1401f4cde | 116      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ce1#122 | 0x1401f4ce1 | 122      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4ce3#124 | 0x1401f4ce3 | 124      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4ce3#520 | 0x1401f4ce3 | 520      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ce3#683 | 0x1401f4ce3 | 683      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4ce9#125 | 0x1401f4ce9 | 125      | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f4ceb#138 | 0x1401f4ceb | 138      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ced#144 | 0x1401f4ced | 144      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4cf3#152 | 0x1401f4cf3 | 152      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4cf6#157 | 0x1401f4cf6 | 157      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4cf8#668 | 0x1401f4cf8 | 668      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d01#173 | 0x1401f4d01 | 173      | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d01#178 | 0x1401f4d01 | 178      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d01#677 | 0x1401f4d01 | 677      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d01#678 | 0x1401f4d01 | 678      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d06#378 | 0x1401f4d06 | 378      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d0a#185 | 0x1401f4d0a | 185      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d0e#669 | 0x1401f4d0e | 669      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d12#670 | 0x1401f4d12 | 670      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d16#192 | 0x1401f4d16 | 192      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d16#512 | 0x1401f4d16 | 512      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d16#552 | 0x1401f4d16 | 552      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d16#563 | 0x1401f4d16 | 563      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d16#574 | 0x1401f4d16 | 574      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d16#640 | 0x1401f4d16 | 640      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d1b#200 | 0x1401f4d1b | 200      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d1f#205 | 0x1401f4d1f | 205      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d21#207 | 0x1401f4d21 | 207      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d21#522 | 0x1401f4d21 | 522      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d21#682 | 0x1401f4d21 | 682      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d27#671 | 0x1401f4d27 | 671      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d2b#672 | 0x1401f4d2b | 672      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d2f#214 | 0x1401f4d2f | 214      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d2f#513 | 0x1401f4d2f | 513      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d2f#553 | 0x1401f4d2f | 553      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d2f#564 | 0x1401f4d2f | 564      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d2f#575 | 0x1401f4d2f | 575      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d2f#641 | 0x1401f4d2f | 641      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d34#222 | 0x1401f4d34 | 222      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d38#227 | 0x1401f4d38 | 227      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d3c#673 | 0x1401f4d3c | 673      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d40#242 | 0x1401f4d40 | 242      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d40#514 | 0x1401f4d40 | 514      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d40#554 | 0x1401f4d40 | 554      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d40#565 | 0x1401f4d40 | 565      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d40#642 | 0x1401f4d40 | 642      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d45#243 | 0x1401f4d45 | 243      | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f4d47#245 | 0x1401f4d47 | 245      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d47#523 | 0x1401f4d47 | 523      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d47#525 | 0x1401f4d47 | 525      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d47#558 | 0x1401f4d47 | 558      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d47#569 | 0x1401f4d47 | 569      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d47#646 | 0x1401f4d47 | 646      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d47#681 | 0x1401f4d47 | 681      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d4d#128 | 0x1401f4d4d | 128      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4d4d#521 | 0x1401f4d4d | 521      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d4d#526 | 0x1401f4d4d | 526      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d4d#559 | 0x1401f4d4d | 559      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d4d#570 | 0x1401f4d4d | 570      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d4d#647 | 0x1401f4d4d | 647      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d4d#674 | 0x1401f4d4d | 674      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d4d#684 | 0x1401f4d4d | 684      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d51#524 | 0x1401f4d51 | 524      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d51#557 | 0x1401f4d51 | 557      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d51#568 | 0x1401f4d51 | 568      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d51#645 | 0x1401f4d51 | 645      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4d51#675 | 0x1401f4d51 | 675      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d55#133 | 0x1401f4d55 | 133      | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d55#515 | 0x1401f4d55 | 515      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d55#555 | 0x1401f4d55 | 555      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d55#566 | 0x1401f4d55 | 566      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d55#643 | 0x1401f4d55 | 643      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5b#527 | 0x1401f4d5b | 527      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5b#560 | 0x1401f4d5b | 560      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5b#571 | 0x1401f4d5b | 571      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5b#648 | 0x1401f4d5b | 648      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5b#676 | 0x1401f4d5b | 676      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5f#63  | 0x1401f4d5f | 63       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d5f#516 | 0x1401f4d5f | 516      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5f#556 | 0x1401f4d5f | 556      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5f#567 | 0x1401f4d5f | 567      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d5f#644 | 0x1401f4d5f | 644      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4d64#64  | 0x1401f4d64 | 64       | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4d83#98  | 0x1401f4d83 | 98       | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4d83#517 | 0x1401f4d83 | 517      | COPY         | true    | member           | [object Object]                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f4c99#680 | 0x1401f4c99#20  | 1           |
| 0x1401f4c8b#663 | 0x1401f4c99#680 | 0           |
| 0x1401f4ca7#664 | 0x1401f4cab#38  | 1           |
| 0x1401f4cab#679 | 0x1401f4cab#550 | 0           |
| 0x1401f4c99#20  | 0x1401f4cab#638 | 0           |
| 0x1401f4cab#583 | 0x1401f4cb1#46  | 0           |
| 0x1401f4cb1#46  | 0x1401f4cb6#52  | 1           |
| 0x1401f4cb8#685 | 0x1401f4cb8#54  | 1           |
| 0x1401f4cab#510 | 0x1401f4cb8#518 | 0           |
| 0x1401f4cbe#686 | 0x1401f4cbe#57  | 1           |
| 0x1401f4cb8#518 | 0x1401f4cbe#519 | 0           |
| 0x1401f4cbe#665 | 0x1401f4cbe#686 | 0           |
| 0x1401f4cd1#667 | 0x1401f4cd5#106 | 1           |
| 0x1401f4ccd#666 | 0x1401f4cd5#106 | 2           |
| 0x1401f4cab#510 | 0x1401f4cd5#511 | 0           |
| 0x1401f4cab#550 | 0x1401f4cd5#551 | 0           |
| 0x1401f4cab#561 | 0x1401f4cd5#562 | 0           |
| 0x1401f4cab#572 | 0x1401f4cd5#573 | 0           |
| 0x1401f4cab#594 | 0x1401f4cd5#595 | 0           |
| 0x1401f4cab#605 | 0x1401f4cd5#606 | 0           |
| 0x1401f4cab#616 | 0x1401f4cd5#617 | 0           |
| 0x1401f4cab#627 | 0x1401f4cd5#628 | 0           |
| 0x1401f4cab#638 | 0x1401f4cd5#639 | 0           |
| 0x1401f4cd5#595 | 0x1401f4cde#116 | 0           |
| 0x1401f4cde#116 | 0x1401f4ce1#122 | 1           |
| 0x1401f4ce3#683 | 0x1401f4ce3#124 | 1           |
| 0x1401f4cd5#511 | 0x1401f4ce3#520 | 0           |
| 0x1401f4cd5#595 | 0x1401f4ceb#138 | 0           |
| 0x1401f4ceb#138 | 0x1401f4ced#144 | 1           |
| 0x1401f4cd5#617 | 0x1401f4cf3#152 | 0           |
| 0x1401f4cf3#152 | 0x1401f4cf6#157 | 1           |
| 0x1401f4cd5#628 | 0x1401f4d01#173 | 1           |
| 0x1401f4d01#173 | 0x1401f4d01#178 | 1           |
| 0x1401f4cf8#668 | 0x1401f4d01#677 | 0           |
| 0x1401f4cd5#606 | 0x1401f4d01#678 | 0           |
| 0x1401f4d01#677 | 0x1401f4d06#378 | 0           |
| 0x1401f4d01#678 | 0x1401f4d06#378 | 1           |
| 0x1401f4cd5#617 | 0x1401f4d0a#185 | 0           |
| 0x1401f4d12#670 | 0x1401f4d16#192 | 1           |
| 0x1401f4d0e#669 | 0x1401f4d16#192 | 2           |
| 0x1401f4cd5#511 | 0x1401f4d16#512 | 0           |
| 0x1401f4d06#378 | 0x1401f4d16#552 | 0           |
| 0x1401f4d0a#185 | 0x1401f4d16#563 | 0           |
| 0x1401f4cd5#573 | 0x1401f4d16#574 | 0           |
| 0x1401f4cd5#639 | 0x1401f4d16#640 | 0           |
| 0x1401f4d16#574 | 0x1401f4d1b#200 | 0           |
| 0x1401f4d1b#200 | 0x1401f4d1f#205 | 1           |
| 0x1401f4d21#682 | 0x1401f4d21#207 | 1           |
| 0x1401f4d16#512 | 0x1401f4d21#522 | 0           |
| 0x1401f4d27#671 | 0x1401f4d2f#214 | 1           |
| 0x1401f4d2b#672 | 0x1401f4d2f#214 | 2           |
| 0x1401f4d21#522 | 0x1401f4d2f#513 | 0           |
| 0x1401f4d16#552 | 0x1401f4d2f#553 | 0           |
| 0x1401f4d16#563 | 0x1401f4d2f#564 | 0           |
| 0x1401f4d16#574 | 0x1401f4d2f#575 | 0           |
| 0x1401f4d16#640 | 0x1401f4d2f#641 | 0           |
| 0x1401f4d2f#575 | 0x1401f4d34#222 | 0           |
| 0x1401f4d34#222 | 0x1401f4d38#227 | 1           |
| 0x1401f4d3c#673 | 0x1401f4d40#242 | 1           |
| 0x1401f4d2f#513 | 0x1401f4d40#514 | 0           |
| 0x1401f4d2f#553 | 0x1401f4d40#554 | 0           |
| 0x1401f4d2f#564 | 0x1401f4d40#565 | 0           |
| 0x1401f4d2f#641 | 0x1401f4d40#642 | 0           |
| 0x1401f4d47#681 | 0x1401f4d47#245 | 1           |
| 0x1401f4d47#525 | 0x1401f4d47#523 | 0           |
| 0x1401f4cd5#511 | 0x1401f4d47#525 | 0           |
| 0x1401f4cd5#511 | 0x1401f4d47#525 | 1           |
| 0x1401f4d16#512 | 0x1401f4d47#525 | 2           |
| 0x1401f4cd5#551 | 0x1401f4d47#558 | 0           |
| 0x1401f4cd5#551 | 0x1401f4d47#558 | 1           |
| 0x1401f4d16#552 | 0x1401f4d47#558 | 2           |
| 0x1401f4cd5#562 | 0x1401f4d47#569 | 0           |
| 0x1401f4cd5#562 | 0x1401f4d47#569 | 1           |
| 0x1401f4d16#563 | 0x1401f4d47#569 | 2           |
| 0x1401f4cd5#639 | 0x1401f4d47#646 | 0           |
| 0x1401f4cd5#639 | 0x1401f4d47#646 | 1           |
| 0x1401f4d16#640 | 0x1401f4d47#646 | 2           |
| 0x1401f4d4d#684 | 0x1401f4d4d#128 | 1           |
| 0x1401f4d4d#526 | 0x1401f4d4d#521 | 0           |
| 0x1401f4ce3#520 | 0x1401f4d4d#526 | 0           |
| 0x1401f4d47#523 | 0x1401f4d4d#526 | 1           |
| 0x1401f4cd5#551 | 0x1401f4d4d#559 | 0           |
| 0x1401f4d47#558 | 0x1401f4d4d#559 | 1           |
| 0x1401f4cd5#562 | 0x1401f4d4d#570 | 0           |
| 0x1401f4d47#569 | 0x1401f4d4d#570 | 1           |
| 0x1401f4cd5#639 | 0x1401f4d4d#647 | 0           |
| 0x1401f4d47#646 | 0x1401f4d4d#647 | 1           |
| 0x1401f4d4d#674 | 0x1401f4d4d#684 | 0           |
| 0x1401f4d4d#521 | 0x1401f4d51#524 | 0           |
| 0x1401f4d2f#513 | 0x1401f4d51#524 | 1           |
| 0x1401f4d40#514 | 0x1401f4d51#524 | 2           |
| 0x1401f4d4d#559 | 0x1401f4d51#557 | 0           |
| 0x1401f4d2f#553 | 0x1401f4d51#557 | 1           |
| 0x1401f4d40#554 | 0x1401f4d51#557 | 2           |
| 0x1401f4d4d#570 | 0x1401f4d51#568 | 0           |
| 0x1401f4d2f#564 | 0x1401f4d51#568 | 1           |
| 0x1401f4d40#565 | 0x1401f4d51#568 | 2           |
| 0x1401f4d4d#647 | 0x1401f4d51#645 | 0           |
| 0x1401f4d2f#641 | 0x1401f4d51#645 | 1           |
| 0x1401f4d40#642 | 0x1401f4d51#645 | 2           |
| 0x1401f4d51#675 | 0x1401f4d55#133 | 1           |
| 0x1401f4d51#524 | 0x1401f4d55#515 | 0           |
| 0x1401f4d51#557 | 0x1401f4d55#555 | 0           |
| 0x1401f4d51#568 | 0x1401f4d55#566 | 0           |
| 0x1401f4d51#645 | 0x1401f4d55#643 | 0           |
| 0x1401f4cbe#519 | 0x1401f4d5b#527 | 0           |
| 0x1401f4d55#515 | 0x1401f4d5b#527 | 1           |
| 0x1401f4cab#550 | 0x1401f4d5b#560 | 0           |
| 0x1401f4d55#555 | 0x1401f4d5b#560 | 1           |
| 0x1401f4cab#561 | 0x1401f4d5b#571 | 0           |
| 0x1401f4d55#566 | 0x1401f4d5b#571 | 1           |
| 0x1401f4cab#638 | 0x1401f4d5b#648 | 0           |
| 0x1401f4d55#643 | 0x1401f4d5b#648 | 1           |
| 0x1401f4d5b#676 | 0x1401f4d5f#63  | 1           |
| 0x1401f4d5b#527 | 0x1401f4d5f#516 | 0           |
| 0x1401f4d5b#560 | 0x1401f4d5f#556 | 0           |
| 0x1401f4d5b#571 | 0x1401f4d5f#567 | 0           |
| 0x1401f4d5b#648 | 0x1401f4d5f#644 | 0           |
| 0x1401f4d64#64  | 0x1401f4d83#98  | 1           |
| 0x1401f4d5f#516 | 0x1401f4d83#517 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f4cab#38  | direct_call        | 0             |             |
| 0x1401f4cb6#52  | conditional_branch |               | 1           |
| 0x1401f4cb8#54  | memory_write       | 1             | 2           |
| 0x1401f4cbe#57  | memory_write       | 1             | 2           |
| 0x1401f4cd5#106 | direct_call        | 0             |             |
| 0x1401f4ce1#122 | conditional_branch |               | 1           |
| 0x1401f4ce3#124 | memory_write       | 1             | 2           |
| 0x1401f4ced#144 | conditional_branch |               | 1           |
| 0x1401f4cf6#157 | conditional_branch |               | 1           |
| 0x1401f4d01#178 | conditional_branch |               | 1           |
| 0x1401f4d16#192 | direct_call        | 0             |             |
| 0x1401f4d1f#205 | conditional_branch |               | 1           |
| 0x1401f4d21#207 | memory_write       | 1             | 2           |
| 0x1401f4d2f#214 | direct_call        | 0             |             |
| 0x1401f4d38#227 | conditional_branch |               | 1           |
| 0x1401f4d40#242 | direct_call        | 0             |             |
| 0x1401f4d47#245 | memory_write       | 1             | 2           |
| 0x1401f4d4d#128 | memory_write       | 1             | 2           |
| 0x1401f4d55#133 | direct_call        | 0             |             |
| 0x1401f4d5f#63  | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type         |
|---------|---------|-------------------|
| 0       | param_1 | /undefined8 * * * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f4cab#679 | 0           |
| 0       | 0x1401f4cb8#685 | 0           |
| 0       | 0x1401f4cbe#665 | 0           |
| 0       | 0x1401f4ce3#683 | 0           |
| 0       | 0x1401f4d21#682 | 0           |
| 0       | 0x1401f4d27#671 | 0           |
| 0       | 0x1401f4d47#681 | 0           |
| 0       | 0x1401f4d4d#674 | 0           |
| 0       | 0x1401f4d64#64  | 0           |

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

