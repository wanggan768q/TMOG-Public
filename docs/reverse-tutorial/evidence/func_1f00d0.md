## evidence_id

ev_9269987482535c50d3c91685175127b32610d1254e709c5b631ca073d79e4320

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
| procedure | 0x1401f00d0 |

## raw_result.value.procedure.address

0x1401f00d0

## raw_result.value.procedure.name

FUN_1401f00d0

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
| 0x1401f00d0 | 0x1401f041f |

## raw_result.value.procedure.body.total_bytes

848

## raw_result.value.procedure.body.span_bytes

848

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f00d0()

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_40 @ Stack[-0x40]:8      | ghidra-function-database |
| undefined1[16] local_50 @ Stack[-0x50]:16 | ghidra-function-database |
| undefined1[16] local_60 @ Stack[-0x60]:16 | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined1 local_78 @ Stack[-0x78]:1      | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8    | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8    | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401f00d0(undefined4 *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1404c7ac0 ^ (ulonglong)auStack_98;
  lVar8 = param_2 - (longlong)param_1;
  while( true ) {
    if (lVar8 >> 5 < 0x21) {
      FUN_1401ef1c0(param_1,param_2,param_4);
      return;
    }
    lVar8 = param_2 - (longlong)param_1 >> 6;
    if (param_3 < 1) break;
    local_68 = param_1 + lVar8 * 8;
    lVar8 = param_2 + -0x20;
    lVar12 = lVar8 - (longlong)param_1 >> 5;
    puVar9 = param_1;
    if (0x28 < lVar12) {
      lVar12 = lVar12 + 1 >> 3;
      puVar9 = param_1 + lVar12 * 8;
      FUN_1401ef4f0(param_1,puVar9,param_1 + lVar12 * 0x10,param_4);
      FUN_1401ef4f0(local_68 + lVar12 * -8,local_68,local_68 + lVar12 * 8,param_4);
      lVar8 = lVar8 + lVar12 * -0x20;
      FUN_1401ef4f0(param_2 + -0x20 + lVar12 * -0x40,lVar8,param_2 + -0x20,param_4);
    }
    puVar7 = local_68;
    FUN_1401ef4f0(puVar9,local_68,lVar8,param_4);
    local_78 = param_4;
    FUN_1401ef5b0(&local_60,param_1,puVar7,param_2);
    lVar12 = CONCAT44(uStack_5c,local_60);
    puVar9 = (undefined4 *)CONCAT44(uStack_54,uStack_58);
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (lVar12 - (longlong)param_1 >> 5 < param_2 - (longlong)puVar9 >> 5) {
      FUN_1401f00d0(param_1,lVar12,param_3,param_4);
      param_1 = puVar9;
      lVar12 = param_2;
    }
    else {
      FUN_1401f00d0(puVar9,param_2,param_3,param_4);
    }
    lVar8 = lVar12 - (longlong)param_1;
    param_2 = lVar12;
  }
  lVar12 = param_2 - (longlong)param_1 >> 5;
  while (0 < lVar8) {
    lVar11 = lVar8 + -1;
    puVar9 = param_1 + lVar8 * 8 + -8;
    local_60 = *puVar9;
    uStack_5c = puVar9[1];
    uStack_58 = puVar9[2];
    uStack_54 = puVar9[3];
    puVar9 = param_1 + lVar8 * 8 + -4;
    local_50 = *puVar9;
    uStack_4c = puVar9[1];
    uStack_48 = puVar9[2];
    uStack_44 = puVar9[3];
    *(undefined8 *)(param_1 + lVar8 * 8 + -4) = 0;
    *(undefined8 *)(param_1 + lVar8 * 8 + -2) = 7;
    *(undefined2 *)(param_1 + lVar8 * 8 + -8) = 0;
    local_78 = param_4;
    FUN_1401efdd0(param_1,lVar11,lVar12,&local_60);
    uVar6 = CONCAT44(uStack_44,uStack_48);
    lVar8 = lVar11;
    if (7 < uVar6) {
      lVar5 = CONCAT44(uStack_5c,local_60);
      uVar10 = uVar6 * 2 + 2;
      lVar11 = lVar5;
      if (0xfff < uVar10) {
        lVar11 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar11) - 8U) goto LAB_1401f0418;
        uVar10 = uVar6 * 2 + 0x29;
      }
      thunk_FUN_140327e20(lVar11,uVar10);
    }
  }
  if (1 < lVar12) {
    do {
      if (1 < param_2 - (longlong)param_1 >> 5) {
        local_60 = *(undefined4 *)(param_2 + -0x20);
        uStack_5c = *(undefined4 *)(param_2 + -0x1c);
        uStack_58 = *(undefined4 *)(param_2 + -0x18);
        uStack_54 = *(undefined4 *)(param_2 + -0x14);
        puVar9 = (undefined4 *)(param_2 + -0x20);
        local_50 = *(undefined4 *)(param_2 + -0x10);
        uStack_4c = *(undefined4 *)(param_2 + -0xc);
        uStack_48 = *(undefined4 *)(param_2 + -8);
        uStack_44 = *(undefined4 *)(param_2 + -4);
        *(undefined8 *)(param_2 + -0x10) = 0;
        *(undefined8 *)(param_2 + -8) = 7;
        *(undefined2 *)puVar9 = 0;
        if (puVar9 != param_1) {
          *(undefined8 *)(param_2 + -0x10) = 0;
          *(undefined8 *)(param_2 + -8) = 7;
          *(undefined2 *)puVar9 = 0;
          uVar2 = param_1[1];
          uVar3 = param_1[2];
          uVar4 = param_1[3];
          *puVar9 = *param_1;
          *(undefined4 *)(param_2 + -0x1c) = uVar2;
          *(undefined4 *)(param_2 + -0x18) = uVar3;
          *(undefined4 *)(param_2 + -0x14) = uVar4;
          uVar2 = param_1[5];
          uVar3 = param_1[6];
          uVar4 = param_1[7];
          *(undefined4 *)(param_2 + -0x10) = param_1[4];
          *(undefined4 *)(param_2 + -0xc) = uVar2;
          *(undefined4 *)(param_2 + -8) = uVar3;
          *(undefined4 *)(param_2 + -4) = uVar4;
          *(undefined8 *)(param_1 + 4) = 0;
          *(undefined8 *)(param_1 + 6) = 7;
          *(undefined2 *)param_1 = 0;
        }
        local_78 = param_4;
        FUN_1401efdd0(param_1,0,(longlong)puVar9 - (longlong)param_1 >> 5,&local_60);
        if (7 < CONCAT44(uStack_44,uStack_48)) {
          lVar12 = CONCAT44(uStack_5c,local_60);
          lVar8 = lVar12;
          if ((0xfff < CONCAT44(uStack_44,uStack_48) * 2 + 2) &&
             (lVar8 = *(longlong *)(lVar12 + -8), 0x1f < (lVar12 - lVar8) - 8U)) {
LAB_1401f0418:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          thunk_FUN_140327e20(lVar8);
        }
      }
      param_2 = param_2 + -0x20;
    } while (0x3f < param_2 - (longlong)param_1);
  }
  return;
}



## raw_result.value.assembly

0x1401f00d0: MOV qword ptr [RSP + 0x20], RBX,0x1401f00d5: PUSH RBP,0x1401f00d6: PUSH RSI,0x1401f00d7: PUSH RDI,0x1401f00d8: PUSH R12,0x1401f00da: PUSH R13,0x1401f00dc: PUSH R14,0x1401f00de: PUSH R15,0x1401f00e0: SUB RSP, 0x60,0x1401f00e4: MOV RAX, qword ptr [0x1404c7ac0],0x1401f00eb: XOR RAX, RSP,0x1401f00ee: MOV qword ptr [RSP + 0x58], RAX,0x1401f00f3: MOV RAX, RDX,0x1401f00f6: MOVZX EBX, R9B,0x1401f00fa: SUB RAX, RCX,0x1401f00fd: MOV R12, R8,0x1401f0100: SAR RAX, 0x5,0x1401f0104: MOV R13, RDX,0x1401f0107: MOV RDI, RCX,0x1401f010a: CMP RAX, 0x20,0x1401f010e: JLE 0x1401f024b,0x1401f0114: NOP dword ptr [RAX],0x1401f0118: NOP dword ptr [RAX + RAX*0x1],0x1401f0120: MOV RBP, R13,0x1401f0123: SUB RBP, RDI,0x1401f0126: MOV RSI, RBP,0x1401f0129: SAR RSI, 0x6,0x1401f012d: TEST R12, R12,0x1401f0130: JLE 0x1401f027f,0x1401f0136: SHL RSI, 0x5,0x1401f013a: MOVZX R9D, BL,0x1401f013e: MOV RCX, RDI,0x1401f0141: LEA R14, [RSI + RDI*0x1],0x1401f0145: LEA RSI, [R13 + -0x20],0x1401f0149: MOV qword ptr [RSP + 0x30], R14,0x1401f014e: MOV R15, RSI,0x1401f0151: SUB R15, RDI,0x1401f0154: SAR R15, 0x5,0x1401f0158: CMP R15, 0x28,0x1401f015c: JLE 0x1401f01c0,0x1401f015e: INC R15,0x1401f0161: SAR R15, 0x3,0x1401f0165: MOV R14, R15,0x1401f0168: SHL R15, 0x5,0x1401f016c: SHL R14, 0x6,0x1401f0170: LEA RBP, [R15 + RDI*0x1],0x1401f0174: MOV RDX, RBP,0x1401f0177: LEA R8, [R14 + RDI*0x1],0x1401f017b: CALL 0x1401ef4f0,0x1401f0180: MOV RAX, qword ptr [RSP + 0x30],0x1401f0185: MOVZX R9D, BL,0x1401f0189: MOV RCX, RAX,0x1401f018c: MOV RDX, RAX,0x1401f018f: SUB RCX, R15,0x1401f0192: LEA R8, [R15 + RAX*0x1],0x1401f0196: CALL 0x1401ef4f0,0x1401f019b: LEA R8, [R13 + -0x20],0x1401f019f: SUB RSI, R15,0x1401f01a2: MOV RCX, R8,0x1401f01a5: MOVZX R9D, BL,0x1401f01a9: SUB RCX, R14,0x1401f01ac: MOV RDX, RSI,0x1401f01af: CALL 0x1401ef4f0,0x1401f01b4: MOV R14, qword ptr [RSP + 0x30],0x1401f01b9: MOVZX R9D, BL,0x1401f01bd: MOV RCX, RBP,0x1401f01c0: MOV R8, RSI,0x1401f01c3: MOV RDX, R14,0x1401f01c6: CALL 0x1401ef4f0,0x1401f01cb: MOV R9, R13,0x1401f01ce: MOV byte ptr [RSP + 0x20], BL,0x1401f01d2: MOV R8, R14,0x1401f01d5: LEA RCX, [RSP + 0x38],0x1401f01da: MOV RDX, RDI,0x1401f01dd: CALL 0x1401ef5b0,0x1401f01e2: MOV RBP, qword ptr [RSP + 0x38],0x1401f01e7: MOV RCX, R12,0x1401f01ea: MOV RSI, qword ptr [RSP + 0x40],0x1401f01ef: MOV RAX, RBP,0x1401f01f2: SUB RAX, RDI,0x1401f01f5: SAR RCX, 0x2,0x1401f01f9: SAR R12, 0x1,0x1401f01fc: MOV R8, R13,0x1401f01ff: SUB R8, RSI,0x1401f0202: SAR RAX, 0x5,0x1401f0206: ADD R12, RCX,0x1401f0209: SAR R8, 0x5,0x1401f020d: CMP RAX, R8,0x1401f0210: MOVZX R9D, BL,0x1401f0214: MOV R8, R12,0x1401f0217: JGE 0x1401f0229,0x1401f0219: MOV RDX, RBP,0x1401f021c: MOV RCX, RDI,0x1401f021f: CALL 0x1401f00d0,0x1401f0224: MOV RDI, RSI,0x1401f0227: JMP 0x1401f0237,0x1401f0229: MOV RDX, R13,0x1401f022c: MOV RCX, RSI,0x1401f022f: CALL 0x1401f00d0,0x1401f0234: MOV R13, RBP,0x1401f0237: MOV RAX, R13,0x1401f023a: SUB RAX, RDI,0x1401f023d: SAR RAX, 0x5,0x1401f0241: CMP RAX, 0x20,0x1401f0245: JG 0x1401f0120,0x1401f024b: MOVZX R8D, BL,0x1401f024f: MOV RDX, R13,0x1401f0252: MOV RCX, RDI,0x1401f0255: CALL 0x1401ef1c0,0x1401f025a: MOV RCX, qword ptr [RSP + 0x58],0x1401f025f: XOR RCX, RSP,0x1401f0262: CALL 0x140327740,0x1401f0267: MOV RBX, qword ptr [RSP + 0xb8],0x1401f026f: ADD RSP, 0x60,0x1401f0273: POP R15,0x1401f0275: POP R14,0x1401f0277: POP R13,0x1401f0279: POP R12,0x1401f027b: POP RDI,0x1401f027c: POP RSI,0x1401f027d: POP RBP,0x1401f027e: RET,0x1401f027f: SAR RBP, 0x5,0x1401f0283: XOR R14D, R14D,0x1401f0286: TEST RSI, RSI,0x1401f0289: JLE 0x1401f0328,0x1401f028f: NOP,0x1401f0290: MOV RCX, RSI,0x1401f0293: MOV byte ptr [RSP + 0x20], BL,0x1401f0297: SHL RCX, 0x5,0x1401f029b: LEA R9, [RSP + 0x38],0x1401f02a0: DEC RSI,0x1401f02a3: MOV R8, RBP,0x1401f02a6: MOV RDX, RSI,0x1401f02a9: MOVUPS XMM0, xmmword ptr [RDI + RCX*0x1 + -0x20],0x1401f02ae: MOVUPS XMM1, xmmword ptr [RDI + RCX*0x1 + -0x10],0x1401f02b3: MOV qword ptr [RDI + RCX*0x1 + -0x10], R14,0x1401f02b8: MOV qword ptr [RDI + RCX*0x1 + -0x8], 0x7,0x1401f02c1: MOV word ptr [RDI + RCX*0x1 + -0x20], R14W,0x1401f02c7: MOV RCX, RDI,0x1401f02ca: MOVUPS xmmword ptr [RSP + 0x38], XMM0,0x1401f02cf: MOVUPS xmmword ptr [RSP + 0x48], XMM1,0x1401f02d4: CALL 0x1401efdd0,0x1401f02d9: MOV RAX, qword ptr [RSP + 0x50],0x1401f02de: CMP RAX, 0x7,0x1401f02e2: JBE 0x1401f031f,0x1401f02e4: MOV RCX, qword ptr [RSP + 0x38],0x1401f02e9: LEA RDX, [0x2 + RAX*0x2],0x1401f02f1: CMP RDX, 0x1000,0x1401f02f8: JC 0x1401f031a,0x1401f02fa: MOV R8, qword ptr [RCX + -0x8],0x1401f02fe: SUB RCX, R8,0x1401f0301: SUB RCX, 0x8,0x1401f0305: CMP RCX, 0x1f,0x1401f0309: JA 0x1401f0418,0x1401f030f: LEA RDX, [0x29 + RAX*0x2],0x1401f0317: MOV RCX, R8,0x1401f031a: CALL 0x1403272f0,0x1401f031f: TEST RSI, RSI,0x1401f0322: JG 0x1401f0290,0x1401f0328: CMP RBP, 0x2,0x1401f032c: JL 0x1401f025a,0x1401f0332: MOV RAX, R13,0x1401f0335: SUB RAX, RDI,0x1401f0338: SAR RAX, 0x5,0x1401f033c: CMP RAX, 0x2,0x1401f0340: JL 0x1401f03ff,0x1401f0346: MOVUPS XMM0, xmmword ptr [R13 + -0x20],0x1401f034b: LEA R8, [R13 + -0x20],0x1401f034f: MOVUPS XMM1, xmmword ptr [R8 + 0x10],0x1401f0354: MOV qword ptr [R13 + -0x10], R14,0x1401f0358: MOV qword ptr [R13 + -0x8], 0x7,0x1401f0360: MOV word ptr [R8], R14W,0x1401f0364: MOVUPS xmmword ptr [RSP + 0x38], XMM0,0x1401f0369: MOVUPS xmmword ptr [RSP + 0x48], XMM1,0x1401f036e: CMP R8, RDI,0x1401f0371: JZ 0x1401f03a3,0x1401f0373: MOV qword ptr [R13 + -0x10], R14,0x1401f0377: MOV qword ptr [R13 + -0x8], 0x7,0x1401f037f: MOV word ptr [R8], R14W,0x1401f0383: MOVUPS XMM0, xmmword ptr [RDI],0x1401f0386: MOVUPS xmmword ptr [R8], XMM0,0x1401f038a: MOVUPS XMM1, xmmword ptr [RDI + 0x10],0x1401f038e: MOVUPS xmmword ptr [R8 + 0x10], XMM1,0x1401f0393: MOV qword ptr [RDI + 0x10], R14,0x1401f0397: MOV qword ptr [RDI + 0x18], 0x7,0x1401f039f: MOV word ptr [RDI], R14W,0x1401f03a3: SUB R8, RDI,0x1401f03a6: MOV byte ptr [RSP + 0x20], BL,0x1401f03aa: SAR R8, 0x5,0x1401f03ae: LEA R9, [RSP + 0x38],0x1401f03b3: XOR EDX, EDX,0x1401f03b5: MOV RCX, RDI,0x1401f03b8: CALL 0x1401efdd0,0x1401f03bd: MOV RAX, qword ptr [RSP + 0x50],0x1401f03c2: CMP RAX, 0x7,0x1401f03c6: JBE 0x1401f03ff,0x1401f03c8: MOV RCX, qword ptr [RSP + 0x38],0x1401f03cd: LEA RDX, [0x2 + RAX*0x2],0x1401f03d5: CMP RDX, 0x1000,0x1401f03dc: JC 0x1401f03fa,0x1401f03de: MOV R8, qword ptr [RCX + -0x8],0x1401f03e2: SUB RCX, R8,0x1401f03e5: SUB RCX, 0x8,0x1401f03e9: CMP RCX, 0x1f,0x1401f03ed: JA 0x1401f0418,0x1401f03ef: LEA RDX, [0x29 + RAX*0x2],0x1401f03f7: MOV RCX, R8,0x1401f03fa: CALL 0x1403272f0,0x1401f03ff: SUB R13, 0x20,0x1401f0403: MOV RAX, R13,0x1401f0406: SUB RAX, RDI,0x1401f0409: CMP RAX, 0x40,0x1401f040d: JGE 0x1401f0332,0x1401f0413: JMP 0x1401f025a,0x1401f0418: MOV ECX, 0x5,0x1401f041d: INT 0x29,0x1401f041f: INT3

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f00d0 | FUN_1401f00d0 | [object Object] | [object Object] |
| 0x1401f4ef0 | FUN_1401f4ef0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1401ef1c0 | FUN_1401ef1c0           | [object Object] | [object Object] |
| 0x1401ef4f0 | FUN_1401ef4f0           | [object Object] | [object Object] |
| 0x1401ef5b0 | FUN_1401ef5b0           | [object Object] | [object Object] |
| 0x1401efdd0 | FUN_1401efdd0           | [object Object] | [object Object] |
| 0x1401f00d0 | FUN_1401f00d0           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f4f91    | 0x1401f00d0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df768    | 0x1401f00d0    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f00d0    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401f00e4    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f00ee    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f010e    | 0x1401f024b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0130    | 0x1401f027f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0149    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f015c    | 0x1401f01c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f017b    | 0x1401ef4f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0180    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f0196    | 0x1401ef4f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f01af    | 0x1401ef4f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f01b4    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f01c6    | 0x1401ef4f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f01ce    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401f01d5    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f01dd    | 0x1401ef5b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f01e2    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f01ea    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f0217    | 0x1401f0229              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f021f    | 0x1401f00d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0227    | 0x1401f0237              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f022f    | 0x1401f00d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0245    | 0x1401f0120              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0255    | 0x1401ef1c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f025a    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f0262    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0267    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401f0289    | 0x1401f0328              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0293    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401f029b    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f02ca    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f02cf    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f02d4    | 0x1401efdd0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f02d9    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f02e2    | 0x1401f031f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f02e4    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f02f8    | 0x1401f031a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0309    | 0x1401f0418              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f031a    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0322    | 0x1401f0290              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f032c    | 0x1401f025a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0340    | 0x1401f03ff              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f034f    | 0xfffffffffffffff0       | [object Object]  |                  | [object Object] |
| 0x1401f0354    | 0xfffffffffffffff0       | [object Object]  |                  | [object Object] |
| 0x1401f0364    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f0369    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f0371    | 0x1401f03a3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0373    | 0xfffffffffffffff0       | [object Object]  |                  | [object Object] |
| 0x1401f038e    | 0xfffffffffffffff0       | [object Object]  |                  | [object Object] |
| 0x1401f03a6    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401f03ae    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f03b8    | 0x1401efdd0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f03bd    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f03c6    | 0x1401f03ff              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f03c8    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f03dc    | 0x1401f03fa              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f03ed    | 0x1401f0418              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f03fa    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f040d    | 0x1401f0332              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0413    | 0x1401f025a              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address            | value                   | source_address |
|--------------------|-------------------------|----------------|
| 0x1401ef1c0        | FUN_1401ef1c0           | 0x1401f0255    |
| 0x1401ef4f0        | FUN_1401ef4f0           | 0x1401f017b    |
| 0x1401ef4f0        | FUN_1401ef4f0           | 0x1401f0196    |
| 0x1401ef4f0        | FUN_1401ef4f0           | 0x1401f01af    |
| 0x1401ef4f0        | FUN_1401ef4f0           | 0x1401f01c6    |
| 0x1401ef5b0        | FUN_1401ef5b0           | 0x1401f01dd    |
| 0x1401efdd0        | FUN_1401efdd0           | 0x1401f02d4    |
| 0x1401efdd0        | FUN_1401efdd0           | 0x1401f03b8    |
| 0x1401f00d0        | FUN_1401f00d0           | 0x1401f021f    |
| 0x1401f00d0        | FUN_1401f00d0           | 0x1401f022f    |
| 0x1401f0120        | LAB_1401f0120           | 0x1401f0245    |
| 0x1401f01c0        | LAB_1401f01c0           | 0x1401f015c    |
| 0x1401f0229        | LAB_1401f0229           | 0x1401f0217    |
| 0x1401f0237        | LAB_1401f0237           | 0x1401f0227    |
| 0x1401f024b        | LAB_1401f024b           | 0x1401f010e    |
| 0x1401f025a        | LAB_1401f025a           | 0x1401f032c    |
| 0x1401f025a        | LAB_1401f025a           | 0x1401f0413    |
| 0x1401f027f        | LAB_1401f027f           | 0x1401f0130    |
| 0x1401f0290        | LAB_1401f0290           | 0x1401f0322    |
| 0x1401f031a        | LAB_1401f031a           | 0x1401f02f8    |
| 0x1401f031f        | LAB_1401f031f           | 0x1401f02e2    |
| 0x1401f0328        | LAB_1401f0328           | 0x1401f0289    |
| 0x1401f0332        | LAB_1401f0332           | 0x1401f040d    |
| 0x1401f03a3        | LAB_1401f03a3           | 0x1401f0371    |
| 0x1401f03fa        | LAB_1401f03fa           | 0x1401f03dc    |
| 0x1401f03ff        | LAB_1401f03ff           | 0x1401f0340    |
| 0x1401f03ff        | LAB_1401f03ff           | 0x1401f03c6    |
| 0x1401f0418        | LAB_1401f0418           | 0x1401f0309    |
| 0x1401f0418        | LAB_1401f0418           | 0x1401f03ed    |
| 0x1403272f0        | thunk_FUN_140327e20     | 0x1401f031a    |
| 0x1403272f0        | thunk_FUN_140327e20     | 0x1401f03fa    |
| 0x140327740        | __security_check_cookie | 0x1401f0262    |
| 0x1404c7ac0        | DAT_1404c7ac0           | 0x1401f00e4    |
| 0xfffffffffffffff0 | DAT_fffffffffffffff0    | 0x1401f034f    |
| 0xfffffffffffffff0 | DAT_fffffffffffffff0    | 0x1401f0354    |
| 0xfffffffffffffff0 | DAT_fffffffffffffff0    | 0x1401f0373    |
| 0xfffffffffffffff0 | DAT_fffffffffffffff0    | 0x1401f038e    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f00d0 | 0x1401f0114 | 0x1401f0114,0x1401f024b |
| 0x1401f0114 | 0x1401f0120 | 0x1401f0120             |
| 0x1401f0120 | 0x1401f0136 | 0x1401f0136,0x1401f027f |
| 0x1401f0136 | 0x1401f015e | 0x1401f015e,0x1401f01c0 |
| 0x1401f015e | 0x1401f01c0 | 0x1401f01c0             |
| 0x1401f01c0 | 0x1401f0219 | 0x1401f0219,0x1401f0229 |
| 0x1401f0219 | 0x1401f0229 | 0x1401f0237             |
| 0x1401f0229 | 0x1401f0237 | 0x1401f0237             |
| 0x1401f0237 | 0x1401f024b | 0x1401f0120,0x1401f024b |
| 0x1401f024b | 0x1401f025a | 0x1401f025a             |
| 0x1401f025a | 0x1401f027f |                         |
| 0x1401f027f | 0x1401f028f | 0x1401f028f,0x1401f0328 |
| 0x1401f028f | 0x1401f0290 | 0x1401f0290             |
| 0x1401f0290 | 0x1401f02e4 | 0x1401f02e4,0x1401f031f |
| 0x1401f02e4 | 0x1401f02fa | 0x1401f02fa,0x1401f031a |
| 0x1401f02fa | 0x1401f030f | 0x1401f030f,0x1401f0418 |
| 0x1401f030f | 0x1401f031a | 0x1401f031a             |
| 0x1401f031a | 0x1401f031f | 0x1401f031f             |
| 0x1401f031f | 0x1401f0328 | 0x1401f0290,0x1401f0328 |
| 0x1401f0328 | 0x1401f0332 | 0x1401f025a,0x1401f0332 |
| 0x1401f0332 | 0x1401f0346 | 0x1401f0346,0x1401f03ff |
| 0x1401f0346 | 0x1401f0373 | 0x1401f0373,0x1401f03a3 |
| 0x1401f0373 | 0x1401f03a3 | 0x1401f03a3             |
| 0x1401f03a3 | 0x1401f03c8 | 0x1401f03c8,0x1401f03ff |
| 0x1401f03c8 | 0x1401f03de | 0x1401f03de,0x1401f03fa |
| 0x1401f03de | 0x1401f03ef | 0x1401f03ef,0x1401f0418 |
| 0x1401f03ef | 0x1401f03fa | 0x1401f03fa             |
| 0x1401f03fa | 0x1401f03ff | 0x1401f03ff             |
| 0x1401f03ff | 0x1401f0413 | 0x1401f0332,0x1401f0413 |
| 0x1401f0413 | 0x1401f0418 | 0x1401f025a             |
| 0x1401f0418 | 0x1401f0420 |                         |

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

