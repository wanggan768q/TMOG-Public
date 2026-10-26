## evidence_id

ev_38f82d474d89c45895210574fbe0db75ab5174b299e267ab61b68782c48cc2f0

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
| procedure | 0x14030ad80 |

## raw_result.value.procedure.address

0x14030ab90

## raw_result.value.procedure.name

FUN_14030ab90

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
| 0x14030ab90 | 0x14030adbe |
| 0x14030adc0 | 0x14030adc4 |

## raw_result.value.procedure.body.total_bytes

564

## raw_result.value.procedure.body.span_bytes

565

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_14030ab90()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined4 local_48 @ Stack[-0x48]:4   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## raw_result.value.pseudocode


ulonglong * FUN_14030ab90(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *local_res18;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined4 local_48;
  
  puVar6 = auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_48 = 1;
  uVar10 = 0;
  local_res18 = &DAT_140448ec8;
  uVar5 = param_2[1];
  do {
    if (uVar5 <= uVar10) {
      return param_1;
    }
    uVar2 = *local_res18;
    uVar5 = param_1[2];
    if (uVar5 != 0) {
      uVar9 = param_1[3];
      if (uVar5 < uVar9) {
        param_1[2] = uVar5 + 1;
        if (uVar9 < 0x10) {
          *(undefined2 *)((longlong)param_1 + uVar5) = 0x2d;
        }
        else {
          *(undefined2 *)(*param_1 + uVar5) = 0x2d;
        }
      }
      else {
        if (uVar5 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_140005640();
        }
        uVar7 = uVar5 + 1 | 0xf;
        if (0x7fffffffffffffff < uVar7) {
          uVar7 = 0x7fffffffffffffff;
          uVar8 = 0x8000000000000027;
LAB_14030acb6:
          lVar4 = FUN_1403272a0(uVar8);
          if (lVar4 != 0) {
            uVar8 = lVar4 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar8 - 8) = lVar4;
            goto LAB_14030acdd;
          }
LAB_14030adb3:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar6 = auStack_60;
LAB_14030adba:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar6 + -8) = &UNK_14030adbf;
          FUN_140005500();
        }
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar7 = 0x7fffffffffffffff;
          uVar8 = 0x8000000000000027;
          goto LAB_14030acb6;
        }
        uVar8 = (uVar9 >> 1) + uVar9;
        if (uVar7 < uVar8) {
          uVar7 = uVar8;
        }
        uVar1 = uVar7 + 1;
        if (uVar1 == 0) {
          uVar8 = 0;
        }
        else {
          if (0xfff < uVar1) {
            uVar8 = uVar7 + 0x28;
            if (uVar8 <= uVar1) goto LAB_14030adba;
            goto LAB_14030acb6;
          }
          uVar8 = FUN_1403272a0(uVar1);
        }
LAB_14030acdd:
        param_1[2] = uVar5 + 1;
        param_1[3] = uVar7;
        if (uVar9 < 0x10) {
          FUN_14035f420(uVar8,param_1,uVar5);
          *(undefined2 *)(uVar8 + uVar5) = 0x2d;
        }
        else {
          uVar7 = *param_1;
          FUN_14035f420(uVar8,uVar7,uVar5);
          *(undefined2 *)(uVar8 + uVar5) = 0x2d;
          if (uVar9 + 1 < 0x1000) {
            thunk_FUN_140327e20(uVar7);
          }
          else {
            if (0x1f < (uVar7 - *(longlong *)(uVar7 - 8)) - 8) goto LAB_14030adb3;
            thunk_FUN_140327e20(*(longlong *)(uVar7 - 8),uVar9 + 0x28);
          }
        }
        *param_1 = uVar8;
      }
    }
    uVar5 = param_2[1];
    uVar9 = uVar2;
    if (uVar5 - uVar10 < uVar2) {
      uVar9 = uVar5 - uVar10;
    }
    FUN_1400013f0(param_1,*param_2 + uVar10,uVar9);
    uVar10 = uVar10 + uVar2;
    local_res18 = local_res18 + 1;
    if (local_res18 == (ulonglong *)"tmog.machine.v1.") {
      return param_1;
    }
  } while( true );
}



## raw_result.value.assembly

0x14030ab90: MOV qword ptr [RSP + 0x20], RBX,0x14030ab95: MOV qword ptr [RSP + 0x10], RDX,0x14030ab9a: MOV qword ptr [RSP + 0x8], RCX,0x14030ab9f: PUSH RBP,0x14030aba0: PUSH RSI,0x14030aba1: PUSH RDI,0x14030aba2: PUSH R12,0x14030aba4: PUSH R13,0x14030aba6: PUSH R14,0x14030aba8: PUSH R15,0x14030abaa: SUB RSP, 0x30,0x14030abae: MOV RDI, RCX,0x14030abb1: MOV dword ptr [RSP + 0x20], 0x0,0x14030abb9: XORPS XMM0, XMM0,0x14030abbc: MOVUPS xmmword ptr [RCX], XMM0,0x14030abbf: MOV qword ptr [RCX + 0x10], 0x0,0x14030abc7: MOV qword ptr [RCX + 0x18], 0xf,0x14030abcf: MOV byte ptr [RCX], 0x0,0x14030abd2: MOV dword ptr [RSP + 0x20], 0x1,0x14030abda: XOR R12D, R12D,0x14030abdd: LEA RAX, [0x140448ec8],0x14030abe4: MOV qword ptr [RSP + 0x80], RAX,0x14030abec: MOV RBX, qword ptr [RDX + 0x8],0x14030abf0: MOV RDX, 0x7fffffffffffffff,0x14030abfa: CMP R12, RBX,0x14030abfd: JNC 0x14030ad98,0x14030ac03: MOV R13, qword ptr [RAX],0x14030ac06: MOV RBX, qword ptr [RDI + 0x10],0x14030ac0a: TEST RBX, RBX,0x14030ac0d: JZ 0x14030ad4a,0x14030ac13: MOV R14, qword ptr [RDI + 0x18],0x14030ac17: CMP RBX, R14,0x14030ac1a: JNC 0x14030ac46,0x14030ac1c: LEA RAX, [RBX + 0x1],0x14030ac20: MOV qword ptr [RDI + 0x10], RAX,0x14030ac24: CMP R14, 0xf,0x14030ac28: JBE 0x14030ac38,0x14030ac2a: MOV RAX, qword ptr [RDI],0x14030ac2d: MOV word ptr [RAX + RBX*0x1], 0x2d,0x14030ac33: JMP 0x14030ad4a,0x14030ac38: MOV RAX, RDI,0x14030ac3b: MOV word ptr [RAX + RBX*0x1], 0x2d,0x14030ac41: JMP 0x14030ad4a,0x14030ac46: MOV RAX, RDX,0x14030ac49: SUB RAX, RBX,0x14030ac4c: CMP RAX, 0x1,0x14030ac50: JC 0x14030adc0,0x14030ac56: LEA R15, [RBX + 0x1],0x14030ac5a: MOV RBP, R15,0x14030ac5d: OR RBP, 0xf,0x14030ac61: CMP RBP, RDX,0x14030ac64: JBE 0x14030ac6f,0x14030ac66: MOV RBP, RDX,0x14030ac69: LEA RCX, [RDX + 0x28],0x14030ac6d: JMP 0x14030acb6,0x14030ac6f: MOV RCX, R14,0x14030ac72: SHR RCX, 0x1,0x14030ac75: MOV RAX, RDX,0x14030ac78: SUB RAX, RCX,0x14030ac7b: CMP R14, RAX,0x14030ac7e: JBE 0x14030ac89,0x14030ac80: MOV RBP, RDX,0x14030ac83: LEA RCX, [RDX + 0x28],0x14030ac87: JMP 0x14030acb6,0x14030ac89: LEA RAX, [RCX + R14*0x1],0x14030ac8d: CMP RBP, RAX,0x14030ac90: CMOVC RBP, RAX,0x14030ac94: LEA RAX, [RBP + 0x1],0x14030ac98: TEST RAX, RAX,0x14030ac9b: JNZ 0x14030aca1,0x14030ac9d: XOR ESI, ESI,0x14030ac9f: JMP 0x14030acdd,0x14030aca1: CMP RAX, 0x1000,0x14030aca7: JC 0x14030acd2,0x14030aca9: LEA RCX, [RBP + 0x28],0x14030acad: CMP RCX, RAX,0x14030acb0: JBE 0x14030adba,0x14030acb6: CALL 0x1403272a0,0x14030acbb: TEST RAX, RAX,0x14030acbe: JZ 0x14030adb3,0x14030acc4: LEA RSI, [RAX + 0x27],0x14030acc8: AND RSI, -0x20,0x14030accc: MOV qword ptr [RSI + -0x8], RAX,0x14030acd0: JMP 0x14030acdd,0x14030acd2: MOV RCX, RAX,0x14030acd5: CALL 0x1403272a0,0x14030acda: MOV RSI, RAX,0x14030acdd: MOV qword ptr [RDI + 0x10], R15,0x14030ace1: MOV qword ptr [RDI + 0x18], RBP,0x14030ace5: MOV R8, RBX,0x14030ace8: MOV RCX, RSI,0x14030aceb: CMP R14, 0xf,0x14030acef: JBE 0x14030ad39,0x14030acf1: MOV RBP, qword ptr [RDI],0x14030acf4: MOV RDX, RBP,0x14030acf7: CALL 0x14035f420,0x14030acfc: MOV word ptr [RSI + RBX*0x1], 0x2d,0x14030ad02: LEA RDX, [R14 + 0x1],0x14030ad06: CMP RDX, 0x1000,0x14030ad0d: JC 0x14030ad2f,0x14030ad0f: MOV RCX, qword ptr [RBP + -0x8],0x14030ad13: SUB RBP, RCX,0x14030ad16: SUB RBP, 0x8,0x14030ad1a: CMP RBP, 0x1f,0x14030ad1e: JA 0x14030adb3,0x14030ad24: LEA RDX, [R14 + 0x28],0x14030ad28: CALL 0x1403272f0,0x14030ad2d: JMP 0x14030ad47,0x14030ad2f: MOV RCX, RBP,0x14030ad32: CALL 0x1403272f0,0x14030ad37: JMP 0x14030ad47,0x14030ad39: MOV RDX, RDI,0x14030ad3c: CALL 0x14035f420,0x14030ad41: MOV word ptr [RSI + RBX*0x1], 0x2d,0x14030ad47: MOV qword ptr [RDI], RSI,0x14030ad4a: MOV RAX, qword ptr [RSP + 0x78],0x14030ad4f: MOV RBX, qword ptr [RAX + 0x8],0x14030ad53: MOV RCX, RBX,0x14030ad56: SUB RCX, R12,0x14030ad59: MOV RDX, qword ptr [RAX],0x14030ad5c: ADD RDX, R12,0x14030ad5f: MOV R8, R13,0x14030ad62: CMP RCX, R13,0x14030ad65: CMOVC R8, RCX,0x14030ad69: MOV RCX, RDI,0x14030ad6c: CALL 0x1400013f0,0x14030ad71: ADD R12, R13,0x14030ad74: MOV RAX, qword ptr [RSP + 0x80],0x14030ad7c: ADD RAX, 0x8,0x14030ad80: MOV qword ptr [RSP + 0x80], RAX,0x14030ad88: LEA RCX, [0x140448ef0],0x14030ad8f: CMP RAX, RCX,0x14030ad92: JNZ 0x14030abf0,0x14030ad98: MOV RAX, RDI,0x14030ad9b: MOV RBX, qword ptr [RSP + 0x88],0x14030ada3: ADD RSP, 0x30,0x14030ada7: POP R15,0x14030ada9: POP R14,0x14030adab: POP R13,0x14030adad: POP R12,0x14030adaf: POP RDI,0x14030adb0: POP RSI,0x14030adb1: POP RBP,0x14030adb2: RET,0x14030adb3: MOV ECX, 0x5,0x14030adb8: INT 0x29,0x14030adba: CALL 0x140005500,0x14030adc0: CALL 0x140005640

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140308540 | FUN_140308540 | [object Object] | [object Object] |
| 0x140309b70 | FUN_140309b70 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x1400013f0 | FUN_1400013f0       | [object Object] | [object Object] |
| 0x140005500 | FUN_140005500       | [object Object] | [object Object] |
| 0x140005640 | FUN_140005640       | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0       | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20 | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420       | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14030867b    | 0x14030ab90    | [object Object]  | [object Object]  | [object Object] |
| 0x140309bca    | 0x14030ab90    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6de8    | 0x14030ab90    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14030ab90    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x14030ab95    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x14030ab9a    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x14030abb1    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030abd2    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030abdd    | 0x140448ec8              | [object Object]  |                  | [object Object] |
| 0x14030abe4    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030abe4    | 0x140448ec8              | [object Object]  |                  | [object Object] |
| 0x14030abfd    | 0x14030ad98              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac03    | 0x140448ec8              | [object Object]  |                  | [object Object] |
| 0x14030ac03    | 0x140448ed0              | [object Object]  |                  | [object Object] |
| 0x14030ac0d    | 0x14030ad4a              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac1a    | 0x14030ac46              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac28    | 0x14030ac38              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac33    | 0x14030ad4a              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac41    | 0x14030ad4a              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac50    | 0x14030adc0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac64    | 0x14030ac6f              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac6d    | 0x14030acb6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac7e    | 0x14030ac89              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac87    | 0x14030acb6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac9b    | 0x14030aca1              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac9f    | 0x14030acdd              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aca7    | 0x14030acd2              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acb0    | 0x14030adba              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acb6    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acbe    | 0x14030adb3              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acd0    | 0x14030acdd              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acd5    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acef    | 0x14030ad39              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acf7    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad0d    | 0x14030ad2f              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad1e    | 0x14030adb3              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad28    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad2d    | 0x14030ad47              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad32    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad37    | 0x14030ad47              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad3c    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad4a    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x14030ad6c    | 0x1400013f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad74    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030ad80    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030ad80    | 0x140448ed0              | [object Object]  |                  | [object Object] |
| 0x14030ad88    | 0x140448ef0              | [object Object]  |                  | [object Object] |
| 0x14030ad92    | 0x14030abf0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad9b    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x14030adba    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |
| 0x14030adc0    | 0x140005640              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings

| address     | value            | source_address |
|-------------|------------------|----------------|
| 0x140448ef0 | tmog.machine.v1. | 0x14030ad88    |

## raw_result.value.referenced_names

| address     | value                        | source_address |
|-------------|------------------------------|----------------|
| 0x1400013f0 | FUN_1400013f0                | 0x14030ad6c    |
| 0x140005500 | FUN_140005500                | 0x14030adba    |
| 0x140005640 | FUN_140005640                | 0x14030adc0    |
| 0x14030abf0 | LAB_14030abf0                | 0x14030ad92    |
| 0x14030ac38 | LAB_14030ac38                | 0x14030ac28    |
| 0x14030ac46 | LAB_14030ac46                | 0x14030ac1a    |
| 0x14030ac6f | LAB_14030ac6f                | 0x14030ac64    |
| 0x14030ac89 | LAB_14030ac89                | 0x14030ac7e    |
| 0x14030aca1 | LAB_14030aca1                | 0x14030ac9b    |
| 0x14030acb6 | LAB_14030acb6                | 0x14030ac6d    |
| 0x14030acb6 | LAB_14030acb6                | 0x14030ac87    |
| 0x14030acd2 | LAB_14030acd2                | 0x14030aca7    |
| 0x14030acdd | LAB_14030acdd                | 0x14030ac9f    |
| 0x14030acdd | LAB_14030acdd                | 0x14030acd0    |
| 0x14030ad2f | LAB_14030ad2f                | 0x14030ad0d    |
| 0x14030ad39 | LAB_14030ad39                | 0x14030acef    |
| 0x14030ad47 | LAB_14030ad47                | 0x14030ad2d    |
| 0x14030ad47 | LAB_14030ad47                | 0x14030ad37    |
| 0x14030ad4a | LAB_14030ad4a                | 0x14030ac0d    |
| 0x14030ad4a | LAB_14030ad4a                | 0x14030ac33    |
| 0x14030ad4a | LAB_14030ad4a                | 0x14030ac41    |
| 0x14030ad98 | LAB_14030ad98                | 0x14030abfd    |
| 0x14030adb3 | LAB_14030adb3                | 0x14030acbe    |
| 0x14030adb3 | LAB_14030adb3                | 0x14030ad1e    |
| 0x14030adba | LAB_14030adba                | 0x14030acb0    |
| 0x14030adc0 | LAB_14030adc0                | 0x14030ac50    |
| 0x1403272a0 | FUN_1403272a0                | 0x14030acb6    |
| 0x1403272a0 | FUN_1403272a0                | 0x14030acd5    |
| 0x1403272f0 | thunk_FUN_140327e20          | 0x14030ad28    |
| 0x1403272f0 | thunk_FUN_140327e20          | 0x14030ad32    |
| 0x14035f420 | FUN_14035f420                | 0x14030acf7    |
| 0x14035f420 | FUN_14035f420                | 0x14030ad3c    |
| 0x140448ec8 | DAT_140448ec8                | 0x14030abdd    |
| 0x140448ec8 | DAT_140448ec8                | 0x14030abe4    |
| 0x140448ec8 | DAT_140448ec8                | 0x14030ac03    |
| 0x140448ed0 | DAT_140448ed0                | 0x14030ac03    |
| 0x140448ed0 | DAT_140448ed0                | 0x14030ad80    |
| 0x140448ef0 | s_tmog.machine.v1._140448ef0 | 0x14030ad88    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14030ab90 | 0x14030abf0 | 0x14030abf0             |
| 0x14030abf0 | 0x14030ac03 | 0x14030ac03,0x14030ad98 |
| 0x14030ac03 | 0x14030ac13 | 0x14030ac13,0x14030ad4a |
| 0x14030ac13 | 0x14030ac1c | 0x14030ac1c,0x14030ac46 |
| 0x14030ac1c | 0x14030ac2a | 0x14030ac2a,0x14030ac38 |
| 0x14030ac2a | 0x14030ac38 | 0x14030ad4a             |
| 0x14030ac38 | 0x14030ac46 | 0x14030ad4a             |
| 0x14030ac46 | 0x14030ac56 | 0x14030ac56,0x14030adc0 |
| 0x14030ac56 | 0x14030ac66 | 0x14030ac66,0x14030ac6f |
| 0x14030ac66 | 0x14030ac6f | 0x14030acb6             |
| 0x14030ac6f | 0x14030ac80 | 0x14030ac80,0x14030ac89 |
| 0x14030ac80 | 0x14030ac89 | 0x14030acb6             |
| 0x14030ac89 | 0x14030ac9d | 0x14030ac9d,0x14030aca1 |
| 0x14030ac9d | 0x14030aca1 | 0x14030acdd             |
| 0x14030aca1 | 0x14030aca9 | 0x14030aca9,0x14030acd2 |
| 0x14030aca9 | 0x14030acb6 | 0x14030acb6,0x14030adba |
| 0x14030acb6 | 0x14030acc4 | 0x14030acc4,0x14030adb3 |
| 0x14030acc4 | 0x14030acd2 | 0x14030acdd             |
| 0x14030acd2 | 0x14030acdd | 0x14030acdd             |
| 0x14030acdd | 0x14030acf1 | 0x14030acf1,0x14030ad39 |
| 0x14030acf1 | 0x14030ad0f | 0x14030ad0f,0x14030ad2f |
| 0x14030ad0f | 0x14030ad24 | 0x14030ad24,0x14030adb3 |
| 0x14030ad24 | 0x14030ad2f | 0x14030ad47             |
| 0x14030ad2f | 0x14030ad39 | 0x14030ad47             |
| 0x14030ad39 | 0x14030ad47 | 0x14030ad47             |
| 0x14030ad47 | 0x14030ad4a | 0x14030ad4a             |
| 0x14030ad4a | 0x14030ad98 | 0x14030abf0,0x14030ad98 |
| 0x14030ad98 | 0x14030adb3 |                         |
| 0x14030adb3 | 0x14030adba | 0x14030adba             |
| 0x14030adba | 0x14030adbf |                         |
| 0x14030adc0 | 0x14030adc5 |                         |

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

ulonglong *

## raw_result.value.native_api.return_type.size_bytes

8

## raw_result.value.native_api.return_type.storage

RAX:8

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                        |
|------------------|-------------------------|-----------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.         |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type ulonglong *. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters

| role      | ordinal | name    | data_type   | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|-------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | ulonglong * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | longlong *  | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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

