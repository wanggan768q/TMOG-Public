## evidence_id

ev_a80626fd92f22876f0b7adf5404122278e118638351e90b148718d5d8b043d6a

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
| procedure | 0x14030bba0 |

## raw_result.value.procedure.address

0x14030bba0

## raw_result.value.procedure.name

FUN_14030bba0

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
| 0x14030bba0 | 0x14030be4f |

## raw_result.value.procedure.body.total_bytes

688

## raw_result.value.procedure.body.span_bytes

688

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_14030bba0()

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_48 @ Stack[-0x48]:8      | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8      | ghidra-function-database |
| undefined local_5f @ Stack[-0x5f]:1       | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined8 local_70 @ Stack[-0x70]:8      | ghidra-function-database |
| undefined8 local_78 @ Stack[-0x78]:8      | ghidra-function-database |
| undefined8 local_88 @ Stack[-0x88]:8      | ghidra-function-database |
| undefined1[16] local_98 @ Stack[-0x98]:16 | ghidra-function-database |
| undefined1[16] local_a8 @ Stack[-0xa8]:16 | ghidra-function-database |
| undefined8 local_b0 @ Stack[-0xb0]:8      | ghidra-function-database |
| undefined8 local_b8 @ Stack[-0xb8]:8      | ghidra-function-database |
| undefined1 local_c8 @ Stack[-0xc8]:1      | ghidra-function-database |
| undefined8 local_d0 @ Stack[-0xd0]:8      | ghidra-function-database |
| undefined8 local_d8 @ Stack[-0xd8]:8      | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8    | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8    | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14030bba0(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  longlong local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404c7ac0 ^ (ulonglong)auStack_f8;
  puVar12 = (ulonglong *)0x0;
  local_b8 = param_1;
  puVar6 = (undefined8 *)FUN_140309c30(local_68);
  local_b8 = puVar6;
  if (0xf < (ulonglong)puVar6[3]) {
    local_b8 = (undefined8 *)*puVar6;
  }
  local_b0 = puVar6[2];
  puVar7 = (ulonglong *)FUN_14031a500(&local_88,&local_b8);
  uVar11 = puVar7[2];
  if (puVar7[3] - uVar11 < 0xb) {
    local_d0 = 0xb;
    local_d8 = "deactivate-";
    puVar7 = (ulonglong *)FUN_14005d6d0(puVar7,0xb,local_c8,0);
  }
  else {
    puVar7[2] = uVar11 + 0xb;
    puVar13 = puVar7;
    if (0xf < puVar7[3]) {
      puVar13 = (ulonglong *)*puVar7;
    }
    if (((ulonglong *)0x1404493a2 < puVar13) ||
       ((char *)((longlong)puVar13 + uVar11) < "deactivate-")) {
      puVar12 = (ulonglong *)0xb;
    }
    else if ("deactivate-" < puVar13) {
      puVar12 = puVar13 + -0x28089273;
    }
    FUN_14035f420((char *)((longlong)puVar13 + 0xb),puVar13,uVar11 + 1);
    FUN_14035f420(puVar13,"deactivate-",puVar12);
    FUN_14035f420((char *)((longlong)puVar12 + (longlong)puVar13),
                  (char *)((longlong)puVar12 + 0x1404493a3),0xb - (longlong)puVar12);
  }
  local_a8 = *puVar7;
  uStack_a0 = puVar7[1];
  local_98 = puVar7[2];
  uStack_90 = puVar7[3];
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  *(char *)puVar7 = '\0';
  puVar8 = (undefined4 *)FUN_1400013f0(&local_a8,".json",5);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(undefined4 *)param_1 = *puVar8;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = puVar8[5];
  uVar3 = puVar8[6];
  uVar4 = puVar8[7];
  *(undefined4 *)(param_1 + 2) = puVar8[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0xf;
  *(undefined1 *)puVar8 = 0;
  if (uStack_90 < 0x10) {
LAB_14030bd7e:
    local_98 = 0;
    uStack_90 = 0xf;
    local_a8 = local_a8 & 0xffffffffffffff00;
    if (0xf < local_70) {
      uVar11 = local_70 + 1;
      lVar5 = CONCAT71(uStack_87,local_88);
      lVar9 = lVar5;
      if (0xfff < uVar11) {
        lVar9 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar9) - 8U) goto LAB_14030be41;
        uVar11 = local_70 + 0x28;
      }
      thunk_FUN_140327e20(lVar9,uVar11);
    }
    local_78 = 0;
    local_70 = 0xf;
    local_88 = 0;
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      lVar9 = local_68[0];
      if (0xfff < uVar11) {
        lVar9 = *(longlong *)(local_68[0] + -8);
        if (0x1f < (local_68[0] - lVar9) - 8U) goto LAB_14030be48;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_140327e20(lVar9,uVar11);
    }
    return param_1;
  }
  uVar10 = uStack_90 + 1;
  uVar11 = local_a8;
  if (uVar10 < 0x1000) {
LAB_14030bd79:
    thunk_FUN_140327e20(uVar11,uVar10);
    goto LAB_14030bd7e;
  }
  uVar11 = *(ulonglong *)(local_a8 - 8);
  if ((local_a8 - uVar11) - 8 < 0x20) {
    uVar10 = uStack_90 + 0x28;
    goto LAB_14030bd79;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
LAB_14030be41:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
LAB_14030be48:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  pcVar1 = (code *)swi(3);
  puVar6 = (undefined8 *)(*pcVar1)();
  return puVar6;
}



## raw_result.value.assembly

0x14030bba0: MOV qword ptr [RSP + 0x18], RBX,0x14030bba5: PUSH RBP,0x14030bba6: PUSH RSI,0x14030bba7: PUSH RDI,0x14030bba8: PUSH R12,0x14030bbaa: PUSH R13,0x14030bbac: PUSH R14,0x14030bbae: PUSH R15,0x14030bbb0: LEA RBP, [RSP + -0x27],0x14030bbb5: SUB RSP, 0xc0,0x14030bbbc: MOV RAX, qword ptr [0x1404c7ac0],0x14030bbc3: XOR RAX, RSP,0x14030bbc6: MOV qword ptr [RBP + 0x17], RAX,0x14030bbca: MOV R13, RCX,0x14030bbcd: MOV qword ptr [RBP + -0x59], RCX,0x14030bbd1: XOR R12D, R12D,0x14030bbd4: LEA RCX, [RBP + -0x9],0x14030bbd8: CALL 0x140309c30,0x14030bbdd: NOP,0x14030bbde: CMP qword ptr [RAX + 0x18], 0xf,0x14030bbe3: JBE 0x14030bbea,0x14030bbe5: MOV RCX, qword ptr [RAX],0x14030bbe8: JMP 0x14030bbed,0x14030bbea: MOV RCX, RAX,0x14030bbed: MOV qword ptr [RBP + -0x59], RCX,0x14030bbf1: MOV RAX, qword ptr [RAX + 0x10],0x14030bbf5: MOV qword ptr [RBP + -0x51], RAX,0x14030bbf9: LEA RDX, [RBP + -0x59],0x14030bbfd: LEA RCX, [RBP + -0x29],0x14030bc01: CALL 0x14031a500,0x14030bc06: MOV RBX, RAX,0x14030bc09: MOV R8, qword ptr [RAX + 0x10],0x14030bc0d: MOV RCX, qword ptr [RAX + 0x18],0x14030bc11: MOV RAX, RCX,0x14030bc14: SUB RAX, R8,0x14030bc17: CMP RAX, 0xb,0x14030bc1b: JC 0x14030bca3,0x14030bc21: LEA RAX, [R8 + 0xb],0x14030bc25: MOV qword ptr [RBX + 0x10], RAX,0x14030bc29: CMP RCX, 0xf,0x14030bc2d: JBE 0x14030bc34,0x14030bc2f: MOV RDI, qword ptr [RBX],0x14030bc32: JMP 0x14030bc37,0x14030bc34: MOV RDI, RBX,0x14030bc37: LEA RAX, [0x1404493a3],0x14030bc3e: MOV R15D, 0xb,0x14030bc44: LEA R14, [0x140449398],0x14030bc4b: CMP RAX, RDI,0x14030bc4e: JBE 0x14030bc6b,0x14030bc50: LEA RAX, [RDI + R8*0x1],0x14030bc54: CMP R14, RAX,0x14030bc57: JA 0x14030bc6b,0x14030bc59: CMP RDI, R14,0x14030bc5c: JA 0x14030bc63,0x14030bc5e: MOV RSI, R12,0x14030bc61: JMP 0x14030bc6e,0x14030bc63: MOV RSI, RDI,0x14030bc66: SUB RSI, R14,0x14030bc69: JMP 0x14030bc6e,0x14030bc6b: MOV RSI, R15,0x14030bc6e: INC R8,0x14030bc71: LEA RCX, [RDI + 0xb],0x14030bc75: MOV RDX, RDI,0x14030bc78: CALL 0x14035f420,0x14030bc7d: MOV R8, RSI,0x14030bc80: MOV RDX, R14,0x14030bc83: MOV RCX, RDI,0x14030bc86: CALL 0x14035f420,0x14030bc8b: SUB R15, RSI,0x14030bc8e: LEA RDX, [R14 + 0xb],0x14030bc92: ADD RDX, RSI,0x14030bc95: LEA RCX, [RSI + RDI*0x1],0x14030bc99: MOV R8, R15,0x14030bc9c: CALL 0x14035f420,0x14030bca1: JMP 0x14030bcd0,0x14030bca3: MOV R15D, 0xb,0x14030bca9: MOV qword ptr [RSP + 0x28], R15,0x14030bcae: LEA R14, [0x140449398],0x14030bcb5: MOV qword ptr [RSP + 0x20], R14,0x14030bcba: XOR R9D, R9D,0x14030bcbd: MOVZX R8D, byte ptr [RBP + -0x69],0x14030bcc2: MOV EDX, R15D,0x14030bcc5: MOV RCX, RBX,0x14030bcc8: CALL 0x14005d6d0,0x14030bccd: MOV RBX, RAX,0x14030bcd0: XORPS XMM0, XMM0,0x14030bcd3: MOVUPS xmmword ptr [RBP + -0x49], XMM0,0x14030bcd7: MOV qword ptr [RBP + -0x39], R12,0x14030bcdb: MOV qword ptr [RBP + -0x31], R12,0x14030bcdf: MOVUPS XMM0, xmmword ptr [RBX],0x14030bce2: MOVUPS xmmword ptr [RBP + -0x49], XMM0,0x14030bce6: MOVUPS XMM1, xmmword ptr [RBX + 0x10],0x14030bcea: MOVUPS xmmword ptr [RBP + -0x39], XMM1,0x14030bcee: MOV qword ptr [RBX + 0x10], R12,0x14030bcf2: MOV qword ptr [RBX + 0x18], 0xf,0x14030bcfa: MOV byte ptr [RBX], 0x0,0x14030bcfd: MOV R8D, 0x5,0x14030bd03: LEA RDX, [0x14044938c],0x14030bd0a: LEA RCX, [RBP + -0x49],0x14030bd0e: CALL 0x1400013f0,0x14030bd13: XORPS XMM0, XMM0,0x14030bd16: MOVUPS xmmword ptr [R13], XMM0,0x14030bd1b: MOV qword ptr [R13 + 0x10], R12,0x14030bd1f: MOV qword ptr [R13 + 0x18], R12,0x14030bd23: MOVUPS XMM0, xmmword ptr [RAX],0x14030bd26: MOVUPS xmmword ptr [R13], XMM0,0x14030bd2b: MOVUPS XMM1, xmmword ptr [RAX + 0x10],0x14030bd2f: MOVUPS xmmword ptr [R13 + 0x10], XMM1,0x14030bd34: MOV qword ptr [RAX + 0x10], R12,0x14030bd38: MOV qword ptr [RAX + 0x18], 0xf,0x14030bd40: MOV byte ptr [RAX], 0x0,0x14030bd43: MOV RDX, qword ptr [RBP + -0x31],0x14030bd47: CMP RDX, 0xf,0x14030bd4b: JBE 0x14030bd7e,0x14030bd4d: INC RDX,0x14030bd50: MOV RCX, qword ptr [RBP + -0x49],0x14030bd54: CMP RDX, 0x1000,0x14030bd5b: JC 0x14030bd79,0x14030bd5d: MOV RAX, qword ptr [RCX + -0x8],0x14030bd61: SUB RCX, RAX,0x14030bd64: SUB RCX, 0x8,0x14030bd68: CMP RCX, 0x1f,0x14030bd6c: JA 0x14030be3a,0x14030bd72: ADD RDX, 0x27,0x14030bd76: MOV RCX, RAX,0x14030bd79: CALL 0x1403272f0,0x14030bd7e: MOV qword ptr [RBP + -0x39], R12,0x14030bd82: MOV qword ptr [RBP + -0x31], 0xf,0x14030bd8a: MOV byte ptr [RBP + -0x49], 0x0,0x14030bd8e: MOV RDX, qword ptr [RBP + -0x11],0x14030bd92: CMP RDX, 0xf,0x14030bd96: JBE 0x14030bdc9,0x14030bd98: INC RDX,0x14030bd9b: MOV RCX, qword ptr [RBP + -0x29],0x14030bd9f: CMP RDX, 0x1000,0x14030bda6: JC 0x14030bdc4,0x14030bda8: MOV RAX, qword ptr [RCX + -0x8],0x14030bdac: SUB RCX, RAX,0x14030bdaf: SUB RCX, 0x8,0x14030bdb3: CMP RCX, 0x1f,0x14030bdb7: JA 0x14030be41,0x14030bdbd: ADD RDX, 0x27,0x14030bdc1: MOV RCX, RAX,0x14030bdc4: CALL 0x1403272f0,0x14030bdc9: MOV qword ptr [RBP + -0x19], R12,0x14030bdcd: MOV qword ptr [RBP + -0x11], 0xf,0x14030bdd5: MOV byte ptr [RBP + -0x29], 0x0,0x14030bdd9: MOV RDX, qword ptr [RBP + 0xf],0x14030bddd: CMP RDX, 0xf,0x14030bde1: JBE 0x14030be10,0x14030bde3: INC RDX,0x14030bde6: MOV RCX, qword ptr [RBP + -0x9],0x14030bdea: CMP RDX, 0x1000,0x14030bdf1: JC 0x14030be0b,0x14030bdf3: MOV RAX, qword ptr [RCX + -0x8],0x14030bdf7: SUB RCX, RAX,0x14030bdfa: SUB RCX, 0x8,0x14030bdfe: CMP RCX, 0x1f,0x14030be02: JA 0x14030be48,0x14030be04: ADD RDX, 0x27,0x14030be08: MOV RCX, RAX,0x14030be0b: CALL 0x1403272f0,0x14030be10: MOV RAX, R13,0x14030be13: MOV RCX, qword ptr [RBP + 0x17],0x14030be17: XOR RCX, RSP,0x14030be1a: CALL 0x140327740,0x14030be1f: MOV RBX, qword ptr [RSP + 0x110],0x14030be27: ADD RSP, 0xc0,0x14030be2e: POP R15,0x14030be30: POP R14,0x14030be32: POP R13,0x14030be34: POP R12,0x14030be36: POP RDI,0x14030be37: POP RSI,0x14030be38: POP RBP,0x14030be39: RET,0x14030be3a: MOV ECX, 0x5,0x14030be3f: INT 0x29,0x14030be41: MOV ECX, 0x5,0x14030be46: INT 0x29,0x14030be48: MOV ECX, 0x5,0x14030be4d: INT 0x29,0x14030be4f: INT3

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f5580 | FUN_1401f5580 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1400013f0 | FUN_1400013f0           | [object Object] | [object Object] |
| 0x14005d6d0 | FUN_14005d6d0           | [object Object] | [object Object] |
| 0x140309c30 | FUN_140309c30           | [object Object] | [object Object] |
| 0x14031a500 | FUN_14031a500           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420           | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f55e3    | 0x14030bba0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6e3c    | 0x14030bba0    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14030bba0    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030bbb0    | stack:0xffffffffffffffa1 | [object Object]  |                  | [object Object] |
| 0x14030bbbc    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x14030bbc6    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030bbcd    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x14030bbd4    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x14030bbd8    | 0x140309c30              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bbe3    | 0x14030bbea              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bbe8    | 0x14030bbed              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bbed    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x14030bbf5    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x14030bbf9    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x14030bbfd    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x14030bc01    | 0x14031a500              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc1b    | 0x14030bca3              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc2d    | 0x14030bc34              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc32    | 0x14030bc37              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc37    | 0x1404493a3              | [object Object]  |                  | [object Object] |
| 0x14030bc44    | 0x140449398              | [object Object]  |                  | [object Object] |
| 0x14030bc4e    | 0x14030bc6b              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc57    | 0x14030bc6b              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc5c    | 0x14030bc63              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc61    | 0x14030bc6e              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc69    | 0x14030bc6e              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc78    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc80    | 0x140449398              | [object Object]  |                  | [object Object] |
| 0x14030bc86    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc8e    | 0x1404493a3              | [object Object]  |                  | [object Object] |
| 0x14030bc92    | 0x1404493a3              | [object Object]  |                  | [object Object] |
| 0x14030bc9c    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bca1    | 0x14030bcd0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bca9    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x14030bcae    | 0x140449398              | [object Object]  |                  | [object Object] |
| 0x14030bcb5    | stack:0xffffffffffffff28 | [object Object]  |                  | [object Object] |
| 0x14030bcb5    | 0x140449398              | [object Object]  |                  | [object Object] |
| 0x14030bcbd    | stack:0xffffffffffffff38 | [object Object]  |                  | [object Object] |
| 0x14030bcc8    | 0x14005d6d0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bcd3    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x14030bcd7    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x14030bcdb    | stack:0xffffffffffffff70 | [object Object]  |                  | [object Object] |
| 0x14030bce2    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x14030bcea    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x14030bd03    | 0x14044938c              | [object Object]  |                  | [object Object] |
| 0x14030bd0a    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x14030bd0e    | 0x1400013f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd43    | stack:0xffffffffffffff70 | [object Object]  |                  | [object Object] |
| 0x14030bd4b    | 0x14030bd7e              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd50    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x14030bd5b    | 0x14030bd79              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd6c    | 0x14030be3a              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd79    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd7e    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x14030bd82    | stack:0xffffffffffffff70 | [object Object]  |                  | [object Object] |
| 0x14030bd8a    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x14030bd8e    | stack:0xffffffffffffff90 | [object Object]  |                  | [object Object] |
| 0x14030bd96    | 0x14030bdc9              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd9b    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x14030bda6    | 0x14030bdc4              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bdb7    | 0x14030be41              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bdc4    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bdc9    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x14030bdcd    | stack:0xffffffffffffff90 | [object Object]  |                  | [object Object] |
| 0x14030bdd5    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x14030bdd9    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x14030bde1    | 0x14030be10              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bde6    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x14030bdf1    | 0x14030be0b              | [object Object]  | [object Object]  | [object Object] |
| 0x14030be02    | 0x14030be48              | [object Object]  | [object Object]  | [object Object] |
| 0x14030be0b    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030be13    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030be1a    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x14030be1f    | stack:0x10               | [object Object]  |                  | [object Object] |

## raw_result.value.referenced_strings

| address     | value       | source_address |
|-------------|-------------|----------------|
| 0x14044938c | .json       | 0x14030bd03    |
| 0x140449398 | deactivate- | 0x14030bc37    |
| 0x140449398 | deactivate- | 0x14030bc44    |
| 0x140449398 | deactivate- | 0x14030bc80    |
| 0x140449398 | deactivate- | 0x14030bc8e    |
| 0x140449398 | deactivate- | 0x14030bc92    |
| 0x140449398 | deactivate- | 0x14030bcae    |
| 0x140449398 | deactivate- | 0x14030bcb5    |

## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1400013f0 | FUN_1400013f0           | 0x14030bd0e    |
| 0x14005d6d0 | FUN_14005d6d0           | 0x14030bcc8    |
| 0x140309c30 | FUN_140309c30           | 0x14030bbd8    |
| 0x14030bbea | LAB_14030bbea           | 0x14030bbe3    |
| 0x14030bbed | LAB_14030bbed           | 0x14030bbe8    |
| 0x14030bc34 | LAB_14030bc34           | 0x14030bc2d    |
| 0x14030bc37 | LAB_14030bc37           | 0x14030bc32    |
| 0x14030bc63 | LAB_14030bc63           | 0x14030bc5c    |
| 0x14030bc6b | LAB_14030bc6b           | 0x14030bc4e    |
| 0x14030bc6b | LAB_14030bc6b           | 0x14030bc57    |
| 0x14030bc6e | LAB_14030bc6e           | 0x14030bc61    |
| 0x14030bc6e | LAB_14030bc6e           | 0x14030bc69    |
| 0x14030bca3 | LAB_14030bca3           | 0x14030bc1b    |
| 0x14030bcd0 | LAB_14030bcd0           | 0x14030bca1    |
| 0x14030bd79 | LAB_14030bd79           | 0x14030bd5b    |
| 0x14030bd7e | LAB_14030bd7e           | 0x14030bd4b    |
| 0x14030bdc4 | LAB_14030bdc4           | 0x14030bda6    |
| 0x14030bdc9 | LAB_14030bdc9           | 0x14030bd96    |
| 0x14030be0b | LAB_14030be0b           | 0x14030bdf1    |
| 0x14030be10 | LAB_14030be10           | 0x14030bde1    |
| 0x14030be3a | LAB_14030be3a           | 0x14030bd6c    |
| 0x14030be41 | LAB_14030be41           | 0x14030bdb7    |
| 0x14030be48 | LAB_14030be48           | 0x14030be02    |
| 0x14031a500 | FUN_14031a500           | 0x14030bc01    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x14030bd79    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x14030bdc4    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x14030be0b    |
| 0x140327740 | __security_check_cookie | 0x14030be1a    |
| 0x14035f420 | FUN_14035f420           | 0x14030bc78    |
| 0x14035f420 | FUN_14035f420           | 0x14030bc86    |
| 0x14035f420 | FUN_14035f420           | 0x14030bc9c    |
| 0x14044938c | s_.json_14044938c       | 0x14030bd03    |
| 0x140449398 | s_deactivate-_140449398 | 0x14030bc44    |
| 0x140449398 | s_deactivate-_140449398 | 0x14030bc80    |
| 0x140449398 | s_deactivate-_140449398 | 0x14030bcae    |
| 0x140449398 | s_deactivate-_140449398 | 0x14030bcb5    |
| 0x1404493a3 | s__140449398+0xb        | 0x14030bc37    |
| 0x1404493a3 | s__140449398+0xb        | 0x14030bc8e    |
| 0x1404493a3 | s__140449398+0xb        | 0x14030bc92    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x14030bbbc    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14030bba0 | 0x14030bbe5 | 0x14030bbe5,0x14030bbea |
| 0x14030bbe5 | 0x14030bbea | 0x14030bbed             |
| 0x14030bbea | 0x14030bbed | 0x14030bbed             |
| 0x14030bbed | 0x14030bc21 | 0x14030bc21,0x14030bca3 |
| 0x14030bc21 | 0x14030bc2f | 0x14030bc2f,0x14030bc34 |
| 0x14030bc2f | 0x14030bc34 | 0x14030bc37             |
| 0x14030bc34 | 0x14030bc37 | 0x14030bc37             |
| 0x14030bc37 | 0x14030bc50 | 0x14030bc50,0x14030bc6b |
| 0x14030bc50 | 0x14030bc59 | 0x14030bc59,0x14030bc6b |
| 0x14030bc59 | 0x14030bc5e | 0x14030bc5e,0x14030bc63 |
| 0x14030bc5e | 0x14030bc63 | 0x14030bc6e             |
| 0x14030bc63 | 0x14030bc6b | 0x14030bc6e             |
| 0x14030bc6b | 0x14030bc6e | 0x14030bc6e             |
| 0x14030bc6e | 0x14030bca3 | 0x14030bcd0             |
| 0x14030bca3 | 0x14030bcd0 | 0x14030bcd0             |
| 0x14030bcd0 | 0x14030bd4d | 0x14030bd4d,0x14030bd7e |
| 0x14030bd4d | 0x14030bd5d | 0x14030bd5d,0x14030bd79 |
| 0x14030bd5d | 0x14030bd72 | 0x14030bd72,0x14030be3a |
| 0x14030bd72 | 0x14030bd79 | 0x14030bd79             |
| 0x14030bd79 | 0x14030bd7e | 0x14030bd7e             |
| 0x14030bd7e | 0x14030bd98 | 0x14030bd98,0x14030bdc9 |
| 0x14030bd98 | 0x14030bda8 | 0x14030bda8,0x14030bdc4 |
| 0x14030bda8 | 0x14030bdbd | 0x14030bdbd,0x14030be41 |
| 0x14030bdbd | 0x14030bdc4 | 0x14030bdc4             |
| 0x14030bdc4 | 0x14030bdc9 | 0x14030bdc9             |
| 0x14030bdc9 | 0x14030bde3 | 0x14030bde3,0x14030be10 |
| 0x14030bde3 | 0x14030bdf3 | 0x14030bdf3,0x14030be0b |
| 0x14030bdf3 | 0x14030be04 | 0x14030be04,0x14030be48 |
| 0x14030be04 | 0x14030be0b | 0x14030be0b             |
| 0x14030be0b | 0x14030be10 | 0x14030be10             |
| 0x14030be10 | 0x14030be3a |                         |
| 0x14030be3a | 0x14030be41 | 0x14030be41             |
| 0x14030be41 | 0x14030be48 | 0x14030be48             |
| 0x14030be48 | 0x14030be50 |                         |

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