| role      | ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | undefined4 * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | longlong     | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 2       | param_3 | longlong     | 8          | R8:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 3       | param_4 | undefined1   | 1          | R9B:1   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x1401f00e0#3379 | 0x1401f00e0 | 3379     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f00eb#36   | 0x1401f00eb | 36       | INT_XOR      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f00eb#3462 | 0x1401f00eb | 3462     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f00fa#51   | 0x1401f00fa | 51       | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f00fa#3463 | 0x1401f00fa | 3463     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0100#61   | 0x1401f0100 | 61       | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#112  | 0x1401f010e | 112      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#113  | 0x1401f010e | 113      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f010e#3428 | 0x1401f010e | 3428     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3430 | 0x1401f010e | 3430     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3431 | 0x1401f010e | 3431     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3432 | 0x1401f010e | 3432     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3433 | 0x1401f010e | 3433     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3434 | 0x1401f010e | 3434     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3435 | 0x1401f010e | 3435     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3436 | 0x1401f010e | 3436     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3437 | 0x1401f010e | 3437     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3438 | 0x1401f010e | 3438     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3439 | 0x1401f010e | 3439     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3441 | 0x1401f010e | 3441     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3459 | 0x1401f010e | 3459     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0123#119  | 0x1401f0123 | 119      | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0123#3464 | 0x1401f0123 | 3464     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0129#129  | 0x1401f0129 | 129      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0130#177  | 0x1401f0130 | 177      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0130#178  | 0x1401f0130 | 178      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0141#3380 | 0x1401f0141 | 3380     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0141#3381 | 0x1401f0141 | 3381     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0145#226  | 0x1401f0145 | 226      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0151#234  | 0x1401f0151 | 234      | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0151#3501 | 0x1401f0151 | 3501     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0154#243  | 0x1401f0154 | 243      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f015c#292  | 0x1401f015c | 292      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f015c#293  | 0x1401f015c | 293      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f015c#3450 | 0x1401f015c | 3450     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f015e#295  | 0x1401f015e | 295      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0161#304  | 0x1401f0161 | 304      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0170#3382 | 0x1401f0170 | 3382     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0170#3383 | 0x1401f0170 | 3383     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0177#3384 | 0x1401f0177 | 3384     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0177#3385 | 0x1401f0177 | 3385     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f017b#434  | 0x1401f017b | 434      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f017b#2809 | 0x1401f017b | 2809     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#2907 | 0x1401f017b | 2907     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#2932 | 0x1401f017b | 2932     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#2960 | 0x1401f017b | 2960     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#2985 | 0x1401f017b | 2985     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#3011 | 0x1401f017b | 3011     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#3036 | 0x1401f017b | 3036     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#3163 | 0x1401f017b | 3163     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f018f#3386 | 0x1401f018f | 3386     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f018f#3387 | 0x1401f018f | 3387     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0192#3388 | 0x1401f0192 | 3388     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0192#3389 | 0x1401f0192 | 3389     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0196#456  | 0x1401f0196 | 456      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f0196#2810 | 0x1401f0196 | 2810     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#2908 | 0x1401f0196 | 2908     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#2933 | 0x1401f0196 | 2933     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#2961 | 0x1401f0196 | 2961     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#2986 | 0x1401f0196 | 2986     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#3012 | 0x1401f0196 | 3012     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#3037 | 0x1401f0196 | 3037     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#3164 | 0x1401f0196 | 3164     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f019b#457  | 0x1401f019b | 457      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f019f#461  | 0x1401f019f | 461      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f019f#2681 | 0x1401f019f | 2681     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01a9#473  | 0x1401f01a9 | 473      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01a9#2682 | 0x1401f01a9 | 2682     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#483  | 0x1401f01af | 483      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f01af#2811 | 0x1401f01af | 2811     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#2909 | 0x1401f01af | 2909     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#2934 | 0x1401f01af | 2934     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#2962 | 0x1401f01af | 2962     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#2987 | 0x1401f01af | 2987     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#3013 | 0x1401f01af | 3013     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#3038 | 0x1401f01af | 3038     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#3165 | 0x1401f01af | 3165     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2101 | 0x1401f01c0 | 2101     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2170 | 0x1401f01c0 | 2170     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2850 | 0x1401f01c0 | 2850     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2925 | 0x1401f01c0 | 2925     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2950 | 0x1401f01c0 | 2950     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2978 | 0x1401f01c0 | 2978     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#3003 | 0x1401f01c0 | 3003     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#3029 | 0x1401f01c0 | 3029     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#3054 | 0x1401f01c0 | 3054     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#3181 | 0x1401f01c0 | 3181     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#3447 | 0x1401f01c0 | 3447     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f01c6#494  | 0x1401f01c6 | 494      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f01c6#2812 | 0x1401f01c6 | 2812     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#2910 | 0x1401f01c6 | 2910     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#2935 | 0x1401f01c6 | 2935     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#2963 | 0x1401f01c6 | 2963     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#2988 | 0x1401f01c6 | 2988     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#3014 | 0x1401f01c6 | 3014     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#3039 | 0x1401f01c6 | 3039     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#3166 | 0x1401f01c6 | 3166     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01d5#3390 | 0x1401f01d5 | 3390     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#505  | 0x1401f01dd | 505      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f01dd#2813 | 0x1401f01dd | 2813     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#2911 | 0x1401f01dd | 2911     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#2936 | 0x1401f01dd | 2936     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#2964 | 0x1401f01dd | 2964     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#2989 | 0x1401f01dd | 2989     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#3015 | 0x1401f01dd | 3015     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#3040 | 0x1401f01dd | 3040     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#3167 | 0x1401f01dd | 3167     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#3455 | 0x1401f01dd | 3455     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f01e2#2951 | 0x1401f01e2 | 2951     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01ea#3004 | 0x1401f01ea | 3004     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01ea#3502 | 0x1401f01ea | 3502     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f01f2#516  | 0x1401f01f2 | 516      | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01f2#3503 | 0x1401f01f2 | 3503     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f01f5#525  | 0x1401f01f5 | 525      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01f9#566  | 0x1401f01f9 | 566      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01ff#576  | 0x1401f01ff | 576      | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01ff#3504 | 0x1401f01ff | 3504     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0202#585  | 0x1401f0202 | 585      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0206#625  | 0x1401f0206 | 625      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0209#634  | 0x1401f0209 | 634      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0217#685  | 0x1401f0217 | 685      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0217#686  | 0x1401f0217 | 686      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f021f#691  | 0x1401f021f | 691      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f021f#2815 | 0x1401f021f | 2815     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#2913 | 0x1401f021f | 2913     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#2938 | 0x1401f021f | 2938     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#2966 | 0x1401f021f | 2966     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#2991 | 0x1401f021f | 2991     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#3017 | 0x1401f021f | 3017     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#3042 | 0x1401f021f | 3042     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#3169 | 0x1401f021f | 3169     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0227#693  | 0x1401f0227 | 693      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401f0227#3451 | 0x1401f0227 | 3451     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0227#3452 | 0x1401f0227 | 3452     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f022f#827  | 0x1401f022f | 827      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f022f#2814 | 0x1401f022f | 2814     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#2912 | 0x1401f022f | 2912     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#2937 | 0x1401f022f | 2937     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#2965 | 0x1401f022f | 2965     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#2990 | 0x1401f022f | 2990     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#3016 | 0x1401f022f | 3016     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#3041 | 0x1401f022f | 3041     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#3168 | 0x1401f022f | 3168     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2171 | 0x1401f0237 | 2171     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2252 | 0x1401f0237 | 2252     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2847 | 0x1401f0237 | 2847     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2922 | 0x1401f0237 | 2922     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2947 | 0x1401f0237 | 2947     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2975 | 0x1401f0237 | 2975     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#3000 | 0x1401f0237 | 3000     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#3026 | 0x1401f0237 | 3026     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#3051 | 0x1401f0237 | 3051     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#3178 | 0x1401f0237 | 3178     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f023a#697  | 0x1401f023a | 697      | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f023a#3505 | 0x1401f023a | 3505     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0245#3460 | 0x1401f0245 | 3460     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0255#764  | 0x1401f0255 | 764      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f0255#2816 | 0x1401f0255 | 2816     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0255#2914 | 0x1401f0255 | 2914     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0255#2939 | 0x1401f0255 | 2939     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0255#3170 | 0x1401f0255 | 3170     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f025a#2843 | 0x1401f025a | 2843     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f027e#822  | 0x1401f027e | 822      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401f027e#2817 | 0x1401f027e | 2817     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f027e#3444 | 0x1401f027e | 3444     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f027e#3445 | 0x1401f027e | 3445     | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401f027f#831  | 0x1401f027f | 831      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0289#889  | 0x1401f0289 | 889      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0289#890  | 0x1401f0289 | 890      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0289#3373 | 0x1401f0289 | 3373     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0289#3375 | 0x1401f0289 | 3375     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0289#3376 | 0x1401f0289 | 3376     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0289#3377 | 0x1401f0289 | 3377     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0289#3456 | 0x1401f0289 | 3456     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f029b#3391 | 0x1401f029b | 3391     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a0#939  | 0x1401f02a0 | 939      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#2719 | 0x1401f02a9 | 2719     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#2720 | 0x1401f02a9 | 2720     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#2722 | 0x1401f02a9 | 2722     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#2724 | 0x1401f02a9 | 2724     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#3393 | 0x1401f02a9 | 3393     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#3394 | 0x1401f02a9 | 3394     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#3395 | 0x1401f02a9 | 3395     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02a9#3396 | 0x1401f02a9 | 3396     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02a9#3397 | 0x1401f02a9 | 3397     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02a9#3398 | 0x1401f02a9 | 3398     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02ae#2733 | 0x1401f02ae | 2733     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#2734 | 0x1401f02ae | 2734     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#2736 | 0x1401f02ae | 2736     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#2738 | 0x1401f02ae | 2738     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#3400 | 0x1401f02ae | 3400     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#3401 | 0x1401f02ae | 3401     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#3402 | 0x1401f02ae | 3402     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02ae#3403 | 0x1401f02ae | 3403     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02ae#3404 | 0x1401f02ae | 3404     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02ae#3405 | 0x1401f02ae | 3405     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02b3#970  | 0x1401f02b3 | 970      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f02b3#2819 | 0x1401f02b3 | 2819     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b3#3407 | 0x1401f02b3 | 3407     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b3#3408 | 0x1401f02b3 | 3408     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b3#3409 | 0x1401f02b3 | 3409     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02b3#3465 | 0x1401f02b3 | 3465     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02b8#975  | 0x1401f02b8 | 975      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f02b8#2820 | 0x1401f02b8 | 2820     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b8#3411 | 0x1401f02b8 | 3411     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b8#3412 | 0x1401f02b8 | 3412     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b8#3413 | 0x1401f02b8 | 3413     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02b8#3466 | 0x1401f02b8 | 3466     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02c1#980  | 0x1401f02c1 | 980      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f02c1#2821 | 0x1401f02c1 | 2821     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02c1#3415 | 0x1401f02c1 | 3415     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02c1#3416 | 0x1401f02c1 | 3416     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02c1#3417 | 0x1401f02c1 | 3417     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02c1#3467 | 0x1401f02c1 | 3467     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02d4#990  | 0x1401f02d4 | 990      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f02d4#2803 | 0x1401f02d4 | 2803     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#2901 | 0x1401f02d4 | 2901     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#2926 | 0x1401f02d4 | 2926     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#2954 | 0x1401f02d4 | 2954     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#2979 | 0x1401f02d4 | 2979     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3005 | 0x1401f02d4 | 3005     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3030 | 0x1401f02d4 | 3030     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3055 | 0x1401f02d4 | 3055     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3080 | 0x1401f02d4 | 3080     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3107 | 0x1401f02d4 | 3107     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3132 | 0x1401f02d4 | 3132     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3157 | 0x1401f02d4 | 3157     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3453 | 0x1401f02d4 | 3453     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02d9#3105 | 0x1401f02d9 | 3105     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02e2#1004 | 0x1401f02e2 | 1004     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02e2#1005 | 0x1401f02e2 | 1005     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f02e2#3457 | 0x1401f02e2 | 3457     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02e4#2952 | 0x1401f02e4 | 2952     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02e9#1009 | 0x1401f02e9 | 1009     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02e9#1010 | 0x1401f02e9 | 1010     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02f1#1013 | 0x1401f02f1 | 1013     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02f8#1022 | 0x1401f02f8 | 1022     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f02f8#3449 | 0x1401f02f8 | 3449     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02fa#1023 | 0x1401f02fa | 1023     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02fa#1024 | 0x1401f02fa | 1024     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02fa#3468 | 0x1401f02fa | 3468     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02fe#1028 | 0x1401f02fe | 1028     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0301#1037 | 0x1401f0301 | 1037     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0309#1054 | 0x1401f0309 | 1054     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0309#1056 | 0x1401f0309 | 1056     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f030f#1057 | 0x1401f030f | 1057     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f030f#1058 | 0x1401f030f | 1058     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#1063 | 0x1401f031a | 1063     | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f031a#2092 | 0x1401f031a | 2092     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2127 | 0x1401f031a | 2127     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2804 | 0x1401f031a | 2804     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2902 | 0x1401f031a | 2902     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2927 | 0x1401f031a | 2927     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2955 | 0x1401f031a | 2955     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2980 | 0x1401f031a | 2980     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3006 | 0x1401f031a | 3006     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3031 | 0x1401f031a | 3031     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3056 | 0x1401f031a | 3056     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3081 | 0x1401f031a | 3081     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3108 | 0x1401f031a | 3108     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3133 | 0x1401f031a | 3133     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3158 | 0x1401f031a | 3158     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f032c#1087 | 0x1401f032c | 1087     | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f032c#1088 | 0x1401f032c | 1088     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0332#2249 | 0x1401f0332 | 2249     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0332#2842 | 0x1401f0332 | 2842     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0332#2942 | 0x1401f0332 | 2942     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0332#3173 | 0x1401f0332 | 3173     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0335#1092 | 0x1401f0335 | 1092     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0335#3469 | 0x1401f0335 | 3469     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0338#1101 | 0x1401f0338 | 1101     | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0340#1149 | 0x1401f0340 | 1149     | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0340#1150 | 0x1401f0340 | 1150     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0346#1151 | 0x1401f0346 | 1151     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2747 | 0x1401f0346 | 2747     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2748 | 0x1401f0346 | 2748     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2749 | 0x1401f0346 | 2749     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2750 | 0x1401f0346 | 2750     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2751 | 0x1401f0346 | 2751     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2752 | 0x1401f0346 | 2752     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2753 | 0x1401f0346 | 2753     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#3470 | 0x1401f0346 | 3470     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0346#3471 | 0x1401f0346 | 3471     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0346#3472 | 0x1401f0346 | 3472     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0346#3473 | 0x1401f0346 | 3473     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f034b#1158 | 0x1401f034b | 1158     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034b#3474 | 0x1401f034b | 3474     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f034f#1160 | 0x1401f034f | 1160     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2761 | 0x1401f034f | 2761     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2762 | 0x1401f034f | 2762     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2763 | 0x1401f034f | 2763     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2764 | 0x1401f034f | 2764     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2765 | 0x1401f034f | 2765     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2766 | 0x1401f034f | 2766     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2767 | 0x1401f034f | 2767     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#3475 | 0x1401f034f | 3475     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f034f#3476 | 0x1401f034f | 3476     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f034f#3477 | 0x1401f034f | 3477     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f034f#3478 | 0x1401f034f | 3478     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0354#1167 | 0x1401f0354 | 1167     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0354#1169 | 0x1401f0354 | 1169     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0354#2822 | 0x1401f0354 | 2822     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0354#3479 | 0x1401f0354 | 3479     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0358#1170 | 0x1401f0358 | 1170     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0358#1172 | 0x1401f0358 | 1172     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0358#2823 | 0x1401f0358 | 2823     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0358#3480 | 0x1401f0358 | 3480     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0360#1174 | 0x1401f0360 | 1174     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0360#2824 | 0x1401f0360 | 2824     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0360#3481 | 0x1401f0360 | 3481     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f036e#1186 | 0x1401f036e | 1186     | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0371#1191 | 0x1401f0371 | 1191     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0373#1192 | 0x1401f0373 | 1192     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0373#1194 | 0x1401f0373 | 1194     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0373#2825 | 0x1401f0373 | 2825     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0373#3482 | 0x1401f0373 | 3482     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0377#1195 | 0x1401f0377 | 1195     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0377#1197 | 0x1401f0377 | 1197     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0377#2826 | 0x1401f0377 | 2826     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0377#3483 | 0x1401f0377 | 3483     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f037f#1199 | 0x1401f037f | 1199     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f037f#2827 | 0x1401f037f | 2827     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f037f#3484 | 0x1401f037f | 3484     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0383#2775 | 0x1401f0383 | 2775     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0383#2776 | 0x1401f0383 | 2776     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0383#2778 | 0x1401f0383 | 2778     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0383#2780 | 0x1401f0383 | 2780     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0383#3418 | 0x1401f0383 | 3418     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0383#3419 | 0x1401f0383 | 3419     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0383#3420 | 0x1401f0383 | 3420     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0386#2782 | 0x1401f0386 | 2782     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0386#2783 | 0x1401f0386 | 2783     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0386#2784 | 0x1401f0386 | 2784     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2785 | 0x1401f0386 | 2785     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0386#2786 | 0x1401f0386 | 2786     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2787 | 0x1401f0386 | 2787     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0386#2788 | 0x1401f0386 | 2788     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2831 | 0x1401f0386 | 2831     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2832 | 0x1401f0386 | 2832     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2833 | 0x1401f0386 | 2833     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2834 | 0x1401f0386 | 2834     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#3485 | 0x1401f0386 | 3485     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0386#3486 | 0x1401f0386 | 3486     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0386#3487 | 0x1401f0386 | 3487     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f038a#2789 | 0x1401f038a | 2789     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038a#2790 | 0x1401f038a | 2790     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038a#2792 | 0x1401f038a | 2792     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038a#2794 | 0x1401f038a | 2794     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038a#3421 | 0x1401f038a | 3421     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f038a#3422 | 0x1401f038a | 3422     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f038a#3423 | 0x1401f038a | 3423     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f038a#3424 | 0x1401f038a | 3424     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f038e#1215 | 0x1401f038e | 1215     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2796 | 0x1401f038e | 2796     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f038e#2797 | 0x1401f038e | 2797     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f038e#2798 | 0x1401f038e | 2798     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2799 | 0x1401f038e | 2799     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f038e#2800 | 0x1401f038e | 2800     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2801 | 0x1401f038e | 2801     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f038e#2802 | 0x1401f038e | 2802     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2835 | 0x1401f038e | 2835     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2836 | 0x1401f038e | 2836     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2837 | 0x1401f038e | 2837     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2838 | 0x1401f038e | 2838     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#3488 | 0x1401f038e | 3488     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f038e#3489 | 0x1401f038e | 3489     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f038e#3490 | 0x1401f038e | 3490     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f038e#3491 | 0x1401f038e | 3491     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0393#1220 | 0x1401f0393 | 1220     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0393#2828 | 0x1401f0393 | 2828     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0393#3425 | 0x1401f0393 | 3425     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0393#3492 | 0x1401f0393 | 3492     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0397#1223 | 0x1401f0397 | 1223     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0397#2829 | 0x1401f0397 | 2829     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0397#3426 | 0x1401f0397 | 3426     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0397#3493 | 0x1401f0397 | 3493     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f039f#1225 | 0x1401f039f | 1225     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f039f#2830 | 0x1401f039f | 2830     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f039f#3494 | 0x1401f039f | 3494     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03a3#1228 | 0x1401f03a3 | 1228     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03a3#2840 | 0x1401f03a3 | 2840     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03a3#3495 | 0x1401f03a3 | 3495     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03a3#3496 | 0x1401f03a3 | 3496     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03aa#1240 | 0x1401f03aa | 1240     | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03ae#3427 | 0x1401f03ae | 3427     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#1293 | 0x1401f03b8 | 1293     | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f03b8#2805 | 0x1401f03b8 | 2805     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#2903 | 0x1401f03b8 | 2903     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#2928 | 0x1401f03b8 | 2928     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#2956 | 0x1401f03b8 | 2956     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#2981 | 0x1401f03b8 | 2981     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3007 | 0x1401f03b8 | 3007     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3032 | 0x1401f03b8 | 3032     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3057 | 0x1401f03b8 | 3057     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3082 | 0x1401f03b8 | 3082     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3109 | 0x1401f03b8 | 3109     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3134 | 0x1401f03b8 | 3134     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3159 | 0x1401f03b8 | 3159     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3454 | 0x1401f03b8 | 3454     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03bd#3106 | 0x1401f03bd | 3106     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03c6#1307 | 0x1401f03c6 | 1307     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03c6#1308 | 0x1401f03c6 | 1308     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f03c8#2953 | 0x1401f03c8 | 2953     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03cd#1312 | 0x1401f03cd | 1312     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03cd#1313 | 0x1401f03cd | 1313     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03d5#1316 | 0x1401f03d5 | 1316     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03dc#1325 | 0x1401f03dc | 1325     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f03dc#3448 | 0x1401f03dc | 3448     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03de#1326 | 0x1401f03de | 1326     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03de#1327 | 0x1401f03de | 1327     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03de#3497 | 0x1401f03de | 3497     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03e2#1331 | 0x1401f03e2 | 1331     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03e5#1340 | 0x1401f03e5 | 1340     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03ed#1357 | 0x1401f03ed | 1357     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03ed#1359 | 0x1401f03ed | 1359     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f03fa#1366 | 0x1401f03fa | 1366     | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f03fa#2089 | 0x1401f03fa | 2089     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#2808 | 0x1401f03fa | 2808     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#2906 | 0x1401f03fa | 2906     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#2931 | 0x1401f03fa | 2931     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#2959 | 0x1401f03fa | 2959     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#2984 | 0x1401f03fa | 2984     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3010 | 0x1401f03fa | 3010     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3035 | 0x1401f03fa | 3035     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3060 | 0x1401f03fa | 3060     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3085 | 0x1401f03fa | 3085     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3112 | 0x1401f03fa | 3112     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3137 | 0x1401f03fa | 3137     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3162 | 0x1401f03fa | 3162     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03ff#1369 | 0x1401f03ff | 1369     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03ff#2839 | 0x1401f03ff | 2839     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f03ff#2940 | 0x1401f03ff | 2940     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f03ff#3171 | 0x1401f03ff | 3171     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0406#1379 | 0x1401f0406 | 1379     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0406#3500 | 0x1401f0406 | 3500     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f040d#1396 | 0x1401f040d | 1396     | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f040d#1397 | 0x1401f040d | 1397     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0418#2841 | 0x1401f0418 | 2841     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#2916 | 0x1401f0418 | 2916     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#2941 | 0x1401f0418 | 2941     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#2969 | 0x1401f0418 | 2969     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#2994 | 0x1401f0418 | 2994     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3020 | 0x1401f0418 | 3020     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3045 | 0x1401f0418 | 3045     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3070 | 0x1401f0418 | 3070     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3095 | 0x1401f0418 | 3095     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3122 | 0x1401f0418 | 3122     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3147 | 0x1401f0418 | 3147     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3172 | 0x1401f0418 | 3172     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#1400 | 0x1401f041d | 1400     | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#1401 | 0x1401f041d | 1401     | CALLIND      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f041d#2806 | 0x1401f041d | 2806     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#2904 | 0x1401f041d | 2904     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#2929 | 0x1401f041d | 2929     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#2957 | 0x1401f041d | 2957     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#2982 | 0x1401f041d | 2982     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3008 | 0x1401f041d | 3008     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3033 | 0x1401f041d | 3033     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3058 | 0x1401f041d | 3058     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3083 | 0x1401f041d | 3083     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3110 | 0x1401f041d | 3110     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3135 | 0x1401f041d | 3135     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3160 | 0x1401f041d | 3160     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3498 | 0x1401f041d | 3498     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f041f#1402 | 0x1401f041f | 1402     | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#1403 | 0x1401f041f | 1403     | CALLIND      | true    | member           | [object Object]                                                                 |                 |
| 0x1401f041f#1404 | 0x1401f041f | 1404     | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401f041f#2807 | 0x1401f041f | 2807     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#2818 | 0x1401f041f | 2818     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f041f#2905 | 0x1401f041f | 2905     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#2930 | 0x1401f041f | 2930     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#2958 | 0x1401f041f | 2958     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#2983 | 0x1401f041f | 2983     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3009 | 0x1401f041f | 3009     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3034 | 0x1401f041f | 3034     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3059 | 0x1401f041f | 3059     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3084 | 0x1401f041f | 3084     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3111 | 0x1401f041f | 3111     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3136 | 0x1401f041f | 3136     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3161 | 0x1401f041f | 3161     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3499 | 0x1401f041f | 3499     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401f00eb#3462 | 0x1401f00eb#36   | 1           |
| 0x1401f00e0#3379 | 0x1401f00eb#3462 | 0           |
| 0x1401f00fa#3463 | 0x1401f00fa#51   | 1           |
| 0x1401f010e#3441 | 0x1401f0100#61   | 0           |
| 0x1401f0100#61   | 0x1401f010e#112  | 0           |
| 0x1401f010e#112  | 0x1401f010e#113  | 1           |
| 0x1401f00eb#36   | 0x1401f010e#3428 | 0           |
| 0x1401f0237#3178 | 0x1401f010e#3428 | 1           |
| 0x1401f010e#3459 | 0x1401f010e#3430 | 0           |
| 0x1401f0245#3460 | 0x1401f010e#3430 | 1           |
| 0x1401f0237#2171 | 0x1401f010e#3431 | 1           |
| 0x1401f0206#625  | 0x1401f010e#3432 | 1           |
| 0x1401f0237#2847 | 0x1401f010e#3433 | 1           |
| 0x1401f0237#3051 | 0x1401f010e#3434 | 1           |
| 0x1401f0237#3026 | 0x1401f010e#3435 | 1           |
| 0x1401f0237#3000 | 0x1401f010e#3436 | 1           |
| 0x1401f0237#2975 | 0x1401f010e#3437 | 1           |
| 0x1401f0237#2947 | 0x1401f010e#3438 | 1           |
| 0x1401f0237#2922 | 0x1401f010e#3439 | 1           |
| 0x1401f00fa#51   | 0x1401f010e#3441 | 0           |
| 0x1401f023a#697  | 0x1401f010e#3441 | 1           |
| 0x1401f010e#3430 | 0x1401f0123#119  | 0           |
| 0x1401f0123#3464 | 0x1401f0123#119  | 1           |
| 0x1401f010e#3431 | 0x1401f0123#3464 | 0           |
| 0x1401f0123#119  | 0x1401f0129#129  | 0           |
| 0x1401f010e#3432 | 0x1401f0130#177  | 0           |
| 0x1401f0130#177  | 0x1401f0130#178  | 1           |
| 0x1401f0129#129  | 0x1401f0141#3380 | 0           |
| 0x1401f010e#3431 | 0x1401f0141#3381 | 0           |
| 0x1401f0141#3380 | 0x1401f0141#3381 | 1           |
| 0x1401f010e#3430 | 0x1401f0145#226  | 0           |
| 0x1401f0145#226  | 0x1401f0151#234  | 0           |
| 0x1401f0151#3501 | 0x1401f0151#234  | 1           |
| 0x1401f010e#3431 | 0x1401f0151#3501 | 0           |
| 0x1401f0151#234  | 0x1401f0154#243  | 0           |
| 0x1401f0154#243  | 0x1401f015c#292  | 1           |
| 0x1401f015c#292  | 0x1401f015c#293  | 1           |
| 0x1401f010e#3431 | 0x1401f015c#3450 | 0           |
| 0x1401f0154#243  | 0x1401f015e#295  | 0           |
| 0x1401f015e#295  | 0x1401f0161#304  | 0           |
| 0x1401f0161#304  | 0x1401f0170#3382 | 0           |
| 0x1401f010e#3431 | 0x1401f0170#3383 | 0           |
| 0x1401f0170#3382 | 0x1401f0170#3383 | 1           |
| 0x1401f0161#304  | 0x1401f0177#3384 | 0           |
| 0x1401f010e#3431 | 0x1401f0177#3385 | 0           |
| 0x1401f0177#3384 | 0x1401f0177#3385 | 1           |
| 0x1401f010e#3431 | 0x1401f017b#434  | 1           |
| 0x1401f0170#3383 | 0x1401f017b#434  | 2           |
| 0x1401f0177#3385 | 0x1401f017b#434  | 3           |
| 0x1401f010e#3433 | 0x1401f017b#2809 | 0           |
| 0x1401f010e#3439 | 0x1401f017b#2907 | 0           |
| 0x1401f0141#3381 | 0x1401f017b#2932 | 0           |
| 0x1401f010e#3437 | 0x1401f017b#2960 | 0           |
| 0x1401f010e#3436 | 0x1401f017b#2985 | 0           |
| 0x1401f010e#3435 | 0x1401f017b#3011 | 0           |
| 0x1401f010e#3434 | 0x1401f017b#3036 | 0           |
| 0x1401f010e#3428 | 0x1401f017b#3163 | 0           |
| 0x1401f0161#304  | 0x1401f018f#3386 | 0           |
| 0x1401f017b#2932 | 0x1401f018f#3387 | 0           |
| 0x1401f018f#3386 | 0x1401f018f#3387 | 1           |
| 0x1401f0161#304  | 0x1401f0192#3388 | 0           |
| 0x1401f017b#2932 | 0x1401f0192#3389 | 0           |
| 0x1401f0192#3388 | 0x1401f0192#3389 | 1           |
| 0x1401f018f#3387 | 0x1401f0196#456  | 1           |
| 0x1401f017b#2932 | 0x1401f0196#456  | 2           |
| 0x1401f0192#3389 | 0x1401f0196#456  | 3           |
| 0x1401f017b#2809 | 0x1401f0196#2810 | 0           |
| 0x1401f017b#2907 | 0x1401f0196#2908 | 0           |
| 0x1401f017b#2932 | 0x1401f0196#2933 | 0           |
| 0x1401f017b#2960 | 0x1401f0196#2961 | 0           |
| 0x1401f017b#2985 | 0x1401f0196#2986 | 0           |
| 0x1401f017b#3011 | 0x1401f0196#3012 | 0           |
| 0x1401f017b#3036 | 0x1401f0196#3037 | 0           |
| 0x1401f017b#3163 | 0x1401f0196#3164 | 0           |
| 0x1401f010e#3430 | 0x1401f019b#457  | 0           |
| 0x1401f0145#226  | 0x1401f019f#461  | 0           |
| 0x1401f019f#2681 | 0x1401f019f#461  | 1           |
| 0x1401f0161#304  | 0x1401f019f#2681 | 0           |
| 0x1401f019b#457  | 0x1401f01a9#473  | 0           |
| 0x1401f01a9#2682 | 0x1401f01a9#473  | 1           |
| 0x1401f0161#304  | 0x1401f01a9#2682 | 0           |
| 0x1401f01a9#473  | 0x1401f01af#483  | 1           |
| 0x1401f019f#461  | 0x1401f01af#483  | 2           |
| 0x1401f019b#457  | 0x1401f01af#483  | 3           |
| 0x1401f0196#2810 | 0x1401f01af#2811 | 0           |
| 0x1401f0196#2908 | 0x1401f01af#2909 | 0           |
| 0x1401f0196#2933 | 0x1401f01af#2934 | 0           |
| 0x1401f0196#2961 | 0x1401f01af#2962 | 0           |
| 0x1401f0196#2986 | 0x1401f01af#2987 | 0           |
| 0x1401f0196#3012 | 0x1401f01af#3013 | 0           |
| 0x1401f0196#3037 | 0x1401f01af#3038 | 0           |
| 0x1401f0196#3164 | 0x1401f01af#3165 | 0           |
| 0x1401f015c#3450 | 0x1401f01c0#2101 | 0           |
| 0x1401f0170#3383 | 0x1401f01c0#2101 | 1           |
| 0x1401f0145#226  | 0x1401f01c0#2170 | 0           |
| 0x1401f019f#461  | 0x1401f01c0#2170 | 1           |
| 0x1401f010e#3433 | 0x1401f01c0#2850 | 0           |
| 0x1401f01af#2811 | 0x1401f01c0#2850 | 1           |
| 0x1401f010e#3439 | 0x1401f01c0#2925 | 0           |
| 0x1401f01af#2909 | 0x1401f01c0#2925 | 1           |
| 0x1401f0141#3381 | 0x1401f01c0#2950 | 0           |
| 0x1401f01af#2934 | 0x1401f01c0#2950 | 1           |
| 0x1401f010e#3437 | 0x1401f01c0#2978 | 0           |
| 0x1401f01af#2962 | 0x1401f01c0#2978 | 1           |
| 0x1401f010e#3436 | 0x1401f01c0#3003 | 0           |
| 0x1401f01af#2987 | 0x1401f01c0#3003 | 1           |
| 0x1401f010e#3435 | 0x1401f01c0#3029 | 0           |
| 0x1401f01af#3013 | 0x1401f01c0#3029 | 1           |
| 0x1401f010e#3434 | 0x1401f01c0#3054 | 0           |
| 0x1401f01af#3038 | 0x1401f01c0#3054 | 1           |
| 0x1401f010e#3428 | 0x1401f01c0#3181 | 0           |
| 0x1401f01af#3165 | 0x1401f01c0#3181 | 1           |
| 0x1401f01c0#2950 | 0x1401f01c0#3447 | 0           |
| 0x1401f01c0#2101 | 0x1401f01c6#494  | 1           |
| 0x1401f01c0#2950 | 0x1401f01c6#494  | 2           |
| 0x1401f01c0#2170 | 0x1401f01c6#494  | 3           |
| 0x1401f01c0#2850 | 0x1401f01c6#2812 | 0           |
| 0x1401f01c0#2925 | 0x1401f01c6#2910 | 0           |
| 0x1401f01c0#2950 | 0x1401f01c6#2935 | 0           |
| 0x1401f01c0#2978 | 0x1401f01c6#2963 | 0           |
| 0x1401f01c0#3003 | 0x1401f01c6#2988 | 0           |
| 0x1401f01c0#3029 | 0x1401f01c6#3014 | 0           |
| 0x1401f01c0#3054 | 0x1401f01c6#3039 | 0           |
| 0x1401f01c0#3181 | 0x1401f01c6#3166 | 0           |
| 0x1401f01d5#3390 | 0x1401f01dd#505  | 1           |
| 0x1401f010e#3431 | 0x1401f01dd#505  | 2           |
| 0x1401f01c0#3447 | 0x1401f01dd#505  | 3           |
| 0x1401f010e#3430 | 0x1401f01dd#505  | 4           |
| 0x1401f01c6#2812 | 0x1401f01dd#2813 | 0           |
| 0x1401f01dd#3455 | 0x1401f01dd#2911 | 0           |
| 0x1401f01c6#2935 | 0x1401f01dd#2936 | 0           |
| 0x1401f01c6#2963 | 0x1401f01dd#2964 | 0           |
| 0x1401f01c6#2988 | 0x1401f01dd#2989 | 0           |
| 0x1401f01c6#3014 | 0x1401f01dd#3015 | 0           |
| 0x1401f01c6#3039 | 0x1401f01dd#3040 | 0           |
| 0x1401f01c6#3166 | 0x1401f01dd#3167 | 0           |
| 0x1401f01dd#2989 | 0x1401f01e2#2951 | 0           |
| 0x1401f01dd#2964 | 0x1401f01e2#2951 | 1           |
| 0x1401f01dd#3040 | 0x1401f01ea#3004 | 0           |
| 0x1401f01dd#3015 | 0x1401f01ea#3004 | 1           |
| 0x1401f01ea#3004 | 0x1401f01ea#3502 | 0           |
| 0x1401f01e2#2951 | 0x1401f01f2#516  | 0           |
| 0x1401f01f2#3503 | 0x1401f01f2#516  | 1           |
| 0x1401f010e#3431 | 0x1401f01f2#3503 | 0           |
| 0x1401f010e#3432 | 0x1401f01f5#525  | 0           |
| 0x1401f010e#3432 | 0x1401f01f9#566  | 0           |
| 0x1401f010e#3430 | 0x1401f01ff#576  | 0           |
| 0x1401f01ff#3504 | 0x1401f01ff#576  | 1           |
| 0x1401f01ea#3502 | 0x1401f01ff#3504 | 0           |
| 0x1401f01f2#516  | 0x1401f0202#585  | 0           |
| 0x1401f01f9#566  | 0x1401f0206#625  | 0           |
| 0x1401f01f5#525  | 0x1401f0206#625  | 1           |
| 0x1401f01ff#576  | 0x1401f0209#634  | 0           |
| 0x1401f0202#585  | 0x1401f0217#685  | 0           |
| 0x1401f0209#634  | 0x1401f0217#685  | 1           |
| 0x1401f0217#685  | 0x1401f0217#686  | 1           |
| 0x1401f010e#3431 | 0x1401f021f#691  | 1           |
| 0x1401f01e2#2951 | 0x1401f021f#691  | 2           |
| 0x1401f0206#625  | 0x1401f021f#691  | 3           |
| 0x1401f01dd#2813 | 0x1401f021f#2815 | 0           |
| 0x1401f01dd#2911 | 0x1401f021f#2913 | 0           |
| 0x1401f01dd#2936 | 0x1401f021f#2938 | 0           |
| 0x1401f01dd#2964 | 0x1401f021f#2966 | 0           |
| 0x1401f01dd#2989 | 0x1401f021f#2991 | 0           |
| 0x1401f01dd#3015 | 0x1401f021f#3017 | 0           |
| 0x1401f01dd#3040 | 0x1401f021f#3042 | 0           |
| 0x1401f01dd#3167 | 0x1401f021f#3169 | 0           |
| 0x1401f01ea#3502 | 0x1401f0227#3451 | 0           |
| 0x1401f010e#3430 | 0x1401f0227#3452 | 0           |
| 0x1401f01ea#3502 | 0x1401f022f#827  | 1           |
| 0x1401f010e#3430 | 0x1401f022f#827  | 2           |
| 0x1401f0206#625  | 0x1401f022f#827  | 3           |
| 0x1401f01dd#2813 | 0x1401f022f#2814 | 0           |
| 0x1401f01dd#2911 | 0x1401f022f#2912 | 0           |
| 0x1401f01dd#2936 | 0x1401f022f#2937 | 0           |
| 0x1401f01dd#2964 | 0x1401f022f#2965 | 0           |
| 0x1401f01dd#2989 | 0x1401f022f#2990 | 0           |
| 0x1401f01dd#3015 | 0x1401f022f#3016 | 0           |
| 0x1401f01dd#3040 | 0x1401f022f#3041 | 0           |
| 0x1401f01dd#3167 | 0x1401f022f#3168 | 0           |
| 0x1401f0227#3451 | 0x1401f0237#2171 | 0           |
| 0x1401f010e#3431 | 0x1401f0237#2171 | 1           |
| 0x1401f0227#3452 | 0x1401f0237#2252 | 0           |
| 0x1401f01e2#2951 | 0x1401f0237#2252 | 1           |
| 0x1401f021f#2815 | 0x1401f0237#2847 | 0           |
| 0x1401f022f#2814 | 0x1401f0237#2847 | 1           |
| 0x1401f021f#2913 | 0x1401f0237#2922 | 0           |
| 0x1401f022f#2912 | 0x1401f0237#2922 | 1           |
| 0x1401f021f#2938 | 0x1401f0237#2947 | 0           |
| 0x1401f022f#2937 | 0x1401f0237#2947 | 1           |
| 0x1401f021f#2966 | 0x1401f0237#2975 | 0           |
| 0x1401f022f#2965 | 0x1401f0237#2975 | 1           |
| 0x1401f021f#2991 | 0x1401f0237#3000 | 0           |
| 0x1401f022f#2990 | 0x1401f0237#3000 | 1           |
| 0x1401f021f#3017 | 0x1401f0237#3026 | 0           |
| 0x1401f022f#3016 | 0x1401f0237#3026 | 1           |
| 0x1401f021f#3042 | 0x1401f0237#3051 | 0           |
| 0x1401f022f#3041 | 0x1401f0237#3051 | 1           |
| 0x1401f021f#3169 | 0x1401f0237#3178 | 0           |
| 0x1401f022f#3168 | 0x1401f0237#3178 | 1           |
| 0x1401f0237#2252 | 0x1401f023a#697  | 0           |
| 0x1401f023a#3505 | 0x1401f023a#697  | 1           |
| 0x1401f0237#2171 | 0x1401f023a#3505 | 0           |
| 0x1401f0237#2252 | 0x1401f0245#3460 | 0           |
| 0x1401f010e#3431 | 0x1401f0255#764  | 1           |
| 0x1401f010e#3430 | 0x1401f0255#764  | 2           |
| 0x1401f010e#3433 | 0x1401f0255#2816 | 0           |
| 0x1401f010e#3439 | 0x1401f0255#2914 | 0           |
| 0x1401f010e#3438 | 0x1401f0255#2939 | 0           |
| 0x1401f010e#3428 | 0x1401f0255#3170 | 0           |
| 0x1401f0289#3375 | 0x1401f025a#2843 | 0           |
| 0x1401f03ff#2839 | 0x1401f025a#2843 | 1           |
| 0x1401f025a#2843 | 0x1401f027e#2817 | 0           |
| 0x1401f0255#2816 | 0x1401f027e#3444 | 0           |
| 0x1401f0123#119  | 0x1401f027f#831  | 0           |
| 0x1401f0289#3373 | 0x1401f0289#889  | 1           |
| 0x1401f0289#889  | 0x1401f0289#890  | 1           |
| 0x1401f0289#3456 | 0x1401f0289#3373 | 0           |
| 0x1401f02e2#3457 | 0x1401f0289#3373 | 1           |
| 0x1401f02e2#3457 | 0x1401f0289#3373 | 2           |
| 0x1401f010e#3433 | 0x1401f0289#3375 | 0           |
| 0x1401f02d4#2803 | 0x1401f0289#3375 | 1           |
| 0x1401f031a#2804 | 0x1401f0289#3375 | 2           |
| 0x1401f010e#3438 | 0x1401f0289#3376 | 0           |
| 0x1401f02d4#2926 | 0x1401f0289#3376 | 1           |
| 0x1401f031a#2927 | 0x1401f0289#3376 | 2           |
| 0x1401f010e#3428 | 0x1401f0289#3377 | 0           |
| 0x1401f02d4#3157 | 0x1401f0289#3377 | 1           |
| 0x1401f031a#3158 | 0x1401f0289#3377 | 2           |
| 0x1401f0129#129  | 0x1401f0289#3456 | 0           |
| 0x1401f0289#3373 | 0x1401f02a0#939  | 0           |
| 0x1401f02a9#3395 | 0x1401f02a9#2719 | 1           |
| 0x1401f02a9#3396 | 0x1401f02a9#2720 | 1           |
| 0x1401f02a9#3397 | 0x1401f02a9#2722 | 1           |
| 0x1401f02a9#3398 | 0x1401f02a9#2724 | 1           |
| 0x1401f0289#3373 | 0x1401f02a9#3393 | 0           |
| 0x1401f02a9#3393 | 0x1401f02a9#3394 | 0           |
| 0x1401f010e#3431 | 0x1401f02a9#3395 | 0           |
| 0x1401f02a9#3394 | 0x1401f02a9#3395 | 1           |
| 0x1401f02a9#3395 | 0x1401f02a9#3396 | 0           |
| 0x1401f02a9#3395 | 0x1401f02a9#3397 | 0           |
| 0x1401f02a9#3395 | 0x1401f02a9#3398 | 0           |
| 0x1401f02ae#3402 | 0x1401f02ae#2733 | 1           |
| 0x1401f02ae#3403 | 0x1401f02ae#2734 | 1           |
| 0x1401f02ae#3404 | 0x1401f02ae#2736 | 1           |
| 0x1401f02ae#3405 | 0x1401f02ae#2738 | 1           |
| 0x1401f0289#3373 | 0x1401f02ae#3400 | 0           |
| 0x1401f02ae#3400 | 0x1401f02ae#3401 | 0           |
| 0x1401f010e#3431 | 0x1401f02ae#3402 | 0           |
| 0x1401f02ae#3401 | 0x1401f02ae#3402 | 1           |
| 0x1401f02ae#3402 | 0x1401f02ae#3403 | 0           |
| 0x1401f02ae#3402 | 0x1401f02ae#3404 | 0           |
| 0x1401f02ae#3402 | 0x1401f02ae#3405 | 0           |
| 0x1401f02b3#3465 | 0x1401f02b3#970  | 1           |
| 0x1401f0289#3375 | 0x1401f02b3#2819 | 0           |
| 0x1401f0289#3373 | 0x1401f02b3#3407 | 0           |
| 0x1401f02b3#3407 | 0x1401f02b3#3408 | 0           |
| 0x1401f010e#3431 | 0x1401f02b3#3409 | 0           |
| 0x1401f02b3#3408 | 0x1401f02b3#3409 | 1           |
| 0x1401f02b3#3409 | 0x1401f02b3#3465 | 0           |
| 0x1401f02b8#3466 | 0x1401f02b8#975  | 1           |
| 0x1401f02b3#2819 | 0x1401f02b8#2820 | 0           |
| 0x1401f0289#3373 | 0x1401f02b8#3411 | 0           |
| 0x1401f02b8#3411 | 0x1401f02b8#3412 | 0           |
| 0x1401f010e#3431 | 0x1401f02b8#3413 | 0           |
| 0x1401f02b8#3412 | 0x1401f02b8#3413 | 1           |
| 0x1401f02b8#3413 | 0x1401f02b8#3466 | 0           |
| 0x1401f02c1#3467 | 0x1401f02c1#980  | 1           |
| 0x1401f02b8#2820 | 0x1401f02c1#2821 | 0           |
| 0x1401f0289#3373 | 0x1401f02c1#3415 | 0           |
| 0x1401f02c1#3415 | 0x1401f02c1#3416 | 0           |
| 0x1401f010e#3431 | 0x1401f02c1#3417 | 0           |
| 0x1401f02c1#3416 | 0x1401f02c1#3417 | 1           |
| 0x1401f02c1#3417 | 0x1401f02c1#3467 | 0           |
| 0x1401f010e#3431 | 0x1401f02d4#990  | 1           |
| 0x1401f02a0#939  | 0x1401f02d4#990  | 2           |
| 0x1401f027f#831  | 0x1401f02d4#990  | 3           |
| 0x1401f029b#3391 | 0x1401f02d4#990  | 4           |
| 0x1401f02c1#2821 | 0x1401f02d4#2803 | 0           |
| 0x1401f02d4#3453 | 0x1401f02d4#2901 | 0           |
| 0x1401f0289#3376 | 0x1401f02d4#2926 | 0           |
| 0x1401f02a9#2719 | 0x1401f02d4#2954 | 0           |
| 0x1401f02a9#2720 | 0x1401f02d4#2979 | 0           |
| 0x1401f02a9#2722 | 0x1401f02d4#3005 | 0           |
| 0x1401f02a9#2724 | 0x1401f02d4#3030 | 0           |
| 0x1401f02ae#2733 | 0x1401f02d4#3055 | 0           |
| 0x1401f02ae#2734 | 0x1401f02d4#3080 | 0           |
| 0x1401f02ae#2736 | 0x1401f02d4#3107 | 0           |
| 0x1401f02ae#2738 | 0x1401f02d4#3132 | 0           |
| 0x1401f0289#3377 | 0x1401f02d4#3157 | 0           |
| 0x1401f02d4#3132 | 0x1401f02d9#3105 | 0           |
| 0x1401f02d4#3107 | 0x1401f02d9#3105 | 1           |
| 0x1401f02d9#3105 | 0x1401f02e2#1004 | 1           |
| 0x1401f02e2#1004 | 0x1401f02e2#1005 | 1           |
| 0x1401f02a0#939  | 0x1401f02e2#3457 | 0           |
| 0x1401f02d4#2979 | 0x1401f02e4#2952 | 0           |
| 0x1401f02d4#2954 | 0x1401f02e4#2952 | 1           |
| 0x1401f02d9#3105 | 0x1401f02e9#1009 | 0           |
| 0x1401f02e9#1009 | 0x1401f02e9#1010 | 0           |
| 0x1401f02e9#1010 | 0x1401f02f1#1013 | 1           |
| 0x1401f02f1#1013 | 0x1401f02f8#1022 | 1           |
| 0x1401f02e4#2952 | 0x1401f02f8#3449 | 0           |
| 0x1401f02e4#2952 | 0x1401f02fa#1023 | 0           |
| 0x1401f02fa#3468 | 0x1401f02fa#1024 | 1           |
| 0x1401f02fa#1023 | 0x1401f02fa#3468 | 0           |
| 0x1401f02e4#2952 | 0x1401f02fe#1028 | 0           |
| 0x1401f02fa#1024 | 0x1401f02fe#1028 | 1           |
| 0x1401f02fe#1028 | 0x1401f0301#1037 | 0           |
| 0x1401f0301#1037 | 0x1401f0309#1054 | 1           |
| 0x1401f0309#1054 | 0x1401f0309#1056 | 1           |
| 0x1401f02d9#3105 | 0x1401f030f#1057 | 0           |
| 0x1401f030f#1057 | 0x1401f030f#1058 | 0           |
| 0x1401f031a#2092 | 0x1401f031a#1063 | 1           |
| 0x1401f031a#2127 | 0x1401f031a#1063 | 2           |
| 0x1401f02f8#3449 | 0x1401f031a#2092 | 0           |
| 0x1401f02fa#1024 | 0x1401f031a#2092 | 1           |
| 0x1401f02e9#1010 | 0x1401f031a#2127 | 0           |
| 0x1401f030f#1058 | 0x1401f031a#2127 | 1           |
| 0x1401f02d4#2803 | 0x1401f031a#2804 | 0           |
| 0x1401f02d4#2901 | 0x1401f031a#2902 | 0           |
| 0x1401f02d4#2926 | 0x1401f031a#2927 | 0           |
| 0x1401f02d4#2954 | 0x1401f031a#2955 | 0           |
| 0x1401f02d4#2979 | 0x1401f031a#2980 | 0           |
| 0x1401f02d4#3005 | 0x1401f031a#3006 | 0           |
| 0x1401f02d4#3030 | 0x1401f031a#3031 | 0           |
| 0x1401f02d4#3055 | 0x1401f031a#3056 | 0           |
| 0x1401f02d4#3080 | 0x1401f031a#3081 | 0           |
| 0x1401f02d4#3107 | 0x1401f031a#3108 | 0           |
| 0x1401f02d4#3132 | 0x1401f031a#3133 | 0           |
| 0x1401f02d4#3157 | 0x1401f031a#3158 | 0           |
| 0x1401f027f#831  | 0x1401f032c#1087 | 1           |
| 0x1401f032c#1087 | 0x1401f032c#1088 | 1           |
| 0x1401f010e#3430 | 0x1401f0332#2249 | 0           |
| 0x1401f03ff#1369 | 0x1401f0332#2249 | 1           |
| 0x1401f0289#3375 | 0x1401f0332#2842 | 0           |
| 0x1401f03ff#2839 | 0x1401f0332#2842 | 1           |
| 0x1401f0289#3376 | 0x1401f0332#2942 | 0           |
| 0x1401f03ff#2940 | 0x1401f0332#2942 | 1           |
| 0x1401f0289#3377 | 0x1401f0332#3173 | 0           |
| 0x1401f03ff#3171 | 0x1401f0332#3173 | 1           |
| 0x1401f0332#2249 | 0x1401f0335#1092 | 0           |
| 0x1401f0335#3469 | 0x1401f0335#1092 | 1           |
| 0x1401f010e#3431 | 0x1401f0335#3469 | 0           |
| 0x1401f0335#1092 | 0x1401f0338#1101 | 0           |
| 0x1401f0338#1101 | 0x1401f0340#1149 | 1           |
| 0x1401f0340#1149 | 0x1401f0340#1150 | 1           |
| 0x1401f0332#2249 | 0x1401f0346#1151 | 0           |
| 0x1401f0346#3470 | 0x1401f0346#2747 | 1           |
| 0x1401f0346#3471 | 0x1401f0346#2748 | 1           |
| 0x1401f0332#2249 | 0x1401f0346#2749 | 0           |
| 0x1401f0346#3472 | 0x1401f0346#2750 | 1           |
| 0x1401f0332#2249 | 0x1401f0346#2751 | 0           |
| 0x1401f0346#3473 | 0x1401f0346#2752 | 1           |
| 0x1401f0332#2249 | 0x1401f0346#2753 | 0           |
| 0x1401f0346#1151 | 0x1401f0346#3470 | 0           |
| 0x1401f0346#2749 | 0x1401f0346#3471 | 0           |
| 0x1401f0346#2751 | 0x1401f0346#3472 | 0           |
| 0x1401f0346#2753 | 0x1401f0346#3473 | 0           |
| 0x1401f0332#2249 | 0x1401f034b#1158 | 0           |
| 0x1401f034b#1158 | 0x1401f034b#3474 | 0           |
| 0x1401f0332#2249 | 0x1401f034f#1160 | 0           |
| 0x1401f034f#3475 | 0x1401f034f#2761 | 1           |
| 0x1401f034f#3476 | 0x1401f034f#2762 | 1           |
| 0x1401f0332#2249 | 0x1401f034f#2763 | 0           |
| 0x1401f034f#3477 | 0x1401f034f#2764 | 1           |
| 0x1401f0332#2249 | 0x1401f034f#2765 | 0           |
| 0x1401f034f#3478 | 0x1401f034f#2766 | 1           |
| 0x1401f0332#2249 | 0x1401f034f#2767 | 0           |
| 0x1401f034f#1160 | 0x1401f034f#3475 | 0           |
| 0x1401f034f#2763 | 0x1401f034f#3476 | 0           |
| 0x1401f034f#2765 | 0x1401f034f#3477 | 0           |
| 0x1401f034f#2767 | 0x1401f034f#3478 | 0           |
| 0x1401f0332#2249 | 0x1401f0354#1167 | 0           |
| 0x1401f0354#3479 | 0x1401f0354#1169 | 1           |
| 0x1401f0332#2842 | 0x1401f0354#2822 | 0           |
| 0x1401f0354#1167 | 0x1401f0354#3479 | 0           |
| 0x1401f0332#2249 | 0x1401f0358#1170 | 0           |
| 0x1401f0358#3480 | 0x1401f0358#1172 | 1           |
| 0x1401f0354#2822 | 0x1401f0358#2823 | 0           |
| 0x1401f0358#1170 | 0x1401f0358#3480 | 0           |
| 0x1401f0360#3481 | 0x1401f0360#1174 | 1           |
| 0x1401f0358#2823 | 0x1401f0360#2824 | 0           |
| 0x1401f034b#3474 | 0x1401f0360#3481 | 0           |
| 0x1401f034b#3474 | 0x1401f036e#1186 | 0           |
| 0x1401f010e#3431 | 0x1401f036e#1186 | 1           |
| 0x1401f036e#1186 | 0x1401f0371#1191 | 1           |
| 0x1401f0332#2249 | 0x1401f0373#1192 | 0           |
| 0x1401f0373#3482 | 0x1401f0373#1194 | 1           |
| 0x1401f0360#2824 | 0x1401f0373#2825 | 0           |
| 0x1401f0373#1192 | 0x1401f0373#3482 | 0           |
| 0x1401f0332#2249 | 0x1401f0377#1195 | 0           |
| 0x1401f0377#3483 | 0x1401f0377#1197 | 1           |
| 0x1401f0373#2825 | 0x1401f0377#2826 | 0           |
| 0x1401f0377#1195 | 0x1401f0377#3483 | 0           |
| 0x1401f037f#3484 | 0x1401f037f#1199 | 1           |
| 0x1401f0377#2826 | 0x1401f037f#2827 | 0           |
| 0x1401f034b#3474 | 0x1401f037f#3484 | 0           |
| 0x1401f010e#3431 | 0x1401f0383#2775 | 1           |
| 0x1401f0383#3418 | 0x1401f0383#2776 | 1           |
| 0x1401f0383#3419 | 0x1401f0383#2778 | 1           |
| 0x1401f0383#3420 | 0x1401f0383#2780 | 1           |
| 0x1401f010e#3431 | 0x1401f0383#3418 | 0           |
| 0x1401f010e#3431 | 0x1401f0383#3419 | 0           |
| 0x1401f010e#3431 | 0x1401f0383#3420 | 0           |
| 0x1401f034b#3474 | 0x1401f0386#2782 | 1           |
| 0x1401f0383#2775 | 0x1401f0386#2782 | 2           |
| 0x1401f0386#3485 | 0x1401f0386#2783 | 1           |
| 0x1401f0383#2776 | 0x1401f0386#2783 | 2           |
| 0x1401f0332#2249 | 0x1401f0386#2784 | 0           |
| 0x1401f0386#3486 | 0x1401f0386#2785 | 1           |
| 0x1401f0383#2778 | 0x1401f0386#2785 | 2           |
| 0x1401f0332#2249 | 0x1401f0386#2786 | 0           |
| 0x1401f0386#3487 | 0x1401f0386#2787 | 1           |
| 0x1401f0383#2780 | 0x1401f0386#2787 | 2           |
| 0x1401f0332#2249 | 0x1401f0386#2788 | 0           |
| 0x1401f037f#2827 | 0x1401f0386#2831 | 0           |
| 0x1401f0386#2831 | 0x1401f0386#2832 | 0           |
| 0x1401f0386#2832 | 0x1401f0386#2833 | 0           |
| 0x1401f0386#2833 | 0x1401f0386#2834 | 0           |
| 0x1401f0386#2784 | 0x1401f0386#3485 | 0           |
| 0x1401f0386#2786 | 0x1401f0386#3486 | 0           |
| 0x1401f0386#2788 | 0x1401f0386#3487 | 0           |
| 0x1401f038a#3421 | 0x1401f038a#2789 | 1           |
| 0x1401f038a#3422 | 0x1401f038a#2790 | 1           |
| 0x1401f038a#3423 | 0x1401f038a#2792 | 1           |
| 0x1401f038a#3424 | 0x1401f038a#2794 | 1           |
| 0x1401f010e#3431 | 0x1401f038a#3421 | 0           |
| 0x1401f010e#3431 | 0x1401f038a#3422 | 0           |
| 0x1401f010e#3431 | 0x1401f038a#3423 | 0           |
| 0x1401f010e#3431 | 0x1401f038a#3424 | 0           |
| 0x1401f0332#2249 | 0x1401f038e#1215 | 0           |
| 0x1401f038e#3488 | 0x1401f038e#2796 | 1           |
| 0x1401f038a#2789 | 0x1401f038e#2796 | 2           |
| 0x1401f038e#3489 | 0x1401f038e#2797 | 1           |
| 0x1401f038a#2790 | 0x1401f038e#2797 | 2           |
| 0x1401f0332#2249 | 0x1401f038e#2798 | 0           |
| 0x1401f038e#3490 | 0x1401f038e#2799 | 1           |
| 0x1401f038a#2792 | 0x1401f038e#2799 | 2           |
| 0x1401f0332#2249 | 0x1401f038e#2800 | 0           |
| 0x1401f038e#3491 | 0x1401f038e#2801 | 1           |
| 0x1401f038a#2794 | 0x1401f038e#2801 | 2           |
| 0x1401f0332#2249 | 0x1401f038e#2802 | 0           |
| 0x1401f0386#2834 | 0x1401f038e#2835 | 0           |
| 0x1401f038e#2835 | 0x1401f038e#2836 | 0           |
| 0x1401f038e#2836 | 0x1401f038e#2837 | 0           |
| 0x1401f038e#2837 | 0x1401f038e#2838 | 0           |
| 0x1401f038e#1215 | 0x1401f038e#3488 | 0           |
| 0x1401f038e#2798 | 0x1401f038e#3489 | 0           |
| 0x1401f038e#2800 | 0x1401f038e#3490 | 0           |
| 0x1401f038e#2802 | 0x1401f038e#3491 | 0           |
| 0x1401f0393#3492 | 0x1401f0393#1220 | 1           |
| 0x1401f038e#2838 | 0x1401f0393#2828 | 0           |
| 0x1401f010e#3431 | 0x1401f0393#3425 | 0           |
| 0x1401f0393#3425 | 0x1401f0393#3492 | 0           |
| 0x1401f0397#3493 | 0x1401f0397#1223 | 1           |
| 0x1401f0393#2828 | 0x1401f0397#2829 | 0           |
| 0x1401f010e#3431 | 0x1401f0397#3426 | 0           |
| 0x1401f0397#3426 | 0x1401f0397#3493 | 0           |
| 0x1401f039f#3494 | 0x1401f039f#1225 | 1           |
| 0x1401f0397#2829 | 0x1401f039f#2830 | 0           |
| 0x1401f010e#3431 | 0x1401f039f#3494 | 0           |
| 0x1401f03a3#3495 | 0x1401f03a3#1228 | 0           |
| 0x1401f03a3#3496 | 0x1401f03a3#1228 | 1           |
| 0x1401f0360#2824 | 0x1401f03a3#2840 | 0           |
| 0x1401f039f#2830 | 0x1401f03a3#2840 | 1           |
| 0x1401f034b#3474 | 0x1401f03a3#3495 | 0           |
| 0x1401f010e#3431 | 0x1401f03a3#3496 | 0           |
| 0x1401f03a3#1228 | 0x1401f03aa#1240 | 0           |
| 0x1401f010e#3431 | 0x1401f03b8#1293 | 1           |
| 0x1401f03aa#1240 | 0x1401f03b8#1293 | 3           |
| 0x1401f03ae#3427 | 0x1401f03b8#1293 | 4           |
| 0x1401f03a3#2840 | 0x1401f03b8#2805 | 0           |
| 0x1401f03b8#3454 | 0x1401f03b8#2903 | 0           |
| 0x1401f0332#2942 | 0x1401f03b8#2928 | 0           |
| 0x1401f0346#2747 | 0x1401f03b8#2956 | 0           |
| 0x1401f0346#2748 | 0x1401f03b8#2981 | 0           |
| 0x1401f0346#2750 | 0x1401f03b8#3007 | 0           |
| 0x1401f0346#2752 | 0x1401f03b8#3032 | 0           |
| 0x1401f034f#2761 | 0x1401f03b8#3057 | 0           |
| 0x1401f034f#2762 | 0x1401f03b8#3082 | 0           |
| 0x1401f034f#2764 | 0x1401f03b8#3109 | 0           |
| 0x1401f034f#2766 | 0x1401f03b8#3134 | 0           |
| 0x1401f0332#3173 | 0x1401f03b8#3159 | 0           |
| 0x1401f03b8#3134 | 0x1401f03bd#3106 | 0           |
| 0x1401f03b8#3109 | 0x1401f03bd#3106 | 1           |
| 0x1401f03bd#3106 | 0x1401f03c6#1307 | 1           |
| 0x1401f03c6#1307 | 0x1401f03c6#1308 | 1           |
| 0x1401f03b8#2981 | 0x1401f03c8#2953 | 0           |
| 0x1401f03b8#2956 | 0x1401f03c8#2953 | 1           |
| 0x1401f03bd#3106 | 0x1401f03cd#1312 | 0           |
| 0x1401f03cd#1312 | 0x1401f03cd#1313 | 0           |
| 0x1401f03cd#1313 | 0x1401f03d5#1316 | 1           |
| 0x1401f03d5#1316 | 0x1401f03dc#1325 | 1           |
| 0x1401f03c8#2953 | 0x1401f03dc#3448 | 0           |
| 0x1401f03c8#2953 | 0x1401f03de#1326 | 0           |
| 0x1401f03de#3497 | 0x1401f03de#1327 | 1           |
| 0x1401f03de#1326 | 0x1401f03de#3497 | 0           |
| 0x1401f03c8#2953 | 0x1401f03e2#1331 | 0           |
| 0x1401f03de#1327 | 0x1401f03e2#1331 | 1           |
| 0x1401f03e2#1331 | 0x1401f03e5#1340 | 0           |
| 0x1401f03e5#1340 | 0x1401f03ed#1357 | 1           |
| 0x1401f03ed#1357 | 0x1401f03ed#1359 | 1           |
| 0x1401f03fa#2089 | 0x1401f03fa#1366 | 1           |
| 0x1401f03dc#3448 | 0x1401f03fa#2089 | 0           |
| 0x1401f03de#1327 | 0x1401f03fa#2089 | 1           |
| 0x1401f03b8#2805 | 0x1401f03fa#2808 | 0           |
| 0x1401f03b8#2903 | 0x1401f03fa#2906 | 0           |
| 0x1401f03b8#2928 | 0x1401f03fa#2931 | 0           |
| 0x1401f03b8#2956 | 0x1401f03fa#2959 | 0           |
| 0x1401f03b8#2981 | 0x1401f03fa#2984 | 0           |
| 0x1401f03b8#3007 | 0x1401f03fa#3010 | 0           |
| 0x1401f03b8#3032 | 0x1401f03fa#3035 | 0           |
| 0x1401f03b8#3057 | 0x1401f03fa#3060 | 0           |
| 0x1401f03b8#3082 | 0x1401f03fa#3085 | 0           |
| 0x1401f03b8#3109 | 0x1401f03fa#3112 | 0           |
| 0x1401f03b8#3134 | 0x1401f03fa#3137 | 0           |
| 0x1401f03b8#3159 | 0x1401f03fa#3162 | 0           |
| 0x1401f0332#2249 | 0x1401f03ff#1369 | 0           |
| 0x1401f0332#2842 | 0x1401f03ff#2839 | 0           |
| 0x1401f03b8#2805 | 0x1401f03ff#2839 | 1           |
| 0x1401f03fa#2808 | 0x1401f03ff#2839 | 2           |
| 0x1401f0332#2942 | 0x1401f03ff#2940 | 0           |
| 0x1401f03b8#2928 | 0x1401f03ff#2940 | 1           |
| 0x1401f03fa#2931 | 0x1401f03ff#2940 | 2           |
| 0x1401f0332#3173 | 0x1401f03ff#3171 | 0           |
| 0x1401f03b8#3159 | 0x1401f03ff#3171 | 1           |
| 0x1401f03fa#3162 | 0x1401f03ff#3171 | 2           |
| 0x1401f03ff#1369 | 0x1401f0406#1379 | 0           |
| 0x1401f0406#3500 | 0x1401f0406#1379 | 1           |
| 0x1401f010e#3431 | 0x1401f0406#3500 | 0           |
| 0x1401f0406#1379 | 0x1401f040d#1396 | 1           |
| 0x1401f040d#1396 | 0x1401f040d#1397 | 1           |
| 0x1401f02d4#2803 | 0x1401f0418#2841 | 0           |
| 0x1401f03b8#2805 | 0x1401f0418#2841 | 1           |
| 0x1401f02d4#2901 | 0x1401f0418#2916 | 0           |
| 0x1401f03b8#2903 | 0x1401f0418#2916 | 1           |
| 0x1401f02d4#2926 | 0x1401f0418#2941 | 0           |
| 0x1401f03b8#2928 | 0x1401f0418#2941 | 1           |
| 0x1401f02d4#2954 | 0x1401f0418#2969 | 0           |
| 0x1401f03b8#2956 | 0x1401f0418#2969 | 1           |
| 0x1401f02d4#2979 | 0x1401f0418#2994 | 0           |
| 0x1401f03b8#2981 | 0x1401f0418#2994 | 1           |
| 0x1401f02d4#3005 | 0x1401f0418#3020 | 0           |
| 0x1401f03b8#3007 | 0x1401f0418#3020 | 1           |
| 0x1401f02d4#3030 | 0x1401f0418#3045 | 0           |
| 0x1401f03b8#3032 | 0x1401f0418#3045 | 1           |
| 0x1401f02d4#3055 | 0x1401f0418#3070 | 0           |
| 0x1401f03b8#3057 | 0x1401f0418#3070 | 1           |
| 0x1401f02d4#3080 | 0x1401f0418#3095 | 0           |
| 0x1401f03b8#3082 | 0x1401f0418#3095 | 1           |
| 0x1401f02d4#3107 | 0x1401f0418#3122 | 0           |
| 0x1401f03b8#3109 | 0x1401f0418#3122 | 1           |
| 0x1401f02d4#3132 | 0x1401f0418#3147 | 0           |
| 0x1401f03b8#3134 | 0x1401f0418#3147 | 1           |
| 0x1401f02d4#3157 | 0x1401f0418#3172 | 0           |
| 0x1401f03b8#3159 | 0x1401f0418#3172 | 1           |
| 0x1401f041d#3498 | 0x1401f041d#1401 | 0           |
| 0x1401f0418#2841 | 0x1401f041d#2806 | 0           |
| 0x1401f0418#2916 | 0x1401f041d#2904 | 0           |
| 0x1401f0418#2941 | 0x1401f041d#2929 | 0           |
| 0x1401f0418#2969 | 0x1401f041d#2957 | 0           |
| 0x1401f0418#2994 | 0x1401f041d#2982 | 0           |
| 0x1401f0418#3020 | 0x1401f041d#3008 | 0           |
| 0x1401f0418#3045 | 0x1401f041d#3033 | 0           |
| 0x1401f0418#3070 | 0x1401f041d#3058 | 0           |
| 0x1401f0418#3095 | 0x1401f041d#3083 | 0           |
| 0x1401f0418#3122 | 0x1401f041d#3110 | 0           |
| 0x1401f0418#3147 | 0x1401f041d#3135 | 0           |
| 0x1401f0418#3172 | 0x1401f041d#3160 | 0           |
| 0x1401f041d#1400 | 0x1401f041d#3498 | 0           |
| 0x1401f041f#3499 | 0x1401f041f#1403 | 0           |
| 0x1401f041d#2806 | 0x1401f041f#2807 | 0           |
| 0x1401f041f#2807 | 0x1401f041f#2818 | 0           |
| 0x1401f041d#2904 | 0x1401f041f#2905 | 0           |
| 0x1401f041d#2929 | 0x1401f041f#2930 | 0           |
| 0x1401f041d#2957 | 0x1401f041f#2958 | 0           |
| 0x1401f041d#2982 | 0x1401f041f#2983 | 0           |
| 0x1401f041d#3008 | 0x1401f041f#3009 | 0           |
| 0x1401f041d#3033 | 0x1401f041f#3034 | 0           |
| 0x1401f041d#3058 | 0x1401f041f#3059 | 0           |
| 0x1401f041d#3083 | 0x1401f041f#3084 | 0           |
| 0x1401f041d#3110 | 0x1401f041f#3111 | 0           |
| 0x1401f041d#3135 | 0x1401f041f#3136 | 0           |
| 0x1401f041d#3160 | 0x1401f041f#3161 | 0           |
| 0x1401f041f#1402 | 0x1401f041f#3499 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined4 * |
| 1       | param_2 | /longlong     |
| 2       | param_3 | /longlong     |
| 3       | param_4 | /undefined1   |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 1       | 0x1401f00fa#51   | 0           |
| 0       | 0x1401f00fa#3463 | 0           |
| 1       | 0x1401f010e#3430 | 0           |
| 1       | 0x1401f010e#3430 | 1           |
| 0       | 0x1401f010e#3431 | 0           |
| 0       | 0x1401f010e#3431 | 1           |
| 2       | 0x1401f010e#3432 | 0           |
| 2       | 0x1401f010e#3432 | 1           |
| 1       | 0x1401f010e#3459 | 0           |
| 1       | 0x1401f0123#119  | 0           |
| 0       | 0x1401f0123#3464 | 0           |
| 2       | 0x1401f0130#177  | 0           |
| 0       | 0x1401f0141#3381 | 0           |
| 1       | 0x1401f0145#226  | 0           |
| 0       | 0x1401f0151#3501 | 0           |
| 0       | 0x1401f015c#3450 | 0           |
| 0       | 0x1401f0170#3383 | 0           |
| 0       | 0x1401f0177#3385 | 0           |
| 0       | 0x1401f017b#434  | 1           |
| 3       | 0x1401f017b#434  | 4           |
| 3       | 0x1401f0196#456  | 4           |
| 1       | 0x1401f019b#457  | 0           |
| 3       | 0x1401f01af#483  | 4           |
| 3       | 0x1401f01c6#494  | 4           |
| 0       | 0x1401f01dd#505  | 2           |
| 1       | 0x1401f01dd#505  | 4           |
| 3       | 0x1401f01dd#3455 | 0           |
| 0       | 0x1401f01f2#3503 | 0           |
| 2       | 0x1401f01f5#525  | 0           |
| 2       | 0x1401f01f9#566  | 0           |
| 1       | 0x1401f01ff#576  | 0           |
| 0       | 0x1401f021f#691  | 1           |
| 2       | 0x1401f021f#691  | 3           |
| 3       | 0x1401f021f#691  | 4           |
| 1       | 0x1401f0227#3452 | 0           |
| 1       | 0x1401f022f#827  | 2           |
| 2       | 0x1401f022f#827  | 3           |
| 3       | 0x1401f022f#827  | 4           |
| 0       | 0x1401f0237#2171 | 0           |
| 0       | 0x1401f0237#2171 | 1           |
| 0       | 0x1401f023a#3505 | 0           |
| 0       | 0x1401f0255#764  | 1           |
| 1       | 0x1401f0255#764  | 2           |
| 3       | 0x1401f0255#764  | 3           |
| 0       | 0x1401f02a9#3395 | 0           |
| 0       | 0x1401f02ae#3402 | 0           |
| 0       | 0x1401f02b3#3409 | 0           |
| 0       | 0x1401f02b8#3413 | 0           |
| 0       | 0x1401f02c1#3417 | 0           |
| 0       | 0x1401f02d4#990  | 1           |
| 3       | 0x1401f02d4#3453 | 0           |
| 1       | 0x1401f0332#2249 | 0           |
| 1       | 0x1401f0332#2249 | 1           |
| 1       | 0x1401f0335#1092 | 0           |
| 0       | 0x1401f0335#3469 | 0           |
| 1       | 0x1401f0346#1151 | 0           |
| 1       | 0x1401f0346#2749 | 0           |
| 1       | 0x1401f0346#2751 | 0           |
| 1       | 0x1401f0346#2753 | 0           |
| 1       | 0x1401f034b#1158 | 0           |
| 1       | 0x1401f034f#1160 | 0           |
| 1       | 0x1401f034f#2763 | 0           |
| 1       | 0x1401f034f#2765 | 0           |
| 1       | 0x1401f034f#2767 | 0           |
| 1       | 0x1401f0354#1167 | 0           |
| 1       | 0x1401f0358#1170 | 0           |
| 0       | 0x1401f036e#1186 | 1           |
| 1       | 0x1401f0373#1192 | 0           |
| 1       | 0x1401f0377#1195 | 0           |
| 0       | 0x1401f0383#2775 | 1           |
| 0       | 0x1401f0383#3418 | 0           |
| 0       | 0x1401f0383#3419 | 0           |
| 0       | 0x1401f0383#3420 | 0           |
| 1       | 0x1401f0386#2784 | 0           |
| 1       | 0x1401f0386#2786 | 0           |
| 1       | 0x1401f0386#2788 | 0           |
| 0       | 0x1401f038a#3421 | 0           |
| 0       | 0x1401f038a#3422 | 0           |
| 0       | 0x1401f038a#3423 | 0           |
| 0       | 0x1401f038a#3424 | 0           |
| 1       | 0x1401f038e#1215 | 0           |
| 1       | 0x1401f038e#2798 | 0           |
| 1       | 0x1401f038e#2800 | 0           |
| 1       | 0x1401f038e#2802 | 0           |
| 0       | 0x1401f0393#3425 | 0           |
| 0       | 0x1401f0397#3426 | 0           |
| 0       | 0x1401f039f#3494 | 0           |
| 0       | 0x1401f03a3#3496 | 0           |
| 0       | 0x1401f03b8#1293 | 1           |
| 3       | 0x1401f03b8#3454 | 0           |
| 1       | 0x1401f03ff#1369 | 0           |
| 1       | 0x1401f0406#1379 | 0           |
| 0       | 0x1401f0406#3500 | 0           |