| id               | address     | sequence | opcode        | is_dead | block_membership | inputs                                                          | output          |
|------------------|-------------|----------|---------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x14030abaa#1363 | 0x14030abaa | 1363     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abbc#1115 | 0x14030abbc | 1115     | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030abbc#1116 | 0x14030abbc | 1116     | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030abbc#1364 | 0x14030abbc | 1364     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030abbf#51   | 0x14030abbf | 51       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030abbf#1365 | 0x14030abbf | 1365     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030abc7#54   | 0x14030abc7 | 54       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030abc7#1366 | 0x14030abc7 | 1366     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030abcf#56   | 0x14030abcf | 56       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030abcf#1381 | 0x14030abcf | 1381     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030abd2#59   | 0x14030abd2 | 59       | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030abda#893  | 0x14030abda | 893      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030abe4#73   | 0x14030abe4 | 73       | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abec#75   | 0x14030abec | 75       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abec#1367 | 0x14030abec | 1367     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030abf0#836  | 0x14030abf0 | 836      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abf0#894  | 0x14030abf0 | 894      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abf0#1170 | 0x14030abf0 | 1170     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abf0#1224 | 0x14030abf0 | 1224     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abfa#79   | 0x14030abfa | 79       | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abfd#89   | 0x14030abfd | 89       | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac03#90   | 0x14030ac03 | 90       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac06#93   | 0x14030ac06 | 93       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac06#1368 | 0x14030ac06 | 1368     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ac0a#99   | 0x14030ac0a | 99       | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac0d#104  | 0x14030ac0d | 104      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac13#106  | 0x14030ac13 | 106      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac13#1369 | 0x14030ac13 | 1369     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ac17#109  | 0x14030ac17 | 109      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac1a#119  | 0x14030ac1a | 119      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac1c#120  | 0x14030ac1c | 120      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac20#124  | 0x14030ac20 | 124      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ac20#1370 | 0x14030ac20 | 1370     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ac28#135  | 0x14030ac28 | 135      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac28#136  | 0x14030ac28 | 136      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac2a#137  | 0x14030ac2a | 137      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac2d#140  | 0x14030ac2d | 140      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac2d#142  | 0x14030ac2d | 142      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ac2d#1390 | 0x14030ac2d | 1390     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac33#143  | 0x14030ac33 | 143      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ac3b#273  | 0x14030ac3b | 273      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac3b#275  | 0x14030ac3b | 275      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ac3b#1388 | 0x14030ac3b | 1388     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac3b#1389 | 0x14030ac3b | 1389     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac41#276  | 0x14030ac41 | 276      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ac4c#288  | 0x14030ac4c | 288      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac50#297  | 0x14030ac50 | 297      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac56#298  | 0x14030ac56 | 298      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac5d#303  | 0x14030ac5d | 303      | INT_OR        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac64#320  | 0x14030ac64 | 320      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac64#321  | 0x14030ac64 | 321      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac66#322  | 0x14030ac66 | 322      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac69#323  | 0x14030ac69 | 323      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac6d#325  | 0x14030ac6d | 325      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ac72#464  | 0x14030ac72 | 464      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac78#474  | 0x14030ac78 | 474      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac7e#491  | 0x14030ac7e | 491      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac7e#492  | 0x14030ac7e | 492      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac80#493  | 0x14030ac80 | 493      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac83#495  | 0x14030ac83 | 495      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac87#496  | 0x14030ac87 | 496      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ac89#498  | 0x14030ac89 | 498      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac8d#501  | 0x14030ac8d | 501      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac90#512  | 0x14030ac90 | 512      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac90#1377 | 0x14030ac90 | 1377     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac90#1378 | 0x14030ac90 | 1378     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac94#514  | 0x14030ac94 | 514      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac94#847  | 0x14030ac94 | 847      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac98#520  | 0x14030ac98 | 520      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac9b#526  | 0x14030ac9b | 526      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac9d#861  | 0x14030ac9d | 861      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac9f#537  | 0x14030ac9f | 537      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030aca1#538  | 0x14030aca1 | 538      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aca7#547  | 0x14030aca7 | 547      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aca9#548  | 0x14030aca9 | 548      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acb0#560  | 0x14030acb0 | 560      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acb0#561  | 0x14030acb0 | 561      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030acb6#328  | 0x14030acb6 | 328      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acb6#812  | 0x14030acb6 | 812      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acb6#849  | 0x14030acb6 | 849      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acb6#1210 | 0x14030acb6 | 1210     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acbb#333  | 0x14030acbb | 333      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acbe#338  | 0x14030acbe | 338      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030acc4#339  | 0x14030acc4 | 339      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acc8#343  | 0x14030acc8 | 343      | INT_AND       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030accc#350  | 0x14030accc | 350      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030accc#352  | 0x14030accc | 352      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030accc#1382 | 0x14030accc | 1382     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030acd0#353  | 0x14030acd0 | 353      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030acd5#565  | 0x14030acd5 | 565      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acd5#1209 | 0x14030acd5 | 1209     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acdd#356  | 0x14030acdd | 356      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030acdd#848  | 0x14030acdd | 848      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acdd#862  | 0x14030acdd | 862      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acdd#1219 | 0x14030acdd | 1219     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acdd#1371 | 0x14030acdd | 1371     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ace1#359  | 0x14030ace1 | 359      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ace1#1372 | 0x14030ace1 | 1372     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acef#372  | 0x14030acef | 372      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acef#373  | 0x14030acef | 373      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030acf1#374  | 0x14030acf1 | 374      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acf7#379  | 0x14030acf7 | 379      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030acf7#1212 | 0x14030acf7 | 1212     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acfc#381  | 0x14030acfc | 381      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acfc#383  | 0x14030acfc | 383      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030acfc#1384 | 0x14030acfc | 1384     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad02#384  | 0x14030ad02 | 384      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad06#387  | 0x14030ad06 | 387      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad0d#396  | 0x14030ad0d | 396      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ad0f#397  | 0x14030ad0f | 397      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad0f#398  | 0x14030ad0f | 398      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad0f#1385 | 0x14030ad0f | 1385     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad13#402  | 0x14030ad13 | 402      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad16#411  | 0x14030ad16 | 411      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad1e#428  | 0x14030ad1e | 428      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad1e#430  | 0x14030ad1e | 430      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ad24#431  | 0x14030ad24 | 431      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad28#435  | 0x14030ad28 | 435      | CALL          | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ad28#1216 | 0x14030ad28 | 1216     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad2d#436  | 0x14030ad2d | 436      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ad32#450  | 0x14030ad32 | 450      | CALL          | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ad32#1213 | 0x14030ad32 | 1213     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad37#451  | 0x14030ad37 | 451      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ad3c#455  | 0x14030ad3c | 455      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030ad3c#1211 | 0x14030ad3c | 1211     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad41#457  | 0x14030ad41 | 457      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad41#459  | 0x14030ad41 | 459      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ad41#1383 | 0x14030ad41 | 1383     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad47#438  | 0x14030ad47 | 438      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ad47#1220 | 0x14030ad47 | 1220     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ad4a#1221 | 0x14030ad4a | 1221     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x14030ad4f#148  | 0x14030ad4f | 148      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad4f#1373 | 0x14030ad4f | 1373     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ad56#153  | 0x14030ad56 | 153      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad59#160  | 0x14030ad59 | 160      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad5c#164  | 0x14030ad5c | 164      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad62#173  | 0x14030ad62 | 173      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad65#184  | 0x14030ad65 | 184      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ad65#1379 | 0x14030ad65 | 1379     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad65#1380 | 0x14030ad65 | 1380     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad69#885  | 0x14030ad69 | 885      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad6c#189  | 0x14030ad6c | 189      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030ad6c#1217 | 0x14030ad6c | 1217     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad71#192  | 0x14030ad71 | 192      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad7c#1374 | 0x14030ad7c | 1374     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ad8f#220  | 0x14030ad8f | 220      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad8f#1362 | 0x14030ad8f | 1362     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad8f#1391 | 0x14030ad8f | 1391     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad92#226  | 0x14030ad92 | 226      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ad98#227  | 0x14030ad98 | 227      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad98#1359 | 0x14030ad98 | 1359     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030adb2#270  | 0x14030adb2 | 270      | RETURN        | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030adb2#1360 | 0x14030adb2 | 1360     | RETURN        | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030adb3#1222 | 0x14030adb3 | 1222     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adb8#440  | 0x14030adb8 | 440      | CALLOTHER     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adb8#441  | 0x14030adb8 | 441      | CALLIND       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030adb8#1214 | 0x14030adb8 | 1214     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adb8#1375 | 0x14030adb8 | 1375     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adb8#1386 | 0x14030adb8 | 1386     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030adba#442  | 0x14030adba | 442      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030adba#443  | 0x14030adba | 443      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030adba#444  | 0x14030adba | 444      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x14030adba#446  | 0x14030adba | 446      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x14030adba#842  | 0x14030adba | 842      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adba#1215 | 0x14030adba | 1215     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adba#1223 | 0x14030adba | 1223     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adba#1361 | 0x14030adba | 1361     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adba#1387 | 0x14030adba | 1387     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030adc0#569  | 0x14030adc0 | 569      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x14030adc0#571  | 0x14030adc0 | 571      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x14030adc0#1208 | 0x14030adc0 | 1208     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x14030abbc#1364 | 0x14030abbc#1116 | 1           |
| 0x14030abbf#1365 | 0x14030abbf#51   | 1           |
| 0x14030abc7#1366 | 0x14030abc7#54   | 1           |
| 0x14030abcf#1381 | 0x14030abcf#56   | 1           |
| 0x14030abec#1367 | 0x14030abec#75   | 1           |
| 0x14030abec#75   | 0x14030abf0#836  | 0           |
| 0x14030ad4f#148  | 0x14030abf0#836  | 1           |
| 0x14030abda#893  | 0x14030abf0#894  | 0           |
| 0x14030ad71#192  | 0x14030abf0#894  | 1           |
| 0x14030abe4#73   | 0x14030abf0#1170 | 0           |
| 0x14030ad7c#1374 | 0x14030abf0#1170 | 1           |
| 0x14030abd2#59   | 0x14030abf0#1224 | 0           |
| 0x14030ad6c#1217 | 0x14030abf0#1224 | 1           |
| 0x14030abf0#836  | 0x14030abfa#79   | 0           |
| 0x14030abf0#894  | 0x14030abfa#79   | 1           |
| 0x14030abfa#79   | 0x14030abfd#89   | 1           |
| 0x14030abf0#1170 | 0x14030ac03#90   | 1           |
| 0x14030ac06#1368 | 0x14030ac06#93   | 1           |
| 0x14030ac06#93   | 0x14030ac0a#99   | 0           |
| 0x14030ac0a#99   | 0x14030ac0d#104  | 1           |
| 0x14030ac13#1369 | 0x14030ac13#106  | 1           |
| 0x14030ac06#93   | 0x14030ac17#109  | 0           |
| 0x14030ac13#106  | 0x14030ac17#109  | 1           |
| 0x14030ac17#109  | 0x14030ac1a#119  | 1           |
| 0x14030ac06#93   | 0x14030ac1c#120  | 0           |
| 0x14030ac20#1370 | 0x14030ac20#124  | 1           |
| 0x14030ac1c#120  | 0x14030ac20#124  | 2           |
| 0x14030ac13#106  | 0x14030ac28#135  | 0           |
| 0x14030ac28#135  | 0x14030ac28#136  | 1           |
| 0x14030ac2a#137  | 0x14030ac2d#140  | 0           |
| 0x14030ac06#93   | 0x14030ac2d#140  | 1           |
| 0x14030ac2d#1390 | 0x14030ac2d#142  | 1           |
| 0x14030ac2d#140  | 0x14030ac2d#1390 | 0           |
| 0x14030ac3b#1388 | 0x14030ac3b#273  | 0           |
| 0x14030ac06#93   | 0x14030ac3b#273  | 1           |
| 0x14030ac3b#1389 | 0x14030ac3b#275  | 1           |
| 0x14030ac3b#273  | 0x14030ac3b#1389 | 0           |
| 0x14030ac06#93   | 0x14030ac4c#288  | 0           |
| 0x14030ac4c#288  | 0x14030ac50#297  | 1           |
| 0x14030ac06#93   | 0x14030ac56#298  | 0           |
| 0x14030ac56#298  | 0x14030ac5d#303  | 0           |
| 0x14030ac5d#303  | 0x14030ac64#320  | 1           |
| 0x14030ac64#320  | 0x14030ac64#321  | 1           |
| 0x14030ac13#106  | 0x14030ac72#464  | 0           |
| 0x14030ac72#464  | 0x14030ac78#474  | 1           |
| 0x14030ac78#474  | 0x14030ac7e#491  | 0           |
| 0x14030ac13#106  | 0x14030ac7e#491  | 1           |
| 0x14030ac7e#491  | 0x14030ac7e#492  | 1           |
| 0x14030ac72#464  | 0x14030ac89#498  | 0           |
| 0x14030ac13#106  | 0x14030ac89#498  | 1           |
| 0x14030ac5d#303  | 0x14030ac8d#501  | 0           |
| 0x14030ac89#498  | 0x14030ac8d#501  | 1           |
| 0x14030ac8d#501  | 0x14030ac90#512  | 1           |
| 0x14030ac5d#303  | 0x14030ac90#1377 | 0           |
| 0x14030ac89#498  | 0x14030ac90#1378 | 0           |
| 0x14030ac94#847  | 0x14030ac94#514  | 0           |
| 0x14030ac90#1377 | 0x14030ac94#847  | 0           |
| 0x14030ac90#1378 | 0x14030ac94#847  | 1           |
| 0x14030ac94#514  | 0x14030ac98#520  | 0           |
| 0x14030ac98#520  | 0x14030ac9b#526  | 1           |
| 0x14030ac94#514  | 0x14030aca1#538  | 1           |
| 0x14030aca1#538  | 0x14030aca7#547  | 1           |
| 0x14030ac94#847  | 0x14030aca9#548  | 0           |
| 0x14030aca9#548  | 0x14030acb0#560  | 0           |
| 0x14030ac94#514  | 0x14030acb0#560  | 1           |
| 0x14030acb0#560  | 0x14030acb0#561  | 1           |
| 0x14030acb6#812  | 0x14030acb6#328  | 1           |
| 0x14030ac69#323  | 0x14030acb6#812  | 0           |
| 0x14030ac83#495  | 0x14030acb6#812  | 1           |
| 0x14030aca9#548  | 0x14030acb6#812  | 2           |
| 0x14030ac66#322  | 0x14030acb6#849  | 0           |
| 0x14030ac80#493  | 0x14030acb6#849  | 1           |
| 0x14030ac94#847  | 0x14030acb6#849  | 2           |
| 0x14030abf0#1224 | 0x14030acb6#1210 | 0           |
| 0x14030acb6#328  | 0x14030acbb#333  | 0           |
| 0x14030acbb#333  | 0x14030acbe#338  | 1           |
| 0x14030acb6#328  | 0x14030acc4#339  | 0           |
| 0x14030acc4#339  | 0x14030acc8#343  | 0           |
| 0x14030acc8#343  | 0x14030accc#350  | 0           |
| 0x14030accc#1382 | 0x14030accc#352  | 1           |
| 0x14030acb6#328  | 0x14030accc#352  | 2           |
| 0x14030accc#350  | 0x14030accc#1382 | 0           |
| 0x14030ac94#514  | 0x14030acd5#565  | 1           |
| 0x14030abf0#1224 | 0x14030acd5#1209 | 0           |
| 0x14030acdd#1371 | 0x14030acdd#356  | 1           |
| 0x14030ac56#298  | 0x14030acdd#356  | 2           |
| 0x14030acb6#849  | 0x14030acdd#848  | 0           |
| 0x14030ac94#847  | 0x14030acdd#848  | 1           |
| 0x14030ac94#847  | 0x14030acdd#848  | 2           |
| 0x14030acc8#343  | 0x14030acdd#862  | 0           |
| 0x14030ac9d#861  | 0x14030acdd#862  | 1           |
| 0x14030acd5#565  | 0x14030acdd#862  | 2           |
| 0x14030acb6#1210 | 0x14030acdd#1219 | 0           |
| 0x14030abf0#1224 | 0x14030acdd#1219 | 1           |
| 0x14030acd5#1209 | 0x14030acdd#1219 | 2           |
| 0x14030ace1#1372 | 0x14030ace1#359  | 1           |
| 0x14030acdd#848  | 0x14030ace1#359  | 2           |
| 0x14030ac13#106  | 0x14030acef#372  | 0           |
| 0x14030acef#372  | 0x14030acef#373  | 1           |
| 0x14030acdd#862  | 0x14030acf7#379  | 1           |
| 0x14030acf1#374  | 0x14030acf7#379  | 2           |
| 0x14030ac06#93   | 0x14030acf7#379  | 3           |
| 0x14030acdd#1219 | 0x14030acf7#1212 | 0           |
| 0x14030acdd#862  | 0x14030acfc#381  | 0           |
| 0x14030ac06#93   | 0x14030acfc#381  | 1           |
| 0x14030acfc#1384 | 0x14030acfc#383  | 1           |
| 0x14030acfc#381  | 0x14030acfc#1384 | 0           |
| 0x14030ac13#106  | 0x14030ad02#384  | 0           |
| 0x14030ad02#384  | 0x14030ad06#387  | 0           |
| 0x14030ad06#387  | 0x14030ad0d#396  | 1           |
| 0x14030acf1#374  | 0x14030ad0f#397  | 0           |
| 0x14030ad0f#1385 | 0x14030ad0f#398  | 1           |
| 0x14030ad0f#397  | 0x14030ad0f#1385 | 0           |
| 0x14030acf1#374  | 0x14030ad13#402  | 0           |
| 0x14030ad0f#398  | 0x14030ad13#402  | 1           |
| 0x14030ad13#402  | 0x14030ad16#411  | 0           |
| 0x14030ad16#411  | 0x14030ad1e#428  | 1           |
| 0x14030ad1e#428  | 0x14030ad1e#430  | 1           |
| 0x14030ac13#106  | 0x14030ad24#431  | 0           |
| 0x14030ad0f#398  | 0x14030ad28#435  | 1           |
| 0x14030ad24#431  | 0x14030ad28#435  | 2           |
| 0x14030acf7#1212 | 0x14030ad28#1216 | 0           |
| 0x14030acf1#374  | 0x14030ad32#450  | 1           |
| 0x14030acf7#1212 | 0x14030ad32#1213 | 0           |
| 0x14030acdd#862  | 0x14030ad3c#455  | 1           |
| 0x14030ac06#93   | 0x14030ad3c#455  | 3           |
| 0x14030acdd#1219 | 0x14030ad3c#1211 | 0           |
| 0x14030acdd#862  | 0x14030ad41#457  | 0           |
| 0x14030ac06#93   | 0x14030ad41#457  | 1           |
| 0x14030ad41#1383 | 0x14030ad41#459  | 1           |
| 0x14030ad41#457  | 0x14030ad41#1383 | 0           |
| 0x14030acdd#862  | 0x14030ad47#438  | 2           |
| 0x14030ad28#1216 | 0x14030ad47#1220 | 0           |
| 0x14030ad32#1213 | 0x14030ad47#1220 | 1           |
| 0x14030ad3c#1211 | 0x14030ad47#1220 | 2           |
| 0x14030abf0#1224 | 0x14030ad4a#1221 | 0           |
| 0x14030abf0#1224 | 0x14030ad4a#1221 | 1           |
| 0x14030abf0#1224 | 0x14030ad4a#1221 | 2           |
| 0x14030ad47#1220 | 0x14030ad4a#1221 | 3           |
| 0x14030ad4f#1373 | 0x14030ad4f#148  | 1           |
| 0x14030ad4f#148  | 0x14030ad56#153  | 0           |
| 0x14030abf0#894  | 0x14030ad56#153  | 1           |
| 0x14030ad59#160  | 0x14030ad5c#164  | 0           |
| 0x14030abf0#894  | 0x14030ad5c#164  | 1           |
| 0x14030ad56#153  | 0x14030ad62#173  | 0           |
| 0x14030ac03#90   | 0x14030ad62#173  | 1           |
| 0x14030ad62#173  | 0x14030ad65#184  | 1           |
| 0x14030ac03#90   | 0x14030ad65#1379 | 0           |
| 0x14030ad56#153  | 0x14030ad65#1380 | 0           |
| 0x14030ad65#1379 | 0x14030ad69#885  | 0           |
| 0x14030ad65#1380 | 0x14030ad69#885  | 1           |
| 0x14030ad5c#164  | 0x14030ad6c#189  | 2           |
| 0x14030ad69#885  | 0x14030ad6c#189  | 3           |
| 0x14030ad4a#1221 | 0x14030ad6c#1217 | 0           |
| 0x14030abf0#894  | 0x14030ad71#192  | 0           |
| 0x14030ac03#90   | 0x14030ad71#192  | 1           |
| 0x14030abf0#1170 | 0x14030ad7c#1374 | 0           |
| 0x14030ad7c#1374 | 0x14030ad8f#220  | 0           |
| 0x14030ad8f#1391 | 0x14030ad8f#220  | 1           |
| 0x14030ad8f#1362 | 0x14030ad8f#1391 | 0           |
| 0x14030ad8f#220  | 0x14030ad92#226  | 1           |
| 0x14030ad98#227  | 0x14030adb2#270  | 1           |
| 0x14030ad98#1359 | 0x14030adb2#1360 | 1           |
| 0x14030acb6#1210 | 0x14030adb3#1222 | 0           |
| 0x14030acf7#1212 | 0x14030adb3#1222 | 1           |
| 0x14030adb8#1386 | 0x14030adb8#441  | 0           |
| 0x14030adb3#1222 | 0x14030adb8#1214 | 0           |
| 0x14030adb8#440  | 0x14030adb8#1386 | 0           |
| 0x14030adba#842  | 0x14030adba#442  | 0           |
| 0x14030adba#1387 | 0x14030adba#443  | 1           |
| 0x14030adba#1361 | 0x14030adba#443  | 2           |
| 0x14030adb8#1375 | 0x14030adba#842  | 0           |
| 0x14030abaa#1363 | 0x14030adba#842  | 1           |
| 0x14030adba#1223 | 0x14030adba#1215 | 0           |
| 0x14030adb8#1214 | 0x14030adba#1223 | 0           |
| 0x14030abf0#1224 | 0x14030adba#1223 | 1           |
| 0x14030adba#442  | 0x14030adba#1387 | 0           |
| 0x14030abf0#1224 | 0x14030adc0#1208 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type    |
|---------|---------|--------------|
| 0       | param_1 | /ulonglong * |
| 1       | param_2 | /longlong *  |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x14030abbc#1115 | 1           |
| 0       | 0x14030abbc#1364 | 0           |
| 0       | 0x14030abbf#1365 | 0           |
| 0       | 0x14030abc7#1366 | 0           |
| 0       | 0x14030abcf#1381 | 0           |
| 1       | 0x14030abec#1367 | 0           |
| 0       | 0x14030ac06#1368 | 0           |
| 0       | 0x14030ac13#1369 | 0           |
| 0       | 0x14030ac20#1370 | 0           |
| 0       | 0x14030ac2a#137  | 1           |
| 0       | 0x14030ac3b#1388 | 0           |
| 0       | 0x14030acdd#1371 | 0           |
| 0       | 0x14030ace1#1372 | 0           |
| 0       | 0x14030acf1#374  | 1           |
| 0       | 0x14030ad3c#455  | 2           |
| 0       | 0x14030ad47#438  | 1           |
| 1       | 0x14030ad4f#1373 | 0           |
| 1       | 0x14030ad59#160  | 1           |
| 0       | 0x14030ad6c#189  | 1           |
| 0       | 0x14030ad98#227  | 0           |
| 0       | 0x14030ad98#1359 | 0           |