| id               | address     | sequence | opcode     | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x14030bbb5#2067 | 0x14030bbb5 | 2067     | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbc3#38   | 0x14030bbc3 | 38       | INT_XOR    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbc3#2109 | 0x14030bbc3 | 2109     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbd1#1049 | 0x14030bbd1 | 1049     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbd4#2068 | 0x14030bbd4 | 2068     | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#66   | 0x14030bbd8 | 66       | CALL       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1485 | 0x14030bbd8 | 1485     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1566 | 0x14030bbd8 | 1566     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1586 | 0x14030bbd8 | 1586     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1606 | 0x14030bbd8 | 1606     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1626 | 0x14030bbd8 | 1626     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1765 | 0x14030bbd8 | 1765     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1785 | 0x14030bbd8 | 1785     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1805 | 0x14030bbd8 | 1805     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1825 | 0x14030bbd8 | 1825     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1845 | 0x14030bbd8 | 1845     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1865 | 0x14030bbd8 | 1865     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1885 | 0x14030bbd8 | 1885     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#2108 | 0x14030bbd8 | 2108     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbd8#2110 | 0x14030bbd8 | 2110     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbde#68   | 0x14030bbde | 68       | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbde#2069 | 0x14030bbde | 2069     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bbe3#79   | 0x14030bbe3 | 79       | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbe3#80   | 0x14030bbe3 | 80       | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bbe3#2105 | 0x14030bbe3 | 2105     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbe3#2111 | 0x14030bbe3 | 2111     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbe5#81   | 0x14030bbe5 | 81       | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbe5#2112 | 0x14030bbe5 | 2112     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbe8#83   | 0x14030bbe8 | 83       | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x14030bbe8#2104 | 0x14030bbe8 | 2104     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbed#953  | 0x14030bbed | 953      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbf1#88   | 0x14030bbf1 | 88       | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbf1#2070 | 0x14030bbf1 | 2070     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bbf9#2071 | 0x14030bbf9 | 2071     | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbfd#2072 | 0x14030bbfd | 2072     | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#99   | 0x14030bc01 | 99       | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc01#1486 | 0x14030bc01 | 1486     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1567 | 0x14030bc01 | 1567     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1587 | 0x14030bc01 | 1587     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1607 | 0x14030bc01 | 1607     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1627 | 0x14030bc01 | 1627     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1647 | 0x14030bc01 | 1647     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1766 | 0x14030bc01 | 1766     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1786 | 0x14030bc01 | 1786     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1806 | 0x14030bc01 | 1806     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1826 | 0x14030bc01 | 1826     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1846 | 0x14030bc01 | 1846     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1866 | 0x14030bc01 | 1866     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1886 | 0x14030bc01 | 1886     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#2113 | 0x14030bc01 | 2113     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc09#102  | 0x14030bc09 | 102      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc09#2073 | 0x14030bc09 | 2073     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc0d#105  | 0x14030bc0d | 105      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc0d#2074 | 0x14030bc0d | 2074     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc14#110  | 0x14030bc14 | 110      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc17#118  | 0x14030bc17 | 118      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc1b#127  | 0x14030bc1b | 127      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bc21#128  | 0x14030bc21 | 128      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc25#132  | 0x14030bc25 | 132      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bc25#1501 | 0x14030bc25 | 1501     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc25#2075 | 0x14030bc25 | 2075     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc2d#143  | 0x14030bc2d | 143      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc2d#144  | 0x14030bc2d | 144      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bc2d#2107 | 0x14030bc2d | 2107     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc2f#145  | 0x14030bc2f | 145      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc2f#2115 | 0x14030bc2f | 2115     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc32#147  | 0x14030bc32 | 147      | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x14030bc32#2106 | 0x14030bc32 | 2106     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc37#989  | 0x14030bc37 | 989      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc4e#161  | 0x14030bc4e | 161      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc4e#162  | 0x14030bc4e | 162      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bc4e#2066 | 0x14030bc4e | 2066     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc50#164  | 0x14030bc50 | 164      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc50#2116 | 0x14030bc50 | 2116     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc50#2117 | 0x14030bc50 | 2117     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc57#177  | 0x14030bc57 | 177      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc57#178  | 0x14030bc57 | 178      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bc57#2062 | 0x14030bc57 | 2062     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc5c#189  | 0x14030bc5c | 189      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc5c#191  | 0x14030bc5c | 191      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bc5c#2063 | 0x14030bc5c | 2063     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc66#2076 | 0x14030bc66 | 2076     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc69#678  | 0x14030bc69 | 678      | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x14030bc6b#679  | 0x14030bc6b | 679      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc6e#195  | 0x14030bc6e | 195      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc6e#987  | 0x14030bc6e | 987      | MULTIEQUAL | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc71#202  | 0x14030bc71 | 202      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc71#2118 | 0x14030bc71 | 2118     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc71#2119 | 0x14030bc71 | 2119     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc78#207  | 0x14030bc78 | 207      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14030bc78#1488 | 0x14030bc78 | 1488     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1569 | 0x14030bc78 | 1569     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1589 | 0x14030bc78 | 1589     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1629 | 0x14030bc78 | 1629     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1649 | 0x14030bc78 | 1649     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1768 | 0x14030bc78 | 1768     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1788 | 0x14030bc78 | 1788     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1808 | 0x14030bc78 | 1808     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1828 | 0x14030bc78 | 1828     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1848 | 0x14030bc78 | 1848     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1868 | 0x14030bc78 | 1868     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1888 | 0x14030bc78 | 1888     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#213  | 0x14030bc86 | 213      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14030bc86#1489 | 0x14030bc86 | 1489     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1570 | 0x14030bc86 | 1570     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1590 | 0x14030bc86 | 1590     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1630 | 0x14030bc86 | 1630     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1650 | 0x14030bc86 | 1650     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1769 | 0x14030bc86 | 1769     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1789 | 0x14030bc86 | 1789     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1809 | 0x14030bc86 | 1809     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1829 | 0x14030bc86 | 1829     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1849 | 0x14030bc86 | 1849     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1869 | 0x14030bc86 | 1869     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1889 | 0x14030bc86 | 1889     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#2064 | 0x14030bc86 | 2064     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc8b#216  | 0x14030bc8b | 216      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc8b#2120 | 0x14030bc8b | 2120     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc92#227  | 0x14030bc92 | 227      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc92#2121 | 0x14030bc92 | 2121     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc92#2122 | 0x14030bc92 | 2122     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc95#235  | 0x14030bc95 | 235      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc95#2123 | 0x14030bc95 | 2123     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc95#2124 | 0x14030bc95 | 2124     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc95#2125 | 0x14030bc95 | 2125     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc9c#240  | 0x14030bc9c | 240      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14030bc9c#1490 | 0x14030bc9c | 1490     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1571 | 0x14030bc9c | 1571     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1591 | 0x14030bc9c | 1591     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1631 | 0x14030bc9c | 1631     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1651 | 0x14030bc9c | 1651     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1770 | 0x14030bc9c | 1770     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1790 | 0x14030bc9c | 1790     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1810 | 0x14030bc9c | 1810     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1830 | 0x14030bc9c | 1830     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1850 | 0x14030bc9c | 1850     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1870 | 0x14030bc9c | 1870     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1890 | 0x14030bc9c | 1890     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bca1#241  | 0x14030bca1 | 241      | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x14030bca9#684  | 0x14030bca9 | 684      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bcb5#688  | 0x14030bcb5 | 688      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bcc8#708  | 0x14030bcc8 | 708      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x14030bcc8#1487 | 0x14030bcc8 | 1487     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1568 | 0x14030bcc8 | 1568     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1588 | 0x14030bcc8 | 1588     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1628 | 0x14030bcc8 | 1628     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1648 | 0x14030bcc8 | 1648     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1767 | 0x14030bcc8 | 1767     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1787 | 0x14030bcc8 | 1787     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1807 | 0x14030bcc8 | 1807     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1827 | 0x14030bcc8 | 1827     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1847 | 0x14030bcc8 | 1847     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1867 | 0x14030bcc8 | 1867     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1887 | 0x14030bcc8 | 1887     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#2114 | 0x14030bcc8 | 2114     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bcd0#980  | 0x14030bcd0 | 980      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1525 | 0x14030bcd0 | 1525     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1585 | 0x14030bcd0 | 1585     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1605 | 0x14030bcd0 | 1605     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1645 | 0x14030bcd0 | 1645     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1665 | 0x14030bcd0 | 1665     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1783 | 0x14030bcd0 | 1783     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1804 | 0x14030bcd0 | 1804     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1823 | 0x14030bcd0 | 1823     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1843 | 0x14030bcd0 | 1843     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1864 | 0x14030bcd0 | 1864     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1884 | 0x14030bcd0 | 1884     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1904 | 0x14030bcd0 | 1904     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcdf#2057 | 0x14030bcdf | 2057     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcdf#2058 | 0x14030bcdf | 2058     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcdf#2077 | 0x14030bcdf | 2077     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bce6#2059 | 0x14030bce6 | 2059     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bce6#2060 | 0x14030bce6 | 2060     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bce6#2078 | 0x14030bce6 | 2078     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bce6#2079 | 0x14030bce6 | 2079     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bcee#276  | 0x14030bcee | 276      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bcee#1502 | 0x14030bcee | 1502     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcee#2080 | 0x14030bcee | 2080     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bcf2#279  | 0x14030bcf2 | 279      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bcf2#1503 | 0x14030bcf2 | 1503     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcf2#2081 | 0x14030bcf2 | 2081     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bcfa#281  | 0x14030bcfa | 281      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bcfa#1504 | 0x14030bcfa | 1504     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcfa#2126 | 0x14030bcfa | 2126     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd0a#2082 | 0x14030bd0a | 2082     | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#288  | 0x14030bd0e | 288      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030bd0e#1491 | 0x14030bd0e | 1491     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1572 | 0x14030bd0e | 1572     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1592 | 0x14030bd0e | 1592     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1632 | 0x14030bd0e | 1632     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1652 | 0x14030bd0e | 1652     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1678 | 0x14030bd0e | 1678     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1702 | 0x14030bd0e | 1702     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1726 | 0x14030bd0e | 1726     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1750 | 0x14030bd0e | 1750     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1771 | 0x14030bd0e | 1771     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1791 | 0x14030bd0e | 1791     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1811 | 0x14030bd0e | 1811     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1831 | 0x14030bd0e | 1831     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1851 | 0x14030bd0e | 1851     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1871 | 0x14030bd0e | 1871     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1891 | 0x14030bd0e | 1891     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#2061 | 0x14030bd0e | 2061     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd0e#2127 | 0x14030bd0e | 2127     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd16#1482 | 0x14030bd16 | 1482     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd16#1483 | 0x14030bd16 | 1483     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd16#1518 | 0x14030bd16 | 1518     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd16#1519 | 0x14030bd16 | 1519     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd16#2083 | 0x14030bd16 | 2083     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd1b#297  | 0x14030bd1b | 297      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd1b#1505 | 0x14030bd1b | 1505     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd1b#2084 | 0x14030bd1b | 2084     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd1f#300  | 0x14030bd1f | 300      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd1f#1506 | 0x14030bd1f | 1506     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd1f#2085 | 0x14030bd1f | 2085     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd23#1447 | 0x14030bd23 | 1447     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd23#1448 | 0x14030bd23 | 1448     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd23#1450 | 0x14030bd23 | 1450     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd23#1452 | 0x14030bd23 | 1452     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd23#2086 | 0x14030bd23 | 2086     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd23#2087 | 0x14030bd23 | 2087     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd23#2088 | 0x14030bd23 | 2088     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd26#1454 | 0x14030bd26 | 1454     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd26#1455 | 0x14030bd26 | 1455     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd26#1456 | 0x14030bd26 | 1456     | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#1457 | 0x14030bd26 | 1457     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd26#1459 | 0x14030bd26 | 1459     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd26#1460 | 0x14030bd26 | 1460     | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#1510 | 0x14030bd26 | 1510     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#1511 | 0x14030bd26 | 1511     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#1512 | 0x14030bd26 | 1512     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#1513 | 0x14030bd26 | 1513     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#2089 | 0x14030bd26 | 2089     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd26#2128 | 0x14030bd26 | 2128     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd26#2129 | 0x14030bd26 | 2129     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd26#2130 | 0x14030bd26 | 2130     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd26#2131 | 0x14030bd26 | 2131     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd26#2132 | 0x14030bd26 | 2132     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd26#2133 | 0x14030bd26 | 2133     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2b#1461 | 0x14030bd2b | 1461     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2b#1462 | 0x14030bd2b | 1462     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2b#1464 | 0x14030bd2b | 1464     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2b#1466 | 0x14030bd2b | 1466     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2b#2090 | 0x14030bd2b | 2090     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2b#2091 | 0x14030bd2b | 2091     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2b#2092 | 0x14030bd2b | 2092     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2b#2093 | 0x14030bd2b | 2093     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2f#1468 | 0x14030bd2f | 1468     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd2f#1469 | 0x14030bd2f | 1469     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd2f#1470 | 0x14030bd2f | 1470     | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#1471 | 0x14030bd2f | 1471     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd2f#1473 | 0x14030bd2f | 1473     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd2f#1474 | 0x14030bd2f | 1474     | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#1514 | 0x14030bd2f | 1514     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#1515 | 0x14030bd2f | 1515     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#1516 | 0x14030bd2f | 1516     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#1517 | 0x14030bd2f | 1517     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#2094 | 0x14030bd2f | 2094     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2f#2095 | 0x14030bd2f | 2095     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2f#2134 | 0x14030bd2f | 2134     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2f#2135 | 0x14030bd2f | 2135     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2f#2136 | 0x14030bd2f | 2136     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2f#2137 | 0x14030bd2f | 2137     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2f#2138 | 0x14030bd2f | 2138     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2f#2139 | 0x14030bd2f | 2139     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd34#321  | 0x14030bd34 | 321      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd34#1507 | 0x14030bd34 | 1507     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd34#2096 | 0x14030bd34 | 2096     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd34#2140 | 0x14030bd34 | 2140     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd38#324  | 0x14030bd38 | 324      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd38#1508 | 0x14030bd38 | 1508     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd38#2097 | 0x14030bd38 | 2097     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd38#2141 | 0x14030bd38 | 2141     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd40#326  | 0x14030bd40 | 326      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd40#1509 | 0x14030bd40 | 1509     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd40#2142 | 0x14030bd40 | 2142     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd4b#340  | 0x14030bd4b | 340      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd4b#341  | 0x14030bd4b | 341      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bd4d#343  | 0x14030bd4d | 343      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd54#354  | 0x14030bd54 | 354      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd5b#363  | 0x14030bd5b | 363      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bd5b#2103 | 0x14030bd5b | 2103     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd5d#364  | 0x14030bd5d | 364      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd5d#365  | 0x14030bd5d | 365      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd5d#2143 | 0x14030bd5d | 2143     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd61#369  | 0x14030bd61 | 369      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd64#378  | 0x14030bd64 | 378      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd6c#395  | 0x14030bd6c | 395      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd6c#397  | 0x14030bd6c | 397      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bd72#400  | 0x14030bd72 | 400      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#410  | 0x14030bd79 | 410      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd79#950  | 0x14030bd79 | 950      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#977  | 0x14030bd79 | 977      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1493 | 0x14030bd79 | 1493     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1574 | 0x14030bd79 | 1574     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1594 | 0x14030bd79 | 1594     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1634 | 0x14030bd79 | 1634     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1654 | 0x14030bd79 | 1654     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1680 | 0x14030bd79 | 1680     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1704 | 0x14030bd79 | 1704     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1728 | 0x14030bd79 | 1728     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1752 | 0x14030bd79 | 1752     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1773 | 0x14030bd79 | 1773     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1793 | 0x14030bd79 | 1793     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1813 | 0x14030bd79 | 1813     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1833 | 0x14030bd79 | 1833     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1853 | 0x14030bd79 | 1853     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1873 | 0x14030bd79 | 1873     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1893 | 0x14030bd79 | 1893     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#413  | 0x14030bd7e | 413      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd7e#1524 | 0x14030bd7e | 1524     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1584 | 0x14030bd7e | 1584     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1604 | 0x14030bd7e | 1604     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1644 | 0x14030bd7e | 1644     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1664 | 0x14030bd7e | 1664     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1690 | 0x14030bd7e | 1690     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1714 | 0x14030bd7e | 1714     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1782 | 0x14030bd7e | 1782     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1803 | 0x14030bd7e | 1803     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1822 | 0x14030bd7e | 1822     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1842 | 0x14030bd7e | 1842     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1863 | 0x14030bd7e | 1863     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1883 | 0x14030bd7e | 1883     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1903 | 0x14030bd7e | 1903     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd82#416  | 0x14030bd82 | 416      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd8a#1667 | 0x14030bd8a | 1667     | INT_AND    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd96#433  | 0x14030bd96 | 433      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd96#434  | 0x14030bd96 | 434      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bd98#436  | 0x14030bd98 | 436      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd9b#1764 | 0x14030bd9b | 1764     | PIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd9f#447  | 0x14030bd9f | 447      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bda6#456  | 0x14030bda6 | 456      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bda6#2102 | 0x14030bda6 | 2102     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bda8#457  | 0x14030bda8 | 457      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bda8#458  | 0x14030bda8 | 458      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bda8#2145 | 0x14030bda8 | 2145     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bdac#462  | 0x14030bdac | 462      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdaf#471  | 0x14030bdaf | 471      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdb7#488  | 0x14030bdb7 | 488      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdb7#490  | 0x14030bdb7 | 490      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bdbd#493  | 0x14030bdbd | 493      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#503  | 0x14030bdc4 | 503      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bdc4#947  | 0x14030bdc4 | 947      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#973  | 0x14030bdc4 | 973      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1495 | 0x14030bdc4 | 1495     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1576 | 0x14030bdc4 | 1576     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1596 | 0x14030bdc4 | 1596     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1636 | 0x14030bdc4 | 1636     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1656 | 0x14030bdc4 | 1656     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1682 | 0x14030bdc4 | 1682     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1706 | 0x14030bdc4 | 1706     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1730 | 0x14030bdc4 | 1730     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1754 | 0x14030bdc4 | 1754     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1855 | 0x14030bdc4 | 1855     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1875 | 0x14030bdc4 | 1875     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1895 | 0x14030bdc4 | 1895     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#506  | 0x14030bdc9 | 506      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bdc9#1521 | 0x14030bdc9 | 1521     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1581 | 0x14030bdc9 | 1581     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1601 | 0x14030bdc9 | 1601     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1641 | 0x14030bdc9 | 1641     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1661 | 0x14030bdc9 | 1661     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1687 | 0x14030bdc9 | 1687     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1711 | 0x14030bdc9 | 1711     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1735 | 0x14030bdc9 | 1735     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1759 | 0x14030bdc9 | 1759     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1860 | 0x14030bdc9 | 1860     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1880 | 0x14030bdc9 | 1880     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1900 | 0x14030bdc9 | 1900     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdcd#509  | 0x14030bdcd | 509      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bdd5#512  | 0x14030bdd5 | 512      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bde1#526  | 0x14030bde1 | 526      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bde1#527  | 0x14030bde1 | 527      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bde3#529  | 0x14030bde3 | 529      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdea#540  | 0x14030bdea | 540      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdf1#549  | 0x14030bdf1 | 549      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bdf1#2101 | 0x14030bdf1 | 2101     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bdf3#550  | 0x14030bdf3 | 550      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdf3#551  | 0x14030bdf3 | 551      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdf3#2147 | 0x14030bdf3 | 2147     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bdf7#555  | 0x14030bdf7 | 555      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdfa#564  | 0x14030bdfa | 564      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be02#581  | 0x14030be02 | 581      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be02#583  | 0x14030be02 | 583      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be04#586  | 0x14030be04 | 586      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#596  | 0x14030be0b | 596      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030be0b#944  | 0x14030be0b | 944      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#971  | 0x14030be0b | 971      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1498 | 0x14030be0b | 1498     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1579 | 0x14030be0b | 1579     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1599 | 0x14030be0b | 1599     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1639 | 0x14030be0b | 1639     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1659 | 0x14030be0b | 1659     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1685 | 0x14030be0b | 1685     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1709 | 0x14030be0b | 1709     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1733 | 0x14030be0b | 1733     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1757 | 0x14030be0b | 1757     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1778 | 0x14030be0b | 1778     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1818 | 0x14030be0b | 1818     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1838 | 0x14030be0b | 1838     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1898 | 0x14030be0b | 1898     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be10#597  | 0x14030be10 | 597      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be10#1520 | 0x14030be10 | 1520     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be39#655  | 0x14030be39 | 655      | RETURN     | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be39#1499 | 0x14030be39 | 1499     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be3f#666  | 0x14030be3f | 666      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#667  | 0x14030be3f | 667      | CALLIND    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be3f#1492 | 0x14030be3f | 1492     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1573 | 0x14030be3f | 1573     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1593 | 0x14030be3f | 1593     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1633 | 0x14030be3f | 1633     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1653 | 0x14030be3f | 1653     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1679 | 0x14030be3f | 1679     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1703 | 0x14030be3f | 1703     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1727 | 0x14030be3f | 1727     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1751 | 0x14030be3f | 1751     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1772 | 0x14030be3f | 1772     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1812 | 0x14030be3f | 1812     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1832 | 0x14030be3f | 1832     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1892 | 0x14030be3f | 1892     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#2144 | 0x14030be3f | 2144     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be41#1522 | 0x14030be41 | 1522     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1582 | 0x14030be41 | 1582     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1602 | 0x14030be41 | 1602     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1642 | 0x14030be41 | 1642     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1662 | 0x14030be41 | 1662     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1688 | 0x14030be41 | 1688     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1712 | 0x14030be41 | 1712     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1736 | 0x14030be41 | 1736     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1760 | 0x14030be41 | 1760     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1781 | 0x14030be41 | 1781     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1821 | 0x14030be41 | 1821     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1841 | 0x14030be41 | 1841     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1901 | 0x14030be41 | 1901     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#663  | 0x14030be46 | 663      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#664  | 0x14030be46 | 664      | CALLIND    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be46#1494 | 0x14030be46 | 1494     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1575 | 0x14030be46 | 1575     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1595 | 0x14030be46 | 1595     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1635 | 0x14030be46 | 1635     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1655 | 0x14030be46 | 1655     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1681 | 0x14030be46 | 1681     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1705 | 0x14030be46 | 1705     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1729 | 0x14030be46 | 1729     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1753 | 0x14030be46 | 1753     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1774 | 0x14030be46 | 1774     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1814 | 0x14030be46 | 1814     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1834 | 0x14030be46 | 1834     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1894 | 0x14030be46 | 1894     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#2146 | 0x14030be46 | 2146     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be48#1523 | 0x14030be48 | 1523     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1583 | 0x14030be48 | 1583     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1603 | 0x14030be48 | 1603     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1643 | 0x14030be48 | 1643     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1663 | 0x14030be48 | 1663     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1689 | 0x14030be48 | 1689     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1713 | 0x14030be48 | 1713     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1737 | 0x14030be48 | 1737     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1761 | 0x14030be48 | 1761     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1784 | 0x14030be48 | 1784     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1824 | 0x14030be48 | 1824     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1844 | 0x14030be48 | 1844     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1902 | 0x14030be48 | 1902     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#657  | 0x14030be4d | 657      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#658  | 0x14030be4d | 658      | CALLIND    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be4d#1496 | 0x14030be4d | 1496     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1577 | 0x14030be4d | 1577     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1597 | 0x14030be4d | 1597     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1637 | 0x14030be4d | 1637     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1657 | 0x14030be4d | 1657     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1683 | 0x14030be4d | 1683     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1707 | 0x14030be4d | 1707     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1731 | 0x14030be4d | 1731     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1755 | 0x14030be4d | 1755     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1776 | 0x14030be4d | 1776     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1816 | 0x14030be4d | 1816     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1836 | 0x14030be4d | 1836     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1896 | 0x14030be4d | 1896     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#2148 | 0x14030be4d | 2148     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be4f#659  | 0x14030be4f | 659      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#660  | 0x14030be4f | 660      | CALLIND    | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be4f#661  | 0x14030be4f | 661      | RETURN     | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be4f#1497 | 0x14030be4f | 1497     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1500 | 0x14030be4f | 1500     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be4f#1578 | 0x14030be4f | 1578     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1598 | 0x14030be4f | 1598     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1638 | 0x14030be4f | 1638     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1658 | 0x14030be4f | 1658     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1684 | 0x14030be4f | 1684     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1708 | 0x14030be4f | 1708     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1732 | 0x14030be4f | 1732     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1756 | 0x14030be4f | 1756     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1777 | 0x14030be4f | 1777     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1817 | 0x14030be4f | 1817     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1837 | 0x14030be4f | 1837     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1897 | 0x14030be4f | 1897     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#2149 | 0x14030be4f | 2149     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be4f#2150 | 0x14030be4f | 2150     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x14030bbc3#2109 | 0x14030bbc3#38   | 1           |
| 0x14030bbb5#2067 | 0x14030bbc3#2109 | 0           |
| 0x14030bbd4#2068 | 0x14030bbd8#66   | 1           |
| 0x14030bbd8#2108 | 0x14030bbd8#1626 | 0           |
| 0x14030bbc3#38   | 0x14030bbd8#1885 | 0           |
| 0x14030bbd8#66   | 0x14030bbd8#2110 | 0           |
| 0x14030bbde#2069 | 0x14030bbde#68   | 1           |
| 0x14030bbd8#2110 | 0x14030bbde#2069 | 0           |
| 0x14030bbe3#2111 | 0x14030bbe3#79   | 1           |
| 0x14030bbe3#79   | 0x14030bbe3#80   | 1           |
| 0x14030bbd8#2110 | 0x14030bbe3#2105 | 0           |
| 0x14030bbde#68   | 0x14030bbe3#2111 | 0           |
| 0x14030bbd8#2110 | 0x14030bbe5#81   | 1           |
| 0x14030bbe5#81   | 0x14030bbe5#2112 | 0           |
| 0x14030bbe5#2112 | 0x14030bbe8#2104 | 0           |
| 0x14030bbe8#2104 | 0x14030bbed#953  | 0           |
| 0x14030bbe3#2105 | 0x14030bbed#953  | 1           |
| 0x14030bbf1#2070 | 0x14030bbf1#88   | 1           |
| 0x14030bbd8#2110 | 0x14030bbf1#2070 | 0           |
| 0x14030bbfd#2072 | 0x14030bc01#99   | 1           |
| 0x14030bbf9#2071 | 0x14030bc01#99   | 2           |
| 0x14030bbd8#1485 | 0x14030bc01#1486 | 0           |
| 0x14030bbd8#1566 | 0x14030bc01#1567 | 0           |
| 0x14030bbd8#1586 | 0x14030bc01#1587 | 0           |
| 0x14030bbd8#1606 | 0x14030bc01#1607 | 0           |
| 0x14030bbed#953  | 0x14030bc01#1627 | 0           |
| 0x14030bbf1#88   | 0x14030bc01#1647 | 0           |
| 0x14030bbd8#1765 | 0x14030bc01#1766 | 0           |
| 0x14030bbd8#1785 | 0x14030bc01#1786 | 0           |
| 0x14030bbd8#1805 | 0x14030bc01#1806 | 0           |
| 0x14030bbd8#1825 | 0x14030bc01#1826 | 0           |
| 0x14030bbd8#1845 | 0x14030bc01#1846 | 0           |
| 0x14030bbd8#1865 | 0x14030bc01#1866 | 0           |
| 0x14030bbd8#1885 | 0x14030bc01#1886 | 0           |
| 0x14030bc01#99   | 0x14030bc01#2113 | 0           |
| 0x14030bc09#2073 | 0x14030bc09#102  | 1           |
| 0x14030bc01#2113 | 0x14030bc09#2073 | 0           |
| 0x14030bc0d#2074 | 0x14030bc0d#105  | 1           |
| 0x14030bc01#2113 | 0x14030bc0d#2074 | 0           |
| 0x14030bc0d#105  | 0x14030bc14#110  | 0           |
| 0x14030bc09#102  | 0x14030bc14#110  | 1           |
| 0x14030bc14#110  | 0x14030bc17#118  | 0           |
| 0x14030bc17#118  | 0x14030bc1b#127  | 1           |
| 0x14030bc09#102  | 0x14030bc21#128  | 0           |
| 0x14030bc25#2075 | 0x14030bc25#132  | 1           |
| 0x14030bc21#128  | 0x14030bc25#132  | 2           |
| 0x14030bc01#1486 | 0x14030bc25#1501 | 0           |
| 0x14030bc01#2113 | 0x14030bc25#2075 | 0           |
| 0x14030bc0d#105  | 0x14030bc2d#143  | 1           |
| 0x14030bc2d#143  | 0x14030bc2d#144  | 1           |
| 0x14030bc01#2113 | 0x14030bc2d#2107 | 0           |
| 0x14030bc01#2113 | 0x14030bc2f#145  | 1           |
| 0x14030bc2f#145  | 0x14030bc2f#2115 | 0           |
| 0x14030bc2f#2115 | 0x14030bc32#2106 | 0           |
| 0x14030bc32#2106 | 0x14030bc37#989  | 0           |
| 0x14030bc2d#2107 | 0x14030bc37#989  | 1           |
| 0x14030bc4e#2066 | 0x14030bc4e#161  | 0           |
| 0x14030bc37#989  | 0x14030bc4e#161  | 1           |
| 0x14030bc4e#161  | 0x14030bc4e#162  | 1           |
| 0x14030bc50#2116 | 0x14030bc50#164  | 0           |
| 0x14030bc09#102  | 0x14030bc50#164  | 1           |
| 0x14030bc37#989  | 0x14030bc50#2116 | 0           |
| 0x14030bc50#164  | 0x14030bc50#2117 | 0           |
| 0x14030bc50#2117 | 0x14030bc57#177  | 0           |
| 0x14030bc57#2062 | 0x14030bc57#177  | 1           |
| 0x14030bc57#177  | 0x14030bc57#178  | 1           |
| 0x14030bc5c#2063 | 0x14030bc5c#189  | 0           |
| 0x14030bc37#989  | 0x14030bc5c#189  | 1           |
| 0x14030bc5c#189  | 0x14030bc5c#191  | 1           |
| 0x14030bc37#989  | 0x14030bc66#2076 | 0           |
| 0x14030bc09#102  | 0x14030bc6e#195  | 0           |
| 0x14030bc66#2076 | 0x14030bc6e#987  | 0           |
| 0x14030bc6b#679  | 0x14030bc6e#987  | 1           |
| 0x14030bbd1#1049 | 0x14030bc6e#987  | 2           |
| 0x14030bc71#2118 | 0x14030bc71#202  | 0           |
| 0x14030bc37#989  | 0x14030bc71#2118 | 0           |
| 0x14030bc71#202  | 0x14030bc71#2119 | 0           |
| 0x14030bc71#2119 | 0x14030bc78#207  | 1           |
| 0x14030bc37#989  | 0x14030bc78#207  | 2           |
| 0x14030bc6e#195  | 0x14030bc78#207  | 3           |
| 0x14030bc25#1501 | 0x14030bc78#1488 | 0           |
| 0x14030bc01#1567 | 0x14030bc78#1569 | 0           |
| 0x14030bc01#1587 | 0x14030bc78#1589 | 0           |
| 0x14030bc01#1627 | 0x14030bc78#1629 | 0           |
| 0x14030bc01#1647 | 0x14030bc78#1649 | 0           |
| 0x14030bc01#1766 | 0x14030bc78#1768 | 0           |
| 0x14030bc01#1786 | 0x14030bc78#1788 | 0           |
| 0x14030bc01#1806 | 0x14030bc78#1808 | 0           |
| 0x14030bc01#1826 | 0x14030bc78#1828 | 0           |
| 0x14030bc01#1846 | 0x14030bc78#1848 | 0           |
| 0x14030bc01#1866 | 0x14030bc78#1868 | 0           |
| 0x14030bc01#1886 | 0x14030bc78#1888 | 0           |
| 0x14030bc37#989  | 0x14030bc86#213  | 1           |
| 0x14030bc86#2064 | 0x14030bc86#213  | 2           |
| 0x14030bc6e#987  | 0x14030bc86#213  | 3           |
| 0x14030bc78#1488 | 0x14030bc86#1489 | 0           |
| 0x14030bc78#1569 | 0x14030bc86#1570 | 0           |
| 0x14030bc78#1589 | 0x14030bc86#1590 | 0           |
| 0x14030bc78#1629 | 0x14030bc86#1630 | 0           |
| 0x14030bc78#1649 | 0x14030bc86#1650 | 0           |
| 0x14030bc78#1768 | 0x14030bc86#1769 | 0           |
| 0x14030bc78#1788 | 0x14030bc86#1789 | 0           |
| 0x14030bc78#1808 | 0x14030bc86#1809 | 0           |
| 0x14030bc78#1828 | 0x14030bc86#1829 | 0           |
| 0x14030bc78#1848 | 0x14030bc86#1849 | 0           |
| 0x14030bc78#1868 | 0x14030bc86#1869 | 0           |
| 0x14030bc78#1888 | 0x14030bc86#1889 | 0           |
| 0x14030bc8b#2120 | 0x14030bc8b#216  | 1           |
| 0x14030bc6e#987  | 0x14030bc8b#2120 | 0           |
| 0x14030bc92#2121 | 0x14030bc92#227  | 0           |
| 0x14030bc6e#987  | 0x14030bc92#2121 | 0           |
| 0x14030bc92#227  | 0x14030bc92#2122 | 0           |
| 0x14030bc95#2123 | 0x14030bc95#235  | 0           |
| 0x14030bc95#2124 | 0x14030bc95#235  | 1           |
| 0x14030bc6e#987  | 0x14030bc95#2123 | 0           |
| 0x14030bc37#989  | 0x14030bc95#2124 | 0           |
| 0x14030bc95#235  | 0x14030bc95#2125 | 0           |
| 0x14030bc95#2125 | 0x14030bc9c#240  | 1           |
| 0x14030bc92#2122 | 0x14030bc9c#240  | 2           |
| 0x14030bc8b#216  | 0x14030bc9c#240  | 3           |
| 0x14030bc86#1489 | 0x14030bc9c#1490 | 0           |
| 0x14030bc86#1570 | 0x14030bc9c#1571 | 0           |
| 0x14030bc86#1590 | 0x14030bc9c#1591 | 0           |
| 0x14030bc86#1630 | 0x14030bc9c#1631 | 0           |
| 0x14030bc86#1650 | 0x14030bc9c#1651 | 0           |
| 0x14030bc86#1769 | 0x14030bc9c#1770 | 0           |
| 0x14030bc86#1789 | 0x14030bc9c#1790 | 0           |
| 0x14030bc86#1809 | 0x14030bc9c#1810 | 0           |
| 0x14030bc86#1829 | 0x14030bc9c#1830 | 0           |
| 0x14030bc86#1849 | 0x14030bc9c#1850 | 0           |
| 0x14030bc86#1869 | 0x14030bc9c#1870 | 0           |
| 0x14030bc86#1889 | 0x14030bc9c#1890 | 0           |
| 0x14030bc01#2113 | 0x14030bcc8#708  | 1           |
| 0x14030bc01#1607 | 0x14030bcc8#708  | 3           |
| 0x14030bc01#1486 | 0x14030bcc8#1487 | 0           |
| 0x14030bcb5#688  | 0x14030bcc8#1568 | 0           |
| 0x14030bca9#684  | 0x14030bcc8#1588 | 0           |
| 0x14030bc01#1627 | 0x14030bcc8#1628 | 0           |
| 0x14030bc01#1647 | 0x14030bcc8#1648 | 0           |
| 0x14030bc01#1766 | 0x14030bcc8#1767 | 0           |
| 0x14030bc01#1786 | 0x14030bcc8#1787 | 0           |
| 0x14030bc01#1806 | 0x14030bcc8#1807 | 0           |
| 0x14030bc01#1826 | 0x14030bcc8#1827 | 0           |
| 0x14030bc01#1846 | 0x14030bcc8#1847 | 0           |
| 0x14030bc01#1866 | 0x14030bcc8#1867 | 0           |
| 0x14030bc01#1886 | 0x14030bcc8#1887 | 0           |
| 0x14030bcc8#708  | 0x14030bcc8#2114 | 0           |
| 0x14030bc01#2113 | 0x14030bcd0#980  | 0           |
| 0x14030bcc8#2114 | 0x14030bcd0#980  | 1           |
| 0x14030bc9c#1490 | 0x14030bcd0#1525 | 0           |
| 0x14030bcc8#1487 | 0x14030bcd0#1525 | 1           |
| 0x14030bc9c#1571 | 0x14030bcd0#1585 | 0           |
| 0x14030bcc8#1568 | 0x14030bcd0#1585 | 1           |
| 0x14030bc9c#1591 | 0x14030bcd0#1605 | 0           |
| 0x14030bcc8#1588 | 0x14030bcd0#1605 | 1           |
| 0x14030bc9c#1631 | 0x14030bcd0#1645 | 0           |
| 0x14030bcc8#1628 | 0x14030bcd0#1645 | 1           |
| 0x14030bc9c#1651 | 0x14030bcd0#1665 | 0           |
| 0x14030bcc8#1648 | 0x14030bcd0#1665 | 1           |
| 0x14030bc9c#1770 | 0x14030bcd0#1783 | 0           |
| 0x14030bcc8#1767 | 0x14030bcd0#1783 | 1           |
| 0x14030bc9c#1790 | 0x14030bcd0#1804 | 0           |
| 0x14030bcc8#1787 | 0x14030bcd0#1804 | 1           |
| 0x14030bc9c#1810 | 0x14030bcd0#1823 | 0           |
| 0x14030bcc8#1807 | 0x14030bcd0#1823 | 1           |
| 0x14030bc9c#1830 | 0x14030bcd0#1843 | 0           |
| 0x14030bcc8#1827 | 0x14030bcd0#1843 | 1           |
| 0x14030bc9c#1850 | 0x14030bcd0#1864 | 0           |
| 0x14030bcc8#1847 | 0x14030bcd0#1864 | 1           |
| 0x14030bc9c#1870 | 0x14030bcd0#1884 | 0           |
| 0x14030bcc8#1867 | 0x14030bcd0#1884 | 1           |
| 0x14030bc9c#1890 | 0x14030bcd0#1904 | 0           |
| 0x14030bcc8#1887 | 0x14030bcd0#1904 | 1           |
| 0x14030bcd0#980  | 0x14030bcdf#2057 | 1           |
| 0x14030bcdf#2077 | 0x14030bcdf#2058 | 1           |
| 0x14030bcd0#980  | 0x14030bcdf#2077 | 0           |
| 0x14030bce6#2078 | 0x14030bce6#2059 | 1           |
| 0x14030bce6#2079 | 0x14030bce6#2060 | 1           |
| 0x14030bcd0#980  | 0x14030bce6#2078 | 0           |
| 0x14030bcd0#980  | 0x14030bce6#2079 | 0           |
| 0x14030bcee#2080 | 0x14030bcee#276  | 1           |
| 0x14030bcd0#1525 | 0x14030bcee#1502 | 0           |
| 0x14030bcd0#980  | 0x14030bcee#2080 | 0           |
| 0x14030bcf2#2081 | 0x14030bcf2#279  | 1           |
| 0x14030bcee#1502 | 0x14030bcf2#1503 | 0           |
| 0x14030bcd0#980  | 0x14030bcf2#2081 | 0           |
| 0x14030bcfa#2126 | 0x14030bcfa#281  | 1           |
| 0x14030bcf2#1503 | 0x14030bcfa#1504 | 0           |
| 0x14030bcd0#980  | 0x14030bcfa#2126 | 0           |
| 0x14030bd0a#2082 | 0x14030bd0e#288  | 1           |
| 0x14030bd0e#2061 | 0x14030bd0e#288  | 2           |
| 0x14030bcfa#1504 | 0x14030bd0e#1491 | 0           |
| 0x14030bcd0#1585 | 0x14030bd0e#1572 | 0           |
| 0x14030bcd0#1605 | 0x14030bd0e#1592 | 0           |
| 0x14030bcd0#1645 | 0x14030bd0e#1632 | 0           |
| 0x14030bcd0#1665 | 0x14030bd0e#1652 | 0           |
| 0x14030bcdf#2057 | 0x14030bd0e#1678 | 0           |
| 0x14030bcdf#2058 | 0x14030bd0e#1702 | 0           |
| 0x14030bce6#2059 | 0x14030bd0e#1726 | 0           |
| 0x14030bce6#2060 | 0x14030bd0e#1750 | 0           |
| 0x14030bcd0#1783 | 0x14030bd0e#1771 | 0           |
| 0x14030bcd0#1804 | 0x14030bd0e#1791 | 0           |
| 0x14030bcd0#1823 | 0x14030bd0e#1811 | 0           |
| 0x14030bcd0#1843 | 0x14030bd0e#1831 | 0           |
| 0x14030bcd0#1864 | 0x14030bd0e#1851 | 0           |
| 0x14030bcd0#1884 | 0x14030bd0e#1871 | 0           |
| 0x14030bcd0#1904 | 0x14030bd0e#1891 | 0           |
| 0x14030bd0e#288  | 0x14030bd0e#2127 | 0           |
| 0x14030bd16#2083 | 0x14030bd16#1483 | 1           |
| 0x14030bd0e#1491 | 0x14030bd16#1518 | 0           |
| 0x14030bd16#1518 | 0x14030bd16#1519 | 0           |
| 0x14030bd1b#2084 | 0x14030bd1b#297  | 1           |
| 0x14030bd16#1519 | 0x14030bd1b#1505 | 0           |
| 0x14030bd1f#2085 | 0x14030bd1f#300  | 1           |
| 0x14030bd1b#1505 | 0x14030bd1f#1506 | 0           |
| 0x14030bd0e#2127 | 0x14030bd23#1447 | 1           |
| 0x14030bd23#2086 | 0x14030bd23#1448 | 1           |
| 0x14030bd23#2087 | 0x14030bd23#1450 | 1           |
| 0x14030bd23#2088 | 0x14030bd23#1452 | 1           |
| 0x14030bd0e#2127 | 0x14030bd23#2086 | 0           |
| 0x14030bd0e#2127 | 0x14030bd23#2087 | 0           |
| 0x14030bd0e#2127 | 0x14030bd23#2088 | 0           |
| 0x14030bd26#2128 | 0x14030bd26#1454 | 1           |
| 0x14030bd23#1447 | 0x14030bd26#1454 | 2           |
| 0x14030bd26#2130 | 0x14030bd26#1455 | 1           |
| 0x14030bd23#1448 | 0x14030bd26#1455 | 2           |
| 0x14030bd26#2129 | 0x14030bd26#1456 | 0           |
| 0x14030bd26#2131 | 0x14030bd26#1457 | 1           |
| 0x14030bd23#1450 | 0x14030bd26#1457 | 2           |
| 0x14030bd26#2133 | 0x14030bd26#1459 | 1           |
| 0x14030bd23#1452 | 0x14030bd26#1459 | 2           |
| 0x14030bd26#2132 | 0x14030bd26#1460 | 0           |
| 0x14030bd1f#1506 | 0x14030bd26#1510 | 0           |
| 0x14030bd26#1510 | 0x14030bd26#1511 | 0           |
| 0x14030bd26#1511 | 0x14030bd26#1512 | 0           |
| 0x14030bd26#1512 | 0x14030bd26#1513 | 0           |
| 0x14030bd26#1456 | 0x14030bd26#2130 | 0           |
| 0x14030bd26#2089 | 0x14030bd26#2131 | 0           |
| 0x14030bd26#1460 | 0x14030bd26#2133 | 0           |
| 0x14030bd2b#2090 | 0x14030bd2b#1461 | 1           |
| 0x14030bd2b#2091 | 0x14030bd2b#1462 | 1           |
| 0x14030bd2b#2092 | 0x14030bd2b#1464 | 1           |
| 0x14030bd2b#2093 | 0x14030bd2b#1466 | 1           |
| 0x14030bd0e#2127 | 0x14030bd2b#2090 | 0           |
| 0x14030bd0e#2127 | 0x14030bd2b#2091 | 0           |
| 0x14030bd0e#2127 | 0x14030bd2b#2092 | 0           |
| 0x14030bd0e#2127 | 0x14030bd2b#2093 | 0           |
| 0x14030bd2f#2134 | 0x14030bd2f#1468 | 1           |
| 0x14030bd2b#1461 | 0x14030bd2f#1468 | 2           |
| 0x14030bd2f#2136 | 0x14030bd2f#1469 | 1           |
| 0x14030bd2b#1462 | 0x14030bd2f#1469 | 2           |
| 0x14030bd2f#2135 | 0x14030bd2f#1470 | 0           |
| 0x14030bd2f#2137 | 0x14030bd2f#1471 | 1           |
| 0x14030bd2b#1464 | 0x14030bd2f#1471 | 2           |
| 0x14030bd2f#2139 | 0x14030bd2f#1473 | 1           |
| 0x14030bd2b#1466 | 0x14030bd2f#1473 | 2           |
| 0x14030bd2f#2138 | 0x14030bd2f#1474 | 0           |
| 0x14030bd26#1513 | 0x14030bd2f#1514 | 0           |
| 0x14030bd2f#1514 | 0x14030bd2f#1515 | 0           |
| 0x14030bd2f#1515 | 0x14030bd2f#1516 | 0           |
| 0x14030bd2f#1516 | 0x14030bd2f#1517 | 0           |
| 0x14030bd2f#2094 | 0x14030bd2f#2134 | 0           |
| 0x14030bd2f#1470 | 0x14030bd2f#2136 | 0           |
| 0x14030bd2f#2095 | 0x14030bd2f#2137 | 0           |
| 0x14030bd2f#1474 | 0x14030bd2f#2139 | 0           |
| 0x14030bd34#2140 | 0x14030bd34#321  | 1           |
| 0x14030bd2f#1517 | 0x14030bd34#1507 | 0           |
| 0x14030bd0e#2127 | 0x14030bd34#2096 | 0           |
| 0x14030bd34#2096 | 0x14030bd34#2140 | 0           |
| 0x14030bd38#2141 | 0x14030bd38#324  | 1           |
| 0x14030bd34#1507 | 0x14030bd38#1508 | 0           |
| 0x14030bd0e#2127 | 0x14030bd38#2097 | 0           |
| 0x14030bd38#2097 | 0x14030bd38#2141 | 0           |
| 0x14030bd40#2142 | 0x14030bd40#326  | 1           |
| 0x14030bd38#1508 | 0x14030bd40#1509 | 0           |
| 0x14030bd0e#2127 | 0x14030bd40#2142 | 0           |
| 0x14030bd0e#1750 | 0x14030bd4b#340  | 0           |
| 0x14030bd4b#340  | 0x14030bd4b#341  | 1           |
| 0x14030bd0e#1750 | 0x14030bd4d#343  | 0           |
| 0x14030bd4d#343  | 0x14030bd54#354  | 0           |
| 0x14030bd54#354  | 0x14030bd5b#363  | 1           |
| 0x14030bd0e#1678 | 0x14030bd5b#2103 | 0           |
| 0x14030bd0e#1678 | 0x14030bd5d#364  | 0           |
| 0x14030bd5d#2143 | 0x14030bd5d#365  | 1           |
| 0x14030bd5d#364  | 0x14030bd5d#2143 | 0           |
| 0x14030bd0e#1678 | 0x14030bd61#369  | 0           |
| 0x14030bd5d#365  | 0x14030bd61#369  | 1           |
| 0x14030bd61#369  | 0x14030bd64#378  | 0           |
| 0x14030bd64#378  | 0x14030bd6c#395  | 0           |
| 0x14030bd6c#395  | 0x14030bd6c#397  | 1           |
| 0x14030bd0e#1750 | 0x14030bd72#400  | 0           |
| 0x14030bd79#950  | 0x14030bd79#410  | 1           |
| 0x14030bd79#977  | 0x14030bd79#410  | 2           |
| 0x14030bd5b#2103 | 0x14030bd79#950  | 0           |
| 0x14030bd5d#365  | 0x14030bd79#950  | 1           |
| 0x14030bd4d#343  | 0x14030bd79#977  | 0           |
| 0x14030bd72#400  | 0x14030bd79#977  | 1           |
| 0x14030bd40#1509 | 0x14030bd79#1493 | 0           |
| 0x14030bd0e#1572 | 0x14030bd79#1574 | 0           |
| 0x14030bd0e#1592 | 0x14030bd79#1594 | 0           |
| 0x14030bd0e#1632 | 0x14030bd79#1634 | 0           |
| 0x14030bd0e#1652 | 0x14030bd79#1654 | 0           |
| 0x14030bd0e#1678 | 0x14030bd79#1680 | 0           |
| 0x14030bd0e#1702 | 0x14030bd79#1704 | 0           |
| 0x14030bd0e#1726 | 0x14030bd79#1728 | 0           |
| 0x14030bd0e#1750 | 0x14030bd79#1752 | 0           |
| 0x14030bd0e#1771 | 0x14030bd79#1773 | 0           |
| 0x14030bd0e#1791 | 0x14030bd79#1793 | 0           |
| 0x14030bd0e#1811 | 0x14030bd79#1813 | 0           |
| 0x14030bd0e#1831 | 0x14030bd79#1833 | 0           |
| 0x14030bd0e#1851 | 0x14030bd79#1853 | 0           |
| 0x14030bd0e#1871 | 0x14030bd79#1873 | 0           |
| 0x14030bd0e#1891 | 0x14030bd79#1893 | 0           |
| 0x14030bd40#1509 | 0x14030bd7e#1524 | 0           |
| 0x14030bd79#1493 | 0x14030bd7e#1524 | 1           |
| 0x14030bd0e#1572 | 0x14030bd7e#1584 | 0           |
| 0x14030bd79#1574 | 0x14030bd7e#1584 | 1           |
| 0x14030bd0e#1592 | 0x14030bd7e#1604 | 0           |
| 0x14030bd79#1594 | 0x14030bd7e#1604 | 1           |
| 0x14030bd0e#1632 | 0x14030bd7e#1644 | 0           |
| 0x14030bd79#1634 | 0x14030bd7e#1644 | 1           |
| 0x14030bd0e#1652 | 0x14030bd7e#1664 | 0           |
| 0x14030bd79#1654 | 0x14030bd7e#1664 | 1           |
| 0x14030bd0e#1678 | 0x14030bd7e#1690 | 0           |
| 0x14030bd79#1680 | 0x14030bd7e#1690 | 1           |
| 0x14030bd0e#1702 | 0x14030bd7e#1714 | 0           |
| 0x14030bd79#1704 | 0x14030bd7e#1714 | 1           |
| 0x14030bd0e#1771 | 0x14030bd7e#1782 | 0           |
| 0x14030bd79#1773 | 0x14030bd7e#1782 | 1           |
| 0x14030bd0e#1791 | 0x14030bd7e#1803 | 0           |
| 0x14030bd79#1793 | 0x14030bd7e#1803 | 1           |
| 0x14030bd0e#1811 | 0x14030bd7e#1822 | 0           |
| 0x14030bd79#1813 | 0x14030bd7e#1822 | 1           |
| 0x14030bd0e#1831 | 0x14030bd7e#1842 | 0           |
| 0x14030bd79#1833 | 0x14030bd7e#1842 | 1           |
| 0x14030bd0e#1851 | 0x14030bd7e#1863 | 0           |
| 0x14030bd79#1853 | 0x14030bd7e#1863 | 1           |
| 0x14030bd0e#1871 | 0x14030bd7e#1883 | 0           |
| 0x14030bd79#1873 | 0x14030bd7e#1883 | 1           |
| 0x14030bd0e#1891 | 0x14030bd7e#1903 | 0           |
| 0x14030bd79#1893 | 0x14030bd7e#1903 | 1           |
| 0x14030bd7e#1690 | 0x14030bd8a#1667 | 0           |
| 0x14030bd7e#1842 | 0x14030bd96#433  | 1           |
| 0x14030bd96#433  | 0x14030bd96#434  | 1           |
| 0x14030bd7e#1842 | 0x14030bd98#436  | 0           |
| 0x14030bd7e#1803 | 0x14030bd9b#1764 | 0           |
| 0x14030bd7e#1782 | 0x14030bd9b#1764 | 1           |
| 0x14030bd98#436  | 0x14030bd9f#447  | 1           |
| 0x14030bd9f#447  | 0x14030bda6#456  | 1           |
| 0x14030bd9b#1764 | 0x14030bda6#2102 | 0           |
| 0x14030bd9b#1764 | 0x14030bda8#457  | 0           |
| 0x14030bda8#2145 | 0x14030bda8#458  | 1           |
| 0x14030bda8#457  | 0x14030bda8#2145 | 0           |
| 0x14030bd9b#1764 | 0x14030bdac#462  | 0           |
| 0x14030bda8#458  | 0x14030bdac#462  | 1           |
| 0x14030bdac#462  | 0x14030bdaf#471  | 0           |
| 0x14030bdaf#471  | 0x14030bdb7#488  | 1           |
| 0x14030bdb7#488  | 0x14030bdb7#490  | 1           |
| 0x14030bd7e#1842 | 0x14030bdbd#493  | 0           |
| 0x14030bdc4#947  | 0x14030bdc4#503  | 1           |
| 0x14030bdc4#973  | 0x14030bdc4#503  | 2           |
| 0x14030bda6#2102 | 0x14030bdc4#947  | 0           |
| 0x14030bda8#458  | 0x14030bdc4#947  | 1           |
| 0x14030bd98#436  | 0x14030bdc4#973  | 0           |
| 0x14030bdbd#493  | 0x14030bdc4#973  | 1           |
| 0x14030bd7e#1524 | 0x14030bdc4#1495 | 0           |
| 0x14030bd7e#1584 | 0x14030bdc4#1576 | 0           |
| 0x14030bd7e#1604 | 0x14030bdc4#1596 | 0           |
| 0x14030bd7e#1644 | 0x14030bdc4#1636 | 0           |
| 0x14030bd7e#1664 | 0x14030bdc4#1656 | 0           |
| 0x14030bd8a#1667 | 0x14030bdc4#1682 | 0           |
| 0x14030bd7e#1714 | 0x14030bdc4#1706 | 0           |
| 0x14030bd7e#413  | 0x14030bdc4#1730 | 0           |
| 0x14030bd82#416  | 0x14030bdc4#1754 | 0           |
| 0x14030bd7e#1863 | 0x14030bdc4#1855 | 0           |
| 0x14030bd7e#1883 | 0x14030bdc4#1875 | 0           |
| 0x14030bd7e#1903 | 0x14030bdc4#1895 | 0           |
| 0x14030bd7e#1524 | 0x14030bdc9#1521 | 0           |
| 0x14030bdc4#1495 | 0x14030bdc9#1521 | 1           |
| 0x14030bd7e#1584 | 0x14030bdc9#1581 | 0           |
| 0x14030bdc4#1576 | 0x14030bdc9#1581 | 1           |
| 0x14030bd7e#1604 | 0x14030bdc9#1601 | 0           |
| 0x14030bdc4#1596 | 0x14030bdc9#1601 | 1           |
| 0x14030bd7e#1644 | 0x14030bdc9#1641 | 0           |
| 0x14030bdc4#1636 | 0x14030bdc9#1641 | 1           |
| 0x14030bd7e#1664 | 0x14030bdc9#1661 | 0           |
| 0x14030bdc4#1656 | 0x14030bdc9#1661 | 1           |
| 0x14030bd8a#1667 | 0x14030bdc9#1687 | 0           |
| 0x14030bdc4#1682 | 0x14030bdc9#1687 | 1           |
| 0x14030bd7e#1714 | 0x14030bdc9#1711 | 0           |
| 0x14030bdc4#1706 | 0x14030bdc9#1711 | 1           |
| 0x14030bd7e#413  | 0x14030bdc9#1735 | 0           |
| 0x14030bdc4#1730 | 0x14030bdc9#1735 | 1           |
| 0x14030bd82#416  | 0x14030bdc9#1759 | 0           |
| 0x14030bdc4#1754 | 0x14030bdc9#1759 | 1           |
| 0x14030bd7e#1863 | 0x14030bdc9#1860 | 0           |
| 0x14030bdc4#1855 | 0x14030bdc9#1860 | 1           |
| 0x14030bd7e#1883 | 0x14030bdc9#1880 | 0           |
| 0x14030bdc4#1875 | 0x14030bdc9#1880 | 1           |
| 0x14030bd7e#1903 | 0x14030bdc9#1900 | 0           |
| 0x14030bdc4#1895 | 0x14030bdc9#1900 | 1           |
| 0x14030bdc9#1880 | 0x14030bde1#526  | 1           |
| 0x14030bde1#526  | 0x14030bde1#527  | 1           |
| 0x14030bdc9#1880 | 0x14030bde3#529  | 0           |
| 0x14030bde3#529  | 0x14030bdea#540  | 1           |
| 0x14030bdea#540  | 0x14030bdf1#549  | 1           |
| 0x14030bdc9#1860 | 0x14030bdf1#2101 | 0           |
| 0x14030bdc9#1860 | 0x14030bdf3#550  | 0           |
| 0x14030bdf3#2147 | 0x14030bdf3#551  | 1           |
| 0x14030bdf3#550  | 0x14030bdf3#2147 | 0           |
| 0x14030bdc9#1860 | 0x14030bdf7#555  | 0           |
| 0x14030bdf3#551  | 0x14030bdf7#555  | 1           |
| 0x14030bdf7#555  | 0x14030bdfa#564  | 0           |
| 0x14030bdfa#564  | 0x14030be02#581  | 1           |
| 0x14030be02#581  | 0x14030be02#583  | 1           |
| 0x14030bdc9#1880 | 0x14030be04#586  | 0           |
| 0x14030be0b#944  | 0x14030be0b#596  | 1           |
| 0x14030be0b#971  | 0x14030be0b#596  | 2           |
| 0x14030bdf1#2101 | 0x14030be0b#944  | 0           |
| 0x14030bdf3#551  | 0x14030be0b#944  | 1           |
| 0x14030bde3#529  | 0x14030be0b#971  | 0           |
| 0x14030be04#586  | 0x14030be0b#971  | 1           |
| 0x14030bdc9#1521 | 0x14030be0b#1498 | 0           |
| 0x14030bdc9#1581 | 0x14030be0b#1579 | 0           |
| 0x14030bdc9#1601 | 0x14030be0b#1599 | 0           |
| 0x14030bdc9#1641 | 0x14030be0b#1639 | 0           |
| 0x14030bdc9#1661 | 0x14030be0b#1659 | 0           |
| 0x14030bdc9#1687 | 0x14030be0b#1685 | 0           |
| 0x14030bdc9#1711 | 0x14030be0b#1709 | 0           |
| 0x14030bdc9#1735 | 0x14030be0b#1733 | 0           |
| 0x14030bdc9#1759 | 0x14030be0b#1757 | 0           |
| 0x14030bdd5#512  | 0x14030be0b#1778 | 0           |
| 0x14030bdc9#506  | 0x14030be0b#1818 | 0           |
| 0x14030bdcd#509  | 0x14030be0b#1838 | 0           |
| 0x14030bdc9#1900 | 0x14030be0b#1898 | 0           |
| 0x14030bdc9#1521 | 0x14030be10#1520 | 0           |
| 0x14030be0b#1498 | 0x14030be10#1520 | 1           |
| 0x14030be10#597  | 0x14030be39#655  | 1           |
| 0x14030be10#1520 | 0x14030be39#1499 | 0           |
| 0x14030be3f#2144 | 0x14030be3f#667  | 0           |
| 0x14030bd40#1509 | 0x14030be3f#1492 | 0           |
| 0x14030bd0e#1572 | 0x14030be3f#1573 | 0           |
| 0x14030bd0e#1592 | 0x14030be3f#1593 | 0           |
| 0x14030bd0e#1632 | 0x14030be3f#1633 | 0           |
| 0x14030bd0e#1652 | 0x14030be3f#1653 | 0           |
| 0x14030bd0e#1678 | 0x14030be3f#1679 | 0           |
| 0x14030bd0e#1702 | 0x14030be3f#1703 | 0           |
| 0x14030bd0e#1726 | 0x14030be3f#1727 | 0           |
| 0x14030bd0e#1750 | 0x14030be3f#1751 | 0           |
| 0x14030bd0e#1771 | 0x14030be3f#1772 | 0           |
| 0x14030bd0e#1811 | 0x14030be3f#1812 | 0           |
| 0x14030bd0e#1831 | 0x14030be3f#1832 | 0           |
| 0x14030bd0e#1891 | 0x14030be3f#1892 | 0           |
| 0x14030be3f#666  | 0x14030be3f#2144 | 0           |
| 0x14030bd7e#1524 | 0x14030be41#1522 | 0           |
| 0x14030be3f#1492 | 0x14030be41#1522 | 1           |
| 0x14030bd7e#1584 | 0x14030be41#1582 | 0           |
| 0x14030be3f#1573 | 0x14030be41#1582 | 1           |
| 0x14030bd7e#1604 | 0x14030be41#1602 | 0           |
| 0x14030be3f#1593 | 0x14030be41#1602 | 1           |
| 0x14030bd7e#1644 | 0x14030be41#1642 | 0           |
| 0x14030be3f#1633 | 0x14030be41#1642 | 1           |
| 0x14030bd7e#1664 | 0x14030be41#1662 | 0           |
| 0x14030be3f#1653 | 0x14030be41#1662 | 1           |
| 0x14030bd8a#1667 | 0x14030be41#1688 | 0           |
| 0x14030be3f#1679 | 0x14030be41#1688 | 1           |
| 0x14030bd7e#1714 | 0x14030be41#1712 | 0           |
| 0x14030be3f#1703 | 0x14030be41#1712 | 1           |
| 0x14030bd7e#413  | 0x14030be41#1736 | 0           |
| 0x14030be3f#1727 | 0x14030be41#1736 | 1           |
| 0x14030bd82#416  | 0x14030be41#1760 | 0           |
| 0x14030be3f#1751 | 0x14030be41#1760 | 1           |
| 0x14030bd7e#1782 | 0x14030be41#1781 | 0           |
| 0x14030be3f#1772 | 0x14030be41#1781 | 1           |
| 0x14030bd7e#1822 | 0x14030be41#1821 | 0           |
| 0x14030be3f#1812 | 0x14030be41#1821 | 1           |
| 0x14030bd7e#1842 | 0x14030be41#1841 | 0           |
| 0x14030be3f#1832 | 0x14030be41#1841 | 1           |
| 0x14030bd7e#1903 | 0x14030be41#1901 | 0           |
| 0x14030be3f#1892 | 0x14030be41#1901 | 1           |
| 0x14030be46#2146 | 0x14030be46#664  | 0           |
| 0x14030be41#1522 | 0x14030be46#1494 | 0           |
| 0x14030be41#1582 | 0x14030be46#1575 | 0           |
| 0x14030be41#1602 | 0x14030be46#1595 | 0           |
| 0x14030be41#1642 | 0x14030be46#1635 | 0           |
| 0x14030be41#1662 | 0x14030be46#1655 | 0           |
| 0x14030be41#1688 | 0x14030be46#1681 | 0           |
| 0x14030be41#1712 | 0x14030be46#1705 | 0           |
| 0x14030be41#1736 | 0x14030be46#1729 | 0           |
| 0x14030be41#1760 | 0x14030be46#1753 | 0           |
| 0x14030be41#1781 | 0x14030be46#1774 | 0           |
| 0x14030be41#1821 | 0x14030be46#1814 | 0           |
| 0x14030be41#1841 | 0x14030be46#1834 | 0           |
| 0x14030be41#1901 | 0x14030be46#1894 | 0           |
| 0x14030be46#663  | 0x14030be46#2146 | 0           |
| 0x14030bdc9#1521 | 0x14030be48#1523 | 0           |
| 0x14030be46#1494 | 0x14030be48#1523 | 1           |
| 0x14030bdc9#1581 | 0x14030be48#1583 | 0           |
| 0x14030be46#1575 | 0x14030be48#1583 | 1           |
| 0x14030bdc9#1601 | 0x14030be48#1603 | 0           |
| 0x14030be46#1595 | 0x14030be48#1603 | 1           |
| 0x14030bdc9#1641 | 0x14030be48#1643 | 0           |
| 0x14030be46#1635 | 0x14030be48#1643 | 1           |
| 0x14030bdc9#1661 | 0x14030be48#1663 | 0           |
| 0x14030be46#1655 | 0x14030be48#1663 | 1           |
| 0x14030bdc9#1687 | 0x14030be48#1689 | 0           |
| 0x14030be46#1681 | 0x14030be48#1689 | 1           |
| 0x14030bdc9#1711 | 0x14030be48#1713 | 0           |
| 0x14030be46#1705 | 0x14030be48#1713 | 1           |
| 0x14030bdc9#1735 | 0x14030be48#1737 | 0           |
| 0x14030be46#1729 | 0x14030be48#1737 | 1           |
| 0x14030bdc9#1759 | 0x14030be48#1761 | 0           |
| 0x14030be46#1753 | 0x14030be48#1761 | 1           |
| 0x14030bdd5#512  | 0x14030be48#1784 | 0           |
| 0x14030be46#1774 | 0x14030be48#1784 | 1           |
| 0x14030bdc9#506  | 0x14030be48#1824 | 0           |
| 0x14030be46#1814 | 0x14030be48#1824 | 1           |
| 0x14030bdcd#509  | 0x14030be48#1844 | 0           |
| 0x14030be46#1834 | 0x14030be48#1844 | 1           |
| 0x14030bdc9#1900 | 0x14030be48#1902 | 0           |
| 0x14030be46#1894 | 0x14030be48#1902 | 1           |
| 0x14030be4d#2148 | 0x14030be4d#658  | 0           |
| 0x14030be48#1523 | 0x14030be4d#1496 | 0           |
| 0x14030be48#1583 | 0x14030be4d#1577 | 0           |
| 0x14030be48#1603 | 0x14030be4d#1597 | 0           |
| 0x14030be48#1643 | 0x14030be4d#1637 | 0           |
| 0x14030be48#1663 | 0x14030be4d#1657 | 0           |
| 0x14030be48#1689 | 0x14030be4d#1683 | 0           |
| 0x14030be48#1713 | 0x14030be4d#1707 | 0           |
| 0x14030be48#1737 | 0x14030be4d#1731 | 0           |
| 0x14030be48#1761 | 0x14030be4d#1755 | 0           |
| 0x14030be48#1784 | 0x14030be4d#1776 | 0           |
| 0x14030be48#1824 | 0x14030be4d#1816 | 0           |
| 0x14030be48#1844 | 0x14030be4d#1836 | 0           |
| 0x14030be48#1902 | 0x14030be4d#1896 | 0           |
| 0x14030be4d#657  | 0x14030be4d#2148 | 0           |
| 0x14030be4f#2149 | 0x14030be4f#660  | 0           |
| 0x14030be4f#2150 | 0x14030be4f#661  | 1           |
| 0x14030be4d#1496 | 0x14030be4f#1497 | 0           |
| 0x14030be4f#1497 | 0x14030be4f#1500 | 0           |
| 0x14030be4d#1577 | 0x14030be4f#1578 | 0           |
| 0x14030be4d#1597 | 0x14030be4f#1598 | 0           |
| 0x14030be4d#1637 | 0x14030be4f#1638 | 0           |
| 0x14030be4d#1657 | 0x14030be4f#1658 | 0           |
| 0x14030be4d#1683 | 0x14030be4f#1684 | 0           |
| 0x14030be4d#1707 | 0x14030be4f#1708 | 0           |
| 0x14030be4d#1731 | 0x14030be4f#1732 | 0           |
| 0x14030be4d#1755 | 0x14030be4f#1756 | 0           |
| 0x14030be4d#1776 | 0x14030be4f#1777 | 0           |
| 0x14030be4d#1816 | 0x14030be4f#1817 | 0           |
| 0x14030be4d#1836 | 0x14030be4f#1837 | 0           |
| 0x14030be4d#1896 | 0x14030be4f#1897 | 0           |
| 0x14030be4f#659  | 0x14030be4f#2149 | 0           |
| 0x14030be4f#660  | 0x14030be4f#2150 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x14030bbd8#2108 | 0           |
| 0       | 0x14030bd16#1482 | 1           |
| 0       | 0x14030bd16#2083 | 0           |
| 0       | 0x14030bd1b#2084 | 0           |
| 0       | 0x14030bd1f#2085 | 0           |
| 0       | 0x14030bd26#2089 | 0           |
| 0       | 0x14030bd26#2128 | 0           |
| 0       | 0x14030bd26#2129 | 0           |
| 0       | 0x14030bd26#2132 | 0           |
| 0       | 0x14030bd2f#2094 | 0           |
| 0       | 0x14030bd2f#2095 | 0           |
| 0       | 0x14030bd2f#2135 | 0           |
| 0       | 0x14030bd2f#2138 | 0           |
| 0       | 0x14030be10#597  | 0           |