## raw_result.value.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x1401f010e#113  | conditional_branch |               | 1           |
| 0x1401f0130#178  | conditional_branch |               | 1           |
| 0x1401f015c#293  | conditional_branch |               | 1           |
| 0x1401f017b#434  | direct_call        | 0             |             |
| 0x1401f0196#456  | direct_call        | 0             |             |
| 0x1401f01af#483  | direct_call        | 0             |             |
| 0x1401f01c6#494  | direct_call        | 0             |             |
| 0x1401f01dd#505  | direct_call        | 0             |             |
| 0x1401f0217#686  | conditional_branch |               | 1           |
| 0x1401f021f#691  | direct_call        | 0             |             |
| 0x1401f022f#827  | direct_call        | 0             |             |
| 0x1401f0255#764  | direct_call        | 0             |             |
| 0x1401f0289#890  | conditional_branch |               | 1           |
| 0x1401f02a9#2719 | memory_read        | 1             |             |
| 0x1401f02a9#2720 | memory_read        | 1             |             |
| 0x1401f02a9#2722 | memory_read        | 1             |             |
| 0x1401f02a9#2724 | memory_read        | 1             |             |
| 0x1401f02ae#2733 | memory_read        | 1             |             |
| 0x1401f02ae#2734 | memory_read        | 1             |             |
| 0x1401f02ae#2736 | memory_read        | 1             |             |
| 0x1401f02ae#2738 | memory_read        | 1             |             |
| 0x1401f02b3#970  | memory_write       | 1             | 2           |
| 0x1401f02b8#975  | memory_write       | 1             | 2           |
| 0x1401f02c1#980  | memory_write       | 1             | 2           |
| 0x1401f02d4#990  | direct_call        | 0             |             |
| 0x1401f02e2#1005 | conditional_branch |               | 1           |
| 0x1401f02f8#1022 | conditional_branch |               | 1           |
| 0x1401f02fa#1024 | memory_read        | 1             |             |
| 0x1401f0309#1056 | conditional_branch |               | 1           |
| 0x1401f031a#1063 | direct_call        | 0             |             |
| 0x1401f032c#1088 | conditional_branch |               | 1           |
| 0x1401f0340#1150 | conditional_branch |               | 1           |
| 0x1401f0346#2747 | memory_read        | 1             |             |
| 0x1401f0346#2748 | memory_read        | 1             |             |
| 0x1401f0346#2750 | memory_read        | 1             |             |
| 0x1401f0346#2752 | memory_read        | 1             |             |
| 0x1401f034f#2761 | memory_read        | 1             |             |
| 0x1401f034f#2762 | memory_read        | 1             |             |
| 0x1401f034f#2764 | memory_read        | 1             |             |
| 0x1401f034f#2766 | memory_read        | 1             |             |
| 0x1401f0354#1169 | memory_write       | 1             | 2           |
| 0x1401f0358#1172 | memory_write       | 1             | 2           |
| 0x1401f0360#1174 | memory_write       | 1             | 2           |
| 0x1401f0371#1191 | conditional_branch |               | 1           |
| 0x1401f0373#1194 | memory_write       | 1             | 2           |
| 0x1401f0377#1197 | memory_write       | 1             | 2           |
| 0x1401f037f#1199 | memory_write       | 1             | 2           |
| 0x1401f0383#2775 | memory_read        | 1             |             |
| 0x1401f0383#2776 | memory_read        | 1             |             |
| 0x1401f0383#2778 | memory_read        | 1             |             |
| 0x1401f0383#2780 | memory_read        | 1             |             |
| 0x1401f0386#2782 | memory_write       | 1             | 2           |
| 0x1401f0386#2783 | memory_write       | 1             | 2           |
| 0x1401f0386#2785 | memory_write       | 1             | 2           |
| 0x1401f0386#2787 | memory_write       | 1             | 2           |
| 0x1401f038a#2789 | memory_read        | 1             |             |
| 0x1401f038a#2790 | memory_read        | 1             |             |
| 0x1401f038a#2792 | memory_read        | 1             |             |
| 0x1401f038a#2794 | memory_read        | 1             |             |
| 0x1401f038e#2796 | memory_write       | 1             | 2           |
| 0x1401f038e#2797 | memory_write       | 1             | 2           |
| 0x1401f038e#2799 | memory_write       | 1             | 2           |
| 0x1401f038e#2801 | memory_write       | 1             | 2           |
| 0x1401f0393#1220 | memory_write       | 1             | 2           |
| 0x1401f0397#1223 | memory_write       | 1             | 2           |
| 0x1401f039f#1225 | memory_write       | 1             | 2           |
| 0x1401f03b8#1293 | direct_call        | 0             |             |
| 0x1401f03c6#1308 | conditional_branch |               | 1           |
| 0x1401f03dc#1325 | conditional_branch |               | 1           |
| 0x1401f03de#1327 | memory_read        | 1             |             |
| 0x1401f03ed#1359 | conditional_branch |               | 1           |
| 0x1401f03fa#1366 | direct_call        | 0             |             |
| 0x1401f040d#1397 | conditional_branch |               | 1           |
| 0x1401f041d#1401 | indirect_call      | 0             |             |
| 0x1401f041f#1403 | indirect_call      | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f041f with no resolved callee; its no-return basis is unknown.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401f041f with no resolved callee; its no-return basis is unknown.

