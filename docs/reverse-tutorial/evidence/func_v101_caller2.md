## evidence_id

ev_82d06480055caf5325a8d08fdf44743b200608ddcc55c6231c0717366be3a2db

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
| procedure | 0x1401f4440 |

## raw_result.value.procedure.address

0x1401f4440

## raw_result.value.procedure.name

FUN_1401f4440

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
| 0x1401f4440 | 0x1401f451e |

## raw_result.value.procedure.body.total_bytes

223

## raw_result.value.procedure.body.span_bytes

223

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f4440()

## raw_result.value.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8 | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8 | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8 | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |
| undefined1 local_40 @ Stack[-0x40]:1 | ghidra-function-database |
| undefined local_60 @ Stack[-0x60]:1  | ghidra-function-database |
| undefined4 local_68 @ Stack[-0x68]:4 | ghidra-function-database |
| undefined8 local_78 @ Stack[-0x78]:8 | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1401f4440(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_68 [2];
  undefined1 local_60 [32];
  char local_40;
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_98;
  FUN_1403088d0(local_38);
  if (local_28 == 0) {
    uVar6 = 1;
  }
  else {
    local_78 = 0;
    FUN_1401f5780(local_68,L"/deactivate",local_38,param_1 + 8);
    uVar3 = 0xffffffff;
    if (local_40 != '\0') {
      uVar3 = local_68[0];
    }
    uVar2 = FUN_140308fe0(uVar3);
    uVar6 = (ulonglong)uVar2;
    if (local_40 != '\0') {
      FUN_140005540(local_60);
    }
  }
  if (0xf < local_20) {
    uVar5 = local_20 + 1;
    lVar4 = local_38[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_38[0] + -8);
      if (0x1f < (local_38[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      uVar5 = local_20 + 0x28;
    }
    thunk_FUN_140327e20(lVar4,uVar5);
  }
  return uVar6;
}



## raw_result.value.assembly

0x1401f4440: PUSH RBX,0x1401f4442: SUB RSP, 0x90,0x1401f4449: MOV RAX, qword ptr [0x1404c7ac0],0x1401f4450: XOR RAX, RSP,0x1401f4453: MOV qword ptr [RSP + 0x80], RAX,0x1401f445b: MOV RBX, RCX,0x1401f445e: LEA RCX, [RSP + 0x60],0x1401f4463: CALL 0x1403088d0,0x1401f4468: NOP,0x1401f4469: CMP qword ptr [RSP + 0x70], 0x0,0x1401f446f: JNZ 0x1401f4478,0x1401f4471: MOV EBX, 0x1,0x1401f4476: JMP 0x1401f44c3,0x1401f4478: LEA R9, [RBX + 0x8],0x1401f447c: MOV qword ptr [RSP + 0x20], 0x0,0x1401f4485: LEA R8, [RSP + 0x60],0x1401f448a: LEA RDX, [0x14043c278],0x1401f4491: LEA RCX, [RSP + 0x30],0x1401f4496: CALL 0x1401f5780,0x1401f449b: MOV ECX, 0xffffffff,0x1401f44a0: CMP byte ptr [RSP + 0x58], 0x0,0x1401f44a5: CMOVNZ ECX, dword ptr [RSP + 0x30],0x1401f44aa: CALL 0x140308fe0,0x1401f44af: MOV EBX, EAX,0x1401f44b1: CMP byte ptr [RSP + 0x58], 0x0,0x1401f44b6: JZ 0x1401f44c3,0x1401f44b8: LEA RCX, [RSP + 0x38],0x1401f44bd: CALL 0x140005540,0x1401f44c2: NOP,0x1401f44c3: MOV RDX, qword ptr [RSP + 0x78],0x1401f44c8: CMP RDX, 0xf,0x1401f44cc: JBE 0x1401f44fc,0x1401f44ce: INC RDX,0x1401f44d1: MOV RCX, qword ptr [RSP + 0x60],0x1401f44d6: CMP RDX, 0x1000,0x1401f44dd: JC 0x1401f44f7,0x1401f44df: MOV RAX, qword ptr [RCX + -0x8],0x1401f44e3: SUB RCX, RAX,0x1401f44e6: SUB RCX, 0x8,0x1401f44ea: CMP RCX, 0x1f,0x1401f44ee: JA 0x1401f4517,0x1401f44f0: ADD RDX, 0x27,0x1401f44f4: MOV RCX, RAX,0x1401f44f7: CALL 0x1403272f0,0x1401f44fc: MOV EAX, EBX,0x1401f44fe: MOV RCX, qword ptr [RSP + 0x80],0x1401f4506: XOR RCX, RSP,0x1401f4509: CALL 0x140327740,0x1401f450e: ADD RSP, 0x90,0x1401f4515: POP RBX,0x1401f4516: RET,0x1401f4517: MOV ECX, 0x5,0x1401f451c: INT 0x29,0x1401f451e: INT3

## raw_result.value.comments



## raw_result.value.callers



## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140005540 | FUN_140005540           | [object Object] | [object Object] |
| 0x1401f5780 | FUN_1401f5780           | [object Object] | [object Object] |
| 0x1403088d0 | FUN_1403088d0           | [object Object] | [object Object] |
| 0x140308fe0 | FUN_140308fe0           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14043c090    | 0x1401f4440    |                  | [object Object]  | [object Object] |
| 0x1404df990    | 0x1401f4440    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4449    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f4453    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f445e    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4463    | 0x1403088d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4469    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f446f    | 0x1401f4478              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4476    | 0x1401f44c3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f447c    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401f4485    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f448a    | 0x14043c278              | [object Object]  |                  | [object Object] |
| 0x1401f4491    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4496    | 0x1401f5780              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44a0    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f44a5    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f44aa    | 0x140308fe0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44b1    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f44b6    | 0x1401f44c3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44b8    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f44bd    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44c3    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f44cc    | 0x1401f44fc              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44d1    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f44d1    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f44dd    | 0x1401f44f7              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44ee    | 0x1401f4517              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44f7    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44fe    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f4509    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings

| address     | value       | source_address |
|-------------|-------------|----------------|
| 0x14043c278 | /deactivate | 0x1401f448a    |

## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140005540 | FUN_140005540           | 0x1401f44bd    |
| 0x1401f4478 | LAB_1401f4478           | 0x1401f446f    |
| 0x1401f44c3 | LAB_1401f44c3           | 0x1401f4476    |
| 0x1401f44c3 | LAB_1401f44c3           | 0x1401f44b6    |
| 0x1401f44f7 | LAB_1401f44f7           | 0x1401f44dd    |
| 0x1401f44fc | LAB_1401f44fc           | 0x1401f44cc    |
| 0x1401f4517 | LAB_1401f4517           | 0x1401f44ee    |
| 0x1401f5780 | FUN_1401f5780           | 0x1401f4496    |
| 0x1403088d0 | FUN_1403088d0           | 0x1401f4463    |
| 0x140308fe0 | FUN_140308fe0           | 0x1401f44aa    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x1401f44f7    |
| 0x140327740 | __security_check_cookie | 0x1401f4509    |
| 0x14043c278 | u_/deactivate_14043c278 | 0x1401f448a    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f4449    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4440 | 0x1401f4471 | 0x1401f4471,0x1401f4478 |
| 0x1401f4471 | 0x1401f4478 | 0x1401f44c3             |
| 0x1401f4478 | 0x1401f44b8 | 0x1401f44b8,0x1401f44c3 |
| 0x1401f44b8 | 0x1401f44c3 | 0x1401f44c3             |
| 0x1401f44c3 | 0x1401f44ce | 0x1401f44ce,0x1401f44fc |
| 0x1401f44ce | 0x1401f44df | 0x1401f44df,0x1401f44f7 |
| 0x1401f44df | 0x1401f44f0 | 0x1401f44f0,0x1401f4517 |
| 0x1401f44f0 | 0x1401f44f7 | 0x1401f44f7             |
| 0x1401f44f7 | 0x1401f44fc | 0x1401f44fc             |
| 0x1401f44fc | 0x1401f4517 |                         |
| 0x1401f4517 | 0x1401f451f |                         |

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

ulonglong

## raw_result.value.native_api.return_type.size_bytes

8

## raw_result.value.native_api.return_type.storage

RAX:8

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                      |
|------------------|-------------------------|---------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.       |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type ulonglong. |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x1401f4442#529 | 0x1401f4442 | 529      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4450#15  | 0x1401f4450 | 15       | INT_XOR      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4450#537 | 0x1401f4450 | 537      | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f445e#530 | 0x1401f445e | 530      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#30  | 0x1401f4463 | 30       | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f4463#429 | 0x1401f4463 | 429      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#449 | 0x1401f4463 | 449      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#458 | 0x1401f4463 | 458      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#467 | 0x1401f4463 | 467      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#476 | 0x1401f4463 | 476      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#485 | 0x1401f4463 | 485      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#494 | 0x1401f4463 | 494      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#503 | 0x1401f4463 | 503      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4469#38  | 0x1401f4469 | 38       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f446f#44  | 0x1401f446f | 44       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f4471#45  | 0x1401f4471 | 45       | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f4476#46  | 0x1401f4476 | 46       | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401f4478#170 | 0x1401f4478 | 170      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f447c#174 | 0x1401f447c | 174      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f4485#531 | 0x1401f4485 | 531      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4491#532 | 0x1401f4491 | 532      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#182 | 0x1401f4496 | 182      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f4496#430 | 0x1401f4496 | 430      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#450 | 0x1401f4496 | 450      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#459 | 0x1401f4496 | 459      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#468 | 0x1401f4496 | 468      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#477 | 0x1401f4496 | 477      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#495 | 0x1401f4496 | 495      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#504 | 0x1401f4496 | 504      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#528 | 0x1401f4496 | 528      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44a0#191 | 0x1401f44a0 | 191      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44a5#202 | 0x1401f44a5 | 202      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44a5#524 | 0x1401f44a5 | 524      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44a5#535 | 0x1401f44a5 | 535      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44a5#536 | 0x1401f44a5 | 536      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44aa#206 | 0x1401f44aa | 206      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#431 | 0x1401f44aa | 431      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#451 | 0x1401f44aa | 451      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#469 | 0x1401f44aa | 469      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#478 | 0x1401f44aa | 478      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#496 | 0x1401f44aa | 496      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#505 | 0x1401f44aa | 505      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#523 | 0x1401f44aa | 523      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44af#332 | 0x1401f44af | 332      | INT_ZEXT     | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44b1#216 | 0x1401f44b1 | 216      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44b6#221 | 0x1401f44b6 | 221      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44b8#533 | 0x1401f44b8 | 533      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44bd#226 | 0x1401f44bd | 226      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44bd#432 | 0x1401f44bd | 432      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44bd#452 | 0x1401f44bd | 452      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44bd#479 | 0x1401f44bd | 479      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44bd#497 | 0x1401f44bd | 497      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44bd#506 | 0x1401f44bd | 506      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44c3#333 | 0x1401f44c3 | 333      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44c3#439 | 0x1401f44c3 | 439      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44c3#457 | 0x1401f44c3 | 457      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44c3#484 | 0x1401f44c3 | 484      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44c3#502 | 0x1401f44c3 | 502      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44c3#511 | 0x1401f44c3 | 511      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44cc#60  | 0x1401f44cc | 60       | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44cc#61  | 0x1401f44cc | 61       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44ce#63  | 0x1401f44ce | 63       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44d6#74  | 0x1401f44d6 | 74       | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44dd#83  | 0x1401f44dd | 83       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44dd#534 | 0x1401f44dd | 534      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44df#84  | 0x1401f44df | 84       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44df#85  | 0x1401f44df | 85       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44df#538 | 0x1401f44df | 538      | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44e3#89  | 0x1401f44e3 | 89       | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44e6#98  | 0x1401f44e6 | 98       | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44ee#115 | 0x1401f44ee | 115      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44ee#117 | 0x1401f44ee | 117      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44f0#120 | 0x1401f44f0 | 120      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44f7#130 | 0x1401f44f7 | 130      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f44f7#315 | 0x1401f44f7 | 315      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44f7#326 | 0x1401f44f7 | 326      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44f7#435 | 0x1401f44f7 | 435      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44f7#455 | 0x1401f44f7 | 455      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44f7#509 | 0x1401f44f7 | 509      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44fc#132 | 0x1401f44fc | 132      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44fc#438 | 0x1401f44fc | 438      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4516#163 | 0x1401f4516 | 163      | RETURN       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f4516#436 | 0x1401f4516 | 436      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f451c#165 | 0x1401f451c | 165      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451c#166 | 0x1401f451c | 166      | CALLIND      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f451c#433 | 0x1401f451c | 433      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451c#453 | 0x1401f451c | 453      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451c#507 | 0x1401f451c | 507      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451c#539 | 0x1401f451c | 539      | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f451e#167 | 0x1401f451e | 167      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451e#168 | 0x1401f451e | 168      | CALLIND      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f451e#169 | 0x1401f451e | 169      | RETURN       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f451e#434 | 0x1401f451e | 434      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451e#437 | 0x1401f451e | 437      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f451e#454 | 0x1401f451e | 454      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451e#508 | 0x1401f451e | 508      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451e#540 | 0x1401f451e | 540      | CAST         | true    | member           | [object Object]                                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f4450#537 | 0x1401f4450#15  | 1           |
| 0x1401f4442#529 | 0x1401f4450#537 | 0           |
| 0x1401f445e#530 | 0x1401f4463#30  | 1           |
| 0x1401f4450#15  | 0x1401f4463#503 | 0           |
| 0x1401f4463#485 | 0x1401f4469#38  | 0           |
| 0x1401f4469#38  | 0x1401f446f#44  | 1           |
| 0x1401f4491#532 | 0x1401f4496#182 | 1           |
| 0x1401f4496#528 | 0x1401f4496#182 | 2           |
| 0x1401f4485#531 | 0x1401f4496#182 | 3           |
| 0x1401f4478#170 | 0x1401f4496#182 | 4           |
| 0x1401f4463#429 | 0x1401f4496#430 | 0           |
| 0x1401f447c#174 | 0x1401f4496#450 | 0           |
| 0x1401f4463#458 | 0x1401f4496#459 | 0           |
| 0x1401f4463#467 | 0x1401f4496#468 | 0           |
| 0x1401f4463#476 | 0x1401f4496#477 | 0           |
| 0x1401f4463#494 | 0x1401f4496#495 | 0           |
| 0x1401f4463#503 | 0x1401f4496#504 | 0           |
| 0x1401f4496#468 | 0x1401f44a0#191 | 0           |
| 0x1401f44a0#191 | 0x1401f44a5#202 | 1           |
| 0x1401f44a5#524 | 0x1401f44a5#535 | 0           |
| 0x1401f4496#459 | 0x1401f44a5#536 | 0           |
| 0x1401f44aa#523 | 0x1401f44aa#206 | 1           |
| 0x1401f4496#430 | 0x1401f44aa#431 | 0           |
| 0x1401f4496#450 | 0x1401f44aa#451 | 0           |
| 0x1401f4496#468 | 0x1401f44aa#469 | 0           |
| 0x1401f4496#477 | 0x1401f44aa#478 | 0           |
| 0x1401f4496#495 | 0x1401f44aa#496 | 0           |
| 0x1401f4496#504 | 0x1401f44aa#505 | 0           |
| 0x1401f44a5#535 | 0x1401f44aa#523 | 0           |
| 0x1401f44a5#536 | 0x1401f44aa#523 | 1           |
| 0x1401f44aa#206 | 0x1401f44af#332 | 0           |
| 0x1401f44aa#469 | 0x1401f44b1#216 | 0           |
| 0x1401f44b1#216 | 0x1401f44b6#221 | 1           |
| 0x1401f44b8#533 | 0x1401f44bd#226 | 1           |
| 0x1401f44aa#431 | 0x1401f44bd#432 | 0           |
| 0x1401f44aa#451 | 0x1401f44bd#452 | 0           |
| 0x1401f44aa#478 | 0x1401f44bd#479 | 0           |
| 0x1401f44aa#496 | 0x1401f44bd#497 | 0           |
| 0x1401f44aa#505 | 0x1401f44bd#506 | 0           |
| 0x1401f4471#45  | 0x1401f44c3#333 | 0           |
| 0x1401f44af#332 | 0x1401f44c3#333 | 1           |
| 0x1401f44af#332 | 0x1401f44c3#333 | 2           |
| 0x1401f4463#429 | 0x1401f44c3#439 | 0           |
| 0x1401f44aa#431 | 0x1401f44c3#439 | 1           |
| 0x1401f44bd#432 | 0x1401f44c3#439 | 2           |
| 0x1401f4463#449 | 0x1401f44c3#457 | 0           |
| 0x1401f44aa#451 | 0x1401f44c3#457 | 1           |
| 0x1401f44bd#452 | 0x1401f44c3#457 | 2           |
| 0x1401f4463#476 | 0x1401f44c3#484 | 0           |
| 0x1401f44aa#478 | 0x1401f44c3#484 | 1           |
| 0x1401f44bd#479 | 0x1401f44c3#484 | 2           |
| 0x1401f4463#494 | 0x1401f44c3#502 | 0           |
| 0x1401f44aa#496 | 0x1401f44c3#502 | 1           |
| 0x1401f44bd#497 | 0x1401f44c3#502 | 2           |
| 0x1401f4463#503 | 0x1401f44c3#511 | 0           |
| 0x1401f44aa#505 | 0x1401f44c3#511 | 1           |
| 0x1401f44bd#506 | 0x1401f44c3#511 | 2           |
| 0x1401f44c3#502 | 0x1401f44cc#60  | 1           |
| 0x1401f44cc#60  | 0x1401f44cc#61  | 1           |
| 0x1401f44c3#502 | 0x1401f44ce#63  | 0           |
| 0x1401f44ce#63  | 0x1401f44d6#74  | 1           |
| 0x1401f44d6#74  | 0x1401f44dd#83  | 1           |
| 0x1401f44c3#484 | 0x1401f44dd#534 | 0           |
| 0x1401f44c3#484 | 0x1401f44df#84  | 0           |
| 0x1401f44df#538 | 0x1401f44df#85  | 1           |
| 0x1401f44df#84  | 0x1401f44df#538 | 0           |
| 0x1401f44c3#484 | 0x1401f44e3#89  | 0           |
| 0x1401f44df#85  | 0x1401f44e3#89  | 1           |
| 0x1401f44e3#89  | 0x1401f44e6#98  | 0           |
| 0x1401f44e6#98  | 0x1401f44ee#115 | 1           |
| 0x1401f44ee#115 | 0x1401f44ee#117 | 1           |
| 0x1401f44c3#502 | 0x1401f44f0#120 | 0           |
| 0x1401f44f7#315 | 0x1401f44f7#130 | 1           |
| 0x1401f44f7#326 | 0x1401f44f7#130 | 2           |
| 0x1401f44dd#534 | 0x1401f44f7#315 | 0           |
| 0x1401f44df#85  | 0x1401f44f7#315 | 1           |
| 0x1401f44ce#63  | 0x1401f44f7#326 | 0           |
| 0x1401f44f0#120 | 0x1401f44f7#326 | 1           |
| 0x1401f44c3#439 | 0x1401f44f7#435 | 0           |
| 0x1401f44c3#457 | 0x1401f44f7#455 | 0           |
| 0x1401f44c3#511 | 0x1401f44f7#509 | 0           |
| 0x1401f44c3#333 | 0x1401f44fc#132 | 0           |
| 0x1401f44c3#439 | 0x1401f44fc#438 | 0           |
| 0x1401f44f7#435 | 0x1401f44fc#438 | 1           |
| 0x1401f44fc#132 | 0x1401f4516#163 | 1           |
| 0x1401f44fc#438 | 0x1401f4516#436 | 0           |
| 0x1401f451c#539 | 0x1401f451c#166 | 0           |
| 0x1401f44c3#439 | 0x1401f451c#433 | 0           |
| 0x1401f44c3#457 | 0x1401f451c#453 | 0           |
| 0x1401f44c3#511 | 0x1401f451c#507 | 0           |
| 0x1401f451c#165 | 0x1401f451c#539 | 0           |
| 0x1401f451e#540 | 0x1401f451e#168 | 0           |
| 0x1401f451e#168 | 0x1401f451e#169 | 1           |
| 0x1401f451c#433 | 0x1401f451e#434 | 0           |
| 0x1401f451e#434 | 0x1401f451e#437 | 0           |
| 0x1401f451c#453 | 0x1401f451e#454 | 0           |
| 0x1401f451c#507 | 0x1401f451e#508 | 0           |
| 0x1401f451e#167 | 0x1401f451e#540 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f4478#170 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f4463#30  | direct_call        | 0             |             |
| 0x1401f446f#44  | conditional_branch |               | 1           |
| 0x1401f4496#182 | direct_call        | 0             |             |
| 0x1401f44a5#202 | conditional_branch |               | 1           |
| 0x1401f44aa#206 | direct_call        | 0             |             |
| 0x1401f44b6#221 | conditional_branch |               | 1           |
| 0x1401f44bd#226 | direct_call        | 0             |             |
| 0x1401f44cc#61  | conditional_branch |               | 1           |
| 0x1401f44dd#83  | conditional_branch |               | 1           |
| 0x1401f44df#85  | memory_read        | 1             |             |
| 0x1401f44ee#117 | conditional_branch |               | 1           |
| 0x1401f44f7#130 | direct_call        | 0             |             |
| 0x1401f451c#166 | indirect_call      | 0             |             |
| 0x1401f451e#168 | indirect_call      | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f451e with no resolved callee; its no-return basis is unknown.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401f451e with no resolved callee; its no-return basis is unknown.

## normalized_result.procedure.address

0x1401f4440

## normalized_result.procedure.name

FUN_1401f4440

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
| 0x1401f4440 | 0x1401f451e |

## normalized_result.procedure.body.total_bytes

223

## normalized_result.procedure.body.span_bytes

223

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f4440()

## normalized_result.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8 | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8 | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8 | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |
| undefined1 local_40 @ Stack[-0x40]:1 | ghidra-function-database |
| undefined local_60 @ Stack[-0x60]:1  | ghidra-function-database |
| undefined4 local_68 @ Stack[-0x68]:4 | ghidra-function-database |
| undefined8 local_78 @ Stack[-0x78]:8 | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1401f4440(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_68 [2];
  undefined1 local_60 [32];
  char local_40;
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_98;
  FUN_1403088d0(local_38);
  if (local_28 == 0) {
    uVar6 = 1;
  }
  else {
    local_78 = 0;
    FUN_1401f5780(local_68,L"/deactivate",local_38,param_1 + 8);
    uVar3 = 0xffffffff;
    if (local_40 != '\0') {
      uVar3 = local_68[0];
    }
    uVar2 = FUN_140308fe0(uVar3);
    uVar6 = (ulonglong)uVar2;
    if (local_40 != '\0') {
      FUN_140005540(local_60);
    }
  }
  if (0xf < local_20) {
    uVar5 = local_20 + 1;
    lVar4 = local_38[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_38[0] + -8);
      if (0x1f < (local_38[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      uVar5 = local_20 + 0x28;
    }
    thunk_FUN_140327e20(lVar4,uVar5);
  }
  return uVar6;
}



## normalized_result.assembly

0x1401f4440: PUSH RBX,0x1401f4442: SUB RSP, 0x90,0x1401f4449: MOV RAX, qword ptr [0x1404c7ac0],0x1401f4450: XOR RAX, RSP,0x1401f4453: MOV qword ptr [RSP + 0x80], RAX,0x1401f445b: MOV RBX, RCX,0x1401f445e: LEA RCX, [RSP + 0x60],0x1401f4463: CALL 0x1403088d0,0x1401f4468: NOP,0x1401f4469: CMP qword ptr [RSP + 0x70], 0x0,0x1401f446f: JNZ 0x1401f4478,0x1401f4471: MOV EBX, 0x1,0x1401f4476: JMP 0x1401f44c3,0x1401f4478: LEA R9, [RBX + 0x8],0x1401f447c: MOV qword ptr [RSP + 0x20], 0x0,0x1401f4485: LEA R8, [RSP + 0x60],0x1401f448a: LEA RDX, [0x14043c278],0x1401f4491: LEA RCX, [RSP + 0x30],0x1401f4496: CALL 0x1401f5780,0x1401f449b: MOV ECX, 0xffffffff,0x1401f44a0: CMP byte ptr [RSP + 0x58], 0x0,0x1401f44a5: CMOVNZ ECX, dword ptr [RSP + 0x30],0x1401f44aa: CALL 0x140308fe0,0x1401f44af: MOV EBX, EAX,0x1401f44b1: CMP byte ptr [RSP + 0x58], 0x0,0x1401f44b6: JZ 0x1401f44c3,0x1401f44b8: LEA RCX, [RSP + 0x38],0x1401f44bd: CALL 0x140005540,0x1401f44c2: NOP,0x1401f44c3: MOV RDX, qword ptr [RSP + 0x78],0x1401f44c8: CMP RDX, 0xf,0x1401f44cc: JBE 0x1401f44fc,0x1401f44ce: INC RDX,0x1401f44d1: MOV RCX, qword ptr [RSP + 0x60],0x1401f44d6: CMP RDX, 0x1000,0x1401f44dd: JC 0x1401f44f7,0x1401f44df: MOV RAX, qword ptr [RCX + -0x8],0x1401f44e3: SUB RCX, RAX,0x1401f44e6: SUB RCX, 0x8,0x1401f44ea: CMP RCX, 0x1f,0x1401f44ee: JA 0x1401f4517,0x1401f44f0: ADD RDX, 0x27,0x1401f44f4: MOV RCX, RAX,0x1401f44f7: CALL 0x1403272f0,0x1401f44fc: MOV EAX, EBX,0x1401f44fe: MOV RCX, qword ptr [RSP + 0x80],0x1401f4506: XOR RCX, RSP,0x1401f4509: CALL 0x140327740,0x1401f450e: ADD RSP, 0x90,0x1401f4515: POP RBX,0x1401f4516: RET,0x1401f4517: MOV ECX, 0x5,0x1401f451c: INT 0x29,0x1401f451e: INT3

## normalized_result.comments



## normalized_result.callers



## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140005540 | FUN_140005540           | [object Object] | [object Object] |
| 0x1401f5780 | FUN_1401f5780           | [object Object] | [object Object] |
| 0x1403088d0 | FUN_1403088d0           | [object Object] | [object Object] |
| 0x140308fe0 | FUN_140308fe0           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14043c090    | 0x1401f4440    |                  | [object Object]  | [object Object] |
| 0x1404df990    | 0x1401f4440    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4449    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f4453    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f445e    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f4463    | 0x1403088d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4469    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f446f    | 0x1401f4478              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4476    | 0x1401f44c3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f447c    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401f4485    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f448a    | 0x14043c278              | [object Object]  |                  | [object Object] |
| 0x1401f4491    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f4496    | 0x1401f5780              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44a0    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f44a5    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f44aa    | 0x140308fe0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44b1    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f44b6    | 0x1401f44c3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44b8    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f44bd    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44c3    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f44cc    | 0x1401f44fc              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44d1    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f44d1    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f44dd    | 0x1401f44f7              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44ee    | 0x1401f4517              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44f7    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f44fe    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f4509    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings

| address     | value       | source_address |
|-------------|-------------|----------------|
| 0x14043c278 | /deactivate | 0x1401f448a    |

## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140005540 | FUN_140005540           | 0x1401f44bd    |
| 0x1401f4478 | LAB_1401f4478           | 0x1401f446f    |
| 0x1401f44c3 | LAB_1401f44c3           | 0x1401f4476    |
| 0x1401f44c3 | LAB_1401f44c3           | 0x1401f44b6    |
| 0x1401f44f7 | LAB_1401f44f7           | 0x1401f44dd    |
| 0x1401f44fc | LAB_1401f44fc           | 0x1401f44cc    |
| 0x1401f4517 | LAB_1401f4517           | 0x1401f44ee    |
| 0x1401f5780 | FUN_1401f5780           | 0x1401f4496    |
| 0x1403088d0 | FUN_1403088d0           | 0x1401f4463    |
| 0x140308fe0 | FUN_140308fe0           | 0x1401f44aa    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x1401f44f7    |
| 0x140327740 | __security_check_cookie | 0x1401f4509    |
| 0x14043c278 | u_/deactivate_14043c278 | 0x1401f448a    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f4449    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4440 | 0x1401f4471 | 0x1401f4471,0x1401f4478 |
| 0x1401f4471 | 0x1401f4478 | 0x1401f44c3             |
| 0x1401f4478 | 0x1401f44b8 | 0x1401f44b8,0x1401f44c3 |
| 0x1401f44b8 | 0x1401f44c3 | 0x1401f44c3             |
| 0x1401f44c3 | 0x1401f44ce | 0x1401f44ce,0x1401f44fc |
| 0x1401f44ce | 0x1401f44df | 0x1401f44df,0x1401f44f7 |
| 0x1401f44df | 0x1401f44f0 | 0x1401f44f0,0x1401f4517 |
| 0x1401f44f0 | 0x1401f44f7 | 0x1401f44f7             |
| 0x1401f44f7 | 0x1401f44fc | 0x1401f44fc             |
| 0x1401f44fc | 0x1401f4517 |                         |
| 0x1401f4517 | 0x1401f451f |                         |

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

ulonglong

## normalized_result.native_api.return_type.size_bytes

8

## normalized_result.native_api.return_type.storage

RAX:8

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                      |
|------------------|-------------------------|---------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.       |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type ulonglong. |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x1401f4442#529 | 0x1401f4442 | 529      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4450#15  | 0x1401f4450 | 15       | INT_XOR      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4450#537 | 0x1401f4450 | 537      | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f445e#530 | 0x1401f445e | 530      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#30  | 0x1401f4463 | 30       | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f4463#429 | 0x1401f4463 | 429      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#449 | 0x1401f4463 | 449      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#458 | 0x1401f4463 | 458      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#467 | 0x1401f4463 | 467      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#476 | 0x1401f4463 | 476      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#485 | 0x1401f4463 | 485      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#494 | 0x1401f4463 | 494      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4463#503 | 0x1401f4463 | 503      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4469#38  | 0x1401f4469 | 38       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f446f#44  | 0x1401f446f | 44       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f4471#45  | 0x1401f4471 | 45       | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f4476#46  | 0x1401f4476 | 46       | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401f4478#170 | 0x1401f4478 | 170      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f447c#174 | 0x1401f447c | 174      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f4485#531 | 0x1401f4485 | 531      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4491#532 | 0x1401f4491 | 532      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#182 | 0x1401f4496 | 182      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f4496#430 | 0x1401f4496 | 430      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#450 | 0x1401f4496 | 450      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#459 | 0x1401f4496 | 459      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#468 | 0x1401f4496 | 468      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#477 | 0x1401f4496 | 477      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#495 | 0x1401f4496 | 495      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#504 | 0x1401f4496 | 504      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4496#528 | 0x1401f4496 | 528      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44a0#191 | 0x1401f44a0 | 191      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44a5#202 | 0x1401f44a5 | 202      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44a5#524 | 0x1401f44a5 | 524      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44a5#535 | 0x1401f44a5 | 535      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44a5#536 | 0x1401f44a5 | 536      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44aa#206 | 0x1401f44aa | 206      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#431 | 0x1401f44aa | 431      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#451 | 0x1401f44aa | 451      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#469 | 0x1401f44aa | 469      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#478 | 0x1401f44aa | 478      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#496 | 0x1401f44aa | 496      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#505 | 0x1401f44aa | 505      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44aa#523 | 0x1401f44aa | 523      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44af#332 | 0x1401f44af | 332      | INT_ZEXT     | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44b1#216 | 0x1401f44b1 | 216      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44b6#221 | 0x1401f44b6 | 221      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44b8#533 | 0x1401f44b8 | 533      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44bd#226 | 0x1401f44bd | 226      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44bd#432 | 0x1401f44bd | 432      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44bd#452 | 0x1401f44bd | 452      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44bd#479 | 0x1401f44bd | 479      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44bd#497 | 0x1401f44bd | 497      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44bd#506 | 0x1401f44bd | 506      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44c3#333 | 0x1401f44c3 | 333      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44c3#439 | 0x1401f44c3 | 439      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44c3#457 | 0x1401f44c3 | 457      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44c3#484 | 0x1401f44c3 | 484      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44c3#502 | 0x1401f44c3 | 502      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44c3#511 | 0x1401f44c3 | 511      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f44cc#60  | 0x1401f44cc | 60       | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44cc#61  | 0x1401f44cc | 61       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44ce#63  | 0x1401f44ce | 63       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44d6#74  | 0x1401f44d6 | 74       | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44dd#83  | 0x1401f44dd | 83       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44dd#534 | 0x1401f44dd | 534      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44df#84  | 0x1401f44df | 84       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44df#85  | 0x1401f44df | 85       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44df#538 | 0x1401f44df | 538      | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44e3#89  | 0x1401f44e3 | 89       | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44e6#98  | 0x1401f44e6 | 98       | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44ee#115 | 0x1401f44ee | 115      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44ee#117 | 0x1401f44ee | 117      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f44f0#120 | 0x1401f44f0 | 120      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44f7#130 | 0x1401f44f7 | 130      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f44f7#315 | 0x1401f44f7 | 315      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44f7#326 | 0x1401f44f7 | 326      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44f7#435 | 0x1401f44f7 | 435      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44f7#455 | 0x1401f44f7 | 455      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44f7#509 | 0x1401f44f7 | 509      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f44fc#132 | 0x1401f44fc | 132      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f44fc#438 | 0x1401f44fc | 438      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f4516#163 | 0x1401f4516 | 163      | RETURN       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f4516#436 | 0x1401f4516 | 436      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f451c#165 | 0x1401f451c | 165      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451c#166 | 0x1401f451c | 166      | CALLIND      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f451c#433 | 0x1401f451c | 433      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451c#453 | 0x1401f451c | 453      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451c#507 | 0x1401f451c | 507      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451c#539 | 0x1401f451c | 539      | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f451e#167 | 0x1401f451e | 167      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451e#168 | 0x1401f451e | 168      | CALLIND      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f451e#169 | 0x1401f451e | 169      | RETURN       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f451e#434 | 0x1401f451e | 434      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451e#437 | 0x1401f451e | 437      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f451e#454 | 0x1401f451e | 454      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451e#508 | 0x1401f451e | 508      | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f451e#540 | 0x1401f451e | 540      | CAST         | true    | member           | [object Object]                                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f4450#537 | 0x1401f4450#15  | 1           |
| 0x1401f4442#529 | 0x1401f4450#537 | 0           |
| 0x1401f445e#530 | 0x1401f4463#30  | 1           |
| 0x1401f4450#15  | 0x1401f4463#503 | 0           |
| 0x1401f4463#485 | 0x1401f4469#38  | 0           |
| 0x1401f4469#38  | 0x1401f446f#44  | 1           |
| 0x1401f4491#532 | 0x1401f4496#182 | 1           |
| 0x1401f4496#528 | 0x1401f4496#182 | 2           |
| 0x1401f4485#531 | 0x1401f4496#182 | 3           |
| 0x1401f4478#170 | 0x1401f4496#182 | 4           |
| 0x1401f4463#429 | 0x1401f4496#430 | 0           |
| 0x1401f447c#174 | 0x1401f4496#450 | 0           |
| 0x1401f4463#458 | 0x1401f4496#459 | 0           |
| 0x1401f4463#467 | 0x1401f4496#468 | 0           |
| 0x1401f4463#476 | 0x1401f4496#477 | 0           |
| 0x1401f4463#494 | 0x1401f4496#495 | 0           |
| 0x1401f4463#503 | 0x1401f4496#504 | 0           |
| 0x1401f4496#468 | 0x1401f44a0#191 | 0           |
| 0x1401f44a0#191 | 0x1401f44a5#202 | 1           |
| 0x1401f44a5#524 | 0x1401f44a5#535 | 0           |
| 0x1401f4496#459 | 0x1401f44a5#536 | 0           |
| 0x1401f44aa#523 | 0x1401f44aa#206 | 1           |
| 0x1401f4496#430 | 0x1401f44aa#431 | 0           |
| 0x1401f4496#450 | 0x1401f44aa#451 | 0           |
| 0x1401f4496#468 | 0x1401f44aa#469 | 0           |
| 0x1401f4496#477 | 0x1401f44aa#478 | 0           |
| 0x1401f4496#495 | 0x1401f44aa#496 | 0           |
| 0x1401f4496#504 | 0x1401f44aa#505 | 0           |
| 0x1401f44a5#535 | 0x1401f44aa#523 | 0           |
| 0x1401f44a5#536 | 0x1401f44aa#523 | 1           |
| 0x1401f44aa#206 | 0x1401f44af#332 | 0           |
| 0x1401f44aa#469 | 0x1401f44b1#216 | 0           |
| 0x1401f44b1#216 | 0x1401f44b6#221 | 1           |
| 0x1401f44b8#533 | 0x1401f44bd#226 | 1           |
| 0x1401f44aa#431 | 0x1401f44bd#432 | 0           |
| 0x1401f44aa#451 | 0x1401f44bd#452 | 0           |
| 0x1401f44aa#478 | 0x1401f44bd#479 | 0           |
| 0x1401f44aa#496 | 0x1401f44bd#497 | 0           |
| 0x1401f44aa#505 | 0x1401f44bd#506 | 0           |
| 0x1401f4471#45  | 0x1401f44c3#333 | 0           |
| 0x1401f44af#332 | 0x1401f44c3#333 | 1           |
| 0x1401f44af#332 | 0x1401f44c3#333 | 2           |
| 0x1401f4463#429 | 0x1401f44c3#439 | 0           |
| 0x1401f44aa#431 | 0x1401f44c3#439 | 1           |
| 0x1401f44bd#432 | 0x1401f44c3#439 | 2           |
| 0x1401f4463#449 | 0x1401f44c3#457 | 0           |
| 0x1401f44aa#451 | 0x1401f44c3#457 | 1           |
| 0x1401f44bd#452 | 0x1401f44c3#457 | 2           |
| 0x1401f4463#476 | 0x1401f44c3#484 | 0           |
| 0x1401f44aa#478 | 0x1401f44c3#484 | 1           |
| 0x1401f44bd#479 | 0x1401f44c3#484 | 2           |
| 0x1401f4463#494 | 0x1401f44c3#502 | 0           |
| 0x1401f44aa#496 | 0x1401f44c3#502 | 1           |
| 0x1401f44bd#497 | 0x1401f44c3#502 | 2           |
| 0x1401f4463#503 | 0x1401f44c3#511 | 0           |
| 0x1401f44aa#505 | 0x1401f44c3#511 | 1           |
| 0x1401f44bd#506 | 0x1401f44c3#511 | 2           |
| 0x1401f44c3#502 | 0x1401f44cc#60  | 1           |
| 0x1401f44cc#60  | 0x1401f44cc#61  | 1           |
| 0x1401f44c3#502 | 0x1401f44ce#63  | 0           |
| 0x1401f44ce#63  | 0x1401f44d6#74  | 1           |
| 0x1401f44d6#74  | 0x1401f44dd#83  | 1           |
| 0x1401f44c3#484 | 0x1401f44dd#534 | 0           |
| 0x1401f44c3#484 | 0x1401f44df#84  | 0           |
| 0x1401f44df#538 | 0x1401f44df#85  | 1           |
| 0x1401f44df#84  | 0x1401f44df#538 | 0           |
| 0x1401f44c3#484 | 0x1401f44e3#89  | 0           |
| 0x1401f44df#85  | 0x1401f44e3#89  | 1           |
| 0x1401f44e3#89  | 0x1401f44e6#98  | 0           |
| 0x1401f44e6#98  | 0x1401f44ee#115 | 1           |
| 0x1401f44ee#115 | 0x1401f44ee#117 | 1           |
| 0x1401f44c3#502 | 0x1401f44f0#120 | 0           |
| 0x1401f44f7#315 | 0x1401f44f7#130 | 1           |
| 0x1401f44f7#326 | 0x1401f44f7#130 | 2           |
| 0x1401f44dd#534 | 0x1401f44f7#315 | 0           |
| 0x1401f44df#85  | 0x1401f44f7#315 | 1           |
| 0x1401f44ce#63  | 0x1401f44f7#326 | 0           |
| 0x1401f44f0#120 | 0x1401f44f7#326 | 1           |
| 0x1401f44c3#439 | 0x1401f44f7#435 | 0           |
| 0x1401f44c3#457 | 0x1401f44f7#455 | 0           |
| 0x1401f44c3#511 | 0x1401f44f7#509 | 0           |
| 0x1401f44c3#333 | 0x1401f44fc#132 | 0           |
| 0x1401f44c3#439 | 0x1401f44fc#438 | 0           |
| 0x1401f44f7#435 | 0x1401f44fc#438 | 1           |
| 0x1401f44fc#132 | 0x1401f4516#163 | 1           |
| 0x1401f44fc#438 | 0x1401f4516#436 | 0           |
| 0x1401f451c#539 | 0x1401f451c#166 | 0           |
| 0x1401f44c3#439 | 0x1401f451c#433 | 0           |
| 0x1401f44c3#457 | 0x1401f451c#453 | 0           |
| 0x1401f44c3#511 | 0x1401f451c#507 | 0           |
| 0x1401f451c#165 | 0x1401f451c#539 | 0           |
| 0x1401f451e#540 | 0x1401f451e#168 | 0           |
| 0x1401f451e#168 | 0x1401f451e#169 | 1           |
| 0x1401f451c#433 | 0x1401f451e#434 | 0           |
| 0x1401f451e#434 | 0x1401f451e#437 | 0           |
| 0x1401f451c#453 | 0x1401f451e#454 | 0           |
| 0x1401f451c#507 | 0x1401f451e#508 | 0           |
| 0x1401f451e#167 | 0x1401f451e#540 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f4463#30  | direct_call        | 0             |             |
| 0x1401f446f#44  | conditional_branch |               | 1           |
| 0x1401f4496#182 | direct_call        | 0             |             |
| 0x1401f44a5#202 | conditional_branch |               | 1           |
| 0x1401f44aa#206 | direct_call        | 0             |             |
| 0x1401f44b6#221 | conditional_branch |               | 1           |
| 0x1401f44bd#226 | direct_call        | 0             |             |
| 0x1401f44cc#61  | conditional_branch |               | 1           |
| 0x1401f44dd#83  | conditional_branch |               | 1           |
| 0x1401f44df#85  | memory_read        | 1             |             |
| 0x1401f44ee#117 | conditional_branch |               | 1           |
| 0x1401f44f7#130 | direct_call        | 0             |             |
| 0x1401f451c#166 | indirect_call      | 0             |             |
| 0x1401f451e#168 | indirect_call      | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f4478#170 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f451e with no resolved callee; its no-return basis is unknown.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401f451e with no resolved callee; its no-return basis is unknown.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