## raw_result.value.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x14030abbc#1115 | memory_write       | 1             | 2           |
| 0x14030abbc#1116 | memory_write       | 1             | 2           |
| 0x14030abbf#51   | memory_write       | 1             | 2           |
| 0x14030abc7#54   | memory_write       | 1             | 2           |
| 0x14030abcf#56   | memory_write       | 1             | 2           |
| 0x14030abec#75   | memory_read        | 1             |             |
| 0x14030abfd#89   | conditional_branch |               | 1           |
| 0x14030ac03#90   | memory_read        | 1             |             |
| 0x14030ac06#93   | memory_read        | 1             |             |
| 0x14030ac0d#104  | conditional_branch |               | 1           |
| 0x14030ac13#106  | memory_read        | 1             |             |
| 0x14030ac1a#119  | conditional_branch |               | 1           |
| 0x14030ac20#124  | memory_write       | 1             | 2           |
| 0x14030ac28#136  | conditional_branch |               | 1           |
| 0x14030ac2a#137  | memory_read        | 1             |             |
| 0x14030ac2d#142  | memory_write       | 1             | 2           |
| 0x14030ac3b#275  | memory_write       | 1             | 2           |
| 0x14030ac50#297  | conditional_branch |               | 1           |
| 0x14030ac64#321  | conditional_branch |               | 1           |
| 0x14030ac7e#492  | conditional_branch |               | 1           |
| 0x14030ac90#512  | conditional_branch |               | 1           |
| 0x14030ac9b#526  | conditional_branch |               | 1           |
| 0x14030aca7#547  | conditional_branch |               | 1           |
| 0x14030acb0#561  | conditional_branch |               | 1           |
| 0x14030acb6#328  | direct_call        | 0             |             |
| 0x14030acbe#338  | conditional_branch |               | 1           |
| 0x14030accc#352  | memory_write       | 1             | 2           |
| 0x14030acd5#565  | direct_call        | 0             |             |
| 0x14030acdd#356  | memory_write       | 1             | 2           |
| 0x14030ace1#359  | memory_write       | 1             | 2           |
| 0x14030acef#373  | conditional_branch |               | 1           |
| 0x14030acf1#374  | memory_read        | 1             |             |
| 0x14030acf7#379  | direct_call        | 0             |             |
| 0x14030acfc#383  | memory_write       | 1             | 2           |
| 0x14030ad0d#396  | conditional_branch |               | 1           |
| 0x14030ad0f#398  | memory_read        | 1             |             |
| 0x14030ad1e#430  | conditional_branch |               | 1           |
| 0x14030ad28#435  | direct_call        | 0             |             |
| 0x14030ad32#450  | direct_call        | 0             |             |
| 0x14030ad3c#455  | direct_call        | 0             |             |
| 0x14030ad41#459  | memory_write       | 1             | 2           |
| 0x14030ad47#438  | memory_write       | 1             | 2           |
| 0x14030ad4f#148  | memory_read        | 1             |             |
| 0x14030ad59#160  | memory_read        | 1             |             |
| 0x14030ad65#184  | conditional_branch |               | 1           |
| 0x14030ad6c#189  | direct_call        | 0             |             |
| 0x14030ad92#226  | conditional_branch |               | 1           |
| 0x14030adb8#441  | indirect_call      | 0             |             |
| 0x14030adba#443  | memory_write       | 1             | 2           |
| 0x14030adba#444  | direct_call        | 0             |             |
| 0x14030adc0#569  | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x14030adba to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14030adc0 to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x14030adba to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14030adc0 to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x14030ab90

