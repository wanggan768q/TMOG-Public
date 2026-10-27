## evidence_id

ev_c6fa2dee257db2e8c22ebf1fb92104506e6ffa04850626b48c74d64a1257bb3c

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
| procedure | 0x140081b00 |

## raw_result.value.procedure.address

0x140081b00

## raw_result.value.procedure.name

FUN_140081b00

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
| 0x140081b00 | 0x140081c53 |
| 0x140081c55 | 0x140081c59 |

## raw_result.value.procedure.body.total_bytes

345

## raw_result.value.procedure.body.span_bytes

346

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_140081b00()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## raw_result.value.pseudocode


void FUN_140081b00(ulonglong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong unaff_RSI;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar9 = auStack_38;
  uVar3 = param_1[3];
  if (param_2 <= uVar3) {
    return;
  }
  uVar8 = 0x7fffffffffffffff;
  uVar4 = param_1[2];
  if (0x7fffffffffffffff - uVar4 < param_2 - uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_140005640();
  }
  uVar7 = param_2 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar2 = (uVar3 >> 1) + uVar3;
    uVar8 = uVar7;
    if (uVar7 < uVar2) {
      uVar8 = uVar2;
    }
    uVar2 = uVar8 + 1;
    if (uVar2 == 0) {
      unaff_RSI = 0;
    }
    else {
      if (0xfff < uVar2) {
        uVar7 = uVar8 + 0x28;
        if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_140005500();
        }
        goto LAB_140081bab;
      }
      unaff_RSI = FUN_1403272a0(uVar2);
    }
LAB_140081bce:
    param_1[2] = param_2;
    param_1[3] = uVar8;
    if (uVar3 < 0x10) {
      FUN_14035f420(unaff_RSI,param_1,uVar4 + 1);
      goto LAB_140081c30;
    }
    uVar8 = *param_1;
    FUN_14035f420(unaff_RSI,uVar8,uVar4 + 1);
    if (0xfff < uVar3 + 1) {
      plVar1 = (longlong *)(uVar8 - 8);
      uVar8 = (uVar8 - *plVar1) - 8;
      if (uVar8 < 0x20) {
        thunk_FUN_140327e20(*plVar1,uVar3 + 0x28);
        goto LAB_140081c30;
      }
      goto LAB_140081c17;
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_140081bab:
    lVar6 = FUN_1403272a0(uVar7);
    if (lVar6 != 0) {
      unaff_RSI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar6;
      goto LAB_140081bce;
    }
LAB_140081c17:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_30;
  }
  *(undefined8 *)(puVar9 + -8) = 0x140081c26;
  thunk_FUN_140327e20(uVar8);
LAB_140081c30:
  *param_1 = unaff_RSI;
  param_1[2] = uVar4;
  return;
}



## raw_result.value.assembly