## raw_result.value.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x14030bbd8#66   | direct_call        | 0             |             |
| 0x14030bbde#68   | memory_read        | 1             |             |
| 0x14030bbe3#80   | conditional_branch |               | 1           |
| 0x14030bbe5#81   | memory_read        | 1             |             |
| 0x14030bbf1#88   | memory_read        | 1             |             |
| 0x14030bc01#99   | direct_call        | 0             |             |
| 0x14030bc09#102  | memory_read        | 1             |             |
| 0x14030bc0d#105  | memory_read        | 1             |             |
| 0x14030bc1b#127  | conditional_branch |               | 1           |
| 0x14030bc25#132  | memory_write       | 1             | 2           |
| 0x14030bc2d#144  | conditional_branch |               | 1           |
| 0x14030bc2f#145  | memory_read        | 1             |             |
| 0x14030bc4e#162  | conditional_branch |               | 1           |
| 0x14030bc57#178  | conditional_branch |               | 1           |
| 0x14030bc5c#191  | conditional_branch |               | 1           |
| 0x14030bc78#207  | direct_call        | 0             |             |
| 0x14030bc86#213  | direct_call        | 0             |             |
| 0x14030bc9c#240  | direct_call        | 0             |             |
| 0x14030bcc8#708  | direct_call        | 0             |             |
| 0x14030bcdf#2057 | memory_read        | 1             |             |
| 0x14030bcdf#2058 | memory_read        | 1             |             |
| 0x14030bce6#2059 | memory_read        | 1             |             |
| 0x14030bce6#2060 | memory_read        | 1             |             |
| 0x14030bcee#276  | memory_write       | 1             | 2           |
| 0x14030bcf2#279  | memory_write       | 1             | 2           |
| 0x14030bcfa#281  | memory_write       | 1             | 2           |
| 0x14030bd0e#288  | direct_call        | 0             |             |
| 0x14030bd16#1482 | memory_write       | 1             | 2           |
| 0x14030bd16#1483 | memory_write       | 1             | 2           |
| 0x14030bd1b#297  | memory_write       | 1             | 2           |
| 0x14030bd1f#300  | memory_write       | 1             | 2           |
| 0x14030bd23#1447 | memory_read        | 1             |             |
| 0x14030bd23#1448 | memory_read        | 1             |             |
| 0x14030bd23#1450 | memory_read        | 1             |             |
| 0x14030bd23#1452 | memory_read        | 1             |             |
| 0x14030bd26#1454 | memory_write       | 1             | 2           |
| 0x14030bd26#1455 | memory_write       | 1             | 2           |
| 0x14030bd26#1457 | memory_write       | 1             | 2           |
| 0x14030bd26#1459 | memory_write       | 1             | 2           |
| 0x14030bd2b#1461 | memory_read        | 1             |             |
| 0x14030bd2b#1462 | memory_read        | 1             |             |
| 0x14030bd2b#1464 | memory_read        | 1             |             |
| 0x14030bd2b#1466 | memory_read        | 1             |             |
| 0x14030bd2f#1468 | memory_write       | 1             | 2           |
| 0x14030bd2f#1469 | memory_write       | 1             | 2           |
| 0x14030bd2f#1471 | memory_write       | 1             | 2           |
| 0x14030bd2f#1473 | memory_write       | 1             | 2           |
| 0x14030bd34#321  | memory_write       | 1             | 2           |
| 0x14030bd38#324  | memory_write       | 1             | 2           |
| 0x14030bd40#326  | memory_write       | 1             | 2           |
| 0x14030bd4b#341  | conditional_branch |               | 1           |
| 0x14030bd5b#363  | conditional_branch |               | 1           |
| 0x14030bd5d#365  | memory_read        | 1             |             |
| 0x14030bd6c#397  | conditional_branch |               | 1           |
| 0x14030bd79#410  | direct_call        | 0             |             |
| 0x14030bd96#434  | conditional_branch |               | 1           |
| 0x14030bda6#456  | conditional_branch |               | 1           |
| 0x14030bda8#458  | memory_read        | 1             |             |
| 0x14030bdb7#490  | conditional_branch |               | 1           |
| 0x14030bdc4#503  | direct_call        | 0             |             |
| 0x14030bde1#527  | conditional_branch |               | 1           |
| 0x14030bdf1#549  | conditional_branch |               | 1           |
| 0x14030bdf3#551  | memory_read        | 1             |             |
| 0x14030be02#583  | conditional_branch |               | 1           |
| 0x14030be0b#596  | direct_call        | 0             |             |
| 0x14030be3f#667  | indirect_call      | 0             |             |
| 0x14030be46#664  | indirect_call      | 0             |             |
| 0x14030be4d#658  | indirect_call      | 0             |             |
| 0x14030be4f#660  | indirect_call      | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x14030be4f with no resolved callee; its no-return basis is unknown.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x14030be4f with no resolved callee; its no-return basis is unknown.