## normalized_result.procedure.address

0x1401f00d0

## normalized_result.procedure.name

FUN_1401f00d0

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
| 0x1401f00d0 | 0x1401f041f |

## normalized_result.procedure.body.total_bytes

848

## normalized_result.procedure.body.span_bytes

848

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f00d0()

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_40 @ Stack[-0x40]:8      | ghidra-function-database |
| undefined1[16] local_50 @ Stack[-0x50]:16 | ghidra-function-database |
| undefined1[16] local_60 @ Stack[-0x60]:16 | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined1 local_78 @ Stack[-0x78]:1      | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8    | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8    | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401f00d0(undefined4 *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1404c7ac0 ^ (ulonglong)auStack_98;
  lVar8 = param_2 - (longlong)param_1;
  while( true ) {
    if (lVar8 >> 5 < 0x21) {
      FUN_1401ef1c0(param_1,param_2,param_4);
      return;
    }
    lVar8 = param_2 - (longlong)param_1 >> 6;
    if (param_3 < 1) break;
    local_68 = param_1 + lVar8 * 8;
    lVar8 = param_2 + -0x20;
    lVar12 = lVar8 - (longlong)param_1 >> 5;
    puVar9 = param_1;
    if (0x28 < lVar12) {
      lVar12 = lVar12 + 1 >> 3;
      puVar9 = param_1 + lVar12 * 8;
      FUN_1401ef4f0(param_1,puVar9,param_1 + lVar12 * 0x10,param_4);
      FUN_1401ef4f0(local_68 + lVar12 * -8,local_68,local_68 + lVar12 * 8,param_4);
      lVar8 = lVar8 + lVar12 * -0x20;
      FUN_1401ef4f0(param_2 + -0x20 + lVar12 * -0x40,lVar8,param_2 + -0x20,param_4);
    }
    puVar7 = local_68;
    FUN_1401ef4f0(puVar9,local_68,lVar8,param_4);
    local_78 = param_4;
    FUN_1401ef5b0(&local_60,param_1,puVar7,param_2);
    lVar12 = CONCAT44(uStack_5c,local_60);
    puVar9 = (undefined4 *)CONCAT44(uStack_54,uStack_58);
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (lVar12 - (longlong)param_1 >> 5 < param_2 - (longlong)puVar9 >> 5) {
      FUN_1401f00d0(param_1,lVar12,param_3,param_4);
      param_1 = puVar9;
      lVar12 = param_2;
    }
    else {
      FUN_1401f00d0(puVar9,param_2,param_3,param_4);
    }
    lVar8 = lVar12 - (longlong)param_1;
    param_2 = lVar12;
  }
  lVar12 = param_2 - (longlong)param_1 >> 5;
  while (0 < lVar8) {
    lVar11 = lVar8 + -1;
    puVar9 = param_1 + lVar8 * 8 + -8;
    local_60 = *puVar9;
    uStack_5c = puVar9[1];
    uStack_58 = puVar9[2];
    uStack_54 = puVar9[3];
    puVar9 = param_1 + lVar8 * 8 + -4;
    local_50 = *puVar9;
    uStack_4c = puVar9[1];
    uStack_48 = puVar9[2];
    uStack_44 = puVar9[3];
    *(undefined8 *)(param_1 + lVar8 * 8 + -4) = 0;
    *(undefined8 *)(param_1 + lVar8 * 8 + -2) = 7;
    *(undefined2 *)(param_1 + lVar8 * 8 + -8) = 0;
    local_78 = param_4;
    FUN_1401efdd0(param_1,lVar11,lVar12,&local_60);
    uVar6 = CONCAT44(uStack_44,uStack_48);
    lVar8 = lVar11;
    if (7 < uVar6) {
      lVar5 = CONCAT44(uStack_5c,local_60);
      uVar10 = uVar6 * 2 + 2;
      lVar11 = lVar5;
      if (0xfff < uVar10) {
        lVar11 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar11) - 8U) goto LAB_1401f0418;
        uVar10 = uVar6 * 2 + 0x29;
      }
      thunk_FUN_140327e20(lVar11,uVar10);
    }
  }
  if (1 < lVar12) {
    do {
      if (1 < param_2 - (longlong)param_1 >> 5) {
        local_60 = *(undefined4 *)(param_2 + -0x20);
        uStack_5c = *(undefined4 *)(param_2 + -0x1c);
        uStack_58 = *(undefined4 *)(param_2 + -0x18);
        uStack_54 = *(undefined4 *)(param_2 + -0x14);
        puVar9 = (undefined4 *)(param_2 + -0x20);
        local_50 = *(undefined4 *)(param_2 + -0x10);
        uStack_4c = *(undefined4 *)(param_2 + -0xc);
        uStack_48 = *(undefined4 *)(param_2 + -8);
        uStack_44 = *(undefined4 *)(param_2 + -4);
        *(undefined8 *)(param_2 + -0x10) = 0;
        *(undefined8 *)(param_2 + -8) = 7;
        *(undefined2 *)puVar9 = 0;
        if (puVar9 != param_1) {
          *(undefined8 *)(param_2 + -0x10) = 0;
          *(undefined8 *)(param_2 + -8) = 7;
          *(undefined2 *)puVar9 = 0;
          uVar2 = param_1[1];
          uVar3 = param_1[2];
          uVar4 = param_1[3];
          *puVar9 = *param_1;
          *(undefined4 *)(param_2 + -0x1c) = uVar2;
          *(undefined4 *)(param_2 + -0x18) = uVar3;
          *(undefined4 *)(param_2 + -0x14) = uVar4;
          uVar2 = param_1[5];
          uVar3 = param_1[6];
          uVar4 = param_1[7];
          *(undefined4 *)(param_2 + -0x10) = param_1[4];
          *(undefined4 *)(param_2 + -0xc) = uVar2;
          *(undefined4 *)(param_2 + -8) = uVar3;
          *(undefined4 *)(param_2 + -4) = uVar4;
          *(undefined8 *)(param_1 + 4) = 0;
          *(undefined8 *)(param_1 + 6) = 7;
          *(undefined2 *)param_1 = 0;
        }
        local_78 = param_4;
        FUN_1401efdd0(param_1,0,(longlong)puVar9 - (longlong)param_1 >> 5,&local_60);
        if (7 < CONCAT44(uStack_44,uStack_48)) {
          lVar12 = CONCAT44(uStack_5c,local_60);
          lVar8 = lVar12;
          if ((0xfff < CONCAT44(uStack_44,uStack_48) * 2 + 2) &&
             (lVar8 = *(longlong *)(lVar12 + -8), 0x1f < (lVar12 - lVar8) - 8U)) {
LAB_1401f0418:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          thunk_FUN_140327e20(lVar8);
        }
      }
      param_2 = param_2 + -0x20;
    } while (0x3f < param_2 - (longlong)param_1);
  }
  return;
}