## normalized_result.procedure.name

FUN_14030ab90

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
| 0x14030ab90 | 0x14030adbe |
| 0x14030adc0 | 0x14030adc4 |

## normalized_result.procedure.body.total_bytes

564

## normalized_result.procedure.body.span_bytes

565

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_14030ab90()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined4 local_48 @ Stack[-0x48]:4   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## normalized_result.pseudocode


ulonglong * FUN_14030ab90(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *local_res18;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined4 local_48;
  
  puVar6 = auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_48 = 1;
  uVar10 = 0;
  local_res18 = &DAT_140448ec8;
  uVar5 = param_2[1];
  do {
    if (uVar5 <= uVar10) {
      return param_1;
    }
    uVar2 = *local_res18;
    uVar5 = param_1[2];
    if (uVar5 != 0) {
      uVar9 = param_1[3];
      if (uVar5 < uVar9) {
        param_1[2] = uVar5 + 1;
        if (uVar9 < 0x10) {
          *(undefined2 *)((longlong)param_1 + uVar5) = 0x2d;
        }
        else {
          *(undefined2 *)(*param_1 + uVar5) = 0x2d;
        }
      }
      else {
        if (uVar5 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_140005640();
        }
        uVar7 = uVar5 + 1 | 0xf;
        if (0x7fffffffffffffff < uVar7) {
          uVar7 = 0x7fffffffffffffff;
          uVar8 = 0x8000000000000027;
LAB_14030acb6:
          lVar4 = FUN_1403272a0(uVar8);
          if (lVar4 != 0) {
            uVar8 = lVar4 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar8 - 8) = lVar4;
            goto LAB_14030acdd;
          }
LAB_14030adb3:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar6 = auStack_60;
LAB_14030adba:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar6 + -8) = &UNK_14030adbf;
          FUN_140005500();
        }
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar7 = 0x7fffffffffffffff;
          uVar8 = 0x8000000000000027;
          goto LAB_14030acb6;
        }
        uVar8 = (uVar9 >> 1) + uVar9;
        if (uVar7 < uVar8) {
          uVar7 = uVar8;
        }
        uVar1 = uVar7 + 1;
        if (uVar1 == 0) {
          uVar8 = 0;
        }
        else {
          if (0xfff < uVar1) {
            uVar8 = uVar7 + 0x28;
            if (uVar8 <= uVar1) goto LAB_14030adba;
            goto LAB_14030acb6;
          }
          uVar8 = FUN_1403272a0(uVar1);
        }
LAB_14030acdd:
        param_1[2] = uVar5 + 1;
        param_1[3] = uVar7;
        if (uVar9 < 0x10) {
          FUN_14035f420(uVar8,param_1,uVar5);
          *(undefined2 *)(uVar8 + uVar5) = 0x2d;
        }
        else {
          uVar7 = *param_1;
          FUN_14035f420(uVar8,uVar7,uVar5);
          *(undefined2 *)(uVar8 + uVar5) = 0x2d;
          if (uVar9 + 1 < 0x1000) {
            thunk_FUN_140327e20(uVar7);
          }
          else {
            if (0x1f < (uVar7 - *(longlong *)(uVar7 - 8)) - 8) goto LAB_14030adb3;
            thunk_FUN_140327e20(*(longlong *)(uVar7 - 8),uVar9 + 0x28);
          }
        }
        *param_1 = uVar8;
      }
    }
    uVar5 = param_2[1];
    uVar9 = uVar2;
    if (uVar5 - uVar10 < uVar2) {
      uVar9 = uVar5 - uVar10;
    }
    FUN_1400013f0(param_1,*param_2 + uVar10,uVar9);
    uVar10 = uVar10 + uVar2;
    local_res18 = local_res18 + 1;
    if (local_res18 == (ulonglong *)"tmog.machine.v1.") {
      return param_1;
    }
  } while( true );
}



## normalized_result.assembly

0x14030ab90: MOV qword ptr [RSP + 0x20], RBX,0x14030ab95: MOV qword ptr [RSP + 0x10], RDX,0x14030ab9a: MOV qword ptr [RSP + 0x8], RCX,0x14030ab9f: PUSH RBP,0x14030aba0: PUSH RSI,0x14030aba1: PUSH RDI,0x14030aba2: PUSH R12,0x14030aba4: PUSH R13,0x14030aba6: PUSH R14,0x14030aba8: PUSH R15,0x14030abaa: SUB RSP, 0x30,0x14030abae: MOV RDI, RCX,0x14030abb1: MOV dword ptr [RSP + 0x20], 0x0,0x14030abb9: XORPS XMM0, XMM0,0x14030abbc: MOVUPS xmmword ptr [RCX], XMM0,0x14030abbf: MOV qword ptr [RCX + 0x10], 0x0,0x14030abc7: MOV qword ptr [RCX + 0x18], 0xf,0x14030abcf: MOV byte ptr [RCX], 0x0,0x14030abd2: MOV dword ptr [RSP + 0x20], 0x1,0x14030abda: XOR R12D, R12D,0x14030abdd: LEA RAX, [0x140448ec8],0x14030abe4: MOV qword ptr [RSP + 0x80], RAX,0x14030abec: MOV RBX, qword ptr [RDX + 0x8],0x14030abf0: MOV RDX, 0x7fffffffffffffff,0x14030abfa: CMP R12, RBX,0x14030abfd: JNC 0x14030ad98,0x14030ac03: MOV R13, qword ptr [RAX],0x14030ac06: MOV RBX, qword ptr [RDI + 0x10],0x14030ac0a: TEST RBX, RBX,0x14030ac0d: JZ 0x14030ad4a,0x14030ac13: MOV R14, qword ptr [RDI + 0x18],0x14030ac17: CMP RBX, R14,0x14030ac1a: JNC 0x14030ac46,0x14030ac1c: LEA RAX, [RBX + 0x1],0x14030ac20: MOV qword ptr [RDI + 0x10], RAX,0x14030ac24: CMP R14, 0xf,0x14030ac28: JBE 0x14030ac38,0x14030ac2a: MOV RAX, qword ptr [RDI],0x14030ac2d: MOV word ptr [RAX + RBX*0x1], 0x2d,0x14030ac33: JMP 0x14030ad4a,0x14030ac38: MOV RAX, RDI,0x14030ac3b: MOV word ptr [RAX + RBX*0x1], 0x2d,0x14030ac41: JMP 0x14030ad4a,0x14030ac46: MOV RAX, RDX,0x14030ac49: SUB RAX, RBX,0x14030ac4c: CMP RAX, 0x1,0x14030ac50: JC 0x14030adc0,0x14030ac56: LEA R15, [RBX + 0x1],0x14030ac5a: MOV RBP, R15,0x14030ac5d: OR RBP, 0xf,0x14030ac61: CMP RBP, RDX,0x14030ac64: JBE 0x14030ac6f,0x14030ac66: MOV RBP, RDX,0x14030ac69: LEA RCX, [RDX + 0x28],0x14030ac6d: JMP 0x14030acb6,0x14030ac6f: MOV RCX, R14,0x14030ac72: SHR RCX, 0x1,0x14030ac75: MOV RAX, RDX,0x14030ac78: SUB RAX, RCX,0x14030ac7b: CMP R14, RAX,0x14030ac7e: JBE 0x14030ac89,0x14030ac80: MOV RBP, RDX,0x14030ac83: LEA RCX, [RDX + 0x28],0x14030ac87: JMP 0x14030acb6,0x14030ac89: LEA RAX, [RCX + R14*0x1],0x14030ac8d: CMP RBP, RAX,0x14030ac90: CMOVC RBP, RAX,0x14030ac94: LEA RAX, [RBP + 0x1],0x14030ac98: TEST RAX, RAX,0x14030ac9b: JNZ 0x14030aca1,0x14030ac9d: XOR ESI, ESI,0x14030ac9f: JMP 0x14030acdd,0x14030aca1: CMP RAX, 0x1000,0x14030aca7: JC 0x14030acd2,0x14030aca9: LEA RCX, [RBP + 0x28],0x14030acad: CMP RCX, RAX,0x14030acb0: JBE 0x14030adba,0x14030acb6: CALL 0x1403272a0,0x14030acbb: TEST RAX, RAX,0x14030acbe: JZ 0x14030adb3,0x14030acc4: LEA RSI, [RAX + 0x27],0x14030acc8: AND RSI, -0x20,0x14030accc: MOV qword ptr [RSI + -0x8], RAX,0x14030acd0: JMP 0x14030acdd,0x14030acd2: MOV RCX, RAX,0x14030acd5: CALL 0x1403272a0,0x14030acda: MOV RSI, RAX,0x14030acdd: MOV qword ptr [RDI + 0x10], R15,0x14030ace1: MOV qword ptr [RDI + 0x18], RBP,0x14030ace5: MOV R8, RBX,0x14030ace8: MOV RCX, RSI,0x14030aceb: CMP R14, 0xf,0x14030acef: JBE 0x14030ad39,0x14030acf1: MOV RBP, qword ptr [RDI],0x14030acf4: MOV RDX, RBP,0x14030acf7: CALL 0x14035f420,0x14030acfc: MOV word ptr [RSI + RBX*0x1], 0x2d,0x14030ad02: LEA RDX, [R14 + 0x1],0x14030ad06: CMP RDX, 0x1000,0x14030ad0d: JC 0x14030ad2f,0x14030ad0f: MOV RCX, qword ptr [RBP + -0x8],0x14030ad13: SUB RBP, RCX,0x14030ad16: SUB RBP, 0x8,0x14030ad1a: CMP RBP, 0x1f,0x14030ad1e: JA 0x14030adb3,0x14030ad24: LEA RDX, [R14 + 0x28],0x14030ad28: CALL 0x1403272f0,0x14030ad2d: JMP 0x14030ad47,0x14030ad2f: MOV RCX, RBP,0x14030ad32: CALL 0x1403272f0,0x14030ad37: JMP 0x14030ad47,0x14030ad39: MOV RDX, RDI,0x14030ad3c: CALL 0x14035f420,0x14030ad41: MOV word ptr [RSI + RBX*0x1], 0x2d,0x14030ad47: MOV qword ptr [RDI], RSI,0x14030ad4a: MOV RAX, qword ptr [RSP + 0x78],0x14030ad4f: MOV RBX, qword ptr [RAX + 0x8],0x14030ad53: MOV RCX, RBX,0x14030ad56: SUB RCX, R12,0x14030ad59: MOV RDX, qword ptr [RAX],0x14030ad5c: ADD RDX, R12,0x14030ad5f: MOV R8, R13,0x14030ad62: CMP RCX, R13,0x14030ad65: CMOVC R8, RCX,0x14030ad69: MOV RCX, RDI,0x14030ad6c: CALL 0x1400013f0,0x14030ad71: ADD R12, R13,0x14030ad74: MOV RAX, qword ptr [RSP + 0x80],0x14030ad7c: ADD RAX, 0x8,0x14030ad80: MOV qword ptr [RSP + 0x80], RAX,0x14030ad88: LEA RCX, [0x140448ef0],0x14030ad8f: CMP RAX, RCX,0x14030ad92: JNZ 0x14030abf0,0x14030ad98: MOV RAX, RDI,0x14030ad9b: MOV RBX, qword ptr [RSP + 0x88],0x14030ada3: ADD RSP, 0x30,0x14030ada7: POP R15,0x14030ada9: POP R14,0x14030adab: POP R13,0x14030adad: POP R12,0x14030adaf: POP RDI,0x14030adb0: POP RSI,0x14030adb1: POP RBP,0x14030adb2: RET,0x14030adb3: MOV ECX, 0x5,0x14030adb8: INT 0x29,0x14030adba: CALL 0x140005500,0x14030adc0: CALL 0x140005640

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140308540 | FUN_140308540 | [object Object] | [object Object] |
| 0x140309b70 | FUN_140309b70 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x1400013f0 | FUN_1400013f0       | [object Object] | [object Object] |
| 0x140005500 | FUN_140005500       | [object Object] | [object Object] |
| 0x140005640 | FUN_140005640       | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0       | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20 | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420       | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14030867b    | 0x14030ab90    | [object Object]  | [object Object]  | [object Object] |
| 0x140309bca    | 0x14030ab90    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6de8    | 0x14030ab90    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14030ab90    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x14030ab95    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x14030ab9a    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x14030abb1    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030abd2    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030abdd    | 0x140448ec8              | [object Object]  |                  | [object Object] |
| 0x14030abe4    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030abe4    | 0x140448ec8              | [object Object]  |                  | [object Object] |
| 0x14030abfd    | 0x14030ad98              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac03    | 0x140448ec8              | [object Object]  |                  | [object Object] |
| 0x14030ac03    | 0x140448ed0              | [object Object]  |                  | [object Object] |
| 0x14030ac0d    | 0x14030ad4a              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac1a    | 0x14030ac46              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac28    | 0x14030ac38              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac33    | 0x14030ad4a              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac41    | 0x14030ad4a              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac50    | 0x14030adc0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac64    | 0x14030ac6f              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac6d    | 0x14030acb6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac7e    | 0x14030ac89              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac87    | 0x14030acb6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac9b    | 0x14030aca1              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ac9f    | 0x14030acdd              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aca7    | 0x14030acd2              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acb0    | 0x14030adba              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acb6    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acbe    | 0x14030adb3              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acd0    | 0x14030acdd              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acd5    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acef    | 0x14030ad39              | [object Object]  | [object Object]  | [object Object] |
| 0x14030acf7    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad0d    | 0x14030ad2f              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad1e    | 0x14030adb3              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad28    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad2d    | 0x14030ad47              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad32    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad37    | 0x14030ad47              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad3c    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad4a    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x14030ad6c    | 0x1400013f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad74    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030ad80    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030ad80    | 0x140448ed0              | [object Object]  |                  | [object Object] |
| 0x14030ad88    | 0x140448ef0              | [object Object]  |                  | [object Object] |
| 0x14030ad92    | 0x14030abf0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ad9b    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x14030adba    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |
| 0x14030adc0    | 0x140005640              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings

| address     | value            | source_address |
|-------------|------------------|----------------|
| 0x140448ef0 | tmog.machine.v1. | 0x14030ad88    |

## normalized_result.referenced_names

| address     | value                        | source_address |
|-------------|------------------------------|----------------|
| 0x1400013f0 | FUN_1400013f0                | 0x14030ad6c    |
| 0x140005500 | FUN_140005500                | 0x14030adba    |
| 0x140005640 | FUN_140005640                | 0x14030adc0    |
| 0x14030abf0 | LAB_14030abf0                | 0x14030ad92    |
| 0x14030ac38 | LAB_14030ac38                | 0x14030ac28    |
| 0x14030ac46 | LAB_14030ac46                | 0x14030ac1a    |
| 0x14030ac6f | LAB_14030ac6f                | 0x14030ac64    |
| 0x14030ac89 | LAB_14030ac89                | 0x14030ac7e    |
| 0x14030aca1 | LAB_14030aca1                | 0x14030ac9b    |
| 0x14030acb6 | LAB_14030acb6                | 0x14030ac6d    |
| 0x14030acb6 | LAB_14030acb6                | 0x14030ac87    |
| 0x14030acd2 | LAB_14030acd2                | 0x14030aca7    |
| 0x14030acdd | LAB_14030acdd                | 0x14030ac9f    |
| 0x14030acdd | LAB_14030acdd                | 0x14030acd0    |
| 0x14030ad2f | LAB_14030ad2f                | 0x14030ad0d    |
| 0x14030ad39 | LAB_14030ad39                | 0x14030acef    |
| 0x14030ad47 | LAB_14030ad47                | 0x14030ad2d    |
| 0x14030ad47 | LAB_14030ad47                | 0x14030ad37    |
| 0x14030ad4a | LAB_14030ad4a                | 0x14030ac0d    |
| 0x14030ad4a | LAB_14030ad4a                | 0x14030ac33    |
| 0x14030ad4a | LAB_14030ad4a                | 0x14030ac41    |
| 0x14030ad98 | LAB_14030ad98                | 0x14030abfd    |
| 0x14030adb3 | LAB_14030adb3                | 0x14030acbe    |
| 0x14030adb3 | LAB_14030adb3                | 0x14030ad1e    |
| 0x14030adba | LAB_14030adba                | 0x14030acb0    |
| 0x14030adc0 | LAB_14030adc0                | 0x14030ac50    |
| 0x1403272a0 | FUN_1403272a0                | 0x14030acb6    |
| 0x1403272a0 | FUN_1403272a0                | 0x14030acd5    |
| 0x1403272f0 | thunk_FUN_140327e20          | 0x14030ad28    |
| 0x1403272f0 | thunk_FUN_140327e20          | 0x14030ad32    |
| 0x14035f420 | FUN_14035f420                | 0x14030acf7    |
| 0x14035f420 | FUN_14035f420                | 0x14030ad3c    |
| 0x140448ec8 | DAT_140448ec8                | 0x14030abdd    |
| 0x140448ec8 | DAT_140448ec8                | 0x14030abe4    |
| 0x140448ec8 | DAT_140448ec8                | 0x14030ac03    |
| 0x140448ed0 | DAT_140448ed0                | 0x14030ac03    |
| 0x140448ed0 | DAT_140448ed0                | 0x14030ad80    |
| 0x140448ef0 | s_tmog.machine.v1._140448ef0 | 0x14030ad88    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14030ab90 | 0x14030abf0 | 0x14030abf0             |
| 0x14030abf0 | 0x14030ac03 | 0x14030ac03,0x14030ad98 |
| 0x14030ac03 | 0x14030ac13 | 0x14030ac13,0x14030ad4a |
| 0x14030ac13 | 0x14030ac1c | 0x14030ac1c,0x14030ac46 |
| 0x14030ac1c | 0x14030ac2a | 0x14030ac2a,0x14030ac38 |
| 0x14030ac2a | 0x14030ac38 | 0x14030ad4a             |
| 0x14030ac38 | 0x14030ac46 | 0x14030ad4a             |
| 0x14030ac46 | 0x14030ac56 | 0x14030ac56,0x14030adc0 |
| 0x14030ac56 | 0x14030ac66 | 0x14030ac66,0x14030ac6f |
| 0x14030ac66 | 0x14030ac6f | 0x14030acb6             |
| 0x14030ac6f | 0x14030ac80 | 0x14030ac80,0x14030ac89 |
| 0x14030ac80 | 0x14030ac89 | 0x14030acb6             |
| 0x14030ac89 | 0x14030ac9d | 0x14030ac9d,0x14030aca1 |
| 0x14030ac9d | 0x14030aca1 | 0x14030acdd             |
| 0x14030aca1 | 0x14030aca9 | 0x14030aca9,0x14030acd2 |
| 0x14030aca9 | 0x14030acb6 | 0x14030acb6,0x14030adba |
| 0x14030acb6 | 0x14030acc4 | 0x14030acc4,0x14030adb3 |
| 0x14030acc4 | 0x14030acd2 | 0x14030acdd             |
| 0x14030acd2 | 0x14030acdd | 0x14030acdd             |
| 0x14030acdd | 0x14030acf1 | 0x14030acf1,0x14030ad39 |
| 0x14030acf1 | 0x14030ad0f | 0x14030ad0f,0x14030ad2f |
| 0x14030ad0f | 0x14030ad24 | 0x14030ad24,0x14030adb3 |
| 0x14030ad24 | 0x14030ad2f | 0x14030ad47             |
| 0x14030ad2f | 0x14030ad39 | 0x14030ad47             |
| 0x14030ad39 | 0x14030ad47 | 0x14030ad47             |
| 0x14030ad47 | 0x14030ad4a | 0x14030ad4a             |
| 0x14030ad4a | 0x14030ad98 | 0x14030abf0,0x14030ad98 |
| 0x14030ad98 | 0x14030adb3 |                         |
| 0x14030adb3 | 0x14030adba | 0x14030adba             |
| 0x14030adba | 0x14030adbf |                         |
| 0x14030adc0 | 0x14030adc5 |                         |

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

ulonglong *

## normalized_result.native_api.return_type.size_bytes

8

## normalized_result.native_api.return_type.storage

RAX:8

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                        |
|------------------|-------------------------|-----------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.         |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type ulonglong *. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters

| ordinal | name    | data_type   | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|-------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | ulonglong * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | longlong *  | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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