0x140081b00: PUSH RBP,0x140081b02: PUSH RDI,0x140081b03: PUSH R14,0x140081b05: SUB RSP, 0x20,0x140081b09: MOV RBP, qword ptr [RCX + 0x18],0x140081b0d: MOV R14, RDX,0x140081b10: MOV RDI, RCX,0x140081b13: CMP RBP, RDX,0x140081b16: JNC 0x140081c46,0x140081b1c: MOV qword ptr [RSP + 0x40], RBX,0x140081b21: MOV R8, RDX,0x140081b24: MOV RBX, 0x7fffffffffffffff,0x140081b2e: MOV qword ptr [RSP + 0x50], R15,0x140081b33: MOV R15, qword ptr [RCX + 0x10],0x140081b37: MOV RAX, RBX,0x140081b3a: SUB RAX, R15,0x140081b3d: SUB R8, R15,0x140081b40: CMP RAX, R8,0x140081b43: JC 0x140081c4f,0x140081b49: MOV RCX, RDX,0x140081b4c: MOV qword ptr [RSP + 0x48], RSI,0x140081b51: OR RCX, 0xf,0x140081b55: CMP RCX, RBX,0x140081b58: JA 0x140081b9d,0x140081b5a: MOV RDX, RBP,0x140081b5d: MOV RAX, RBX,0x140081b60: SHR RDX, 0x1,0x140081b63: SUB RAX, RDX,0x140081b66: CMP RBP, RAX,0x140081b69: JA 0x140081b9d,0x140081b6b: LEA RAX, [RDX + RBP*0x1],0x140081b6f: MOV RBX, RCX,0x140081b72: CMP RCX, RAX,0x140081b75: CMOVC RBX, RAX,0x140081b79: LEA RAX, [RBX + 0x1],0x140081b7d: TEST RAX, RAX,0x140081b80: JNZ 0x140081b86,0x140081b82: XOR ESI, ESI,0x140081b84: JMP 0x140081bce,0x140081b86: CMP RAX, 0x1000,0x140081b8c: JC 0x140081bc3,0x140081b8e: LEA RCX, [RAX + 0x27],0x140081b92: CMP RCX, RAX,0x140081b95: JBE 0x140081c55,0x140081b9b: JMP 0x140081bab,0x140081b9d: MOV RCX, -0x8000000000000000,0x140081ba7: ADD RCX, 0x27,0x140081bab: CALL 0x1403272a0,0x140081bb0: TEST RAX, RAX,0x140081bb3: JZ 0x140081c17,0x140081bb5: LEA RSI, [RAX + 0x27],0x140081bb9: AND RSI, -0x20,0x140081bbd: MOV qword ptr [RSI + -0x8], RAX,0x140081bc1: JMP 0x140081bce,0x140081bc3: MOV RCX, RAX,0x140081bc6: CALL 0x1403272a0,0x140081bcb: MOV RSI, RAX,0x140081bce: MOV qword ptr [RDI + 0x10], R14,0x140081bd2: LEA R8, [R15 + 0x1],0x140081bd6: MOV qword ptr [RDI + 0x18], RBX,0x140081bda: MOV RCX, RSI,0x140081bdd: CMP RBP, 0xf,0x140081be1: JBE 0x140081c28,0x140081be3: MOV RBX, qword ptr [RDI],0x140081be6: MOV RDX, RBX,0x140081be9: CALL 0x14035f420,0x140081bee: LEA RDX, [RBP + 0x1],0x140081bf2: CMP RDX, 0x1000,0x140081bf9: JC 0x140081c1e,0x140081bfb: MOV RCX, qword ptr [RBX + -0x8],0x140081bff: SUB RBX, RCX,0x140081c02: SUB RBX, 0x8,0x140081c06: CMP RBX, 0x1f,0x140081c0a: JA 0x140081c17,0x140081c0c: LEA RDX, [RBP + 0x28],0x140081c10: CALL 0x1403272f0,0x140081c15: JMP 0x140081c30,0x140081c17: MOV ECX, 0x5,0x140081c1c: INT 0x29,0x140081c1e: MOV RCX, RBX,0x140081c21: CALL 0x1403272f0,0x140081c26: JMP 0x140081c30,0x140081c28: MOV RDX, RDI,0x140081c2b: CALL 0x14035f420,0x140081c30: MOV qword ptr [RDI], RSI,0x140081c33: MOV RSI, qword ptr [RSP + 0x48],0x140081c38: MOV RBX, qword ptr [RSP + 0x40],0x140081c3d: MOV qword ptr [RDI + 0x10], R15,0x140081c41: MOV R15, qword ptr [RSP + 0x50],0x140081c46: ADD RSP, 0x20,0x140081c4a: POP R14,0x140081c4c: POP RDI,0x140081c4d: POP RBP,0x140081c4e: RET,0x140081c4f: CALL 0x140005640,0x140081c55: CALL 0x140005500

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140080aa0 | FUN_140080aa0 | [object Object] | [object Object] |
| 0x1400be910 | FUN_1400be910 | [object Object] | [object Object] |
| 0x14010db30 | FUN_14010db30 | [object Object] | [object Object] |
| 0x140130860 | FUN_140130860 | [object Object] | [object Object] |
| 0x14019b4c0 | FUN_14019b4c0 | [object Object] | [object Object] |
| 0x1401c27b0 | FUN_1401c27b0 | [object Object] | [object Object] |
| 0x14022b740 | FUN_14022b740 | [object Object] | [object Object] |
| 0x140252d50 | FUN_140252d50 | [object Object] | [object Object] |
| 0x14025eae0 | FUN_14025eae0 | [object Object] | [object Object] |
| 0x140295680 | FUN_140295680 | [object Object] | [object Object] |
| 0x1402a9090 | FUN_1402a9090 | [object Object] | [object Object] |
| 0x140304160 | FUN_140304160 | [object Object] | [object Object] |
| 0x140307e60 | FUN_140307e60 | [object Object] | [object Object] |
| 0x14030add0 | FUN_14030add0 | [object Object] | [object Object] |
| 0x14030c530 | FUN_14030c530 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x140005500 | FUN_140005500       | [object Object] | [object Object] |
| 0x140005640 | FUN_140005640       | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0       | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20 | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420       | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140080b90    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1400be963    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14010dbb6    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1401308ba    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14019b59b    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c283f    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14022b785    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x140252dc3    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14025eb34    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1402956e3    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1402a90dc    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1403041fb    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x140307ec1    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae18    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14030c578    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x140487a10    | 0x140081b00    |                  | [object Object]  | [object Object] |
| 0x140487a14    | 0x140081b1c    |                  | [object Object]  | [object Object] |
| 0x140487a20    | 0x140081b00    |                  | [object Object]  | [object Object] |
| 0x140487a24    | 0x140081b1c    |                  | [object Object]  | [object Object] |
| 0x140487a38    | 0x140081b00    |                  | [object Object]  | [object Object] |
| 0x140487a3c    | 0x140081b1c    |                  | [object Object]  | [object Object] |
| 0x140487a54    | 0x140081b00    |                  | [object Object]  | [object Object] |
| 0x140487a58    | 0x140081b1c    |                  | [object Object]  | [object Object] |
| 0x1404d5400    | 0x140081b00    |                  | [object Object]  | [object Object] |
| 0x1404d540c    | 0x140081b1c    |                  | [object Object]  | [object Object] |
| 0x1404d5418    | 0x140081c46    |                  | [object Object]  | [object Object] |
| 0x1404d5424    | 0x140081c4f    |                  | [object Object]  | [object Object] |
| 0x1404d5430    | 0x140081c55    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140081b16    | 0x140081c46    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b1c    | stack:0x8      | [object Object]  |                  | [object Object] |
| 0x140081b2e    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x140081b43    | 0x140081c4f    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b4c    | stack:0x10     | [object Object]  |                  | [object Object] |
| 0x140081b58    | 0x140081b9d    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b69    | 0x140081b9d    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b80    | 0x140081b86    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b84    | 0x140081bce    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b8c    | 0x140081bc3    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b95    | 0x140081c55    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b9b    | 0x140081bab    | [object Object]  | [object Object]  | [object Object] |
| 0x140081bab    | 0x1403272a0    | [object Object]  | [object Object]  | [object Object] |
| 0x140081bb3    | 0x140081c17    | [object Object]  | [object Object]  | [object Object] |
| 0x140081bc1    | 0x140081bce    | [object Object]  | [object Object]  | [object Object] |
| 0x140081bc6    | 0x1403272a0    | [object Object]  | [object Object]  | [object Object] |
| 0x140081be1    | 0x140081c28    | [object Object]  | [object Object]  | [object Object] |
| 0x140081be9    | 0x14035f420    | [object Object]  | [object Object]  | [object Object] |
| 0x140081bf9    | 0x140081c1e    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c0a    | 0x140081c17    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c10    | 0x1403272f0    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c15    | 0x140081c30    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c21    | 0x1403272f0    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c26    | 0x140081c30    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c2b    | 0x14035f420    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c33    | stack:0x10     | [object Object]  |                  | [object Object] |
| 0x140081c38    | stack:0x8      | [object Object]  |                  | [object Object] |
| 0x140081c41    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x140081c4f    | 0x140005640    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c55    | 0x140005500    | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value               | source_address |
|-------------|---------------------|----------------|
| 0x140005500 | FUN_140005500       | 0x140081c55    |
| 0x140005640 | FUN_140005640       | 0x140081c4f    |
| 0x140081b86 | LAB_140081b86       | 0x140081b80    |
| 0x140081b9d | LAB_140081b9d       | 0x140081b58    |
| 0x140081b9d | LAB_140081b9d       | 0x140081b69    |
| 0x140081bab | LAB_140081bab       | 0x140081b9b    |
| 0x140081bc3 | LAB_140081bc3       | 0x140081b8c    |
| 0x140081bce | LAB_140081bce       | 0x140081b84    |
| 0x140081bce | LAB_140081bce       | 0x140081bc1    |
| 0x140081c17 | LAB_140081c17       | 0x140081bb3    |
| 0x140081c17 | LAB_140081c17       | 0x140081c0a    |
| 0x140081c1e | LAB_140081c1e       | 0x140081bf9    |
| 0x140081c28 | LAB_140081c28       | 0x140081be1    |
| 0x140081c30 | LAB_140081c30       | 0x140081c15    |
| 0x140081c30 | LAB_140081c30       | 0x140081c26    |
| 0x140081c46 | LAB_140081c46       | 0x140081b16    |
| 0x140081c4f | LAB_140081c4f       | 0x140081b43    |
| 0x140081c55 | LAB_140081c55       | 0x140081b95    |
| 0x1403272a0 | FUN_1403272a0       | 0x140081bab    |
| 0x1403272a0 | FUN_1403272a0       | 0x140081bc6    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140081c10    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140081c21    |
| 0x14035f420 | FUN_14035f420       | 0x140081be9    |
| 0x14035f420 | FUN_14035f420       | 0x140081c2b    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140081b00 | 0x140081b1c | 0x140081b1c,0x140081c46 |
| 0x140081b1c | 0x140081b49 | 0x140081b49,0x140081c4f |
| 0x140081b49 | 0x140081b5a | 0x140081b5a,0x140081b9d |
| 0x140081b5a | 0x140081b6b | 0x140081b6b,0x140081b9d |
| 0x140081b6b | 0x140081b82 | 0x140081b82,0x140081b86 |
| 0x140081b82 | 0x140081b86 | 0x140081bce             |
| 0x140081b86 | 0x140081b8e | 0x140081b8e,0x140081bc3 |
| 0x140081b8e | 0x140081b9b | 0x140081b9b,0x140081c55 |
| 0x140081b9b | 0x140081b9d | 0x140081bab             |
| 0x140081b9d | 0x140081bab | 0x140081bab             |
| 0x140081bab | 0x140081bb5 | 0x140081bb5,0x140081c17 |
| 0x140081bb5 | 0x140081bc3 | 0x140081bce             |
| 0x140081bc3 | 0x140081bce | 0x140081bce             |
| 0x140081bce | 0x140081be3 | 0x140081be3,0x140081c28 |
| 0x140081be3 | 0x140081bfb | 0x140081bfb,0x140081c1e |
| 0x140081bfb | 0x140081c0c | 0x140081c0c,0x140081c17 |
| 0x140081c0c | 0x140081c17 | 0x140081c30             |
| 0x140081c17 | 0x140081c1e | 0x140081c1e             |
| 0x140081c1e | 0x140081c28 | 0x140081c30             |
| 0x140081c28 | 0x140081c30 | 0x140081c30             |
| 0x140081c30 | 0x140081c46 | 0x140081c46             |
| 0x140081c46 | 0x140081c4f |                         |
| 0x140081c4f | 0x140081c54 |                         |
| 0x140081c55 | 0x140081c5a |                         |

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

