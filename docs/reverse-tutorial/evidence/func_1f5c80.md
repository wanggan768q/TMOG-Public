## evidence_id

ev_6ea60c82e749008c818a6e1e0c25021dc5b5870801881fcef9264d2f642b2967

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
| procedure | 0x1401f5c80 |

## raw_result.value.procedure.address

0x1401f5c80

## raw_result.value.procedure.name

FUN_1401f5c80

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
| 0x1401f5c80 | 0x1401f5dae |

## raw_result.value.procedure.body.total_bytes

303

## raw_result.value.procedure.body.span_bytes

303

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f5c80()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_20 @ Stack[-0x20]:8   | ghidra-function-database |
| undefined local_40 @ Stack[-0x40]:1    | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8   | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1401f5c80(undefined8 *param_1)

{
  void *_Buf2;
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_1404c7ac0 ^ (ulonglong)auStack_78;
  FUN_1401f4ef0(&local_58);
  if (local_58 != local_50) {
    _Buf2 = (void *)*param_1;
    lVar1 = param_1[1];
    puVar6 = local_58;
    do {
      sVar7 = puVar6[1] - (longlong)*puVar6;
      if (sVar7 == lVar1 - (longlong)_Buf2) {
        iVar4 = memcmp((void *)*puVar6,_Buf2,sVar7);
        if (iVar4 == 0) {
          sVar7 = puVar6[4] - (longlong)puVar6[3];
          if (sVar7 == param_1[4] - (longlong)param_1[3]) {
            iVar4 = memcmp((void *)puVar6[3],(void *)param_1[3],sVar7);
            if (iVar4 == 0) break;
          }
        }
      }
      puVar6 = puVar6 + 6;
    } while (puVar6 != local_50);
    if (puVar6 != local_50) {
      uVar3 = 1;
      goto LAB_1401f5d80;
    }
  }
  if (0x1f < (ulonglong)(((longlong)local_50 - (longlong)local_58) / 0x30)) {
    cVar2 = FUN_1401f3e30(local_58);
    if (cVar2 == '\0') {
      uVar3 = 0;
      goto LAB_1401f5d80;
    }
  }
  uVar5 = FUN_1401f5580(local_40,param_1);
  uVar3 = FUN_1401f6e90(uVar5,param_1);
  FUN_1400055b0(local_40);
LAB_1401f5d80:
  FUN_1401f73d0(&local_58);
  return uVar3;
}



## raw_result.value.assembly

0x1401f5c80: MOV qword ptr [RSP + 0x10], RBX,0x1401f5c85: MOV qword ptr [RSP + 0x18], RBP,0x1401f5c8a: PUSH RSI,0x1401f5c8b: PUSH RDI,0x1401f5c8c: PUSH R14,0x1401f5c8e: SUB RSP, 0x60,0x1401f5c92: MOV RAX, qword ptr [0x1404c7ac0],0x1401f5c99: XOR RAX, RSP,0x1401f5c9c: MOV qword ptr [RSP + 0x58], RAX,0x1401f5ca1: MOV RSI, RCX,0x1401f5ca4: LEA RCX, [RSP + 0x20],0x1401f5ca9: CALL 0x1401f4ef0,0x1401f5cae: NOP,0x1401f5caf: MOV RDI, qword ptr [RSP + 0x28],0x1401f5cb4: MOV RBX, qword ptr [RSP + 0x20],0x1401f5cb9: CMP RBX, RDI,0x1401f5cbc: JZ 0x1401f5d21,0x1401f5cbe: MOV R14, qword ptr [RSI],0x1401f5cc1: MOV RBP, qword ptr [RSI + 0x8],0x1401f5cc5: SUB RBP, R14,0x1401f5cc8: NOP dword ptr [RAX + RAX*0x1],0x1401f5cd0: MOV RCX, qword ptr [RBX],0x1401f5cd3: MOV R8, qword ptr [RBX + 0x8],0x1401f5cd7: SUB R8, RCX,0x1401f5cda: CMP R8, RBP,0x1401f5cdd: JNZ 0x1401f5d0f,0x1401f5cdf: MOV RDX, R14,0x1401f5ce2: CALL 0x14035fe70,0x1401f5ce7: TEST EAX, EAX,0x1401f5ce9: JNZ 0x1401f5d0f,0x1401f5ceb: MOV RDX, qword ptr [RSI + 0x18],0x1401f5cef: MOV RCX, qword ptr [RBX + 0x18],0x1401f5cf3: MOV R8, qword ptr [RBX + 0x20],0x1401f5cf7: SUB R8, RCX,0x1401f5cfa: MOV RAX, qword ptr [RSI + 0x20],0x1401f5cfe: SUB RAX, RDX,0x1401f5d01: CMP R8, RAX,0x1401f5d04: JNZ 0x1401f5d0f,0x1401f5d06: CALL 0x14035fe70,0x1401f5d0b: TEST EAX, EAX,0x1401f5d0d: JZ 0x1401f5d18,0x1401f5d0f: ADD RBX, 0x30,0x1401f5d13: CMP RBX, RDI,0x1401f5d16: JNZ 0x1401f5cd0,0x1401f5d18: CMP RBX, RDI,0x1401f5d1b: JZ 0x1401f5d21,0x1401f5d1d: MOV BL, 0x1,0x1401f5d1f: JMP 0x1401f5d80,0x1401f5d21: SUB RDI, qword ptr [RSP + 0x20],0x1401f5d26: MOV RAX, 0x2aaaaaaaaaaaaaab,0x1401f5d30: IMUL RDI,0x1401f5d33: SAR RDX, 0x3,0x1401f5d37: MOV RAX, RDX,0x1401f5d3a: SHR RAX, 0x3f,0x1401f5d3e: ADD RDX, RAX,0x1401f5d41: CMP RDX, 0x20,0x1401f5d45: JC 0x1401f5d59,0x1401f5d47: MOV RCX, qword ptr [RSP + 0x20],0x1401f5d4c: CALL 0x1401f3e30,0x1401f5d51: TEST AL, AL,0x1401f5d53: JNZ 0x1401f5d59,0x1401f5d55: XOR BL, BL,0x1401f5d57: JMP 0x1401f5d80,0x1401f5d59: MOV RDX, RSI,0x1401f5d5c: LEA RCX, [RSP + 0x38],0x1401f5d61: CALL 0x1401f5580,0x1401f5d66: NOP,0x1401f5d67: MOV RDX, RSI,0x1401f5d6a: MOV RCX, RAX,0x1401f5d6d: CALL 0x1401f6e90,0x1401f5d72: MOVZX EBX, AL,0x1401f5d75: LEA RCX, [RSP + 0x38],0x1401f5d7a: CALL 0x1400055b0,0x1401f5d7f: NOP,0x1401f5d80: LEA RCX, [RSP + 0x20],0x1401f5d85: CALL 0x1401f73d0,0x1401f5d8a: MOVZX EAX, BL,0x1401f5d8d: MOV RCX, qword ptr [RSP + 0x58],0x1401f5d92: XOR RCX, RSP,0x1401f5d95: CALL 0x140327740,0x1401f5d9a: LEA R11, [RSP + 0x60],0x1401f5d9f: MOV RBX, qword ptr [R11 + 0x28],0x1401f5da3: MOV RBP, qword ptr [R11 + 0x30],0x1401f5da7: MOV RSP, R11,0x1401f5daa: POP R14,0x1401f5dac: POP RDI,0x1401f5dad: POP RSI,0x1401f5dae: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1400055b0 | FUN_1400055b0           | [object Object] | [object Object] |
| 0x1401f3e30 | FUN_1401f3e30           | [object Object] | [object Object] |
| 0x1401f4ef0 | FUN_1401f4ef0           | [object Object] | [object Object] |
| 0x1401f5580 | FUN_1401f5580           | [object Object] | [object Object] |
| 0x1401f6e90 | FUN_1401f6e90           | [object Object] | [object Object] |
| 0x1401f73d0 | FUN_1401f73d0           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |
| 0x14035fe70 | memcmp                  | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f3317    | 0x1401f5c80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f40b3    | 0x1401f5c80    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfa50    | 0x1401f5c80    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f5c80    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401f5c85    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401f5c92    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f5c9c    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f5ca4    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5ca9    | 0x1401f4ef0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5caf    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f5cb4    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5cbc    | 0x1401f5d21              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5cdd    | 0x1401f5d0f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5ce2    | 0x14035fe70              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5ce9    | 0x1401f5d0f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d04    | 0x1401f5d0f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d06    | 0x14035fe70              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d0d    | 0x1401f5d18              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d16    | 0x1401f5cd0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d1b    | 0x1401f5d21              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d1f    | 0x1401f5d80              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d21    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5d45    | 0x1401f5d59              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d47    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5d47    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5d4c    | 0x1401f3e30              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d53    | 0x1401f5d59              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d57    | 0x1401f5d80              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d5c    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f5d61    | 0x1401f5580              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d6d    | 0x1401f6e90              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d75    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f5d7a    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d80    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5d85    | 0x1401f73d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d8d    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f5d95    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d9a    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f5d9f    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401f5da3    | stack:0x10               | [object Object]  |                  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1400055b0 | FUN_1400055b0           | 0x1401f5d7a    |
| 0x1401f3e30 | FUN_1401f3e30           | 0x1401f5d4c    |
| 0x1401f4ef0 | FUN_1401f4ef0           | 0x1401f5ca9    |
| 0x1401f5580 | FUN_1401f5580           | 0x1401f5d61    |
| 0x1401f5cd0 | LAB_1401f5cd0           | 0x1401f5d16    |
| 0x1401f5d0f | LAB_1401f5d0f           | 0x1401f5cdd    |
| 0x1401f5d0f | LAB_1401f5d0f           | 0x1401f5ce9    |
| 0x1401f5d0f | LAB_1401f5d0f           | 0x1401f5d04    |
| 0x1401f5d18 | LAB_1401f5d18           | 0x1401f5d0d    |
| 0x1401f5d21 | LAB_1401f5d21           | 0x1401f5cbc    |
| 0x1401f5d21 | LAB_1401f5d21           | 0x1401f5d1b    |
| 0x1401f5d59 | LAB_1401f5d59           | 0x1401f5d45    |
| 0x1401f5d59 | LAB_1401f5d59           | 0x1401f5d53    |
| 0x1401f5d80 | LAB_1401f5d80           | 0x1401f5d1f    |
| 0x1401f5d80 | LAB_1401f5d80           | 0x1401f5d57    |
| 0x1401f6e90 | FUN_1401f6e90           | 0x1401f5d6d    |
| 0x1401f73d0 | FUN_1401f73d0           | 0x1401f5d85    |
| 0x140327740 | __security_check_cookie | 0x1401f5d95    |
| 0x14035fe70 | memcmp                  | 0x1401f5ce2    |
| 0x14035fe70 | memcmp                  | 0x1401f5d06    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f5c92    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f5c80 | 0x1401f5cbe | 0x1401f5cbe,0x1401f5d21 |
| 0x1401f5cbe | 0x1401f5cd0 | 0x1401f5cd0             |
| 0x1401f5cd0 | 0x1401f5cdf | 0x1401f5cdf,0x1401f5d0f |
| 0x1401f5cdf | 0x1401f5ceb | 0x1401f5ceb,0x1401f5d0f |
| 0x1401f5ceb | 0x1401f5d06 | 0x1401f5d06,0x1401f5d0f |
| 0x1401f5d06 | 0x1401f5d0f | 0x1401f5d0f,0x1401f5d18 |
| 0x1401f5d0f | 0x1401f5d18 | 0x1401f5cd0,0x1401f5d18 |
| 0x1401f5d18 | 0x1401f5d1d | 0x1401f5d1d,0x1401f5d21 |
| 0x1401f5d1d | 0x1401f5d21 | 0x1401f5d80             |
| 0x1401f5d21 | 0x1401f5d47 | 0x1401f5d47,0x1401f5d59 |
| 0x1401f5d47 | 0x1401f5d55 | 0x1401f5d55,0x1401f5d59 |
| 0x1401f5d55 | 0x1401f5d59 | 0x1401f5d80             |
| 0x1401f5d59 | 0x1401f5d80 | 0x1401f5d80             |
| 0x1401f5d80 | 0x1401f5daf |                         |

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