| id               | address     | sequence | opcode        | is_dead | block_membership | inputs                                                          | output          |
|------------------|-------------|----------|---------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x14030abaa#1363 | 0x14030abaa | 1363     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abbc#1115 | 0x14030abbc | 1115     | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030abbc#1116 | 0x14030abbc | 1116     | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030abbc#1364 | 0x14030abbc | 1364     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030abbf#51   | 0x14030abbf | 51       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030abbf#1365 | 0x14030abbf | 1365     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030abc7#54   | 0x14030abc7 | 54       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030abc7#1366 | 0x14030abc7 | 1366     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030abcf#56   | 0x14030abcf | 56       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030abcf#1381 | 0x14030abcf | 1381     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030abd2#59   | 0x14030abd2 | 59       | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030abda#893  | 0x14030abda | 893      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030abe4#73   | 0x14030abe4 | 73       | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abec#75   | 0x14030abec | 75       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abec#1367 | 0x14030abec | 1367     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030abf0#836  | 0x14030abf0 | 836      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abf0#894  | 0x14030abf0 | 894      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abf0#1170 | 0x14030abf0 | 1170     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abf0#1224 | 0x14030abf0 | 1224     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abfa#79   | 0x14030abfa | 79       | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030abfd#89   | 0x14030abfd | 89       | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac03#90   | 0x14030ac03 | 90       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac06#93   | 0x14030ac06 | 93       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac06#1368 | 0x14030ac06 | 1368     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ac0a#99   | 0x14030ac0a | 99       | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac0d#104  | 0x14030ac0d | 104      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac13#106  | 0x14030ac13 | 106      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac13#1369 | 0x14030ac13 | 1369     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ac17#109  | 0x14030ac17 | 109      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac1a#119  | 0x14030ac1a | 119      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac1c#120  | 0x14030ac1c | 120      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac20#124  | 0x14030ac20 | 124      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ac20#1370 | 0x14030ac20 | 1370     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ac28#135  | 0x14030ac28 | 135      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac28#136  | 0x14030ac28 | 136      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac2a#137  | 0x14030ac2a | 137      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac2d#140  | 0x14030ac2d | 140      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac2d#142  | 0x14030ac2d | 142      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ac2d#1390 | 0x14030ac2d | 1390     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac33#143  | 0x14030ac33 | 143      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ac3b#273  | 0x14030ac3b | 273      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac3b#275  | 0x14030ac3b | 275      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ac3b#1388 | 0x14030ac3b | 1388     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac3b#1389 | 0x14030ac3b | 1389     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac41#276  | 0x14030ac41 | 276      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ac4c#288  | 0x14030ac4c | 288      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac50#297  | 0x14030ac50 | 297      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac56#298  | 0x14030ac56 | 298      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac5d#303  | 0x14030ac5d | 303      | INT_OR        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac64#320  | 0x14030ac64 | 320      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac64#321  | 0x14030ac64 | 321      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac66#322  | 0x14030ac66 | 322      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac69#323  | 0x14030ac69 | 323      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac6d#325  | 0x14030ac6d | 325      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ac72#464  | 0x14030ac72 | 464      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac78#474  | 0x14030ac78 | 474      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac7e#491  | 0x14030ac7e | 491      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac7e#492  | 0x14030ac7e | 492      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac80#493  | 0x14030ac80 | 493      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac83#495  | 0x14030ac83 | 495      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac87#496  | 0x14030ac87 | 496      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ac89#498  | 0x14030ac89 | 498      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac8d#501  | 0x14030ac8d | 501      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac90#512  | 0x14030ac90 | 512      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac90#1377 | 0x14030ac90 | 1377     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac90#1378 | 0x14030ac90 | 1378     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac94#514  | 0x14030ac94 | 514      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac94#847  | 0x14030ac94 | 847      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac98#520  | 0x14030ac98 | 520      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ac9b#526  | 0x14030ac9b | 526      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ac9d#861  | 0x14030ac9d | 861      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ac9f#537  | 0x14030ac9f | 537      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030aca1#538  | 0x14030aca1 | 538      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aca7#547  | 0x14030aca7 | 547      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aca9#548  | 0x14030aca9 | 548      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acb0#560  | 0x14030acb0 | 560      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acb0#561  | 0x14030acb0 | 561      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030acb6#328  | 0x14030acb6 | 328      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acb6#812  | 0x14030acb6 | 812      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acb6#849  | 0x14030acb6 | 849      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acb6#1210 | 0x14030acb6 | 1210     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acbb#333  | 0x14030acbb | 333      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acbe#338  | 0x14030acbe | 338      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030acc4#339  | 0x14030acc4 | 339      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acc8#343  | 0x14030acc8 | 343      | INT_AND       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030accc#350  | 0x14030accc | 350      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030accc#352  | 0x14030accc | 352      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030accc#1382 | 0x14030accc | 1382     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030acd0#353  | 0x14030acd0 | 353      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030acd5#565  | 0x14030acd5 | 565      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acd5#1209 | 0x14030acd5 | 1209     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acdd#356  | 0x14030acdd | 356      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030acdd#848  | 0x14030acdd | 848      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acdd#862  | 0x14030acdd | 862      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acdd#1219 | 0x14030acdd | 1219     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acdd#1371 | 0x14030acdd | 1371     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ace1#359  | 0x14030ace1 | 359      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ace1#1372 | 0x14030ace1 | 1372     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030acef#372  | 0x14030acef | 372      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acef#373  | 0x14030acef | 373      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030acf1#374  | 0x14030acf1 | 374      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acf7#379  | 0x14030acf7 | 379      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030acf7#1212 | 0x14030acf7 | 1212     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acfc#381  | 0x14030acfc | 381      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030acfc#383  | 0x14030acfc | 383      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030acfc#1384 | 0x14030acfc | 1384     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad02#384  | 0x14030ad02 | 384      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad06#387  | 0x14030ad06 | 387      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad0d#396  | 0x14030ad0d | 396      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ad0f#397  | 0x14030ad0f | 397      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad0f#398  | 0x14030ad0f | 398      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad0f#1385 | 0x14030ad0f | 1385     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad13#402  | 0x14030ad13 | 402      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad16#411  | 0x14030ad16 | 411      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad1e#428  | 0x14030ad1e | 428      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad1e#430  | 0x14030ad1e | 430      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ad24#431  | 0x14030ad24 | 431      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad28#435  | 0x14030ad28 | 435      | CALL          | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ad28#1216 | 0x14030ad28 | 1216     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad2d#436  | 0x14030ad2d | 436      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ad32#450  | 0x14030ad32 | 450      | CALL          | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ad32#1213 | 0x14030ad32 | 1213     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad37#451  | 0x14030ad37 | 451      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ad3c#455  | 0x14030ad3c | 455      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030ad3c#1211 | 0x14030ad3c | 1211     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad41#457  | 0x14030ad41 | 457      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad41#459  | 0x14030ad41 | 459      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ad41#1383 | 0x14030ad41 | 1383     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad47#438  | 0x14030ad47 | 438      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ad47#1220 | 0x14030ad47 | 1220     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ad4a#1221 | 0x14030ad4a | 1221     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x14030ad4f#148  | 0x14030ad4f | 148      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad4f#1373 | 0x14030ad4f | 1373     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ad56#153  | 0x14030ad56 | 153      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad59#160  | 0x14030ad59 | 160      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad5c#164  | 0x14030ad5c | 164      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad62#173  | 0x14030ad62 | 173      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad65#184  | 0x14030ad65 | 184      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ad65#1379 | 0x14030ad65 | 1379     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad65#1380 | 0x14030ad65 | 1380     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad69#885  | 0x14030ad69 | 885      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad6c#189  | 0x14030ad6c | 189      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030ad6c#1217 | 0x14030ad6c | 1217     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad71#192  | 0x14030ad71 | 192      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad7c#1374 | 0x14030ad7c | 1374     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ad8f#220  | 0x14030ad8f | 220      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ad8f#1362 | 0x14030ad8f | 1362     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad8f#1391 | 0x14030ad8f | 1391     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad92#226  | 0x14030ad92 | 226      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ad98#227  | 0x14030ad98 | 227      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ad98#1359 | 0x14030ad98 | 1359     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030adb2#270  | 0x14030adb2 | 270      | RETURN        | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030adb2#1360 | 0x14030adb2 | 1360     | RETURN        | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030adb3#1222 | 0x14030adb3 | 1222     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adb8#440  | 0x14030adb8 | 440      | CALLOTHER     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adb8#441  | 0x14030adb8 | 441      | CALLIND       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030adb8#1214 | 0x14030adb8 | 1214     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adb8#1375 | 0x14030adb8 | 1375     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adb8#1386 | 0x14030adb8 | 1386     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030adba#442  | 0x14030adba | 442      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030adba#443  | 0x14030adba | 443      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030adba#444  | 0x14030adba | 444      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x14030adba#446  | 0x14030adba | 446      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x14030adba#842  | 0x14030adba | 842      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adba#1215 | 0x14030adba | 1215     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adba#1223 | 0x14030adba | 1223     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adba#1361 | 0x14030adba | 1361     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030adba#1387 | 0x14030adba | 1387     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030adc0#569  | 0x14030adc0 | 569      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x14030adc0#571  | 0x14030adc0 | 571      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x14030adc0#1208 | 0x14030adc0 | 1208     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x14030abbc#1364 | 0x14030abbc#1116 | 1           |
| 0x14030abbf#1365 | 0x14030abbf#51   | 1           |
| 0x14030abc7#1366 | 0x14030abc7#54   | 1           |
| 0x14030abcf#1381 | 0x14030abcf#56   | 1           |
| 0x14030abec#1367 | 0x14030abec#75   | 1           |
| 0x14030abec#75   | 0x14030abf0#836  | 0           |
| 0x14030ad4f#148  | 0x14030abf0#836  | 1           |
| 0x14030abda#893  | 0x14030abf0#894  | 0           |
| 0x14030ad71#192  | 0x14030abf0#894  | 1           |
| 0x14030abe4#73   | 0x14030abf0#1170 | 0           |
| 0x14030ad7c#1374 | 0x14030abf0#1170 | 1           |
| 0x14030abd2#59   | 0x14030abf0#1224 | 0           |
| 0x14030ad6c#1217 | 0x14030abf0#1224 | 1           |
| 0x14030abf0#836  | 0x14030abfa#79   | 0           |
| 0x14030abf0#894  | 0x14030abfa#79   | 1           |
| 0x14030abfa#79   | 0x14030abfd#89   | 1           |
| 0x14030abf0#1170 | 0x14030ac03#90   | 1           |
| 0x14030ac06#1368 | 0x14030ac06#93   | 1           |
| 0x14030ac06#93   | 0x14030ac0a#99   | 0           |
| 0x14030ac0a#99   | 0x14030ac0d#104  | 1           |
| 0x14030ac13#1369 | 0x14030ac13#106  | 1           |
| 0x14030ac06#93   | 0x14030ac17#109  | 0           |
| 0x14030ac13#106  | 0x14030ac17#109  | 1           |
| 0x14030ac17#109  | 0x14030ac1a#119  | 1           |
| 0x14030ac06#93   | 0x14030ac1c#120  | 0           |
| 0x14030ac20#1370 | 0x14030ac20#124  | 1           |
| 0x14030ac1c#120  | 0x14030ac20#124  | 2           |
| 0x14030ac13#106  | 0x14030ac28#135  | 0           |
| 0x14030ac28#135  | 0x14030ac28#136  | 1           |
| 0x14030ac2a#137  | 0x14030ac2d#140  | 0           |
| 0x14030ac06#93   | 0x14030ac2d#140  | 1           |
| 0x14030ac2d#1390 | 0x14030ac2d#142  | 1           |
| 0x14030ac2d#140  | 0x14030ac2d#1390 | 0           |
| 0x14030ac3b#1388 | 0x14030ac3b#273  | 0           |
| 0x14030ac06#93   | 0x14030ac3b#273  | 1           |
| 0x14030ac3b#1389 | 0x14030ac3b#275  | 1           |
| 0x14030ac3b#273  | 0x14030ac3b#1389 | 0           |
| 0x14030ac06#93   | 0x14030ac4c#288  | 0           |
| 0x14030ac4c#288  | 0x14030ac50#297  | 1           |
| 0x14030ac06#93   | 0x14030ac56#298  | 0           |
| 0x14030ac56#298  | 0x14030ac5d#303  | 0           |
| 0x14030ac5d#303  | 0x14030ac64#320  | 1           |
| 0x14030ac64#320  | 0x14030ac64#321  | 1           |
| 0x14030ac13#106  | 0x14030ac72#464  | 0           |
| 0x14030ac72#464  | 0x14030ac78#474  | 1           |
| 0x14030ac78#474  | 0x14030ac7e#491  | 0           |
| 0x14030ac13#106  | 0x14030ac7e#491  | 1           |
| 0x14030ac7e#491  | 0x14030ac7e#492  | 1           |
| 0x14030ac72#464  | 0x14030ac89#498  | 0           |
| 0x14030ac13#106  | 0x14030ac89#498  | 1           |
| 0x14030ac5d#303  | 0x14030ac8d#501  | 0           |
| 0x14030ac89#498  | 0x14030ac8d#501  | 1           |
| 0x14030ac8d#501  | 0x14030ac90#512  | 1           |
| 0x14030ac5d#303  | 0x14030ac90#1377 | 0           |
| 0x14030ac89#498  | 0x14030ac90#1378 | 0           |
| 0x14030ac94#847  | 0x14030ac94#514  | 0           |
| 0x14030ac90#1377 | 0x14030ac94#847  | 0           |
| 0x14030ac90#1378 | 0x14030ac94#847  | 1           |
| 0x14030ac94#514  | 0x14030ac98#520  | 0           |
| 0x14030ac98#520  | 0x14030ac9b#526  | 1           |
| 0x14030ac94#514  | 0x14030aca1#538  | 1           |
| 0x14030aca1#538  | 0x14030aca7#547  | 1           |
| 0x14030ac94#847  | 0x14030aca9#548  | 0           |
| 0x14030aca9#548  | 0x14030acb0#560  | 0           |
| 0x14030ac94#514  | 0x14030acb0#560  | 1           |
| 0x14030acb0#560  | 0x14030acb0#561  | 1           |
| 0x14030acb6#812  | 0x14030acb6#328  | 1           |
| 0x14030ac69#323  | 0x14030acb6#812  | 0           |
| 0x14030ac83#495  | 0x14030acb6#812  | 1           |
| 0x14030aca9#548  | 0x14030acb6#812  | 2           |
| 0x14030ac66#322  | 0x14030acb6#849  | 0           |
| 0x14030ac80#493  | 0x14030acb6#849  | 1           |
| 0x14030ac94#847  | 0x14030acb6#849  | 2           |
| 0x14030abf0#1224 | 0x14030acb6#1210 | 0           |
| 0x14030acb6#328  | 0x14030acbb#333  | 0           |
| 0x14030acbb#333  | 0x14030acbe#338  | 1           |
| 0x14030acb6#328  | 0x14030acc4#339  | 0           |
| 0x14030acc4#339  | 0x14030acc8#343  | 0           |
| 0x14030acc8#343  | 0x14030accc#350  | 0           |
| 0x14030accc#1382 | 0x14030accc#352  | 1           |
| 0x14030acb6#328  | 0x14030accc#352  | 2           |
| 0x14030accc#350  | 0x14030accc#1382 | 0           |
| 0x14030ac94#514  | 0x14030acd5#565  | 1           |
| 0x14030abf0#1224 | 0x14030acd5#1209 | 0           |
| 0x14030acdd#1371 | 0x14030acdd#356  | 1           |
| 0x14030ac56#298  | 0x14030acdd#356  | 2           |
| 0x14030acb6#849  | 0x14030acdd#848  | 0           |
| 0x14030ac94#847  | 0x14030acdd#848  | 1           |
| 0x14030ac94#847  | 0x14030acdd#848  | 2           |
| 0x14030acc8#343  | 0x14030acdd#862  | 0           |
| 0x14030ac9d#861  | 0x14030acdd#862  | 1           |
| 0x14030acd5#565  | 0x14030acdd#862  | 2           |
| 0x14030acb6#1210 | 0x14030acdd#1219 | 0           |
| 0x14030abf0#1224 | 0x14030acdd#1219 | 1           |
| 0x14030acd5#1209 | 0x14030acdd#1219 | 2           |
| 0x14030ace1#1372 | 0x14030ace1#359  | 1           |
| 0x14030acdd#848  | 0x14030ace1#359  | 2           |
| 0x14030ac13#106  | 0x14030acef#372  | 0           |
| 0x14030acef#372  | 0x14030acef#373  | 1           |
| 0x14030acdd#862  | 0x14030acf7#379  | 1           |
| 0x14030acf1#374  | 0x14030acf7#379  | 2           |
| 0x14030ac06#93   | 0x14030acf7#379  | 3           |
| 0x14030acdd#1219 | 0x14030acf7#1212 | 0           |
| 0x14030acdd#862  | 0x14030acfc#381  | 0           |
| 0x14030ac06#93   | 0x14030acfc#381  | 1           |
| 0x14030acfc#1384 | 0x14030acfc#383  | 1           |
| 0x14030acfc#381  | 0x14030acfc#1384 | 0           |
| 0x14030ac13#106  | 0x14030ad02#384  | 0           |
| 0x14030ad02#384  | 0x14030ad06#387  | 0           |
| 0x14030ad06#387  | 0x14030ad0d#396  | 1           |
| 0x14030acf1#374  | 0x14030ad0f#397  | 0           |
| 0x14030ad0f#1385 | 0x14030ad0f#398  | 1           |
| 0x14030ad0f#397  | 0x14030ad0f#1385 | 0           |
| 0x14030acf1#374  | 0x14030ad13#402  | 0           |
| 0x14030ad0f#398  | 0x14030ad13#402  | 1           |
| 0x14030ad13#402  | 0x14030ad16#411  | 0           |
| 0x14030ad16#411  | 0x14030ad1e#428  | 1           |
| 0x14030ad1e#428  | 0x14030ad1e#430  | 1           |
| 0x14030ac13#106  | 0x14030ad24#431  | 0           |
| 0x14030ad0f#398  | 0x14030ad28#435  | 1           |
| 0x14030ad24#431  | 0x14030ad28#435  | 2           |
| 0x14030acf7#1212 | 0x14030ad28#1216 | 0           |
| 0x14030acf1#374  | 0x14030ad32#450  | 1           |
| 0x14030acf7#1212 | 0x14030ad32#1213 | 0           |
| 0x14030acdd#862  | 0x14030ad3c#455  | 1           |
| 0x14030ac06#93   | 0x14030ad3c#455  | 3           |
| 0x14030acdd#1219 | 0x14030ad3c#1211 | 0           |
| 0x14030acdd#862  | 0x14030ad41#457  | 0           |
| 0x14030ac06#93   | 0x14030ad41#457  | 1           |
| 0x14030ad41#1383 | 0x14030ad41#459  | 1           |
| 0x14030ad41#457  | 0x14030ad41#1383 | 0           |
| 0x14030acdd#862  | 0x14030ad47#438  | 2           |
| 0x14030ad28#1216 | 0x14030ad47#1220 | 0           |
| 0x14030ad32#1213 | 0x14030ad47#1220 | 1           |
| 0x14030ad3c#1211 | 0x14030ad47#1220 | 2           |
| 0x14030abf0#1224 | 0x14030ad4a#1221 | 0           |
| 0x14030abf0#1224 | 0x14030ad4a#1221 | 1           |
| 0x14030abf0#1224 | 0x14030ad4a#1221 | 2           |
| 0x14030ad47#1220 | 0x14030ad4a#1221 | 3           |
| 0x14030ad4f#1373 | 0x14030ad4f#148  | 1           |
| 0x14030ad4f#148  | 0x14030ad56#153  | 0           |
| 0x14030abf0#894  | 0x14030ad56#153  | 1           |
| 0x14030ad59#160  | 0x14030ad5c#164  | 0           |
| 0x14030abf0#894  | 0x14030ad5c#164  | 1           |
| 0x14030ad56#153  | 0x14030ad62#173  | 0           |
| 0x14030ac03#90   | 0x14030ad62#173  | 1           |
| 0x14030ad62#173  | 0x14030ad65#184  | 1           |
| 0x14030ac03#90   | 0x14030ad65#1379 | 0           |
| 0x14030ad56#153  | 0x14030ad65#1380 | 0           |
| 0x14030ad65#1379 | 0x14030ad69#885  | 0           |
| 0x14030ad65#1380 | 0x14030ad69#885  | 1           |
| 0x14030ad5c#164  | 0x14030ad6c#189  | 2           |
| 0x14030ad69#885  | 0x14030ad6c#189  | 3           |
| 0x14030ad4a#1221 | 0x14030ad6c#1217 | 0           |
| 0x14030abf0#894  | 0x14030ad71#192  | 0           |
| 0x14030ac03#90   | 0x14030ad71#192  | 1           |
| 0x14030abf0#1170 | 0x14030ad7c#1374 | 0           |
| 0x14030ad7c#1374 | 0x14030ad8f#220  | 0           |
| 0x14030ad8f#1391 | 0x14030ad8f#220  | 1           |
| 0x14030ad8f#1362 | 0x14030ad8f#1391 | 0           |
| 0x14030ad8f#220  | 0x14030ad92#226  | 1           |
| 0x14030ad98#227  | 0x14030adb2#270  | 1           |
| 0x14030ad98#1359 | 0x14030adb2#1360 | 1           |
| 0x14030acb6#1210 | 0x14030adb3#1222 | 0           |
| 0x14030acf7#1212 | 0x14030adb3#1222 | 1           |
| 0x14030adb8#1386 | 0x14030adb8#441  | 0           |
| 0x14030adb3#1222 | 0x14030adb8#1214 | 0           |
| 0x14030adb8#440  | 0x14030adb8#1386 | 0           |
| 0x14030adba#842  | 0x14030adba#442  | 0           |
| 0x14030adba#1387 | 0x14030adba#443  | 1           |
| 0x14030adba#1361 | 0x14030adba#443  | 2           |
| 0x14030adb8#1375 | 0x14030adba#842  | 0           |
| 0x14030abaa#1363 | 0x14030adba#842  | 1           |
| 0x14030adba#1223 | 0x14030adba#1215 | 0           |
| 0x14030adb8#1214 | 0x14030adba#1223 | 0           |
| 0x14030abf0#1224 | 0x14030adba#1223 | 1           |
| 0x14030adba#442  | 0x14030adba#1387 | 0           |
| 0x14030abf0#1224 | 0x14030adc0#1208 | 0           |