void

## raw_result.value.native_api.return_type.size_bytes

0

## raw_result.value.native_api.return_type.storage

<VOID>

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                 |
|------------------|-------------------------|----------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.  |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type void. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters

| role      | ordinal | name    | data_type   | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|-------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | ulonglong * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | ulonglong   | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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

| id              | address     | sequence | opcode        | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|---------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x140081b05#871 | 0x140081b05 | 871      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b09#19  | 0x140081b09 | 19       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b09#872 | 0x140081b09 | 872      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081b13#24  | 0x140081b13 | 24       | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b16#34  | 0x140081b16 | 34       | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b24#39  | 0x140081b24 | 39       | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081b33#44  | 0x140081b33 | 44       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b33#873 | 0x140081b33 | 873      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081b3a#49  | 0x140081b3a | 49       | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b3d#58  | 0x140081b3d | 58       | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b40#66  | 0x140081b40 | 66       | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b43#75  | 0x140081b43 | 75       | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b51#82  | 0x140081b51 | 82       | INT_OR        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b58#99  | 0x140081b58 | 99       | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b58#101 | 0x140081b58 | 101      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b60#107 | 0x140081b60 | 107      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b63#116 | 0x140081b63 | 116      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b69#134 | 0x140081b69 | 134      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b69#135 | 0x140081b69 | 135      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b6b#137 | 0x140081b6b | 137      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b72#141 | 0x140081b72 | 141      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b75#152 | 0x140081b75 | 152      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b75#881 | 0x140081b75 | 881      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081b75#882 | 0x140081b75 | 882      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081b79#154 | 0x140081b79 | 154      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b79#606 | 0x140081b79 | 606      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b7d#160 | 0x140081b7d | 160      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b80#166 | 0x140081b80 | 166      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b82#623 | 0x140081b82 | 623      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081b84#177 | 0x140081b84 | 177      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x140081b86#308 | 0x140081b86 | 308      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b8c#317 | 0x140081b8c | 317      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b8e#318 | 0x140081b8e | 318      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b95#330 | 0x140081b95 | 330      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b95#331 | 0x140081b95 | 331      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081ba7#374 | 0x140081ba7 | 374      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081bab#335 | 0x140081bab | 335      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bab#583 | 0x140081bab | 583      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bab#607 | 0x140081bab | 607      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bb0#340 | 0x140081bb0 | 340      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bb3#345 | 0x140081bb3 | 345      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081bb5#346 | 0x140081bb5 | 346      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bb9#350 | 0x140081bb9 | 350      | INT_AND       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bbd#357 | 0x140081bbd | 357      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bbd#359 | 0x140081bbd | 359      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081bbd#883 | 0x140081bbd | 883      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081bc1#360 | 0x140081bc1 | 360      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x140081bc6#369 | 0x140081bc6 | 369      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bce#180 | 0x140081bce | 180      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081bce#608 | 0x140081bce | 608      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081bce#624 | 0x140081bce | 624      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081bce#874 | 0x140081bce | 874      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081bd2#181 | 0x140081bd2 | 181      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bd6#185 | 0x140081bd6 | 185      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081bd6#875 | 0x140081bd6 | 875      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081be1#197 | 0x140081be1 | 197      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081be1#198 | 0x140081be1 | 198      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081be3#199 | 0x140081be3 | 199      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081be9#204 | 0x140081be9 | 204      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x140081bee#205 | 0x140081bee | 205      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bf2#208 | 0x140081bf2 | 208      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bf9#217 | 0x140081bf9 | 217      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081bfb#218 | 0x140081bfb | 218      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bfb#219 | 0x140081bfb | 219      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bfb#884 | 0x140081bfb | 884      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081bff#223 | 0x140081bff | 223      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c02#232 | 0x140081c02 | 232      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c0a#249 | 0x140081c0a | 249      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c0a#251 | 0x140081c0a | 251      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081c0c#252 | 0x140081c0c | 252      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c10#256 | 0x140081c10 | 256      | CALL          | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081c15#257 | 0x140081c15 | 257      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x140081c17#604 | 0x140081c17 | 604      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c17#627 | 0x140081c17 | 627      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c1c#297 | 0x140081c1c | 297      | CALLOTHER     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c1c#298 | 0x140081c1c | 298      | CALLIND       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081c1c#876 | 0x140081c1c | 876      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c1c#885 | 0x140081c1c | 885      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081c1e#609 | 0x140081c1e | 609      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c1e#613 | 0x140081c1e | 613      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c1e#626 | 0x140081c1e | 626      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c21#300 | 0x140081c21 | 300      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081c21#301 | 0x140081c21 | 301      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081c21#302 | 0x140081c21 | 302      | CALL          | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081c21#886 | 0x140081c21 | 886      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081c26#303 | 0x140081c26 | 303      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x140081c2b#307 | 0x140081c2b | 307      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x140081c30#259 | 0x140081c30 | 259      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081c30#625 | 0x140081c30 | 625      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081c3d#268 | 0x140081c3d | 268      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081c3d#877 | 0x140081c3d | 877      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081c4e#295 | 0x140081c4e | 295      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x140081c4e#878 | 0x140081c4e | 878      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x140081c4f#383 | 0x140081c4f | 383      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x140081c4f#385 | 0x140081c4f | 385      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x140081c55#363 | 0x140081c55 | 363      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x140081c55#365 | 0x140081c55 | 365      | RETURN        | true    | member           | [object Object]                                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x140081b09#872 | 0x140081b09#19  | 1           |
| 0x140081b09#19  | 0x140081b13#24  | 1           |
| 0x140081b13#24  | 0x140081b16#34  | 1           |
| 0x140081b33#873 | 0x140081b33#44  | 1           |
| 0x140081b33#44  | 0x140081b3a#49  | 1           |
| 0x140081b33#44  | 0x140081b3d#58  | 1           |
| 0x140081b3a#49  | 0x140081b40#66  | 0           |
| 0x140081b3d#58  | 0x140081b40#66  | 1           |
| 0x140081b40#66  | 0x140081b43#75  | 1           |
| 0x140081b51#82  | 0x140081b58#99  | 0           |
| 0x140081b58#99  | 0x140081b58#101 | 1           |
| 0x140081b09#19  | 0x140081b60#107 | 0           |
| 0x140081b60#107 | 0x140081b63#116 | 1           |
| 0x140081b09#19  | 0x140081b69#134 | 0           |
| 0x140081b63#116 | 0x140081b69#134 | 1           |
| 0x140081b69#134 | 0x140081b69#135 | 1           |
| 0x140081b60#107 | 0x140081b6b#137 | 0           |
| 0x140081b09#19  | 0x140081b6b#137 | 1           |
| 0x140081b51#82  | 0x140081b72#141 | 0           |
| 0x140081b6b#137 | 0x140081b72#141 | 1           |
| 0x140081b72#141 | 0x140081b75#152 | 1           |
| 0x140081b51#82  | 0x140081b75#881 | 0           |
| 0x140081b6b#137 | 0x140081b75#882 | 0           |
| 0x140081b79#606 | 0x140081b79#154 | 0           |
| 0x140081b75#881 | 0x140081b79#606 | 0           |
| 0x140081b75#882 | 0x140081b79#606 | 1           |
| 0x140081b79#154 | 0x140081b7d#160 | 0           |
| 0x140081b7d#160 | 0x140081b80#166 | 1           |
| 0x140081b79#154 | 0x140081b86#308 | 1           |
| 0x140081b86#308 | 0x140081b8c#317 | 1           |
| 0x140081b79#606 | 0x140081b8e#318 | 0           |
| 0x140081b8e#318 | 0x140081b95#330 | 0           |
| 0x140081b79#154 | 0x140081b95#330 | 1           |
| 0x140081b95#330 | 0x140081b95#331 | 1           |
| 0x140081bab#583 | 0x140081bab#335 | 1           |
| 0x140081ba7#374 | 0x140081bab#583 | 0           |
| 0x140081b8e#318 | 0x140081bab#583 | 1           |
| 0x140081b24#39  | 0x140081bab#607 | 0           |
| 0x140081b79#606 | 0x140081bab#607 | 1           |
| 0x140081bab#335 | 0x140081bb0#340 | 0           |
| 0x140081bb0#340 | 0x140081bb3#345 | 1           |
| 0x140081bab#335 | 0x140081bb5#346 | 0           |
| 0x140081bb5#346 | 0x140081bb9#350 | 0           |
| 0x140081bb9#350 | 0x140081bbd#357 | 0           |
| 0x140081bbd#883 | 0x140081bbd#359 | 1           |
| 0x140081bab#335 | 0x140081bbd#359 | 2           |
| 0x140081bbd#357 | 0x140081bbd#883 | 0           |
| 0x140081b79#154 | 0x140081bc6#369 | 1           |
| 0x140081bce#874 | 0x140081bce#180 | 1           |
| 0x140081b79#606 | 0x140081bce#608 | 0           |
| 0x140081bab#607 | 0x140081bce#608 | 1           |
| 0x140081b79#606 | 0x140081bce#608 | 2           |
| 0x140081b82#623 | 0x140081bce#624 | 0           |
| 0x140081bb9#350 | 0x140081bce#624 | 1           |
| 0x140081bc6#369 | 0x140081bce#624 | 2           |
| 0x140081b33#44  | 0x140081bd2#181 | 0           |
| 0x140081bd6#875 | 0x140081bd6#185 | 1           |
| 0x140081bce#608 | 0x140081bd6#185 | 2           |
| 0x140081b09#19  | 0x140081be1#197 | 0           |
| 0x140081be1#197 | 0x140081be1#198 | 1           |
| 0x140081bce#624 | 0x140081be9#204 | 1           |
| 0x140081be3#199 | 0x140081be9#204 | 2           |
| 0x140081bd2#181 | 0x140081be9#204 | 3           |
| 0x140081b09#19  | 0x140081bee#205 | 0           |
| 0x140081bee#205 | 0x140081bf2#208 | 1           |
| 0x140081bf2#208 | 0x140081bf9#217 | 1           |
| 0x140081be3#199 | 0x140081bfb#218 | 0           |
| 0x140081bfb#884 | 0x140081bfb#219 | 1           |
| 0x140081bfb#218 | 0x140081bfb#884 | 0           |
| 0x140081be3#199 | 0x140081bff#223 | 0           |
| 0x140081bfb#219 | 0x140081bff#223 | 1           |
| 0x140081bff#223 | 0x140081c02#232 | 0           |
| 0x140081c02#232 | 0x140081c0a#249 | 0           |
| 0x140081c0a#249 | 0x140081c0a#251 | 1           |
| 0x140081b09#19  | 0x140081c0c#252 | 0           |
| 0x140081bfb#219 | 0x140081c10#256 | 1           |
| 0x140081c0c#252 | 0x140081c10#256 | 2           |
| 0x140081c02#232 | 0x140081c17#604 | 0           |
| 0x140081bab#607 | 0x140081c17#604 | 1           |
| 0x140081bce#624 | 0x140081c17#627 | 0           |
| 0x140081c1c#885 | 0x140081c1c#298 | 0           |
| 0x140081c1c#297 | 0x140081c1c#885 | 0           |
| 0x140081be3#199 | 0x140081c1e#609 | 0           |
| 0x140081c17#604 | 0x140081c1e#609 | 1           |
| 0x140081b05#871 | 0x140081c1e#613 | 0           |
| 0x140081c1c#876 | 0x140081c1e#613 | 1           |
| 0x140081bce#624 | 0x140081c1e#626 | 0           |
| 0x140081c17#627 | 0x140081c1e#626 | 1           |
| 0x140081c1e#613 | 0x140081c21#300 | 0           |
| 0x140081c21#886 | 0x140081c21#301 | 1           |
| 0x140081c1e#609 | 0x140081c21#302 | 1           |
| 0x140081c21#300 | 0x140081c21#886 | 0           |
| 0x140081bce#624 | 0x140081c2b#307 | 1           |
| 0x140081bd2#181 | 0x140081c2b#307 | 3           |
| 0x140081c30#625 | 0x140081c30#259 | 2           |
| 0x140081bce#624 | 0x140081c30#625 | 0           |
| 0x140081c1e#626 | 0x140081c30#625 | 1           |
| 0x140081bce#624 | 0x140081c30#625 | 2           |
| 0x140081c3d#877 | 0x140081c3d#268 | 1           |
| 0x140081b33#44  | 0x140081c3d#268 | 2           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type    |
|---------|---------|--------------|
| 0       | param_1 | /ulonglong * |
| 1       | param_2 | /ulonglong   |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x140081b09#872 | 0           |
| 1       | 0x140081b13#24  | 0           |
| 0       | 0x140081b33#873 | 0           |
| 1       | 0x140081b3d#58  | 0           |
| 1       | 0x140081b51#82  | 0           |
| 1       | 0x140081bce#180 | 2           |
| 0       | 0x140081bce#874 | 0           |
| 0       | 0x140081bd6#875 | 0           |
| 0       | 0x140081be3#199 | 1           |
| 0       | 0x140081c2b#307 | 2           |
| 0       | 0x140081c30#259 | 1           |
| 0       | 0x140081c3d#877 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x140081b09#19  | memory_read        | 1             |             |
| 0x140081b16#34  | conditional_branch |               | 1           |
| 0x140081b33#44  | memory_read        | 1             |             |
| 0x140081b43#75  | conditional_branch |               | 1           |
| 0x140081b58#101 | conditional_branch |               | 1           |
| 0x140081b69#135 | conditional_branch |               | 1           |
| 0x140081b75#152 | conditional_branch |               | 1           |
| 0x140081b80#166 | conditional_branch |               | 1           |
| 0x140081b8c#317 | conditional_branch |               | 1           |
| 0x140081b95#331 | conditional_branch |               | 1           |
| 0x140081bab#335 | direct_call        | 0             |             |
| 0x140081bb3#345 | conditional_branch |               | 1           |
| 0x140081bbd#359 | memory_write       | 1             | 2           |
| 0x140081bc6#369 | direct_call        | 0             |             |
| 0x140081bce#180 | memory_write       | 1             | 2           |
| 0x140081bd6#185 | memory_write       | 1             | 2           |
| 0x140081be1#198 | conditional_branch |               | 1           |
| 0x140081be3#199 | memory_read        | 1             |             |
| 0x140081be9#204 | direct_call        | 0             |             |
| 0x140081bf9#217 | conditional_branch |               | 1           |
| 0x140081bfb#219 | memory_read        | 1             |             |
| 0x140081c0a#251 | conditional_branch |               | 1           |
| 0x140081c10#256 | direct_call        | 0             |             |
| 0x140081c1c#298 | indirect_call      | 0             |             |
| 0x140081c21#301 | memory_write       | 1             | 2           |
| 0x140081c21#302 | direct_call        | 0             |             |
| 0x140081c2b#307 | direct_call        | 0             |             |
| 0x140081c30#259 | memory_write       | 1             | 2           |
| 0x140081c3d#268 | memory_write       | 1             | 2           |
| 0x140081c4f#383 | direct_call        | 0             |             |
| 0x140081c55#363 | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x140081c4f to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140081c55 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x140081c4f to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140081c55 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x140081b00