undefined1

## raw_result.value.native_api.return_type.size_bytes

1

## raw_result.value.native_api.return_type.storage

AL:1

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                       |
|------------------|-------------------------|----------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.        |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined1. |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x1401f5c8e#944 | 0x1401f5c8e | 944      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5c99#27  | 0x1401f5c99 | 27       | INT_XOR      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5c99#957 | 0x1401f5c99 | 957      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5ca4#945 | 0x1401f5ca4 | 945      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ca9#42  | 0x1401f5ca9 | 42       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5ca9#794 | 0x1401f5ca9 | 794      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ca9#851 | 0x1401f5ca9 | 851      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ca9#865 | 0x1401f5ca9 | 865      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ca9#879 | 0x1401f5ca9 | 879      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cb9#54  | 0x1401f5cb9 | 54       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cbc#59  | 0x1401f5cbc | 59       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5cbe#60  | 0x1401f5cbe | 60       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cbe#958 | 0x1401f5cbe | 958      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cc1#63  | 0x1401f5cc1 | 63       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cc1#946 | 0x1401f5cc1 | 946      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5cc5#67  | 0x1401f5cc5 | 67       | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cc5#959 | 0x1401f5cc5 | 959      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cc8#956 | 0x1401f5cc8 | 956      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cd0#76  | 0x1401f5cd0 | 76       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd0#630 | 0x1401f5cd0 | 630      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd0#807 | 0x1401f5cd0 | 807      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd0#863 | 0x1401f5cd0 | 863      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd0#891 | 0x1401f5cd0 | 891      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd0#960 | 0x1401f5cd0 | 960      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cd3#79  | 0x1401f5cd3 | 79       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd3#947 | 0x1401f5cd3 | 947      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5cd7#83  | 0x1401f5cd7 | 83       | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd7#961 | 0x1401f5cd7 | 961      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cda#95  | 0x1401f5cda | 95       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cdd#101 | 0x1401f5cdd | 101      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5ce2#105 | 0x1401f5ce2 | 105      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f5ce2#795 | 0x1401f5ce2 | 795      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ce2#852 | 0x1401f5ce2 | 852      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ce2#880 | 0x1401f5ce2 | 880      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ce7#110 | 0x1401f5ce7 | 110      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ce9#116 | 0x1401f5ce9 | 116      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5ceb#118 | 0x1401f5ceb | 118      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ceb#948 | 0x1401f5ceb | 948      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5ceb#962 | 0x1401f5ceb | 962      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cef#121 | 0x1401f5cef | 121      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cef#949 | 0x1401f5cef | 949      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5cef#963 | 0x1401f5cef | 963      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cf3#124 | 0x1401f5cf3 | 124      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cf3#950 | 0x1401f5cf3 | 950      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5cf7#128 | 0x1401f5cf7 | 128      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cf7#964 | 0x1401f5cf7 | 964      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cfa#136 | 0x1401f5cfa | 136      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cfa#951 | 0x1401f5cfa | 951      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5cfe#140 | 0x1401f5cfe | 140      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cfe#965 | 0x1401f5cfe | 965      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d01#152 | 0x1401f5d01 | 152      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d04#158 | 0x1401f5d04 | 158      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d06#161 | 0x1401f5d06 | 161      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f5d06#796 | 0x1401f5d06 | 796      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d06#853 | 0x1401f5d06 | 853      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d06#881 | 0x1401f5d06 | 881      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d0b#166 | 0x1401f5d0b | 166      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d0d#171 | 0x1401f5d0d | 171      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d0f#803 | 0x1401f5d0f | 803      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f5d0f#859 | 0x1401f5d0f | 859      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f5d0f#887 | 0x1401f5d0f | 887      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f5d0f#952 | 0x1401f5d0f | 952      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d13#186 | 0x1401f5d13 | 186      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d16#192 | 0x1401f5d16 | 192      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d18#198 | 0x1401f5d18 | 198      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d18#631 | 0x1401f5d18 | 631      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d18#804 | 0x1401f5d18 | 804      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d18#860 | 0x1401f5d18 | 860      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d18#888 | 0x1401f5d18 | 888      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d1b#203 | 0x1401f5d1b | 203      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d1d#788 | 0x1401f5d1d | 788      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d1f#205 | 0x1401f5d1f | 205      | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f5d21#258 | 0x1401f5d21 | 258      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d21#805 | 0x1401f5d21 | 805      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d21#861 | 0x1401f5d21 | 861      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d21#889 | 0x1401f5d21 | 889      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d21#966 | 0x1401f5d21 | 966      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d21#967 | 0x1401f5d21 | 967      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d33#775 | 0x1401f5d33 | 775      | INT_SDIV     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d41#366 | 0x1401f5d41 | 366      | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d41#968 | 0x1401f5d41 | 968      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d45#375 | 0x1401f5d45 | 375      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d4c#381 | 0x1401f5d4c | 381      | CALL         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d4c#797 | 0x1401f5d4c | 797      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d4c#882 | 0x1401f5d4c | 882      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d51#386 | 0x1401f5d51 | 386      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d53#392 | 0x1401f5d53 | 392      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d55#787 | 0x1401f5d55 | 787      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d57#402 | 0x1401f5d57 | 402      | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f5d59#808 | 0x1401f5d59 | 808      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d59#892 | 0x1401f5d59 | 892      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d5c#953 | 0x1401f5d5c | 953      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d61#408 | 0x1401f5d61 | 408      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d61#798 | 0x1401f5d61 | 798      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d61#883 | 0x1401f5d61 | 883      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d6d#413 | 0x1401f5d6d | 413      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d6d#799 | 0x1401f5d6d | 799      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d6d#884 | 0x1401f5d6d | 884      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d75#954 | 0x1401f5d75 | 954      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d7a#420 | 0x1401f5d7a | 420      | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d7a#800 | 0x1401f5d7a | 800      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d7a#885 | 0x1401f5d7a | 885      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d80#786 | 0x1401f5d80 | 786      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d80#806 | 0x1401f5d80 | 806      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d80#890 | 0x1401f5d80 | 890      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d80#955 | 0x1401f5d80 | 955      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d85#210 | 0x1401f5d85 | 210      | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d85#801 | 0x1401f5d85 | 801      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d85#886 | 0x1401f5d85 | 886      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d8a#943 | 0x1401f5d8a | 943      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5dae#251 | 0x1401f5dae | 251      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5dae#802 | 0x1401f5dae | 802      | COPY         | true    | member           | [object Object]                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f5c99#957 | 0x1401f5c99#27  | 1           |
| 0x1401f5c8e#944 | 0x1401f5c99#957 | 0           |
| 0x1401f5ca4#945 | 0x1401f5ca9#42  | 1           |
| 0x1401f5c99#27  | 0x1401f5ca9#879 | 0           |
| 0x1401f5ca9#851 | 0x1401f5cb9#54  | 0           |
| 0x1401f5ca9#865 | 0x1401f5cb9#54  | 1           |
| 0x1401f5cb9#54  | 0x1401f5cbc#59  | 1           |
| 0x1401f5cbe#60  | 0x1401f5cbe#958 | 0           |
| 0x1401f5cc1#946 | 0x1401f5cc1#63  | 1           |
| 0x1401f5cc1#63  | 0x1401f5cc5#67  | 0           |
| 0x1401f5cc5#959 | 0x1401f5cc5#67  | 1           |
| 0x1401f5cbe#958 | 0x1401f5cc5#959 | 0           |
| 0x1401f5ca9#851 | 0x1401f5cc8#956 | 0           |
| 0x1401f5cd0#630 | 0x1401f5cd0#76  | 1           |
| 0x1401f5cc8#956 | 0x1401f5cd0#630 | 0           |
| 0x1401f5d0f#952 | 0x1401f5cd0#630 | 1           |
| 0x1401f5ca9#794 | 0x1401f5cd0#807 | 0           |
| 0x1401f5d0f#803 | 0x1401f5cd0#807 | 1           |
| 0x1401f5ca9#851 | 0x1401f5cd0#863 | 0           |
| 0x1401f5d0f#859 | 0x1401f5cd0#863 | 1           |
| 0x1401f5ca9#879 | 0x1401f5cd0#891 | 0           |
| 0x1401f5d0f#887 | 0x1401f5cd0#891 | 1           |
| 0x1401f5cd0#76  | 0x1401f5cd0#960 | 0           |
| 0x1401f5cd3#947 | 0x1401f5cd3#79  | 1           |
| 0x1401f5cd0#630 | 0x1401f5cd3#947 | 0           |
| 0x1401f5cd3#79  | 0x1401f5cd7#83  | 0           |
| 0x1401f5cd7#961 | 0x1401f5cd7#83  | 1           |
| 0x1401f5cd0#76  | 0x1401f5cd7#961 | 0           |
| 0x1401f5cd7#83  | 0x1401f5cda#95  | 0           |
| 0x1401f5cc5#67  | 0x1401f5cda#95  | 1           |
| 0x1401f5cda#95  | 0x1401f5cdd#101 | 1           |
| 0x1401f5cd0#960 | 0x1401f5ce2#105 | 1           |
| 0x1401f5cbe#958 | 0x1401f5ce2#105 | 2           |
| 0x1401f5cd7#83  | 0x1401f5ce2#105 | 3           |
| 0x1401f5cd0#807 | 0x1401f5ce2#795 | 0           |
| 0x1401f5cd0#863 | 0x1401f5ce2#852 | 0           |
| 0x1401f5cd0#891 | 0x1401f5ce2#880 | 0           |
| 0x1401f5ce2#105 | 0x1401f5ce7#110 | 0           |
| 0x1401f5ce7#110 | 0x1401f5ce9#116 | 1           |
| 0x1401f5ceb#948 | 0x1401f5ceb#118 | 1           |
| 0x1401f5ceb#118 | 0x1401f5ceb#962 | 0           |
| 0x1401f5cef#949 | 0x1401f5cef#121 | 1           |
| 0x1401f5cd0#630 | 0x1401f5cef#949 | 0           |
| 0x1401f5cef#121 | 0x1401f5cef#963 | 0           |
| 0x1401f5cf3#950 | 0x1401f5cf3#124 | 1           |
| 0x1401f5cd0#630 | 0x1401f5cf3#950 | 0           |
| 0x1401f5cf3#124 | 0x1401f5cf7#128 | 0           |
| 0x1401f5cf7#964 | 0x1401f5cf7#128 | 1           |
| 0x1401f5cef#121 | 0x1401f5cf7#964 | 0           |
| 0x1401f5cfa#951 | 0x1401f5cfa#136 | 1           |
| 0x1401f5cfa#136 | 0x1401f5cfe#140 | 0           |
| 0x1401f5cfe#965 | 0x1401f5cfe#140 | 1           |
| 0x1401f5ceb#118 | 0x1401f5cfe#965 | 0           |
| 0x1401f5cf7#128 | 0x1401f5d01#152 | 0           |
| 0x1401f5cfe#140 | 0x1401f5d01#152 | 1           |
| 0x1401f5d01#152 | 0x1401f5d04#158 | 1           |
| 0x1401f5cef#963 | 0x1401f5d06#161 | 1           |
| 0x1401f5ceb#962 | 0x1401f5d06#161 | 2           |
| 0x1401f5cf7#128 | 0x1401f5d06#161 | 3           |
| 0x1401f5ce2#795 | 0x1401f5d06#796 | 0           |
| 0x1401f5ce2#852 | 0x1401f5d06#853 | 0           |
| 0x1401f5ce2#880 | 0x1401f5d06#881 | 0           |
| 0x1401f5d06#161 | 0x1401f5d0b#166 | 0           |
| 0x1401f5d0b#166 | 0x1401f5d0d#171 | 1           |
| 0x1401f5cd0#807 | 0x1401f5d0f#803 | 0           |
| 0x1401f5ce2#795 | 0x1401f5d0f#803 | 1           |
| 0x1401f5ce2#795 | 0x1401f5d0f#803 | 2           |
| 0x1401f5d06#796 | 0x1401f5d0f#803 | 3           |
| 0x1401f5cd0#863 | 0x1401f5d0f#859 | 0           |
| 0x1401f5ce2#852 | 0x1401f5d0f#859 | 1           |
| 0x1401f5ce2#852 | 0x1401f5d0f#859 | 2           |
| 0x1401f5d06#853 | 0x1401f5d0f#859 | 3           |
| 0x1401f5cd0#891 | 0x1401f5d0f#887 | 0           |
| 0x1401f5ce2#880 | 0x1401f5d0f#887 | 1           |
| 0x1401f5ce2#880 | 0x1401f5d0f#887 | 2           |
| 0x1401f5d06#881 | 0x1401f5d0f#887 | 3           |
| 0x1401f5cd0#630 | 0x1401f5d0f#952 | 0           |
| 0x1401f5d0f#952 | 0x1401f5d13#186 | 0           |
| 0x1401f5ca9#865 | 0x1401f5d13#186 | 1           |
| 0x1401f5d13#186 | 0x1401f5d16#192 | 1           |
| 0x1401f5d18#631 | 0x1401f5d18#198 | 0           |
| 0x1401f5ca9#865 | 0x1401f5d18#198 | 1           |
| 0x1401f5cd0#630 | 0x1401f5d18#631 | 0           |
| 0x1401f5d0f#952 | 0x1401f5d18#631 | 1           |
| 0x1401f5d06#796 | 0x1401f5d18#804 | 0           |
| 0x1401f5d0f#803 | 0x1401f5d18#804 | 1           |
| 0x1401f5d06#853 | 0x1401f5d18#860 | 0           |
| 0x1401f5d0f#859 | 0x1401f5d18#860 | 1           |
| 0x1401f5d06#881 | 0x1401f5d18#888 | 0           |
| 0x1401f5d0f#887 | 0x1401f5d18#888 | 1           |
| 0x1401f5d18#198 | 0x1401f5d1b#203 | 1           |
| 0x1401f5d21#966 | 0x1401f5d21#258 | 0           |
| 0x1401f5d21#967 | 0x1401f5d21#258 | 1           |
| 0x1401f5ca9#794 | 0x1401f5d21#805 | 0           |
| 0x1401f5d18#804 | 0x1401f5d21#805 | 1           |
| 0x1401f5ca9#851 | 0x1401f5d21#861 | 0           |
| 0x1401f5d18#860 | 0x1401f5d21#861 | 1           |
| 0x1401f5ca9#879 | 0x1401f5d21#889 | 0           |
| 0x1401f5d18#888 | 0x1401f5d21#889 | 1           |
| 0x1401f5ca9#865 | 0x1401f5d21#966 | 0           |
| 0x1401f5d21#861 | 0x1401f5d21#967 | 0           |
| 0x1401f5d21#258 | 0x1401f5d33#775 | 0           |
| 0x1401f5d41#968 | 0x1401f5d41#366 | 1           |
| 0x1401f5d33#775 | 0x1401f5d41#968 | 0           |
| 0x1401f5d41#366 | 0x1401f5d45#375 | 1           |
| 0x1401f5d21#861 | 0x1401f5d4c#381 | 1           |
| 0x1401f5d21#805 | 0x1401f5d4c#797 | 0           |
| 0x1401f5d21#889 | 0x1401f5d4c#882 | 0           |
| 0x1401f5d4c#381 | 0x1401f5d51#386 | 0           |
| 0x1401f5d51#386 | 0x1401f5d53#392 | 1           |
| 0x1401f5d21#805 | 0x1401f5d59#808 | 0           |
| 0x1401f5d4c#797 | 0x1401f5d59#808 | 1           |
| 0x1401f5d21#889 | 0x1401f5d59#892 | 0           |
| 0x1401f5d4c#882 | 0x1401f5d59#892 | 1           |
| 0x1401f5d5c#953 | 0x1401f5d61#408 | 1           |
| 0x1401f5d59#808 | 0x1401f5d61#798 | 0           |
| 0x1401f5d59#892 | 0x1401f5d61#883 | 0           |
| 0x1401f5d61#408 | 0x1401f5d6d#413 | 1           |
| 0x1401f5d61#798 | 0x1401f5d6d#799 | 0           |
| 0x1401f5d61#883 | 0x1401f5d6d#884 | 0           |
| 0x1401f5d75#954 | 0x1401f5d7a#420 | 1           |
| 0x1401f5d6d#799 | 0x1401f5d7a#800 | 0           |
| 0x1401f5d6d#884 | 0x1401f5d7a#885 | 0           |
| 0x1401f5d1d#788 | 0x1401f5d80#786 | 0           |
| 0x1401f5d55#787 | 0x1401f5d80#786 | 1           |
| 0x1401f5d6d#413 | 0x1401f5d80#786 | 2           |
| 0x1401f5d18#804 | 0x1401f5d80#806 | 0           |
| 0x1401f5d4c#797 | 0x1401f5d80#806 | 1           |
| 0x1401f5d7a#800 | 0x1401f5d80#806 | 2           |
| 0x1401f5d18#888 | 0x1401f5d80#890 | 0           |
| 0x1401f5d4c#882 | 0x1401f5d80#890 | 1           |
| 0x1401f5d7a#885 | 0x1401f5d80#890 | 2           |
| 0x1401f5d80#955 | 0x1401f5d85#210 | 1           |
| 0x1401f5d80#806 | 0x1401f5d85#801 | 0           |
| 0x1401f5d80#890 | 0x1401f5d85#886 | 0           |
| 0x1401f5d80#786 | 0x1401f5d8a#943 | 0           |
| 0x1401f5d8a#943 | 0x1401f5dae#251 | 1           |
| 0x1401f5d85#801 | 0x1401f5dae#802 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f5cbe#60  | 1           |
| 0       | 0x1401f5cc1#946 | 0           |
| 0       | 0x1401f5ceb#948 | 0           |
| 0       | 0x1401f5cfa#951 | 0           |
| 0       | 0x1401f5d61#408 | 2           |
| 0       | 0x1401f5d6d#413 | 2           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f5ca9#42  | direct_call        | 0             |             |
| 0x1401f5cbc#59  | conditional_branch |               | 1           |
| 0x1401f5cbe#60  | memory_read        | 1             |             |
| 0x1401f5cc1#63  | memory_read        | 1             |             |
| 0x1401f5cd0#76  | memory_read        | 1             |             |
| 0x1401f5cd3#79  | memory_read        | 1             |             |
| 0x1401f5cdd#101 | conditional_branch |               | 1           |
| 0x1401f5ce2#105 | direct_call        | 0             |             |
| 0x1401f5ce9#116 | conditional_branch |               | 1           |
| 0x1401f5ceb#118 | memory_read        | 1             |             |
| 0x1401f5cef#121 | memory_read        | 1             |             |
| 0x1401f5cf3#124 | memory_read        | 1             |             |
| 0x1401f5cfa#136 | memory_read        | 1             |             |
| 0x1401f5d04#158 | conditional_branch |               | 1           |
| 0x1401f5d06#161 | direct_call        | 0             |             |
| 0x1401f5d0d#171 | conditional_branch |               | 1           |
| 0x1401f5d16#192 | conditional_branch |               | 1           |
| 0x1401f5d1b#203 | conditional_branch |               | 1           |
| 0x1401f5d45#375 | conditional_branch |               | 1           |
| 0x1401f5d4c#381 | direct_call        | 0             |             |
| 0x1401f5d53#392 | conditional_branch |               | 1           |
| 0x1401f5d61#408 | direct_call        | 0             |             |
| 0x1401f5d6d#413 | direct_call        | 0             |             |
| 0x1401f5d7a#420 | direct_call        | 0             |             |
| 0x1401f5d85#210 | direct_call        | 0             |             |

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