## normalized_result.assembly

0x1401f00d0: MOV qword ptr [RSP + 0x20], RBX,0x1401f00d5: PUSH RBP,0x1401f00d6: PUSH RSI,0x1401f00d7: PUSH RDI,0x1401f00d8: PUSH R12,0x1401f00da: PUSH R13,0x1401f00dc: PUSH R14,0x1401f00de: PUSH R15,0x1401f00e0: SUB RSP, 0x60,0x1401f00e4: MOV RAX, qword ptr [0x1404c7ac0],0x1401f00eb: XOR RAX, RSP,0x1401f00ee: MOV qword ptr [RSP + 0x58], RAX,0x1401f00f3: MOV RAX, RDX,0x1401f00f6: MOVZX EBX, R9B,0x1401f00fa: SUB RAX, RCX,0x1401f00fd: MOV R12, R8,0x1401f0100: SAR RAX, 0x5,0x1401f0104: MOV R13, RDX,0x1401f0107: MOV RDI, RCX,0x1401f010a: CMP RAX, 0x20,0x1401f010e: JLE 0x1401f024b,0x1401f0114: NOP dword ptr [RAX],0x1401f0118: NOP dword ptr [RAX + RAX*0x1],0x1401f0120: MOV RBP, R13,0x1401f0123: SUB RBP, RDI,0x1401f0126: MOV RSI, RBP,0x1401f0129: SAR RSI, 0x6,0x1401f012d: TEST R12, R12,0x1401f0130: JLE 0x1401f027f,0x1401f0136: SHL RSI, 0x5,0x1401f013a: MOVZX R9D, BL,0x1401f013e: MOV RCX, RDI,0x1401f0141: LEA R14, [RSI + RDI*0x1],0x1401f0145: LEA RSI, [R13 + -0x20],0x1401f0149: MOV qword ptr [RSP + 0x30], R14,0x1401f014e: MOV R15, RSI,0x1401f0151: SUB R15, RDI,0x1401f0154: SAR R15, 0x5,0x1401f0158: CMP R15, 0x28,0x1401f015c: JLE 0x1401f01c0,0x1401f015e: INC R15,0x1401f0161: SAR R15, 0x3,0x1401f0165: MOV R14, R15,0x1401f0168: SHL R15, 0x5,0x1401f016c: SHL R14, 0x6,0x1401f0170: LEA RBP, [R15 + RDI*0x1],0x1401f0174: MOV RDX, RBP,0x1401f0177: LEA R8, [R14 + RDI*0x1],0x1401f017b: CALL 0x1401ef4f0,0x1401f0180: MOV RAX, qword ptr [RSP + 0x30],0x1401f0185: MOVZX R9D, BL,0x1401f0189: MOV RCX, RAX,0x1401f018c: MOV RDX, RAX,0x1401f018f: SUB RCX, R15,0x1401f0192: LEA R8, [R15 + RAX*0x1],0x1401f0196: CALL 0x1401ef4f0,0x1401f019b: LEA R8, [R13 + -0x20],0x1401f019f: SUB RSI, R15,0x1401f01a2: MOV RCX, R8,0x1401f01a5: MOVZX R9D, BL,0x1401f01a9: SUB RCX, R14,0x1401f01ac: MOV RDX, RSI,0x1401f01af: CALL 0x1401ef4f0,0x1401f01b4: MOV R14, qword ptr [RSP + 0x30],0x1401f01b9: MOVZX R9D, BL,0x1401f01bd: MOV RCX, RBP,0x1401f01c0: MOV R8, RSI,0x1401f01c3: MOV RDX, R14,0x1401f01c6: CALL 0x1401ef4f0,0x1401f01cb: MOV R9, R13,0x1401f01ce: MOV byte ptr [RSP + 0x20], BL,0x1401f01d2: MOV R8, R14,0x1401f01d5: LEA RCX, [RSP + 0x38],0x1401f01da: MOV RDX, RDI,0x1401f01dd: CALL 0x1401ef5b0,0x1401f01e2: MOV RBP, qword ptr [RSP + 0x38],0x1401f01e7: MOV RCX, R12,0x1401f01ea: MOV RSI, qword ptr [RSP + 0x40],0x1401f01ef: MOV RAX, RBP,0x1401f01f2: SUB RAX, RDI,0x1401f01f5: SAR RCX, 0x2,0x1401f01f9: SAR R12, 0x1,0x1401f01fc: MOV R8, R13,0x1401f01ff: SUB R8, RSI,0x1401f0202: SAR RAX, 0x5,0x1401f0206: ADD R12, RCX,0x1401f0209: SAR R8, 0x5,0x1401f020d: CMP RAX, R8,0x1401f0210: MOVZX R9D, BL,0x1401f0214: MOV R8, R12,0x1401f0217: JGE 0x1401f0229,0x1401f0219: MOV RDX, RBP,0x1401f021c: MOV RCX, RDI,0x1401f021f: CALL 0x1401f00d0,0x1401f0224: MOV RDI, RSI,0x1401f0227: JMP 0x1401f0237,0x1401f0229: MOV RDX, R13,0x1401f022c: MOV RCX, RSI,0x1401f022f: CALL 0x1401f00d0,0x1401f0234: MOV R13, RBP,0x1401f0237: MOV RAX, R13,0x1401f023a: SUB RAX, RDI,0x1401f023d: SAR RAX, 0x5,0x1401f0241: CMP RAX, 0x20,0x1401f0245: JG 0x1401f0120,0x1401f024b: MOVZX R8D, BL,0x1401f024f: MOV RDX, R13,0x1401f0252: MOV RCX, RDI,0x1401f0255: CALL 0x1401ef1c0,0x1401f025a: MOV RCX, qword ptr [RSP + 0x58],0x1401f025f: XOR RCX, RSP,0x1401f0262: CALL 0x140327740,0x1401f0267: MOV RBX, qword ptr [RSP + 0xb8],0x1401f026f: ADD RSP, 0x60,0x1401f0273: POP R15,0x1401f0275: POP R14,0x1401f0277: POP R13,0x1401f0279: POP R12,0x1401f027b: POP RDI,0x1401f027c: POP RSI,0x1401f027d: POP RBP,0x1401f027e: RET,0x1401f027f: SAR RBP, 0x5,0x1401f0283: XOR R14D, R14D,0x1401f0286: TEST RSI, RSI,0x1401f0289: JLE 0x1401f0328,0x1401f028f: NOP,0x1401f0290: MOV RCX, RSI,0x1401f0293: MOV byte ptr [RSP + 0x20], BL,0x1401f0297: SHL RCX, 0x5,0x1401f029b: LEA R9, [RSP + 0x38],0x1401f02a0: DEC RSI,0x1401f02a3: MOV R8, RBP,0x1401f02a6: MOV RDX, RSI,0x1401f02a9: MOVUPS XMM0, xmmword ptr [RDI + RCX*0x1 + -0x20],0x1401f02ae: MOVUPS XMM1, xmmword ptr [RDI + RCX*0x1 + -0x10],0x1401f02b3: MOV qword ptr [RDI + RCX*0x1 + -0x10], R14,0x1401f02b8: MOV qword ptr [RDI + RCX*0x1 + -0x8], 0x7,0x1401f02c1: MOV word ptr [RDI + RCX*0x1 + -0x20], R14W,0x1401f02c7: MOV RCX, RDI,0x1401f02ca: MOVUPS xmmword ptr [RSP + 0x38], XMM0,0x1401f02cf: MOVUPS xmmword ptr [RSP + 0x48], XMM1,0x1401f02d4: CALL 0x1401efdd0,0x1401f02d9: MOV RAX, qword ptr [RSP + 0x50],0x1401f02de: CMP RAX, 0x7,0x1401f02e2: JBE 0x1401f031f,0x1401f02e4: MOV RCX, qword ptr [RSP + 0x38],0x1401f02e9: LEA RDX, [0x2 + RAX*0x2],0x1401f02f1: CMP RDX, 0x1000,0x1401f02f8: JC 0x1401f031a,0x1401f02fa: MOV R8, qword ptr [RCX + -0x8],0x1401f02fe: SUB RCX, R8,0x1401f0301: SUB RCX, 0x8,0x1401f0305: CMP RCX, 0x1f,0x1401f0309: JA 0x1401f0418,0x1401f030f: LEA RDX, [0x29 + RAX*0x2],0x1401f0317: MOV RCX, R8,0x1401f031a: CALL 0x1403272f0,0x1401f031f: TEST RSI, RSI,0x1401f0322: JG 0x1401f0290,0x1401f0328: CMP RBP, 0x2,0x1401f032c: JL 0x1401f025a,0x1401f0332: MOV RAX, R13,0x1401f0335: SUB RAX, RDI,0x1401f0338: SAR RAX, 0x5,0x1401f033c: CMP RAX, 0x2,0x1401f0340: JL 0x1401f03ff,0x1401f0346: MOVUPS XMM0, xmmword ptr [R13 + -0x20],0x1401f034b: LEA R8, [R13 + -0x20],0x1401f034f: MOVUPS XMM1, xmmword ptr [R8 + 0x10],0x1401f0354: MOV qword ptr [R13 + -0x10], R14,0x1401f0358: MOV qword ptr [R13 + -0x8], 0x7,0x1401f0360: MOV word ptr [R8], R14W,0x1401f0364: MOVUPS xmmword ptr [RSP + 0x38], XMM0,0x1401f0369: MOVUPS xmmword ptr [RSP + 0x48], XMM1,0x1401f036e: CMP R8, RDI,0x1401f0371: JZ 0x1401f03a3,0x1401f0373: MOV qword ptr [R13 + -0x10], R14,0x1401f0377: MOV qword ptr [R13 + -0x8], 0x7,0x1401f037f: MOV word ptr [R8], R14W,0x1401f0383: MOVUPS XMM0, xmmword ptr [RDI],0x1401f0386: MOVUPS xmmword ptr [R8], XMM0,0x1401f038a: MOVUPS XMM1, xmmword ptr [RDI + 0x10],0x1401f038e: MOVUPS xmmword ptr [R8 + 0x10], XMM1,0x1401f0393: MOV qword ptr [RDI + 0x10], R14,0x1401f0397: MOV qword ptr [RDI + 0x18], 0x7,0x1401f039f: MOV word ptr [RDI], R14W,0x1401f03a3: SUB R8, RDI,0x1401f03a6: MOV byte ptr [RSP + 0x20], BL,0x1401f03aa: SAR R8, 0x5,0x1401f03ae: LEA R9, [RSP + 0x38],0x1401f03b3: XOR EDX, EDX,0x1401f03b5: MOV RCX, RDI,0x1401f03b8: CALL 0x1401efdd0,0x1401f03bd: MOV RAX, qword ptr [RSP + 0x50],0x1401f03c2: CMP RAX, 0x7,0x1401f03c6: JBE 0x1401f03ff,0x1401f03c8: MOV RCX, qword ptr [RSP + 0x38],0x1401f03cd: LEA RDX, [0x2 + RAX*0x2],0x1401f03d5: CMP RDX, 0x1000,0x1401f03dc: JC 0x1401f03fa,0x1401f03de: MOV R8, qword ptr [RCX + -0x8],0x1401f03e2: SUB RCX, R8,0x1401f03e5: SUB RCX, 0x8,0x1401f03e9: CMP RCX, 0x1f,0x1401f03ed: JA 0x1401f0418,0x1401f03ef: LEA RDX, [0x29 + RAX*0x2],0x1401f03f7: MOV RCX, R8,0x1401f03fa: CALL 0x1403272f0,0x1401f03ff: SUB R13, 0x20,0x1401f0403: MOV RAX, R13,0x1401f0406: SUB RAX, RDI,0x1401f0409: CMP RAX, 0x40,0x1401f040d: JGE 0x1401f0332,0x1401f0413: JMP 0x1401f025a,0x1401f0418: MOV ECX, 0x5,0x1401f041d: INT 0x29,0x1401f041f: INT3

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f00d0 | FUN_1401f00d0 | [object Object] | [object Object] |
| 0x1401f4ef0 | FUN_1401f4ef0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x1401ef1c0 | FUN_1401ef1c0           | [object Object] | [object Object] |
| 0x1401ef4f0 | FUN_1401ef4f0           | [object Object] | [object Object] |
| 0x1401ef5b0 | FUN_1401ef5b0           | [object Object] | [object Object] |
| 0x1401efdd0 | FUN_1401efdd0           | [object Object] | [object Object] |
| 0x1401f00d0 | FUN_1401f00d0           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f4f91    | 0x1401f00d0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df768    | 0x1401f00d0    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f00d0    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401f00e4    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f00ee    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f010e    | 0x1401f024b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0130    | 0x1401f027f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0149    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f015c    | 0x1401f01c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f017b    | 0x1401ef4f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0180    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f0196    | 0x1401ef4f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f01af    | 0x1401ef4f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f01b4    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f01c6    | 0x1401ef4f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f01ce    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401f01d5    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f01dd    | 0x1401ef5b0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f01e2    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f01ea    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f0217    | 0x1401f0229              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f021f    | 0x1401f00d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0227    | 0x1401f0237              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f022f    | 0x1401f00d0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0245    | 0x1401f0120              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0255    | 0x1401ef1c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f025a    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401f0262    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0267    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401f0289    | 0x1401f0328              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0293    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401f029b    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f02ca    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f02cf    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f02d4    | 0x1401efdd0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f02d9    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f02e2    | 0x1401f031f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f02e4    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f02f8    | 0x1401f031a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0309    | 0x1401f0418              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f031a    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0322    | 0x1401f0290              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f032c    | 0x1401f025a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0340    | 0x1401f03ff              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f034f    | 0xfffffffffffffff0       | [object Object]  |                  | [object Object] |
| 0x1401f0354    | 0xfffffffffffffff0       | [object Object]  |                  | [object Object] |
| 0x1401f0364    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f0369    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f0371    | 0x1401f03a3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0373    | 0xfffffffffffffff0       | [object Object]  |                  | [object Object] |
| 0x1401f038e    | 0xfffffffffffffff0       | [object Object]  |                  | [object Object] |
| 0x1401f03a6    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401f03ae    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f03b8    | 0x1401efdd0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f03bd    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401f03c6    | 0x1401f03ff              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f03c8    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f03dc    | 0x1401f03fa              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f03ed    | 0x1401f0418              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f03fa    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f040d    | 0x1401f0332              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f0413    | 0x1401f025a              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address            | value                   | source_address |
|--------------------|-------------------------|----------------|
| 0x1401ef1c0        | FUN_1401ef1c0           | 0x1401f0255    |
| 0x1401ef4f0        | FUN_1401ef4f0           | 0x1401f017b    |
| 0x1401ef4f0        | FUN_1401ef4f0           | 0x1401f0196    |
| 0x1401ef4f0        | FUN_1401ef4f0           | 0x1401f01af    |
| 0x1401ef4f0        | FUN_1401ef4f0           | 0x1401f01c6    |
| 0x1401ef5b0        | FUN_1401ef5b0           | 0x1401f01dd    |
| 0x1401efdd0        | FUN_1401efdd0           | 0x1401f02d4    |
| 0x1401efdd0        | FUN_1401efdd0           | 0x1401f03b8    |
| 0x1401f00d0        | FUN_1401f00d0           | 0x1401f021f    |
| 0x1401f00d0        | FUN_1401f00d0           | 0x1401f022f    |
| 0x1401f0120        | LAB_1401f0120           | 0x1401f0245    |
| 0x1401f01c0        | LAB_1401f01c0           | 0x1401f015c    |
| 0x1401f0229        | LAB_1401f0229           | 0x1401f0217    |
| 0x1401f0237        | LAB_1401f0237           | 0x1401f0227    |
| 0x1401f024b        | LAB_1401f024b           | 0x1401f010e    |
| 0x1401f025a        | LAB_1401f025a           | 0x1401f032c    |
| 0x1401f025a        | LAB_1401f025a           | 0x1401f0413    |
| 0x1401f027f        | LAB_1401f027f           | 0x1401f0130    |
| 0x1401f0290        | LAB_1401f0290           | 0x1401f0322    |
| 0x1401f031a        | LAB_1401f031a           | 0x1401f02f8    |
| 0x1401f031f        | LAB_1401f031f           | 0x1401f02e2    |
| 0x1401f0328        | LAB_1401f0328           | 0x1401f0289    |
| 0x1401f0332        | LAB_1401f0332           | 0x1401f040d    |
| 0x1401f03a3        | LAB_1401f03a3           | 0x1401f0371    |
| 0x1401f03fa        | LAB_1401f03fa           | 0x1401f03dc    |
| 0x1401f03ff        | LAB_1401f03ff           | 0x1401f0340    |
| 0x1401f03ff        | LAB_1401f03ff           | 0x1401f03c6    |
| 0x1401f0418        | LAB_1401f0418           | 0x1401f0309    |
| 0x1401f0418        | LAB_1401f0418           | 0x1401f03ed    |
| 0x1403272f0        | thunk_FUN_140327e20     | 0x1401f031a    |
| 0x1403272f0        | thunk_FUN_140327e20     | 0x1401f03fa    |
| 0x140327740        | __security_check_cookie | 0x1401f0262    |
| 0x1404c7ac0        | DAT_1404c7ac0           | 0x1401f00e4    |
| 0xfffffffffffffff0 | DAT_fffffffffffffff0    | 0x1401f034f    |
| 0xfffffffffffffff0 | DAT_fffffffffffffff0    | 0x1401f0354    |
| 0xfffffffffffffff0 | DAT_fffffffffffffff0    | 0x1401f0373    |
| 0xfffffffffffffff0 | DAT_fffffffffffffff0    | 0x1401f038e    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f00d0 | 0x1401f0114 | 0x1401f0114,0x1401f024b |
| 0x1401f0114 | 0x1401f0120 | 0x1401f0120             |
| 0x1401f0120 | 0x1401f0136 | 0x1401f0136,0x1401f027f |
| 0x1401f0136 | 0x1401f015e | 0x1401f015e,0x1401f01c0 |
| 0x1401f015e | 0x1401f01c0 | 0x1401f01c0             |
| 0x1401f01c0 | 0x1401f0219 | 0x1401f0219,0x1401f0229 |
| 0x1401f0219 | 0x1401f0229 | 0x1401f0237             |
| 0x1401f0229 | 0x1401f0237 | 0x1401f0237             |
| 0x1401f0237 | 0x1401f024b | 0x1401f0120,0x1401f024b |
| 0x1401f024b | 0x1401f025a | 0x1401f025a             |
| 0x1401f025a | 0x1401f027f |                         |
| 0x1401f027f | 0x1401f028f | 0x1401f028f,0x1401f0328 |
| 0x1401f028f | 0x1401f0290 | 0x1401f0290             |
| 0x1401f0290 | 0x1401f02e4 | 0x1401f02e4,0x1401f031f |
| 0x1401f02e4 | 0x1401f02fa | 0x1401f02fa,0x1401f031a |
| 0x1401f02fa | 0x1401f030f | 0x1401f030f,0x1401f0418 |
| 0x1401f030f | 0x1401f031a | 0x1401f031a             |
| 0x1401f031a | 0x1401f031f | 0x1401f031f             |
| 0x1401f031f | 0x1401f0328 | 0x1401f0290,0x1401f0328 |
| 0x1401f0328 | 0x1401f0332 | 0x1401f025a,0x1401f0332 |
| 0x1401f0332 | 0x1401f0346 | 0x1401f0346,0x1401f03ff |
| 0x1401f0346 | 0x1401f0373 | 0x1401f0373,0x1401f03a3 |
| 0x1401f0373 | 0x1401f03a3 | 0x1401f03a3             |
| 0x1401f03a3 | 0x1401f03c8 | 0x1401f03c8,0x1401f03ff |
| 0x1401f03c8 | 0x1401f03de | 0x1401f03de,0x1401f03fa |
| 0x1401f03de | 0x1401f03ef | 0x1401f03ef,0x1401f0418 |
| 0x1401f03ef | 0x1401f03fa | 0x1401f03fa             |
| 0x1401f03fa | 0x1401f03ff | 0x1401f03ff             |
| 0x1401f03ff | 0x1401f0413 | 0x1401f0332,0x1401f0413 |
| 0x1401f0413 | 0x1401f0418 | 0x1401f025a             |
| 0x1401f0418 | 0x1401f0420 |                         |

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

| ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | undefined4 * | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | longlong     | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 2       | param_3 | longlong     | 8          | R8:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 3       | param_4 | undefined1   | 1          | R9B:1   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x1401f00e0#3379 | 0x1401f00e0 | 3379     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f00eb#36   | 0x1401f00eb | 36       | INT_XOR      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f00eb#3462 | 0x1401f00eb | 3462     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f00fa#51   | 0x1401f00fa | 51       | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f00fa#3463 | 0x1401f00fa | 3463     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0100#61   | 0x1401f0100 | 61       | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#112  | 0x1401f010e | 112      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#113  | 0x1401f010e | 113      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f010e#3428 | 0x1401f010e | 3428     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3430 | 0x1401f010e | 3430     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3431 | 0x1401f010e | 3431     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3432 | 0x1401f010e | 3432     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3433 | 0x1401f010e | 3433     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3434 | 0x1401f010e | 3434     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3435 | 0x1401f010e | 3435     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3436 | 0x1401f010e | 3436     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3437 | 0x1401f010e | 3437     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3438 | 0x1401f010e | 3438     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3439 | 0x1401f010e | 3439     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3441 | 0x1401f010e | 3441     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f010e#3459 | 0x1401f010e | 3459     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0123#119  | 0x1401f0123 | 119      | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0123#3464 | 0x1401f0123 | 3464     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0129#129  | 0x1401f0129 | 129      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0130#177  | 0x1401f0130 | 177      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0130#178  | 0x1401f0130 | 178      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0141#3380 | 0x1401f0141 | 3380     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0141#3381 | 0x1401f0141 | 3381     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0145#226  | 0x1401f0145 | 226      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0151#234  | 0x1401f0151 | 234      | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0151#3501 | 0x1401f0151 | 3501     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0154#243  | 0x1401f0154 | 243      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f015c#292  | 0x1401f015c | 292      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f015c#293  | 0x1401f015c | 293      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f015c#3450 | 0x1401f015c | 3450     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f015e#295  | 0x1401f015e | 295      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0161#304  | 0x1401f0161 | 304      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0170#3382 | 0x1401f0170 | 3382     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0170#3383 | 0x1401f0170 | 3383     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0177#3384 | 0x1401f0177 | 3384     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0177#3385 | 0x1401f0177 | 3385     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f017b#434  | 0x1401f017b | 434      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f017b#2809 | 0x1401f017b | 2809     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#2907 | 0x1401f017b | 2907     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#2932 | 0x1401f017b | 2932     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#2960 | 0x1401f017b | 2960     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#2985 | 0x1401f017b | 2985     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#3011 | 0x1401f017b | 3011     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#3036 | 0x1401f017b | 3036     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f017b#3163 | 0x1401f017b | 3163     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f018f#3386 | 0x1401f018f | 3386     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f018f#3387 | 0x1401f018f | 3387     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0192#3388 | 0x1401f0192 | 3388     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0192#3389 | 0x1401f0192 | 3389     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0196#456  | 0x1401f0196 | 456      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f0196#2810 | 0x1401f0196 | 2810     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#2908 | 0x1401f0196 | 2908     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#2933 | 0x1401f0196 | 2933     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#2961 | 0x1401f0196 | 2961     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#2986 | 0x1401f0196 | 2986     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#3012 | 0x1401f0196 | 3012     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#3037 | 0x1401f0196 | 3037     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0196#3164 | 0x1401f0196 | 3164     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f019b#457  | 0x1401f019b | 457      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f019f#461  | 0x1401f019f | 461      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f019f#2681 | 0x1401f019f | 2681     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01a9#473  | 0x1401f01a9 | 473      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01a9#2682 | 0x1401f01a9 | 2682     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#483  | 0x1401f01af | 483      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f01af#2811 | 0x1401f01af | 2811     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#2909 | 0x1401f01af | 2909     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#2934 | 0x1401f01af | 2934     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#2962 | 0x1401f01af | 2962     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#2987 | 0x1401f01af | 2987     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#3013 | 0x1401f01af | 3013     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#3038 | 0x1401f01af | 3038     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01af#3165 | 0x1401f01af | 3165     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2101 | 0x1401f01c0 | 2101     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2170 | 0x1401f01c0 | 2170     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2850 | 0x1401f01c0 | 2850     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2925 | 0x1401f01c0 | 2925     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2950 | 0x1401f01c0 | 2950     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#2978 | 0x1401f01c0 | 2978     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#3003 | 0x1401f01c0 | 3003     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#3029 | 0x1401f01c0 | 3029     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#3054 | 0x1401f01c0 | 3054     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#3181 | 0x1401f01c0 | 3181     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c0#3447 | 0x1401f01c0 | 3447     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f01c6#494  | 0x1401f01c6 | 494      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f01c6#2812 | 0x1401f01c6 | 2812     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#2910 | 0x1401f01c6 | 2910     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#2935 | 0x1401f01c6 | 2935     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#2963 | 0x1401f01c6 | 2963     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#2988 | 0x1401f01c6 | 2988     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#3014 | 0x1401f01c6 | 3014     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#3039 | 0x1401f01c6 | 3039     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01c6#3166 | 0x1401f01c6 | 3166     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01d5#3390 | 0x1401f01d5 | 3390     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#505  | 0x1401f01dd | 505      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f01dd#2813 | 0x1401f01dd | 2813     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#2911 | 0x1401f01dd | 2911     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#2936 | 0x1401f01dd | 2936     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#2964 | 0x1401f01dd | 2964     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#2989 | 0x1401f01dd | 2989     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#3015 | 0x1401f01dd | 3015     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#3040 | 0x1401f01dd | 3040     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#3167 | 0x1401f01dd | 3167     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01dd#3455 | 0x1401f01dd | 3455     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f01e2#2951 | 0x1401f01e2 | 2951     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01ea#3004 | 0x1401f01ea | 3004     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01ea#3502 | 0x1401f01ea | 3502     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f01f2#516  | 0x1401f01f2 | 516      | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01f2#3503 | 0x1401f01f2 | 3503     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f01f5#525  | 0x1401f01f5 | 525      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01f9#566  | 0x1401f01f9 | 566      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01ff#576  | 0x1401f01ff | 576      | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f01ff#3504 | 0x1401f01ff | 3504     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0202#585  | 0x1401f0202 | 585      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0206#625  | 0x1401f0206 | 625      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0209#634  | 0x1401f0209 | 634      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0217#685  | 0x1401f0217 | 685      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0217#686  | 0x1401f0217 | 686      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f021f#691  | 0x1401f021f | 691      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f021f#2815 | 0x1401f021f | 2815     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#2913 | 0x1401f021f | 2913     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#2938 | 0x1401f021f | 2938     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#2966 | 0x1401f021f | 2966     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#2991 | 0x1401f021f | 2991     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#3017 | 0x1401f021f | 3017     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#3042 | 0x1401f021f | 3042     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f021f#3169 | 0x1401f021f | 3169     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0227#693  | 0x1401f0227 | 693      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401f0227#3451 | 0x1401f0227 | 3451     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0227#3452 | 0x1401f0227 | 3452     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f022f#827  | 0x1401f022f | 827      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f022f#2814 | 0x1401f022f | 2814     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#2912 | 0x1401f022f | 2912     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#2937 | 0x1401f022f | 2937     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#2965 | 0x1401f022f | 2965     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#2990 | 0x1401f022f | 2990     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#3016 | 0x1401f022f | 3016     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#3041 | 0x1401f022f | 3041     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f022f#3168 | 0x1401f022f | 3168     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2171 | 0x1401f0237 | 2171     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2252 | 0x1401f0237 | 2252     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2847 | 0x1401f0237 | 2847     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2922 | 0x1401f0237 | 2922     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2947 | 0x1401f0237 | 2947     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#2975 | 0x1401f0237 | 2975     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#3000 | 0x1401f0237 | 3000     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#3026 | 0x1401f0237 | 3026     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#3051 | 0x1401f0237 | 3051     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0237#3178 | 0x1401f0237 | 3178     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f023a#697  | 0x1401f023a | 697      | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f023a#3505 | 0x1401f023a | 3505     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0245#3460 | 0x1401f0245 | 3460     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0255#764  | 0x1401f0255 | 764      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f0255#2816 | 0x1401f0255 | 2816     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0255#2914 | 0x1401f0255 | 2914     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0255#2939 | 0x1401f0255 | 2939     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0255#3170 | 0x1401f0255 | 3170     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f025a#2843 | 0x1401f025a | 2843     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f027e#822  | 0x1401f027e | 822      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401f027e#2817 | 0x1401f027e | 2817     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f027e#3444 | 0x1401f027e | 3444     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f027e#3445 | 0x1401f027e | 3445     | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401f027f#831  | 0x1401f027f | 831      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0289#889  | 0x1401f0289 | 889      | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0289#890  | 0x1401f0289 | 890      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0289#3373 | 0x1401f0289 | 3373     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0289#3375 | 0x1401f0289 | 3375     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0289#3376 | 0x1401f0289 | 3376     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0289#3377 | 0x1401f0289 | 3377     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0289#3456 | 0x1401f0289 | 3456     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f029b#3391 | 0x1401f029b | 3391     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a0#939  | 0x1401f02a0 | 939      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#2719 | 0x1401f02a9 | 2719     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#2720 | 0x1401f02a9 | 2720     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#2722 | 0x1401f02a9 | 2722     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#2724 | 0x1401f02a9 | 2724     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#3393 | 0x1401f02a9 | 3393     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#3394 | 0x1401f02a9 | 3394     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02a9#3395 | 0x1401f02a9 | 3395     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02a9#3396 | 0x1401f02a9 | 3396     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02a9#3397 | 0x1401f02a9 | 3397     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02a9#3398 | 0x1401f02a9 | 3398     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02ae#2733 | 0x1401f02ae | 2733     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#2734 | 0x1401f02ae | 2734     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#2736 | 0x1401f02ae | 2736     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#2738 | 0x1401f02ae | 2738     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#3400 | 0x1401f02ae | 3400     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#3401 | 0x1401f02ae | 3401     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02ae#3402 | 0x1401f02ae | 3402     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02ae#3403 | 0x1401f02ae | 3403     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02ae#3404 | 0x1401f02ae | 3404     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02ae#3405 | 0x1401f02ae | 3405     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02b3#970  | 0x1401f02b3 | 970      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f02b3#2819 | 0x1401f02b3 | 2819     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b3#3407 | 0x1401f02b3 | 3407     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b3#3408 | 0x1401f02b3 | 3408     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b3#3409 | 0x1401f02b3 | 3409     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02b3#3465 | 0x1401f02b3 | 3465     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02b8#975  | 0x1401f02b8 | 975      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f02b8#2820 | 0x1401f02b8 | 2820     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b8#3411 | 0x1401f02b8 | 3411     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b8#3412 | 0x1401f02b8 | 3412     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02b8#3413 | 0x1401f02b8 | 3413     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02b8#3466 | 0x1401f02b8 | 3466     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02c1#980  | 0x1401f02c1 | 980      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f02c1#2821 | 0x1401f02c1 | 2821     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02c1#3415 | 0x1401f02c1 | 3415     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02c1#3416 | 0x1401f02c1 | 3416     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02c1#3417 | 0x1401f02c1 | 3417     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f02c1#3467 | 0x1401f02c1 | 3467     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02d4#990  | 0x1401f02d4 | 990      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f02d4#2803 | 0x1401f02d4 | 2803     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#2901 | 0x1401f02d4 | 2901     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#2926 | 0x1401f02d4 | 2926     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#2954 | 0x1401f02d4 | 2954     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#2979 | 0x1401f02d4 | 2979     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3005 | 0x1401f02d4 | 3005     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3030 | 0x1401f02d4 | 3030     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3055 | 0x1401f02d4 | 3055     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3080 | 0x1401f02d4 | 3080     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3107 | 0x1401f02d4 | 3107     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3132 | 0x1401f02d4 | 3132     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3157 | 0x1401f02d4 | 3157     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02d4#3453 | 0x1401f02d4 | 3453     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02d9#3105 | 0x1401f02d9 | 3105     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02e2#1004 | 0x1401f02e2 | 1004     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02e2#1005 | 0x1401f02e2 | 1005     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f02e2#3457 | 0x1401f02e2 | 3457     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02e4#2952 | 0x1401f02e4 | 2952     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02e9#1009 | 0x1401f02e9 | 1009     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02e9#1010 | 0x1401f02e9 | 1010     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02f1#1013 | 0x1401f02f1 | 1013     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02f8#1022 | 0x1401f02f8 | 1022     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f02f8#3449 | 0x1401f02f8 | 3449     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02fa#1023 | 0x1401f02fa | 1023     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02fa#1024 | 0x1401f02fa | 1024     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f02fa#3468 | 0x1401f02fa | 3468     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f02fe#1028 | 0x1401f02fe | 1028     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0301#1037 | 0x1401f0301 | 1037     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0309#1054 | 0x1401f0309 | 1054     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0309#1056 | 0x1401f0309 | 1056     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f030f#1057 | 0x1401f030f | 1057     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f030f#1058 | 0x1401f030f | 1058     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#1063 | 0x1401f031a | 1063     | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f031a#2092 | 0x1401f031a | 2092     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2127 | 0x1401f031a | 2127     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2804 | 0x1401f031a | 2804     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2902 | 0x1401f031a | 2902     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2927 | 0x1401f031a | 2927     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2955 | 0x1401f031a | 2955     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#2980 | 0x1401f031a | 2980     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3006 | 0x1401f031a | 3006     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3031 | 0x1401f031a | 3031     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3056 | 0x1401f031a | 3056     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3081 | 0x1401f031a | 3081     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3108 | 0x1401f031a | 3108     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3133 | 0x1401f031a | 3133     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f031a#3158 | 0x1401f031a | 3158     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f032c#1087 | 0x1401f032c | 1087     | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f032c#1088 | 0x1401f032c | 1088     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0332#2249 | 0x1401f0332 | 2249     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0332#2842 | 0x1401f0332 | 2842     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0332#2942 | 0x1401f0332 | 2942     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0332#3173 | 0x1401f0332 | 3173     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0335#1092 | 0x1401f0335 | 1092     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0335#3469 | 0x1401f0335 | 3469     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0338#1101 | 0x1401f0338 | 1101     | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0340#1149 | 0x1401f0340 | 1149     | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0340#1150 | 0x1401f0340 | 1150     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0346#1151 | 0x1401f0346 | 1151     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2747 | 0x1401f0346 | 2747     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2748 | 0x1401f0346 | 2748     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2749 | 0x1401f0346 | 2749     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2750 | 0x1401f0346 | 2750     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2751 | 0x1401f0346 | 2751     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2752 | 0x1401f0346 | 2752     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#2753 | 0x1401f0346 | 2753     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0346#3470 | 0x1401f0346 | 3470     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0346#3471 | 0x1401f0346 | 3471     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0346#3472 | 0x1401f0346 | 3472     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0346#3473 | 0x1401f0346 | 3473     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f034b#1158 | 0x1401f034b | 1158     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034b#3474 | 0x1401f034b | 3474     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f034f#1160 | 0x1401f034f | 1160     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2761 | 0x1401f034f | 2761     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2762 | 0x1401f034f | 2762     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2763 | 0x1401f034f | 2763     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2764 | 0x1401f034f | 2764     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2765 | 0x1401f034f | 2765     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2766 | 0x1401f034f | 2766     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#2767 | 0x1401f034f | 2767     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f034f#3475 | 0x1401f034f | 3475     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f034f#3476 | 0x1401f034f | 3476     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f034f#3477 | 0x1401f034f | 3477     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f034f#3478 | 0x1401f034f | 3478     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0354#1167 | 0x1401f0354 | 1167     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0354#1169 | 0x1401f0354 | 1169     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0354#2822 | 0x1401f0354 | 2822     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0354#3479 | 0x1401f0354 | 3479     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0358#1170 | 0x1401f0358 | 1170     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0358#1172 | 0x1401f0358 | 1172     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0358#2823 | 0x1401f0358 | 2823     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0358#3480 | 0x1401f0358 | 3480     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0360#1174 | 0x1401f0360 | 1174     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0360#2824 | 0x1401f0360 | 2824     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0360#3481 | 0x1401f0360 | 3481     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f036e#1186 | 0x1401f036e | 1186     | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0371#1191 | 0x1401f0371 | 1191     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0373#1192 | 0x1401f0373 | 1192     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0373#1194 | 0x1401f0373 | 1194     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0373#2825 | 0x1401f0373 | 2825     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0373#3482 | 0x1401f0373 | 3482     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0377#1195 | 0x1401f0377 | 1195     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0377#1197 | 0x1401f0377 | 1197     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0377#2826 | 0x1401f0377 | 2826     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0377#3483 | 0x1401f0377 | 3483     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f037f#1199 | 0x1401f037f | 1199     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f037f#2827 | 0x1401f037f | 2827     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f037f#3484 | 0x1401f037f | 3484     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0383#2775 | 0x1401f0383 | 2775     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0383#2776 | 0x1401f0383 | 2776     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0383#2778 | 0x1401f0383 | 2778     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0383#2780 | 0x1401f0383 | 2780     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0383#3418 | 0x1401f0383 | 3418     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0383#3419 | 0x1401f0383 | 3419     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0383#3420 | 0x1401f0383 | 3420     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0386#2782 | 0x1401f0386 | 2782     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0386#2783 | 0x1401f0386 | 2783     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0386#2784 | 0x1401f0386 | 2784     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2785 | 0x1401f0386 | 2785     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0386#2786 | 0x1401f0386 | 2786     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2787 | 0x1401f0386 | 2787     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0386#2788 | 0x1401f0386 | 2788     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2831 | 0x1401f0386 | 2831     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2832 | 0x1401f0386 | 2832     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2833 | 0x1401f0386 | 2833     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#2834 | 0x1401f0386 | 2834     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0386#3485 | 0x1401f0386 | 3485     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0386#3486 | 0x1401f0386 | 3486     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0386#3487 | 0x1401f0386 | 3487     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f038a#2789 | 0x1401f038a | 2789     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038a#2790 | 0x1401f038a | 2790     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038a#2792 | 0x1401f038a | 2792     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038a#2794 | 0x1401f038a | 2794     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038a#3421 | 0x1401f038a | 3421     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f038a#3422 | 0x1401f038a | 3422     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f038a#3423 | 0x1401f038a | 3423     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f038a#3424 | 0x1401f038a | 3424     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f038e#1215 | 0x1401f038e | 1215     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2796 | 0x1401f038e | 2796     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f038e#2797 | 0x1401f038e | 2797     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f038e#2798 | 0x1401f038e | 2798     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2799 | 0x1401f038e | 2799     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f038e#2800 | 0x1401f038e | 2800     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2801 | 0x1401f038e | 2801     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f038e#2802 | 0x1401f038e | 2802     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2835 | 0x1401f038e | 2835     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2836 | 0x1401f038e | 2836     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2837 | 0x1401f038e | 2837     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#2838 | 0x1401f038e | 2838     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f038e#3488 | 0x1401f038e | 3488     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f038e#3489 | 0x1401f038e | 3489     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f038e#3490 | 0x1401f038e | 3490     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f038e#3491 | 0x1401f038e | 3491     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0393#1220 | 0x1401f0393 | 1220     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0393#2828 | 0x1401f0393 | 2828     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0393#3425 | 0x1401f0393 | 3425     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0393#3492 | 0x1401f0393 | 3492     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f0397#1223 | 0x1401f0397 | 1223     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f0397#2829 | 0x1401f0397 | 2829     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0397#3426 | 0x1401f0397 | 3426     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0397#3493 | 0x1401f0397 | 3493     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f039f#1225 | 0x1401f039f | 1225     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f039f#2830 | 0x1401f039f | 2830     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f039f#3494 | 0x1401f039f | 3494     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03a3#1228 | 0x1401f03a3 | 1228     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03a3#2840 | 0x1401f03a3 | 2840     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03a3#3495 | 0x1401f03a3 | 3495     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03a3#3496 | 0x1401f03a3 | 3496     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03aa#1240 | 0x1401f03aa | 1240     | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03ae#3427 | 0x1401f03ae | 3427     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#1293 | 0x1401f03b8 | 1293     | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401f03b8#2805 | 0x1401f03b8 | 2805     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#2903 | 0x1401f03b8 | 2903     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#2928 | 0x1401f03b8 | 2928     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#2956 | 0x1401f03b8 | 2956     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#2981 | 0x1401f03b8 | 2981     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3007 | 0x1401f03b8 | 3007     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3032 | 0x1401f03b8 | 3032     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3057 | 0x1401f03b8 | 3057     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3082 | 0x1401f03b8 | 3082     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3109 | 0x1401f03b8 | 3109     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3134 | 0x1401f03b8 | 3134     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3159 | 0x1401f03b8 | 3159     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03b8#3454 | 0x1401f03b8 | 3454     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03bd#3106 | 0x1401f03bd | 3106     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03c6#1307 | 0x1401f03c6 | 1307     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03c6#1308 | 0x1401f03c6 | 1308     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f03c8#2953 | 0x1401f03c8 | 2953     | PIECE        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03cd#1312 | 0x1401f03cd | 1312     | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03cd#1313 | 0x1401f03cd | 1313     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03d5#1316 | 0x1401f03d5 | 1316     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03dc#1325 | 0x1401f03dc | 1325     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f03dc#3448 | 0x1401f03dc | 3448     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03de#1326 | 0x1401f03de | 1326     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03de#1327 | 0x1401f03de | 1327     | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03de#3497 | 0x1401f03de | 3497     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f03e2#1331 | 0x1401f03e2 | 1331     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03e5#1340 | 0x1401f03e5 | 1340     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03ed#1357 | 0x1401f03ed | 1357     | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03ed#1359 | 0x1401f03ed | 1359     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f03fa#1366 | 0x1401f03fa | 1366     | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f03fa#2089 | 0x1401f03fa | 2089     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#2808 | 0x1401f03fa | 2808     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#2906 | 0x1401f03fa | 2906     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#2931 | 0x1401f03fa | 2931     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#2959 | 0x1401f03fa | 2959     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#2984 | 0x1401f03fa | 2984     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3010 | 0x1401f03fa | 3010     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3035 | 0x1401f03fa | 3035     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3060 | 0x1401f03fa | 3060     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3085 | 0x1401f03fa | 3085     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3112 | 0x1401f03fa | 3112     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3137 | 0x1401f03fa | 3137     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03fa#3162 | 0x1401f03fa | 3162     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03ff#1369 | 0x1401f03ff | 1369     | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f03ff#2839 | 0x1401f03ff | 2839     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f03ff#2940 | 0x1401f03ff | 2940     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f03ff#3171 | 0x1401f03ff | 3171     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f0406#1379 | 0x1401f0406 | 1379     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0406#3500 | 0x1401f0406 | 3500     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f040d#1396 | 0x1401f040d | 1396     | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f040d#1397 | 0x1401f040d | 1397     | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f0418#2841 | 0x1401f0418 | 2841     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#2916 | 0x1401f0418 | 2916     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#2941 | 0x1401f0418 | 2941     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#2969 | 0x1401f0418 | 2969     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#2994 | 0x1401f0418 | 2994     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3020 | 0x1401f0418 | 3020     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3045 | 0x1401f0418 | 3045     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3070 | 0x1401f0418 | 3070     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3095 | 0x1401f0418 | 3095     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3122 | 0x1401f0418 | 3122     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3147 | 0x1401f0418 | 3147     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f0418#3172 | 0x1401f0418 | 3172     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#1400 | 0x1401f041d | 1400     | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#1401 | 0x1401f041d | 1401     | CALLIND      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f041d#2806 | 0x1401f041d | 2806     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#2904 | 0x1401f041d | 2904     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#2929 | 0x1401f041d | 2929     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#2957 | 0x1401f041d | 2957     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#2982 | 0x1401f041d | 2982     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3008 | 0x1401f041d | 3008     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3033 | 0x1401f041d | 3033     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3058 | 0x1401f041d | 3058     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3083 | 0x1401f041d | 3083     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3110 | 0x1401f041d | 3110     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3135 | 0x1401f041d | 3135     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3160 | 0x1401f041d | 3160     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041d#3498 | 0x1401f041d | 3498     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f041f#1402 | 0x1401f041f | 1402     | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#1403 | 0x1401f041f | 1403     | CALLIND      | true    | member           | [object Object]                                                                 |                 |
| 0x1401f041f#1404 | 0x1401f041f | 1404     | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401f041f#2807 | 0x1401f041f | 2807     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#2818 | 0x1401f041f | 2818     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f041f#2905 | 0x1401f041f | 2905     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#2930 | 0x1401f041f | 2930     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#2958 | 0x1401f041f | 2958     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#2983 | 0x1401f041f | 2983     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3009 | 0x1401f041f | 3009     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3034 | 0x1401f041f | 3034     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3059 | 0x1401f041f | 3059     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3084 | 0x1401f041f | 3084     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3111 | 0x1401f041f | 3111     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3136 | 0x1401f041f | 3136     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3161 | 0x1401f041f | 3161     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f041f#3499 | 0x1401f041f | 3499     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401f00eb#3462 | 0x1401f00eb#36   | 1           |
| 0x1401f00e0#3379 | 0x1401f00eb#3462 | 0           |
| 0x1401f00fa#3463 | 0x1401f00fa#51   | 1           |
| 0x1401f010e#3441 | 0x1401f0100#61   | 0           |
| 0x1401f0100#61   | 0x1401f010e#112  | 0           |
| 0x1401f010e#112  | 0x1401f010e#113  | 1           |
| 0x1401f00eb#36   | 0x1401f010e#3428 | 0           |
| 0x1401f0237#3178 | 0x1401f010e#3428 | 1           |
| 0x1401f010e#3459 | 0x1401f010e#3430 | 0           |
| 0x1401f0245#3460 | 0x1401f010e#3430 | 1           |
| 0x1401f0237#2171 | 0x1401f010e#3431 | 1           |
| 0x1401f0206#625  | 0x1401f010e#3432 | 1           |
| 0x1401f0237#2847 | 0x1401f010e#3433 | 1           |
| 0x1401f0237#3051 | 0x1401f010e#3434 | 1           |
| 0x1401f0237#3026 | 0x1401f010e#3435 | 1           |
| 0x1401f0237#3000 | 0x1401f010e#3436 | 1           |
| 0x1401f0237#2975 | 0x1401f010e#3437 | 1           |
| 0x1401f0237#2947 | 0x1401f010e#3438 | 1           |
| 0x1401f0237#2922 | 0x1401f010e#3439 | 1           |
| 0x1401f00fa#51   | 0x1401f010e#3441 | 0           |
| 0x1401f023a#697  | 0x1401f010e#3441 | 1           |
| 0x1401f010e#3430 | 0x1401f0123#119  | 0           |
| 0x1401f0123#3464 | 0x1401f0123#119  | 1           |
| 0x1401f010e#3431 | 0x1401f0123#3464 | 0           |
| 0x1401f0123#119  | 0x1401f0129#129  | 0           |
| 0x1401f010e#3432 | 0x1401f0130#177  | 0           |
| 0x1401f0130#177  | 0x1401f0130#178  | 1           |
| 0x1401f0129#129  | 0x1401f0141#3380 | 0           |
| 0x1401f010e#3431 | 0x1401f0141#3381 | 0           |
| 0x1401f0141#3380 | 0x1401f0141#3381 | 1           |
| 0x1401f010e#3430 | 0x1401f0145#226  | 0           |
| 0x1401f0145#226  | 0x1401f0151#234  | 0           |
| 0x1401f0151#3501 | 0x1401f0151#234  | 1           |
| 0x1401f010e#3431 | 0x1401f0151#3501 | 0           |
| 0x1401f0151#234  | 0x1401f0154#243  | 0           |
| 0x1401f0154#243  | 0x1401f015c#292  | 1           |
| 0x1401f015c#292  | 0x1401f015c#293  | 1           |
| 0x1401f010e#3431 | 0x1401f015c#3450 | 0           |
| 0x1401f0154#243  | 0x1401f015e#295  | 0           |
| 0x1401f015e#295  | 0x1401f0161#304  | 0           |
| 0x1401f0161#304  | 0x1401f0170#3382 | 0           |
| 0x1401f010e#3431 | 0x1401f0170#3383 | 0           |
| 0x1401f0170#3382 | 0x1401f0170#3383 | 1           |
| 0x1401f0161#304  | 0x1401f0177#3384 | 0           |
| 0x1401f010e#3431 | 0x1401f0177#3385 | 0           |
| 0x1401f0177#3384 | 0x1401f0177#3385 | 1           |
| 0x1401f010e#3431 | 0x1401f017b#434  | 1           |
| 0x1401f0170#3383 | 0x1401f017b#434  | 2           |
| 0x1401f0177#3385 | 0x1401f017b#434  | 3           |
| 0x1401f010e#3433 | 0x1401f017b#2809 | 0           |
| 0x1401f010e#3439 | 0x1401f017b#2907 | 0           |
| 0x1401f0141#3381 | 0x1401f017b#2932 | 0           |
| 0x1401f010e#3437 | 0x1401f017b#2960 | 0           |
| 0x1401f010e#3436 | 0x1401f017b#2985 | 0           |
| 0x1401f010e#3435 | 0x1401f017b#3011 | 0           |
| 0x1401f010e#3434 | 0x1401f017b#3036 | 0           |
| 0x1401f010e#3428 | 0x1401f017b#3163 | 0           |
| 0x1401f0161#304  | 0x1401f018f#3386 | 0           |
| 0x1401f017b#2932 | 0x1401f018f#3387 | 0           |
| 0x1401f018f#3386 | 0x1401f018f#3387 | 1           |
| 0x1401f0161#304  | 0x1401f0192#3388 | 0           |
| 0x1401f017b#2932 | 0x1401f0192#3389 | 0           |
| 0x1401f0192#3388 | 0x1401f0192#3389 | 1           |
| 0x1401f018f#3387 | 0x1401f0196#456  | 1           |
| 0x1401f017b#2932 | 0x1401f0196#456  | 2           |
| 0x1401f0192#3389 | 0x1401f0196#456  | 3           |
| 0x1401f017b#2809 | 0x1401f0196#2810 | 0           |
| 0x1401f017b#2907 | 0x1401f0196#2908 | 0           |
| 0x1401f017b#2932 | 0x1401f0196#2933 | 0           |
| 0x1401f017b#2960 | 0x1401f0196#2961 | 0           |
| 0x1401f017b#2985 | 0x1401f0196#2986 | 0           |
| 0x1401f017b#3011 | 0x1401f0196#3012 | 0           |
| 0x1401f017b#3036 | 0x1401f0196#3037 | 0           |
| 0x1401f017b#3163 | 0x1401f0196#3164 | 0           |
| 0x1401f010e#3430 | 0x1401f019b#457  | 0           |
| 0x1401f0145#226  | 0x1401f019f#461  | 0           |
| 0x1401f019f#2681 | 0x1401f019f#461  | 1           |
| 0x1401f0161#304  | 0x1401f019f#2681 | 0           |
| 0x1401f019b#457  | 0x1401f01a9#473  | 0           |
| 0x1401f01a9#2682 | 0x1401f01a9#473  | 1           |
| 0x1401f0161#304  | 0x1401f01a9#2682 | 0           |
| 0x1401f01a9#473  | 0x1401f01af#483  | 1           |
| 0x1401f019f#461  | 0x1401f01af#483  | 2           |
| 0x1401f019b#457  | 0x1401f01af#483  | 3           |
| 0x1401f0196#2810 | 0x1401f01af#2811 | 0           |
| 0x1401f0196#2908 | 0x1401f01af#2909 | 0           |
| 0x1401f0196#2933 | 0x1401f01af#2934 | 0           |
| 0x1401f0196#2961 | 0x1401f01af#2962 | 0           |
| 0x1401f0196#2986 | 0x1401f01af#2987 | 0           |
| 0x1401f0196#3012 | 0x1401f01af#3013 | 0           |
| 0x1401f0196#3037 | 0x1401f01af#3038 | 0           |
| 0x1401f0196#3164 | 0x1401f01af#3165 | 0           |
| 0x1401f015c#3450 | 0x1401f01c0#2101 | 0           |
| 0x1401f0170#3383 | 0x1401f01c0#2101 | 1           |
| 0x1401f0145#226  | 0x1401f01c0#2170 | 0           |
| 0x1401f019f#461  | 0x1401f01c0#2170 | 1           |
| 0x1401f010e#3433 | 0x1401f01c0#2850 | 0           |
| 0x1401f01af#2811 | 0x1401f01c0#2850 | 1           |
| 0x1401f010e#3439 | 0x1401f01c0#2925 | 0           |
| 0x1401f01af#2909 | 0x1401f01c0#2925 | 1           |
| 0x1401f0141#3381 | 0x1401f01c0#2950 | 0           |
| 0x1401f01af#2934 | 0x1401f01c0#2950 | 1           |
| 0x1401f010e#3437 | 0x1401f01c0#2978 | 0           |
| 0x1401f01af#2962 | 0x1401f01c0#2978 | 1           |
| 0x1401f010e#3436 | 0x1401f01c0#3003 | 0           |
| 0x1401f01af#2987 | 0x1401f01c0#3003 | 1           |
| 0x1401f010e#3435 | 0x1401f01c0#3029 | 0           |
| 0x1401f01af#3013 | 0x1401f01c0#3029 | 1           |
| 0x1401f010e#3434 | 0x1401f01c0#3054 | 0           |
| 0x1401f01af#3038 | 0x1401f01c0#3054 | 1           |
| 0x1401f010e#3428 | 0x1401f01c0#3181 | 0           |
| 0x1401f01af#3165 | 0x1401f01c0#3181 | 1           |
| 0x1401f01c0#2950 | 0x1401f01c0#3447 | 0           |
| 0x1401f01c0#2101 | 0x1401f01c6#494  | 1           |
| 0x1401f01c0#2950 | 0x1401f01c6#494  | 2           |
| 0x1401f01c0#2170 | 0x1401f01c6#494  | 3           |
| 0x1401f01c0#2850 | 0x1401f01c6#2812 | 0           |
| 0x1401f01c0#2925 | 0x1401f01c6#2910 | 0           |
| 0x1401f01c0#2950 | 0x1401f01c6#2935 | 0           |
| 0x1401f01c0#2978 | 0x1401f01c6#2963 | 0           |
| 0x1401f01c0#3003 | 0x1401f01c6#2988 | 0           |
| 0x1401f01c0#3029 | 0x1401f01c6#3014 | 0           |
| 0x1401f01c0#3054 | 0x1401f01c6#3039 | 0           |
| 0x1401f01c0#3181 | 0x1401f01c6#3166 | 0           |
| 0x1401f01d5#3390 | 0x1401f01dd#505  | 1           |
| 0x1401f010e#3431 | 0x1401f01dd#505  | 2           |
| 0x1401f01c0#3447 | 0x1401f01dd#505  | 3           |
| 0x1401f010e#3430 | 0x1401f01dd#505  | 4           |
| 0x1401f01c6#2812 | 0x1401f01dd#2813 | 0           |
| 0x1401f01dd#3455 | 0x1401f01dd#2911 | 0           |
| 0x1401f01c6#2935 | 0x1401f01dd#2936 | 0           |
| 0x1401f01c6#2963 | 0x1401f01dd#2964 | 0           |
| 0x1401f01c6#2988 | 0x1401f01dd#2989 | 0           |
| 0x1401f01c6#3014 | 0x1401f01dd#3015 | 0           |
| 0x1401f01c6#3039 | 0x1401f01dd#3040 | 0           |
| 0x1401f01c6#3166 | 0x1401f01dd#3167 | 0           |
| 0x1401f01dd#2989 | 0x1401f01e2#2951 | 0           |
| 0x1401f01dd#2964 | 0x1401f01e2#2951 | 1           |
| 0x1401f01dd#3040 | 0x1401f01ea#3004 | 0           |
| 0x1401f01dd#3015 | 0x1401f01ea#3004 | 1           |
| 0x1401f01ea#3004 | 0x1401f01ea#3502 | 0           |
| 0x1401f01e2#2951 | 0x1401f01f2#516  | 0           |
| 0x1401f01f2#3503 | 0x1401f01f2#516  | 1           |
| 0x1401f010e#3431 | 0x1401f01f2#3503 | 0           |
| 0x1401f010e#3432 | 0x1401f01f5#525  | 0           |
| 0x1401f010e#3432 | 0x1401f01f9#566  | 0           |
| 0x1401f010e#3430 | 0x1401f01ff#576  | 0           |
| 0x1401f01ff#3504 | 0x1401f01ff#576  | 1           |
| 0x1401f01ea#3502 | 0x1401f01ff#3504 | 0           |
| 0x1401f01f2#516  | 0x1401f0202#585  | 0           |
| 0x1401f01f9#566  | 0x1401f0206#625  | 0           |
| 0x1401f01f5#525  | 0x1401f0206#625  | 1           |
| 0x1401f01ff#576  | 0x1401f0209#634  | 0           |
| 0x1401f0202#585  | 0x1401f0217#685  | 0           |
| 0x1401f0209#634  | 0x1401f0217#685  | 1           |
| 0x1401f0217#685  | 0x1401f0217#686  | 1           |
| 0x1401f010e#3431 | 0x1401f021f#691  | 1           |
| 0x1401f01e2#2951 | 0x1401f021f#691  | 2           |
| 0x1401f0206#625  | 0x1401f021f#691  | 3           |
| 0x1401f01dd#2813 | 0x1401f021f#2815 | 0           |
| 0x1401f01dd#2911 | 0x1401f021f#2913 | 0           |
| 0x1401f01dd#2936 | 0x1401f021f#2938 | 0           |
| 0x1401f01dd#2964 | 0x1401f021f#2966 | 0           |
| 0x1401f01dd#2989 | 0x1401f021f#2991 | 0           |
| 0x1401f01dd#3015 | 0x1401f021f#3017 | 0           |
| 0x1401f01dd#3040 | 0x1401f021f#3042 | 0           |
| 0x1401f01dd#3167 | 0x1401f021f#3169 | 0           |
| 0x1401f01ea#3502 | 0x1401f0227#3451 | 0           |
| 0x1401f010e#3430 | 0x1401f0227#3452 | 0           |
| 0x1401f01ea#3502 | 0x1401f022f#827  | 1           |
| 0x1401f010e#3430 | 0x1401f022f#827  | 2           |
| 0x1401f0206#625  | 0x1401f022f#827  | 3           |
| 0x1401f01dd#2813 | 0x1401f022f#2814 | 0           |
| 0x1401f01dd#2911 | 0x1401f022f#2912 | 0           |
| 0x1401f01dd#2936 | 0x1401f022f#2937 | 0           |
| 0x1401f01dd#2964 | 0x1401f022f#2965 | 0           |
| 0x1401f01dd#2989 | 0x1401f022f#2990 | 0           |
| 0x1401f01dd#3015 | 0x1401f022f#3016 | 0           |
| 0x1401f01dd#3040 | 0x1401f022f#3041 | 0           |
| 0x1401f01dd#3167 | 0x1401f022f#3168 | 0           |
| 0x1401f0227#3451 | 0x1401f0237#2171 | 0           |
| 0x1401f010e#3431 | 0x1401f0237#2171 | 1           |
| 0x1401f0227#3452 | 0x1401f0237#2252 | 0           |
| 0x1401f01e2#2951 | 0x1401f0237#2252 | 1           |
| 0x1401f021f#2815 | 0x1401f0237#2847 | 0           |
| 0x1401f022f#2814 | 0x1401f0237#2847 | 1           |
| 0x1401f021f#2913 | 0x1401f0237#2922 | 0           |
| 0x1401f022f#2912 | 0x1401f0237#2922 | 1           |
| 0x1401f021f#2938 | 0x1401f0237#2947 | 0           |
| 0x1401f022f#2937 | 0x1401f0237#2947 | 1           |
| 0x1401f021f#2966 | 0x1401f0237#2975 | 0           |
| 0x1401f022f#2965 | 0x1401f0237#2975 | 1           |
| 0x1401f021f#2991 | 0x1401f0237#3000 | 0           |
| 0x1401f022f#2990 | 0x1401f0237#3000 | 1           |
| 0x1401f021f#3017 | 0x1401f0237#3026 | 0           |
| 0x1401f022f#3016 | 0x1401f0237#3026 | 1           |
| 0x1401f021f#3042 | 0x1401f0237#3051 | 0           |
| 0x1401f022f#3041 | 0x1401f0237#3051 | 1           |
| 0x1401f021f#3169 | 0x1401f0237#3178 | 0           |
| 0x1401f022f#3168 | 0x1401f0237#3178 | 1           |
| 0x1401f0237#2252 | 0x1401f023a#697  | 0           |
| 0x1401f023a#3505 | 0x1401f023a#697  | 1           |
| 0x1401f0237#2171 | 0x1401f023a#3505 | 0           |
| 0x1401f0237#2252 | 0x1401f0245#3460 | 0           |
| 0x1401f010e#3431 | 0x1401f0255#764  | 1           |
| 0x1401f010e#3430 | 0x1401f0255#764  | 2           |
| 0x1401f010e#3433 | 0x1401f0255#2816 | 0           |
| 0x1401f010e#3439 | 0x1401f0255#2914 | 0           |
| 0x1401f010e#3438 | 0x1401f0255#2939 | 0           |
| 0x1401f010e#3428 | 0x1401f0255#3170 | 0           |
| 0x1401f0289#3375 | 0x1401f025a#2843 | 0           |
| 0x1401f03ff#2839 | 0x1401f025a#2843 | 1           |
| 0x1401f025a#2843 | 0x1401f027e#2817 | 0           |
| 0x1401f0255#2816 | 0x1401f027e#3444 | 0           |
| 0x1401f0123#119  | 0x1401f027f#831  | 0           |
| 0x1401f0289#3373 | 0x1401f0289#889  | 1           |
| 0x1401f0289#889  | 0x1401f0289#890  | 1           |
| 0x1401f0289#3456 | 0x1401f0289#3373 | 0           |
| 0x1401f02e2#3457 | 0x1401f0289#3373 | 1           |
| 0x1401f02e2#3457 | 0x1401f0289#3373 | 2           |
| 0x1401f010e#3433 | 0x1401f0289#3375 | 0           |
| 0x1401f02d4#2803 | 0x1401f0289#3375 | 1           |
| 0x1401f031a#2804 | 0x1401f0289#3375 | 2           |
| 0x1401f010e#3438 | 0x1401f0289#3376 | 0           |
| 0x1401f02d4#2926 | 0x1401f0289#3376 | 1           |
| 0x1401f031a#2927 | 0x1401f0289#3376 | 2           |
| 0x1401f010e#3428 | 0x1401f0289#3377 | 0           |
| 0x1401f02d4#3157 | 0x1401f0289#3377 | 1           |
| 0x1401f031a#3158 | 0x1401f0289#3377 | 2           |
| 0x1401f0129#129  | 0x1401f0289#3456 | 0           |
| 0x1401f0289#3373 | 0x1401f02a0#939  | 0           |
| 0x1401f02a9#3395 | 0x1401f02a9#2719 | 1           |
| 0x1401f02a9#3396 | 0x1401f02a9#2720 | 1           |
| 0x1401f02a9#3397 | 0x1401f02a9#2722 | 1           |
| 0x1401f02a9#3398 | 0x1401f02a9#2724 | 1           |
| 0x1401f0289#3373 | 0x1401f02a9#3393 | 0           |
| 0x1401f02a9#3393 | 0x1401f02a9#3394 | 0           |
| 0x1401f010e#3431 | 0x1401f02a9#3395 | 0           |
| 0x1401f02a9#3394 | 0x1401f02a9#3395 | 1           |
| 0x1401f02a9#3395 | 0x1401f02a9#3396 | 0           |
| 0x1401f02a9#3395 | 0x1401f02a9#3397 | 0           |
| 0x1401f02a9#3395 | 0x1401f02a9#3398 | 0           |
| 0x1401f02ae#3402 | 0x1401f02ae#2733 | 1           |
| 0x1401f02ae#3403 | 0x1401f02ae#2734 | 1           |
| 0x1401f02ae#3404 | 0x1401f02ae#2736 | 1           |
| 0x1401f02ae#3405 | 0x1401f02ae#2738 | 1           |
| 0x1401f0289#3373 | 0x1401f02ae#3400 | 0           |
| 0x1401f02ae#3400 | 0x1401f02ae#3401 | 0           |
| 0x1401f010e#3431 | 0x1401f02ae#3402 | 0           |
| 0x1401f02ae#3401 | 0x1401f02ae#3402 | 1           |
| 0x1401f02ae#3402 | 0x1401f02ae#3403 | 0           |
| 0x1401f02ae#3402 | 0x1401f02ae#3404 | 0           |
| 0x1401f02ae#3402 | 0x1401f02ae#3405 | 0           |
| 0x1401f02b3#3465 | 0x1401f02b3#970  | 1           |
| 0x1401f0289#3375 | 0x1401f02b3#2819 | 0           |
| 0x1401f0289#3373 | 0x1401f02b3#3407 | 0           |
| 0x1401f02b3#3407 | 0x1401f02b3#3408 | 0           |
| 0x1401f010e#3431 | 0x1401f02b3#3409 | 0           |
| 0x1401f02b3#3408 | 0x1401f02b3#3409 | 1           |
| 0x1401f02b3#3409 | 0x1401f02b3#3465 | 0           |
| 0x1401f02b8#3466 | 0x1401f02b8#975  | 1           |
| 0x1401f02b3#2819 | 0x1401f02b8#2820 | 0           |
| 0x1401f0289#3373 | 0x1401f02b8#3411 | 0           |
| 0x1401f02b8#3411 | 0x1401f02b8#3412 | 0           |
| 0x1401f010e#3431 | 0x1401f02b8#3413 | 0           |
| 0x1401f02b8#3412 | 0x1401f02b8#3413 | 1           |
| 0x1401f02b8#3413 | 0x1401f02b8#3466 | 0           |
| 0x1401f02c1#3467 | 0x1401f02c1#980  | 1           |
| 0x1401f02b8#2820 | 0x1401f02c1#2821 | 0           |
| 0x1401f0289#3373 | 0x1401f02c1#3415 | 0           |
| 0x1401f02c1#3415 | 0x1401f02c1#3416 | 0           |
| 0x1401f010e#3431 | 0x1401f02c1#3417 | 0           |
| 0x1401f02c1#3416 | 0x1401f02c1#3417 | 1           |
| 0x1401f02c1#3417 | 0x1401f02c1#3467 | 0           |
| 0x1401f010e#3431 | 0x1401f02d4#990  | 1           |
| 0x1401f02a0#939  | 0x1401f02d4#990  | 2           |
| 0x1401f027f#831  | 0x1401f02d4#990  | 3           |
| 0x1401f029b#3391 | 0x1401f02d4#990  | 4           |
| 0x1401f02c1#2821 | 0x1401f02d4#2803 | 0           |
| 0x1401f02d4#3453 | 0x1401f02d4#2901 | 0           |
| 0x1401f0289#3376 | 0x1401f02d4#2926 | 0           |
| 0x1401f02a9#2719 | 0x1401f02d4#2954 | 0           |
| 0x1401f02a9#2720 | 0x1401f02d4#2979 | 0           |
| 0x1401f02a9#2722 | 0x1401f02d4#3005 | 0           |
| 0x1401f02a9#2724 | 0x1401f02d4#3030 | 0           |
| 0x1401f02ae#2733 | 0x1401f02d4#3055 | 0           |
| 0x1401f02ae#2734 | 0x1401f02d4#3080 | 0           |
| 0x1401f02ae#2736 | 0x1401f02d4#3107 | 0           |
| 0x1401f02ae#2738 | 0x1401f02d4#3132 | 0           |
| 0x1401f0289#3377 | 0x1401f02d4#3157 | 0           |
| 0x1401f02d4#3132 | 0x1401f02d9#3105 | 0           |
| 0x1401f02d4#3107 | 0x1401f02d9#3105 | 1           |
| 0x1401f02d9#3105 | 0x1401f02e2#1004 | 1           |
| 0x1401f02e2#1004 | 0x1401f02e2#1005 | 1           |
| 0x1401f02a0#939  | 0x1401f02e2#3457 | 0           |
| 0x1401f02d4#2979 | 0x1401f02e4#2952 | 0           |
| 0x1401f02d4#2954 | 0x1401f02e4#2952 | 1           |
| 0x1401f02d9#3105 | 0x1401f02e9#1009 | 0           |
| 0x1401f02e9#1009 | 0x1401f02e9#1010 | 0           |
| 0x1401f02e9#1010 | 0x1401f02f1#1013 | 1           |
| 0x1401f02f1#1013 | 0x1401f02f8#1022 | 1           |
| 0x1401f02e4#2952 | 0x1401f02f8#3449 | 0           |
| 0x1401f02e4#2952 | 0x1401f02fa#1023 | 0           |
| 0x1401f02fa#3468 | 0x1401f02fa#1024 | 1           |
| 0x1401f02fa#1023 | 0x1401f02fa#3468 | 0           |
| 0x1401f02e4#2952 | 0x1401f02fe#1028 | 0           |
| 0x1401f02fa#1024 | 0x1401f02fe#1028 | 1           |
| 0x1401f02fe#1028 | 0x1401f0301#1037 | 0           |
| 0x1401f0301#1037 | 0x1401f0309#1054 | 1           |
| 0x1401f0309#1054 | 0x1401f0309#1056 | 1           |
| 0x1401f02d9#3105 | 0x1401f030f#1057 | 0           |
| 0x1401f030f#1057 | 0x1401f030f#1058 | 0           |
| 0x1401f031a#2092 | 0x1401f031a#1063 | 1           |
| 0x1401f031a#2127 | 0x1401f031a#1063 | 2           |
| 0x1401f02f8#3449 | 0x1401f031a#2092 | 0           |
| 0x1401f02fa#1024 | 0x1401f031a#2092 | 1           |
| 0x1401f02e9#1010 | 0x1401f031a#2127 | 0           |
| 0x1401f030f#1058 | 0x1401f031a#2127 | 1           |
| 0x1401f02d4#2803 | 0x1401f031a#2804 | 0           |
| 0x1401f02d4#2901 | 0x1401f031a#2902 | 0           |
| 0x1401f02d4#2926 | 0x1401f031a#2927 | 0           |
| 0x1401f02d4#2954 | 0x1401f031a#2955 | 0           |
| 0x1401f02d4#2979 | 0x1401f031a#2980 | 0           |
| 0x1401f02d4#3005 | 0x1401f031a#3006 | 0           |
| 0x1401f02d4#3030 | 0x1401f031a#3031 | 0           |
| 0x1401f02d4#3055 | 0x1401f031a#3056 | 0           |
| 0x1401f02d4#3080 | 0x1401f031a#3081 | 0           |
| 0x1401f02d4#3107 | 0x1401f031a#3108 | 0           |
| 0x1401f02d4#3132 | 0x1401f031a#3133 | 0           |
| 0x1401f02d4#3157 | 0x1401f031a#3158 | 0           |
| 0x1401f027f#831  | 0x1401f032c#1087 | 1           |
| 0x1401f032c#1087 | 0x1401f032c#1088 | 1           |
| 0x1401f010e#3430 | 0x1401f0332#2249 | 0           |
| 0x1401f03ff#1369 | 0x1401f0332#2249 | 1           |
| 0x1401f0289#3375 | 0x1401f0332#2842 | 0           |
| 0x1401f03ff#2839 | 0x1401f0332#2842 | 1           |
| 0x1401f0289#3376 | 0x1401f0332#2942 | 0           |
| 0x1401f03ff#2940 | 0x1401f0332#2942 | 1           |
| 0x1401f0289#3377 | 0x1401f0332#3173 | 0           |
| 0x1401f03ff#3171 | 0x1401f0332#3173 | 1           |
| 0x1401f0332#2249 | 0x1401f0335#1092 | 0           |
| 0x1401f0335#3469 | 0x1401f0335#1092 | 1           |
| 0x1401f010e#3431 | 0x1401f0335#3469 | 0           |
| 0x1401f0335#1092 | 0x1401f0338#1101 | 0           |
| 0x1401f0338#1101 | 0x1401f0340#1149 | 1           |
| 0x1401f0340#1149 | 0x1401f0340#1150 | 1           |
| 0x1401f0332#2249 | 0x1401f0346#1151 | 0           |
| 0x1401f0346#3470 | 0x1401f0346#2747 | 1           |
| 0x1401f0346#3471 | 0x1401f0346#2748 | 1           |
| 0x1401f0332#2249 | 0x1401f0346#2749 | 0           |
| 0x1401f0346#3472 | 0x1401f0346#2750 | 1           |
| 0x1401f0332#2249 | 0x1401f0346#2751 | 0           |
| 0x1401f0346#3473 | 0x1401f0346#2752 | 1           |
| 0x1401f0332#2249 | 0x1401f0346#2753 | 0           |
| 0x1401f0346#1151 | 0x1401f0346#3470 | 0           |
| 0x1401f0346#2749 | 0x1401f0346#3471 | 0           |
| 0x1401f0346#2751 | 0x1401f0346#3472 | 0           |
| 0x1401f0346#2753 | 0x1401f0346#3473 | 0           |
| 0x1401f0332#2249 | 0x1401f034b#1158 | 0           |
| 0x1401f034b#1158 | 0x1401f034b#3474 | 0           |
| 0x1401f0332#2249 | 0x1401f034f#1160 | 0           |
| 0x1401f034f#3475 | 0x1401f034f#2761 | 1           |
| 0x1401f034f#3476 | 0x1401f034f#2762 | 1           |
| 0x1401f0332#2249 | 0x1401f034f#2763 | 0           |
| 0x1401f034f#3477 | 0x1401f034f#2764 | 1           |
| 0x1401f0332#2249 | 0x1401f034f#2765 | 0           |
| 0x1401f034f#3478 | 0x1401f034f#2766 | 1           |
| 0x1401f0332#2249 | 0x1401f034f#2767 | 0           |
| 0x1401f034f#1160 | 0x1401f034f#3475 | 0           |
| 0x1401f034f#2763 | 0x1401f034f#3476 | 0           |
| 0x1401f034f#2765 | 0x1401f034f#3477 | 0           |
| 0x1401f034f#2767 | 0x1401f034f#3478 | 0           |
| 0x1401f0332#2249 | 0x1401f0354#1167 | 0           |
| 0x1401f0354#3479 | 0x1401f0354#1169 | 1           |
| 0x1401f0332#2842 | 0x1401f0354#2822 | 0           |
| 0x1401f0354#1167 | 0x1401f0354#3479 | 0           |
| 0x1401f0332#2249 | 0x1401f0358#1170 | 0           |
| 0x1401f0358#3480 | 0x1401f0358#1172 | 1           |
| 0x1401f0354#2822 | 0x1401f0358#2823 | 0           |
| 0x1401f0358#1170 | 0x1401f0358#3480 | 0           |
| 0x1401f0360#3481 | 0x1401f0360#1174 | 1           |
| 0x1401f0358#2823 | 0x1401f0360#2824 | 0           |
| 0x1401f034b#3474 | 0x1401f0360#3481 | 0           |
| 0x1401f034b#3474 | 0x1401f036e#1186 | 0           |
| 0x1401f010e#3431 | 0x1401f036e#1186 | 1           |
| 0x1401f036e#1186 | 0x1401f0371#1191 | 1           |
| 0x1401f0332#2249 | 0x1401f0373#1192 | 0           |
| 0x1401f0373#3482 | 0x1401f0373#1194 | 1           |
| 0x1401f0360#2824 | 0x1401f0373#2825 | 0           |
| 0x1401f0373#1192 | 0x1401f0373#3482 | 0           |
| 0x1401f0332#2249 | 0x1401f0377#1195 | 0           |
| 0x1401f0377#3483 | 0x1401f0377#1197 | 1           |
| 0x1401f0373#2825 | 0x1401f0377#2826 | 0           |
| 0x1401f0377#1195 | 0x1401f0377#3483 | 0           |
| 0x1401f037f#3484 | 0x1401f037f#1199 | 1           |
| 0x1401f0377#2826 | 0x1401f037f#2827 | 0           |
| 0x1401f034b#3474 | 0x1401f037f#3484 | 0           |
| 0x1401f010e#3431 | 0x1401f0383#2775 | 1           |
| 0x1401f0383#3418 | 0x1401f0383#2776 | 1           |
| 0x1401f0383#3419 | 0x1401f0383#2778 | 1           |
| 0x1401f0383#3420 | 0x1401f0383#2780 | 1           |
| 0x1401f010e#3431 | 0x1401f0383#3418 | 0           |
| 0x1401f010e#3431 | 0x1401f0383#3419 | 0           |
| 0x1401f010e#3431 | 0x1401f0383#3420 | 0           |
| 0x1401f034b#3474 | 0x1401f0386#2782 | 1           |
| 0x1401f0383#2775 | 0x1401f0386#2782 | 2           |
| 0x1401f0386#3485 | 0x1401f0386#2783 | 1           |
| 0x1401f0383#2776 | 0x1401f0386#2783 | 2           |
| 0x1401f0332#2249 | 0x1401f0386#2784 | 0           |
| 0x1401f0386#3486 | 0x1401f0386#2785 | 1           |
| 0x1401f0383#2778 | 0x1401f0386#2785 | 2           |
| 0x1401f0332#2249 | 0x1401f0386#2786 | 0           |
| 0x1401f0386#3487 | 0x1401f0386#2787 | 1           |
| 0x1401f0383#2780 | 0x1401f0386#2787 | 2           |
| 0x1401f0332#2249 | 0x1401f0386#2788 | 0           |
| 0x1401f037f#2827 | 0x1401f0386#2831 | 0           |
| 0x1401f0386#2831 | 0x1401f0386#2832 | 0           |
| 0x1401f0386#2832 | 0x1401f0386#2833 | 0           |
| 0x1401f0386#2833 | 0x1401f0386#2834 | 0           |
| 0x1401f0386#2784 | 0x1401f0386#3485 | 0           |
| 0x1401f0386#2786 | 0x1401f0386#3486 | 0           |
| 0x1401f0386#2788 | 0x1401f0386#3487 | 0           |
| 0x1401f038a#3421 | 0x1401f038a#2789 | 1           |
| 0x1401f038a#3422 | 0x1401f038a#2790 | 1           |
| 0x1401f038a#3423 | 0x1401f038a#2792 | 1           |
| 0x1401f038a#3424 | 0x1401f038a#2794 | 1           |
| 0x1401f010e#3431 | 0x1401f038a#3421 | 0           |
| 0x1401f010e#3431 | 0x1401f038a#3422 | 0           |
| 0x1401f010e#3431 | 0x1401f038a#3423 | 0           |
| 0x1401f010e#3431 | 0x1401f038a#3424 | 0           |
| 0x1401f0332#2249 | 0x1401f038e#1215 | 0           |
| 0x1401f038e#3488 | 0x1401f038e#2796 | 1           |
| 0x1401f038a#2789 | 0x1401f038e#2796 | 2           |
| 0x1401f038e#3489 | 0x1401f038e#2797 | 1           |
| 0x1401f038a#2790 | 0x1401f038e#2797 | 2           |
| 0x1401f0332#2249 | 0x1401f038e#2798 | 0           |
| 0x1401f038e#3490 | 0x1401f038e#2799 | 1           |
| 0x1401f038a#2792 | 0x1401f038e#2799 | 2           |
| 0x1401f0332#2249 | 0x1401f038e#2800 | 0           |
| 0x1401f038e#3491 | 0x1401f038e#2801 | 1           |
| 0x1401f038a#2794 | 0x1401f038e#2801 | 2           |
| 0x1401f0332#2249 | 0x1401f038e#2802 | 0           |
| 0x1401f0386#2834 | 0x1401f038e#2835 | 0           |
| 0x1401f038e#2835 | 0x1401f038e#2836 | 0           |
| 0x1401f038e#2836 | 0x1401f038e#2837 | 0           |
| 0x1401f038e#2837 | 0x1401f038e#2838 | 0           |
| 0x1401f038e#1215 | 0x1401f038e#3488 | 0           |
| 0x1401f038e#2798 | 0x1401f038e#3489 | 0           |
| 0x1401f038e#2800 | 0x1401f038e#3490 | 0           |
| 0x1401f038e#2802 | 0x1401f038e#3491 | 0           |
| 0x1401f0393#3492 | 0x1401f0393#1220 | 1           |
| 0x1401f038e#2838 | 0x1401f0393#2828 | 0           |
| 0x1401f010e#3431 | 0x1401f0393#3425 | 0           |
| 0x1401f0393#3425 | 0x1401f0393#3492 | 0           |
| 0x1401f0397#3493 | 0x1401f0397#1223 | 1           |
| 0x1401f0393#2828 | 0x1401f0397#2829 | 0           |
| 0x1401f010e#3431 | 0x1401f0397#3426 | 0           |
| 0x1401f0397#3426 | 0x1401f0397#3493 | 0           |
| 0x1401f039f#3494 | 0x1401f039f#1225 | 1           |
| 0x1401f0397#2829 | 0x1401f039f#2830 | 0           |
| 0x1401f010e#3431 | 0x1401f039f#3494 | 0           |
| 0x1401f03a3#3495 | 0x1401f03a3#1228 | 0           |
| 0x1401f03a3#3496 | 0x1401f03a3#1228 | 1           |
| 0x1401f0360#2824 | 0x1401f03a3#2840 | 0           |
| 0x1401f039f#2830 | 0x1401f03a3#2840 | 1           |
| 0x1401f034b#3474 | 0x1401f03a3#3495 | 0           |
| 0x1401f010e#3431 | 0x1401f03a3#3496 | 0           |
| 0x1401f03a3#1228 | 0x1401f03aa#1240 | 0           |
| 0x1401f010e#3431 | 0x1401f03b8#1293 | 1           |
| 0x1401f03aa#1240 | 0x1401f03b8#1293 | 3           |
| 0x1401f03ae#3427 | 0x1401f03b8#1293 | 4           |
| 0x1401f03a3#2840 | 0x1401f03b8#2805 | 0           |
| 0x1401f03b8#3454 | 0x1401f03b8#2903 | 0           |
| 0x1401f0332#2942 | 0x1401f03b8#2928 | 0           |
| 0x1401f0346#2747 | 0x1401f03b8#2956 | 0           |
| 0x1401f0346#2748 | 0x1401f03b8#2981 | 0           |
| 0x1401f0346#2750 | 0x1401f03b8#3007 | 0           |
| 0x1401f0346#2752 | 0x1401f03b8#3032 | 0           |
| 0x1401f034f#2761 | 0x1401f03b8#3057 | 0           |
| 0x1401f034f#2762 | 0x1401f03b8#3082 | 0           |
| 0x1401f034f#2764 | 0x1401f03b8#3109 | 0           |
| 0x1401f034f#2766 | 0x1401f03b8#3134 | 0           |
| 0x1401f0332#3173 | 0x1401f03b8#3159 | 0           |
| 0x1401f03b8#3134 | 0x1401f03bd#3106 | 0           |
| 0x1401f03b8#3109 | 0x1401f03bd#3106 | 1           |
| 0x1401f03bd#3106 | 0x1401f03c6#1307 | 1           |
| 0x1401f03c6#1307 | 0x1401f03c6#1308 | 1           |
| 0x1401f03b8#2981 | 0x1401f03c8#2953 | 0           |
| 0x1401f03b8#2956 | 0x1401f03c8#2953 | 1           |
| 0x1401f03bd#3106 | 0x1401f03cd#1312 | 0           |
| 0x1401f03cd#1312 | 0x1401f03cd#1313 | 0           |
| 0x1401f03cd#1313 | 0x1401f03d5#1316 | 1           |
| 0x1401f03d5#1316 | 0x1401f03dc#1325 | 1           |
| 0x1401f03c8#2953 | 0x1401f03dc#3448 | 0           |
| 0x1401f03c8#2953 | 0x1401f03de#1326 | 0           |
| 0x1401f03de#3497 | 0x1401f03de#1327 | 1           |
| 0x1401f03de#1326 | 0x1401f03de#3497 | 0           |
| 0x1401f03c8#2953 | 0x1401f03e2#1331 | 0           |
| 0x1401f03de#1327 | 0x1401f03e2#1331 | 1           |
| 0x1401f03e2#1331 | 0x1401f03e5#1340 | 0           |
| 0x1401f03e5#1340 | 0x1401f03ed#1357 | 1           |
| 0x1401f03ed#1357 | 0x1401f03ed#1359 | 1           |
| 0x1401f03fa#2089 | 0x1401f03fa#1366 | 1           |
| 0x1401f03dc#3448 | 0x1401f03fa#2089 | 0           |
| 0x1401f03de#1327 | 0x1401f03fa#2089 | 1           |
| 0x1401f03b8#2805 | 0x1401f03fa#2808 | 0           |
| 0x1401f03b8#2903 | 0x1401f03fa#2906 | 0           |
| 0x1401f03b8#2928 | 0x1401f03fa#2931 | 0           |
| 0x1401f03b8#2956 | 0x1401f03fa#2959 | 0           |
| 0x1401f03b8#2981 | 0x1401f03fa#2984 | 0           |
| 0x1401f03b8#3007 | 0x1401f03fa#3010 | 0           |
| 0x1401f03b8#3032 | 0x1401f03fa#3035 | 0           |
| 0x1401f03b8#3057 | 0x1401f03fa#3060 | 0           |
| 0x1401f03b8#3082 | 0x1401f03fa#3085 | 0           |
| 0x1401f03b8#3109 | 0x1401f03fa#3112 | 0           |
| 0x1401f03b8#3134 | 0x1401f03fa#3137 | 0           |
| 0x1401f03b8#3159 | 0x1401f03fa#3162 | 0           |
| 0x1401f0332#2249 | 0x1401f03ff#1369 | 0           |
| 0x1401f0332#2842 | 0x1401f03ff#2839 | 0           |
| 0x1401f03b8#2805 | 0x1401f03ff#2839 | 1           |
| 0x1401f03fa#2808 | 0x1401f03ff#2839 | 2           |
| 0x1401f0332#2942 | 0x1401f03ff#2940 | 0           |
| 0x1401f03b8#2928 | 0x1401f03ff#2940 | 1           |
| 0x1401f03fa#2931 | 0x1401f03ff#2940 | 2           |
| 0x1401f0332#3173 | 0x1401f03ff#3171 | 0           |
| 0x1401f03b8#3159 | 0x1401f03ff#3171 | 1           |
| 0x1401f03fa#3162 | 0x1401f03ff#3171 | 2           |
| 0x1401f03ff#1369 | 0x1401f0406#1379 | 0           |
| 0x1401f0406#3500 | 0x1401f0406#1379 | 1           |
| 0x1401f010e#3431 | 0x1401f0406#3500 | 0           |
| 0x1401f0406#1379 | 0x1401f040d#1396 | 1           |
| 0x1401f040d#1396 | 0x1401f040d#1397 | 1           |
| 0x1401f02d4#2803 | 0x1401f0418#2841 | 0           |
| 0x1401f03b8#2805 | 0x1401f0418#2841 | 1           |
| 0x1401f02d4#2901 | 0x1401f0418#2916 | 0           |
| 0x1401f03b8#2903 | 0x1401f0418#2916 | 1           |
| 0x1401f02d4#2926 | 0x1401f0418#2941 | 0           |
| 0x1401f03b8#2928 | 0x1401f0418#2941 | 1           |
| 0x1401f02d4#2954 | 0x1401f0418#2969 | 0           |
| 0x1401f03b8#2956 | 0x1401f0418#2969 | 1           |
| 0x1401f02d4#2979 | 0x1401f0418#2994 | 0           |
| 0x1401f03b8#2981 | 0x1401f0418#2994 | 1           |
| 0x1401f02d4#3005 | 0x1401f0418#3020 | 0           |
| 0x1401f03b8#3007 | 0x1401f0418#3020 | 1           |
| 0x1401f02d4#3030 | 0x1401f0418#3045 | 0           |
| 0x1401f03b8#3032 | 0x1401f0418#3045 | 1           |
| 0x1401f02d4#3055 | 0x1401f0418#3070 | 0           |
| 0x1401f03b8#3057 | 0x1401f0418#3070 | 1           |
| 0x1401f02d4#3080 | 0x1401f0418#3095 | 0           |
| 0x1401f03b8#3082 | 0x1401f0418#3095 | 1           |
| 0x1401f02d4#3107 | 0x1401f0418#3122 | 0           |
| 0x1401f03b8#3109 | 0x1401f0418#3122 | 1           |
| 0x1401f02d4#3132 | 0x1401f0418#3147 | 0           |
| 0x1401f03b8#3134 | 0x1401f0418#3147 | 1           |
| 0x1401f02d4#3157 | 0x1401f0418#3172 | 0           |
| 0x1401f03b8#3159 | 0x1401f0418#3172 | 1           |
| 0x1401f041d#3498 | 0x1401f041d#1401 | 0           |
| 0x1401f0418#2841 | 0x1401f041d#2806 | 0           |
| 0x1401f0418#2916 | 0x1401f041d#2904 | 0           |
| 0x1401f0418#2941 | 0x1401f041d#2929 | 0           |
| 0x1401f0418#2969 | 0x1401f041d#2957 | 0           |
| 0x1401f0418#2994 | 0x1401f041d#2982 | 0           |
| 0x1401f0418#3020 | 0x1401f041d#3008 | 0           |
| 0x1401f0418#3045 | 0x1401f041d#3033 | 0           |
| 0x1401f0418#3070 | 0x1401f041d#3058 | 0           |
| 0x1401f0418#3095 | 0x1401f041d#3083 | 0           |
| 0x1401f0418#3122 | 0x1401f041d#3110 | 0           |
| 0x1401f0418#3147 | 0x1401f041d#3135 | 0           |
| 0x1401f0418#3172 | 0x1401f041d#3160 | 0           |
| 0x1401f041d#1400 | 0x1401f041d#3498 | 0           |
| 0x1401f041f#3499 | 0x1401f041f#1403 | 0           |
| 0x1401f041d#2806 | 0x1401f041f#2807 | 0           |
| 0x1401f041f#2807 | 0x1401f041f#2818 | 0           |
| 0x1401f041d#2904 | 0x1401f041f#2905 | 0           |
| 0x1401f041d#2929 | 0x1401f041f#2930 | 0           |
| 0x1401f041d#2957 | 0x1401f041f#2958 | 0           |
| 0x1401f041d#2982 | 0x1401f041f#2983 | 0           |
| 0x1401f041d#3008 | 0x1401f041f#3009 | 0           |
| 0x1401f041d#3033 | 0x1401f041f#3034 | 0           |
| 0x1401f041d#3058 | 0x1401f041f#3059 | 0           |
| 0x1401f041d#3083 | 0x1401f041f#3084 | 0           |
| 0x1401f041d#3110 | 0x1401f041f#3111 | 0           |
| 0x1401f041d#3135 | 0x1401f041f#3136 | 0           |
| 0x1401f041d#3160 | 0x1401f041f#3161 | 0           |
| 0x1401f041f#1402 | 0x1401f041f#3499 | 0           |