## normalized_result.procedure.name

FUN_140081b00

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
| 0x140081b00 | 0x140081c53 |
| 0x140081c55 | 0x140081c59 |

## normalized_result.procedure.body.total_bytes

345

## normalized_result.procedure.body.span_bytes

346

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_140081b00()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## normalized_result.pseudocode


void FUN_140081b00(ulonglong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong unaff_RSI;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar9 = auStack_38;
  uVar3 = param_1[3];
  if (param_2 <= uVar3) {
    return;
  }
  uVar8 = 0x7fffffffffffffff;
  uVar4 = param_1[2];
  if (0x7fffffffffffffff - uVar4 < param_2 - uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_140005640();
  }
  uVar7 = param_2 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar2 = (uVar3 >> 1) + uVar3;
    uVar8 = uVar7;
    if (uVar7 < uVar2) {
      uVar8 = uVar2;
    }
    uVar2 = uVar8 + 1;
    if (uVar2 == 0) {
      unaff_RSI = 0;
    }
    else {
      if (0xfff < uVar2) {
        uVar7 = uVar8 + 0x28;
        if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_140005500();
        }
        goto LAB_140081bab;
      }
      unaff_RSI = FUN_1403272a0(uVar2);
    }
LAB_140081bce:
    param_1[2] = param_2;
    param_1[3] = uVar8;
    if (uVar3 < 0x10) {
      FUN_14035f420(unaff_RSI,param_1,uVar4 + 1);
      goto LAB_140081c30;
    }
    uVar8 = *param_1;
    FUN_14035f420(unaff_RSI,uVar8,uVar4 + 1);
    if (0xfff < uVar3 + 1) {
      plVar1 = (longlong *)(uVar8 - 8);
      uVar8 = (uVar8 - *plVar1) - 8;
      if (uVar8 < 0x20) {
        thunk_FUN_140327e20(*plVar1,uVar3 + 0x28);
        goto LAB_140081c30;
      }
      goto LAB_140081c17;
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_140081bab:
    lVar6 = FUN_1403272a0(uVar7);
    if (lVar6 != 0) {
      unaff_RSI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar6;
      goto LAB_140081bce;
    }
LAB_140081c17:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_30;
  }
  *(undefined8 *)(puVar9 + -8) = 0x140081c26;
  thunk_FUN_140327e20(uVar8);
