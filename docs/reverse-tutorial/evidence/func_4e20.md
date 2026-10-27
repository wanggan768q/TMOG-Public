## evidence_id

ev_7e5e03c8e216a1d567239548d428d67d4007805edf1add890de31f229718e157

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
| procedure | 0x1401f4e20 |

## raw_result.value.procedure.address

0x1401f4e20

## raw_result.value.procedure.name

FUN_1401f4e20

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
| 0x1401f4e20 | 0x1401f4ee1 |

## raw_result.value.procedure.body.total_bytes

194

## raw_result.value.procedure.body.span_bytes

194

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f4e20()

## raw_result.value.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_10 @ Stack[-0x10]:8 | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8 | ghidra-function-database |
| undefined local_30 @ Stack[-0x30]:1  | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8 | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8 | ghidra-function-database |
| undefined4 local_58 @ Stack[-0x58]:4 | ghidra-function-database |
| undefined8 local_60 @ Stack[-0x60]:8 | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8 | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *** FUN_1401f4e20(undefined8 ***param_1)

{
  undefined1 auStack_98 [48];
  undefined8 **local_68;
  longlong local_60;
  int local_58 [2];
  undefined8 **local_50 [2];
  longlong local_40;
  ulonglong local_38;
  undefined1 local_30 [16];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1404c7ac0 ^ (ulonglong)auStack_98;
  local_68 = param_1;
  FUN_1401f4800(local_30);
  if (local_20 == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    FUN_140036dc0(local_58,local_30,0x10000);
    if ((local_58[0] == 0) && (local_40 != 0)) {
      local_68 = local_50;
      if (0xf < local_38) {
        local_68 = local_50[0];
      }
      local_60 = local_40;
      FUN_140309020(param_1,&local_68);
    }
    else {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    FUN_140005540(local_50);
  }
  FUN_1400055b0(local_30);
  return param_1;
}



## raw_result.value.assembly

0x1401f4e20: PUSH RBX,0x1401f4e22: SUB RSP, 0x90,0x1401f4e29: MOV RAX, qword ptr [0x1404c7ac0],0x1401f4e30: XOR RAX, RSP,0x1401f4e33: MOV qword ptr [RSP + 0x88], RAX,0x1401f4e3b: MOV RBX, RCX,0x1401f4e3e: MOV qword ptr [RSP + 0x30], RCX,0x1401f4e43: LEA RCX, [RSP + 0x68],0x1401f4e48: CALL 0x1401f4800,0x1401f4e4d: NOP,0x1401f4e4e: CMP qword ptr [RSP + 0x78], 0x0,0x1401f4e54: JNZ 0x1401f4e5c,0x1401f4e56: MOV byte ptr [RBX + 0x30], 0x0,0x1401f4e5a: JMP 0x1401f4ebc,0x1401f4e5c: MOV R8D, 0x10000,0x1401f4e62: LEA RDX, [RSP + 0x68],0x1401f4e67: LEA RCX, [RSP + 0x40],0x1401f4e6c: CALL 0x140036dc0,0x1401f4e71: NOP,0x1401f4e72: CMP dword ptr [RSP + 0x40], 0x0,0x1401f4e77: JNZ 0x1401f4ead,0x1401f4e79: MOV RCX, qword ptr [RSP + 0x58],0x1401f4e7e: TEST RCX, RCX,0x1401f4e81: JZ 0x1401f4ead,0x1401f4e83: LEA RAX, [RSP + 0x48],0x1401f4e88: CMP qword ptr [RSP + 0x60], 0xf,0x1401f4e8e: CMOVA RAX, qword ptr [RSP + 0x48],0x1401f4e94: MOV qword ptr [RSP + 0x30], RAX,0x1401f4e99: MOV qword ptr [RSP + 0x38], RCX,0x1401f4e9e: LEA RDX, [RSP + 0x30],0x1401f4ea3: MOV RCX, RBX,0x1401f4ea6: CALL 0x140309020,0x1401f4eab: JMP 0x1401f4eb1,0x1401f4ead: MOV byte ptr [RBX + 0x30], 0x0,0x1401f4eb1: LEA RCX, [RSP + 0x48],0x1401f4eb6: CALL 0x140005540,0x1401f4ebb: NOP,0x1401f4ebc: LEA RCX, [RSP + 0x68],0x1401f4ec1: CALL 0x1400055b0,0x1401f4ec6: MOV RAX, RBX,0x1401f4ec9: MOV RCX, qword ptr [RSP + 0x88],0x1401f4ed1: XOR RCX, RSP,0x1401f4ed4: CALL 0x140327740,0x1401f4ed9: ADD RSP, 0x90,0x1401f4ee0: POP RBX,0x1401f4ee1: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f0c70 | FUN_1401f0c70 | [object Object] | [object Object] |
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |
| 0x1401f5db0 | FUN_1401f5db0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140005540 | FUN_140005540           | [object Object] | [object Object] |
| 0x1400055b0 | FUN_1400055b0           | [object Object] | [object Object] |
| 0x140036dc0 | FUN_140036dc0           | [object Object] | [object Object] |
| 0x1401f4800 | FUN_1401f4800           | [object Object] | [object Object] |
| 0x140309020 | FUN_140309020           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f1138    | 0x1401f4e20    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f2b16    | 0x1401f4e20    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3fb0    | 0x1401f4e20    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5e32    | 0x1401f4e20    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfa08    | 0x1401f4e20    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4e29    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f4e33    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1401f4e3e    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4e43    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x1401f4e48    | 0x1401f4800              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e4e    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f4e54    | 0x1401f4e5c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e5a    | 0x1401f4ebc              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e62    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x1401f4e67    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f4e6c    | 0x140036dc0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e72    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f4e77    | 0x1401f4ead              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e79    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f4e81    | 0x1401f4ead              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e83    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f4e88    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4e8e    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f4e94    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4e99    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f4e9e    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4ea6    | 0x140309020              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4eab    | 0x1401f4eb1              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4eb1    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f4eb6    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ebc    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x1401f4ec1    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ec9    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1401f4ed4    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140005540 | FUN_140005540           | 0x1401f4eb6    |
| 0x1400055b0 | FUN_1400055b0           | 0x1401f4ec1    |
| 0x140036dc0 | FUN_140036dc0           | 0x1401f4e6c    |
| 0x1401f4800 | FUN_1401f4800           | 0x1401f4e48    |
| 0x1401f4e5c | LAB_1401f4e5c           | 0x1401f4e54    |
| 0x1401f4ead | LAB_1401f4ead           | 0x1401f4e77    |
| 0x1401f4ead | LAB_1401f4ead           | 0x1401f4e81    |
| 0x1401f4eb1 | LAB_1401f4eb1           | 0x1401f4eab    |
| 0x1401f4ebc | LAB_1401f4ebc           | 0x1401f4e5a    |
| 0x140309020 | FUN_140309020           | 0x1401f4ea6    |
| 0x140327740 | __security_check_cookie | 0x1401f4ed4    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f4e29    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4e20 | 0x1401f4e56 | 0x1401f4e56,0x1401f4e5c |
| 0x1401f4e56 | 0x1401f4e5c | 0x1401f4ebc             |
| 0x1401f4e5c | 0x1401f4e79 | 0x1401f4e79,0x1401f4ead |
| 0x1401f4e79 | 0x1401f4e83 | 0x1401f4e83,0x1401f4ead |
| 0x1401f4e83 | 0x1401f4ead | 0x1401f4eb1             |
| 0x1401f4ead | 0x1401f4eb1 | 0x1401f4eb1             |
| 0x1401f4eb1 | 0x1401f4ebc | 0x1401f4ebc             |
| 0x1401f4ebc | 0x1401f4ee2 |                         |

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
| 0x1401f4e22#399 | 0x1401f4e22 | 399      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e30#15  | 0x1401f4e30 | 15       | INT_XOR      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e30#412 | 0x1401f4e30 | 412      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e43#400 | 0x1401f4e43 | 400      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#33  | 0x1401f4e48 | 33       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4e48#318 | 0x1401f4e48 | 318      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#335 | 0x1401f4e48 | 335      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#342 | 0x1401f4e48 | 342      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#349 | 0x1401f4e48 | 349      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#356 | 0x1401f4e48 | 356      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#363 | 0x1401f4e48 | 363      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#370 | 0x1401f4e48 | 370      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#377 | 0x1401f4e48 | 377      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#384 | 0x1401f4e48 | 384      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#411 | 0x1401f4e48 | 411      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e4e#41  | 0x1401f4e4e | 41       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e54#47  | 0x1401f4e54 | 47       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4e56#50  | 0x1401f4e56 | 50       | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4e56#324 | 0x1401f4e56 | 324      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e56#401 | 0x1401f4e56 | 401      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4e56#414 | 0x1401f4e56 | 414      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e5a#51  | 0x1401f4e5a | 51       | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f4e62#402 | 0x1401f4e62 | 402      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e67#403 | 0x1401f4e67 | 403      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#96  | 0x1401f4e6c | 96       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f4e6c#319 | 0x1401f4e6c | 319      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#336 | 0x1401f4e6c | 336      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#343 | 0x1401f4e6c | 343      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#350 | 0x1401f4e6c | 350      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#357 | 0x1401f4e6c | 357      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#364 | 0x1401f4e6c | 364      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#371 | 0x1401f4e6c | 371      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#385 | 0x1401f4e6c | 385      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e72#104 | 0x1401f4e72 | 104      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e77#110 | 0x1401f4e77 | 110      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4e7e#118 | 0x1401f4e7e | 118      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e81#123 | 0x1401f4e81 | 123      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4e83#404 | 0x1401f4e83 | 404      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e8e#139 | 0x1401f4e8e | 139      | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e8e#144 | 0x1401f4e8e | 144      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4e8e#409 | 0x1401f4e8e | 409      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e8e#410 | 0x1401f4e8e | 410      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e94#234 | 0x1401f4e94 | 234      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e99#151 | 0x1401f4e99 | 151      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e9e#405 | 0x1401f4e9e | 405      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ea6#157 | 0x1401f4ea6 | 157      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4ea6#320 | 0x1401f4ea6 | 320      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ea6#337 | 0x1401f4ea6 | 337      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ea6#344 | 0x1401f4ea6 | 344      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ea6#386 | 0x1401f4ea6 | 386      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eab#158 | 0x1401f4eab | 158      | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f4ead#166 | 0x1401f4ead | 166      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4ead#325 | 0x1401f4ead | 325      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ead#406 | 0x1401f4ead | 406      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4ead#413 | 0x1401f4ead | 413      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4eb1#326 | 0x1401f4eb1 | 326      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb1#340 | 0x1401f4eb1 | 340      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb1#347 | 0x1401f4eb1 | 347      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb1#389 | 0x1401f4eb1 | 389      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb1#407 | 0x1401f4eb1 | 407      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb6#163 | 0x1401f4eb6 | 163      | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4eb6#321 | 0x1401f4eb6 | 321      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb6#338 | 0x1401f4eb6 | 338      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb6#345 | 0x1401f4eb6 | 345      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb6#387 | 0x1401f4eb6 | 387      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ebc#327 | 0x1401f4ebc | 327      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ebc#341 | 0x1401f4ebc | 341      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ebc#348 | 0x1401f4ebc | 348      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ebc#390 | 0x1401f4ebc | 390      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ebc#408 | 0x1401f4ebc | 408      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ec1#56  | 0x1401f4ec1 | 56       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4ec1#322 | 0x1401f4ec1 | 322      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ec1#339 | 0x1401f4ec1 | 339      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ec1#346 | 0x1401f4ec1 | 346      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ec1#388 | 0x1401f4ec1 | 388      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ec6#57  | 0x1401f4ec6 | 57       | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4ee1#88  | 0x1401f4ee1 | 88       | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4ee1#323 | 0x1401f4ee1 | 323      | COPY         | true    | member           | [object Object]                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f4e30#412 | 0x1401f4e30#15  | 1           |
| 0x1401f4e22#399 | 0x1401f4e30#412 | 0           |
| 0x1401f4e43#400 | 0x1401f4e48#33  | 1           |
| 0x1401f4e48#411 | 0x1401f4e48#335 | 0           |
| 0x1401f4e30#15  | 0x1401f4e48#384 | 0           |
| 0x1401f4e48#377 | 0x1401f4e4e#41  | 0           |
| 0x1401f4e4e#41  | 0x1401f4e54#47  | 1           |
| 0x1401f4e56#414 | 0x1401f4e56#50  | 1           |
| 0x1401f4e48#318 | 0x1401f4e56#324 | 0           |
| 0x1401f4e56#401 | 0x1401f4e56#414 | 0           |
| 0x1401f4e67#403 | 0x1401f4e6c#96  | 1           |
| 0x1401f4e62#402 | 0x1401f4e6c#96  | 2           |
| 0x1401f4e48#318 | 0x1401f4e6c#319 | 0           |
| 0x1401f4e48#335 | 0x1401f4e6c#336 | 0           |
| 0x1401f4e48#342 | 0x1401f4e6c#343 | 0           |
| 0x1401f4e48#349 | 0x1401f4e6c#350 | 0           |
| 0x1401f4e48#356 | 0x1401f4e6c#357 | 0           |
| 0x1401f4e48#363 | 0x1401f4e6c#364 | 0           |
| 0x1401f4e48#370 | 0x1401f4e6c#371 | 0           |
| 0x1401f4e48#384 | 0x1401f4e6c#385 | 0           |
| 0x1401f4e6c#350 | 0x1401f4e72#104 | 0           |
| 0x1401f4e72#104 | 0x1401f4e77#110 | 1           |
| 0x1401f4e6c#364 | 0x1401f4e7e#118 | 0           |
| 0x1401f4e7e#118 | 0x1401f4e81#123 | 1           |
| 0x1401f4e6c#371 | 0x1401f4e8e#139 | 1           |
| 0x1401f4e8e#139 | 0x1401f4e8e#144 | 1           |
| 0x1401f4e83#404 | 0x1401f4e8e#409 | 0           |
| 0x1401f4e6c#357 | 0x1401f4e8e#410 | 0           |
| 0x1401f4e8e#409 | 0x1401f4e94#234 | 0           |
| 0x1401f4e8e#410 | 0x1401f4e94#234 | 1           |
| 0x1401f4e6c#364 | 0x1401f4e99#151 | 0           |
| 0x1401f4e9e#405 | 0x1401f4ea6#157 | 2           |
| 0x1401f4e6c#319 | 0x1401f4ea6#320 | 0           |
| 0x1401f4e94#234 | 0x1401f4ea6#337 | 0           |
| 0x1401f4e99#151 | 0x1401f4ea6#344 | 0           |
| 0x1401f4e6c#385 | 0x1401f4ea6#386 | 0           |
| 0x1401f4ead#413 | 0x1401f4ead#166 | 1           |
| 0x1401f4e6c#319 | 0x1401f4ead#325 | 0           |
| 0x1401f4ead#406 | 0x1401f4ead#413 | 0           |
| 0x1401f4ea6#320 | 0x1401f4eb1#326 | 0           |
| 0x1401f4ead#325 | 0x1401f4eb1#326 | 1           |
| 0x1401f4ea6#337 | 0x1401f4eb1#340 | 0           |
| 0x1401f4e6c#336 | 0x1401f4eb1#340 | 1           |
| 0x1401f4ea6#344 | 0x1401f4eb1#347 | 0           |
| 0x1401f4e6c#343 | 0x1401f4eb1#347 | 1           |
| 0x1401f4ea6#386 | 0x1401f4eb1#389 | 0           |
| 0x1401f4e6c#385 | 0x1401f4eb1#389 | 1           |
| 0x1401f4eb1#407 | 0x1401f4eb6#163 | 1           |
| 0x1401f4eb1#326 | 0x1401f4eb6#321 | 0           |
| 0x1401f4eb1#340 | 0x1401f4eb6#338 | 0           |
| 0x1401f4eb1#347 | 0x1401f4eb6#345 | 0           |
| 0x1401f4eb1#389 | 0x1401f4eb6#387 | 0           |
| 0x1401f4e56#324 | 0x1401f4ebc#327 | 0           |
| 0x1401f4eb6#321 | 0x1401f4ebc#327 | 1           |
| 0x1401f4e48#335 | 0x1401f4ebc#341 | 0           |
| 0x1401f4eb6#338 | 0x1401f4ebc#341 | 1           |
| 0x1401f4e48#342 | 0x1401f4ebc#348 | 0           |
| 0x1401f4eb6#345 | 0x1401f4ebc#348 | 1           |
| 0x1401f4e48#384 | 0x1401f4ebc#390 | 0           |
| 0x1401f4eb6#387 | 0x1401f4ebc#390 | 1           |
| 0x1401f4ebc#408 | 0x1401f4ec1#56  | 1           |
| 0x1401f4ebc#327 | 0x1401f4ec1#322 | 0           |
| 0x1401f4ebc#341 | 0x1401f4ec1#339 | 0           |
| 0x1401f4ebc#348 | 0x1401f4ec1#346 | 0           |
| 0x1401f4ebc#390 | 0x1401f4ec1#388 | 0           |
| 0x1401f4ec6#57  | 0x1401f4ee1#88  | 1           |
| 0x1401f4ec1#322 | 0x1401f4ee1#323 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type         |
|---------|---------|-------------------|
| 0       | param_1 | /undefined8 * * * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f4e48#411 | 0           |
| 0       | 0x1401f4e56#401 | 0           |
| 0       | 0x1401f4ea6#157 | 1           |
| 0       | 0x1401f4ead#406 | 0           |
| 0       | 0x1401f4ec6#57  | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f4e48#33  | direct_call        | 0             |             |
| 0x1401f4e54#47  | conditional_branch |               | 1           |
| 0x1401f4e56#50  | memory_write       | 1             | 2           |
| 0x1401f4e6c#96  | direct_call        | 0             |             |
| 0x1401f4e77#110 | conditional_branch |               | 1           |
| 0x1401f4e81#123 | conditional_branch |               | 1           |
| 0x1401f4e8e#144 | conditional_branch |               | 1           |
| 0x1401f4ea6#157 | direct_call        | 0             |             |
| 0x1401f4ead#166 | memory_write       | 1             | 2           |
| 0x1401f4eb6#163 | direct_call        | 0             |             |
| 0x1401f4ec1#56  | direct_call        | 0             |             |

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

0x1401f4e20

## normalized_result.procedure.name

FUN_1401f4e20

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
| 0x1401f4e20 | 0x1401f4ee1 |

## normalized_result.procedure.body.total_bytes

194

## normalized_result.procedure.body.span_bytes

194

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f4e20()

## normalized_result.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_10 @ Stack[-0x10]:8 | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8 | ghidra-function-database |
| undefined local_30 @ Stack[-0x30]:1  | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8 | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8 | ghidra-function-database |
| undefined4 local_58 @ Stack[-0x58]:4 | ghidra-function-database |
| undefined8 local_60 @ Stack[-0x60]:8 | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8 | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *** FUN_1401f4e20(undefined8 ***param_1)

{
  undefined1 auStack_98 [48];
  undefined8 **local_68;
  longlong local_60;
  int local_58 [2];
  undefined8 **local_50 [2];
  longlong local_40;
  ulonglong local_38;
  undefined1 local_30 [16];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1404c7ac0 ^ (ulonglong)auStack_98;
  local_68 = param_1;
  FUN_1401f4800(local_30);
  if (local_20 == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    FUN_140036dc0(local_58,local_30,0x10000);
    if ((local_58[0] == 0) && (local_40 != 0)) {
      local_68 = local_50;
      if (0xf < local_38) {
        local_68 = local_50[0];
      }
      local_60 = local_40;
      FUN_140309020(param_1,&local_68);
    }
    else {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    FUN_140005540(local_50);
  }
  FUN_1400055b0(local_30);
  return param_1;
}



## normalized_result.assembly

0x1401f4e20: PUSH RBX,0x1401f4e22: SUB RSP, 0x90,0x1401f4e29: MOV RAX, qword ptr [0x1404c7ac0],0x1401f4e30: XOR RAX, RSP,0x1401f4e33: MOV qword ptr [RSP + 0x88], RAX,0x1401f4e3b: MOV RBX, RCX,0x1401f4e3e: MOV qword ptr [RSP + 0x30], RCX,0x1401f4e43: LEA RCX, [RSP + 0x68],0x1401f4e48: CALL 0x1401f4800,0x1401f4e4d: NOP,0x1401f4e4e: CMP qword ptr [RSP + 0x78], 0x0,0x1401f4e54: JNZ 0x1401f4e5c,0x1401f4e56: MOV byte ptr [RBX + 0x30], 0x0,0x1401f4e5a: JMP 0x1401f4ebc,0x1401f4e5c: MOV R8D, 0x10000,0x1401f4e62: LEA RDX, [RSP + 0x68],0x1401f4e67: LEA RCX, [RSP + 0x40],0x1401f4e6c: CALL 0x140036dc0,0x1401f4e71: NOP,0x1401f4e72: CMP dword ptr [RSP + 0x40], 0x0,0x1401f4e77: JNZ 0x1401f4ead,0x1401f4e79: MOV RCX, qword ptr [RSP + 0x58],0x1401f4e7e: TEST RCX, RCX,0x1401f4e81: JZ 0x1401f4ead,0x1401f4e83: LEA RAX, [RSP + 0x48],0x1401f4e88: CMP qword ptr [RSP + 0x60], 0xf,0x1401f4e8e: CMOVA RAX, qword ptr [RSP + 0x48],0x1401f4e94: MOV qword ptr [RSP + 0x30], RAX,0x1401f4e99: MOV qword ptr [RSP + 0x38], RCX,0x1401f4e9e: LEA RDX, [RSP + 0x30],0x1401f4ea3: MOV RCX, RBX,0x1401f4ea6: CALL 0x140309020,0x1401f4eab: JMP 0x1401f4eb1,0x1401f4ead: MOV byte ptr [RBX + 0x30], 0x0,0x1401f4eb1: LEA RCX, [RSP + 0x48],0x1401f4eb6: CALL 0x140005540,0x1401f4ebb: NOP,0x1401f4ebc: LEA RCX, [RSP + 0x68],0x1401f4ec1: CALL 0x1400055b0,0x1401f4ec6: MOV RAX, RBX,0x1401f4ec9: MOV RCX, qword ptr [RSP + 0x88],0x1401f4ed1: XOR RCX, RSP,0x1401f4ed4: CALL 0x140327740,0x1401f4ed9: ADD RSP, 0x90,0x1401f4ee0: POP RBX,0x1401f4ee1: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f0c70 | FUN_1401f0c70 | [object Object] | [object Object] |
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |
| 0x1401f5db0 | FUN_1401f5db0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140005540 | FUN_140005540           | [object Object] | [object Object] |
| 0x1400055b0 | FUN_1400055b0           | [object Object] | [object Object] |
| 0x140036dc0 | FUN_140036dc0           | [object Object] | [object Object] |
| 0x1401f4800 | FUN_1401f4800           | [object Object] | [object Object] |
| 0x140309020 | FUN_140309020           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f1138    | 0x1401f4e20    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f2b16    | 0x1401f4e20    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3fb0    | 0x1401f4e20    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5e32    | 0x1401f4e20    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfa08    | 0x1401f4e20    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4e29    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f4e33    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1401f4e3e    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4e43    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x1401f4e48    | 0x1401f4800              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e4e    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f4e54    | 0x1401f4e5c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e5a    | 0x1401f4ebc              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e62    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x1401f4e67    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f4e6c    | 0x140036dc0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e72    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f4e77    | 0x1401f4ead              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e79    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f4e81    | 0x1401f4ead              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4e83    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f4e88    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4e8e    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f4e94    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4e99    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f4e9e    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4ea6    | 0x140309020              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4eab    | 0x1401f4eb1              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4eb1    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f4eb6    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ebc    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x1401f4ec1    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ec9    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1401f4ed4    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140005540 | FUN_140005540           | 0x1401f4eb6    |
| 0x1400055b0 | FUN_1400055b0           | 0x1401f4ec1    |
| 0x140036dc0 | FUN_140036dc0           | 0x1401f4e6c    |
| 0x1401f4800 | FUN_1401f4800           | 0x1401f4e48    |
| 0x1401f4e5c | LAB_1401f4e5c           | 0x1401f4e54    |
| 0x1401f4ead | LAB_1401f4ead           | 0x1401f4e77    |
| 0x1401f4ead | LAB_1401f4ead           | 0x1401f4e81    |
| 0x1401f4eb1 | LAB_1401f4eb1           | 0x1401f4eab    |
| 0x1401f4ebc | LAB_1401f4ebc           | 0x1401f4e5a    |
| 0x140309020 | FUN_140309020           | 0x1401f4ea6    |
| 0x140327740 | __security_check_cookie | 0x1401f4ed4    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f4e29    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4e20 | 0x1401f4e56 | 0x1401f4e56,0x1401f4e5c |
| 0x1401f4e56 | 0x1401f4e5c | 0x1401f4ebc             |
| 0x1401f4e5c | 0x1401f4e79 | 0x1401f4e79,0x1401f4ead |
| 0x1401f4e79 | 0x1401f4e83 | 0x1401f4e83,0x1401f4ead |
| 0x1401f4e83 | 0x1401f4ead | 0x1401f4eb1             |
| 0x1401f4ead | 0x1401f4eb1 | 0x1401f4eb1             |
| 0x1401f4eb1 | 0x1401f4ebc | 0x1401f4ebc             |
| 0x1401f4ebc | 0x1401f4ee2 |                         |

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
| 0x1401f4e22#399 | 0x1401f4e22 | 399      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e30#15  | 0x1401f4e30 | 15       | INT_XOR      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e30#412 | 0x1401f4e30 | 412      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e43#400 | 0x1401f4e43 | 400      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#33  | 0x1401f4e48 | 33       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4e48#318 | 0x1401f4e48 | 318      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#335 | 0x1401f4e48 | 335      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#342 | 0x1401f4e48 | 342      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#349 | 0x1401f4e48 | 349      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#356 | 0x1401f4e48 | 356      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#363 | 0x1401f4e48 | 363      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#370 | 0x1401f4e48 | 370      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#377 | 0x1401f4e48 | 377      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#384 | 0x1401f4e48 | 384      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e48#411 | 0x1401f4e48 | 411      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e4e#41  | 0x1401f4e4e | 41       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e54#47  | 0x1401f4e54 | 47       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4e56#50  | 0x1401f4e56 | 50       | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4e56#324 | 0x1401f4e56 | 324      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e56#401 | 0x1401f4e56 | 401      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4e56#414 | 0x1401f4e56 | 414      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e5a#51  | 0x1401f4e5a | 51       | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f4e62#402 | 0x1401f4e62 | 402      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e67#403 | 0x1401f4e67 | 403      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#96  | 0x1401f4e6c | 96       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f4e6c#319 | 0x1401f4e6c | 319      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#336 | 0x1401f4e6c | 336      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#343 | 0x1401f4e6c | 343      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#350 | 0x1401f4e6c | 350      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#357 | 0x1401f4e6c | 357      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#364 | 0x1401f4e6c | 364      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#371 | 0x1401f4e6c | 371      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e6c#385 | 0x1401f4e6c | 385      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e72#104 | 0x1401f4e72 | 104      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e77#110 | 0x1401f4e77 | 110      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4e7e#118 | 0x1401f4e7e | 118      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e81#123 | 0x1401f4e81 | 123      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4e83#404 | 0x1401f4e83 | 404      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e8e#139 | 0x1401f4e8e | 139      | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e8e#144 | 0x1401f4e8e | 144      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4e8e#409 | 0x1401f4e8e | 409      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e8e#410 | 0x1401f4e8e | 410      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e94#234 | 0x1401f4e94 | 234      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4e99#151 | 0x1401f4e99 | 151      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4e9e#405 | 0x1401f4e9e | 405      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ea6#157 | 0x1401f4ea6 | 157      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4ea6#320 | 0x1401f4ea6 | 320      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ea6#337 | 0x1401f4ea6 | 337      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ea6#344 | 0x1401f4ea6 | 344      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ea6#386 | 0x1401f4ea6 | 386      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eab#158 | 0x1401f4eab | 158      | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f4ead#166 | 0x1401f4ead | 166      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1401f4ead#325 | 0x1401f4ead | 325      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ead#406 | 0x1401f4ead | 406      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f4ead#413 | 0x1401f4ead | 413      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4eb1#326 | 0x1401f4eb1 | 326      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb1#340 | 0x1401f4eb1 | 340      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb1#347 | 0x1401f4eb1 | 347      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb1#389 | 0x1401f4eb1 | 389      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb1#407 | 0x1401f4eb1 | 407      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb6#163 | 0x1401f4eb6 | 163      | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4eb6#321 | 0x1401f4eb6 | 321      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb6#338 | 0x1401f4eb6 | 338      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb6#345 | 0x1401f4eb6 | 345      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4eb6#387 | 0x1401f4eb6 | 387      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ebc#327 | 0x1401f4ebc | 327      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ebc#341 | 0x1401f4ebc | 341      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ebc#348 | 0x1401f4ebc | 348      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ebc#390 | 0x1401f4ebc | 390      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ebc#408 | 0x1401f4ebc | 408      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ec1#56  | 0x1401f4ec1 | 56       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4ec1#322 | 0x1401f4ec1 | 322      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ec1#339 | 0x1401f4ec1 | 339      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ec1#346 | 0x1401f4ec1 | 346      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ec1#388 | 0x1401f4ec1 | 388      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f4ec6#57  | 0x1401f4ec6 | 57       | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f4ee1#88  | 0x1401f4ee1 | 88       | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f4ee1#323 | 0x1401f4ee1 | 323      | COPY         | true    | member           | [object Object]                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f4e30#412 | 0x1401f4e30#15  | 1           |
| 0x1401f4e22#399 | 0x1401f4e30#412 | 0           |
| 0x1401f4e43#400 | 0x1401f4e48#33  | 1           |
| 0x1401f4e48#411 | 0x1401f4e48#335 | 0           |
| 0x1401f4e30#15  | 0x1401f4e48#384 | 0           |
| 0x1401f4e48#377 | 0x1401f4e4e#41  | 0           |
| 0x1401f4e4e#41  | 0x1401f4e54#47  | 1           |
| 0x1401f4e56#414 | 0x1401f4e56#50  | 1           |
| 0x1401f4e48#318 | 0x1401f4e56#324 | 0           |
| 0x1401f4e56#401 | 0x1401f4e56#414 | 0           |
| 0x1401f4e67#403 | 0x1401f4e6c#96  | 1           |
| 0x1401f4e62#402 | 0x1401f4e6c#96  | 2           |
| 0x1401f4e48#318 | 0x1401f4e6c#319 | 0           |
| 0x1401f4e48#335 | 0x1401f4e6c#336 | 0           |
| 0x1401f4e48#342 | 0x1401f4e6c#343 | 0           |
| 0x1401f4e48#349 | 0x1401f4e6c#350 | 0           |
| 0x1401f4e48#356 | 0x1401f4e6c#357 | 0           |
| 0x1401f4e48#363 | 0x1401f4e6c#364 | 0           |
| 0x1401f4e48#370 | 0x1401f4e6c#371 | 0           |
| 0x1401f4e48#384 | 0x1401f4e6c#385 | 0           |
| 0x1401f4e6c#350 | 0x1401f4e72#104 | 0           |
| 0x1401f4e72#104 | 0x1401f4e77#110 | 1           |
| 0x1401f4e6c#364 | 0x1401f4e7e#118 | 0           |
| 0x1401f4e7e#118 | 0x1401f4e81#123 | 1           |
| 0x1401f4e6c#371 | 0x1401f4e8e#139 | 1           |
| 0x1401f4e8e#139 | 0x1401f4e8e#144 | 1           |
| 0x1401f4e83#404 | 0x1401f4e8e#409 | 0           |
| 0x1401f4e6c#357 | 0x1401f4e8e#410 | 0           |
| 0x1401f4e8e#409 | 0x1401f4e94#234 | 0           |
| 0x1401f4e8e#410 | 0x1401f4e94#234 | 1           |
| 0x1401f4e6c#364 | 0x1401f4e99#151 | 0           |
| 0x1401f4e9e#405 | 0x1401f4ea6#157 | 2           |
| 0x1401f4e6c#319 | 0x1401f4ea6#320 | 0           |
| 0x1401f4e94#234 | 0x1401f4ea6#337 | 0           |
| 0x1401f4e99#151 | 0x1401f4ea6#344 | 0           |
| 0x1401f4e6c#385 | 0x1401f4ea6#386 | 0           |
| 0x1401f4ead#413 | 0x1401f4ead#166 | 1           |
| 0x1401f4e6c#319 | 0x1401f4ead#325 | 0           |
| 0x1401f4ead#406 | 0x1401f4ead#413 | 0           |
| 0x1401f4ea6#320 | 0x1401f4eb1#326 | 0           |
| 0x1401f4ead#325 | 0x1401f4eb1#326 | 1           |
| 0x1401f4ea6#337 | 0x1401f4eb1#340 | 0           |
| 0x1401f4e6c#336 | 0x1401f4eb1#340 | 1           |
| 0x1401f4ea6#344 | 0x1401f4eb1#347 | 0           |
| 0x1401f4e6c#343 | 0x1401f4eb1#347 | 1           |
| 0x1401f4ea6#386 | 0x1401f4eb1#389 | 0           |
| 0x1401f4e6c#385 | 0x1401f4eb1#389 | 1           |
| 0x1401f4eb1#407 | 0x1401f4eb6#163 | 1           |
| 0x1401f4eb1#326 | 0x1401f4eb6#321 | 0           |
| 0x1401f4eb1#340 | 0x1401f4eb6#338 | 0           |
| 0x1401f4eb1#347 | 0x1401f4eb6#345 | 0           |
| 0x1401f4eb1#389 | 0x1401f4eb6#387 | 0           |
| 0x1401f4e56#324 | 0x1401f4ebc#327 | 0           |
| 0x1401f4eb6#321 | 0x1401f4ebc#327 | 1           |
| 0x1401f4e48#335 | 0x1401f4ebc#341 | 0           |
| 0x1401f4eb6#338 | 0x1401f4ebc#341 | 1           |
| 0x1401f4e48#342 | 0x1401f4ebc#348 | 0           |
| 0x1401f4eb6#345 | 0x1401f4ebc#348 | 1           |
| 0x1401f4e48#384 | 0x1401f4ebc#390 | 0           |
| 0x1401f4eb6#387 | 0x1401f4ebc#390 | 1           |
| 0x1401f4ebc#408 | 0x1401f4ec1#56  | 1           |
| 0x1401f4ebc#327 | 0x1401f4ec1#322 | 0           |
| 0x1401f4ebc#341 | 0x1401f4ec1#339 | 0           |
| 0x1401f4ebc#348 | 0x1401f4ec1#346 | 0           |
| 0x1401f4ebc#390 | 0x1401f4ec1#388 | 0           |
| 0x1401f4ec6#57  | 0x1401f4ee1#88  | 1           |
| 0x1401f4ec1#322 | 0x1401f4ee1#323 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f4e48#33  | direct_call        | 0             |             |
| 0x1401f4e54#47  | conditional_branch |               | 1           |
| 0x1401f4e56#50  | memory_write       | 1             | 2           |
| 0x1401f4e6c#96  | direct_call        | 0             |             |
| 0x1401f4e77#110 | conditional_branch |               | 1           |
| 0x1401f4e81#123 | conditional_branch |               | 1           |
| 0x1401f4e8e#144 | conditional_branch |               | 1           |
| 0x1401f4ea6#157 | direct_call        | 0             |             |
| 0x1401f4ead#166 | memory_write       | 1             | 2           |
| 0x1401f4eb6#163 | direct_call        | 0             |             |
| 0x1401f4ec1#56  | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type         |
|---------|---------|-------------------|
| 0       | param_1 | /undefined8 * * * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f4e48#411 | 0           |
| 0       | 0x1401f4e56#401 | 0           |
| 0       | 0x1401f4ea6#157 | 1           |
| 0       | 0x1401f4ead#406 | 0           |
| 0       | 0x1401f4ec6#57  | 0           |

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