## normalized_result.procedure.address

0x14030bba0

## normalized_result.procedure.name

FUN_14030bba0

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
| 0x14030bba0 | 0x14030be4f |

## normalized_result.procedure.body.total_bytes

688

## normalized_result.procedure.body.span_bytes

688

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_14030bba0()

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_48 @ Stack[-0x48]:8      | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8      | ghidra-function-database |
| undefined local_5f @ Stack[-0x5f]:1       | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined8 local_70 @ Stack[-0x70]:8      | ghidra-function-database |
| undefined8 local_78 @ Stack[-0x78]:8      | ghidra-function-database |
| undefined8 local_88 @ Stack[-0x88]:8      | ghidra-function-database |
| undefined1[16] local_98 @ Stack[-0x98]:16 | ghidra-function-database |
| undefined1[16] local_a8 @ Stack[-0xa8]:16 | ghidra-function-database |
| undefined8 local_b0 @ Stack[-0xb0]:8      | ghidra-function-database |
| undefined8 local_b8 @ Stack[-0xb8]:8      | ghidra-function-database |
| undefined1 local_c8 @ Stack[-0xc8]:1      | ghidra-function-database |
| undefined8 local_d0 @ Stack[-0xd0]:8      | ghidra-function-database |
| undefined8 local_d8 @ Stack[-0xd8]:8      | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8    | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8    | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14030bba0(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  longlong local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404c7ac0 ^ (ulonglong)auStack_f8;
  puVar12 = (ulonglong *)0x0;
  local_b8 = param_1;
  puVar6 = (undefined8 *)FUN_140309c30(local_68);
  local_b8 = puVar6;
  if (0xf < (ulonglong)puVar6[3]) {
    local_b8 = (undefined8 *)*puVar6;
  }
  local_b0 = puVar6[2];
  puVar7 = (ulonglong *)FUN_14031a500(&local_88,&local_b8);
  uVar11 = puVar7[2];
  if (puVar7[3] - uVar11 < 0xb) {
    local_d0 = 0xb;
    local_d8 = "deactivate-";
    puVar7 = (ulonglong *)FUN_14005d6d0(puVar7,0xb,local_c8,0);
  }
  else {
    puVar7[2] = uVar11 + 0xb;
    puVar13 = puVar7;
    if (0xf < puVar7[3]) {
      puVar13 = (ulonglong *)*puVar7;
    }
    if (((ulonglong *)0x1404493a2 < puVar13) ||
       ((char *)((longlong)puVar13 + uVar11) < "deactivate-")) {
      puVar12 = (ulonglong *)0xb;
    }
    else if ("deactivate-" < puVar13) {
      puVar12 = puVar13 + -0x28089273;
    }
    FUN_14035f420((char *)((longlong)puVar13 + 0xb),puVar13,uVar11 + 1);
    FUN_14035f420(puVar13,"deactivate-",puVar12);
    FUN_14035f420((char *)((longlong)puVar12 + (longlong)puVar13),
                  (char *)((longlong)puVar12 + 0x1404493a3),0xb - (longlong)puVar12);
  }
  local_a8 = *puVar7;
  uStack_a0 = puVar7[1];
  local_98 = puVar7[2];
  uStack_90 = puVar7[3];
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  *(char *)puVar7 = '\0';
  puVar8 = (undefined4 *)FUN_1400013f0(&local_a8,".json",5);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(undefined4 *)param_1 = *puVar8;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = puVar8[5];
  uVar3 = puVar8[6];
  uVar4 = puVar8[7];
  *(undefined4 *)(param_1 + 2) = puVar8[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0xf;
  *(undefined1 *)puVar8 = 0;
  if (uStack_90 < 0x10) {
LAB_14030bd7e:
    local_98 = 0;
    uStack_90 = 0xf;
    local_a8 = local_a8 & 0xffffffffffffff00;
    if (0xf < local_70) {
      uVar11 = local_70 + 1;
      lVar5 = CONCAT71(uStack_87,local_88);
      lVar9 = lVar5;
      if (0xfff < uVar11) {
        lVar9 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar9) - 8U) goto LAB_14030be41;
        uVar11 = local_70 + 0x28;
      }
      thunk_FUN_140327e20(lVar9,uVar11);
    }
    local_78 = 0;
    local_70 = 0xf;
    local_88 = 0;
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      lVar9 = local_68[0];
      if (0xfff < uVar11) {
        lVar9 = *(longlong *)(local_68[0] + -8);
        if (0x1f < (local_68[0] - lVar9) - 8U) goto LAB_14030be48;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_140327e20(lVar9,uVar11);
    }
    return param_1;
  }
  uVar10 = uStack_90 + 1;
  uVar11 = local_a8;
  if (uVar10 < 0x1000) {
LAB_14030bd79:
    thunk_FUN_140327e20(uVar11,uVar10);
    goto LAB_14030bd7e;
  }
  uVar11 = *(ulonglong *)(local_a8 - 8);
  if ((local_a8 - uVar11) - 8 < 0x20) {
    uVar10 = uStack_90 + 0x28;
    goto LAB_14030bd79;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
LAB_14030be41:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
LAB_14030be48:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  pcVar1 = (code *)swi(3);
  puVar6 = (undefined8 *)(*pcVar1)();
  return puVar6;
}