LAB_140081c30:
  *param_1 = unaff_RSI;
  param_1[2] = uVar4;
  return;
}



## normalized_result.assembly

0x140081b00: PUSH RBP,0x140081b02: PUSH RDI,0x140081b03: PUSH R14,0x140081b05: SUB RSP, 0x20,0x140081b09: MOV RBP, qword ptr [RCX + 0x18],0x140081b0d: MOV R14, RDX,0x140081b10: MOV RDI, RCX,0x140081b13: CMP RBP, RDX,0x140081b16: JNC 0x140081c46,0x140081b1c: MOV qword ptr [RSP + 0x40], RBX,0x140081b21: MOV R8, RDX,0x140081b24: MOV RBX, 0x7fffffffffffffff,0x140081b2e: MOV qword ptr [RSP + 0x50], R15,0x140081b33: MOV R15, qword ptr [RCX + 0x10],0x140081b37: MOV RAX, RBX,0x140081b3a: SUB RAX, R15,0x140081b3d: SUB R8, R15,0x140081b40: CMP RAX, R8,0x140081b43: JC 0x140081c4f,0x140081b49: MOV RCX, RDX,0x140081b4c: MOV qword ptr [RSP + 0x48], RSI,0x140081b51: OR RCX, 0xf,0x140081b55: CMP RCX, RBX,0x140081b58: JA 0x140081b9d,0x140081b5a: MOV RDX, RBP,0x140081b5d: MOV RAX, RBX,0x140081b60: SHR RDX, 0x1,0x140081b63: SUB RAX, RDX,0x140081b66: CMP RBP, RAX,0x140081b69: JA 0x140081b9d,0x140081b6b: LEA RAX, [RDX + RBP*0x1],0x140081b6f: MOV RBX, RCX,0x140081b72: CMP RCX, RAX,0x140081b75: CMOVC RBX, RAX,0x140081b79: LEA RAX, [RBX + 0x1],0x140081b7d: TEST RAX, RAX,0x140081b80: JNZ 0x140081b86,0x140081b82: XOR ESI, ESI,0x140081b84: JMP 0x140081bce,0x140081b86: CMP RAX, 0x1000,0x140081b8c: JC 0x140081bc3,0x140081b8e: LEA RCX, [RAX + 0x27],0x140081b92: CMP RCX, RAX,0x140081b95: JBE 0x140081c55,0x140081b9b: JMP 0x140081bab,0x140081b9d: MOV RCX, -0x8000000000000000,0x140081ba7: ADD RCX, 0x27,0x140081bab: CALL 0x1403272a0,0x140081bb0: TEST RAX, RAX,0x140081bb3: JZ 0x140081c17,0x140081bb5: LEA RSI, [RAX + 0x27],0x140081bb9: AND RSI, -0x20,0x140081bbd: MOV qword ptr [RSI + -0x8], RAX,0x140081bc1: JMP 0x140081bce,0x140081bc3: MOV RCX, RAX,0x140081bc6: CALL 0x1403272a0,0x140081bcb: MOV RSI, RAX,0x140081bce: MOV qword ptr [RDI + 0x10], R14,0x140081bd2: LEA R8, [R15 + 0x1],0x140081bd6: MOV qword ptr [RDI + 0x18], RBX,0x140081bda: MOV RCX, RSI,0x140081bdd: CMP RBP, 0xf,0x140081be1: JBE 0x140081c28,0x140081be3: MOV RBX, qword ptr [RDI],0x140081be6: MOV RDX, RBX,0x140081be9: CALL 0x14035f420,0x140081bee: LEA RDX, [RBP + 0x1],0x140081bf2: CMP RDX, 0x1000,0x140081bf9: JC 0x140081c1e,0x140081bfb: MOV RCX, qword ptr [RBX + -0x8],0x140081bff: SUB RBX, RCX,0x140081c02: SUB RBX, 0x8,0x140081c06: CMP RBX, 0x1f,0x140081c0a: JA 0x140081c17,0x140081c0c: LEA RDX, [RBP + 0x28],0x140081c10: CALL 0x1403272f0,0x140081c15: JMP 0x140081c30,0x140081c17: MOV ECX, 0x5,0x140081c1c: INT 0x29,0x140081c1e: MOV RCX, RBX,0x140081c21: CALL 0x1403272f0,0x140081c26: JMP 0x140081c30,0x140081c28: MOV RDX, RDI,0x140081c2b: CALL 0x14035f420,0x140081c30: MOV qword ptr [RDI], RSI,0x140081c33: MOV RSI, qword ptr [RSP + 0x48],0x140081c38: MOV RBX, qword ptr [RSP + 0x40],0x140081c3d: MOV qword ptr [RDI + 0x10], R15,0x140081c41: MOV R15, qword ptr [RSP + 0x50],0x140081c46: ADD RSP, 0x20,0x140081c4a: POP R14,0x140081c4c: POP RDI,0x140081c4d: POP RBP,0x140081c4e: RET,0x140081c4f: CALL 0x140005640,0x140081c55: CALL 0x140005500

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140080aa0 | FUN_140080aa0 | [object Object] | [object Object] |
| 0x1400be910 | FUN_1400be910 | [object Object] | [object Object] |
| 0x14010db30 | FUN_14010db30 | [object Object] | [object Object] |
| 0x140130860 | FUN_140130860 | [object Object] | [object Object] |
| 0x14019b4c0 | FUN_14019b4c0 | [object Object] | [object Object] |
| 0x1401c27b0 | FUN_1401c27b0 | [object Object] | [object Object] |
| 0x14022b740 | FUN_14022b740 | [object Object] | [object Object] |
| 0x140252d50 | FUN_140252d50 | [object Object] | [object Object] |
| 0x14025eae0 | FUN_14025eae0 | [object Object] | [object Object] |
| 0x140295680 | FUN_140295680 | [object Object] | [object Object] |
| 0x1402a9090 | FUN_1402a9090 | [object Object] | [object Object] |
| 0x140304160 | FUN_140304160 | [object Object] | [object Object] |
| 0x140307e60 | FUN_140307e60 | [object Object] | [object Object] |
| 0x14030add0 | FUN_14030add0 | [object Object] | [object Object] |
| 0x14030c530 | FUN_14030c530 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x140005500 | FUN_140005500       | [object Object] | [object Object] |
| 0x140005640 | FUN_140005640       | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0       | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20 | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420       | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140080b90    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1400be963    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14010dbb6    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1401308ba    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14019b59b    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1401c283f    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14022b785    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x140252dc3    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14025eb34    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1402956e3    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1402a90dc    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x1403041fb    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x140307ec1    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae18    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x14030c578    | 0x140081b00    | [object Object]  | [object Object]  | [object Object] |
| 0x140487a10    | 0x140081b00    |                  | [object Object]  | [object Object] |
| 0x140487a14    | 0x140081b1c    |                  | [object Object]  | [object Object] |
| 0x140487a20    | 0x140081b00    |                  | [object Object]  | [object Object] |
| 0x140487a24    | 0x140081b1c    |                  | [object Object]  | [object Object] |
| 0x140487a38    | 0x140081b00    |                  | [object Object]  | [object Object] |
| 0x140487a3c    | 0x140081b1c    |                  | [object Object]  | [object Object] |
| 0x140487a54    | 0x140081b00    |                  | [object Object]  | [object Object] |
| 0x140487a58    | 0x140081b1c    |                  | [object Object]  | [object Object] |
| 0x1404d5400    | 0x140081b00    |                  | [object Object]  | [object Object] |
| 0x1404d540c    | 0x140081b1c    |                  | [object Object]  | [object Object] |
| 0x1404d5418    | 0x140081c46    |                  | [object Object]  | [object Object] |
| 0x1404d5424    | 0x140081c4f    |                  | [object Object]  | [object Object] |
| 0x1404d5430    | 0x140081c55    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140081b16    | 0x140081c46    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b1c    | stack:0x8      | [object Object]  |                  | [object Object] |
| 0x140081b2e    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x140081b43    | 0x140081c4f    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b4c    | stack:0x10     | [object Object]  |                  | [object Object] |
| 0x140081b58    | 0x140081b9d    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b69    | 0x140081b9d    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b80    | 0x140081b86    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b84    | 0x140081bce    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b8c    | 0x140081bc3    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b95    | 0x140081c55    | [object Object]  | [object Object]  | [object Object] |
| 0x140081b9b    | 0x140081bab    | [object Object]  | [object Object]  | [object Object] |
| 0x140081bab    | 0x1403272a0    | [object Object]  | [object Object]  | [object Object] |
| 0x140081bb3    | 0x140081c17    | [object Object]  | [object Object]  | [object Object] |
| 0x140081bc1    | 0x140081bce    | [object Object]  | [object Object]  | [object Object] |
| 0x140081bc6    | 0x1403272a0    | [object Object]  | [object Object]  | [object Object] |
| 0x140081be1    | 0x140081c28    | [object Object]  | [object Object]  | [object Object] |
| 0x140081be9    | 0x14035f420    | [object Object]  | [object Object]  | [object Object] |
| 0x140081bf9    | 0x140081c1e    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c0a    | 0x140081c17    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c10    | 0x1403272f0    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c15    | 0x140081c30    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c21    | 0x1403272f0    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c26    | 0x140081c30    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c2b    | 0x14035f420    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c33    | stack:0x10     | [object Object]  |                  | [object Object] |
| 0x140081c38    | stack:0x8      | [object Object]  |                  | [object Object] |
| 0x140081c41    | stack:0x18     | [object Object]  |                  | [object Object] |
| 0x140081c4f    | 0x140005640    | [object Object]  | [object Object]  | [object Object] |
| 0x140081c55    | 0x140005500    | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value               | source_address |
|-------------|---------------------|----------------|
| 0x140005500 | FUN_140005500       | 0x140081c55    |
| 0x140005640 | FUN_140005640       | 0x140081c4f    |
| 0x140081b86 | LAB_140081b86       | 0x140081b80    |
| 0x140081b9d | LAB_140081b9d       | 0x140081b58    |
| 0x140081b9d | LAB_140081b9d       | 0x140081b69    |
| 0x140081bab | LAB_140081bab       | 0x140081b9b    |
| 0x140081bc3 | LAB_140081bc3       | 0x140081b8c    |
| 0x140081bce | LAB_140081bce       | 0x140081b84    |
| 0x140081bce | LAB_140081bce       | 0x140081bc1    |
| 0x140081c17 | LAB_140081c17       | 0x140081bb3    |
| 0x140081c17 | LAB_140081c17       | 0x140081c0a    |
| 0x140081c1e | LAB_140081c1e       | 0x140081bf9    |
| 0x140081c28 | LAB_140081c28       | 0x140081be1    |
| 0x140081c30 | LAB_140081c30       | 0x140081c15    |
| 0x140081c30 | LAB_140081c30       | 0x140081c26    |
| 0x140081c46 | LAB_140081c46       | 0x140081b16    |
| 0x140081c4f | LAB_140081c4f       | 0x140081b43    |
| 0x140081c55 | LAB_140081c55       | 0x140081b95    |
| 0x1403272a0 | FUN_1403272a0       | 0x140081bab    |
| 0x1403272a0 | FUN_1403272a0       | 0x140081bc6    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140081c10    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140081c21    |
| 0x14035f420 | FUN_14035f420       | 0x140081be9    |
| 0x14035f420 | FUN_14035f420       | 0x140081c2b    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140081b00 | 0x140081b1c | 0x140081b1c,0x140081c46 |
| 0x140081b1c | 0x140081b49 | 0x140081b49,0x140081c4f |
| 0x140081b49 | 0x140081b5a | 0x140081b5a,0x140081b9d |
| 0x140081b5a | 0x140081b6b | 0x140081b6b,0x140081b9d |
| 0x140081b6b | 0x140081b82 | 0x140081b82,0x140081b86 |
| 0x140081b82 | 0x140081b86 | 0x140081bce             |
| 0x140081b86 | 0x140081b8e | 0x140081b8e,0x140081bc3 |
| 0x140081b8e | 0x140081b9b | 0x140081b9b,0x140081c55 |
| 0x140081b9b | 0x140081b9d | 0x140081bab             |
| 0x140081b9d | 0x140081bab | 0x140081bab             |
| 0x140081bab | 0x140081bb5 | 0x140081bb5,0x140081c17 |
| 0x140081bb5 | 0x140081bc3 | 0x140081bce             |
| 0x140081bc3 | 0x140081bce | 0x140081bce             |
| 0x140081bce | 0x140081be3 | 0x140081be3,0x140081c28 |
| 0x140081be3 | 0x140081bfb | 0x140081bfb,0x140081c1e |
| 0x140081bfb | 0x140081c0c | 0x140081c0c,0x140081c17 |
| 0x140081c0c | 0x140081c17 | 0x140081c30             |
| 0x140081c17 | 0x140081c1e | 0x140081c1e             |
| 0x140081c1e | 0x140081c28 | 0x140081c30             |
| 0x140081c28 | 0x140081c30 | 0x140081c30             |
| 0x140081c30 | 0x140081c46 | 0x140081c46             |
| 0x140081c46 | 0x140081c4f |                         |
| 0x140081c4f | 0x140081c54 |                         |
| 0x140081c55 | 0x140081c5a |                         |

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