0x1401f5c80

## normalized_result.procedure.name

FUN_1401f5c80

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
| 0x1401f5c80 | 0x1401f5dae |

## normalized_result.procedure.body.total_bytes

303

## normalized_result.procedure.body.span_bytes

303

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f5c80()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_20 @ Stack[-0x20]:8   | ghidra-function-database |
| undefined local_40 @ Stack[-0x40]:1    | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8   | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1401f5c80(undefined8 *param_1)

{
  void *_Buf2;
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_1404c7ac0 ^ (ulonglong)auStack_78;
  FUN_1401f4ef0(&local_58);
  if (local_58 != local_50) {
    _Buf2 = (void *)*param_1;
    lVar1 = param_1[1];
    puVar6 = local_58;
    do {
      sVar7 = puVar6[1] - (longlong)*puVar6;
      if (sVar7 == lVar1 - (longlong)_Buf2) {
        iVar4 = memcmp((void *)*puVar6,_Buf2,sVar7);
        if (iVar4 == 0) {
          sVar7 = puVar6[4] - (longlong)puVar6[3];
          if (sVar7 == param_1[4] - (longlong)param_1[3]) {
            iVar4 = memcmp((void *)puVar6[3],(void *)param_1[3],sVar7);
            if (iVar4 == 0) break;
          }
        }
      }
      puVar6 = puVar6 + 6;
    } while (puVar6 != local_50);
    if (puVar6 != local_50) {
      uVar3 = 1;
      goto LAB_1401f5d80;
    }
  }
  if (0x1f < (ulonglong)(((longlong)local_50 - (longlong)local_58) / 0x30)) {
    cVar2 = FUN_1401f3e30(local_58);
    if (cVar2 == '\0') {
      uVar3 = 0;
      goto LAB_1401f5d80;
    }
  }
  uVar5 = FUN_1401f5580(local_40,param_1);
  uVar3 = FUN_1401f6e90(uVar5,param_1);
  FUN_1400055b0(local_40);
LAB_1401f5d80:
  FUN_1401f73d0(&local_58);
  return uVar3;
}