## normalized_result.assembly

0x14030bba0: MOV qword ptr [RSP + 0x18], RBX,0x14030bba5: PUSH RBP,0x14030bba6: PUSH RSI,0x14030bba7: PUSH RDI,0x14030bba8: PUSH R12,0x14030bbaa: PUSH R13,0x14030bbac: PUSH R14,0x14030bbae: PUSH R15,0x14030bbb0: LEA RBP, [RSP + -0x27],0x14030bbb5: SUB RSP, 0xc0,0x14030bbbc: MOV RAX, qword ptr [0x1404c7ac0],0x14030bbc3: XOR RAX, RSP,0x14030bbc6: MOV qword ptr [RBP + 0x17], RAX,0x14030bbca: MOV R13, RCX,0x14030bbcd: MOV qword ptr [RBP + -0x59], RCX,0x14030bbd1: XOR R12D, R12D,0x14030bbd4: LEA RCX, [RBP + -0x9],0x14030bbd8: CALL 0x140309c30,0x14030bbdd: NOP,0x14030bbde: CMP qword ptr [RAX + 0x18], 0xf,0x14030bbe3: JBE 0x14030bbea,0x14030bbe5: MOV RCX, qword ptr [RAX],0x14030bbe8: JMP 0x14030bbed,0x14030bbea: MOV RCX, RAX,0x14030bbed: MOV qword ptr [RBP + -0x59], RCX,0x14030bbf1: MOV RAX, qword ptr [RAX + 0x10],0x14030bbf5: MOV qword ptr [RBP + -0x51], RAX,0x14030bbf9: LEA RDX, [RBP + -0x59],0x14030bbfd: LEA RCX, [RBP + -0x29],0x14030bc01: CALL 0x14031a500,0x14030bc06: MOV RBX, RAX,0x14030bc09: MOV R8, qword ptr [RAX + 0x10],0x14030bc0d: MOV RCX, qword ptr [RAX + 0x18],0x14030bc11: MOV RAX, RCX,0x14030bc14: SUB RAX, R8,0x14030bc17: CMP RAX, 0xb,0x14030bc1b: JC 0x14030bca3,0x14030bc21: LEA RAX, [R8 + 0xb],0x14030bc25: MOV qword ptr [RBX + 0x10], RAX,0x14030bc29: CMP RCX, 0xf,0x14030bc2d: JBE 0x14030bc34,0x14030bc2f: MOV RDI, qword ptr [RBX],0x14030bc32: JMP 0x14030bc37,0x14030bc34: MOV RDI, RBX,0x14030bc37: LEA RAX, [0x1404493a3],0x14030bc3e: MOV R15D, 0xb,0x14030bc44: LEA R14, [0x140449398],0x14030bc4b: CMP RAX, RDI,0x14030bc4e: JBE 0x14030bc6b,0x14030bc50: LEA RAX, [RDI + R8*0x1],0x14030bc54: CMP R14, RAX,0x14030bc57: JA 0x14030bc6b,0x14030bc59: CMP RDI, R14,0x14030bc5c: JA 0x14030bc63,0x14030bc5e: MOV RSI, R12,0x14030bc61: JMP 0x14030bc6e,0x14030bc63: MOV RSI, RDI,0x14030bc66: SUB RSI, R14,0x14030bc69: JMP 0x14030bc6e,0x14030bc6b: MOV RSI, R15,0x14030bc6e: INC R8,0x14030bc71: LEA RCX, [RDI + 0xb],0x14030bc75: MOV RDX, RDI,0x14030bc78: CALL 0x14035f420,0x14030bc7d: MOV R8, RSI,0x14030bc80: MOV RDX, R14,0x14030bc83: MOV RCX, RDI,0x14030bc86: CALL 0x14035f420,0x14030bc8b: SUB R15, RSI,0x14030bc8e: LEA RDX, [R14 + 0xb],0x14030bc92: ADD RDX, RSI,0x14030bc95: LEA RCX, [RSI + RDI*0x1],0x14030bc99: MOV R8, R15,0x14030bc9c: CALL 0x14035f420,0x14030bca1: JMP 0x14030bcd0,0x14030bca3: MOV R15D, 0xb,0x14030bca9: MOV qword ptr [RSP + 0x28], R15,0x14030bcae: LEA R14, [0x140449398],0x14030bcb5: MOV qword ptr [RSP + 0x20], R14,0x14030bcba: XOR R9D, R9D,0x14030bcbd: MOVZX R8D, byte ptr [RBP + -0x69],0x14030bcc2: MOV EDX, R15D,0x14030bcc5: MOV RCX, RBX,0x14030bcc8: CALL 0x14005d6d0,0x14030bccd: MOV RBX, RAX,0x14030bcd0: XORPS XMM0, XMM0,0x14030bcd3: MOVUPS xmmword ptr [RBP + -0x49], XMM0,0x14030bcd7: MOV qword ptr [RBP + -0x39], R12,0x14030bcdb: MOV qword ptr [RBP + -0x31], R12,0x14030bcdf: MOVUPS XMM0, xmmword ptr [RBX],0x14030bce2: MOVUPS xmmword ptr [RBP + -0x49], XMM0,0x14030bce6: MOVUPS XMM1, xmmword ptr [RBX + 0x10],0x14030bcea: MOVUPS xmmword ptr [RBP + -0x39], XMM1,0x14030bcee: MOV qword ptr [RBX + 0x10], R12,0x14030bcf2: MOV qword ptr [RBX + 0x18], 0xf,0x14030bcfa: MOV byte ptr [RBX], 0x0,0x14030bcfd: MOV R8D, 0x5,0x14030bd03: LEA RDX, [0x14044938c],0x14030bd0a: LEA RCX, [RBP + -0x49],0x14030bd0e: CALL 0x1400013f0,0x14030bd13: XORPS XMM0, XMM0,0x14030bd16: MOVUPS xmmword ptr [R13], XMM0,0x14030bd1b: MOV qword ptr [R13 + 0x10], R12,0x14030bd1f: MOV qword ptr [R13 + 0x18], R12,0x14030bd23: MOVUPS XMM0, xmmword ptr [RAX],0x14030bd26: MOVUPS xmmword ptr [R13], XMM0,0x14030bd2b: MOVUPS XMM1, xmmword ptr [RAX + 0x10],0x14030bd2f: MOVUPS xmmword ptr [R13 + 0x10], XMM1,0x14030bd34: MOV qword ptr [RAX + 0x10], R12,0x14030bd38: MOV qword ptr [RAX + 0x18], 0xf,0x14030bd40: MOV byte ptr [RAX], 0x0,0x14030bd43: MOV RDX, qword ptr [RBP + -0x31],0x14030bd47: CMP RDX, 0xf,0x14030bd4b: JBE 0x14030bd7e,0x14030bd4d: INC RDX,0x14030bd50: MOV RCX, qword ptr [RBP + -0x49],0x14030bd54: CMP RDX, 0x1000,0x14030bd5b: JC 0x14030bd79,0x14030bd5d: MOV RAX, qword ptr [RCX + -0x8],0x14030bd61: SUB RCX, RAX,0x14030bd64: SUB RCX, 0x8,0x14030bd68: CMP RCX, 0x1f,0x14030bd6c: JA 0x14030be3a,0x14030bd72: ADD RDX, 0x27,0x14030bd76: MOV RCX, RAX,0x14030bd79: CALL 0x1403272f0,0x14030bd7e: MOV qword ptr [RBP + -0x39], R12,0x14030bd82: MOV qword ptr [RBP + -0x31], 0xf,0x14030bd8a: MOV byte ptr [RBP + -0x49], 0x0,0x14030bd8e: MOV RDX, qword ptr [RBP + -0x11],0x14030bd92: CMP RDX, 0xf,0x14030bd96: JBE 0x14030bdc9,0x14030bd98: INC RDX,0x14030bd9b: MOV RCX, qword ptr [RBP + -0x29],0x14030bd9f: CMP RDX, 0x1000,0x14030bda6: JC 0x14030bdc4,0x14030bda8: MOV RAX, qword ptr [RCX + -0x8],0x14030bdac: SUB RCX, RAX,0x14030bdaf: SUB RCX, 0x8,0x14030bdb3: CMP RCX, 0x1f,0x14030bdb7: JA 0x14030be41,0x14030bdbd: ADD RDX, 0x27,0x14030bdc1: MOV RCX, RAX,0x14030bdc4: CALL 0x1403272f0,0x14030bdc9: MOV qword ptr [RBP + -0x19], R12,0x14030bdcd: MOV qword ptr [RBP + -0x11], 0xf,0x14030bdd5: MOV byte ptr [RBP + -0x29], 0x0,0x14030bdd9: MOV RDX, qword ptr [RBP + 0xf],0x14030bddd: CMP RDX, 0xf,0x14030bde1: JBE 0x14030be10,0x14030bde3: INC RDX,0x14030bde6: MOV RCX, qword ptr [RBP + -0x9],0x14030bdea: CMP RDX, 0x1000,0x14030bdf1: JC 0x14030be0b,0x14030bdf3: MOV RAX, qword ptr [RCX + -0x8],0x14030bdf7: SUB RCX, RAX,0x14030bdfa: SUB RCX, 0x8,0x14030bdfe: CMP RCX, 0x1f,0x14030be02: JA 0x14030be48,0x14030be04: ADD RDX, 0x27,0x14030be08: MOV RCX, RAX,0x14030be0b: CALL 0x1403272f0,0x14030be10: MOV RAX, R13,0x14030be13: MOV RCX, qword ptr [RBP + 0x17],0x14030be17: XOR RCX, RSP,0x14030be1a: CALL 0x140327740,0x14030be1f: MOV RBX, qword ptr [RSP + 0x110],0x14030be27: ADD RSP, 0xc0,0x14030be2e: POP R15,0x14030be30: POP R14,0x14030be32: POP R13,0x14030be34: POP R12,0x14030be36: POP RDI,0x14030be37: POP RSI,0x14030be38: POP RBP,0x14030be39: RET,0x14030be3a: MOV ECX, 0x5,0x14030be3f: INT 0x29,0x14030be41: MOV ECX, 0x5,0x14030be46: INT 0x29,0x14030be48: MOV ECX, 0x5,0x14030be4d: INT 0x29,0x14030be4f: INT3

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f5580 | FUN_1401f5580 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1400013f0 | FUN_1400013f0           | [object Object] | [object Object] |
| 0x14005d6d0 | FUN_14005d6d0           | [object Object] | [object Object] |
| 0x140309c30 | FUN_140309c30           | [object Object] | [object Object] |
| 0x14031a500 | FUN_14031a500           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420           | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f55e3    | 0x14030bba0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6e3c    | 0x14030bba0    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14030bba0    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030bbb0    | stack:0xffffffffffffffa1 | [object Object]  |                  | [object Object] |
| 0x14030bbbc    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x14030bbc6    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030bbcd    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x14030bbd4    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x14030bbd8    | 0x140309c30              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bbe3    | 0x14030bbea              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bbe8    | 0x14030bbed              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bbed    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x14030bbf5    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x14030bbf9    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x14030bbfd    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x14030bc01    | 0x14031a500              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc1b    | 0x14030bca3              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc2d    | 0x14030bc34              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc32    | 0x14030bc37              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc37    | 0x1404493a3              | [object Object]  |                  | [object Object] |
| 0x14030bc44    | 0x140449398              | [object Object]  |                  | [object Object] |
| 0x14030bc4e    | 0x14030bc6b              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc57    | 0x14030bc6b              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc5c    | 0x14030bc63              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc61    | 0x14030bc6e              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc69    | 0x14030bc6e              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc78    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc80    | 0x140449398              | [object Object]  |                  | [object Object] |
| 0x14030bc86    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bc8e    | 0x1404493a3              | [object Object]  |                  | [object Object] |
| 0x14030bc92    | 0x1404493a3              | [object Object]  |                  | [object Object] |
| 0x14030bc9c    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bca1    | 0x14030bcd0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bca9    | stack:0xffffffffffffff30 | [object Object]  |                  | [object Object] |
| 0x14030bcae    | 0x140449398              | [object Object]  |                  | [object Object] |
| 0x14030bcb5    | stack:0xffffffffffffff28 | [object Object]  |                  | [object Object] |
| 0x14030bcb5    | 0x140449398              | [object Object]  |                  | [object Object] |
| 0x14030bcbd    | stack:0xffffffffffffff38 | [object Object]  |                  | [object Object] |
| 0x14030bcc8    | 0x14005d6d0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bcd3    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x14030bcd7    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x14030bcdb    | stack:0xffffffffffffff70 | [object Object]  |                  | [object Object] |
| 0x14030bce2    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x14030bcea    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x14030bd03    | 0x14044938c              | [object Object]  |                  | [object Object] |
| 0x14030bd0a    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x14030bd0e    | 0x1400013f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd43    | stack:0xffffffffffffff70 | [object Object]  |                  | [object Object] |
| 0x14030bd4b    | 0x14030bd7e              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd50    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x14030bd5b    | 0x14030bd79              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd6c    | 0x14030be3a              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd79    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd7e    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x14030bd82    | stack:0xffffffffffffff70 | [object Object]  |                  | [object Object] |
| 0x14030bd8a    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x14030bd8e    | stack:0xffffffffffffff90 | [object Object]  |                  | [object Object] |
| 0x14030bd96    | 0x14030bdc9              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bd9b    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x14030bda6    | 0x14030bdc4              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bdb7    | 0x14030be41              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bdc4    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bdc9    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x14030bdcd    | stack:0xffffffffffffff90 | [object Object]  |                  | [object Object] |
| 0x14030bdd5    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x14030bdd9    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x14030bde1    | 0x14030be10              | [object Object]  | [object Object]  | [object Object] |
| 0x14030bde6    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x14030bdf1    | 0x14030be0b              | [object Object]  | [object Object]  | [object Object] |
| 0x14030be02    | 0x14030be48              | [object Object]  | [object Object]  | [object Object] |
| 0x14030be0b    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030be13    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030be1a    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x14030be1f    | stack:0x10               | [object Object]  |                  | [object Object] |

## normalized_result.referenced_strings

| address     | value       | source_address |
|-------------|-------------|----------------|
| 0x14044938c | .json       | 0x14030bd03    |
| 0x140449398 | deactivate- | 0x14030bc37    |
| 0x140449398 | deactivate- | 0x14030bc44    |
| 0x140449398 | deactivate- | 0x14030bc80    |
| 0x140449398 | deactivate- | 0x14030bc8e    |
| 0x140449398 | deactivate- | 0x14030bc92    |
| 0x140449398 | deactivate- | 0x14030bcae    |
| 0x140449398 | deactivate- | 0x14030bcb5    |

## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x1400013f0 | FUN_1400013f0           | 0x14030bd0e    |
| 0x14005d6d0 | FUN_14005d6d0           | 0x14030bcc8    |
| 0x140309c30 | FUN_140309c30           | 0x14030bbd8    |
| 0x14030bbea | LAB_14030bbea           | 0x14030bbe3    |
| 0x14030bbed | LAB_14030bbed           | 0x14030bbe8    |
| 0x14030bc34 | LAB_14030bc34           | 0x14030bc2d    |
| 0x14030bc37 | LAB_14030bc37           | 0x14030bc32    |
| 0x14030bc63 | LAB_14030bc63           | 0x14030bc5c    |
| 0x14030bc6b | LAB_14030bc6b           | 0x14030bc4e    |
| 0x14030bc6b | LAB_14030bc6b           | 0x14030bc57    |
| 0x14030bc6e | LAB_14030bc6e           | 0x14030bc61    |
| 0x14030bc6e | LAB_14030bc6e           | 0x14030bc69    |
| 0x14030bca3 | LAB_14030bca3           | 0x14030bc1b    |
| 0x14030bcd0 | LAB_14030bcd0           | 0x14030bca1    |
| 0x14030bd79 | LAB_14030bd79           | 0x14030bd5b    |
| 0x14030bd7e | LAB_14030bd7e           | 0x14030bd4b    |
| 0x14030bdc4 | LAB_14030bdc4           | 0x14030bda6    |
| 0x14030bdc9 | LAB_14030bdc9           | 0x14030bd96    |
| 0x14030be0b | LAB_14030be0b           | 0x14030bdf1    |
| 0x14030be10 | LAB_14030be10           | 0x14030bde1    |
| 0x14030be3a | LAB_14030be3a           | 0x14030bd6c    |
| 0x14030be41 | LAB_14030be41           | 0x14030bdb7    |
| 0x14030be48 | LAB_14030be48           | 0x14030be02    |
| 0x14031a500 | FUN_14031a500           | 0x14030bc01    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x14030bd79    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x14030bdc4    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x14030be0b    |
| 0x140327740 | __security_check_cookie | 0x14030be1a    |
| 0x14035f420 | FUN_14035f420           | 0x14030bc78    |
| 0x14035f420 | FUN_14035f420           | 0x14030bc86    |
| 0x14035f420 | FUN_14035f420           | 0x14030bc9c    |
| 0x14044938c | s_.json_14044938c       | 0x14030bd03    |
| 0x140449398 | s_deactivate-_140449398 | 0x14030bc44    |
| 0x140449398 | s_deactivate-_140449398 | 0x14030bc80    |
| 0x140449398 | s_deactivate-_140449398 | 0x14030bcae    |
| 0x140449398 | s_deactivate-_140449398 | 0x14030bcb5    |
| 0x1404493a3 | s__140449398+0xb        | 0x14030bc37    |
| 0x1404493a3 | s__140449398+0xb        | 0x14030bc8e    |
| 0x1404493a3 | s__140449398+0xb        | 0x14030bc92    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x14030bbbc    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14030bba0 | 0x14030bbe5 | 0x14030bbe5,0x14030bbea |
| 0x14030bbe5 | 0x14030bbea | 0x14030bbed             |
| 0x14030bbea | 0x14030bbed | 0x14030bbed             |
| 0x14030bbed | 0x14030bc21 | 0x14030bc21,0x14030bca3 |
| 0x14030bc21 | 0x14030bc2f | 0x14030bc2f,0x14030bc34 |
| 0x14030bc2f | 0x14030bc34 | 0x14030bc37             |
| 0x14030bc34 | 0x14030bc37 | 0x14030bc37             |
| 0x14030bc37 | 0x14030bc50 | 0x14030bc50,0x14030bc6b |
| 0x14030bc50 | 0x14030bc59 | 0x14030bc59,0x14030bc6b |
| 0x14030bc59 | 0x14030bc5e | 0x14030bc5e,0x14030bc63 |
| 0x14030bc5e | 0x14030bc63 | 0x14030bc6e             |
| 0x14030bc63 | 0x14030bc6b | 0x14030bc6e             |
| 0x14030bc6b | 0x14030bc6e | 0x14030bc6e             |
| 0x14030bc6e | 0x14030bca3 | 0x14030bcd0             |
| 0x14030bca3 | 0x14030bcd0 | 0x14030bcd0             |
| 0x14030bcd0 | 0x14030bd4d | 0x14030bd4d,0x14030bd7e |
| 0x14030bd4d | 0x14030bd5d | 0x14030bd5d,0x14030bd79 |
| 0x14030bd5d | 0x14030bd72 | 0x14030bd72,0x14030be3a |
| 0x14030bd72 | 0x14030bd79 | 0x14030bd79             |
| 0x14030bd79 | 0x14030bd7e | 0x14030bd7e             |
| 0x14030bd7e | 0x14030bd98 | 0x14030bd98,0x14030bdc9 |
| 0x14030bd98 | 0x14030bda8 | 0x14030bda8,0x14030bdc4 |
| 0x14030bda8 | 0x14030bdbd | 0x14030bdbd,0x14030be41 |
| 0x14030bdbd | 0x14030bdc4 | 0x14030bdc4             |
| 0x14030bdc4 | 0x14030bdc9 | 0x14030bdc9             |
| 0x14030bdc9 | 0x14030bde3 | 0x14030bde3,0x14030be10 |
| 0x14030bde3 | 0x14030bdf3 | 0x14030bdf3,0x14030be0b |
| 0x14030bdf3 | 0x14030be04 | 0x14030be04,0x14030be48 |
| 0x14030be04 | 0x14030be0b | 0x14030be0b             |
| 0x14030be0b | 0x14030be10 | 0x14030be10             |
| 0x14030be10 | 0x14030be3a |                         |
| 0x14030be3a | 0x14030be41 | 0x14030be41             |
| 0x14030be41 | 0x14030be48 | 0x14030be48             |
| 0x14030be48 | 0x14030be50 |                         |

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