void

## normalized_result.native_api.return_type.size_bytes

0

## normalized_result.native_api.return_type.storage

<VOID>

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                 |
|------------------|-------------------------|----------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.  |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type void. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters

| ordinal | name    | data_type   | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|-------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | ulonglong * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | ulonglong   | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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

| id              | address     | sequence | opcode        | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|---------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x140081b05#871 | 0x140081b05 | 871      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b09#19  | 0x140081b09 | 19       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b09#872 | 0x140081b09 | 872      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081b13#24  | 0x140081b13 | 24       | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b16#34  | 0x140081b16 | 34       | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b24#39  | 0x140081b24 | 39       | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081b33#44  | 0x140081b33 | 44       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b33#873 | 0x140081b33 | 873      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081b3a#49  | 0x140081b3a | 49       | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b3d#58  | 0x140081b3d | 58       | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b40#66  | 0x140081b40 | 66       | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b43#75  | 0x140081b43 | 75       | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b51#82  | 0x140081b51 | 82       | INT_OR        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b58#99  | 0x140081b58 | 99       | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b58#101 | 0x140081b58 | 101      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b60#107 | 0x140081b60 | 107      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b63#116 | 0x140081b63 | 116      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b69#134 | 0x140081b69 | 134      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b69#135 | 0x140081b69 | 135      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b6b#137 | 0x140081b6b | 137      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b72#141 | 0x140081b72 | 141      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b75#152 | 0x140081b75 | 152      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b75#881 | 0x140081b75 | 881      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081b75#882 | 0x140081b75 | 882      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081b79#154 | 0x140081b79 | 154      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b79#606 | 0x140081b79 | 606      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b7d#160 | 0x140081b7d | 160      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b80#166 | 0x140081b80 | 166      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b82#623 | 0x140081b82 | 623      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081b84#177 | 0x140081b84 | 177      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x140081b86#308 | 0x140081b86 | 308      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b8c#317 | 0x140081b8c | 317      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081b8e#318 | 0x140081b8e | 318      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b95#330 | 0x140081b95 | 330      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081b95#331 | 0x140081b95 | 331      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081ba7#374 | 0x140081ba7 | 374      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081bab#335 | 0x140081bab | 335      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bab#583 | 0x140081bab | 583      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bab#607 | 0x140081bab | 607      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bb0#340 | 0x140081bb0 | 340      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bb3#345 | 0x140081bb3 | 345      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081bb5#346 | 0x140081bb5 | 346      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bb9#350 | 0x140081bb9 | 350      | INT_AND       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bbd#357 | 0x140081bbd | 357      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bbd#359 | 0x140081bbd | 359      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081bbd#883 | 0x140081bbd | 883      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081bc1#360 | 0x140081bc1 | 360      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x140081bc6#369 | 0x140081bc6 | 369      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bce#180 | 0x140081bce | 180      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081bce#608 | 0x140081bce | 608      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081bce#624 | 0x140081bce | 624      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081bce#874 | 0x140081bce | 874      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081bd2#181 | 0x140081bd2 | 181      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bd6#185 | 0x140081bd6 | 185      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081bd6#875 | 0x140081bd6 | 875      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081be1#197 | 0x140081be1 | 197      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081be1#198 | 0x140081be1 | 198      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081be3#199 | 0x140081be3 | 199      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081be9#204 | 0x140081be9 | 204      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x140081bee#205 | 0x140081bee | 205      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bf2#208 | 0x140081bf2 | 208      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bf9#217 | 0x140081bf9 | 217      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081bfb#218 | 0x140081bfb | 218      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bfb#219 | 0x140081bfb | 219      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081bfb#884 | 0x140081bfb | 884      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081bff#223 | 0x140081bff | 223      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c02#232 | 0x140081c02 | 232      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c0a#249 | 0x140081c0a | 249      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c0a#251 | 0x140081c0a | 251      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081c0c#252 | 0x140081c0c | 252      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c10#256 | 0x140081c10 | 256      | CALL          | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081c15#257 | 0x140081c15 | 257      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x140081c17#604 | 0x140081c17 | 604      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c17#627 | 0x140081c17 | 627      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c1c#297 | 0x140081c1c | 297      | CALLOTHER     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c1c#298 | 0x140081c1c | 298      | CALLIND       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081c1c#876 | 0x140081c1c | 876      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c1c#885 | 0x140081c1c | 885      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081c1e#609 | 0x140081c1e | 609      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c1e#613 | 0x140081c1e | 613      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c1e#626 | 0x140081c1e | 626      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140081c21#300 | 0x140081c21 | 300      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081c21#301 | 0x140081c21 | 301      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081c21#302 | 0x140081c21 | 302      | CALL          | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140081c21#886 | 0x140081c21 | 886      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140081c26#303 | 0x140081c26 | 303      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x140081c2b#307 | 0x140081c2b | 307      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x140081c30#259 | 0x140081c30 | 259      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081c30#625 | 0x140081c30 | 625      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081c3d#268 | 0x140081c3d | 268      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140081c3d#877 | 0x140081c3d | 877      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140081c4e#295 | 0x140081c4e | 295      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x140081c4e#878 | 0x140081c4e | 878      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x140081c4f#383 | 0x140081c4f | 383      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x140081c4f#385 | 0x140081c4f | 385      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x140081c55#363 | 0x140081c55 | 363      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x140081c55#365 | 0x140081c55 | 365      | RETURN        | true    | member           | [object Object]                                                 |                 |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x140081b09#872 | 0x140081b09#19  | 1           |
| 0x140081b09#19  | 0x140081b13#24  | 1           |
| 0x140081b13#24  | 0x140081b16#34  | 1           |
| 0x140081b33#873 | 0x140081b33#44  | 1           |
| 0x140081b33#44  | 0x140081b3a#49  | 1           |
| 0x140081b33#44  | 0x140081b3d#58  | 1           |
| 0x140081b3a#49  | 0x140081b40#66  | 0           |
| 0x140081b3d#58  | 0x140081b40#66  | 1           |
| 0x140081b40#66  | 0x140081b43#75  | 1           |
| 0x140081b51#82  | 0x140081b58#99  | 0           |
| 0x140081b58#99  | 0x140081b58#101 | 1           |
| 0x140081b09#19  | 0x140081b60#107 | 0           |
| 0x140081b60#107 | 0x140081b63#116 | 1           |
| 0x140081b09#19  | 0x140081b69#134 | 0           |
| 0x140081b63#116 | 0x140081b69#134 | 1           |
| 0x140081b69#134 | 0x140081b69#135 | 1           |
| 0x140081b60#107 | 0x140081b6b#137 | 0           |
| 0x140081b09#19  | 0x140081b6b#137 | 1           |
| 0x140081b51#82  | 0x140081b72#141 | 0           |
| 0x140081b6b#137 | 0x140081b72#141 | 1           |
| 0x140081b72#141 | 0x140081b75#152 | 1           |
| 0x140081b51#82  | 0x140081b75#881 | 0           |
| 0x140081b6b#137 | 0x140081b75#882 | 0           |
| 0x140081b79#606 | 0x140081b79#154 | 0           |
| 0x140081b75#881 | 0x140081b79#606 | 0           |
| 0x140081b75#882 | 0x140081b79#606 | 1           |
| 0x140081b79#154 | 0x140081b7d#160 | 0           |
| 0x140081b7d#160 | 0x140081b80#166 | 1           |
| 0x140081b79#154 | 0x140081b86#308 | 1           |
| 0x140081b86#308 | 0x140081b8c#317 | 1           |
| 0x140081b79#606 | 0x140081b8e#318 | 0           |
| 0x140081b8e#318 | 0x140081b95#330 | 0           |
| 0x140081b79#154 | 0x140081b95#330 | 1           |
| 0x140081b95#330 | 0x140081b95#331 | 1           |
| 0x140081bab#583 | 0x140081bab#335 | 1           |
| 0x140081ba7#374 | 0x140081bab#583 | 0           |
| 0x140081b8e#318 | 0x140081bab#583 | 1           |
| 0x140081b24#39  | 0x140081bab#607 | 0           |
| 0x140081b79#606 | 0x140081bab#607 | 1           |
| 0x140081bab#335 | 0x140081bb0#340 | 0           |
| 0x140081bb0#340 | 0x140081bb3#345 | 1           |
| 0x140081bab#335 | 0x140081bb5#346 | 0           |
| 0x140081bb5#346 | 0x140081bb9#350 | 0           |
| 0x140081bb9#350 | 0x140081bbd#357 | 0           |
| 0x140081bbd#883 | 0x140081bbd#359 | 1           |
| 0x140081bab#335 | 0x140081bbd#359 | 2           |
| 0x140081bbd#357 | 0x140081bbd#883 | 0           |
| 0x140081b79#154 | 0x140081bc6#369 | 1           |
| 0x140081bce#874 | 0x140081bce#180 | 1           |
| 0x140081b79#606 | 0x140081bce#608 | 0           |
| 0x140081bab#607 | 0x140081bce#608 | 1           |
| 0x140081b79#606 | 0x140081bce#608 | 2           |
| 0x140081b82#623 | 0x140081bce#624 | 0           |
| 0x140081bb9#350 | 0x140081bce#624 | 1           |
| 0x140081bc6#369 | 0x140081bce#624 | 2           |
| 0x140081b33#44  | 0x140081bd2#181 | 0           |
| 0x140081bd6#875 | 0x140081bd6#185 | 1           |
| 0x140081bce#608 | 0x140081bd6#185 | 2           |
| 0x140081b09#19  | 0x140081be1#197 | 0           |
| 0x140081be1#197 | 0x140081be1#198 | 1           |
| 0x140081bce#624 | 0x140081be9#204 | 1           |
| 0x140081be3#199 | 0x140081be9#204 | 2           |
| 0x140081bd2#181 | 0x140081be9#204 | 3           |
| 0x140081b09#19  | 0x140081bee#205 | 0           |
| 0x140081bee#205 | 0x140081bf2#208 | 1           |
| 0x140081bf2#208 | 0x140081bf9#217 | 1           |
| 0x140081be3#199 | 0x140081bfb#218 | 0           |
| 0x140081bfb#884 | 0x140081bfb#219 | 1           |
| 0x140081bfb#218 | 0x140081bfb#884 | 0           |
| 0x140081be3#199 | 0x140081bff#223 | 0           |
| 0x140081bfb#219 | 0x140081bff#223 | 1           |
| 0x140081bff#223 | 0x140081c02#232 | 0           |
| 0x140081c02#232 | 0x140081c0a#249 | 0           |
| 0x140081c0a#249 | 0x140081c0a#251 | 1           |
| 0x140081b09#19  | 0x140081c0c#252 | 0           |
| 0x140081bfb#219 | 0x140081c10#256 | 1           |
| 0x140081c0c#252 | 0x140081c10#256 | 2           |
| 0x140081c02#232 | 0x140081c17#604 | 0           |
| 0x140081bab#607 | 0x140081c17#604 | 1           |
| 0x140081bce#624 | 0x140081c17#627 | 0           |
| 0x140081c1c#885 | 0x140081c1c#298 | 0           |
| 0x140081c1c#297 | 0x140081c1c#885 | 0           |
| 0x140081be3#199 | 0x140081c1e#609 | 0           |
| 0x140081c17#604 | 0x140081c1e#609 | 1           |
| 0x140081b05#871 | 0x140081c1e#613 | 0           |
| 0x140081c1c#876 | 0x140081c1e#613 | 1           |
| 0x140081bce#624 | 0x140081c1e#626 | 0           |
| 0x140081c17#627 | 0x140081c1e#626 | 1           |
| 0x140081c1e#613 | 0x140081c21#300 | 0           |
| 0x140081c21#886 | 0x140081c21#301 | 1           |
| 0x140081c1e#609 | 0x140081c21#302 | 1           |
| 0x140081c21#300 | 0x140081c21#886 | 0           |
| 0x140081bce#624 | 0x140081c2b#307 | 1           |
| 0x140081bd2#181 | 0x140081c2b#307 | 3           |
| 0x140081c30#625 | 0x140081c30#259 | 2           |
| 0x140081bce#624 | 0x140081c30#625 | 0           |
| 0x140081c1e#626 | 0x140081c30#625 | 1           |
| 0x140081bce#624 | 0x140081c30#625 | 2           |
| 0x140081c3d#877 | 0x140081c3d#268 | 1           |
| 0x140081b33#44  | 0x140081c3d#268 | 2           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x140081b09#19  | memory_read        | 1             |             |
| 0x140081b16#34  | conditional_branch |               | 1           |
| 0x140081b33#44  | memory_read        | 1             |             |
| 0x140081b43#75  | conditional_branch |               | 1           |
| 0x140081b58#101 | conditional_branch |               | 1           |
| 0x140081b69#135 | conditional_branch |               | 1           |
| 0x140081b75#152 | conditional_branch |               | 1           |
| 0x140081b80#166 | conditional_branch |               | 1           |
| 0x140081b8c#317 | conditional_branch |               | 1           |
| 0x140081b95#331 | conditional_branch |               | 1           |
| 0x140081bab#335 | direct_call        | 0             |             |
| 0x140081bb3#345 | conditional_branch |               | 1           |
| 0x140081bbd#359 | memory_write       | 1             | 2           |
| 0x140081bc6#369 | direct_call        | 0             |             |
| 0x140081bce#180 | memory_write       | 1             | 2           |
| 0x140081bd6#185 | memory_write       | 1             | 2           |
| 0x140081be1#198 | conditional_branch |               | 1           |
| 0x140081be3#199 | memory_read        | 1             |             |
| 0x140081be9#204 | direct_call        | 0             |             |
| 0x140081bf9#217 | conditional_branch |               | 1           |
| 0x140081bfb#219 | memory_read        | 1             |             |
| 0x140081c0a#251 | conditional_branch |               | 1           |
| 0x140081c10#256 | direct_call        | 0             |             |
| 0x140081c1c#298 | indirect_call      | 0             |             |
| 0x140081c21#301 | memory_write       | 1             | 2           |
| 0x140081c21#302 | direct_call        | 0             |             |
| 0x140081c2b#307 | direct_call        | 0             |             |
| 0x140081c30#259 | memory_write       | 1             | 2           |
| 0x140081c3d#268 | memory_write       | 1             | 2           |
| 0x140081c4f#383 | direct_call        | 0             |             |
| 0x140081c55#363 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type    |
|---------|---------|--------------|
| 0       | param_1 | /ulonglong * |
| 1       | param_2 | /ulonglong   |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x140081b09#872 | 0           |
| 1       | 0x140081b13#24  | 0           |
| 0       | 0x140081b33#873 | 0           |
| 1       | 0x140081b3d#58  | 0           |
| 1       | 0x140081b51#82  | 0           |
| 1       | 0x140081bce#180 | 2           |
| 0       | 0x140081bce#874 | 0           |
| 0       | 0x140081bd6#875 | 0           |
| 0       | 0x140081be3#199 | 1           |
| 0       | 0x140081c2b#307 | 2           |
| 0       | 0x140081c30#259 | 1           |
| 0       | 0x140081c3d#877 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x140081c4f to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140081c55 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x140081c4f to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140081c55 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