## normalized_result.assembly

0x1401f5c80: MOV qword ptr [RSP + 0x10], RBX,0x1401f5c85: MOV qword ptr [RSP + 0x18], RBP,0x1401f5c8a: PUSH RSI,0x1401f5c8b: PUSH RDI,0x1401f5c8c: PUSH R14,0x1401f5c8e: SUB RSP, 0x60,0x1401f5c92: MOV RAX, qword ptr [0x1404c7ac0],0x1401f5c99: XOR RAX, RSP,0x1401f5c9c: MOV qword ptr [RSP + 0x58], RAX,0x1401f5ca1: MOV RSI, RCX,0x1401f5ca4: LEA RCX, [RSP + 0x20],0x1401f5ca9: CALL 0x1401f4ef0,0x1401f5cae: NOP,0x1401f5caf: MOV RDI, qword ptr [RSP + 0x28],0x1401f5cb4: MOV RBX, qword ptr [RSP + 0x20],0x1401f5cb9: CMP RBX, RDI,0x1401f5cbc: JZ 0x1401f5d21,0x1401f5cbe: MOV R14, qword ptr [RSI],0x1401f5cc1: MOV RBP, qword ptr [RSI + 0x8],0x1401f5cc5: SUB RBP, R14,0x1401f5cc8: NOP dword ptr [RAX + RAX*0x1],0x1401f5cd0: MOV RCX, qword ptr [RBX],0x1401f5cd3: MOV R8, qword ptr [RBX + 0x8],0x1401f5cd7: SUB R8, RCX,0x1401f5cda: CMP R8, RBP,0x1401f5cdd: JNZ 0x1401f5d0f,0x1401f5cdf: MOV RDX, R14,0x1401f5ce2: CALL 0x14035fe70,0x1401f5ce7: TEST EAX, EAX,0x1401f5ce9: JNZ 0x1401f5d0f,0x1401f5ceb: MOV RDX, qword ptr [RSI + 0x18],0x1401f5cef: MOV RCX, qword ptr [RBX + 0x18],0x1401f5cf3: MOV R8, qword ptr [RBX + 0x20],0x1401f5cf7: SUB R8, RCX,0x1401f5cfa: MOV RAX, qword ptr [RSI + 0x20],0x1401f5cfe: SUB RAX, RDX,0x1401f5d01: CMP R8, RAX,0x1401f5d04: JNZ 0x1401f5d0f,0x1401f5d06: CALL 0x14035fe70,0x1401f5d0b: TEST EAX, EAX,0x1401f5d0d: JZ 0x1401f5d18,0x1401f5d0f: ADD RBX, 0x30,0x1401f5d13: CMP RBX, RDI,0x1401f5d16: JNZ 0x1401f5cd0,0x1401f5d18: CMP RBX, RDI,0x1401f5d1b: JZ 0x1401f5d21,0x1401f5d1d: MOV BL, 0x1,0x1401f5d1f: JMP 0x1401f5d80,0x1401f5d21: SUB RDI, qword ptr [RSP + 0x20],0x1401f5d26: MOV RAX, 0x2aaaaaaaaaaaaaab,0x1401f5d30: IMUL RDI,0x1401f5d33: SAR RDX, 0x3,0x1401f5d37: MOV RAX, RDX,0x1401f5d3a: SHR RAX, 0x3f,0x1401f5d3e: ADD RDX, RAX,0x1401f5d41: CMP RDX, 0x20,0x1401f5d45: JC 0x1401f5d59,0x1401f5d47: MOV RCX, qword ptr [RSP + 0x20],0x1401f5d4c: CALL 0x1401f3e30,0x1401f5d51: TEST AL, AL,0x1401f5d53: JNZ 0x1401f5d59,0x1401f5d55: XOR BL, BL,0x1401f5d57: JMP 0x1401f5d80,0x1401f5d59: MOV RDX, RSI,0x1401f5d5c: LEA RCX, [RSP + 0x38],0x1401f5d61: CALL 0x1401f5580,0x1401f5d66: NOP,0x1401f5d67: MOV RDX, RSI,0x1401f5d6a: MOV RCX, RAX,0x1401f5d6d: CALL 0x1401f6e90,0x1401f5d72: MOVZX EBX, AL,0x1401f5d75: LEA RCX, [RSP + 0x38],0x1401f5d7a: CALL 0x1400055b0,0x1401f5d7f: NOP,0x1401f5d80: LEA RCX, [RSP + 0x20],0x1401f5d85: CALL 0x1401f73d0,0x1401f5d8a: MOVZX EAX, BL,0x1401f5d8d: MOV RCX, qword ptr [RSP + 0x58],0x1401f5d92: XOR RCX, RSP,0x1401f5d95: CALL 0x140327740,0x1401f5d9a: LEA R11, [RSP + 0x60],0x1401f5d9f: MOV RBX, qword ptr [R11 + 0x28],0x1401f5da3: MOV RBP, qword ptr [R11 + 0x30],0x1401f5da7: MOV RSP, R11,0x1401f5daa: POP R14,0x1401f5dac: POP RDI,0x1401f5dad: POP RSI,0x1401f5dae: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1400055b0 | FUN_1400055b0           | [object Object] | [object Object] |
| 0x1401f3e30 | FUN_1401f3e30           | [object Object] | [object Object] |
| 0x1401f4ef0 | FUN_1401f4ef0           | [object Object] | [object Object] |
| 0x1401f5580 | FUN_1401f5580           | [object Object] | [object Object] |
| 0x1401f6e90 | FUN_1401f6e90           | [object Object] | [object Object] |
| 0x1401f73d0 | FUN_1401f73d0           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |
| 0x14035fe70 | memcmp                  | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f3317    | 0x1401f5c80    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f40b3    | 0x1401f5c80    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfa50    | 0x1401f5c80    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f5c80    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401f5c85    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401f5c92    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f5c9c    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f5ca4    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5ca9    | 0x1401f4ef0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5caf    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f5cb4    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5cbc    | 0x1401f5d21              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5cdd    | 0x1401f5d0f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5ce2    | 0x14035fe70              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5ce9    | 0x1401f5d0f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d04    | 0x1401f5d0f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d06    | 0x14035fe70              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d0d    | 0x1401f5d18              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d16    | 0x1401f5cd0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d1b    | 0x1401f5d21              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d1f    | 0x1401f5d80              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d21    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5d45    | 0x1401f5d59              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d47    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5d47    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5d4c    | 0x1401f3e30              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d53    | 0x1401f5d59              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d57    | 0x1401f5d80              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d5c    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f5d61    | 0x1401f5580              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d6d    | 0x1401f6e90              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d75    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f5d7a    | 0x1400055b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d80    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f5d85    | 0x1401f73d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d8d    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f5d95    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5d9a    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f5d9f    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401f5da3    | stack:0x10               | [object Object]  |                  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1400055b0 | FUN_1400055b0           | 0x1401f5d7a    |
| 0x1401f3e30 | FUN_1401f3e30           | 0x1401f5d4c    |
| 0x1401f4ef0 | FUN_1401f4ef0           | 0x1401f5ca9    |
| 0x1401f5580 | FUN_1401f5580           | 0x1401f5d61    |
| 0x1401f5cd0 | LAB_1401f5cd0           | 0x1401f5d16    |
| 0x1401f5d0f | LAB_1401f5d0f           | 0x1401f5cdd    |
| 0x1401f5d0f | LAB_1401f5d0f           | 0x1401f5ce9    |
| 0x1401f5d0f | LAB_1401f5d0f           | 0x1401f5d04    |
| 0x1401f5d18 | LAB_1401f5d18           | 0x1401f5d0d    |
| 0x1401f5d21 | LAB_1401f5d21           | 0x1401f5cbc    |
| 0x1401f5d21 | LAB_1401f5d21           | 0x1401f5d1b    |
| 0x1401f5d59 | LAB_1401f5d59           | 0x1401f5d45    |
| 0x1401f5d59 | LAB_1401f5d59           | 0x1401f5d53    |
| 0x1401f5d80 | LAB_1401f5d80           | 0x1401f5d1f    |
| 0x1401f5d80 | LAB_1401f5d80           | 0x1401f5d57    |
| 0x1401f6e90 | FUN_1401f6e90           | 0x1401f5d6d    |
| 0x1401f73d0 | FUN_1401f73d0           | 0x1401f5d85    |
| 0x140327740 | __security_check_cookie | 0x1401f5d95    |
| 0x14035fe70 | memcmp                  | 0x1401f5ce2    |
| 0x14035fe70 | memcmp                  | 0x1401f5d06    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f5c92    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f5c80 | 0x1401f5cbe | 0x1401f5cbe,0x1401f5d21 |
| 0x1401f5cbe | 0x1401f5cd0 | 0x1401f5cd0             |
| 0x1401f5cd0 | 0x1401f5cdf | 0x1401f5cdf,0x1401f5d0f |
| 0x1401f5cdf | 0x1401f5ceb | 0x1401f5ceb,0x1401f5d0f |
| 0x1401f5ceb | 0x1401f5d06 | 0x1401f5d06,0x1401f5d0f |
| 0x1401f5d06 | 0x1401f5d0f | 0x1401f5d0f,0x1401f5d18 |
| 0x1401f5d0f | 0x1401f5d18 | 0x1401f5cd0,0x1401f5d18 |
| 0x1401f5d18 | 0x1401f5d1d | 0x1401f5d1d,0x1401f5d21 |
| 0x1401f5d1d | 0x1401f5d21 | 0x1401f5d80             |
| 0x1401f5d21 | 0x1401f5d47 | 0x1401f5d47,0x1401f5d59 |
| 0x1401f5d47 | 0x1401f5d55 | 0x1401f5d55,0x1401f5d59 |
| 0x1401f5d55 | 0x1401f5d59 | 0x1401f5d80             |
| 0x1401f5d59 | 0x1401f5d80 | 0x1401f5d80             |
| 0x1401f5d80 | 0x1401f5daf |                         |

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

