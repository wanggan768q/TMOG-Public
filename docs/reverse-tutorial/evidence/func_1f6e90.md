## evidence_id

ev_2474e61bd3d10dbbde2d21a00f7fb28bc056749462980d0c1a709996316ecb13

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
| procedure | 0x1401f6e90 |

## raw_result.value.procedure.address

0x1401f6e90

## raw_result.value.procedure.name

FUN_1401f6e90

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
| 0x1401f6e90 | 0x1401f6f52 |

## raw_result.value.procedure.body.total_bytes

195

## raw_result.value.procedure.body.span_bytes

195

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f6e90()

## raw_result.value.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8 | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8 | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8 | ghidra-function-database |
| undefined8 local_48 @ Stack[-0x48]:8 | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1401f6e90(longlong param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return local_18 & 0xffffffffffffff00;
  }
  puVar3 = (undefined8 *)FUN_140309c30(local_38);
  local_48 = puVar3;
  if (0xf < (ulonglong)puVar3[3]) {
    local_48 = (undefined8 *)*puVar3;
  }
  local_40 = puVar3[2];
  bVar2 = FUN_140037f30(param_1,&local_48);
  if (0xf < local_20) {
    uVar5 = local_20 + 1;
    lVar4 = local_38[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_38[0] + -8);
      if (0x1f < (local_38[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      uVar5 = local_20 + 0x28;
    }
    thunk_FUN_140327e20(lVar4,uVar5);
  }
  return (ulonglong)bVar2;
}



## raw_result.value.assembly

0x1401f6e90: PUSH RBX,0x1401f6e92: SUB RSP, 0x60,0x1401f6e96: MOV RAX, qword ptr [0x1404c7ac0],0x1401f6e9d: XOR RAX, RSP,0x1401f6ea0: MOV qword ptr [RSP + 0x50], RAX,0x1401f6ea5: MOV RBX, RCX,0x1401f6ea8: CMP qword ptr [RCX + 0x10], 0x0,0x1401f6ead: JNZ 0x1401f6ec4,0x1401f6eaf: XOR AL, AL,0x1401f6eb1: MOV RCX, qword ptr [RSP + 0x50],0x1401f6eb6: XOR RCX, RSP,0x1401f6eb9: CALL 0x140327740,0x1401f6ebe: ADD RSP, 0x60,0x1401f6ec2: POP RBX,0x1401f6ec3: RET,0x1401f6ec4: LEA RCX, [RSP + 0x30],0x1401f6ec9: CALL 0x140309c30,0x1401f6ece: NOP,0x1401f6ecf: CMP qword ptr [RAX + 0x18], 0xf,0x1401f6ed4: JBE 0x1401f6edb,0x1401f6ed6: MOV RCX, qword ptr [RAX],0x1401f6ed9: JMP 0x1401f6ede,0x1401f6edb: MOV RCX, RAX,0x1401f6ede: MOV qword ptr [RSP + 0x20], RCX,0x1401f6ee3: MOV RAX, qword ptr [RAX + 0x10],0x1401f6ee7: MOV qword ptr [RSP + 0x28], RAX,0x1401f6eec: LEA RDX, [RSP + 0x20],0x1401f6ef1: MOV RCX, RBX,0x1401f6ef4: CALL 0x140037f30,0x1401f6ef9: MOVZX EBX, AL,0x1401f6efc: MOV RDX, qword ptr [RSP + 0x48],0x1401f6f01: CMP RDX, 0xf,0x1401f6f05: JBE 0x1401f6f35,0x1401f6f07: INC RDX,0x1401f6f0a: MOV RCX, qword ptr [RSP + 0x30],0x1401f6f0f: CMP RDX, 0x1000,0x1401f6f16: JC 0x1401f6f30,0x1401f6f18: MOV R8, qword ptr [RCX + -0x8],0x1401f6f1c: SUB RCX, R8,0x1401f6f1f: SUB RCX, 0x8,0x1401f6f23: CMP RCX, 0x1f,0x1401f6f27: JA 0x1401f6f4b,0x1401f6f29: ADD RDX, 0x27,0x1401f6f2d: MOV RCX, R8,0x1401f6f30: CALL 0x1403272f0,0x1401f6f35: MOVZX EAX, BL,0x1401f6f38: MOV RCX, qword ptr [RSP + 0x50],0x1401f6f3d: XOR RCX, RSP,0x1401f6f40: CALL 0x140327740,0x1401f6f45: ADD RSP, 0x60,0x1401f6f49: POP RBX,0x1401f6f4a: RET,0x1401f6f4b: MOV ECX, 0x5,0x1401f6f50: INT 0x29,0x1401f6f52: INT3

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f5c80 | FUN_1401f5c80 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140037f30 | FUN_140037f30           | [object Object] | [object Object] |
| 0x140309c30 | FUN_140309c30           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f3191    | 0x1401f6e90    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d6d    | 0x1401f6e90    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfa74    | 0x1401f6e90    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f6e96    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f6ea0    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f6ead    | 0x1401f6ec4              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6eb1    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f6eb9    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6ec4    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f6ec9    | 0x140309c30              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6ed4    | 0x1401f6edb              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6ed9    | 0x1401f6ede              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6ede    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f6ee7    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f6eec    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f6ef4    | 0x140037f30              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6efc    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f6f05    | 0x1401f6f35              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6f0a    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f6f16    | 0x1401f6f30              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6f27    | 0x1401f6f4b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6f30    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6f38    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f6f40    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140037f30 | FUN_140037f30           | 0x1401f6ef4    |
| 0x1401f6ec4 | LAB_1401f6ec4           | 0x1401f6ead    |
| 0x1401f6edb | LAB_1401f6edb           | 0x1401f6ed4    |
| 0x1401f6ede | LAB_1401f6ede           | 0x1401f6ed9    |
| 0x1401f6f30 | LAB_1401f6f30           | 0x1401f6f16    |
| 0x1401f6f35 | LAB_1401f6f35           | 0x1401f6f05    |
| 0x1401f6f4b | LAB_1401f6f4b           | 0x1401f6f27    |
| 0x140309c30 | FUN_140309c30           | 0x1401f6ec9    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x1401f6f30    |
| 0x140327740 | __security_check_cookie | 0x1401f6eb9    |
| 0x140327740 | __security_check_cookie | 0x1401f6f40    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f6e96    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f6e90 | 0x1401f6eaf | 0x1401f6eaf,0x1401f6ec4 |
| 0x1401f6eaf | 0x1401f6ec4 |                         |
| 0x1401f6ec4 | 0x1401f6ed6 | 0x1401f6ed6,0x1401f6edb |
| 0x1401f6ed6 | 0x1401f6edb | 0x1401f6ede             |
| 0x1401f6edb | 0x1401f6ede | 0x1401f6ede             |
| 0x1401f6ede | 0x1401f6f07 | 0x1401f6f07,0x1401f6f35 |
| 0x1401f6f07 | 0x1401f6f18 | 0x1401f6f18,0x1401f6f30 |
| 0x1401f6f18 | 0x1401f6f29 | 0x1401f6f29,0x1401f6f4b |
| 0x1401f6f29 | 0x1401f6f30 | 0x1401f6f30             |
| 0x1401f6f30 | 0x1401f6f35 | 0x1401f6f35             |
| 0x1401f6f35 | 0x1401f6f4b |                         |
| 0x1401f6f4b | 0x1401f6f53 |                         |

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

| id              | address     | sequence | opcode     | is_dead | block_membership | inputs                                          | output          |
|-----------------|-------------|----------|------------|---------|------------------|-------------------------------------------------|-----------------|
| 0x1401f6e92#445 | 0x1401f6e92 | 445      | PTRSUB     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6e9d#15  | 0x1401f6e9d | 15       | INT_XOR    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6e9d#454 | 0x1401f6e9d | 454      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ea8#26  | 0x1401f6ea8 | 26       | INT_ADD    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ea8#27  | 0x1401f6ea8 | 27       | LOAD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ea8#33  | 0x1401f6ea8 | 33       | INT_EQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ea8#455 | 0x1401f6ea8 | 455      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ead#39  | 0x1401f6ead | 39       | CBRANCH    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6eaf#295 | 0x1401f6eaf | 295      | INT_AND    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec3#79  | 0x1401f6ec3 | 79       | RETURN     | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6ec3#396 | 0x1401f6ec3 | 396      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ec4#446 | 0x1401f6ec4 | 446      | PTRSUB     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#84  | 0x1401f6ec9 | 84       | CALL       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#391 | 0x1401f6ec9 | 391      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#418 | 0x1401f6ec9 | 418      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#424 | 0x1401f6ec9 | 424      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#430 | 0x1401f6ec9 | 430      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#456 | 0x1401f6ec9 | 456      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ecf#86  | 0x1401f6ecf | 86       | LOAD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ecf#447 | 0x1401f6ecf | 447      | PTRADD     | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f6ed4#97  | 0x1401f6ed4 | 97       | INT_LESS   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ed4#98  | 0x1401f6ed4 | 98       | CBRANCH    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6ed4#453 | 0x1401f6ed4 | 453      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ed4#457 | 0x1401f6ed4 | 457      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ed6#99  | 0x1401f6ed6 | 99       | LOAD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ed6#458 | 0x1401f6ed6 | 458      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ed9#101 | 0x1401f6ed9 | 101      | BRANCH     | true    | member           | [object Object]                                 |                 |
| 0x1401f6ed9#452 | 0x1401f6ed9 | 452      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ede#311 | 0x1401f6ede | 311      | MULTIEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ee3#106 | 0x1401f6ee3 | 106      | LOAD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ee3#448 | 0x1401f6ee3 | 448      | PTRADD     | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f6eec#449 | 0x1401f6eec | 449      | PTRSUB     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#116 | 0x1401f6ef4 | 116      | CALL       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f6ef4#392 | 0x1401f6ef4 | 392      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#407 | 0x1401f6ef4 | 407      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#413 | 0x1401f6ef4 | 413      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#419 | 0x1401f6ef4 | 419      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#425 | 0x1401f6ef4 | 425      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#431 | 0x1401f6ef4 | 431      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f05#132 | 0x1401f6f05 | 132      | INT_LESS   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f05#133 | 0x1401f6f05 | 133      | CBRANCH    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f07#135 | 0x1401f6f07 | 135      | INT_ADD    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f0f#146 | 0x1401f6f0f | 146      | INT_LESS   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f16#155 | 0x1401f6f16 | 155      | CBRANCH    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f16#451 | 0x1401f6f16 | 451      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f18#156 | 0x1401f6f18 | 156      | INT_ADD    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f18#157 | 0x1401f6f18 | 157      | LOAD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f18#459 | 0x1401f6f18 | 459      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f1c#161 | 0x1401f6f1c | 161      | INT_SUB    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f1f#170 | 0x1401f6f1f | 170      | INT_SUB    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f27#187 | 0x1401f6f27 | 187      | INT_LESS   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f27#189 | 0x1401f6f27 | 189      | CBRANCH    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f29#192 | 0x1401f6f29 | 192      | INT_ADD    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#202 | 0x1401f6f30 | 202      | CALL       | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f6f30#309 | 0x1401f6f30 | 309      | MULTIEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#317 | 0x1401f6f30 | 317      | MULTIEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#395 | 0x1401f6f30 | 395      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#410 | 0x1401f6f30 | 410      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#416 | 0x1401f6f30 | 416      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#434 | 0x1401f6f30 | 434      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f35#204 | 0x1401f6f35 | 204      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f35#297 | 0x1401f6f35 | 297      | INT_ZEXT   | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f35#399 | 0x1401f6f35 | 399      | MULTIEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f4a#235 | 0x1401f6f4a | 235      | RETURN     | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f4a#397 | 0x1401f6f4a | 397      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f50#237 | 0x1401f6f50 | 237      | CALLOTHER  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f50#238 | 0x1401f6f50 | 238      | CALLIND    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f50#393 | 0x1401f6f50 | 393      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f50#408 | 0x1401f6f50 | 408      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f50#414 | 0x1401f6f50 | 414      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f50#432 | 0x1401f6f50 | 432      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f50#460 | 0x1401f6f50 | 460      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f52#239 | 0x1401f6f52 | 239      | CALLOTHER  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f52#240 | 0x1401f6f52 | 240      | CALLIND    | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f52#241 | 0x1401f6f52 | 241      | RETURN     | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f52#394 | 0x1401f6f52 | 394      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f52#398 | 0x1401f6f52 | 398      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f52#409 | 0x1401f6f52 | 409      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f52#415 | 0x1401f6f52 | 415      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f52#433 | 0x1401f6f52 | 433      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f52#461 | 0x1401f6f52 | 461      | CAST       | true    | member           | [object Object]                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f6e9d#454 | 0x1401f6e9d#15  | 1           |
| 0x1401f6e92#445 | 0x1401f6e9d#454 | 0           |
| 0x1401f6ea8#455 | 0x1401f6ea8#27  | 1           |
| 0x1401f6ea8#27  | 0x1401f6ea8#33  | 0           |
| 0x1401f6ea8#26  | 0x1401f6ea8#455 | 0           |
| 0x1401f6ea8#33  | 0x1401f6ead#39  | 1           |
| 0x1401f6e9d#15  | 0x1401f6eaf#295 | 0           |
| 0x1401f6eaf#295 | 0x1401f6ec3#79  | 1           |
| 0x1401f6ec4#446 | 0x1401f6ec9#84  | 1           |
| 0x1401f6e9d#15  | 0x1401f6ec9#430 | 0           |
| 0x1401f6ec9#84  | 0x1401f6ec9#456 | 0           |
| 0x1401f6ecf#447 | 0x1401f6ecf#86  | 1           |
| 0x1401f6ec9#456 | 0x1401f6ecf#447 | 0           |
| 0x1401f6ed4#457 | 0x1401f6ed4#97  | 1           |
| 0x1401f6ed4#97  | 0x1401f6ed4#98  | 1           |
| 0x1401f6ec9#456 | 0x1401f6ed4#453 | 0           |
| 0x1401f6ecf#86  | 0x1401f6ed4#457 | 0           |
| 0x1401f6ec9#456 | 0x1401f6ed6#99  | 1           |
| 0x1401f6ed6#99  | 0x1401f6ed6#458 | 0           |
| 0x1401f6ed6#458 | 0x1401f6ed9#452 | 0           |
| 0x1401f6ed9#452 | 0x1401f6ede#311 | 0           |
| 0x1401f6ed4#453 | 0x1401f6ede#311 | 1           |
| 0x1401f6ee3#448 | 0x1401f6ee3#106 | 1           |
| 0x1401f6ec9#456 | 0x1401f6ee3#448 | 0           |
| 0x1401f6eec#449 | 0x1401f6ef4#116 | 2           |
| 0x1401f6ec9#391 | 0x1401f6ef4#392 | 0           |
| 0x1401f6ede#311 | 0x1401f6ef4#407 | 0           |
| 0x1401f6ee3#106 | 0x1401f6ef4#413 | 0           |
| 0x1401f6ec9#418 | 0x1401f6ef4#419 | 0           |
| 0x1401f6ec9#424 | 0x1401f6ef4#425 | 0           |
| 0x1401f6ec9#430 | 0x1401f6ef4#431 | 0           |
| 0x1401f6ef4#425 | 0x1401f6f05#132 | 1           |
| 0x1401f6f05#132 | 0x1401f6f05#133 | 1           |
| 0x1401f6ef4#425 | 0x1401f6f07#135 | 0           |
| 0x1401f6f07#135 | 0x1401f6f0f#146 | 1           |
| 0x1401f6f0f#146 | 0x1401f6f16#155 | 1           |
| 0x1401f6ef4#419 | 0x1401f6f16#451 | 0           |
| 0x1401f6ef4#419 | 0x1401f6f18#156 | 0           |
| 0x1401f6f18#459 | 0x1401f6f18#157 | 1           |
| 0x1401f6f18#156 | 0x1401f6f18#459 | 0           |
| 0x1401f6ef4#419 | 0x1401f6f1c#161 | 0           |
| 0x1401f6f18#157 | 0x1401f6f1c#161 | 1           |
| 0x1401f6f1c#161 | 0x1401f6f1f#170 | 0           |
| 0x1401f6f1f#170 | 0x1401f6f27#187 | 1           |
| 0x1401f6f27#187 | 0x1401f6f27#189 | 1           |
| 0x1401f6ef4#425 | 0x1401f6f29#192 | 0           |
| 0x1401f6f30#309 | 0x1401f6f30#202 | 1           |
| 0x1401f6f30#317 | 0x1401f6f30#202 | 2           |
| 0x1401f6f16#451 | 0x1401f6f30#309 | 0           |
| 0x1401f6f18#157 | 0x1401f6f30#309 | 1           |
| 0x1401f6f07#135 | 0x1401f6f30#317 | 0           |
| 0x1401f6f29#192 | 0x1401f6f30#317 | 1           |
| 0x1401f6ef4#392 | 0x1401f6f30#395 | 0           |
| 0x1401f6ef4#407 | 0x1401f6f30#410 | 0           |
| 0x1401f6ef4#413 | 0x1401f6f30#416 | 0           |
| 0x1401f6ef4#431 | 0x1401f6f30#434 | 0           |
| 0x1401f6f35#297 | 0x1401f6f35#204 | 0           |
| 0x1401f6ef4#116 | 0x1401f6f35#297 | 0           |
| 0x1401f6ef4#392 | 0x1401f6f35#399 | 0           |
| 0x1401f6f30#395 | 0x1401f6f35#399 | 1           |
| 0x1401f6f35#204 | 0x1401f6f4a#235 | 1           |
| 0x1401f6f35#399 | 0x1401f6f4a#397 | 0           |
| 0x1401f6f50#460 | 0x1401f6f50#238 | 0           |
| 0x1401f6ef4#392 | 0x1401f6f50#393 | 0           |
| 0x1401f6ef4#407 | 0x1401f6f50#408 | 0           |
| 0x1401f6ef4#413 | 0x1401f6f50#414 | 0           |
| 0x1401f6ef4#431 | 0x1401f6f50#432 | 0           |
| 0x1401f6f50#237 | 0x1401f6f50#460 | 0           |
| 0x1401f6f52#461 | 0x1401f6f52#240 | 0           |
| 0x1401f6f52#240 | 0x1401f6f52#241 | 1           |
| 0x1401f6f50#393 | 0x1401f6f52#394 | 0           |
| 0x1401f6f52#394 | 0x1401f6f52#398 | 0           |
| 0x1401f6f50#408 | 0x1401f6f52#409 | 0           |
| 0x1401f6f50#414 | 0x1401f6f52#415 | 0           |
| 0x1401f6f50#432 | 0x1401f6f52#433 | 0           |
| 0x1401f6f52#239 | 0x1401f6f52#461 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f6ea8#26  | 0           |
| 0       | 0x1401f6ef4#116 | 1           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f6ea8#27  | memory_read        | 1             |             |
| 0x1401f6ead#39  | conditional_branch |               | 1           |
| 0x1401f6ec9#84  | direct_call        | 0             |             |
| 0x1401f6ecf#86  | memory_read        | 1             |             |
| 0x1401f6ed4#98  | conditional_branch |               | 1           |
| 0x1401f6ed6#99  | memory_read        | 1             |             |
| 0x1401f6ee3#106 | memory_read        | 1             |             |
| 0x1401f6ef4#116 | direct_call        | 0             |             |
| 0x1401f6f05#133 | conditional_branch |               | 1           |
| 0x1401f6f16#155 | conditional_branch |               | 1           |
| 0x1401f6f18#157 | memory_read        | 1             |             |
| 0x1401f6f27#189 | conditional_branch |               | 1           |
| 0x1401f6f30#202 | direct_call        | 0             |             |
| 0x1401f6f50#238 | indirect_call      | 0             |             |
| 0x1401f6f52#240 | indirect_call      | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f6f52 with no resolved callee; its no-return basis is unknown.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401f6f52 with no resolved callee; its no-return basis is unknown.

## normalized_result.procedure.address

0x1401f6e90

## normalized_result.procedure.name

FUN_1401f6e90

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
| 0x1401f6e90 | 0x1401f6f52 |

## normalized_result.procedure.body.total_bytes

195

## normalized_result.procedure.body.span_bytes

195

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f6e90()

## normalized_result.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_18 @ Stack[-0x18]:8 | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8 | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8 | ghidra-function-database |
| undefined8 local_48 @ Stack[-0x48]:8 | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1401f6e90(longlong param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return local_18 & 0xffffffffffffff00;
  }
  puVar3 = (undefined8 *)FUN_140309c30(local_38);
  local_48 = puVar3;
  if (0xf < (ulonglong)puVar3[3]) {
    local_48 = (undefined8 *)*puVar3;
  }
  local_40 = puVar3[2];
  bVar2 = FUN_140037f30(param_1,&local_48);
  if (0xf < local_20) {
    uVar5 = local_20 + 1;
    lVar4 = local_38[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_38[0] + -8);
      if (0x1f < (local_38[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      uVar5 = local_20 + 0x28;
    }
    thunk_FUN_140327e20(lVar4,uVar5);
  }
  return (ulonglong)bVar2;
}



## normalized_result.assembly

0x1401f6e90: PUSH RBX,0x1401f6e92: SUB RSP, 0x60,0x1401f6e96: MOV RAX, qword ptr [0x1404c7ac0],0x1401f6e9d: XOR RAX, RSP,0x1401f6ea0: MOV qword ptr [RSP + 0x50], RAX,0x1401f6ea5: MOV RBX, RCX,0x1401f6ea8: CMP qword ptr [RCX + 0x10], 0x0,0x1401f6ead: JNZ 0x1401f6ec4,0x1401f6eaf: XOR AL, AL,0x1401f6eb1: MOV RCX, qword ptr [RSP + 0x50],0x1401f6eb6: XOR RCX, RSP,0x1401f6eb9: CALL 0x140327740,0x1401f6ebe: ADD RSP, 0x60,0x1401f6ec2: POP RBX,0x1401f6ec3: RET,0x1401f6ec4: LEA RCX, [RSP + 0x30],0x1401f6ec9: CALL 0x140309c30,0x1401f6ece: NOP,0x1401f6ecf: CMP qword ptr [RAX + 0x18], 0xf,0x1401f6ed4: JBE 0x1401f6edb,0x1401f6ed6: MOV RCX, qword ptr [RAX],0x1401f6ed9: JMP 0x1401f6ede,0x1401f6edb: MOV RCX, RAX,0x1401f6ede: MOV qword ptr [RSP + 0x20], RCX,0x1401f6ee3: MOV RAX, qword ptr [RAX + 0x10],0x1401f6ee7: MOV qword ptr [RSP + 0x28], RAX,0x1401f6eec: LEA RDX, [RSP + 0x20],0x1401f6ef1: MOV RCX, RBX,0x1401f6ef4: CALL 0x140037f30,0x1401f6ef9: MOVZX EBX, AL,0x1401f6efc: MOV RDX, qword ptr [RSP + 0x48],0x1401f6f01: CMP RDX, 0xf,0x1401f6f05: JBE 0x1401f6f35,0x1401f6f07: INC RDX,0x1401f6f0a: MOV RCX, qword ptr [RSP + 0x30],0x1401f6f0f: CMP RDX, 0x1000,0x1401f6f16: JC 0x1401f6f30,0x1401f6f18: MOV R8, qword ptr [RCX + -0x8],0x1401f6f1c: SUB RCX, R8,0x1401f6f1f: SUB RCX, 0x8,0x1401f6f23: CMP RCX, 0x1f,0x1401f6f27: JA 0x1401f6f4b,0x1401f6f29: ADD RDX, 0x27,0x1401f6f2d: MOV RCX, R8,0x1401f6f30: CALL 0x1403272f0,0x1401f6f35: MOVZX EAX, BL,0x1401f6f38: MOV RCX, qword ptr [RSP + 0x50],0x1401f6f3d: XOR RCX, RSP,0x1401f6f40: CALL 0x140327740,0x1401f6f45: ADD RSP, 0x60,0x1401f6f49: POP RBX,0x1401f6f4a: RET,0x1401f6f4b: MOV ECX, 0x5,0x1401f6f50: INT 0x29,0x1401f6f52: INT3

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f5c80 | FUN_1401f5c80 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140037f30 | FUN_140037f30           | [object Object] | [object Object] |
| 0x140309c30 | FUN_140309c30           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f3191    | 0x1401f6e90    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d6d    | 0x1401f6e90    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfa74    | 0x1401f6e90    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f6e96    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f6ea0    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f6ead    | 0x1401f6ec4              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6eb1    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f6eb9    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6ec4    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f6ec9    | 0x140309c30              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6ed4    | 0x1401f6edb              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6ed9    | 0x1401f6ede              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6ede    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f6ee7    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f6eec    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f6ef4    | 0x140037f30              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6efc    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f6f05    | 0x1401f6f35              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6f0a    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f6f16    | 0x1401f6f30              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6f27    | 0x1401f6f4b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6f30    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6f38    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f6f40    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140037f30 | FUN_140037f30           | 0x1401f6ef4    |
| 0x1401f6ec4 | LAB_1401f6ec4           | 0x1401f6ead    |
| 0x1401f6edb | LAB_1401f6edb           | 0x1401f6ed4    |
| 0x1401f6ede | LAB_1401f6ede           | 0x1401f6ed9    |
| 0x1401f6f30 | LAB_1401f6f30           | 0x1401f6f16    |
| 0x1401f6f35 | LAB_1401f6f35           | 0x1401f6f05    |
| 0x1401f6f4b | LAB_1401f6f4b           | 0x1401f6f27    |
| 0x140309c30 | FUN_140309c30           | 0x1401f6ec9    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x1401f6f30    |
| 0x140327740 | __security_check_cookie | 0x1401f6eb9    |
| 0x140327740 | __security_check_cookie | 0x1401f6f40    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f6e96    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f6e90 | 0x1401f6eaf | 0x1401f6eaf,0x1401f6ec4 |
| 0x1401f6eaf | 0x1401f6ec4 |                         |
| 0x1401f6ec4 | 0x1401f6ed6 | 0x1401f6ed6,0x1401f6edb |
| 0x1401f6ed6 | 0x1401f6edb | 0x1401f6ede             |
| 0x1401f6edb | 0x1401f6ede | 0x1401f6ede             |
| 0x1401f6ede | 0x1401f6f07 | 0x1401f6f07,0x1401f6f35 |
| 0x1401f6f07 | 0x1401f6f18 | 0x1401f6f18,0x1401f6f30 |
| 0x1401f6f18 | 0x1401f6f29 | 0x1401f6f29,0x1401f6f4b |
| 0x1401f6f29 | 0x1401f6f30 | 0x1401f6f30             |
| 0x1401f6f30 | 0x1401f6f35 | 0x1401f6f35             |
| 0x1401f6f35 | 0x1401f6f4b |                         |
| 0x1401f6f4b | 0x1401f6f53 |                         |

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

| id              | address     | sequence | opcode     | is_dead | block_membership | inputs                                          | output          |
|-----------------|-------------|----------|------------|---------|------------------|-------------------------------------------------|-----------------|
| 0x1401f6e92#445 | 0x1401f6e92 | 445      | PTRSUB     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6e9d#15  | 0x1401f6e9d | 15       | INT_XOR    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6e9d#454 | 0x1401f6e9d | 454      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ea8#26  | 0x1401f6ea8 | 26       | INT_ADD    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ea8#27  | 0x1401f6ea8 | 27       | LOAD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ea8#33  | 0x1401f6ea8 | 33       | INT_EQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ea8#455 | 0x1401f6ea8 | 455      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ead#39  | 0x1401f6ead | 39       | CBRANCH    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6eaf#295 | 0x1401f6eaf | 295      | INT_AND    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec3#79  | 0x1401f6ec3 | 79       | RETURN     | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6ec3#396 | 0x1401f6ec3 | 396      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ec4#446 | 0x1401f6ec4 | 446      | PTRSUB     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#84  | 0x1401f6ec9 | 84       | CALL       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#391 | 0x1401f6ec9 | 391      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#418 | 0x1401f6ec9 | 418      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#424 | 0x1401f6ec9 | 424      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#430 | 0x1401f6ec9 | 430      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ec9#456 | 0x1401f6ec9 | 456      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ecf#86  | 0x1401f6ecf | 86       | LOAD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ecf#447 | 0x1401f6ecf | 447      | PTRADD     | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f6ed4#97  | 0x1401f6ed4 | 97       | INT_LESS   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ed4#98  | 0x1401f6ed4 | 98       | CBRANCH    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6ed4#453 | 0x1401f6ed4 | 453      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ed4#457 | 0x1401f6ed4 | 457      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ed6#99  | 0x1401f6ed6 | 99       | LOAD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ed6#458 | 0x1401f6ed6 | 458      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ed9#101 | 0x1401f6ed9 | 101      | BRANCH     | true    | member           | [object Object]                                 |                 |
| 0x1401f6ed9#452 | 0x1401f6ed9 | 452      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ede#311 | 0x1401f6ede | 311      | MULTIEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ee3#106 | 0x1401f6ee3 | 106      | LOAD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ee3#448 | 0x1401f6ee3 | 448      | PTRADD     | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f6eec#449 | 0x1401f6eec | 449      | PTRSUB     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#116 | 0x1401f6ef4 | 116      | CALL       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f6ef4#392 | 0x1401f6ef4 | 392      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#407 | 0x1401f6ef4 | 407      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#413 | 0x1401f6ef4 | 413      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#419 | 0x1401f6ef4 | 419      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#425 | 0x1401f6ef4 | 425      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ef4#431 | 0x1401f6ef4 | 431      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f05#132 | 0x1401f6f05 | 132      | INT_LESS   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f05#133 | 0x1401f6f05 | 133      | CBRANCH    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f07#135 | 0x1401f6f07 | 135      | INT_ADD    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f0f#146 | 0x1401f6f0f | 146      | INT_LESS   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f16#155 | 0x1401f6f16 | 155      | CBRANCH    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f16#451 | 0x1401f6f16 | 451      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f18#156 | 0x1401f6f18 | 156      | INT_ADD    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f18#157 | 0x1401f6f18 | 157      | LOAD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f18#459 | 0x1401f6f18 | 459      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f1c#161 | 0x1401f6f1c | 161      | INT_SUB    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f1f#170 | 0x1401f6f1f | 170      | INT_SUB    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f27#187 | 0x1401f6f27 | 187      | INT_LESS   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f27#189 | 0x1401f6f27 | 189      | CBRANCH    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f29#192 | 0x1401f6f29 | 192      | INT_ADD    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#202 | 0x1401f6f30 | 202      | CALL       | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f6f30#309 | 0x1401f6f30 | 309      | MULTIEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#317 | 0x1401f6f30 | 317      | MULTIEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#395 | 0x1401f6f30 | 395      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#410 | 0x1401f6f30 | 410      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#416 | 0x1401f6f30 | 416      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f30#434 | 0x1401f6f30 | 434      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f35#204 | 0x1401f6f35 | 204      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f35#297 | 0x1401f6f35 | 297      | INT_ZEXT   | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f35#399 | 0x1401f6f35 | 399      | MULTIEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f4a#235 | 0x1401f6f4a | 235      | RETURN     | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f4a#397 | 0x1401f6f4a | 397      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f50#237 | 0x1401f6f50 | 237      | CALLOTHER  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f50#238 | 0x1401f6f50 | 238      | CALLIND    | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f50#393 | 0x1401f6f50 | 393      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f50#408 | 0x1401f6f50 | 408      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f50#414 | 0x1401f6f50 | 414      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f50#432 | 0x1401f6f50 | 432      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f50#460 | 0x1401f6f50 | 460      | CAST       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f52#239 | 0x1401f6f52 | 239      | CALLOTHER  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f52#240 | 0x1401f6f52 | 240      | CALLIND    | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f52#241 | 0x1401f6f52 | 241      | RETURN     | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6f52#394 | 0x1401f6f52 | 394      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f52#398 | 0x1401f6f52 | 398      | COPY       | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f52#409 | 0x1401f6f52 | 409      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f52#415 | 0x1401f6f52 | 415      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f52#433 | 0x1401f6f52 | 433      | INDIRECT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f52#461 | 0x1401f6f52 | 461      | CAST       | true    | member           | [object Object]                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f6e9d#454 | 0x1401f6e9d#15  | 1           |
| 0x1401f6e92#445 | 0x1401f6e9d#454 | 0           |
| 0x1401f6ea8#455 | 0x1401f6ea8#27  | 1           |
| 0x1401f6ea8#27  | 0x1401f6ea8#33  | 0           |
| 0x1401f6ea8#26  | 0x1401f6ea8#455 | 0           |
| 0x1401f6ea8#33  | 0x1401f6ead#39  | 1           |
| 0x1401f6e9d#15  | 0x1401f6eaf#295 | 0           |
| 0x1401f6eaf#295 | 0x1401f6ec3#79  | 1           |
| 0x1401f6ec4#446 | 0x1401f6ec9#84  | 1           |
| 0x1401f6e9d#15  | 0x1401f6ec9#430 | 0           |
| 0x1401f6ec9#84  | 0x1401f6ec9#456 | 0           |
| 0x1401f6ecf#447 | 0x1401f6ecf#86  | 1           |
| 0x1401f6ec9#456 | 0x1401f6ecf#447 | 0           |
| 0x1401f6ed4#457 | 0x1401f6ed4#97  | 1           |
| 0x1401f6ed4#97  | 0x1401f6ed4#98  | 1           |
| 0x1401f6ec9#456 | 0x1401f6ed4#453 | 0           |
| 0x1401f6ecf#86  | 0x1401f6ed4#457 | 0           |
| 0x1401f6ec9#456 | 0x1401f6ed6#99  | 1           |
| 0x1401f6ed6#99  | 0x1401f6ed6#458 | 0           |
| 0x1401f6ed6#458 | 0x1401f6ed9#452 | 0           |
| 0x1401f6ed9#452 | 0x1401f6ede#311 | 0           |
| 0x1401f6ed4#453 | 0x1401f6ede#311 | 1           |
| 0x1401f6ee3#448 | 0x1401f6ee3#106 | 1           |
| 0x1401f6ec9#456 | 0x1401f6ee3#448 | 0           |
| 0x1401f6eec#449 | 0x1401f6ef4#116 | 2           |
| 0x1401f6ec9#391 | 0x1401f6ef4#392 | 0           |
| 0x1401f6ede#311 | 0x1401f6ef4#407 | 0           |
| 0x1401f6ee3#106 | 0x1401f6ef4#413 | 0           |
| 0x1401f6ec9#418 | 0x1401f6ef4#419 | 0           |
| 0x1401f6ec9#424 | 0x1401f6ef4#425 | 0           |
| 0x1401f6ec9#430 | 0x1401f6ef4#431 | 0           |
| 0x1401f6ef4#425 | 0x1401f6f05#132 | 1           |
| 0x1401f6f05#132 | 0x1401f6f05#133 | 1           |
| 0x1401f6ef4#425 | 0x1401f6f07#135 | 0           |
| 0x1401f6f07#135 | 0x1401f6f0f#146 | 1           |
| 0x1401f6f0f#146 | 0x1401f6f16#155 | 1           |
| 0x1401f6ef4#419 | 0x1401f6f16#451 | 0           |
| 0x1401f6ef4#419 | 0x1401f6f18#156 | 0           |
| 0x1401f6f18#459 | 0x1401f6f18#157 | 1           |
| 0x1401f6f18#156 | 0x1401f6f18#459 | 0           |
| 0x1401f6ef4#419 | 0x1401f6f1c#161 | 0           |
| 0x1401f6f18#157 | 0x1401f6f1c#161 | 1           |
| 0x1401f6f1c#161 | 0x1401f6f1f#170 | 0           |
| 0x1401f6f1f#170 | 0x1401f6f27#187 | 1           |
| 0x1401f6f27#187 | 0x1401f6f27#189 | 1           |
| 0x1401f6ef4#425 | 0x1401f6f29#192 | 0           |
| 0x1401f6f30#309 | 0x1401f6f30#202 | 1           |
| 0x1401f6f30#317 | 0x1401f6f30#202 | 2           |
| 0x1401f6f16#451 | 0x1401f6f30#309 | 0           |
| 0x1401f6f18#157 | 0x1401f6f30#309 | 1           |
| 0x1401f6f07#135 | 0x1401f6f30#317 | 0           |
| 0x1401f6f29#192 | 0x1401f6f30#317 | 1           |
| 0x1401f6ef4#392 | 0x1401f6f30#395 | 0           |
| 0x1401f6ef4#407 | 0x1401f6f30#410 | 0           |
| 0x1401f6ef4#413 | 0x1401f6f30#416 | 0           |
| 0x1401f6ef4#431 | 0x1401f6f30#434 | 0           |
| 0x1401f6f35#297 | 0x1401f6f35#204 | 0           |
| 0x1401f6ef4#116 | 0x1401f6f35#297 | 0           |
| 0x1401f6ef4#392 | 0x1401f6f35#399 | 0           |
| 0x1401f6f30#395 | 0x1401f6f35#399 | 1           |
| 0x1401f6f35#204 | 0x1401f6f4a#235 | 1           |
| 0x1401f6f35#399 | 0x1401f6f4a#397 | 0           |
| 0x1401f6f50#460 | 0x1401f6f50#238 | 0           |
| 0x1401f6ef4#392 | 0x1401f6f50#393 | 0           |
| 0x1401f6ef4#407 | 0x1401f6f50#408 | 0           |
| 0x1401f6ef4#413 | 0x1401f6f50#414 | 0           |
| 0x1401f6ef4#431 | 0x1401f6f50#432 | 0           |
| 0x1401f6f50#237 | 0x1401f6f50#460 | 0           |
| 0x1401f6f52#461 | 0x1401f6f52#240 | 0           |
| 0x1401f6f52#240 | 0x1401f6f52#241 | 1           |
| 0x1401f6f50#393 | 0x1401f6f52#394 | 0           |
| 0x1401f6f52#394 | 0x1401f6f52#398 | 0           |
| 0x1401f6f50#408 | 0x1401f6f52#409 | 0           |
| 0x1401f6f50#414 | 0x1401f6f52#415 | 0           |
| 0x1401f6f50#432 | 0x1401f6f52#433 | 0           |
| 0x1401f6f52#239 | 0x1401f6f52#461 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f6ea8#27  | memory_read        | 1             |             |
| 0x1401f6ead#39  | conditional_branch |               | 1           |
| 0x1401f6ec9#84  | direct_call        | 0             |             |
| 0x1401f6ecf#86  | memory_read        | 1             |             |
| 0x1401f6ed4#98  | conditional_branch |               | 1           |
| 0x1401f6ed6#99  | memory_read        | 1             |             |
| 0x1401f6ee3#106 | memory_read        | 1             |             |
| 0x1401f6ef4#116 | direct_call        | 0             |             |
| 0x1401f6f05#133 | conditional_branch |               | 1           |
| 0x1401f6f16#155 | conditional_branch |               | 1           |
| 0x1401f6f18#157 | memory_read        | 1             |             |
| 0x1401f6f27#189 | conditional_branch |               | 1           |
| 0x1401f6f30#202 | direct_call        | 0             |             |
| 0x1401f6f50#238 | indirect_call      | 0             |             |
| 0x1401f6f52#240 | indirect_call      | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f6ea8#26  | 0           |
| 0       | 0x1401f6ef4#116 | 1           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f6f52 with no resolved callee; its no-return basis is unknown.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401f6f52 with no resolved callee; its no-return basis is unknown.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