## normalized_result.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x1401f010e#113  | conditional_branch |               | 1           |
| 0x1401f0130#178  | conditional_branch |               | 1           |
| 0x1401f015c#293  | conditional_branch |               | 1           |
| 0x1401f017b#434  | direct_call        | 0             |             |
| 0x1401f0196#456  | direct_call        | 0             |             |
| 0x1401f01af#483  | direct_call        | 0             |             |
| 0x1401f01c6#494  | direct_call        | 0             |             |
| 0x1401f01dd#505  | direct_call        | 0             |             |
| 0x1401f0217#686  | conditional_branch |               | 1           |
| 0x1401f021f#691  | direct_call        | 0             |             |
| 0x1401f022f#827  | direct_call        | 0             |             |
| 0x1401f0255#764  | direct_call        | 0             |             |
| 0x1401f0289#890  | conditional_branch |               | 1           |
| 0x1401f02a9#2719 | memory_read        | 1             |             |
| 0x1401f02a9#2720 | memory_read        | 1             |             |
| 0x1401f02a9#2722 | memory_read        | 1             |             |
| 0x1401f02a9#2724 | memory_read        | 1             |             |
| 0x1401f02ae#2733 | memory_read        | 1             |             |
| 0x1401f02ae#2734 | memory_read        | 1             |             |
| 0x1401f02ae#2736 | memory_read        | 1             |             |
| 0x1401f02ae#2738 | memory_read        | 1             |             |
| 0x1401f02b3#970  | memory_write       | 1             | 2           |
| 0x1401f02b8#975  | memory_write       | 1             | 2           |
| 0x1401f02c1#980  | memory_write       | 1             | 2           |
| 0x1401f02d4#990  | direct_call        | 0             |             |
| 0x1401f02e2#1005 | conditional_branch |               | 1           |
| 0x1401f02f8#1022 | conditional_branch |               | 1           |
| 0x1401f02fa#1024 | memory_read        | 1             |             |
| 0x1401f0309#1056 | conditional_branch |               | 1           |
| 0x1401f031a#1063 | direct_call        | 0             |             |
| 0x1401f032c#1088 | conditional_branch |               | 1           |
| 0x1401f0340#1150 | conditional_branch |               | 1           |
| 0x1401f0346#2747 | memory_read        | 1             |             |
| 0x1401f0346#2748 | memory_read        | 1             |             |
| 0x1401f0346#2750 | memory_read        | 1             |             |
| 0x1401f0346#2752 | memory_read        | 1             |             |
| 0x1401f034f#2761 | memory_read        | 1             |             |
| 0x1401f034f#2762 | memory_read        | 1             |             |
| 0x1401f034f#2764 | memory_read        | 1             |             |
| 0x1401f034f#2766 | memory_read        | 1             |             |
| 0x1401f0354#1169 | memory_write       | 1             | 2           |
| 0x1401f0358#1172 | memory_write       | 1             | 2           |
| 0x1401f0360#1174 | memory_write       | 1             | 2           |
| 0x1401f0371#1191 | conditional_branch |               | 1           |
| 0x1401f0373#1194 | memory_write       | 1             | 2           |
| 0x1401f0377#1197 | memory_write       | 1             | 2           |
| 0x1401f037f#1199 | memory_write       | 1             | 2           |
| 0x1401f0383#2775 | memory_read        | 1             |             |
| 0x1401f0383#2776 | memory_read        | 1             |             |
| 0x1401f0383#2778 | memory_read        | 1             |             |
| 0x1401f0383#2780 | memory_read        | 1             |             |
| 0x1401f0386#2782 | memory_write       | 1             | 2           |
| 0x1401f0386#2783 | memory_write       | 1             | 2           |
| 0x1401f0386#2785 | memory_write       | 1             | 2           |
| 0x1401f0386#2787 | memory_write       | 1             | 2           |
| 0x1401f038a#2789 | memory_read        | 1             |             |
| 0x1401f038a#2790 | memory_read        | 1             |             |
| 0x1401f038a#2792 | memory_read        | 1             |             |
| 0x1401f038a#2794 | memory_read        | 1             |             |
| 0x1401f038e#2796 | memory_write       | 1             | 2           |
| 0x1401f038e#2797 | memory_write       | 1             | 2           |
| 0x1401f038e#2799 | memory_write       | 1             | 2           |
| 0x1401f038e#2801 | memory_write       | 1             | 2           |
| 0x1401f0393#1220 | memory_write       | 1             | 2           |
| 0x1401f0397#1223 | memory_write       | 1             | 2           |
| 0x1401f039f#1225 | memory_write       | 1             | 2           |
| 0x1401f03b8#1293 | direct_call        | 0             |             |
| 0x1401f03c6#1308 | conditional_branch |               | 1           |
| 0x1401f03dc#1325 | conditional_branch |               | 1           |
| 0x1401f03de#1327 | memory_read        | 1             |             |
| 0x1401f03ed#1359 | conditional_branch |               | 1           |
| 0x1401f03fa#1366 | direct_call        | 0             |             |
| 0x1401f040d#1397 | conditional_branch |               | 1           |
| 0x1401f041d#1401 | indirect_call      | 0             |             |
| 0x1401f041f#1403 | indirect_call      | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined4 * |
| 1       | param_2 | /longlong     |
| 2       | param_3 | /longlong     |
| 3       | param_4 | /undefined1   |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 1       | 0x1401f00fa#51   | 0           |
| 0       | 0x1401f00fa#3463 | 0           |
| 1       | 0x1401f010e#3430 | 0           |
| 1       | 0x1401f010e#3430 | 1           |
| 0       | 0x1401f010e#3431 | 0           |
| 0       | 0x1401f010e#3431 | 1           |
| 2       | 0x1401f010e#3432 | 0           |
| 2       | 0x1401f010e#3432 | 1           |
| 1       | 0x1401f010e#3459 | 0           |
| 1       | 0x1401f0123#119  | 0           |
| 0       | 0x1401f0123#3464 | 0           |
| 2       | 0x1401f0130#177  | 0           |
| 0       | 0x1401f0141#3381 | 0           |
| 1       | 0x1401f0145#226  | 0           |
| 0       | 0x1401f0151#3501 | 0           |
| 0       | 0x1401f015c#3450 | 0           |
| 0       | 0x1401f0170#3383 | 0           |
| 0       | 0x1401f0177#3385 | 0           |
| 0       | 0x1401f017b#434  | 1           |
| 3       | 0x1401f017b#434  | 4           |
| 3       | 0x1401f0196#456  | 4           |
| 1       | 0x1401f019b#457  | 0           |
| 3       | 0x1401f01af#483  | 4           |
| 3       | 0x1401f01c6#494  | 4           |
| 0       | 0x1401f01dd#505  | 2           |
| 1       | 0x1401f01dd#505  | 4           |
| 3       | 0x1401f01dd#3455 | 0           |
| 0       | 0x1401f01f2#3503 | 0           |
| 2       | 0x1401f01f5#525  | 0           |
| 2       | 0x1401f01f9#566  | 0           |
| 1       | 0x1401f01ff#576  | 0           |
| 0       | 0x1401f021f#691  | 1           |
| 2       | 0x1401f021f#691  | 3           |
| 3       | 0x1401f021f#691  | 4           |
| 1       | 0x1401f0227#3452 | 0           |
| 1       | 0x1401f022f#827  | 2           |
| 2       | 0x1401f022f#827  | 3           |
| 3       | 0x1401f022f#827  | 4           |
| 0       | 0x1401f0237#2171 | 0           |
| 0       | 0x1401f0237#2171 | 1           |
| 0       | 0x1401f023a#3505 | 0           |
| 0       | 0x1401f0255#764  | 1           |
| 1       | 0x1401f0255#764  | 2           |
| 3       | 0x1401f0255#764  | 3           |
| 0       | 0x1401f02a9#3395 | 0           |
| 0       | 0x1401f02ae#3402 | 0           |
| 0       | 0x1401f02b3#3409 | 0           |
| 0       | 0x1401f02b8#3413 | 0           |
| 0       | 0x1401f02c1#3417 | 0           |
| 0       | 0x1401f02d4#990  | 1           |
| 3       | 0x1401f02d4#3453 | 0           |
| 1       | 0x1401f0332#2249 | 0           |
| 1       | 0x1401f0332#2249 | 1           |
| 1       | 0x1401f0335#1092 | 0           |
| 0       | 0x1401f0335#3469 | 0           |
| 1       | 0x1401f0346#1151 | 0           |
| 1       | 0x1401f0346#2749 | 0           |
| 1       | 0x1401f0346#2751 | 0           |
| 1       | 0x1401f0346#2753 | 0           |
| 1       | 0x1401f034b#1158 | 0           |
| 1       | 0x1401f034f#1160 | 0           |
| 1       | 0x1401f034f#2763 | 0           |
| 1       | 0x1401f034f#2765 | 0           |
| 1       | 0x1401f034f#2767 | 0           |
| 1       | 0x1401f0354#1167 | 0           |
| 1       | 0x1401f0358#1170 | 0           |
| 0       | 0x1401f036e#1186 | 1           |
| 1       | 0x1401f0373#1192 | 0           |
| 1       | 0x1401f0377#1195 | 0           |
| 0       | 0x1401f0383#2775 | 1           |
| 0       | 0x1401f0383#3418 | 0           |
| 0       | 0x1401f0383#3419 | 0           |
| 0       | 0x1401f0383#3420 | 0           |
| 1       | 0x1401f0386#2784 | 0           |
| 1       | 0x1401f0386#2786 | 0           |
| 1       | 0x1401f0386#2788 | 0           |
| 0       | 0x1401f038a#3421 | 0           |
| 0       | 0x1401f038a#3422 | 0           |
| 0       | 0x1401f038a#3423 | 0           |
| 0       | 0x1401f038a#3424 | 0           |
| 1       | 0x1401f038e#1215 | 0           |
| 1       | 0x1401f038e#2798 | 0           |
| 1       | 0x1401f038e#2800 | 0           |
| 1       | 0x1401f038e#2802 | 0           |
| 0       | 0x1401f0393#3425 | 0           |
| 0       | 0x1401f0397#3426 | 0           |
| 0       | 0x1401f039f#3494 | 0           |
| 0       | 0x1401f03a3#3496 | 0           |
| 0       | 0x1401f03b8#1293 | 1           |
| 3       | 0x1401f03b8#3454 | 0           |
| 1       | 0x1401f03ff#1369 | 0           |
| 1       | 0x1401f0406#1379 | 0           |
| 0       | 0x1401f0406#3500 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f041f with no resolved callee; its no-return basis is unknown.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401f041f with no resolved callee; its no-return basis is unknown.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