undefined1

## normalized_result.native_api.return_type.size_bytes

1

## normalized_result.native_api.return_type.storage

AL:1

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                       |
|------------------|-------------------------|----------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.        |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined1. |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x1401f5c8e#944 | 0x1401f5c8e | 944      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5c99#27  | 0x1401f5c99 | 27       | INT_XOR      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5c99#957 | 0x1401f5c99 | 957      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5ca4#945 | 0x1401f5ca4 | 945      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ca9#42  | 0x1401f5ca9 | 42       | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5ca9#794 | 0x1401f5ca9 | 794      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ca9#851 | 0x1401f5ca9 | 851      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ca9#865 | 0x1401f5ca9 | 865      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ca9#879 | 0x1401f5ca9 | 879      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cb9#54  | 0x1401f5cb9 | 54       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cbc#59  | 0x1401f5cbc | 59       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5cbe#60  | 0x1401f5cbe | 60       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cbe#958 | 0x1401f5cbe | 958      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cc1#63  | 0x1401f5cc1 | 63       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cc1#946 | 0x1401f5cc1 | 946      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5cc5#67  | 0x1401f5cc5 | 67       | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cc5#959 | 0x1401f5cc5 | 959      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cc8#956 | 0x1401f5cc8 | 956      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cd0#76  | 0x1401f5cd0 | 76       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd0#630 | 0x1401f5cd0 | 630      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd0#807 | 0x1401f5cd0 | 807      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd0#863 | 0x1401f5cd0 | 863      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd0#891 | 0x1401f5cd0 | 891      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd0#960 | 0x1401f5cd0 | 960      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cd3#79  | 0x1401f5cd3 | 79       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd3#947 | 0x1401f5cd3 | 947      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5cd7#83  | 0x1401f5cd7 | 83       | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cd7#961 | 0x1401f5cd7 | 961      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cda#95  | 0x1401f5cda | 95       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cdd#101 | 0x1401f5cdd | 101      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5ce2#105 | 0x1401f5ce2 | 105      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f5ce2#795 | 0x1401f5ce2 | 795      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ce2#852 | 0x1401f5ce2 | 852      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ce2#880 | 0x1401f5ce2 | 880      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ce7#110 | 0x1401f5ce7 | 110      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ce9#116 | 0x1401f5ce9 | 116      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5ceb#118 | 0x1401f5ceb | 118      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5ceb#948 | 0x1401f5ceb | 948      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5ceb#962 | 0x1401f5ceb | 962      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cef#121 | 0x1401f5cef | 121      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cef#949 | 0x1401f5cef | 949      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5cef#963 | 0x1401f5cef | 963      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cf3#124 | 0x1401f5cf3 | 124      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cf3#950 | 0x1401f5cf3 | 950      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5cf7#128 | 0x1401f5cf7 | 128      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cf7#964 | 0x1401f5cf7 | 964      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5cfa#136 | 0x1401f5cfa | 136      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cfa#951 | 0x1401f5cfa | 951      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5cfe#140 | 0x1401f5cfe | 140      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5cfe#965 | 0x1401f5cfe | 965      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d01#152 | 0x1401f5d01 | 152      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d04#158 | 0x1401f5d04 | 158      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d06#161 | 0x1401f5d06 | 161      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f5d06#796 | 0x1401f5d06 | 796      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d06#853 | 0x1401f5d06 | 853      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d06#881 | 0x1401f5d06 | 881      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d0b#166 | 0x1401f5d0b | 166      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d0d#171 | 0x1401f5d0d | 171      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d0f#803 | 0x1401f5d0f | 803      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f5d0f#859 | 0x1401f5d0f | 859      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f5d0f#887 | 0x1401f5d0f | 887      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f5d0f#952 | 0x1401f5d0f | 952      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d13#186 | 0x1401f5d13 | 186      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d16#192 | 0x1401f5d16 | 192      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d18#198 | 0x1401f5d18 | 198      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d18#631 | 0x1401f5d18 | 631      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d18#804 | 0x1401f5d18 | 804      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d18#860 | 0x1401f5d18 | 860      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d18#888 | 0x1401f5d18 | 888      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d1b#203 | 0x1401f5d1b | 203      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d1d#788 | 0x1401f5d1d | 788      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d1f#205 | 0x1401f5d1f | 205      | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f5d21#258 | 0x1401f5d21 | 258      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d21#805 | 0x1401f5d21 | 805      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d21#861 | 0x1401f5d21 | 861      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d21#889 | 0x1401f5d21 | 889      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d21#966 | 0x1401f5d21 | 966      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d21#967 | 0x1401f5d21 | 967      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d33#775 | 0x1401f5d33 | 775      | INT_SDIV     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d41#366 | 0x1401f5d41 | 366      | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d41#968 | 0x1401f5d41 | 968      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d45#375 | 0x1401f5d45 | 375      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d4c#381 | 0x1401f5d4c | 381      | CALL         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d4c#797 | 0x1401f5d4c | 797      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d4c#882 | 0x1401f5d4c | 882      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d51#386 | 0x1401f5d51 | 386      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d53#392 | 0x1401f5d53 | 392      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d55#787 | 0x1401f5d55 | 787      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5d57#402 | 0x1401f5d57 | 402      | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x1401f5d59#808 | 0x1401f5d59 | 808      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d59#892 | 0x1401f5d59 | 892      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d5c#953 | 0x1401f5d5c | 953      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d61#408 | 0x1401f5d61 | 408      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d61#798 | 0x1401f5d61 | 798      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d61#883 | 0x1401f5d61 | 883      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d6d#413 | 0x1401f5d6d | 413      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d6d#799 | 0x1401f5d6d | 799      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d6d#884 | 0x1401f5d6d | 884      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d75#954 | 0x1401f5d75 | 954      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d7a#420 | 0x1401f5d7a | 420      | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d7a#800 | 0x1401f5d7a | 800      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d7a#885 | 0x1401f5d7a | 885      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d80#786 | 0x1401f5d80 | 786      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d80#806 | 0x1401f5d80 | 806      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d80#890 | 0x1401f5d80 | 890      | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f5d80#955 | 0x1401f5d80 | 955      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d85#210 | 0x1401f5d85 | 210      | CALL         | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5d85#801 | 0x1401f5d85 | 801      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d85#886 | 0x1401f5d85 | 886      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1401f5d8a#943 | 0x1401f5d8a | 943      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x1401f5dae#251 | 0x1401f5dae | 251      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1401f5dae#802 | 0x1401f5dae | 802      | COPY         | true    | member           | [object Object]                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f5c99#957 | 0x1401f5c99#27  | 1           |
| 0x1401f5c8e#944 | 0x1401f5c99#957 | 0           |
| 0x1401f5ca4#945 | 0x1401f5ca9#42  | 1           |
| 0x1401f5c99#27  | 0x1401f5ca9#879 | 0           |
| 0x1401f5ca9#851 | 0x1401f5cb9#54  | 0           |
| 0x1401f5ca9#865 | 0x1401f5cb9#54  | 1           |
| 0x1401f5cb9#54  | 0x1401f5cbc#59  | 1           |
| 0x1401f5cbe#60  | 0x1401f5cbe#958 | 0           |
| 0x1401f5cc1#946 | 0x1401f5cc1#63  | 1           |
| 0x1401f5cc1#63  | 0x1401f5cc5#67  | 0           |
| 0x1401f5cc5#959 | 0x1401f5cc5#67  | 1           |
| 0x1401f5cbe#958 | 0x1401f5cc5#959 | 0           |
| 0x1401f5ca9#851 | 0x1401f5cc8#956 | 0           |
| 0x1401f5cd0#630 | 0x1401f5cd0#76  | 1           |
| 0x1401f5cc8#956 | 0x1401f5cd0#630 | 0           |
| 0x1401f5d0f#952 | 0x1401f5cd0#630 | 1           |
| 0x1401f5ca9#794 | 0x1401f5cd0#807 | 0           |
| 0x1401f5d0f#803 | 0x1401f5cd0#807 | 1           |
| 0x1401f5ca9#851 | 0x1401f5cd0#863 | 0           |
| 0x1401f5d0f#859 | 0x1401f5cd0#863 | 1           |
| 0x1401f5ca9#879 | 0x1401f5cd0#891 | 0           |
| 0x1401f5d0f#887 | 0x1401f5cd0#891 | 1           |
| 0x1401f5cd0#76  | 0x1401f5cd0#960 | 0           |
| 0x1401f5cd3#947 | 0x1401f5cd3#79  | 1           |
| 0x1401f5cd0#630 | 0x1401f5cd3#947 | 0           |
| 0x1401f5cd3#79  | 0x1401f5cd7#83  | 0           |
| 0x1401f5cd7#961 | 0x1401f5cd7#83  | 1           |
| 0x1401f5cd0#76  | 0x1401f5cd7#961 | 0           |
| 0x1401f5cd7#83  | 0x1401f5cda#95  | 0           |
| 0x1401f5cc5#67  | 0x1401f5cda#95  | 1           |
| 0x1401f5cda#95  | 0x1401f5cdd#101 | 1           |
| 0x1401f5cd0#960 | 0x1401f5ce2#105 | 1           |
| 0x1401f5cbe#958 | 0x1401f5ce2#105 | 2           |
| 0x1401f5cd7#83  | 0x1401f5ce2#105 | 3           |
| 0x1401f5cd0#807 | 0x1401f5ce2#795 | 0           |
| 0x1401f5cd0#863 | 0x1401f5ce2#852 | 0           |
| 0x1401f5cd0#891 | 0x1401f5ce2#880 | 0           |
| 0x1401f5ce2#105 | 0x1401f5ce7#110 | 0           |
| 0x1401f5ce7#110 | 0x1401f5ce9#116 | 1           |
| 0x1401f5ceb#948 | 0x1401f5ceb#118 | 1           |
| 0x1401f5ceb#118 | 0x1401f5ceb#962 | 0           |
| 0x1401f5cef#949 | 0x1401f5cef#121 | 1           |
| 0x1401f5cd0#630 | 0x1401f5cef#949 | 0           |
| 0x1401f5cef#121 | 0x1401f5cef#963 | 0           |
| 0x1401f5cf3#950 | 0x1401f5cf3#124 | 1           |
| 0x1401f5cd0#630 | 0x1401f5cf3#950 | 0           |
| 0x1401f5cf3#124 | 0x1401f5cf7#128 | 0           |
| 0x1401f5cf7#964 | 0x1401f5cf7#128 | 1           |
| 0x1401f5cef#121 | 0x1401f5cf7#964 | 0           |
| 0x1401f5cfa#951 | 0x1401f5cfa#136 | 1           |
| 0x1401f5cfa#136 | 0x1401f5cfe#140 | 0           |
| 0x1401f5cfe#965 | 0x1401f5cfe#140 | 1           |
| 0x1401f5ceb#118 | 0x1401f5cfe#965 | 0           |
| 0x1401f5cf7#128 | 0x1401f5d01#152 | 0           |
| 0x1401f5cfe#140 | 0x1401f5d01#152 | 1           |
| 0x1401f5d01#152 | 0x1401f5d04#158 | 1           |
| 0x1401f5cef#963 | 0x1401f5d06#161 | 1           |
| 0x1401f5ceb#962 | 0x1401f5d06#161 | 2           |
| 0x1401f5cf7#128 | 0x1401f5d06#161 | 3           |
| 0x1401f5ce2#795 | 0x1401f5d06#796 | 0           |
| 0x1401f5ce2#852 | 0x1401f5d06#853 | 0           |
| 0x1401f5ce2#880 | 0x1401f5d06#881 | 0           |
| 0x1401f5d06#161 | 0x1401f5d0b#166 | 0           |
| 0x1401f5d0b#166 | 0x1401f5d0d#171 | 1           |
| 0x1401f5cd0#807 | 0x1401f5d0f#803 | 0           |
| 0x1401f5ce2#795 | 0x1401f5d0f#803 | 1           |
| 0x1401f5ce2#795 | 0x1401f5d0f#803 | 2           |
| 0x1401f5d06#796 | 0x1401f5d0f#803 | 3           |
| 0x1401f5cd0#863 | 0x1401f5d0f#859 | 0           |
| 0x1401f5ce2#852 | 0x1401f5d0f#859 | 1           |
| 0x1401f5ce2#852 | 0x1401f5d0f#859 | 2           |
| 0x1401f5d06#853 | 0x1401f5d0f#859 | 3           |
| 0x1401f5cd0#891 | 0x1401f5d0f#887 | 0           |
| 0x1401f5ce2#880 | 0x1401f5d0f#887 | 1           |
| 0x1401f5ce2#880 | 0x1401f5d0f#887 | 2           |
| 0x1401f5d06#881 | 0x1401f5d0f#887 | 3           |
| 0x1401f5cd0#630 | 0x1401f5d0f#952 | 0           |
| 0x1401f5d0f#952 | 0x1401f5d13#186 | 0           |
| 0x1401f5ca9#865 | 0x1401f5d13#186 | 1           |
| 0x1401f5d13#186 | 0x1401f5d16#192 | 1           |
| 0x1401f5d18#631 | 0x1401f5d18#198 | 0           |
| 0x1401f5ca9#865 | 0x1401f5d18#198 | 1           |
| 0x1401f5cd0#630 | 0x1401f5d18#631 | 0           |
| 0x1401f5d0f#952 | 0x1401f5d18#631 | 1           |
| 0x1401f5d06#796 | 0x1401f5d18#804 | 0           |
| 0x1401f5d0f#803 | 0x1401f5d18#804 | 1           |
| 0x1401f5d06#853 | 0x1401f5d18#860 | 0           |
| 0x1401f5d0f#859 | 0x1401f5d18#860 | 1           |
| 0x1401f5d06#881 | 0x1401f5d18#888 | 0           |
| 0x1401f5d0f#887 | 0x1401f5d18#888 | 1           |
| 0x1401f5d18#198 | 0x1401f5d1b#203 | 1           |
| 0x1401f5d21#966 | 0x1401f5d21#258 | 0           |
| 0x1401f5d21#967 | 0x1401f5d21#258 | 1           |
| 0x1401f5ca9#794 | 0x1401f5d21#805 | 0           |
| 0x1401f5d18#804 | 0x1401f5d21#805 | 1           |
| 0x1401f5ca9#851 | 0x1401f5d21#861 | 0           |
| 0x1401f5d18#860 | 0x1401f5d21#861 | 1           |
| 0x1401f5ca9#879 | 0x1401f5d21#889 | 0           |
| 0x1401f5d18#888 | 0x1401f5d21#889 | 1           |
| 0x1401f5ca9#865 | 0x1401f5d21#966 | 0           |
| 0x1401f5d21#861 | 0x1401f5d21#967 | 0           |
| 0x1401f5d21#258 | 0x1401f5d33#775 | 0           |
| 0x1401f5d41#968 | 0x1401f5d41#366 | 1           |
| 0x1401f5d33#775 | 0x1401f5d41#968 | 0           |
| 0x1401f5d41#366 | 0x1401f5d45#375 | 1           |
| 0x1401f5d21#861 | 0x1401f5d4c#381 | 1           |
| 0x1401f5d21#805 | 0x1401f5d4c#797 | 0           |
| 0x1401f5d21#889 | 0x1401f5d4c#882 | 0           |
| 0x1401f5d4c#381 | 0x1401f5d51#386 | 0           |
| 0x1401f5d51#386 | 0x1401f5d53#392 | 1           |
| 0x1401f5d21#805 | 0x1401f5d59#808 | 0           |
| 0x1401f5d4c#797 | 0x1401f5d59#808 | 1           |
| 0x1401f5d21#889 | 0x1401f5d59#892 | 0           |
| 0x1401f5d4c#882 | 0x1401f5d59#892 | 1           |
| 0x1401f5d5c#953 | 0x1401f5d61#408 | 1           |
| 0x1401f5d59#808 | 0x1401f5d61#798 | 0           |
| 0x1401f5d59#892 | 0x1401f5d61#883 | 0           |
| 0x1401f5d61#408 | 0x1401f5d6d#413 | 1           |
| 0x1401f5d61#798 | 0x1401f5d6d#799 | 0           |
| 0x1401f5d61#883 | 0x1401f5d6d#884 | 0           |
| 0x1401f5d75#954 | 0x1401f5d7a#420 | 1           |
| 0x1401f5d6d#799 | 0x1401f5d7a#800 | 0           |
| 0x1401f5d6d#884 | 0x1401f5d7a#885 | 0           |
| 0x1401f5d1d#788 | 0x1401f5d80#786 | 0           |
| 0x1401f5d55#787 | 0x1401f5d80#786 | 1           |
| 0x1401f5d6d#413 | 0x1401f5d80#786 | 2           |
| 0x1401f5d18#804 | 0x1401f5d80#806 | 0           |
| 0x1401f5d4c#797 | 0x1401f5d80#806 | 1           |
| 0x1401f5d7a#800 | 0x1401f5d80#806 | 2           |
| 0x1401f5d18#888 | 0x1401f5d80#890 | 0           |
| 0x1401f5d4c#882 | 0x1401f5d80#890 | 1           |
| 0x1401f5d7a#885 | 0x1401f5d80#890 | 2           |
| 0x1401f5d80#955 | 0x1401f5d85#210 | 1           |
| 0x1401f5d80#806 | 0x1401f5d85#801 | 0           |
| 0x1401f5d80#890 | 0x1401f5d85#886 | 0           |
| 0x1401f5d80#786 | 0x1401f5d8a#943 | 0           |
| 0x1401f5d8a#943 | 0x1401f5dae#251 | 1           |
| 0x1401f5d85#801 | 0x1401f5dae#802 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f5ca9#42  | direct_call        | 0             |             |
| 0x1401f5cbc#59  | conditional_branch |               | 1           |
| 0x1401f5cbe#60  | memory_read        | 1             |             |
| 0x1401f5cc1#63  | memory_read        | 1             |             |
| 0x1401f5cd0#76  | memory_read        | 1             |             |
| 0x1401f5cd3#79  | memory_read        | 1             |             |
| 0x1401f5cdd#101 | conditional_branch |               | 1           |
| 0x1401f5ce2#105 | direct_call        | 0             |             |
| 0x1401f5ce9#116 | conditional_branch |               | 1           |
| 0x1401f5ceb#118 | memory_read        | 1             |             |
| 0x1401f5cef#121 | memory_read        | 1             |             |
| 0x1401f5cf3#124 | memory_read        | 1             |             |
| 0x1401f5cfa#136 | memory_read        | 1             |             |
| 0x1401f5d04#158 | conditional_branch |               | 1           |
| 0x1401f5d06#161 | direct_call        | 0             |             |
| 0x1401f5d0d#171 | conditional_branch |               | 1           |
| 0x1401f5d16#192 | conditional_branch |               | 1           |
| 0x1401f5d1b#203 | conditional_branch |               | 1           |
| 0x1401f5d45#375 | conditional_branch |               | 1           |
| 0x1401f5d4c#381 | direct_call        | 0             |             |
| 0x1401f5d53#392 | conditional_branch |               | 1           |
| 0x1401f5d61#408 | direct_call        | 0             |             |
| 0x1401f5d6d#413 | direct_call        | 0             |             |
| 0x1401f5d7a#420 | direct_call        | 0             |             |
| 0x1401f5d85#210 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f5cbe#60  | 1           |
| 0       | 0x1401f5cc1#946 | 0           |
| 0       | 0x1401f5ceb#948 | 0           |
| 0       | 0x1401f5cfa#951 | 0           |
| 0       | 0x1401f5d61#408 | 2           |
| 0       | 0x1401f5d6d#413 | 2           |

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