| id               | address     | sequence | opcode     | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x14030bbb5#2067 | 0x14030bbb5 | 2067     | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbc3#38   | 0x14030bbc3 | 38       | INT_XOR    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbc3#2109 | 0x14030bbc3 | 2109     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbd1#1049 | 0x14030bbd1 | 1049     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbd4#2068 | 0x14030bbd4 | 2068     | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#66   | 0x14030bbd8 | 66       | CALL       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1485 | 0x14030bbd8 | 1485     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1566 | 0x14030bbd8 | 1566     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1586 | 0x14030bbd8 | 1586     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1606 | 0x14030bbd8 | 1606     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1626 | 0x14030bbd8 | 1626     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1765 | 0x14030bbd8 | 1765     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1785 | 0x14030bbd8 | 1785     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1805 | 0x14030bbd8 | 1805     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1825 | 0x14030bbd8 | 1825     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1845 | 0x14030bbd8 | 1845     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1865 | 0x14030bbd8 | 1865     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#1885 | 0x14030bbd8 | 1885     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbd8#2108 | 0x14030bbd8 | 2108     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbd8#2110 | 0x14030bbd8 | 2110     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbde#68   | 0x14030bbde | 68       | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbde#2069 | 0x14030bbde | 2069     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bbe3#79   | 0x14030bbe3 | 79       | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbe3#80   | 0x14030bbe3 | 80       | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bbe3#2105 | 0x14030bbe3 | 2105     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbe3#2111 | 0x14030bbe3 | 2111     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbe5#81   | 0x14030bbe5 | 81       | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbe5#2112 | 0x14030bbe5 | 2112     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbe8#83   | 0x14030bbe8 | 83       | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x14030bbe8#2104 | 0x14030bbe8 | 2104     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bbed#953  | 0x14030bbed | 953      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbf1#88   | 0x14030bbf1 | 88       | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbf1#2070 | 0x14030bbf1 | 2070     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bbf9#2071 | 0x14030bbf9 | 2071     | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bbfd#2072 | 0x14030bbfd | 2072     | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#99   | 0x14030bc01 | 99       | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc01#1486 | 0x14030bc01 | 1486     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1567 | 0x14030bc01 | 1567     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1587 | 0x14030bc01 | 1587     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1607 | 0x14030bc01 | 1607     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1627 | 0x14030bc01 | 1627     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1647 | 0x14030bc01 | 1647     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1766 | 0x14030bc01 | 1766     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1786 | 0x14030bc01 | 1786     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1806 | 0x14030bc01 | 1806     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1826 | 0x14030bc01 | 1826     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1846 | 0x14030bc01 | 1846     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1866 | 0x14030bc01 | 1866     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#1886 | 0x14030bc01 | 1886     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc01#2113 | 0x14030bc01 | 2113     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc09#102  | 0x14030bc09 | 102      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc09#2073 | 0x14030bc09 | 2073     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc0d#105  | 0x14030bc0d | 105      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc0d#2074 | 0x14030bc0d | 2074     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc14#110  | 0x14030bc14 | 110      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc17#118  | 0x14030bc17 | 118      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc1b#127  | 0x14030bc1b | 127      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bc21#128  | 0x14030bc21 | 128      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc25#132  | 0x14030bc25 | 132      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bc25#1501 | 0x14030bc25 | 1501     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc25#2075 | 0x14030bc25 | 2075     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc2d#143  | 0x14030bc2d | 143      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc2d#144  | 0x14030bc2d | 144      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bc2d#2107 | 0x14030bc2d | 2107     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc2f#145  | 0x14030bc2f | 145      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc2f#2115 | 0x14030bc2f | 2115     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc32#147  | 0x14030bc32 | 147      | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x14030bc32#2106 | 0x14030bc32 | 2106     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc37#989  | 0x14030bc37 | 989      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc4e#161  | 0x14030bc4e | 161      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc4e#162  | 0x14030bc4e | 162      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bc4e#2066 | 0x14030bc4e | 2066     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc50#164  | 0x14030bc50 | 164      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc50#2116 | 0x14030bc50 | 2116     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc50#2117 | 0x14030bc50 | 2117     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc57#177  | 0x14030bc57 | 177      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc57#178  | 0x14030bc57 | 178      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bc57#2062 | 0x14030bc57 | 2062     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc5c#189  | 0x14030bc5c | 189      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc5c#191  | 0x14030bc5c | 191      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bc5c#2063 | 0x14030bc5c | 2063     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc66#2076 | 0x14030bc66 | 2076     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc69#678  | 0x14030bc69 | 678      | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x14030bc6b#679  | 0x14030bc6b | 679      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc6e#195  | 0x14030bc6e | 195      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc6e#987  | 0x14030bc6e | 987      | MULTIEQUAL | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bc71#202  | 0x14030bc71 | 202      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc71#2118 | 0x14030bc71 | 2118     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc71#2119 | 0x14030bc71 | 2119     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc78#207  | 0x14030bc78 | 207      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14030bc78#1488 | 0x14030bc78 | 1488     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1569 | 0x14030bc78 | 1569     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1589 | 0x14030bc78 | 1589     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1629 | 0x14030bc78 | 1629     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1649 | 0x14030bc78 | 1649     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1768 | 0x14030bc78 | 1768     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1788 | 0x14030bc78 | 1788     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1808 | 0x14030bc78 | 1808     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1828 | 0x14030bc78 | 1828     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1848 | 0x14030bc78 | 1848     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1868 | 0x14030bc78 | 1868     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc78#1888 | 0x14030bc78 | 1888     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#213  | 0x14030bc86 | 213      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14030bc86#1489 | 0x14030bc86 | 1489     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1570 | 0x14030bc86 | 1570     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1590 | 0x14030bc86 | 1590     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1630 | 0x14030bc86 | 1630     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1650 | 0x14030bc86 | 1650     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1769 | 0x14030bc86 | 1769     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1789 | 0x14030bc86 | 1789     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1809 | 0x14030bc86 | 1809     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1829 | 0x14030bc86 | 1829     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1849 | 0x14030bc86 | 1849     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1869 | 0x14030bc86 | 1869     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#1889 | 0x14030bc86 | 1889     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc86#2064 | 0x14030bc86 | 2064     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc8b#216  | 0x14030bc8b | 216      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc8b#2120 | 0x14030bc8b | 2120     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc92#227  | 0x14030bc92 | 227      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc92#2121 | 0x14030bc92 | 2121     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc92#2122 | 0x14030bc92 | 2122     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc95#235  | 0x14030bc95 | 235      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc95#2123 | 0x14030bc95 | 2123     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc95#2124 | 0x14030bc95 | 2124     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc95#2125 | 0x14030bc95 | 2125     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bc9c#240  | 0x14030bc9c | 240      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x14030bc9c#1490 | 0x14030bc9c | 1490     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1571 | 0x14030bc9c | 1571     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1591 | 0x14030bc9c | 1591     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1631 | 0x14030bc9c | 1631     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1651 | 0x14030bc9c | 1651     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1770 | 0x14030bc9c | 1770     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1790 | 0x14030bc9c | 1790     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1810 | 0x14030bc9c | 1810     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1830 | 0x14030bc9c | 1830     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1850 | 0x14030bc9c | 1850     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1870 | 0x14030bc9c | 1870     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bc9c#1890 | 0x14030bc9c | 1890     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bca1#241  | 0x14030bca1 | 241      | BRANCH     | true    | member           | [object Object]                                                                 |                 |
| 0x14030bca9#684  | 0x14030bca9 | 684      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bcb5#688  | 0x14030bcb5 | 688      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bcc8#708  | 0x14030bcc8 | 708      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x14030bcc8#1487 | 0x14030bcc8 | 1487     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1568 | 0x14030bcc8 | 1568     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1588 | 0x14030bcc8 | 1588     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1628 | 0x14030bcc8 | 1628     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1648 | 0x14030bcc8 | 1648     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1767 | 0x14030bcc8 | 1767     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1787 | 0x14030bcc8 | 1787     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1807 | 0x14030bcc8 | 1807     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1827 | 0x14030bcc8 | 1827     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1847 | 0x14030bcc8 | 1847     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1867 | 0x14030bcc8 | 1867     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#1887 | 0x14030bcc8 | 1887     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcc8#2114 | 0x14030bcc8 | 2114     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bcd0#980  | 0x14030bcd0 | 980      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1525 | 0x14030bcd0 | 1525     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1585 | 0x14030bcd0 | 1585     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1605 | 0x14030bcd0 | 1605     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1645 | 0x14030bcd0 | 1645     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1665 | 0x14030bcd0 | 1665     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1783 | 0x14030bcd0 | 1783     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1804 | 0x14030bcd0 | 1804     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1823 | 0x14030bcd0 | 1823     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1843 | 0x14030bcd0 | 1843     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1864 | 0x14030bcd0 | 1864     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1884 | 0x14030bcd0 | 1884     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcd0#1904 | 0x14030bcd0 | 1904     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcdf#2057 | 0x14030bcdf | 2057     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcdf#2058 | 0x14030bcdf | 2058     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcdf#2077 | 0x14030bcdf | 2077     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bce6#2059 | 0x14030bce6 | 2059     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bce6#2060 | 0x14030bce6 | 2060     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bce6#2078 | 0x14030bce6 | 2078     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bce6#2079 | 0x14030bce6 | 2079     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bcee#276  | 0x14030bcee | 276      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bcee#1502 | 0x14030bcee | 1502     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcee#2080 | 0x14030bcee | 2080     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bcf2#279  | 0x14030bcf2 | 279      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bcf2#1503 | 0x14030bcf2 | 1503     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcf2#2081 | 0x14030bcf2 | 2081     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bcfa#281  | 0x14030bcfa | 281      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bcfa#1504 | 0x14030bcfa | 1504     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bcfa#2126 | 0x14030bcfa | 2126     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd0a#2082 | 0x14030bd0a | 2082     | PTRSUB     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#288  | 0x14030bd0e | 288      | CALL       | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030bd0e#1491 | 0x14030bd0e | 1491     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1572 | 0x14030bd0e | 1572     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1592 | 0x14030bd0e | 1592     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1632 | 0x14030bd0e | 1632     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1652 | 0x14030bd0e | 1652     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1678 | 0x14030bd0e | 1678     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1702 | 0x14030bd0e | 1702     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1726 | 0x14030bd0e | 1726     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1750 | 0x14030bd0e | 1750     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1771 | 0x14030bd0e | 1771     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1791 | 0x14030bd0e | 1791     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1811 | 0x14030bd0e | 1811     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1831 | 0x14030bd0e | 1831     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1851 | 0x14030bd0e | 1851     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1871 | 0x14030bd0e | 1871     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#1891 | 0x14030bd0e | 1891     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd0e#2061 | 0x14030bd0e | 2061     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd0e#2127 | 0x14030bd0e | 2127     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd16#1482 | 0x14030bd16 | 1482     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd16#1483 | 0x14030bd16 | 1483     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd16#1518 | 0x14030bd16 | 1518     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd16#1519 | 0x14030bd16 | 1519     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd16#2083 | 0x14030bd16 | 2083     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd1b#297  | 0x14030bd1b | 297      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd1b#1505 | 0x14030bd1b | 1505     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd1b#2084 | 0x14030bd1b | 2084     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd1f#300  | 0x14030bd1f | 300      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd1f#1506 | 0x14030bd1f | 1506     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd1f#2085 | 0x14030bd1f | 2085     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd23#1447 | 0x14030bd23 | 1447     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd23#1448 | 0x14030bd23 | 1448     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd23#1450 | 0x14030bd23 | 1450     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd23#1452 | 0x14030bd23 | 1452     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd23#2086 | 0x14030bd23 | 2086     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd23#2087 | 0x14030bd23 | 2087     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd23#2088 | 0x14030bd23 | 2088     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd26#1454 | 0x14030bd26 | 1454     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd26#1455 | 0x14030bd26 | 1455     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd26#1456 | 0x14030bd26 | 1456     | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#1457 | 0x14030bd26 | 1457     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd26#1459 | 0x14030bd26 | 1459     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd26#1460 | 0x14030bd26 | 1460     | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#1510 | 0x14030bd26 | 1510     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#1511 | 0x14030bd26 | 1511     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#1512 | 0x14030bd26 | 1512     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#1513 | 0x14030bd26 | 1513     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd26#2089 | 0x14030bd26 | 2089     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd26#2128 | 0x14030bd26 | 2128     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd26#2129 | 0x14030bd26 | 2129     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd26#2130 | 0x14030bd26 | 2130     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd26#2131 | 0x14030bd26 | 2131     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd26#2132 | 0x14030bd26 | 2132     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd26#2133 | 0x14030bd26 | 2133     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2b#1461 | 0x14030bd2b | 1461     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2b#1462 | 0x14030bd2b | 1462     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2b#1464 | 0x14030bd2b | 1464     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2b#1466 | 0x14030bd2b | 1466     | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2b#2090 | 0x14030bd2b | 2090     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2b#2091 | 0x14030bd2b | 2091     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2b#2092 | 0x14030bd2b | 2092     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2b#2093 | 0x14030bd2b | 2093     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2f#1468 | 0x14030bd2f | 1468     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd2f#1469 | 0x14030bd2f | 1469     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd2f#1470 | 0x14030bd2f | 1470     | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#1471 | 0x14030bd2f | 1471     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd2f#1473 | 0x14030bd2f | 1473     | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd2f#1474 | 0x14030bd2f | 1474     | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#1514 | 0x14030bd2f | 1514     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#1515 | 0x14030bd2f | 1515     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#1516 | 0x14030bd2f | 1516     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#1517 | 0x14030bd2f | 1517     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd2f#2094 | 0x14030bd2f | 2094     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2f#2095 | 0x14030bd2f | 2095     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd2f#2134 | 0x14030bd2f | 2134     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2f#2135 | 0x14030bd2f | 2135     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2f#2136 | 0x14030bd2f | 2136     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2f#2137 | 0x14030bd2f | 2137     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2f#2138 | 0x14030bd2f | 2138     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd2f#2139 | 0x14030bd2f | 2139     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd34#321  | 0x14030bd34 | 321      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd34#1507 | 0x14030bd34 | 1507     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd34#2096 | 0x14030bd34 | 2096     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd34#2140 | 0x14030bd34 | 2140     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd38#324  | 0x14030bd38 | 324      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd38#1508 | 0x14030bd38 | 1508     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd38#2097 | 0x14030bd38 | 2097     | PTRADD     | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x14030bd38#2141 | 0x14030bd38 | 2141     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd40#326  | 0x14030bd40 | 326      | STORE      | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd40#1509 | 0x14030bd40 | 1509     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd40#2142 | 0x14030bd40 | 2142     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd4b#340  | 0x14030bd4b | 340      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd4b#341  | 0x14030bd4b | 341      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bd4d#343  | 0x14030bd4d | 343      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd54#354  | 0x14030bd54 | 354      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd5b#363  | 0x14030bd5b | 363      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bd5b#2103 | 0x14030bd5b | 2103     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd5d#364  | 0x14030bd5d | 364      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd5d#365  | 0x14030bd5d | 365      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd5d#2143 | 0x14030bd5d | 2143     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd61#369  | 0x14030bd61 | 369      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd64#378  | 0x14030bd64 | 378      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd6c#395  | 0x14030bd6c | 395      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd6c#397  | 0x14030bd6c | 397      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bd72#400  | 0x14030bd72 | 400      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#410  | 0x14030bd79 | 410      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bd79#950  | 0x14030bd79 | 950      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#977  | 0x14030bd79 | 977      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1493 | 0x14030bd79 | 1493     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1574 | 0x14030bd79 | 1574     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1594 | 0x14030bd79 | 1594     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1634 | 0x14030bd79 | 1634     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1654 | 0x14030bd79 | 1654     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1680 | 0x14030bd79 | 1680     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1704 | 0x14030bd79 | 1704     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1728 | 0x14030bd79 | 1728     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1752 | 0x14030bd79 | 1752     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1773 | 0x14030bd79 | 1773     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1793 | 0x14030bd79 | 1793     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1813 | 0x14030bd79 | 1813     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1833 | 0x14030bd79 | 1833     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1853 | 0x14030bd79 | 1853     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1873 | 0x14030bd79 | 1873     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd79#1893 | 0x14030bd79 | 1893     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#413  | 0x14030bd7e | 413      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd7e#1524 | 0x14030bd7e | 1524     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1584 | 0x14030bd7e | 1584     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1604 | 0x14030bd7e | 1604     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1644 | 0x14030bd7e | 1644     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1664 | 0x14030bd7e | 1664     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1690 | 0x14030bd7e | 1690     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1714 | 0x14030bd7e | 1714     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1782 | 0x14030bd7e | 1782     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1803 | 0x14030bd7e | 1803     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1822 | 0x14030bd7e | 1822     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1842 | 0x14030bd7e | 1842     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1863 | 0x14030bd7e | 1863     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1883 | 0x14030bd7e | 1883     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd7e#1903 | 0x14030bd7e | 1903     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd82#416  | 0x14030bd82 | 416      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bd8a#1667 | 0x14030bd8a | 1667     | INT_AND    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd96#433  | 0x14030bd96 | 433      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd96#434  | 0x14030bd96 | 434      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bd98#436  | 0x14030bd98 | 436      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd9b#1764 | 0x14030bd9b | 1764     | PIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bd9f#447  | 0x14030bd9f | 447      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bda6#456  | 0x14030bda6 | 456      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bda6#2102 | 0x14030bda6 | 2102     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bda8#457  | 0x14030bda8 | 457      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bda8#458  | 0x14030bda8 | 458      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bda8#2145 | 0x14030bda8 | 2145     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bdac#462  | 0x14030bdac | 462      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdaf#471  | 0x14030bdaf | 471      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdb7#488  | 0x14030bdb7 | 488      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdb7#490  | 0x14030bdb7 | 490      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bdbd#493  | 0x14030bdbd | 493      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#503  | 0x14030bdc4 | 503      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030bdc4#947  | 0x14030bdc4 | 947      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#973  | 0x14030bdc4 | 973      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1495 | 0x14030bdc4 | 1495     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1576 | 0x14030bdc4 | 1576     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1596 | 0x14030bdc4 | 1596     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1636 | 0x14030bdc4 | 1636     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1656 | 0x14030bdc4 | 1656     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1682 | 0x14030bdc4 | 1682     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1706 | 0x14030bdc4 | 1706     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1730 | 0x14030bdc4 | 1730     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1754 | 0x14030bdc4 | 1754     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1855 | 0x14030bdc4 | 1855     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1875 | 0x14030bdc4 | 1875     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc4#1895 | 0x14030bdc4 | 1895     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#506  | 0x14030bdc9 | 506      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bdc9#1521 | 0x14030bdc9 | 1521     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1581 | 0x14030bdc9 | 1581     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1601 | 0x14030bdc9 | 1601     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1641 | 0x14030bdc9 | 1641     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1661 | 0x14030bdc9 | 1661     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1687 | 0x14030bdc9 | 1687     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1711 | 0x14030bdc9 | 1711     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1735 | 0x14030bdc9 | 1735     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1759 | 0x14030bdc9 | 1759     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1860 | 0x14030bdc9 | 1860     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1880 | 0x14030bdc9 | 1880     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdc9#1900 | 0x14030bdc9 | 1900     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdcd#509  | 0x14030bdcd | 509      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bdd5#512  | 0x14030bdd5 | 512      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bde1#526  | 0x14030bde1 | 526      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bde1#527  | 0x14030bde1 | 527      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bde3#529  | 0x14030bde3 | 529      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdea#540  | 0x14030bdea | 540      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdf1#549  | 0x14030bdf1 | 549      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030bdf1#2101 | 0x14030bdf1 | 2101     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bdf3#550  | 0x14030bdf3 | 550      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdf3#551  | 0x14030bdf3 | 551      | LOAD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdf3#2147 | 0x14030bdf3 | 2147     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030bdf7#555  | 0x14030bdf7 | 555      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030bdfa#564  | 0x14030bdfa | 564      | INT_SUB    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be02#581  | 0x14030be02 | 581      | INT_LESS   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be02#583  | 0x14030be02 | 583      | CBRANCH    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be04#586  | 0x14030be04 | 586      | INT_ADD    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#596  | 0x14030be0b | 596      | CALL       | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x14030be0b#944  | 0x14030be0b | 944      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#971  | 0x14030be0b | 971      | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1498 | 0x14030be0b | 1498     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1579 | 0x14030be0b | 1579     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1599 | 0x14030be0b | 1599     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1639 | 0x14030be0b | 1639     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1659 | 0x14030be0b | 1659     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1685 | 0x14030be0b | 1685     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1709 | 0x14030be0b | 1709     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1733 | 0x14030be0b | 1733     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1757 | 0x14030be0b | 1757     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1778 | 0x14030be0b | 1778     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1818 | 0x14030be0b | 1818     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1838 | 0x14030be0b | 1838     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be0b#1898 | 0x14030be0b | 1898     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be10#597  | 0x14030be10 | 597      | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be10#1520 | 0x14030be10 | 1520     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be39#655  | 0x14030be39 | 655      | RETURN     | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be39#1499 | 0x14030be39 | 1499     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be3f#666  | 0x14030be3f | 666      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#667  | 0x14030be3f | 667      | CALLIND    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be3f#1492 | 0x14030be3f | 1492     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1573 | 0x14030be3f | 1573     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1593 | 0x14030be3f | 1593     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1633 | 0x14030be3f | 1633     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1653 | 0x14030be3f | 1653     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1679 | 0x14030be3f | 1679     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1703 | 0x14030be3f | 1703     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1727 | 0x14030be3f | 1727     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1751 | 0x14030be3f | 1751     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1772 | 0x14030be3f | 1772     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1812 | 0x14030be3f | 1812     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1832 | 0x14030be3f | 1832     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#1892 | 0x14030be3f | 1892     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be3f#2144 | 0x14030be3f | 2144     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be41#1522 | 0x14030be41 | 1522     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1582 | 0x14030be41 | 1582     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1602 | 0x14030be41 | 1602     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1642 | 0x14030be41 | 1642     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1662 | 0x14030be41 | 1662     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1688 | 0x14030be41 | 1688     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1712 | 0x14030be41 | 1712     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1736 | 0x14030be41 | 1736     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1760 | 0x14030be41 | 1760     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1781 | 0x14030be41 | 1781     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1821 | 0x14030be41 | 1821     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1841 | 0x14030be41 | 1841     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be41#1901 | 0x14030be41 | 1901     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#663  | 0x14030be46 | 663      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#664  | 0x14030be46 | 664      | CALLIND    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be46#1494 | 0x14030be46 | 1494     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1575 | 0x14030be46 | 1575     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1595 | 0x14030be46 | 1595     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1635 | 0x14030be46 | 1635     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1655 | 0x14030be46 | 1655     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1681 | 0x14030be46 | 1681     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1705 | 0x14030be46 | 1705     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1729 | 0x14030be46 | 1729     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1753 | 0x14030be46 | 1753     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1774 | 0x14030be46 | 1774     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1814 | 0x14030be46 | 1814     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1834 | 0x14030be46 | 1834     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#1894 | 0x14030be46 | 1894     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be46#2146 | 0x14030be46 | 2146     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be48#1523 | 0x14030be48 | 1523     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1583 | 0x14030be48 | 1583     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1603 | 0x14030be48 | 1603     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1643 | 0x14030be48 | 1643     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1663 | 0x14030be48 | 1663     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1689 | 0x14030be48 | 1689     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1713 | 0x14030be48 | 1713     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1737 | 0x14030be48 | 1737     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1761 | 0x14030be48 | 1761     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1784 | 0x14030be48 | 1784     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1824 | 0x14030be48 | 1824     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1844 | 0x14030be48 | 1844     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be48#1902 | 0x14030be48 | 1902     | MULTIEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#657  | 0x14030be4d | 657      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#658  | 0x14030be4d | 658      | CALLIND    | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be4d#1496 | 0x14030be4d | 1496     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1577 | 0x14030be4d | 1577     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1597 | 0x14030be4d | 1597     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1637 | 0x14030be4d | 1637     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1657 | 0x14030be4d | 1657     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1683 | 0x14030be4d | 1683     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1707 | 0x14030be4d | 1707     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1731 | 0x14030be4d | 1731     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1755 | 0x14030be4d | 1755     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1776 | 0x14030be4d | 1776     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1816 | 0x14030be4d | 1816     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1836 | 0x14030be4d | 1836     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#1896 | 0x14030be4d | 1896     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4d#2148 | 0x14030be4d | 2148     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be4f#659  | 0x14030be4f | 659      | CALLOTHER  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#660  | 0x14030be4f | 660      | CALLIND    | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be4f#661  | 0x14030be4f | 661      | RETURN     | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x14030be4f#1497 | 0x14030be4f | 1497     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1500 | 0x14030be4f | 1500     | COPY       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be4f#1578 | 0x14030be4f | 1578     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1598 | 0x14030be4f | 1598     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1638 | 0x14030be4f | 1638     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1658 | 0x14030be4f | 1658     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1684 | 0x14030be4f | 1684     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1708 | 0x14030be4f | 1708     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1732 | 0x14030be4f | 1732     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1756 | 0x14030be4f | 1756     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1777 | 0x14030be4f | 1777     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1817 | 0x14030be4f | 1817     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1837 | 0x14030be4f | 1837     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#1897 | 0x14030be4f | 1897     | INDIRECT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x14030be4f#2149 | 0x14030be4f | 2149     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |
| 0x14030be4f#2150 | 0x14030be4f | 2150     | CAST       | true    | member           | [object Object]                                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x14030bbc3#2109 | 0x14030bbc3#38   | 1           |
| 0x14030bbb5#2067 | 0x14030bbc3#2109 | 0           |
| 0x14030bbd4#2068 | 0x14030bbd8#66   | 1           |
| 0x14030bbd8#2108 | 0x14030bbd8#1626 | 0           |
| 0x14030bbc3#38   | 0x14030bbd8#1885 | 0           |
| 0x14030bbd8#66   | 0x14030bbd8#2110 | 0           |
| 0x14030bbde#2069 | 0x14030bbde#68   | 1           |
| 0x14030bbd8#2110 | 0x14030bbde#2069 | 0           |
| 0x14030bbe3#2111 | 0x14030bbe3#79   | 1           |
| 0x14030bbe3#79   | 0x14030bbe3#80   | 1           |
| 0x14030bbd8#2110 | 0x14030bbe3#2105 | 0           |
| 0x14030bbde#68   | 0x14030bbe3#2111 | 0           |
| 0x14030bbd8#2110 | 0x14030bbe5#81   | 1           |
| 0x14030bbe5#81   | 0x14030bbe5#2112 | 0           |
| 0x14030bbe5#2112 | 0x14030bbe8#2104 | 0           |
| 0x14030bbe8#2104 | 0x14030bbed#953  | 0           |
| 0x14030bbe3#2105 | 0x14030bbed#953  | 1           |
| 0x14030bbf1#2070 | 0x14030bbf1#88   | 1           |
| 0x14030bbd8#2110 | 0x14030bbf1#2070 | 0           |
| 0x14030bbfd#2072 | 0x14030bc01#99   | 1           |
| 0x14030bbf9#2071 | 0x14030bc01#99   | 2           |
| 0x14030bbd8#1485 | 0x14030bc01#1486 | 0           |
| 0x14030bbd8#1566 | 0x14030bc01#1567 | 0           |
| 0x14030bbd8#1586 | 0x14030bc01#1587 | 0           |
| 0x14030bbd8#1606 | 0x14030bc01#1607 | 0           |
| 0x14030bbed#953  | 0x14030bc01#1627 | 0           |
| 0x14030bbf1#88   | 0x14030bc01#1647 | 0           |
| 0x14030bbd8#1765 | 0x14030bc01#1766 | 0           |
| 0x14030bbd8#1785 | 0x14030bc01#1786 | 0           |
| 0x14030bbd8#1805 | 0x14030bc01#1806 | 0           |
| 0x14030bbd8#1825 | 0x14030bc01#1826 | 0           |
| 0x14030bbd8#1845 | 0x14030bc01#1846 | 0           |
| 0x14030bbd8#1865 | 0x14030bc01#1866 | 0           |
| 0x14030bbd8#1885 | 0x14030bc01#1886 | 0           |
| 0x14030bc01#99   | 0x14030bc01#2113 | 0           |
| 0x14030bc09#2073 | 0x14030bc09#102  | 1           |
| 0x14030bc01#2113 | 0x14030bc09#2073 | 0           |
| 0x14030bc0d#2074 | 0x14030bc0d#105  | 1           |
| 0x14030bc01#2113 | 0x14030bc0d#2074 | 0           |
| 0x14030bc0d#105  | 0x14030bc14#110  | 0           |
| 0x14030bc09#102  | 0x14030bc14#110  | 1           |
| 0x14030bc14#110  | 0x14030bc17#118  | 0           |
| 0x14030bc17#118  | 0x14030bc1b#127  | 1           |
| 0x14030bc09#102  | 0x14030bc21#128  | 0           |
| 0x14030bc25#2075 | 0x14030bc25#132  | 1           |
| 0x14030bc21#128  | 0x14030bc25#132  | 2           |
| 0x14030bc01#1486 | 0x14030bc25#1501 | 0           |
| 0x14030bc01#2113 | 0x14030bc25#2075 | 0           |
| 0x14030bc0d#105  | 0x14030bc2d#143  | 1           |
| 0x14030bc2d#143  | 0x14030bc2d#144  | 1           |
| 0x14030bc01#2113 | 0x14030bc2d#2107 | 0           |
| 0x14030bc01#2113 | 0x14030bc2f#145  | 1           |
| 0x14030bc2f#145  | 0x14030bc2f#2115 | 0           |
| 0x14030bc2f#2115 | 0x14030bc32#2106 | 0           |
| 0x14030bc32#2106 | 0x14030bc37#989  | 0           |
| 0x14030bc2d#2107 | 0x14030bc37#989  | 1           |
| 0x14030bc4e#2066 | 0x14030bc4e#161  | 0           |
| 0x14030bc37#989  | 0x14030bc4e#161  | 1           |
| 0x14030bc4e#161  | 0x14030bc4e#162  | 1           |
| 0x14030bc50#2116 | 0x14030bc50#164  | 0           |
| 0x14030bc09#102  | 0x14030bc50#164  | 1           |
| 0x14030bc37#989  | 0x14030bc50#2116 | 0           |
| 0x14030bc50#164  | 0x14030bc50#2117 | 0           |
| 0x14030bc50#2117 | 0x14030bc57#177  | 0           |
| 0x14030bc57#2062 | 0x14030bc57#177  | 1           |
| 0x14030bc57#177  | 0x14030bc57#178  | 1           |
| 0x14030bc5c#2063 | 0x14030bc5c#189  | 0           |
| 0x14030bc37#989  | 0x14030bc5c#189  | 1           |
| 0x14030bc5c#189  | 0x14030bc5c#191  | 1           |
| 0x14030bc37#989  | 0x14030bc66#2076 | 0           |
| 0x14030bc09#102  | 0x14030bc6e#195  | 0           |
| 0x14030bc66#2076 | 0x14030bc6e#987  | 0           |
| 0x14030bc6b#679  | 0x14030bc6e#987  | 1           |
| 0x14030bbd1#1049 | 0x14030bc6e#987  | 2           |
| 0x14030bc71#2118 | 0x14030bc71#202  | 0           |
| 0x14030bc37#989  | 0x14030bc71#2118 | 0           |
| 0x14030bc71#202  | 0x14030bc71#2119 | 0           |
| 0x14030bc71#2119 | 0x14030bc78#207  | 1           |
| 0x14030bc37#989  | 0x14030bc78#207  | 2           |
| 0x14030bc6e#195  | 0x14030bc78#207  | 3           |
| 0x14030bc25#1501 | 0x14030bc78#1488 | 0           |
| 0x14030bc01#1567 | 0x14030bc78#1569 | 0           |
| 0x14030bc01#1587 | 0x14030bc78#1589 | 0           |
| 0x14030bc01#1627 | 0x14030bc78#1629 | 0           |
| 0x14030bc01#1647 | 0x14030bc78#1649 | 0           |
| 0x14030bc01#1766 | 0x14030bc78#1768 | 0           |
| 0x14030bc01#1786 | 0x14030bc78#1788 | 0           |
| 0x14030bc01#1806 | 0x14030bc78#1808 | 0           |
| 0x14030bc01#1826 | 0x14030bc78#1828 | 0           |
| 0x14030bc01#1846 | 0x14030bc78#1848 | 0           |
| 0x14030bc01#1866 | 0x14030bc78#1868 | 0           |
| 0x14030bc01#1886 | 0x14030bc78#1888 | 0           |
| 0x14030bc37#989  | 0x14030bc86#213  | 1           |
| 0x14030bc86#2064 | 0x14030bc86#213  | 2           |
| 0x14030bc6e#987  | 0x14030bc86#213  | 3           |
| 0x14030bc78#1488 | 0x14030bc86#1489 | 0           |
| 0x14030bc78#1569 | 0x14030bc86#1570 | 0           |
| 0x14030bc78#1589 | 0x14030bc86#1590 | 0           |
| 0x14030bc78#1629 | 0x14030bc86#1630 | 0           |
| 0x14030bc78#1649 | 0x14030bc86#1650 | 0           |
| 0x14030bc78#1768 | 0x14030bc86#1769 | 0           |
| 0x14030bc78#1788 | 0x14030bc86#1789 | 0           |
| 0x14030bc78#1808 | 0x14030bc86#1809 | 0           |
| 0x14030bc78#1828 | 0x14030bc86#1829 | 0           |
| 0x14030bc78#1848 | 0x14030bc86#1849 | 0           |
| 0x14030bc78#1868 | 0x14030bc86#1869 | 0           |
| 0x14030bc78#1888 | 0x14030bc86#1889 | 0           |
| 0x14030bc8b#2120 | 0x14030bc8b#216  | 1           |
| 0x14030bc6e#987  | 0x14030bc8b#2120 | 0           |
| 0x14030bc92#2121 | 0x14030bc92#227  | 0           |
| 0x14030bc6e#987  | 0x14030bc92#2121 | 0           |
| 0x14030bc92#227  | 0x14030bc92#2122 | 0           |
| 0x14030bc95#2123 | 0x14030bc95#235  | 0           |
| 0x14030bc95#2124 | 0x14030bc95#235  | 1           |
| 0x14030bc6e#987  | 0x14030bc95#2123 | 0           |
| 0x14030bc37#989  | 0x14030bc95#2124 | 0           |
| 0x14030bc95#235  | 0x14030bc95#2125 | 0           |
| 0x14030bc95#2125 | 0x14030bc9c#240  | 1           |
| 0x14030bc92#2122 | 0x14030bc9c#240  | 2           |
| 0x14030bc8b#216  | 0x14030bc9c#240  | 3           |
| 0x14030bc86#1489 | 0x14030bc9c#1490 | 0           |
| 0x14030bc86#1570 | 0x14030bc9c#1571 | 0           |
| 0x14030bc86#1590 | 0x14030bc9c#1591 | 0           |
| 0x14030bc86#1630 | 0x14030bc9c#1631 | 0           |
| 0x14030bc86#1650 | 0x14030bc9c#1651 | 0           |
| 0x14030bc86#1769 | 0x14030bc9c#1770 | 0           |
| 0x14030bc86#1789 | 0x14030bc9c#1790 | 0           |
| 0x14030bc86#1809 | 0x14030bc9c#1810 | 0           |
| 0x14030bc86#1829 | 0x14030bc9c#1830 | 0           |
| 0x14030bc86#1849 | 0x14030bc9c#1850 | 0           |
| 0x14030bc86#1869 | 0x14030bc9c#1870 | 0           |
| 0x14030bc86#1889 | 0x14030bc9c#1890 | 0           |
| 0x14030bc01#2113 | 0x14030bcc8#708  | 1           |
| 0x14030bc01#1607 | 0x14030bcc8#708  | 3           |
| 0x14030bc01#1486 | 0x14030bcc8#1487 | 0           |
| 0x14030bcb5#688  | 0x14030bcc8#1568 | 0           |
| 0x14030bca9#684  | 0x14030bcc8#1588 | 0           |
| 0x14030bc01#1627 | 0x14030bcc8#1628 | 0           |
| 0x14030bc01#1647 | 0x14030bcc8#1648 | 0           |
| 0x14030bc01#1766 | 0x14030bcc8#1767 | 0           |
| 0x14030bc01#1786 | 0x14030bcc8#1787 | 0           |
| 0x14030bc01#1806 | 0x14030bcc8#1807 | 0           |
| 0x14030bc01#1826 | 0x14030bcc8#1827 | 0           |
| 0x14030bc01#1846 | 0x14030bcc8#1847 | 0           |
| 0x14030bc01#1866 | 0x14030bcc8#1867 | 0           |
| 0x14030bc01#1886 | 0x14030bcc8#1887 | 0           |
| 0x14030bcc8#708  | 0x14030bcc8#2114 | 0           |
| 0x14030bc01#2113 | 0x14030bcd0#980  | 0           |
| 0x14030bcc8#2114 | 0x14030bcd0#980  | 1           |
| 0x14030bc9c#1490 | 0x14030bcd0#1525 | 0           |
| 0x14030bcc8#1487 | 0x14030bcd0#1525 | 1           |
| 0x14030bc9c#1571 | 0x14030bcd0#1585 | 0           |
| 0x14030bcc8#1568 | 0x14030bcd0#1585 | 1           |
| 0x14030bc9c#1591 | 0x14030bcd0#1605 | 0           |
| 0x14030bcc8#1588 | 0x14030bcd0#1605 | 1           |
| 0x14030bc9c#1631 | 0x14030bcd0#1645 | 0           |
| 0x14030bcc8#1628 | 0x14030bcd0#1645 | 1           |
| 0x14030bc9c#1651 | 0x14030bcd0#1665 | 0           |
| 0x14030bcc8#1648 | 0x14030bcd0#1665 | 1           |
| 0x14030bc9c#1770 | 0x14030bcd0#1783 | 0           |
| 0x14030bcc8#1767 | 0x14030bcd0#1783 | 1           |
| 0x14030bc9c#1790 | 0x14030bcd0#1804 | 0           |
| 0x14030bcc8#1787 | 0x14030bcd0#1804 | 1           |
| 0x14030bc9c#1810 | 0x14030bcd0#1823 | 0           |
| 0x14030bcc8#1807 | 0x14030bcd0#1823 | 1           |
| 0x14030bc9c#1830 | 0x14030bcd0#1843 | 0           |
| 0x14030bcc8#1827 | 0x14030bcd0#1843 | 1           |
| 0x14030bc9c#1850 | 0x14030bcd0#1864 | 0           |
| 0x14030bcc8#1847 | 0x14030bcd0#1864 | 1           |
| 0x14030bc9c#1870 | 0x14030bcd0#1884 | 0           |
| 0x14030bcc8#1867 | 0x14030bcd0#1884 | 1           |
| 0x14030bc9c#1890 | 0x14030bcd0#1904 | 0           |
| 0x14030bcc8#1887 | 0x14030bcd0#1904 | 1           |
| 0x14030bcd0#980  | 0x14030bcdf#2057 | 1           |
| 0x14030bcdf#2077 | 0x14030bcdf#2058 | 1           |
| 0x14030bcd0#980  | 0x14030bcdf#2077 | 0           |
| 0x14030bce6#2078 | 0x14030bce6#2059 | 1           |
| 0x14030bce6#2079 | 0x14030bce6#2060 | 1           |
| 0x14030bcd0#980  | 0x14030bce6#2078 | 0           |
| 0x14030bcd0#980  | 0x14030bce6#2079 | 0           |
| 0x14030bcee#2080 | 0x14030bcee#276  | 1           |
| 0x14030bcd0#1525 | 0x14030bcee#1502 | 0           |
| 0x14030bcd0#980  | 0x14030bcee#2080 | 0           |
| 0x14030bcf2#2081 | 0x14030bcf2#279  | 1           |
| 0x14030bcee#1502 | 0x14030bcf2#1503 | 0           |
| 0x14030bcd0#980  | 0x14030bcf2#2081 | 0           |
| 0x14030bcfa#2126 | 0x14030bcfa#281  | 1           |
| 0x14030bcf2#1503 | 0x14030bcfa#1504 | 0           |
| 0x14030bcd0#980  | 0x14030bcfa#2126 | 0           |
| 0x14030bd0a#2082 | 0x14030bd0e#288  | 1           |
| 0x14030bd0e#2061 | 0x14030bd0e#288  | 2           |
| 0x14030bcfa#1504 | 0x14030bd0e#1491 | 0           |
| 0x14030bcd0#1585 | 0x14030bd0e#1572 | 0           |
| 0x14030bcd0#1605 | 0x14030bd0e#1592 | 0           |
| 0x14030bcd0#1645 | 0x14030bd0e#1632 | 0           |
| 0x14030bcd0#1665 | 0x14030bd0e#1652 | 0           |
| 0x14030bcdf#2057 | 0x14030bd0e#1678 | 0           |
| 0x14030bcdf#2058 | 0x14030bd0e#1702 | 0           |
| 0x14030bce6#2059 | 0x14030bd0e#1726 | 0           |
| 0x14030bce6#2060 | 0x14030bd0e#1750 | 0           |
| 0x14030bcd0#1783 | 0x14030bd0e#1771 | 0           |
| 0x14030bcd0#1804 | 0x14030bd0e#1791 | 0           |
| 0x14030bcd0#1823 | 0x14030bd0e#1811 | 0           |
| 0x14030bcd0#1843 | 0x14030bd0e#1831 | 0           |
| 0x14030bcd0#1864 | 0x14030bd0e#1851 | 0           |
| 0x14030bcd0#1884 | 0x14030bd0e#1871 | 0           |
| 0x14030bcd0#1904 | 0x14030bd0e#1891 | 0           |
| 0x14030bd0e#288  | 0x14030bd0e#2127 | 0           |
| 0x14030bd16#2083 | 0x14030bd16#1483 | 1           |
| 0x14030bd0e#1491 | 0x14030bd16#1518 | 0           |
| 0x14030bd16#1518 | 0x14030bd16#1519 | 0           |
| 0x14030bd1b#2084 | 0x14030bd1b#297  | 1           |
| 0x14030bd16#1519 | 0x14030bd1b#1505 | 0           |
| 0x14030bd1f#2085 | 0x14030bd1f#300  | 1           |
| 0x14030bd1b#1505 | 0x14030bd1f#1506 | 0           |
| 0x14030bd0e#2127 | 0x14030bd23#1447 | 1           |
| 0x14030bd23#2086 | 0x14030bd23#1448 | 1           |
| 0x14030bd23#2087 | 0x14030bd23#1450 | 1           |
| 0x14030bd23#2088 | 0x14030bd23#1452 | 1           |
| 0x14030bd0e#2127 | 0x14030bd23#2086 | 0           |
| 0x14030bd0e#2127 | 0x14030bd23#2087 | 0           |
| 0x14030bd0e#2127 | 0x14030bd23#2088 | 0           |
| 0x14030bd26#2128 | 0x14030bd26#1454 | 1           |
| 0x14030bd23#1447 | 0x14030bd26#1454 | 2           |
| 0x14030bd26#2130 | 0x14030bd26#1455 | 1           |
| 0x14030bd23#1448 | 0x14030bd26#1455 | 2           |
| 0x14030bd26#2129 | 0x14030bd26#1456 | 0           |
| 0x14030bd26#2131 | 0x14030bd26#1457 | 1           |
| 0x14030bd23#1450 | 0x14030bd26#1457 | 2           |
| 0x14030bd26#2133 | 0x14030bd26#1459 | 1           |
| 0x14030bd23#1452 | 0x14030bd26#1459 | 2           |
| 0x14030bd26#2132 | 0x14030bd26#1460 | 0           |
| 0x14030bd1f#1506 | 0x14030bd26#1510 | 0           |
| 0x14030bd26#1510 | 0x14030bd26#1511 | 0           |
| 0x14030bd26#1511 | 0x14030bd26#1512 | 0           |
| 0x14030bd26#1512 | 0x14030bd26#1513 | 0           |
| 0x14030bd26#1456 | 0x14030bd26#2130 | 0           |
| 0x14030bd26#2089 | 0x14030bd26#2131 | 0           |
| 0x14030bd26#1460 | 0x14030bd26#2133 | 0           |
| 0x14030bd2b#2090 | 0x14030bd2b#1461 | 1           |
| 0x14030bd2b#2091 | 0x14030bd2b#1462 | 1           |
| 0x14030bd2b#2092 | 0x14030bd2b#1464 | 1           |
| 0x14030bd2b#2093 | 0x14030bd2b#1466 | 1           |
| 0x14030bd0e#2127 | 0x14030bd2b#2090 | 0           |
| 0x14030bd0e#2127 | 0x14030bd2b#2091 | 0           |
| 0x14030bd0e#2127 | 0x14030bd2b#2092 | 0           |
| 0x14030bd0e#2127 | 0x14030bd2b#2093 | 0           |
| 0x14030bd2f#2134 | 0x14030bd2f#1468 | 1           |
| 0x14030bd2b#1461 | 0x14030bd2f#1468 | 2           |
| 0x14030bd2f#2136 | 0x14030bd2f#1469 | 1           |
| 0x14030bd2b#1462 | 0x14030bd2f#1469 | 2           |
| 0x14030bd2f#2135 | 0x14030bd2f#1470 | 0           |
| 0x14030bd2f#2137 | 0x14030bd2f#1471 | 1           |
| 0x14030bd2b#1464 | 0x14030bd2f#1471 | 2           |
| 0x14030bd2f#2139 | 0x14030bd2f#1473 | 1           |
| 0x14030bd2b#1466 | 0x14030bd2f#1473 | 2           |
| 0x14030bd2f#2138 | 0x14030bd2f#1474 | 0           |
| 0x14030bd26#1513 | 0x14030bd2f#1514 | 0           |
| 0x14030bd2f#1514 | 0x14030bd2f#1515 | 0           |
| 0x14030bd2f#1515 | 0x14030bd2f#1516 | 0           |
| 0x14030bd2f#1516 | 0x14030bd2f#1517 | 0           |
| 0x14030bd2f#2094 | 0x14030bd2f#2134 | 0           |
| 0x14030bd2f#1470 | 0x14030bd2f#2136 | 0           |
| 0x14030bd2f#2095 | 0x14030bd2f#2137 | 0           |
| 0x14030bd2f#1474 | 0x14030bd2f#2139 | 0           |
| 0x14030bd34#2140 | 0x14030bd34#321  | 1           |
| 0x14030bd2f#1517 | 0x14030bd34#1507 | 0           |
| 0x14030bd0e#2127 | 0x14030bd34#2096 | 0           |
| 0x14030bd34#2096 | 0x14030bd34#2140 | 0           |
| 0x14030bd38#2141 | 0x14030bd38#324  | 1           |
| 0x14030bd34#1507 | 0x14030bd38#1508 | 0           |
| 0x14030bd0e#2127 | 0x14030bd38#2097 | 0           |
| 0x14030bd38#2097 | 0x14030bd38#2141 | 0           |
| 0x14030bd40#2142 | 0x14030bd40#326  | 1           |
| 0x14030bd38#1508 | 0x14030bd40#1509 | 0           |
| 0x14030bd0e#2127 | 0x14030bd40#2142 | 0           |
| 0x14030bd0e#1750 | 0x14030bd4b#340  | 0           |
| 0x14030bd4b#340  | 0x14030bd4b#341  | 1           |
| 0x14030bd0e#1750 | 0x14030bd4d#343  | 0           |
| 0x14030bd4d#343  | 0x14030bd54#354  | 0           |
| 0x14030bd54#354  | 0x14030bd5b#363  | 1           |
| 0x14030bd0e#1678 | 0x14030bd5b#2103 | 0           |
| 0x14030bd0e#1678 | 0x14030bd5d#364  | 0           |
| 0x14030bd5d#2143 | 0x14030bd5d#365  | 1           |
| 0x14030bd5d#364  | 0x14030bd5d#2143 | 0           |
| 0x14030bd0e#1678 | 0x14030bd61#369  | 0           |
| 0x14030bd5d#365  | 0x14030bd61#369  | 1           |
| 0x14030bd61#369  | 0x14030bd64#378  | 0           |
| 0x14030bd64#378  | 0x14030bd6c#395  | 0           |
| 0x14030bd6c#395  | 0x14030bd6c#397  | 1           |
| 0x14030bd0e#1750 | 0x14030bd72#400  | 0           |
| 0x14030bd79#950  | 0x14030bd79#410  | 1           |
| 0x14030bd79#977  | 0x14030bd79#410  | 2           |
| 0x14030bd5b#2103 | 0x14030bd79#950  | 0           |
| 0x14030bd5d#365  | 0x14030bd79#950  | 1           |
| 0x14030bd4d#343  | 0x14030bd79#977  | 0           |
| 0x14030bd72#400  | 0x14030bd79#977  | 1           |
| 0x14030bd40#1509 | 0x14030bd79#1493 | 0           |
| 0x14030bd0e#1572 | 0x14030bd79#1574 | 0           |
| 0x14030bd0e#1592 | 0x14030bd79#1594 | 0           |
| 0x14030bd0e#1632 | 0x14030bd79#1634 | 0           |
| 0x14030bd0e#1652 | 0x14030bd79#1654 | 0           |
| 0x14030bd0e#1678 | 0x14030bd79#1680 | 0           |
| 0x14030bd0e#1702 | 0x14030bd79#1704 | 0           |
| 0x14030bd0e#1726 | 0x14030bd79#1728 | 0           |
| 0x14030bd0e#1750 | 0x14030bd79#1752 | 0           |
| 0x14030bd0e#1771 | 0x14030bd79#1773 | 0           |
| 0x14030bd0e#1791 | 0x14030bd79#1793 | 0           |
| 0x14030bd0e#1811 | 0x14030bd79#1813 | 0           |
| 0x14030bd0e#1831 | 0x14030bd79#1833 | 0           |
| 0x14030bd0e#1851 | 0x14030bd79#1853 | 0           |
| 0x14030bd0e#1871 | 0x14030bd79#1873 | 0           |
| 0x14030bd0e#1891 | 0x14030bd79#1893 | 0           |
| 0x14030bd40#1509 | 0x14030bd7e#1524 | 0           |
| 0x14030bd79#1493 | 0x14030bd7e#1524 | 1           |
| 0x14030bd0e#1572 | 0x14030bd7e#1584 | 0           |
| 0x14030bd79#1574 | 0x14030bd7e#1584 | 1           |
| 0x14030bd0e#1592 | 0x14030bd7e#1604 | 0           |
| 0x14030bd79#1594 | 0x14030bd7e#1604 | 1           |
| 0x14030bd0e#1632 | 0x14030bd7e#1644 | 0           |
| 0x14030bd79#1634 | 0x14030bd7e#1644 | 1           |
| 0x14030bd0e#1652 | 0x14030bd7e#1664 | 0           |
| 0x14030bd79#1654 | 0x14030bd7e#1664 | 1           |
| 0x14030bd0e#1678 | 0x14030bd7e#1690 | 0           |
| 0x14030bd79#1680 | 0x14030bd7e#1690 | 1           |
| 0x14030bd0e#1702 | 0x14030bd7e#1714 | 0           |
| 0x14030bd79#1704 | 0x14030bd7e#1714 | 1           |
| 0x14030bd0e#1771 | 0x14030bd7e#1782 | 0           |
| 0x14030bd79#1773 | 0x14030bd7e#1782 | 1           |
| 0x14030bd0e#1791 | 0x14030bd7e#1803 | 0           |
| 0x14030bd79#1793 | 0x14030bd7e#1803 | 1           |
| 0x14030bd0e#1811 | 0x14030bd7e#1822 | 0           |
| 0x14030bd79#1813 | 0x14030bd7e#1822 | 1           |
| 0x14030bd0e#1831 | 0x14030bd7e#1842 | 0           |
| 0x14030bd79#1833 | 0x14030bd7e#1842 | 1           |
| 0x14030bd0e#1851 | 0x14030bd7e#1863 | 0           |
| 0x14030bd79#1853 | 0x14030bd7e#1863 | 1           |
| 0x14030bd0e#1871 | 0x14030bd7e#1883 | 0           |
| 0x14030bd79#1873 | 0x14030bd7e#1883 | 1           |
| 0x14030bd0e#1891 | 0x14030bd7e#1903 | 0           |
| 0x14030bd79#1893 | 0x14030bd7e#1903 | 1           |
| 0x14030bd7e#1690 | 0x14030bd8a#1667 | 0           |
| 0x14030bd7e#1842 | 0x14030bd96#433  | 1           |
| 0x14030bd96#433  | 0x14030bd96#434  | 1           |
| 0x14030bd7e#1842 | 0x14030bd98#436  | 0           |
| 0x14030bd7e#1803 | 0x14030bd9b#1764 | 0           |
| 0x14030bd7e#1782 | 0x14030bd9b#1764 | 1           |
| 0x14030bd98#436  | 0x14030bd9f#447  | 1           |
| 0x14030bd9f#447  | 0x14030bda6#456  | 1           |
| 0x14030bd9b#1764 | 0x14030bda6#2102 | 0           |
| 0x14030bd9b#1764 | 0x14030bda8#457  | 0           |
| 0x14030bda8#2145 | 0x14030bda8#458  | 1           |
| 0x14030bda8#457  | 0x14030bda8#2145 | 0           |
| 0x14030bd9b#1764 | 0x14030bdac#462  | 0           |
| 0x14030bda8#458  | 0x14030bdac#462  | 1           |
| 0x14030bdac#462  | 0x14030bdaf#471  | 0           |
| 0x14030bdaf#471  | 0x14030bdb7#488  | 1           |
| 0x14030bdb7#488  | 0x14030bdb7#490  | 1           |
| 0x14030bd7e#1842 | 0x14030bdbd#493  | 0           |
| 0x14030bdc4#947  | 0x14030bdc4#503  | 1           |
| 0x14030bdc4#973  | 0x14030bdc4#503  | 2           |
| 0x14030bda6#2102 | 0x14030bdc4#947  | 0           |
| 0x14030bda8#458  | 0x14030bdc4#947  | 1           |
| 0x14030bd98#436  | 0x14030bdc4#973  | 0           |
| 0x14030bdbd#493  | 0x14030bdc4#973  | 1           |
| 0x14030bd7e#1524 | 0x14030bdc4#1495 | 0           |
| 0x14030bd7e#1584 | 0x14030bdc4#1576 | 0           |
| 0x14030bd7e#1604 | 0x14030bdc4#1596 | 0           |
| 0x14030bd7e#1644 | 0x14030bdc4#1636 | 0           |
| 0x14030bd7e#1664 | 0x14030bdc4#1656 | 0           |
| 0x14030bd8a#1667 | 0x14030bdc4#1682 | 0           |
| 0x14030bd7e#1714 | 0x14030bdc4#1706 | 0           |
| 0x14030bd7e#413  | 0x14030bdc4#1730 | 0           |
| 0x14030bd82#416  | 0x14030bdc4#1754 | 0           |
| 0x14030bd7e#1863 | 0x14030bdc4#1855 | 0           |
| 0x14030bd7e#1883 | 0x14030bdc4#1875 | 0           |
| 0x14030bd7e#1903 | 0x14030bdc4#1895 | 0           |
| 0x14030bd7e#1524 | 0x14030bdc9#1521 | 0           |
| 0x14030bdc4#1495 | 0x14030bdc9#1521 | 1           |
| 0x14030bd7e#1584 | 0x14030bdc9#1581 | 0           |
| 0x14030bdc4#1576 | 0x14030bdc9#1581 | 1           |
| 0x14030bd7e#1604 | 0x14030bdc9#1601 | 0           |
| 0x14030bdc4#1596 | 0x14030bdc9#1601 | 1           |
| 0x14030bd7e#1644 | 0x14030bdc9#1641 | 0           |
| 0x14030bdc4#1636 | 0x14030bdc9#1641 | 1           |
| 0x14030bd7e#1664 | 0x14030bdc9#1661 | 0           |
| 0x14030bdc4#1656 | 0x14030bdc9#1661 | 1           |
| 0x14030bd8a#1667 | 0x14030bdc9#1687 | 0           |
| 0x14030bdc4#1682 | 0x14030bdc9#1687 | 1           |
| 0x14030bd7e#1714 | 0x14030bdc9#1711 | 0           |
| 0x14030bdc4#1706 | 0x14030bdc9#1711 | 1           |
| 0x14030bd7e#413  | 0x14030bdc9#1735 | 0           |
| 0x14030bdc4#1730 | 0x14030bdc9#1735 | 1           |
| 0x14030bd82#416  | 0x14030bdc9#1759 | 0           |
| 0x14030bdc4#1754 | 0x14030bdc9#1759 | 1           |
| 0x14030bd7e#1863 | 0x14030bdc9#1860 | 0           |
| 0x14030bdc4#1855 | 0x14030bdc9#1860 | 1           |
| 0x14030bd7e#1883 | 0x14030bdc9#1880 | 0           |
| 0x14030bdc4#1875 | 0x14030bdc9#1880 | 1           |
| 0x14030bd7e#1903 | 0x14030bdc9#1900 | 0           |
| 0x14030bdc4#1895 | 0x14030bdc9#1900 | 1           |
| 0x14030bdc9#1880 | 0x14030bde1#526  | 1           |
| 0x14030bde1#526  | 0x14030bde1#527  | 1           |
| 0x14030bdc9#1880 | 0x14030bde3#529  | 0           |
| 0x14030bde3#529  | 0x14030bdea#540  | 1           |
| 0x14030bdea#540  | 0x14030bdf1#549  | 1           |
| 0x14030bdc9#1860 | 0x14030bdf1#2101 | 0           |
| 0x14030bdc9#1860 | 0x14030bdf3#550  | 0           |
| 0x14030bdf3#2147 | 0x14030bdf3#551  | 1           |
| 0x14030bdf3#550  | 0x14030bdf3#2147 | 0           |
| 0x14030bdc9#1860 | 0x14030bdf7#555  | 0           |
| 0x14030bdf3#551  | 0x14030bdf7#555  | 1           |
| 0x14030bdf7#555  | 0x14030bdfa#564  | 0           |
| 0x14030bdfa#564  | 0x14030be02#581  | 1           |
| 0x14030be02#581  | 0x14030be02#583  | 1           |
| 0x14030bdc9#1880 | 0x14030be04#586  | 0           |
| 0x14030be0b#944  | 0x14030be0b#596  | 1           |
| 0x14030be0b#971  | 0x14030be0b#596  | 2           |
| 0x14030bdf1#2101 | 0x14030be0b#944  | 0           |
| 0x14030bdf3#551  | 0x14030be0b#944  | 1           |
| 0x14030bde3#529  | 0x14030be0b#971  | 0           |
| 0x14030be04#586  | 0x14030be0b#971  | 1           |
| 0x14030bdc9#1521 | 0x14030be0b#1498 | 0           |
| 0x14030bdc9#1581 | 0x14030be0b#1579 | 0           |
| 0x14030bdc9#1601 | 0x14030be0b#1599 | 0           |
| 0x14030bdc9#1641 | 0x14030be0b#1639 | 0           |
| 0x14030bdc9#1661 | 0x14030be0b#1659 | 0           |
| 0x14030bdc9#1687 | 0x14030be0b#1685 | 0           |
| 0x14030bdc9#1711 | 0x14030be0b#1709 | 0           |
| 0x14030bdc9#1735 | 0x14030be0b#1733 | 0           |
| 0x14030bdc9#1759 | 0x14030be0b#1757 | 0           |
| 0x14030bdd5#512  | 0x14030be0b#1778 | 0           |
| 0x14030bdc9#506  | 0x14030be0b#1818 | 0           |
| 0x14030bdcd#509  | 0x14030be0b#1838 | 0           |
| 0x14030bdc9#1900 | 0x14030be0b#1898 | 0           |
| 0x14030bdc9#1521 | 0x14030be10#1520 | 0           |
| 0x14030be0b#1498 | 0x14030be10#1520 | 1           |
| 0x14030be10#597  | 0x14030be39#655  | 1           |
| 0x14030be10#1520 | 0x14030be39#1499 | 0           |
| 0x14030be3f#2144 | 0x14030be3f#667  | 0           |
| 0x14030bd40#1509 | 0x14030be3f#1492 | 0           |
| 0x14030bd0e#1572 | 0x14030be3f#1573 | 0           |
| 0x14030bd0e#1592 | 0x14030be3f#1593 | 0           |
| 0x14030bd0e#1632 | 0x14030be3f#1633 | 0           |
| 0x14030bd0e#1652 | 0x14030be3f#1653 | 0           |
| 0x14030bd0e#1678 | 0x14030be3f#1679 | 0           |
| 0x14030bd0e#1702 | 0x14030be3f#1703 | 0           |
| 0x14030bd0e#1726 | 0x14030be3f#1727 | 0           |
| 0x14030bd0e#1750 | 0x14030be3f#1751 | 0           |
| 0x14030bd0e#1771 | 0x14030be3f#1772 | 0           |
| 0x14030bd0e#1811 | 0x14030be3f#1812 | 0           |
| 0x14030bd0e#1831 | 0x14030be3f#1832 | 0           |
| 0x14030bd0e#1891 | 0x14030be3f#1892 | 0           |
| 0x14030be3f#666  | 0x14030be3f#2144 | 0           |
| 0x14030bd7e#1524 | 0x14030be41#1522 | 0           |
| 0x14030be3f#1492 | 0x14030be41#1522 | 1           |
| 0x14030bd7e#1584 | 0x14030be41#1582 | 0           |
| 0x14030be3f#1573 | 0x14030be41#1582 | 1           |
| 0x14030bd7e#1604 | 0x14030be41#1602 | 0           |
| 0x14030be3f#1593 | 0x14030be41#1602 | 1           |
| 0x14030bd7e#1644 | 0x14030be41#1642 | 0           |
| 0x14030be3f#1633 | 0x14030be41#1642 | 1           |
| 0x14030bd7e#1664 | 0x14030be41#1662 | 0           |
| 0x14030be3f#1653 | 0x14030be41#1662 | 1           |
| 0x14030bd8a#1667 | 0x14030be41#1688 | 0           |
| 0x14030be3f#1679 | 0x14030be41#1688 | 1           |
| 0x14030bd7e#1714 | 0x14030be41#1712 | 0           |
| 0x14030be3f#1703 | 0x14030be41#1712 | 1           |
| 0x14030bd7e#413  | 0x14030be41#1736 | 0           |
| 0x14030be3f#1727 | 0x14030be41#1736 | 1           |
| 0x14030bd82#416  | 0x14030be41#1760 | 0           |
| 0x14030be3f#1751 | 0x14030be41#1760 | 1           |
| 0x14030bd7e#1782 | 0x14030be41#1781 | 0           |
| 0x14030be3f#1772 | 0x14030be41#1781 | 1           |
| 0x14030bd7e#1822 | 0x14030be41#1821 | 0           |
| 0x14030be3f#1812 | 0x14030be41#1821 | 1           |
| 0x14030bd7e#1842 | 0x14030be41#1841 | 0           |
| 0x14030be3f#1832 | 0x14030be41#1841 | 1           |
| 0x14030bd7e#1903 | 0x14030be41#1901 | 0           |
| 0x14030be3f#1892 | 0x14030be41#1901 | 1           |
| 0x14030be46#2146 | 0x14030be46#664  | 0           |
| 0x14030be41#1522 | 0x14030be46#1494 | 0           |
| 0x14030be41#1582 | 0x14030be46#1575 | 0           |
| 0x14030be41#1602 | 0x14030be46#1595 | 0           |
| 0x14030be41#1642 | 0x14030be46#1635 | 0           |
| 0x14030be41#1662 | 0x14030be46#1655 | 0           |
| 0x14030be41#1688 | 0x14030be46#1681 | 0           |
| 0x14030be41#1712 | 0x14030be46#1705 | 0           |
| 0x14030be41#1736 | 0x14030be46#1729 | 0           |
| 0x14030be41#1760 | 0x14030be46#1753 | 0           |
| 0x14030be41#1781 | 0x14030be46#1774 | 0           |
| 0x14030be41#1821 | 0x14030be46#1814 | 0           |
| 0x14030be41#1841 | 0x14030be46#1834 | 0           |
| 0x14030be41#1901 | 0x14030be46#1894 | 0           |
| 0x14030be46#663  | 0x14030be46#2146 | 0           |
| 0x14030bdc9#1521 | 0x14030be48#1523 | 0           |
| 0x14030be46#1494 | 0x14030be48#1523 | 1           |
| 0x14030bdc9#1581 | 0x14030be48#1583 | 0           |
| 0x14030be46#1575 | 0x14030be48#1583 | 1           |
| 0x14030bdc9#1601 | 0x14030be48#1603 | 0           |
| 0x14030be46#1595 | 0x14030be48#1603 | 1           |
| 0x14030bdc9#1641 | 0x14030be48#1643 | 0           |
| 0x14030be46#1635 | 0x14030be48#1643 | 1           |
| 0x14030bdc9#1661 | 0x14030be48#1663 | 0           |
| 0x14030be46#1655 | 0x14030be48#1663 | 1           |
| 0x14030bdc9#1687 | 0x14030be48#1689 | 0           |
| 0x14030be46#1681 | 0x14030be48#1689 | 1           |
| 0x14030bdc9#1711 | 0x14030be48#1713 | 0           |
| 0x14030be46#1705 | 0x14030be48#1713 | 1           |
| 0x14030bdc9#1735 | 0x14030be48#1737 | 0           |
| 0x14030be46#1729 | 0x14030be48#1737 | 1           |
| 0x14030bdc9#1759 | 0x14030be48#1761 | 0           |
| 0x14030be46#1753 | 0x14030be48#1761 | 1           |
| 0x14030bdd5#512  | 0x14030be48#1784 | 0           |
| 0x14030be46#1774 | 0x14030be48#1784 | 1           |
| 0x14030bdc9#506  | 0x14030be48#1824 | 0           |
| 0x14030be46#1814 | 0x14030be48#1824 | 1           |
| 0x14030bdcd#509  | 0x14030be48#1844 | 0           |
| 0x14030be46#1834 | 0x14030be48#1844 | 1           |
| 0x14030bdc9#1900 | 0x14030be48#1902 | 0           |
| 0x14030be46#1894 | 0x14030be48#1902 | 1           |
| 0x14030be4d#2148 | 0x14030be4d#658  | 0           |
| 0x14030be48#1523 | 0x14030be4d#1496 | 0           |
| 0x14030be48#1583 | 0x14030be4d#1577 | 0           |
| 0x14030be48#1603 | 0x14030be4d#1597 | 0           |
| 0x14030be48#1643 | 0x14030be4d#1637 | 0           |
| 0x14030be48#1663 | 0x14030be4d#1657 | 0           |
| 0x14030be48#1689 | 0x14030be4d#1683 | 0           |
| 0x14030be48#1713 | 0x14030be4d#1707 | 0           |
| 0x14030be48#1737 | 0x14030be4d#1731 | 0           |
| 0x14030be48#1761 | 0x14030be4d#1755 | 0           |
| 0x14030be48#1784 | 0x14030be4d#1776 | 0           |
| 0x14030be48#1824 | 0x14030be4d#1816 | 0           |
| 0x14030be48#1844 | 0x14030be4d#1836 | 0           |
| 0x14030be48#1902 | 0x14030be4d#1896 | 0           |
| 0x14030be4d#657  | 0x14030be4d#2148 | 0           |
| 0x14030be4f#2149 | 0x14030be4f#660  | 0           |
| 0x14030be4f#2150 | 0x14030be4f#661  | 1           |
| 0x14030be4d#1496 | 0x14030be4f#1497 | 0           |
| 0x14030be4f#1497 | 0x14030be4f#1500 | 0           |
| 0x14030be4d#1577 | 0x14030be4f#1578 | 0           |
| 0x14030be4d#1597 | 0x14030be4f#1598 | 0           |
| 0x14030be4d#1637 | 0x14030be4f#1638 | 0           |
| 0x14030be4d#1657 | 0x14030be4f#1658 | 0           |
| 0x14030be4d#1683 | 0x14030be4f#1684 | 0           |
| 0x14030be4d#1707 | 0x14030be4f#1708 | 0           |
| 0x14030be4d#1731 | 0x14030be4f#1732 | 0           |
| 0x14030be4d#1755 | 0x14030be4f#1756 | 0           |
| 0x14030be4d#1776 | 0x14030be4f#1777 | 0           |
| 0x14030be4d#1816 | 0x14030be4f#1817 | 0           |
| 0x14030be4d#1836 | 0x14030be4f#1837 | 0           |
| 0x14030be4d#1896 | 0x14030be4f#1897 | 0           |
| 0x14030be4f#659  | 0x14030be4f#2149 | 0           |
| 0x14030be4f#660  | 0x14030be4f#2150 | 0           |

