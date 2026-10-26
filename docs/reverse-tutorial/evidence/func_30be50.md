## evidence_id

ev_3ae1b7bc7029582fd81a9bb1347ce4b6e9c571f26aff09884a3be84bb003547c

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
| procedure | 0x14030be50 |

## raw_result.value.procedure.address

0x14030be50

## raw_result.value.procedure.name

FUN_14030be50

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
| 0x14030be50 | 0x14030bfd1 |

## raw_result.value.procedure.body.total_bytes

386

## raw_result.value.procedure.body.span_bytes

386

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_14030be50()

## raw_result.value.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined4 local_38 @ Stack[-0x38]:4 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8 | ghidra-function-database |

## raw_result.value.pseudocode


undefined4 *
FUN_14030be50(undefined4 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  puVar1 = (undefined8 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xf;
  *(undefined1 *)(param_1 + 0x32) = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_1401f0bc0(puVar1,param_2,param_3,param_4,1);
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  else {
    *puVar1 = *param_2;
    if (puVar1 != param_2) {
      puVar3 = param_2 + 1;
      if (0xf < (ulonglong)param_2[4]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_140046bf0(param_1 + 4,puVar3,param_2[3]);
      puVar3 = param_2 + 5;
      if (0xf < (ulonglong)param_2[8]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_140046bf0(param_1 + 0xc,puVar3,param_2[7]);
      puVar3 = param_2 + 9;
      if (0xf < (ulonglong)param_2[0xc]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_140046bf0(param_1 + 0x14,puVar3,param_2[0xb]);
    }
    if (*(char *)(param_2 + 0x11) == '\0') {
      if (*(char *)(param_1 + 0x24) != '\0') {
        FUN_140005540(param_1 + 0x1c);
        *(undefined1 *)(param_1 + 0x24) = 0;
      }
    }
    else {
      puVar3 = param_2 + 0xd;
      if (*(char *)(param_1 + 0x24) == '\0') {
        FUN_140002a80();
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      else if (puVar1 != param_2) {
        if (0xf < (ulonglong)param_2[0x10]) {
          puVar3 = (undefined8 *)*puVar3;
        }
        FUN_140046bf0(param_1 + 0x1c,puVar3,param_2[0xf]);
      }
    }
    uVar2 = param_2[0x13];
    *(undefined8 *)(param_1 + 0x26) = param_2[0x12];
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    uVar2 = param_2[0x15];
    *(undefined8 *)(param_1 + 0x2a) = param_2[0x14];
    *(undefined8 *)(param_1 + 0x2c) = uVar2;
    *(undefined8 *)(param_1 + 0x2e) = param_2[0x16];
  }
  if ((*(char *)(param_2 + 0x13) != '\0') && ((ulonglong)param_2[0x12] < param_3)) {
    *param_1 = 3;
    return param_1;
  }
  *param_1 = 2;
  return param_1;
}



## raw_result.value.assembly

0x14030be50: MOV qword ptr [RSP + 0x8], RCX,0x14030be55: PUSH RBX,0x14030be56: PUSH RBP,0x14030be57: PUSH RSI,0x14030be58: PUSH RDI,0x14030be59: SUB RSP, 0x38,0x14030be5d: MOV RBP, R8,0x14030be60: MOV RBX, RDX,0x14030be63: MOV RSI, RCX,0x14030be66: XOR EAX, EAX,0x14030be68: MOV dword ptr [RSP + 0x20], EAX,0x14030be6c: MOV dword ptr [RCX], EAX,0x14030be6e: LEA RDI, [RCX + 0x8],0x14030be72: MOV byte ptr [RDI + 0xb8], AL,0x14030be78: XORPS XMM0, XMM0,0x14030be7b: MOVUPS xmmword ptr [RCX + 0xc8], XMM0,0x14030be82: MOV qword ptr [RCX + 0xd8], RAX,0x14030be89: MOV qword ptr [RCX + 0xe0], 0xf,0x14030be94: MOV byte ptr [RCX + 0xc8], AL,0x14030be9a: MOV dword ptr [RSP + 0x20], 0x1,0x14030bea2: CMP byte ptr [RDI + 0xb8], AL,0x14030bea8: JZ 0x14030bf8d,0x14030beae: MOV RAX, qword ptr [RDX],0x14030beb1: MOV qword ptr [RDI], RAX,0x14030beb4: CMP RDI, RDX,0x14030beb7: JZ 0x14030bf0a,0x14030beb9: ADD RDX, 0x8,0x14030bebd: CMP qword ptr [RBX + 0x20], 0xf,0x14030bec2: JBE 0x14030bec7,0x14030bec4: MOV RDX, qword ptr [RDX],0x14030bec7: LEA RCX, [RDI + 0x8],0x14030becb: MOV R8, qword ptr [RBX + 0x18],0x14030becf: CALL 0x140046bf0,0x14030bed4: LEA RDX, [RBX + 0x28],0x14030bed8: CMP qword ptr [RBX + 0x40], 0xf,0x14030bedd: JBE 0x14030bee2,0x14030bedf: MOV RDX, qword ptr [RDX],0x14030bee2: LEA RCX, [RDI + 0x28],0x14030bee6: MOV R8, qword ptr [RBX + 0x38],0x14030beea: CALL 0x140046bf0,0x14030beef: LEA RDX, [RBX + 0x48],0x14030bef3: CMP qword ptr [RBX + 0x60], 0xf,0x14030bef8: JBE 0x14030befd,0x14030befa: MOV RDX, qword ptr [RDX],0x14030befd: LEA RCX, [RDI + 0x48],0x14030bf01: MOV R8, qword ptr [RBX + 0x58],0x14030bf05: CALL 0x140046bf0,0x14030bf0a: LEA RCX, [RDI + 0x68],0x14030bf0e: MOVZX EAX, byte ptr [RDI + 0x88],0x14030bf15: CMP byte ptr [RBX + 0x88], 0x0,0x14030bf1c: JZ 0x14030bf51,0x14030bf1e: LEA RDX, [RBX + 0x68],0x14030bf22: TEST AL, AL,0x14030bf24: JZ 0x14030bf43,0x14030bf26: CMP RDI, RBX,0x14030bf29: JZ 0x14030bf61,0x14030bf2b: CMP qword ptr [RBX + 0x80], 0xf,0x14030bf33: JBE 0x14030bf38,0x14030bf35: MOV RDX, qword ptr [RDX],0x14030bf38: MOV R8, qword ptr [RBX + 0x78],0x14030bf3c: CALL 0x140046bf0,0x14030bf41: JMP 0x14030bf61,0x14030bf43: CALL 0x140002a80,0x14030bf48: MOV byte ptr [RDI + 0x88], 0x1,0x14030bf4f: JMP 0x14030bf61,0x14030bf51: TEST AL, AL,0x14030bf53: JZ 0x14030bf61,0x14030bf55: CALL 0x140005540,0x14030bf5a: MOV byte ptr [RDI + 0x88], 0x0,0x14030bf61: MOVUPS XMM0, xmmword ptr [RBX + 0x90],0x14030bf68: MOVUPS xmmword ptr [RDI + 0x90], XMM0,0x14030bf6f: MOVUPS XMM1, xmmword ptr [RBX + 0xa0],0x14030bf76: MOVUPS xmmword ptr [RDI + 0xa0], XMM1,0x14030bf7d: MOV RAX, qword ptr [RBX + 0xb0],0x14030bf84: MOV qword ptr [RDI + 0xb0], RAX,0x14030bf8b: JMP 0x14030bf9c,0x14030bf8d: MOV RCX, RDI,0x14030bf90: CALL 0x1401f0bc0,0x14030bf95: MOV byte ptr [RDI + 0xb8], 0x1,0x14030bf9c: CMP byte ptr [RBX + 0x98], 0x0,0x14030bfa3: JZ 0x14030bfc0,0x14030bfa5: CMP RBP, qword ptr [RBX + 0x90],0x14030bfac: JBE 0x14030bfc0,0x14030bfae: MOV dword ptr [RSI], 0x3,0x14030bfb4: MOV RAX, RSI,0x14030bfb7: ADD RSP, 0x38,0x14030bfbb: POP RDI,0x14030bfbc: POP RSI,0x14030bfbd: POP RBP,0x14030bfbe: POP RBX,0x14030bfbf: RET,0x14030bfc0: MOV dword ptr [RSI], 0x2,0x14030bfc6: MOV RAX, RSI,0x14030bfc9: ADD RSP, 0x38,0x14030bfcd: POP RDI,0x14030bfce: POP RSI,0x14030bfcf: POP RBP,0x14030bfd0: POP RBX,0x14030bfd1: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x140308ab0 | FUN_140308ab0 | [object Object] | [object Object] |
| 0x14030bfe0 | FUN_14030bfe0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140002a80 | FUN_140002a80 | [object Object] | [object Object] |
| 0x140005540 | FUN_140005540 | [object Object] | [object Object] |
| 0x140046bf0 | FUN_140046bf0 | [object Object] | [object Object] |
| 0x1401f0bc0 | FUN_1401f0bc0 | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f2caf    | 0x14030be50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3209    | 0x14030be50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f35d8    | 0x14030be50    | [object Object]  | [object Object]  | [object Object] |
| 0x140308c10    | 0x14030be50    | [object Object]  | [object Object]  | [object Object] |
| 0x14030c39b    | 0x14030be50    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6e48    | 0x14030be50    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14030be50    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x14030be68    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030be9a    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030bea8    | 0x14030bf8d              | [object Object]  | [object Object]  | [object Object] |
| 0x14030beb7    | 0x14030bf0a              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bec2    | 0x14030bec7              | [object Object]  | [object Object]  | [object Object] |
| 0x14030becf    | 0x140046bf0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bedd    | 0x14030bee2              | [object Object]  | [object Object]  | [object Object] |
| 0x14030beea    | 0x140046bf0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bef8    | 0x14030befd              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf05    | 0x140046bf0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf1c    | 0x14030bf51              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf24    | 0x14030bf43              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf29    | 0x14030bf61              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf33    | 0x14030bf38              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf3c    | 0x140046bf0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf41    | 0x14030bf61              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf43    | 0x140002a80              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf4f    | 0x14030bf61              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf53    | 0x14030bf61              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf55    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf8b    | 0x14030bf9c              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf90    | 0x1401f0bc0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bfa3    | 0x14030bfc0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bfac    | 0x14030bfc0              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x140002a80 | FUN_140002a80 | 0x14030bf43    |
| 0x140005540 | FUN_140005540 | 0x14030bf55    |
| 0x140046bf0 | FUN_140046bf0 | 0x14030becf    |
| 0x140046bf0 | FUN_140046bf0 | 0x14030beea    |
| 0x140046bf0 | FUN_140046bf0 | 0x14030bf05    |
| 0x140046bf0 | FUN_140046bf0 | 0x14030bf3c    |
| 0x1401f0bc0 | FUN_1401f0bc0 | 0x14030bf90    |
| 0x14030bec7 | LAB_14030bec7 | 0x14030bec2    |
| 0x14030bee2 | LAB_14030bee2 | 0x14030bedd    |
| 0x14030befd | LAB_14030befd | 0x14030bef8    |
| 0x14030bf0a | LAB_14030bf0a | 0x14030beb7    |
| 0x14030bf38 | LAB_14030bf38 | 0x14030bf33    |
| 0x14030bf43 | LAB_14030bf43 | 0x14030bf24    |
| 0x14030bf51 | LAB_14030bf51 | 0x14030bf1c    |
| 0x14030bf61 | LAB_14030bf61 | 0x14030bf29    |
| 0x14030bf61 | LAB_14030bf61 | 0x14030bf41    |
| 0x14030bf61 | LAB_14030bf61 | 0x14030bf4f    |
| 0x14030bf61 | LAB_14030bf61 | 0x14030bf53    |
| 0x14030bf8d | LAB_14030bf8d | 0x14030bea8    |
| 0x14030bf9c | LAB_14030bf9c | 0x14030bf8b    |
| 0x14030bfc0 | LAB_14030bfc0 | 0x14030bfa3    |
| 0x14030bfc0 | LAB_14030bfc0 | 0x14030bfac    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14030be50 | 0x14030beae | 0x14030beae,0x14030bf8d |
| 0x14030beae | 0x14030beb9 | 0x14030beb9,0x14030bf0a |
| 0x14030beb9 | 0x14030bec4 | 0x14030bec4,0x14030bec7 |
| 0x14030bec4 | 0x14030bec7 | 0x14030bec7             |
| 0x14030bec7 | 0x14030bedf | 0x14030bedf,0x14030bee2 |
| 0x14030bedf | 0x14030bee2 | 0x14030bee2             |
| 0x14030bee2 | 0x14030befa | 0x14030befa,0x14030befd |
| 0x14030befa | 0x14030befd | 0x14030befd             |
| 0x14030befd | 0x14030bf0a | 0x14030bf0a             |
| 0x14030bf0a | 0x14030bf1e | 0x14030bf1e,0x14030bf51 |
| 0x14030bf1e | 0x14030bf26 | 0x14030bf26,0x14030bf43 |
| 0x14030bf26 | 0x14030bf2b | 0x14030bf2b,0x14030bf61 |
| 0x14030bf2b | 0x14030bf35 | 0x14030bf35,0x14030bf38 |
| 0x14030bf35 | 0x14030bf38 | 0x14030bf38             |
| 0x14030bf38 | 0x14030bf43 | 0x14030bf61             |
| 0x14030bf43 | 0x14030bf51 | 0x14030bf61             |
| 0x14030bf51 | 0x14030bf55 | 0x14030bf55,0x14030bf61 |
| 0x14030bf55 | 0x14030bf61 | 0x14030bf61             |
| 0x14030bf61 | 0x14030bf8d | 0x14030bf9c             |
| 0x14030bf8d | 0x14030bf9c | 0x14030bf9c             |
| 0x14030bf9c | 0x14030bfa5 | 0x14030bfa5,0x14030bfc0 |
| 0x14030bfa5 | 0x14030bfae | 0x14030bfae,0x14030bfc0 |
| 0x14030bfae | 0x14030bfc0 |                         |
| 0x14030bfc0 | 0x14030bfd2 |                         |

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

undefined4 *

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
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined4 *. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters

| role      | ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | undefined4 * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | undefined8 * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 2       | param_3 | ulonglong    | 8          | R8:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 3       | param_4 | undefined8   | 8          | R9:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-------------------------------------------------------------------------------------------------|-----------------|
| 0x14030be6c#41  | 0x14030be6c | 41       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be6e#847 | 0x14030be6e | 847      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be6e#888 | 0x14030be6e | 888      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be72#46  | 0x14030be72 | 46       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be72#848 | 0x14030be72 | 848      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be72#889 | 0x14030be72 | 889      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be7b#755 | 0x14030be7b | 755      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be7b#756 | 0x14030be7b | 756      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be7b#849 | 0x14030be7b | 849      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be7b#850 | 0x14030be7b | 850      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be7b#890 | 0x14030be7b | 890      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be7b#891 | 0x14030be7b | 891      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be82#56  | 0x14030be82 | 56       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be82#851 | 0x14030be82 | 851      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be82#892 | 0x14030be82 | 892      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be89#59  | 0x14030be89 | 59       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be89#852 | 0x14030be89 | 852      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be89#893 | 0x14030be89 | 893      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be94#62  | 0x14030be94 | 62       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be94#853 | 0x14030be94 | 853      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be94#894 | 0x14030be94 | 894      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bea2#67  | 0x14030bea2 | 67       | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bea2#73  | 0x14030bea2 | 73       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bea2#854 | 0x14030bea2 | 854      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bea2#895 | 0x14030bea2 | 895      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bea8#78  | 0x14030bea8 | 78       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030beae#79  | 0x14030beae | 79       | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030beb1#82  | 0x14030beb1 | 82       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030beb4#88  | 0x14030beb4 | 88       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030beb7#93  | 0x14030beb7 | 93       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030beb9#855 | 0x14030beb9 | 855      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bebd#104 | 0x14030bebd | 104      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bebd#856 | 0x14030bebd | 856      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bec2#115 | 0x14030bec2 | 115      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bec2#116 | 0x14030bec2 | 116      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bec2#897 | 0x14030bec2 | 897      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bec4#117 | 0x14030bec4 | 117      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bec4#898 | 0x14030bec4 | 898      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bec7#546 | 0x14030bec7 | 546      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bec7#857 | 0x14030bec7 | 857      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030becb#122 | 0x14030becb | 122      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030becb#858 | 0x14030becb | 858      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030becf#126 | 0x14030becf | 126      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                 |                 |
| 0x14030bed4#859 | 0x14030bed4 | 859      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bed8#130 | 0x14030bed8 | 130      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bed8#860 | 0x14030bed8 | 860      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bedd#141 | 0x14030bedd | 141      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bedd#142 | 0x14030bedd | 142      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bedd#899 | 0x14030bedd | 899      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bedf#143 | 0x14030bedf | 143      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bedf#900 | 0x14030bedf | 900      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bee2#544 | 0x14030bee2 | 544      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bee2#861 | 0x14030bee2 | 861      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bee6#148 | 0x14030bee6 | 148      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bee6#862 | 0x14030bee6 | 862      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030beea#152 | 0x14030beea | 152      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                 |                 |
| 0x14030beef#863 | 0x14030beef | 863      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bef3#156 | 0x14030bef3 | 156      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bef3#864 | 0x14030bef3 | 864      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bef8#167 | 0x14030bef8 | 167      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bef8#168 | 0x14030bef8 | 168      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bef8#901 | 0x14030bef8 | 901      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030befa#169 | 0x14030befa | 169      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030befa#902 | 0x14030befa | 902      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030befd#543 | 0x14030befd | 543      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030befd#865 | 0x14030befd | 865      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf01#174 | 0x14030bf01 | 174      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf01#866 | 0x14030bf01 | 866      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf05#178 | 0x14030bf05 | 178      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                 |                 |
| 0x14030bf0a#867 | 0x14030bf0a | 867      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf0e#182 | 0x14030bf0e | 182      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf0e#868 | 0x14030bf0e | 868      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf0e#903 | 0x14030bf0e | 903      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf15#186 | 0x14030bf15 | 186      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf15#192 | 0x14030bf15 | 192      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf15#869 | 0x14030bf15 | 869      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf15#904 | 0x14030bf15 | 904      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf1c#197 | 0x14030bf1c | 197      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf1e#870 | 0x14030bf1e | 870      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf22#204 | 0x14030bf22 | 204      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf24#209 | 0x14030bf24 | 209      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf26#215 | 0x14030bf26 | 215      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf29#220 | 0x14030bf29 | 220      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf2b#222 | 0x14030bf2b | 222      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf2b#871 | 0x14030bf2b | 871      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf33#233 | 0x14030bf33 | 233      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf33#234 | 0x14030bf33 | 234      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf33#907 | 0x14030bf33 | 907      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf35#235 | 0x14030bf35 | 235      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf35#908 | 0x14030bf35 | 908      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf38#238 | 0x14030bf38 | 238      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf38#541 | 0x14030bf38 | 541      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf38#872 | 0x14030bf38 | 872      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf3c#242 | 0x14030bf3c | 242      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                 |                 |
| 0x14030bf41#243 | 0x14030bf41 | 243      | BRANCH       | true    | member           | [object Object]                                                                                 |                 |
| 0x14030bf43#362 | 0x14030bf43 | 362      | CALL         | true    | member           | [object Object]                                                                                 |                 |
| 0x14030bf48#365 | 0x14030bf48 | 365      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf48#873 | 0x14030bf48 | 873      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf48#906 | 0x14030bf48 | 906      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf4f#366 | 0x14030bf4f | 366      | BRANCH       | true    | member           | [object Object]                                                                                 |                 |
| 0x14030bf51#371 | 0x14030bf51 | 371      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf53#376 | 0x14030bf53 | 376      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf55#379 | 0x14030bf55 | 379      | CALL         | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf5a#382 | 0x14030bf5a | 382      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf5a#874 | 0x14030bf5a | 874      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf5a#905 | 0x14030bf5a | 905      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf61#741 | 0x14030bf61 | 741      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf61#742 | 0x14030bf61 | 742      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf61#875 | 0x14030bf61 | 875      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf61#876 | 0x14030bf61 | 876      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf68#744 | 0x14030bf68 | 744      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf68#745 | 0x14030bf68 | 745      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf68#877 | 0x14030bf68 | 877      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf68#878 | 0x14030bf68 | 878      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf68#909 | 0x14030bf68 | 909      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf68#910 | 0x14030bf68 | 910      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf6f#747 | 0x14030bf6f | 747      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf6f#748 | 0x14030bf6f | 748      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf6f#879 | 0x14030bf6f | 879      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf6f#880 | 0x14030bf6f | 880      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf76#750 | 0x14030bf76 | 750      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf76#751 | 0x14030bf76 | 751      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf76#881 | 0x14030bf76 | 881      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf76#882 | 0x14030bf76 | 882      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf76#911 | 0x14030bf76 | 911      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf76#912 | 0x14030bf76 | 912      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf7d#265 | 0x14030bf7d | 265      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf7d#883 | 0x14030bf7d | 883      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf84#269 | 0x14030bf84 | 269      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf84#884 | 0x14030bf84 | 884      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf84#913 | 0x14030bf84 | 913      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf8b#270 | 0x14030bf8b | 270      | BRANCH       | true    | member           | [object Object]                                                                                 |                 |
| 0x14030bf90#386 | 0x14030bf90 | 386      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030bf95#389 | 0x14030bf95 | 389      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf95#885 | 0x14030bf95 | 885      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf95#896 | 0x14030bf95 | 896      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf9c#272 | 0x14030bf9c | 272      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf9c#278 | 0x14030bf9c | 278      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf9c#886 | 0x14030bf9c | 886      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf9c#914 | 0x14030bf9c | 914      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bfa3#283 | 0x14030bfa3 | 283      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bfa5#285 | 0x14030bfa5 | 285      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bfa5#887 | 0x14030bfa5 | 887      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bfac#296 | 0x14030bfac | 296      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bfac#297 | 0x14030bfac | 297      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bfac#915 | 0x14030bfac | 915      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bfae#299 | 0x14030bfae | 299      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bfb4#300 | 0x14030bfb4 | 300      | COPY         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bfbf#328 | 0x14030bfbf | 328      | RETURN       | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bfc0#330 | 0x14030bfc0 | 330      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bfc6#331 | 0x14030bfc6 | 331      | COPY         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bfd1#359 | 0x14030bfd1 | 359      | RETURN       | true    | member           | [object Object],[object Object]                                                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x14030be6e#847 | 0x14030be6e#888 | 0           |
| 0x14030be72#889 | 0x14030be72#46  | 1           |
| 0x14030be72#848 | 0x14030be72#889 | 0           |
| 0x14030be7b#890 | 0x14030be7b#755 | 1           |
| 0x14030be7b#891 | 0x14030be7b#756 | 1           |
| 0x14030be7b#849 | 0x14030be7b#890 | 0           |
| 0x14030be7b#850 | 0x14030be7b#891 | 0           |
| 0x14030be82#892 | 0x14030be82#56  | 1           |
| 0x14030be82#851 | 0x14030be82#892 | 0           |
| 0x14030be89#893 | 0x14030be89#59  | 1           |
| 0x14030be89#852 | 0x14030be89#893 | 0           |
| 0x14030be94#894 | 0x14030be94#62  | 1           |
| 0x14030be94#853 | 0x14030be94#894 | 0           |
| 0x14030bea2#895 | 0x14030bea2#67  | 1           |
| 0x14030bea2#67  | 0x14030bea2#73  | 0           |
| 0x14030bea2#854 | 0x14030bea2#895 | 0           |
| 0x14030bea2#73  | 0x14030bea8#78  | 1           |
| 0x14030be6e#888 | 0x14030beb1#82  | 1           |
| 0x14030beae#79  | 0x14030beb1#82  | 2           |
| 0x14030be6e#888 | 0x14030beb4#88  | 0           |
| 0x14030beb4#88  | 0x14030beb7#93  | 1           |
| 0x14030bebd#856 | 0x14030bebd#104 | 1           |
| 0x14030bec2#897 | 0x14030bec2#115 | 1           |
| 0x14030bec2#115 | 0x14030bec2#116 | 1           |
| 0x14030bebd#104 | 0x14030bec2#897 | 0           |
| 0x14030beb9#855 | 0x14030bec4#117 | 1           |
| 0x14030bec4#117 | 0x14030bec4#898 | 0           |
| 0x14030beb9#855 | 0x14030bec7#546 | 0           |
| 0x14030bec4#898 | 0x14030bec7#546 | 1           |
| 0x14030becb#858 | 0x14030becb#122 | 1           |
| 0x14030bec7#857 | 0x14030becf#126 | 1           |
| 0x14030bec7#546 | 0x14030becf#126 | 2           |
| 0x14030becb#122 | 0x14030becf#126 | 3           |
| 0x14030bed8#860 | 0x14030bed8#130 | 1           |
| 0x14030bedd#899 | 0x14030bedd#141 | 1           |
| 0x14030bedd#141 | 0x14030bedd#142 | 1           |
| 0x14030bed8#130 | 0x14030bedd#899 | 0           |
| 0x14030bed4#859 | 0x14030bedf#143 | 1           |
| 0x14030bedf#143 | 0x14030bedf#900 | 0           |
| 0x14030bed4#859 | 0x14030bee2#544 | 0           |
| 0x14030bedf#900 | 0x14030bee2#544 | 1           |
| 0x14030bee6#862 | 0x14030bee6#148 | 1           |
| 0x14030bee2#861 | 0x14030beea#152 | 1           |
| 0x14030bee2#544 | 0x14030beea#152 | 2           |
| 0x14030bee6#148 | 0x14030beea#152 | 3           |
| 0x14030bef3#864 | 0x14030bef3#156 | 1           |
| 0x14030bef8#901 | 0x14030bef8#167 | 1           |
| 0x14030bef8#167 | 0x14030bef8#168 | 1           |
| 0x14030bef3#156 | 0x14030bef8#901 | 0           |
| 0x14030beef#863 | 0x14030befa#169 | 1           |
| 0x14030befa#169 | 0x14030befa#902 | 0           |
| 0x14030beef#863 | 0x14030befd#543 | 0           |
| 0x14030befa#902 | 0x14030befd#543 | 1           |
| 0x14030bf01#866 | 0x14030bf01#174 | 1           |
| 0x14030befd#865 | 0x14030bf05#178 | 1           |
| 0x14030befd#543 | 0x14030bf05#178 | 2           |
| 0x14030bf01#174 | 0x14030bf05#178 | 3           |
| 0x14030bf0e#903 | 0x14030bf0e#182 | 1           |
| 0x14030bf0e#868 | 0x14030bf0e#903 | 0           |
| 0x14030bf15#904 | 0x14030bf15#186 | 1           |
| 0x14030bf15#186 | 0x14030bf15#192 | 0           |
| 0x14030bf15#869 | 0x14030bf15#904 | 0           |
| 0x14030bf15#192 | 0x14030bf1c#197 | 1           |
| 0x14030bf0e#182 | 0x14030bf22#204 | 0           |
| 0x14030bf22#204 | 0x14030bf24#209 | 1           |
| 0x14030be6e#888 | 0x14030bf26#215 | 0           |
| 0x14030bf26#215 | 0x14030bf29#220 | 1           |
| 0x14030bf2b#871 | 0x14030bf2b#222 | 1           |
| 0x14030bf33#907 | 0x14030bf33#233 | 1           |
| 0x14030bf33#233 | 0x14030bf33#234 | 1           |
| 0x14030bf2b#222 | 0x14030bf33#907 | 0           |
| 0x14030bf1e#870 | 0x14030bf35#235 | 1           |
| 0x14030bf35#235 | 0x14030bf35#908 | 0           |
| 0x14030bf38#872 | 0x14030bf38#238 | 1           |
| 0x14030bf1e#870 | 0x14030bf38#541 | 0           |
| 0x14030bf35#908 | 0x14030bf38#541 | 1           |
| 0x14030bf0a#867 | 0x14030bf3c#242 | 1           |
| 0x14030bf38#541 | 0x14030bf3c#242 | 2           |
| 0x14030bf38#238 | 0x14030bf3c#242 | 3           |
| 0x14030bf48#906 | 0x14030bf48#365 | 1           |
| 0x14030bf48#873 | 0x14030bf48#906 | 0           |
| 0x14030bf0e#182 | 0x14030bf51#371 | 0           |
| 0x14030bf51#371 | 0x14030bf53#376 | 1           |
| 0x14030bf0a#867 | 0x14030bf55#379 | 1           |
| 0x14030bf5a#905 | 0x14030bf5a#382 | 1           |
| 0x14030bf5a#874 | 0x14030bf5a#905 | 0           |
| 0x14030bf61#875 | 0x14030bf61#741 | 1           |
| 0x14030bf61#876 | 0x14030bf61#742 | 1           |
| 0x14030bf68#909 | 0x14030bf68#744 | 1           |
| 0x14030bf61#741 | 0x14030bf68#744 | 2           |
| 0x14030bf68#910 | 0x14030bf68#745 | 1           |
| 0x14030bf61#742 | 0x14030bf68#745 | 2           |
| 0x14030bf68#877 | 0x14030bf68#909 | 0           |
| 0x14030bf68#878 | 0x14030bf68#910 | 0           |
| 0x14030bf6f#879 | 0x14030bf6f#747 | 1           |
| 0x14030bf6f#880 | 0x14030bf6f#748 | 1           |
| 0x14030bf76#911 | 0x14030bf76#750 | 1           |
| 0x14030bf6f#747 | 0x14030bf76#750 | 2           |
| 0x14030bf76#912 | 0x14030bf76#751 | 1           |
| 0x14030bf6f#748 | 0x14030bf76#751 | 2           |
| 0x14030bf76#881 | 0x14030bf76#911 | 0           |
| 0x14030bf76#882 | 0x14030bf76#912 | 0           |
| 0x14030bf7d#883 | 0x14030bf7d#265 | 1           |
| 0x14030bf84#913 | 0x14030bf84#269 | 1           |
| 0x14030bf7d#265 | 0x14030bf84#269 | 2           |
| 0x14030bf84#884 | 0x14030bf84#913 | 0           |
| 0x14030be6e#888 | 0x14030bf90#386 | 1           |
| 0x14030bf95#896 | 0x14030bf95#389 | 1           |
| 0x14030bf95#885 | 0x14030bf95#896 | 0           |
| 0x14030bf9c#914 | 0x14030bf9c#272 | 1           |
| 0x14030bf9c#272 | 0x14030bf9c#278 | 0           |
| 0x14030bf9c#886 | 0x14030bf9c#914 | 0           |
| 0x14030bf9c#278 | 0x14030bfa3#283 | 1           |
| 0x14030bfa5#887 | 0x14030bfa5#285 | 1           |
| 0x14030bfac#915 | 0x14030bfac#296 | 0           |
| 0x14030bfac#296 | 0x14030bfac#297 | 1           |
| 0x14030bfa5#285 | 0x14030bfac#915 | 0           |
| 0x14030bfb4#300 | 0x14030bfbf#328 | 1           |
| 0x14030bfc6#331 | 0x14030bfd1#359 | 1           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined4 * |
| 1       | param_2 | /undefined8 * |
| 2       | param_3 | /ulonglong    |
| 3       | param_4 | /undefined8   |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x14030be6c#41  | 1           |
| 0       | 0x14030be6e#847 | 0           |
| 0       | 0x14030be72#848 | 0           |
| 0       | 0x14030be7b#849 | 0           |
| 0       | 0x14030be7b#850 | 0           |
| 0       | 0x14030be82#851 | 0           |
| 0       | 0x14030be89#852 | 0           |
| 0       | 0x14030be94#853 | 0           |
| 0       | 0x14030bea2#854 | 0           |
| 1       | 0x14030beae#79  | 1           |
| 1       | 0x14030beb4#88  | 1           |
| 1       | 0x14030beb9#855 | 0           |
| 1       | 0x14030bebd#856 | 0           |
| 0       | 0x14030bec7#857 | 0           |
| 1       | 0x14030becb#858 | 0           |
| 1       | 0x14030bed4#859 | 0           |
| 1       | 0x14030bed8#860 | 0           |
| 0       | 0x14030bee2#861 | 0           |
| 1       | 0x14030bee6#862 | 0           |
| 1       | 0x14030beef#863 | 0           |
| 1       | 0x14030bef3#864 | 0           |
| 0       | 0x14030befd#865 | 0           |
| 1       | 0x14030bf01#866 | 0           |
| 0       | 0x14030bf0a#867 | 0           |
| 0       | 0x14030bf0e#868 | 0           |
| 1       | 0x14030bf15#869 | 0           |
| 1       | 0x14030bf1e#870 | 0           |
| 1       | 0x14030bf26#215 | 1           |
| 1       | 0x14030bf2b#871 | 0           |
| 1       | 0x14030bf38#872 | 0           |
| 0       | 0x14030bf48#873 | 0           |
| 0       | 0x14030bf5a#874 | 0           |
| 1       | 0x14030bf61#875 | 0           |
| 1       | 0x14030bf61#876 | 0           |
| 0       | 0x14030bf68#877 | 0           |
| 0       | 0x14030bf68#878 | 0           |
| 1       | 0x14030bf6f#879 | 0           |
| 1       | 0x14030bf6f#880 | 0           |
| 0       | 0x14030bf76#881 | 0           |
| 0       | 0x14030bf76#882 | 0           |
| 1       | 0x14030bf7d#883 | 0           |
| 0       | 0x14030bf84#884 | 0           |
| 1       | 0x14030bf90#386 | 2           |
| 2       | 0x14030bf90#386 | 3           |
| 3       | 0x14030bf90#386 | 4           |
| 0       | 0x14030bf95#885 | 0           |
| 1       | 0x14030bf9c#886 | 0           |
| 1       | 0x14030bfa5#887 | 0           |
| 2       | 0x14030bfac#296 | 1           |
| 0       | 0x14030bfae#299 | 1           |
| 0       | 0x14030bfb4#300 | 0           |
| 0       | 0x14030bfc0#330 | 1           |
| 0       | 0x14030bfc6#331 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x14030be6c#41  | memory_write       | 1             | 2           |
| 0x14030be72#46  | memory_write       | 1             | 2           |
| 0x14030be7b#755 | memory_write       | 1             | 2           |
| 0x14030be7b#756 | memory_write       | 1             | 2           |
| 0x14030be82#56  | memory_write       | 1             | 2           |
| 0x14030be89#59  | memory_write       | 1             | 2           |
| 0x14030be94#62  | memory_write       | 1             | 2           |
| 0x14030bea2#67  | memory_read        | 1             |             |
| 0x14030bea8#78  | conditional_branch |               | 1           |
| 0x14030beae#79  | memory_read        | 1             |             |
| 0x14030beb1#82  | memory_write       | 1             | 2           |
| 0x14030beb7#93  | conditional_branch |               | 1           |
| 0x14030bebd#104 | memory_read        | 1             |             |
| 0x14030bec2#116 | conditional_branch |               | 1           |
| 0x14030bec4#117 | memory_read        | 1             |             |
| 0x14030becb#122 | memory_read        | 1             |             |
| 0x14030becf#126 | direct_call        | 0             |             |
| 0x14030bed8#130 | memory_read        | 1             |             |
| 0x14030bedd#142 | conditional_branch |               | 1           |
| 0x14030bedf#143 | memory_read        | 1             |             |
| 0x14030bee6#148 | memory_read        | 1             |             |
| 0x14030beea#152 | direct_call        | 0             |             |
| 0x14030bef3#156 | memory_read        | 1             |             |
| 0x14030bef8#168 | conditional_branch |               | 1           |
| 0x14030befa#169 | memory_read        | 1             |             |
| 0x14030bf01#174 | memory_read        | 1             |             |
| 0x14030bf05#178 | direct_call        | 0             |             |
| 0x14030bf0e#182 | memory_read        | 1             |             |
| 0x14030bf15#186 | memory_read        | 1             |             |
| 0x14030bf1c#197 | conditional_branch |               | 1           |
| 0x14030bf24#209 | conditional_branch |               | 1           |
| 0x14030bf29#220 | conditional_branch |               | 1           |
| 0x14030bf2b#222 | memory_read        | 1             |             |
| 0x14030bf33#234 | conditional_branch |               | 1           |
| 0x14030bf35#235 | memory_read        | 1             |             |
| 0x14030bf38#238 | memory_read        | 1             |             |
| 0x14030bf3c#242 | direct_call        | 0             |             |
| 0x14030bf43#362 | direct_call        | 0             |             |
| 0x14030bf48#365 | memory_write       | 1             | 2           |
| 0x14030bf53#376 | conditional_branch |               | 1           |
| 0x14030bf55#379 | direct_call        | 0             |             |
| 0x14030bf5a#382 | memory_write       | 1             | 2           |
| 0x14030bf61#741 | memory_read        | 1             |             |
| 0x14030bf61#742 | memory_read        | 1             |             |
| 0x14030bf68#744 | memory_write       | 1             | 2           |
| 0x14030bf68#745 | memory_write       | 1             | 2           |
| 0x14030bf6f#747 | memory_read        | 1             |             |
| 0x14030bf6f#748 | memory_read        | 1             |             |
| 0x14030bf76#750 | memory_write       | 1             | 2           |
| 0x14030bf76#751 | memory_write       | 1             | 2           |
| 0x14030bf7d#265 | memory_read        | 1             |             |
| 0x14030bf84#269 | memory_write       | 1             | 2           |
| 0x14030bf90#386 | direct_call        | 0             |             |
| 0x14030bf95#389 | memory_write       | 1             | 2           |
| 0x14030bf9c#272 | memory_read        | 1             |             |
| 0x14030bfa3#283 | conditional_branch |               | 1           |
| 0x14030bfa5#285 | memory_read        | 1             |             |
| 0x14030bfac#297 | conditional_branch |               | 1           |
| 0x14030bfae#299 | memory_write       | 1             | 2           |
| 0x14030bfc0#330 | memory_write       | 1             | 2           |

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

0x14030be50

## normalized_result.procedure.name

FUN_14030be50

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
| 0x14030be50 | 0x14030bfd1 |

## normalized_result.procedure.body.total_bytes

386

## normalized_result.procedure.body.span_bytes

386

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_14030be50()

## normalized_result.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined4 local_38 @ Stack[-0x38]:4 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8 | ghidra-function-database |

## normalized_result.pseudocode


undefined4 *
FUN_14030be50(undefined4 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  puVar1 = (undefined8 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xf;
  *(undefined1 *)(param_1 + 0x32) = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_1401f0bc0(puVar1,param_2,param_3,param_4,1);
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  else {
    *puVar1 = *param_2;
    if (puVar1 != param_2) {
      puVar3 = param_2 + 1;
      if (0xf < (ulonglong)param_2[4]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_140046bf0(param_1 + 4,puVar3,param_2[3]);
      puVar3 = param_2 + 5;
      if (0xf < (ulonglong)param_2[8]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_140046bf0(param_1 + 0xc,puVar3,param_2[7]);
      puVar3 = param_2 + 9;
      if (0xf < (ulonglong)param_2[0xc]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_140046bf0(param_1 + 0x14,puVar3,param_2[0xb]);
    }
    if (*(char *)(param_2 + 0x11) == '\0') {
      if (*(char *)(param_1 + 0x24) != '\0') {
        FUN_140005540(param_1 + 0x1c);
        *(undefined1 *)(param_1 + 0x24) = 0;
      }
    }
    else {
      puVar3 = param_2 + 0xd;
      if (*(char *)(param_1 + 0x24) == '\0') {
        FUN_140002a80();
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      else if (puVar1 != param_2) {
        if (0xf < (ulonglong)param_2[0x10]) {
          puVar3 = (undefined8 *)*puVar3;
        }
        FUN_140046bf0(param_1 + 0x1c,puVar3,param_2[0xf]);
      }
    }
    uVar2 = param_2[0x13];
    *(undefined8 *)(param_1 + 0x26) = param_2[0x12];
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    uVar2 = param_2[0x15];
    *(undefined8 *)(param_1 + 0x2a) = param_2[0x14];
    *(undefined8 *)(param_1 + 0x2c) = uVar2;
    *(undefined8 *)(param_1 + 0x2e) = param_2[0x16];
  }
  if ((*(char *)(param_2 + 0x13) != '\0') && ((ulonglong)param_2[0x12] < param_3)) {
    *param_1 = 3;
    return param_1;
  }
  *param_1 = 2;
  return param_1;
}



## normalized_result.assembly

0x14030be50: MOV qword ptr [RSP + 0x8], RCX,0x14030be55: PUSH RBX,0x14030be56: PUSH RBP,0x14030be57: PUSH RSI,0x14030be58: PUSH RDI,0x14030be59: SUB RSP, 0x38,0x14030be5d: MOV RBP, R8,0x14030be60: MOV RBX, RDX,0x14030be63: MOV RSI, RCX,0x14030be66: XOR EAX, EAX,0x14030be68: MOV dword ptr [RSP + 0x20], EAX,0x14030be6c: MOV dword ptr [RCX], EAX,0x14030be6e: LEA RDI, [RCX + 0x8],0x14030be72: MOV byte ptr [RDI + 0xb8], AL,0x14030be78: XORPS XMM0, XMM0,0x14030be7b: MOVUPS xmmword ptr [RCX + 0xc8], XMM0,0x14030be82: MOV qword ptr [RCX + 0xd8], RAX,0x14030be89: MOV qword ptr [RCX + 0xe0], 0xf,0x14030be94: MOV byte ptr [RCX + 0xc8], AL,0x14030be9a: MOV dword ptr [RSP + 0x20], 0x1,0x14030bea2: CMP byte ptr [RDI + 0xb8], AL,0x14030bea8: JZ 0x14030bf8d,0x14030beae: MOV RAX, qword ptr [RDX],0x14030beb1: MOV qword ptr [RDI], RAX,0x14030beb4: CMP RDI, RDX,0x14030beb7: JZ 0x14030bf0a,0x14030beb9: ADD RDX, 0x8,0x14030bebd: CMP qword ptr [RBX + 0x20], 0xf,0x14030bec2: JBE 0x14030bec7,0x14030bec4: MOV RDX, qword ptr [RDX],0x14030bec7: LEA RCX, [RDI + 0x8],0x14030becb: MOV R8, qword ptr [RBX + 0x18],0x14030becf: CALL 0x140046bf0,0x14030bed4: LEA RDX, [RBX + 0x28],0x14030bed8: CMP qword ptr [RBX + 0x40], 0xf,0x14030bedd: JBE 0x14030bee2,0x14030bedf: MOV RDX, qword ptr [RDX],0x14030bee2: LEA RCX, [RDI + 0x28],0x14030bee6: MOV R8, qword ptr [RBX + 0x38],0x14030beea: CALL 0x140046bf0,0x14030beef: LEA RDX, [RBX + 0x48],0x14030bef3: CMP qword ptr [RBX + 0x60], 0xf,0x14030bef8: JBE 0x14030befd,0x14030befa: MOV RDX, qword ptr [RDX],0x14030befd: LEA RCX, [RDI + 0x48],0x14030bf01: MOV R8, qword ptr [RBX + 0x58],0x14030bf05: CALL 0x140046bf0,0x14030bf0a: LEA RCX, [RDI + 0x68],0x14030bf0e: MOVZX EAX, byte ptr [RDI + 0x88],0x14030bf15: CMP byte ptr [RBX + 0x88], 0x0,0x14030bf1c: JZ 0x14030bf51,0x14030bf1e: LEA RDX, [RBX + 0x68],0x14030bf22: TEST AL, AL,0x14030bf24: JZ 0x14030bf43,0x14030bf26: CMP RDI, RBX,0x14030bf29: JZ 0x14030bf61,0x14030bf2b: CMP qword ptr [RBX + 0x80], 0xf,0x14030bf33: JBE 0x14030bf38,0x14030bf35: MOV RDX, qword ptr [RDX],0x14030bf38: MOV R8, qword ptr [RBX + 0x78],0x14030bf3c: CALL 0x140046bf0,0x14030bf41: JMP 0x14030bf61,0x14030bf43: CALL 0x140002a80,0x14030bf48: MOV byte ptr [RDI + 0x88], 0x1,0x14030bf4f: JMP 0x14030bf61,0x14030bf51: TEST AL, AL,0x14030bf53: JZ 0x14030bf61,0x14030bf55: CALL 0x140005540,0x14030bf5a: MOV byte ptr [RDI + 0x88], 0x0,0x14030bf61: MOVUPS XMM0, xmmword ptr [RBX + 0x90],0x14030bf68: MOVUPS xmmword ptr [RDI + 0x90], XMM0,0x14030bf6f: MOVUPS XMM1, xmmword ptr [RBX + 0xa0],0x14030bf76: MOVUPS xmmword ptr [RDI + 0xa0], XMM1,0x14030bf7d: MOV RAX, qword ptr [RBX + 0xb0],0x14030bf84: MOV qword ptr [RDI + 0xb0], RAX,0x14030bf8b: JMP 0x14030bf9c,0x14030bf8d: MOV RCX, RDI,0x14030bf90: CALL 0x1401f0bc0,0x14030bf95: MOV byte ptr [RDI + 0xb8], 0x1,0x14030bf9c: CMP byte ptr [RBX + 0x98], 0x0,0x14030bfa3: JZ 0x14030bfc0,0x14030bfa5: CMP RBP, qword ptr [RBX + 0x90],0x14030bfac: JBE 0x14030bfc0,0x14030bfae: MOV dword ptr [RSI], 0x3,0x14030bfb4: MOV RAX, RSI,0x14030bfb7: ADD RSP, 0x38,0x14030bfbb: POP RDI,0x14030bfbc: POP RSI,0x14030bfbd: POP RBP,0x14030bfbe: POP RBX,0x14030bfbf: RET,0x14030bfc0: MOV dword ptr [RSI], 0x2,0x14030bfc6: MOV RAX, RSI,0x14030bfc9: ADD RSP, 0x38,0x14030bfcd: POP RDI,0x14030bfce: POP RSI,0x14030bfcf: POP RBP,0x14030bfd0: POP RBX,0x14030bfd1: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x140308ab0 | FUN_140308ab0 | [object Object] | [object Object] |
| 0x14030bfe0 | FUN_14030bfe0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140002a80 | FUN_140002a80 | [object Object] | [object Object] |
| 0x140005540 | FUN_140005540 | [object Object] | [object Object] |
| 0x140046bf0 | FUN_140046bf0 | [object Object] | [object Object] |
| 0x1401f0bc0 | FUN_1401f0bc0 | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f2caf    | 0x14030be50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3209    | 0x14030be50    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f35d8    | 0x14030be50    | [object Object]  | [object Object]  | [object Object] |
| 0x140308c10    | 0x14030be50    | [object Object]  | [object Object]  | [object Object] |
| 0x14030c39b    | 0x14030be50    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6e48    | 0x14030be50    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14030be50    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x14030be68    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030be9a    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030bea8    | 0x14030bf8d              | [object Object]  | [object Object]  | [object Object] |
| 0x14030beb7    | 0x14030bf0a              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bec2    | 0x14030bec7              | [object Object]  | [object Object]  | [object Object] |
| 0x14030becf    | 0x140046bf0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bedd    | 0x14030bee2              | [object Object]  | [object Object]  | [object Object] |
| 0x14030beea    | 0x140046bf0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bef8    | 0x14030befd              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf05    | 0x140046bf0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf1c    | 0x14030bf51              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf24    | 0x14030bf43              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf29    | 0x14030bf61              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf33    | 0x14030bf38              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf3c    | 0x140046bf0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf41    | 0x14030bf61              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf43    | 0x140002a80              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf4f    | 0x14030bf61              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf53    | 0x14030bf61              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf55    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf8b    | 0x14030bf9c              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bf90    | 0x1401f0bc0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bfa3    | 0x14030bfc0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bfac    | 0x14030bfc0              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x140002a80 | FUN_140002a80 | 0x14030bf43    |
| 0x140005540 | FUN_140005540 | 0x14030bf55    |
| 0x140046bf0 | FUN_140046bf0 | 0x14030becf    |
| 0x140046bf0 | FUN_140046bf0 | 0x14030beea    |
| 0x140046bf0 | FUN_140046bf0 | 0x14030bf05    |
| 0x140046bf0 | FUN_140046bf0 | 0x14030bf3c    |
| 0x1401f0bc0 | FUN_1401f0bc0 | 0x14030bf90    |
| 0x14030bec7 | LAB_14030bec7 | 0x14030bec2    |
| 0x14030bee2 | LAB_14030bee2 | 0x14030bedd    |
| 0x14030befd | LAB_14030befd | 0x14030bef8    |
| 0x14030bf0a | LAB_14030bf0a | 0x14030beb7    |
| 0x14030bf38 | LAB_14030bf38 | 0x14030bf33    |
| 0x14030bf43 | LAB_14030bf43 | 0x14030bf24    |
| 0x14030bf51 | LAB_14030bf51 | 0x14030bf1c    |
| 0x14030bf61 | LAB_14030bf61 | 0x14030bf29    |
| 0x14030bf61 | LAB_14030bf61 | 0x14030bf41    |
| 0x14030bf61 | LAB_14030bf61 | 0x14030bf4f    |
| 0x14030bf61 | LAB_14030bf61 | 0x14030bf53    |
| 0x14030bf8d | LAB_14030bf8d | 0x14030bea8    |
| 0x14030bf9c | LAB_14030bf9c | 0x14030bf8b    |
| 0x14030bfc0 | LAB_14030bfc0 | 0x14030bfa3    |
| 0x14030bfc0 | LAB_14030bfc0 | 0x14030bfac    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14030be50 | 0x14030beae | 0x14030beae,0x14030bf8d |
| 0x14030beae | 0x14030beb9 | 0x14030beb9,0x14030bf0a |
| 0x14030beb9 | 0x14030bec4 | 0x14030bec4,0x14030bec7 |
| 0x14030bec4 | 0x14030bec7 | 0x14030bec7             |
| 0x14030bec7 | 0x14030bedf | 0x14030bedf,0x14030bee2 |
| 0x14030bedf | 0x14030bee2 | 0x14030bee2             |
| 0x14030bee2 | 0x14030befa | 0x14030befa,0x14030befd |
| 0x14030befa | 0x14030befd | 0x14030befd             |
| 0x14030befd | 0x14030bf0a | 0x14030bf0a             |
| 0x14030bf0a | 0x14030bf1e | 0x14030bf1e,0x14030bf51 |
| 0x14030bf1e | 0x14030bf26 | 0x14030bf26,0x14030bf43 |
| 0x14030bf26 | 0x14030bf2b | 0x14030bf2b,0x14030bf61 |
| 0x14030bf2b | 0x14030bf35 | 0x14030bf35,0x14030bf38 |
| 0x14030bf35 | 0x14030bf38 | 0x14030bf38             |
| 0x14030bf38 | 0x14030bf43 | 0x14030bf61             |
| 0x14030bf43 | 0x14030bf51 | 0x14030bf61             |
| 0x14030bf51 | 0x14030bf55 | 0x14030bf55,0x14030bf61 |
| 0x14030bf55 | 0x14030bf61 | 0x14030bf61             |
| 0x14030bf61 | 0x14030bf8d | 0x14030bf9c             |
| 0x14030bf8d | 0x14030bf9c | 0x14030bf9c             |
| 0x14030bf9c | 0x14030bfa5 | 0x14030bfa5,0x14030bfc0 |
| 0x14030bfa5 | 0x14030bfae | 0x14030bfae,0x14030bfc0 |
| 0x14030bfae | 0x14030bfc0 |                         |
| 0x14030bfc0 | 0x14030bfd2 |                         |

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

undefined4 *

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
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type undefined4 *. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters

| ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | undefined4 * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | undefined8 * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 2       | param_3 | ulonglong    | 8          | R8:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 3       | param_4 | undefined8   | 8          | R9:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-------------------------------------------------------------------------------------------------|-----------------|
| 0x14030be6c#41  | 0x14030be6c | 41       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be6e#847 | 0x14030be6e | 847      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be6e#888 | 0x14030be6e | 888      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be72#46  | 0x14030be72 | 46       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be72#848 | 0x14030be72 | 848      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be72#889 | 0x14030be72 | 889      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be7b#755 | 0x14030be7b | 755      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be7b#756 | 0x14030be7b | 756      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be7b#849 | 0x14030be7b | 849      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be7b#850 | 0x14030be7b | 850      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be7b#890 | 0x14030be7b | 890      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be7b#891 | 0x14030be7b | 891      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be82#56  | 0x14030be82 | 56       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be82#851 | 0x14030be82 | 851      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be82#892 | 0x14030be82 | 892      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be89#59  | 0x14030be89 | 59       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be89#852 | 0x14030be89 | 852      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be89#893 | 0x14030be89 | 893      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030be94#62  | 0x14030be94 | 62       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030be94#853 | 0x14030be94 | 853      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030be94#894 | 0x14030be94 | 894      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bea2#67  | 0x14030bea2 | 67       | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bea2#73  | 0x14030bea2 | 73       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bea2#854 | 0x14030bea2 | 854      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bea2#895 | 0x14030bea2 | 895      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bea8#78  | 0x14030bea8 | 78       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030beae#79  | 0x14030beae | 79       | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030beb1#82  | 0x14030beb1 | 82       | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030beb4#88  | 0x14030beb4 | 88       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030beb7#93  | 0x14030beb7 | 93       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030beb9#855 | 0x14030beb9 | 855      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bebd#104 | 0x14030bebd | 104      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bebd#856 | 0x14030bebd | 856      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bec2#115 | 0x14030bec2 | 115      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bec2#116 | 0x14030bec2 | 116      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bec2#897 | 0x14030bec2 | 897      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bec4#117 | 0x14030bec4 | 117      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bec4#898 | 0x14030bec4 | 898      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bec7#546 | 0x14030bec7 | 546      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bec7#857 | 0x14030bec7 | 857      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030becb#122 | 0x14030becb | 122      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030becb#858 | 0x14030becb | 858      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030becf#126 | 0x14030becf | 126      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                 |                 |
| 0x14030bed4#859 | 0x14030bed4 | 859      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bed8#130 | 0x14030bed8 | 130      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bed8#860 | 0x14030bed8 | 860      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bedd#141 | 0x14030bedd | 141      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bedd#142 | 0x14030bedd | 142      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bedd#899 | 0x14030bedd | 899      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bedf#143 | 0x14030bedf | 143      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bedf#900 | 0x14030bedf | 900      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bee2#544 | 0x14030bee2 | 544      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bee2#861 | 0x14030bee2 | 861      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bee6#148 | 0x14030bee6 | 148      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bee6#862 | 0x14030bee6 | 862      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030beea#152 | 0x14030beea | 152      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                 |                 |
| 0x14030beef#863 | 0x14030beef | 863      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bef3#156 | 0x14030bef3 | 156      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bef3#864 | 0x14030bef3 | 864      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bef8#167 | 0x14030bef8 | 167      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bef8#168 | 0x14030bef8 | 168      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bef8#901 | 0x14030bef8 | 901      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030befa#169 | 0x14030befa | 169      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030befa#902 | 0x14030befa | 902      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030befd#543 | 0x14030befd | 543      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030befd#865 | 0x14030befd | 865      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf01#174 | 0x14030bf01 | 174      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf01#866 | 0x14030bf01 | 866      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf05#178 | 0x14030bf05 | 178      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                 |                 |
| 0x14030bf0a#867 | 0x14030bf0a | 867      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf0e#182 | 0x14030bf0e | 182      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf0e#868 | 0x14030bf0e | 868      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf0e#903 | 0x14030bf0e | 903      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf15#186 | 0x14030bf15 | 186      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf15#192 | 0x14030bf15 | 192      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf15#869 | 0x14030bf15 | 869      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf15#904 | 0x14030bf15 | 904      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf1c#197 | 0x14030bf1c | 197      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf1e#870 | 0x14030bf1e | 870      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf22#204 | 0x14030bf22 | 204      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf24#209 | 0x14030bf24 | 209      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf26#215 | 0x14030bf26 | 215      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf29#220 | 0x14030bf29 | 220      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf2b#222 | 0x14030bf2b | 222      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf2b#871 | 0x14030bf2b | 871      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf33#233 | 0x14030bf33 | 233      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf33#234 | 0x14030bf33 | 234      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf33#907 | 0x14030bf33 | 907      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf35#235 | 0x14030bf35 | 235      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf35#908 | 0x14030bf35 | 908      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf38#238 | 0x14030bf38 | 238      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf38#541 | 0x14030bf38 | 541      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf38#872 | 0x14030bf38 | 872      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf3c#242 | 0x14030bf3c | 242      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                 |                 |
| 0x14030bf41#243 | 0x14030bf41 | 243      | BRANCH       | true    | member           | [object Object]                                                                                 |                 |
| 0x14030bf43#362 | 0x14030bf43 | 362      | CALL         | true    | member           | [object Object]                                                                                 |                 |
| 0x14030bf48#365 | 0x14030bf48 | 365      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf48#873 | 0x14030bf48 | 873      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf48#906 | 0x14030bf48 | 906      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf4f#366 | 0x14030bf4f | 366      | BRANCH       | true    | member           | [object Object]                                                                                 |                 |
| 0x14030bf51#371 | 0x14030bf51 | 371      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf53#376 | 0x14030bf53 | 376      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf55#379 | 0x14030bf55 | 379      | CALL         | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bf5a#382 | 0x14030bf5a | 382      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf5a#874 | 0x14030bf5a | 874      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf5a#905 | 0x14030bf5a | 905      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf61#741 | 0x14030bf61 | 741      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf61#742 | 0x14030bf61 | 742      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf61#875 | 0x14030bf61 | 875      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf61#876 | 0x14030bf61 | 876      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf68#744 | 0x14030bf68 | 744      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf68#745 | 0x14030bf68 | 745      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf68#877 | 0x14030bf68 | 877      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf68#878 | 0x14030bf68 | 878      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf68#909 | 0x14030bf68 | 909      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf68#910 | 0x14030bf68 | 910      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf6f#747 | 0x14030bf6f | 747      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf6f#748 | 0x14030bf6f | 748      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf6f#879 | 0x14030bf6f | 879      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf6f#880 | 0x14030bf6f | 880      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf76#750 | 0x14030bf76 | 750      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf76#751 | 0x14030bf76 | 751      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf76#881 | 0x14030bf76 | 881      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf76#882 | 0x14030bf76 | 882      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf76#911 | 0x14030bf76 | 911      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf76#912 | 0x14030bf76 | 912      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf7d#265 | 0x14030bf7d | 265      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf7d#883 | 0x14030bf7d | 883      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf84#269 | 0x14030bf84 | 269      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf84#884 | 0x14030bf84 | 884      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf84#913 | 0x14030bf84 | 913      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf8b#270 | 0x14030bf8b | 270      | BRANCH       | true    | member           | [object Object]                                                                                 |                 |
| 0x14030bf90#386 | 0x14030bf90 | 386      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030bf95#389 | 0x14030bf95 | 389      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bf95#885 | 0x14030bf95 | 885      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf95#896 | 0x14030bf95 | 896      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bf9c#272 | 0x14030bf9c | 272      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf9c#278 | 0x14030bf9c | 278      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bf9c#886 | 0x14030bf9c | 886      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bf9c#914 | 0x14030bf9c | 914      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bfa3#283 | 0x14030bfa3 | 283      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bfa5#285 | 0x14030bfa5 | 285      | LOAD         | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bfa5#887 | 0x14030bfa5 | 887      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x14030bfac#296 | 0x14030bfac | 296      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                 | [object Object] |
| 0x14030bfac#297 | 0x14030bfac | 297      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bfac#915 | 0x14030bfac | 915      | CAST         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bfae#299 | 0x14030bfae | 299      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bfb4#300 | 0x14030bfb4 | 300      | COPY         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bfbf#328 | 0x14030bfbf | 328      | RETURN       | true    | member           | [object Object],[object Object]                                                                 |                 |
| 0x14030bfc0#330 | 0x14030bfc0 | 330      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                 |                 |
| 0x14030bfc6#331 | 0x14030bfc6 | 331      | COPY         | true    | member           | [object Object]                                                                                 | [object Object] |
| 0x14030bfd1#359 | 0x14030bfd1 | 359      | RETURN       | true    | member           | [object Object],[object Object]                                                                 |                 |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x14030be6e#847 | 0x14030be6e#888 | 0           |
| 0x14030be72#889 | 0x14030be72#46  | 1           |
| 0x14030be72#848 | 0x14030be72#889 | 0           |
| 0x14030be7b#890 | 0x14030be7b#755 | 1           |
| 0x14030be7b#891 | 0x14030be7b#756 | 1           |
| 0x14030be7b#849 | 0x14030be7b#890 | 0           |
| 0x14030be7b#850 | 0x14030be7b#891 | 0           |
| 0x14030be82#892 | 0x14030be82#56  | 1           |
| 0x14030be82#851 | 0x14030be82#892 | 0           |
| 0x14030be89#893 | 0x14030be89#59  | 1           |
| 0x14030be89#852 | 0x14030be89#893 | 0           |
| 0x14030be94#894 | 0x14030be94#62  | 1           |
| 0x14030be94#853 | 0x14030be94#894 | 0           |
| 0x14030bea2#895 | 0x14030bea2#67  | 1           |
| 0x14030bea2#67  | 0x14030bea2#73  | 0           |
| 0x14030bea2#854 | 0x14030bea2#895 | 0           |
| 0x14030bea2#73  | 0x14030bea8#78  | 1           |
| 0x14030be6e#888 | 0x14030beb1#82  | 1           |
| 0x14030beae#79  | 0x14030beb1#82  | 2           |
| 0x14030be6e#888 | 0x14030beb4#88  | 0           |
| 0x14030beb4#88  | 0x14030beb7#93  | 1           |
| 0x14030bebd#856 | 0x14030bebd#104 | 1           |
| 0x14030bec2#897 | 0x14030bec2#115 | 1           |
| 0x14030bec2#115 | 0x14030bec2#116 | 1           |
| 0x14030bebd#104 | 0x14030bec2#897 | 0           |
| 0x14030beb9#855 | 0x14030bec4#117 | 1           |
| 0x14030bec4#117 | 0x14030bec4#898 | 0           |
| 0x14030beb9#855 | 0x14030bec7#546 | 0           |
| 0x14030bec4#898 | 0x14030bec7#546 | 1           |
| 0x14030becb#858 | 0x14030becb#122 | 1           |
| 0x14030bec7#857 | 0x14030becf#126 | 1           |
| 0x14030bec7#546 | 0x14030becf#126 | 2           |
| 0x14030becb#122 | 0x14030becf#126 | 3           |
| 0x14030bed8#860 | 0x14030bed8#130 | 1           |
| 0x14030bedd#899 | 0x14030bedd#141 | 1           |
| 0x14030bedd#141 | 0x14030bedd#142 | 1           |
| 0x14030bed8#130 | 0x14030bedd#899 | 0           |
| 0x14030bed4#859 | 0x14030bedf#143 | 1           |
| 0x14030bedf#143 | 0x14030bedf#900 | 0           |
| 0x14030bed4#859 | 0x14030bee2#544 | 0           |
| 0x14030bedf#900 | 0x14030bee2#544 | 1           |
| 0x14030bee6#862 | 0x14030bee6#148 | 1           |
| 0x14030bee2#861 | 0x14030beea#152 | 1           |
| 0x14030bee2#544 | 0x14030beea#152 | 2           |
| 0x14030bee6#148 | 0x14030beea#152 | 3           |
| 0x14030bef3#864 | 0x14030bef3#156 | 1           |
| 0x14030bef8#901 | 0x14030bef8#167 | 1           |
| 0x14030bef8#167 | 0x14030bef8#168 | 1           |
| 0x14030bef3#156 | 0x14030bef8#901 | 0           |
| 0x14030beef#863 | 0x14030befa#169 | 1           |
| 0x14030befa#169 | 0x14030befa#902 | 0           |
| 0x14030beef#863 | 0x14030befd#543 | 0           |
| 0x14030befa#902 | 0x14030befd#543 | 1           |
| 0x14030bf01#866 | 0x14030bf01#174 | 1           |
| 0x14030befd#865 | 0x14030bf05#178 | 1           |
| 0x14030befd#543 | 0x14030bf05#178 | 2           |
| 0x14030bf01#174 | 0x14030bf05#178 | 3           |
| 0x14030bf0e#903 | 0x14030bf0e#182 | 1           |
| 0x14030bf0e#868 | 0x14030bf0e#903 | 0           |
| 0x14030bf15#904 | 0x14030bf15#186 | 1           |
| 0x14030bf15#186 | 0x14030bf15#192 | 0           |
| 0x14030bf15#869 | 0x14030bf15#904 | 0           |
| 0x14030bf15#192 | 0x14030bf1c#197 | 1           |
| 0x14030bf0e#182 | 0x14030bf22#204 | 0           |
| 0x14030bf22#204 | 0x14030bf24#209 | 1           |
| 0x14030be6e#888 | 0x14030bf26#215 | 0           |
| 0x14030bf26#215 | 0x14030bf29#220 | 1           |
| 0x14030bf2b#871 | 0x14030bf2b#222 | 1           |
| 0x14030bf33#907 | 0x14030bf33#233 | 1           |
| 0x14030bf33#233 | 0x14030bf33#234 | 1           |
| 0x14030bf2b#222 | 0x14030bf33#907 | 0           |
| 0x14030bf1e#870 | 0x14030bf35#235 | 1           |
| 0x14030bf35#235 | 0x14030bf35#908 | 0           |
| 0x14030bf38#872 | 0x14030bf38#238 | 1           |
| 0x14030bf1e#870 | 0x14030bf38#541 | 0           |
| 0x14030bf35#908 | 0x14030bf38#541 | 1           |
| 0x14030bf0a#867 | 0x14030bf3c#242 | 1           |
| 0x14030bf38#541 | 0x14030bf3c#242 | 2           |
| 0x14030bf38#238 | 0x14030bf3c#242 | 3           |
| 0x14030bf48#906 | 0x14030bf48#365 | 1           |
| 0x14030bf48#873 | 0x14030bf48#906 | 0           |
| 0x14030bf0e#182 | 0x14030bf51#371 | 0           |
| 0x14030bf51#371 | 0x14030bf53#376 | 1           |
| 0x14030bf0a#867 | 0x14030bf55#379 | 1           |
| 0x14030bf5a#905 | 0x14030bf5a#382 | 1           |
| 0x14030bf5a#874 | 0x14030bf5a#905 | 0           |
| 0x14030bf61#875 | 0x14030bf61#741 | 1           |
| 0x14030bf61#876 | 0x14030bf61#742 | 1           |
| 0x14030bf68#909 | 0x14030bf68#744 | 1           |
| 0x14030bf61#741 | 0x14030bf68#744 | 2           |
| 0x14030bf68#910 | 0x14030bf68#745 | 1           |
| 0x14030bf61#742 | 0x14030bf68#745 | 2           |
| 0x14030bf68#877 | 0x14030bf68#909 | 0           |
| 0x14030bf68#878 | 0x14030bf68#910 | 0           |
| 0x14030bf6f#879 | 0x14030bf6f#747 | 1           |
| 0x14030bf6f#880 | 0x14030bf6f#748 | 1           |
| 0x14030bf76#911 | 0x14030bf76#750 | 1           |
| 0x14030bf6f#747 | 0x14030bf76#750 | 2           |
| 0x14030bf76#912 | 0x14030bf76#751 | 1           |
| 0x14030bf6f#748 | 0x14030bf76#751 | 2           |
| 0x14030bf76#881 | 0x14030bf76#911 | 0           |
| 0x14030bf76#882 | 0x14030bf76#912 | 0           |
| 0x14030bf7d#883 | 0x14030bf7d#265 | 1           |
| 0x14030bf84#913 | 0x14030bf84#269 | 1           |
| 0x14030bf7d#265 | 0x14030bf84#269 | 2           |
| 0x14030bf84#884 | 0x14030bf84#913 | 0           |
| 0x14030be6e#888 | 0x14030bf90#386 | 1           |
| 0x14030bf95#896 | 0x14030bf95#389 | 1           |
| 0x14030bf95#885 | 0x14030bf95#896 | 0           |
| 0x14030bf9c#914 | 0x14030bf9c#272 | 1           |
| 0x14030bf9c#272 | 0x14030bf9c#278 | 0           |
| 0x14030bf9c#886 | 0x14030bf9c#914 | 0           |
| 0x14030bf9c#278 | 0x14030bfa3#283 | 1           |
| 0x14030bfa5#887 | 0x14030bfa5#285 | 1           |
| 0x14030bfac#915 | 0x14030bfac#296 | 0           |
| 0x14030bfac#296 | 0x14030bfac#297 | 1           |
| 0x14030bfa5#285 | 0x14030bfac#915 | 0           |
| 0x14030bfb4#300 | 0x14030bfbf#328 | 1           |
| 0x14030bfc6#331 | 0x14030bfd1#359 | 1           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x14030be6c#41  | memory_write       | 1             | 2           |
| 0x14030be72#46  | memory_write       | 1             | 2           |
| 0x14030be7b#755 | memory_write       | 1             | 2           |
| 0x14030be7b#756 | memory_write       | 1             | 2           |
| 0x14030be82#56  | memory_write       | 1             | 2           |
| 0x14030be89#59  | memory_write       | 1             | 2           |
| 0x14030be94#62  | memory_write       | 1             | 2           |
| 0x14030bea2#67  | memory_read        | 1             |             |
| 0x14030bea8#78  | conditional_branch |               | 1           |
| 0x14030beae#79  | memory_read        | 1             |             |
| 0x14030beb1#82  | memory_write       | 1             | 2           |
| 0x14030beb7#93  | conditional_branch |               | 1           |
| 0x14030bebd#104 | memory_read        | 1             |             |
| 0x14030bec2#116 | conditional_branch |               | 1           |
| 0x14030bec4#117 | memory_read        | 1             |             |
| 0x14030becb#122 | memory_read        | 1             |             |
| 0x14030becf#126 | direct_call        | 0             |             |
| 0x14030bed8#130 | memory_read        | 1             |             |
| 0x14030bedd#142 | conditional_branch |               | 1           |
| 0x14030bedf#143 | memory_read        | 1             |             |
| 0x14030bee6#148 | memory_read        | 1             |             |
| 0x14030beea#152 | direct_call        | 0             |             |
| 0x14030bef3#156 | memory_read        | 1             |             |
| 0x14030bef8#168 | conditional_branch |               | 1           |
| 0x14030befa#169 | memory_read        | 1             |             |
| 0x14030bf01#174 | memory_read        | 1             |             |
| 0x14030bf05#178 | direct_call        | 0             |             |
| 0x14030bf0e#182 | memory_read        | 1             |             |
| 0x14030bf15#186 | memory_read        | 1             |             |
| 0x14030bf1c#197 | conditional_branch |               | 1           |
| 0x14030bf24#209 | conditional_branch |               | 1           |
| 0x14030bf29#220 | conditional_branch |               | 1           |
| 0x14030bf2b#222 | memory_read        | 1             |             |
| 0x14030bf33#234 | conditional_branch |               | 1           |
| 0x14030bf35#235 | memory_read        | 1             |             |
| 0x14030bf38#238 | memory_read        | 1             |             |
| 0x14030bf3c#242 | direct_call        | 0             |             |
| 0x14030bf43#362 | direct_call        | 0             |             |
| 0x14030bf48#365 | memory_write       | 1             | 2           |
| 0x14030bf53#376 | conditional_branch |               | 1           |
| 0x14030bf55#379 | direct_call        | 0             |             |
| 0x14030bf5a#382 | memory_write       | 1             | 2           |
| 0x14030bf61#741 | memory_read        | 1             |             |
| 0x14030bf61#742 | memory_read        | 1             |             |
| 0x14030bf68#744 | memory_write       | 1             | 2           |
| 0x14030bf68#745 | memory_write       | 1             | 2           |
| 0x14030bf6f#747 | memory_read        | 1             |             |
| 0x14030bf6f#748 | memory_read        | 1             |             |
| 0x14030bf76#750 | memory_write       | 1             | 2           |
| 0x14030bf76#751 | memory_write       | 1             | 2           |
| 0x14030bf7d#265 | memory_read        | 1             |             |
| 0x14030bf84#269 | memory_write       | 1             | 2           |
| 0x14030bf90#386 | direct_call        | 0             |             |
| 0x14030bf95#389 | memory_write       | 1             | 2           |
| 0x14030bf9c#272 | memory_read        | 1             |             |
| 0x14030bfa3#283 | conditional_branch |               | 1           |
| 0x14030bfa5#285 | memory_read        | 1             |             |
| 0x14030bfac#297 | conditional_branch |               | 1           |
| 0x14030bfae#299 | memory_write       | 1             | 2           |
| 0x14030bfc0#330 | memory_write       | 1             | 2           |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined4 * |
| 1       | param_2 | /undefined8 * |
| 2       | param_3 | /ulonglong    |
| 3       | param_4 | /undefined8   |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x14030be6c#41  | 1           |
| 0       | 0x14030be6e#847 | 0           |
| 0       | 0x14030be72#848 | 0           |
| 0       | 0x14030be7b#849 | 0           |
| 0       | 0x14030be7b#850 | 0           |
| 0       | 0x14030be82#851 | 0           |
| 0       | 0x14030be89#852 | 0           |
| 0       | 0x14030be94#853 | 0           |
| 0       | 0x14030bea2#854 | 0           |
| 1       | 0x14030beae#79  | 1           |
| 1       | 0x14030beb4#88  | 1           |
| 1       | 0x14030beb9#855 | 0           |
| 1       | 0x14030bebd#856 | 0           |
| 0       | 0x14030bec7#857 | 0           |
| 1       | 0x14030becb#858 | 0           |
| 1       | 0x14030bed4#859 | 0           |
| 1       | 0x14030bed8#860 | 0           |
| 0       | 0x14030bee2#861 | 0           |
| 1       | 0x14030bee6#862 | 0           |
| 1       | 0x14030beef#863 | 0           |
| 1       | 0x14030bef3#864 | 0           |
| 0       | 0x14030befd#865 | 0           |
| 1       | 0x14030bf01#866 | 0           |
| 0       | 0x14030bf0a#867 | 0           |
| 0       | 0x14030bf0e#868 | 0           |
| 1       | 0x14030bf15#869 | 0           |
| 1       | 0x14030bf1e#870 | 0           |
| 1       | 0x14030bf26#215 | 1           |
| 1       | 0x14030bf2b#871 | 0           |
| 1       | 0x14030bf38#872 | 0           |
| 0       | 0x14030bf48#873 | 0           |
| 0       | 0x14030bf5a#874 | 0           |
| 1       | 0x14030bf61#875 | 0           |
| 1       | 0x14030bf61#876 | 0           |
| 0       | 0x14030bf68#877 | 0           |
| 0       | 0x14030bf68#878 | 0           |
| 1       | 0x14030bf6f#879 | 0           |
| 1       | 0x14030bf6f#880 | 0           |
| 0       | 0x14030bf76#881 | 0           |
| 0       | 0x14030bf76#882 | 0           |
| 1       | 0x14030bf7d#883 | 0           |
| 0       | 0x14030bf84#884 | 0           |
| 1       | 0x14030bf90#386 | 2           |
| 2       | 0x14030bf90#386 | 3           |
| 3       | 0x14030bf90#386 | 4           |
| 0       | 0x14030bf95#885 | 0           |
| 1       | 0x14030bf9c#886 | 0           |
| 1       | 0x14030bfa5#887 | 0           |
| 2       | 0x14030bfac#296 | 1           |
| 0       | 0x14030bfae#299 | 1           |
| 0       | 0x14030bfb4#300 | 0           |
| 0       | 0x14030bfc0#330 | 1           |
| 0       | 0x14030bfc6#331 | 0           |

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