## normalized_result.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x14030abbc#1115 | memory_write       | 1             | 2           |
| 0x14030abbc#1116 | memory_write       | 1             | 2           |
| 0x14030abbf#51   | memory_write       | 1             | 2           |
| 0x14030abc7#54   | memory_write       | 1             | 2           |
| 0x14030abcf#56   | memory_write       | 1             | 2           |
| 0x14030abec#75   | memory_read        | 1             |             |
| 0x14030abfd#89   | conditional_branch |               | 1           |
| 0x14030ac03#90   | memory_read        | 1             |             |
| 0x14030ac06#93   | memory_read        | 1             |             |
| 0x14030ac0d#104  | conditional_branch |               | 1           |
| 0x14030ac13#106  | memory_read        | 1             |             |
| 0x14030ac1a#119  | conditional_branch |               | 1           |
| 0x14030ac20#124  | memory_write       | 1             | 2           |
| 0x14030ac28#136  | conditional_branch |               | 1           |
| 0x14030ac2a#137  | memory_read        | 1             |             |
| 0x14030ac2d#142  | memory_write       | 1             | 2           |
| 0x14030ac3b#275  | memory_write       | 1             | 2           |
| 0x14030ac50#297  | conditional_branch |               | 1           |
| 0x14030ac64#321  | conditional_branch |               | 1           |
| 0x14030ac7e#492  | conditional_branch |               | 1           |
| 0x14030ac90#512  | conditional_branch |               | 1           |
| 0x14030ac9b#526  | conditional_branch |               | 1           |
| 0x14030aca7#547  | conditional_branch |               | 1           |
| 0x14030acb0#561  | conditional_branch |               | 1           |
| 0x14030acb6#328  | direct_call        | 0             |             |
| 0x14030acbe#338  | conditional_branch |               | 1           |
| 0x14030accc#352  | memory_write       | 1             | 2           |
| 0x14030acd5#565  | direct_call        | 0             |             |
| 0x14030acdd#356  | memory_write       | 1             | 2           |
| 0x14030ace1#359  | memory_write       | 1             | 2           |
| 0x14030acef#373  | conditional_branch |               | 1           |
| 0x14030acf1#374  | memory_read        | 1             |             |
| 0x14030acf7#379  | direct_call        | 0             |             |
| 0x14030acfc#383  | memory_write       | 1             | 2           |
| 0x14030ad0d#396  | conditional_branch |               | 1           |
| 0x14030ad0f#398  | memory_read        | 1             |             |
| 0x14030ad1e#430  | conditional_branch |               | 1           |
| 0x14030ad28#435  | direct_call        | 0             |             |
| 0x14030ad32#450  | direct_call        | 0             |             |
| 0x14030ad3c#455  | direct_call        | 0             |             |
| 0x14030ad41#459  | memory_write       | 1             | 2           |
| 0x14030ad47#438  | memory_write       | 1             | 2           |
| 0x14030ad4f#148  | memory_read        | 1             |             |
| 0x14030ad59#160  | memory_read        | 1             |             |
| 0x14030ad65#184  | conditional_branch |               | 1           |
| 0x14030ad6c#189  | direct_call        | 0             |             |
| 0x14030ad92#226  | conditional_branch |               | 1           |
| 0x14030adb8#441  | indirect_call      | 0             |             |
| 0x14030adba#443  | memory_write       | 1             | 2           |
| 0x14030adba#444  | direct_call        | 0             |             |
| 0x14030adc0#569  | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type    |
|---------|---------|--------------|
| 0       | param_1 | /ulonglong * |
| 1       | param_2 | /longlong *  |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x14030abbc#1115 | 1           |
| 0       | 0x14030abbc#1364 | 0           |
| 0       | 0x14030abbf#1365 | 0           |
| 0       | 0x14030abc7#1366 | 0           |
| 0       | 0x14030abcf#1381 | 0           |
| 1       | 0x14030abec#1367 | 0           |
| 0       | 0x14030ac06#1368 | 0           |
| 0       | 0x14030ac13#1369 | 0           |
| 0       | 0x14030ac20#1370 | 0           |
| 0       | 0x14030ac2a#137  | 1           |
| 0       | 0x14030ac3b#1388 | 0           |
| 0       | 0x14030acdd#1371 | 0           |
| 0       | 0x14030ace1#1372 | 0           |
| 0       | 0x14030acf1#374  | 1           |
| 0       | 0x14030ad3c#455  | 2           |
| 0       | 0x14030ad47#438  | 1           |
| 1       | 0x14030ad4f#1373 | 0           |
| 1       | 0x14030ad59#160  | 1           |
| 0       | 0x14030ad6c#189  | 1           |
| 0       | 0x14030ad98#227  | 0           |
| 0       | 0x14030ad98#1359 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x14030adba to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14030adc0 to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x14030adba to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14030adc0 to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