## normalized_result.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x14030bbd8#66   | direct_call        | 0             |             |
| 0x14030bbde#68   | memory_read        | 1             |             |
| 0x14030bbe3#80   | conditional_branch |               | 1           |
| 0x14030bbe5#81   | memory_read        | 1             |             |
| 0x14030bbf1#88   | memory_read        | 1             |             |
| 0x14030bc01#99   | direct_call        | 0             |             |
| 0x14030bc09#102  | memory_read        | 1             |             |
| 0x14030bc0d#105  | memory_read        | 1             |             |
| 0x14030bc1b#127  | conditional_branch |               | 1           |
| 0x14030bc25#132  | memory_write       | 1             | 2           |
| 0x14030bc2d#144  | conditional_branch |               | 1           |
| 0x14030bc2f#145  | memory_read        | 1             |             |
| 0x14030bc4e#162  | conditional_branch |               | 1           |
| 0x14030bc57#178  | conditional_branch |               | 1           |
| 0x14030bc5c#191  | conditional_branch |               | 1           |
| 0x14030bc78#207  | direct_call        | 0             |             |
| 0x14030bc86#213  | direct_call        | 0             |             |
| 0x14030bc9c#240  | direct_call        | 0             |             |
| 0x14030bcc8#708  | direct_call        | 0             |             |
| 0x14030bcdf#2057 | memory_read        | 1             |             |
| 0x14030bcdf#2058 | memory_read        | 1             |             |
| 0x14030bce6#2059 | memory_read        | 1             |             |
| 0x14030bce6#2060 | memory_read        | 1             |             |
| 0x14030bcee#276  | memory_write       | 1             | 2           |
| 0x14030bcf2#279  | memory_write       | 1             | 2           |
| 0x14030bcfa#281  | memory_write       | 1             | 2           |
| 0x14030bd0e#288  | direct_call        | 0             |             |
| 0x14030bd16#1482 | memory_write       | 1             | 2           |
| 0x14030bd16#1483 | memory_write       | 1             | 2           |
| 0x14030bd1b#297  | memory_write       | 1             | 2           |
| 0x14030bd1f#300  | memory_write       | 1             | 2           |
| 0x14030bd23#1447 | memory_read        | 1             |             |
| 0x14030bd23#1448 | memory_read        | 1             |             |
| 0x14030bd23#1450 | memory_read        | 1             |             |
| 0x14030bd23#1452 | memory_read        | 1             |             |
| 0x14030bd26#1454 | memory_write       | 1             | 2           |
| 0x14030bd26#1455 | memory_write       | 1             | 2           |
| 0x14030bd26#1457 | memory_write       | 1             | 2           |
| 0x14030bd26#1459 | memory_write       | 1             | 2           |
| 0x14030bd2b#1461 | memory_read        | 1             |             |
| 0x14030bd2b#1462 | memory_read        | 1             |             |
| 0x14030bd2b#1464 | memory_read        | 1             |             |
| 0x14030bd2b#1466 | memory_read        | 1             |             |
| 0x14030bd2f#1468 | memory_write       | 1             | 2           |
| 0x14030bd2f#1469 | memory_write       | 1             | 2           |
| 0x14030bd2f#1471 | memory_write       | 1             | 2           |
| 0x14030bd2f#1473 | memory_write       | 1             | 2           |
| 0x14030bd34#321  | memory_write       | 1             | 2           |
| 0x14030bd38#324  | memory_write       | 1             | 2           |
| 0x14030bd40#326  | memory_write       | 1             | 2           |
| 0x14030bd4b#341  | conditional_branch |               | 1           |
| 0x14030bd5b#363  | conditional_branch |               | 1           |
| 0x14030bd5d#365  | memory_read        | 1             |             |
| 0x14030bd6c#397  | conditional_branch |               | 1           |
| 0x14030bd79#410  | direct_call        | 0             |             |
| 0x14030bd96#434  | conditional_branch |               | 1           |
| 0x14030bda6#456  | conditional_branch |               | 1           |
| 0x14030bda8#458  | memory_read        | 1             |             |
| 0x14030bdb7#490  | conditional_branch |               | 1           |
| 0x14030bdc4#503  | direct_call        | 0             |             |
| 0x14030bde1#527  | conditional_branch |               | 1           |
| 0x14030bdf1#549  | conditional_branch |               | 1           |
| 0x14030bdf3#551  | memory_read        | 1             |             |
| 0x14030be02#583  | conditional_branch |               | 1           |
| 0x14030be0b#596  | direct_call        | 0             |             |
| 0x14030be3f#667  | indirect_call      | 0             |             |
| 0x14030be46#664  | indirect_call      | 0             |             |
| 0x14030be4d#658  | indirect_call      | 0             |             |
| 0x14030be4f#660  | indirect_call      | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x14030bbd8#2108 | 0           |
| 0       | 0x14030bd16#1482 | 1           |
| 0       | 0x14030bd16#2083 | 0           |
| 0       | 0x14030bd1b#2084 | 0           |
| 0       | 0x14030bd1f#2085 | 0           |
| 0       | 0x14030bd26#2089 | 0           |
| 0       | 0x14030bd26#2128 | 0           |
| 0       | 0x14030bd26#2129 | 0           |
| 0       | 0x14030bd26#2132 | 0           |
| 0       | 0x14030bd2f#2094 | 0           |
| 0       | 0x14030bd2f#2095 | 0           |
| 0       | 0x14030bd2f#2135 | 0           |
| 0       | 0x14030bd2f#2138 | 0           |
| 0       | 0x14030be10#597  | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x14030be4f with no resolved callee; its no-return basis is unknown.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x14030be4f with no resolved callee; its no-return basis is unknown.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

