## evidence_id

ev_ded1549256ba9bc38cf75d54fd3fb75d3fa07f642eaff99b22cee14b929fff66

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
| procedure | 0x140307a80 |

## raw_result.value.procedure.address

0x140307a80

## raw_result.value.procedure.name

FUN_140307a80

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
| 0x140307a80 | 0x140307e4b |
| 0x140307e4d | 0x140307e51 |

## raw_result.value.procedure.body.total_bytes

977

## raw_result.value.procedure.body.span_bytes

978

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_140307a80()

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_58 @ Stack[-0x58]:8      | ghidra-function-database |
| undefined1[16] local_68 @ Stack[-0x68]:16 | ghidra-function-database |
| undefined8 local_70 @ Stack[-0x70]:8      | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8    | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8    | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8    | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8      | ghidra-function-database |

## raw_result.value.pseudocode


longlong * FUN_140307a80(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *unaff_RBX;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  ulonglong local_res10;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  byte *local_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  
  puVar15 = auStack_98;
  puVar16 = auStack_98;
  uVar17 = 0;
  local_68 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  uVar11 = param_2[1];
  uVar18 = (uVar11 >> 2) * 3;
  if (uVar18 == 0) {
LAB_140307b74:
    local_res10 = 0;
    pbVar9 = (byte *)*param_2;
    local_70 = pbVar9 + uVar11;
    uVar18 = uVar17;
    uVar14 = uVar17;
    local_68 = plStack_60;
    if (uVar11 != 0) {
      do {
        bVar2 = *pbVar9;
        iVar4 = isspace((uint)bVar2);
        plVar10 = plStack_60;
        if (iVar4 == 0) {
          if (bVar2 == 0x3d) {
            local_res10 = uVar17 + 1;
            uVar17 = local_res10;
          }
          else {
            if (uVar17 != 0) goto LAB_140307db8;
            if ((byte)(bVar2 + 0xbf) < 0x1a) {
              uVar5 = (int)(char)bVar2 - 0x41;
LAB_140307bf7:
              if ((int)uVar5 < 0) goto LAB_140307db8;
            }
            else {
              if ((byte)(bVar2 + 0x9f) < 0x1a) {
                uVar5 = (int)(char)bVar2 - 0x47;
                goto LAB_140307bf7;
              }
              if ((byte)(bVar2 - 0x30) < 10) {
                uVar5 = (int)(char)bVar2 + 4;
                goto LAB_140307bf7;
              }
              if (bVar2 == 0x2b) {
                uVar5 = 0x3e;
              }
              else {
                if (bVar2 != 0x2f) goto LAB_140307db8;
                uVar5 = 0x3f;
              }
            }
            uVar5 = (int)uVar18 << 6 | uVar5;
            uVar18 = (ulonglong)uVar5;
            uVar6 = (int)uVar14 + 6;
            if ((int)uVar6 < 8) {
              uVar14 = (ulonglong)uVar6;
            }
            else {
              uVar6 = (int)uVar14 - 2;
              uVar14 = (ulonglong)uVar6;
              uVar19 = (undefined1)(uVar5 >> ((byte)uVar6 & 0x1f));
              if (plStack_60 == local_58) {
                lVar7 = (longlong)plStack_60 - (longlong)local_68;
                if (lVar7 == 0x7fffffffffffffff) goto LAB_140307e47;
                plVar1 = (longlong *)(lVar7 + 1);
                uVar11 = (longlong)local_58 - (longlong)local_68;
                if (0x7fffffffffffffff - (uVar11 >> 1) < uVar11) {
                  unaff_RBX = (longlong *)0x7fffffffffffffff;
                  plVar12 = (longlong *)0x8000000000000026;
LAB_140307cca:
                  lVar8 = FUN_1403272a0(plVar12);
                  if (lVar8 == 0) goto LAB_140307df8;
                  plVar12 = (longlong *)(lVar8 + 0x27U & 0xffffffffffffffe0);
                  plVar12[-1] = lVar8;
                }
                else {
                  plVar12 = (longlong *)((uVar11 >> 1) + uVar11);
                  unaff_RBX = plVar1;
                  if (plVar1 <= plVar12) {
                    unaff_RBX = plVar12;
                  }
                  if (unaff_RBX == (longlong *)0x0) {
                    plVar12 = (longlong *)0x0;
                  }
                  else {
                    if ((longlong *)0xfff < unaff_RBX) {
                      plVar12 = (longlong *)((longlong)unaff_RBX + 0x27);
                      if (unaff_RBX < plVar12) goto LAB_140307cca;
                      goto LAB_140307e4d;
                    }
                    plVar12 = (longlong *)FUN_1403272a0(unaff_RBX);
                  }
                }
                *(undefined1 *)((longlong)plVar12 + lVar7) = uVar19;
                if (plVar10 == plStack_60) {
                  lVar8 = (longlong)plStack_60 - (longlong)local_68;
                  plVar13 = plVar12;
                  plVar10 = local_68;
                }
                else {
                  FUN_14035f420(plVar12,local_68,(longlong)plVar10 - (longlong)local_68);
                  lVar8 = (longlong)plStack_60 - (longlong)plVar10;
                  plVar13 = (longlong *)(lVar7 + 1 + (longlong)plVar12);
                }
                FUN_14035f420(plVar13,plVar10,lVar8);
                if (local_68 != (longlong *)0x0) {
                  uVar11 = (longlong)local_58 - (longlong)local_68;
                  plVar10 = local_68;
                  if (0xfff < uVar11) {
                    if (0x1f < (ulonglong)((longlong)local_68 + (-8 - local_68[-1])))
                    goto LAB_140307df8;
                    uVar11 = uVar11 + 0x27;
                    plVar10 = (longlong *)local_68[-1];
                  }
                  thunk_FUN_140327e20(plVar10,uVar11);
                }
                plStack_60 = (longlong *)((longlong)plVar1 + (longlong)plVar12);
                local_58 = (longlong *)((longlong)unaff_RBX + (longlong)plVar12);
                uVar17 = local_res10;
                local_68 = plVar12;
              }
              else {
                *(undefined1 *)plStack_60 = uVar19;
                plStack_60 = (longlong *)((longlong)plStack_60 + 1);
              }
            }
          }
        }
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 != local_70);
      if ((2 < uVar17) ||
         ((0 < (int)uVar14 && (((uint)uVar18 & (1 << ((byte)uVar14 & 0x1f)) - 1U) != 0)))) {
LAB_140307db8:
        *(undefined1 *)(param_1 + 3) = 0;
        if (local_68 == (longlong *)0x0) {
          return param_1;
        }
        plVar10 = local_68;
        if (0xfff < (ulonglong)((longlong)local_58 - (longlong)local_68)) {
          if ((ulonglong)((longlong)local_68 + (-8 - local_68[-1])) < 0x20) {
            thunk_FUN_140327e20(local_68[-1],((longlong)local_58 - (longlong)local_68) + 0x27);
            return param_1;
          }
          goto LAB_140307dff;
        }
        goto LAB_140307e06;
      }
    }
    *param_1 = (longlong)local_68;
    param_1[1] = (longlong)plStack_60;
    param_1[2] = (longlong)local_58;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (0x7fffffffffffffff < uVar18) {
LAB_140307e47:
                    /* WARNING: Subroutine does not return */
      FUN_14000bff0();
    }
    if (uVar18 < 0x1000) {
      unaff_RBX = (longlong *)FUN_1403272a0(uVar18);
LAB_140307b12:
      FUN_14035f420(unaff_RBX,local_68,(longlong)plStack_60 - (longlong)local_68);
      if (local_68 != (longlong *)0x0) {
        uVar14 = (longlong)local_58 - (longlong)local_68;
        plVar10 = local_68;
        if (0xfff < uVar14) {
          if (0x1f < (ulonglong)((longlong)local_68 + (-8 - local_68[-1]))) goto LAB_140307df8;
          uVar14 = uVar14 + 0x27;
          plVar10 = (longlong *)local_68[-1];
        }
        thunk_FUN_140327e20(plVar10,uVar14);
      }
      local_58 = (longlong *)(uVar18 + (longlong)unaff_RBX);
      plStack_60 = unaff_RBX;
      goto LAB_140307b74;
    }
    if (uVar18 + 0x27 <= uVar18) {
LAB_140307e4d:
                    /* WARNING: Subroutine does not return */
      FUN_140005500();
    }
    lVar7 = FUN_1403272a0();
    if (lVar7 != 0) {
      unaff_RBX = (longlong *)(lVar7 + 0x27U & 0xffffffffffffffe0);
      unaff_RBX[-1] = lVar7;
      goto LAB_140307b12;
    }
LAB_140307df8:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar15 = auStack_90;
    param_1 = unaff_RBX;
LAB_140307dff:
    pcVar3 = (code *)swi(0x29);
    plVar10 = (longlong *)(*pcVar3)(5);
    puVar16 = puVar15 + 8;
LAB_140307e06:
    *(undefined8 *)(puVar16 + -8) = 0x140307e0e;
    thunk_FUN_140327e20(plVar10);
  }
  return param_1;
}



## raw_result.value.assembly

0x140307a80: MOV qword ptr [RSP + 0x8], RCX,0x140307a85: PUSH RBP,0x140307a86: PUSH RBX,0x140307a87: PUSH RSI,0x140307a88: PUSH RDI,0x140307a89: PUSH R12,0x140307a8b: PUSH R13,0x140307a8d: PUSH R14,0x140307a8f: PUSH R15,0x140307a91: MOV RBP, RSP,0x140307a94: SUB RSP, 0x58,0x140307a98: MOV R14, RDX,0x140307a9b: XOR R15D, R15D,0x140307a9e: XORPS XMM0, XMM0,0x140307aa1: MOVDQU xmmword ptr [RBP + -0x28], XMM0,0x140307aa6: MOV qword ptr [RBP + -0x18], R15,0x140307aaa: MOV RSI, qword ptr [RDX + 0x8],0x140307aae: MOV RAX, RSI,0x140307ab1: SHR RAX, 0x2,0x140307ab5: LEA RDI, [RAX + RAX*0x2],0x140307ab9: MOV RAX, 0x7fffffffffffffff,0x140307ac3: TEST RDI, RDI,0x140307ac6: JZ 0x140307b74,0x140307acc: CMP RDI, RAX,0x140307acf: JA 0x140307e47,0x140307ad5: CMP RDI, 0x1000,0x140307adc: JC 0x140307b07,0x140307ade: LEA RCX, [RDI + 0x27],0x140307ae2: CMP RCX, RDI,0x140307ae5: JBE 0x140307e4d,0x140307aeb: CALL 0x1403272a0,0x140307af0: TEST RAX, RAX,0x140307af3: JZ 0x140307df8,0x140307af9: LEA RBX, [RAX + 0x27],0x140307afd: AND RBX, -0x20,0x140307b01: MOV qword ptr [RBX + -0x8], RAX,0x140307b05: JMP 0x140307b12,0x140307b07: MOV RCX, RDI,0x140307b0a: CALL 0x1403272a0,0x140307b0f: MOV RBX, RAX,0x140307b12: MOV RDX, qword ptr [RBP + -0x28],0x140307b16: MOV R8, qword ptr [RBP + -0x20],0x140307b1a: SUB R8, RDX,0x140307b1d: MOV RCX, RBX,0x140307b20: CALL 0x14035f420,0x140307b25: MOV RCX, qword ptr [RBP + -0x28],0x140307b29: TEST RCX, RCX,0x140307b2c: JZ 0x140307b64,0x140307b2e: MOV RDX, qword ptr [RBP + -0x18],0x140307b32: SUB RDX, RCX,0x140307b35: CMP RDX, 0x1000,0x140307b3c: JC 0x140307b59,0x140307b3e: MOV RAX, qword ptr [RCX + -0x8],0x140307b42: SUB RCX, RAX,0x140307b45: SUB RCX, 0x8,0x140307b49: CMP RCX, 0x1f,0x140307b4d: JA 0x140307df8,0x140307b53: ADD RDX, 0x27,0x140307b57: JMP 0x140307b5c,0x140307b59: MOV RAX, RCX,0x140307b5c: MOV RCX, RAX,0x140307b5f: CALL 0x1403272f0,0x140307b64: MOV qword ptr [RBP + -0x28], RBX,0x140307b68: MOV qword ptr [RBP + -0x20], RBX,0x140307b6c: LEA RAX, [RDI + RBX*0x1],0x140307b70: MOV qword ptr [RBP + -0x18], RAX,0x140307b74: MOV R12D, R15D,0x140307b77: MOV R13D, R15D,0x140307b7a: MOV RDI, R15,0x140307b7d: MOV qword ptr [RBP + 0x50], R15,0x140307b81: MOV RAX, qword ptr [R14],0x140307b84: MOV qword ptr [RBP + 0x58], RAX,0x140307b88: LEA RCX, [RSI + RAX*0x1],0x140307b8c: MOV qword ptr [RBP + -0x30], RCX,0x140307b90: TEST RSI, RSI,0x140307b93: JZ 0x140307e13,0x140307b99: NOP dword ptr [RAX],0x140307ba0: MOVZX EBX, byte ptr [RAX],0x140307ba3: MOV ECX, EBX,0x140307ba5: CALL 0x140341510,0x140307baa: TEST EAX, EAX,0x140307bac: JNZ 0x140307d87,0x140307bb2: CMP BL, 0x3d,0x140307bb5: JNZ 0x140307bc3,0x140307bb7: INC RDI,0x140307bba: MOV qword ptr [RBP + 0x50], RDI,0x140307bbe: JMP 0x140307d87,0x140307bc3: TEST RDI, RDI,0x140307bc6: JNZ 0x140307db8,0x140307bcc: LEA EAX, [RBX + -0x41],0x140307bcf: CMP AL, 0x19,0x140307bd1: JA 0x140307bdb,0x140307bd3: MOVSX EAX, BL,0x140307bd6: SUB EAX, 0x41,0x140307bd9: JMP 0x140307bf7,0x140307bdb: LEA EAX, [RBX + -0x61],0x140307bde: CMP AL, 0x19,0x140307be0: JA 0x140307bea,0x140307be2: MOVSX EAX, BL,0x140307be5: SUB EAX, 0x47,0x140307be8: JMP 0x140307bf7,0x140307bea: LEA EAX, [RBX + -0x30],0x140307bed: CMP AL, 0x9,0x140307bef: JA 0x140307c01,0x140307bf1: MOVSX EAX, BL,0x140307bf4: ADD EAX, 0x4,0x140307bf7: TEST EAX, EAX,0x140307bf9: JS 0x140307db8,0x140307bff: JMP 0x140307c1b,0x140307c01: CMP BL, 0x2b,0x140307c04: JNZ 0x140307c0d,0x140307c06: MOV EAX, 0x3e,0x140307c0b: JMP 0x140307c1b,0x140307c0d: CMP BL, 0x2f,0x140307c10: JNZ 0x140307db8,0x140307c16: MOV EAX, 0x3f,0x140307c1b: SHL R12D, 0x6,0x140307c1f: OR R12D, EAX,0x140307c22: LEA EAX, [R13 + 0x6],0x140307c26: CMP EAX, 0x8,0x140307c29: JL 0x140307d84,0x140307c2f: SUB R13D, 0x2,0x140307c33: MOV R15D, R12D,0x140307c36: MOV ECX, R13D,0x140307c39: SHR R15D, CL,0x140307c3c: MOV RSI, qword ptr [RBP + -0x20],0x140307c40: MOV RCX, qword ptr [RBP + -0x18],0x140307c44: CMP RSI, RCX,0x140307c47: JZ 0x140307c55,0x140307c49: MOV byte ptr [RSI], R15B,0x140307c4c: INC qword ptr [RBP + -0x20],0x140307c50: JMP 0x140307d87,0x140307c55: MOV RAX, qword ptr [RBP + -0x28],0x140307c59: MOV R14, RSI,0x140307c5c: SUB R14, RAX,0x140307c5f: MOV R9, 0x7fffffffffffffff,0x140307c69: CMP R14, R9,0x140307c6c: JZ 0x140307e47,0x140307c72: LEA R8, [R14 + 0x1],0x140307c76: MOV qword ptr [RBP + 0x60], R8,0x140307c7a: SUB RCX, RAX,0x140307c7d: MOV RDX, RCX,0x140307c80: SHR RDX, 0x1,0x140307c83: MOV RAX, R9,0x140307c86: SUB RAX, RDX,0x140307c89: CMP RCX, RAX,0x140307c8c: JBE 0x140307c9d,0x140307c8e: MOV RBX, R9,0x140307c91: MOV RCX, -0x7fffffffffffffda,0x140307c9b: JMP 0x140307cca,0x140307c9d: LEA RAX, [RDX + RCX*0x1],0x140307ca1: MOV RBX, R8,0x140307ca4: CMP RAX, R8,0x140307ca7: CMOVNC RBX, RAX,0x140307cab: TEST RBX, RBX,0x140307cae: JNZ 0x140307cb4,0x140307cb0: XOR EDI, EDI,0x140307cb2: JMP 0x140307cf1,0x140307cb4: CMP RBX, 0x1000,0x140307cbb: JC 0x140307ce6,0x140307cbd: LEA RCX, [RBX + 0x27],0x140307cc1: CMP RCX, RBX,0x140307cc4: JBE 0x140307e4d,0x140307cca: CALL 0x1403272a0,0x140307ccf: TEST RAX, RAX,0x140307cd2: JZ 0x140307df8,0x140307cd8: LEA RDI, [RAX + 0x27],0x140307cdc: AND RDI, -0x20,0x140307ce0: MOV qword ptr [RDI + -0x8], RAX,0x140307ce4: JMP 0x140307cf1,0x140307ce6: MOV RCX, RBX,0x140307ce9: CALL 0x1403272a0,0x140307cee: MOV RDI, RAX,0x140307cf1: MOV byte ptr [RDI + R14*0x1], R15B,0x140307cf5: MOV R8, qword ptr [RBP + -0x20],0x140307cf9: MOV RDX, qword ptr [RBP + -0x28],0x140307cfd: MOV RCX, RDI,0x140307d00: CMP RSI, R8,0x140307d03: JNZ 0x140307d0a,0x140307d05: SUB R8, RDX,0x140307d08: JMP 0x140307d26,0x140307d0a: MOV R8, RSI,0x140307d0d: SUB R8, RDX,0x140307d10: CALL 0x14035f420,0x140307d15: MOV R8, qword ptr [RBP + -0x20],0x140307d19: SUB R8, RSI,0x140307d1c: LEA RCX, [R14 + 0x1],0x140307d20: ADD RCX, RDI,0x140307d23: MOV RDX, RSI,0x140307d26: CALL 0x14035f420,0x140307d2b: MOV RAX, qword ptr [RBP + -0x28],0x140307d2f: TEST RAX, RAX,0x140307d32: JZ 0x140307d67,0x140307d34: MOV RDX, qword ptr [RBP + -0x18],0x140307d38: SUB RDX, RAX,0x140307d3b: CMP RDX, 0x1000,0x140307d42: JC 0x140307d5f,0x140307d44: MOV RCX, qword ptr [RAX + -0x8],0x140307d48: SUB RAX, RCX,0x140307d4b: SUB RAX, 0x8,0x140307d4f: CMP RAX, 0x1f,0x140307d53: JA 0x140307df8,0x140307d59: ADD RDX, 0x27,0x140307d5d: JMP 0x140307d62,0x140307d5f: MOV RCX, RAX,0x140307d62: CALL 0x1403272f0,0x140307d67: MOV qword ptr [RBP + -0x28], RDI,0x140307d6b: MOV RAX, qword ptr [RBP + 0x60],0x140307d6f: ADD RAX, RDI,0x140307d72: MOV qword ptr [RBP + -0x20], RAX,0x140307d76: LEA RAX, [RBX + RDI*0x1],0x140307d7a: MOV qword ptr [RBP + -0x18], RAX,0x140307d7e: MOV RDI, qword ptr [RBP + 0x50],0x140307d82: JMP 0x140307d87,0x140307d84: MOV R13D, EAX,0x140307d87: MOV RAX, qword ptr [RBP + 0x58],0x140307d8b: INC RAX,0x140307d8e: MOV qword ptr [RBP + 0x58], RAX,0x140307d92: CMP RAX, qword ptr [RBP + -0x30],0x140307d96: JNZ 0x140307ba0,0x140307d9c: CMP RDI, 0x2,0x140307da0: JA 0x140307db8,0x140307da2: TEST R13D, R13D,0x140307da5: JLE 0x140307e13,0x140307da7: MOV ECX, R13D,0x140307daa: MOV EAX, 0x1,0x140307daf: SHL EAX, CL,0x140307db1: DEC EAX,0x140307db3: TEST R12D, EAX,0x140307db6: JZ 0x140307e13,0x140307db8: MOV RBX, qword ptr [RBP + 0x48],0x140307dbc: MOV byte ptr [RBX + 0x18], 0x0,0x140307dc0: MOV RAX, qword ptr [RBP + -0x28],0x140307dc4: TEST RAX, RAX,0x140307dc7: JZ 0x140307e0e,0x140307dc9: MOV RDX, qword ptr [RBP + -0x18],0x140307dcd: SUB RDX, RAX,0x140307dd0: CMP RDX, 0x1000,0x140307dd7: JC 0x140307e06,0x140307dd9: MOV RCX, qword ptr [RAX + -0x8],0x140307ddd: SUB RAX, RCX,0x140307de0: SUB RAX, 0x8,0x140307de4: CMP RAX, 0x1f,0x140307de8: JA 0x140307dff,0x140307dea: ADD RDX, 0x27,0x140307dee: CALL 0x1403272f0,0x140307df3: MOV RAX, RBX,0x140307df6: JMP 0x140307e36,0x140307df8: MOV ECX, 0x5,0x140307dfd: INT 0x29,0x140307dff: MOV ECX, 0x5,0x140307e04: INT 0x29,0x140307e06: MOV RCX, RAX,0x140307e09: CALL 0x1403272f0,0x140307e0e: MOV RAX, RBX,0x140307e11: JMP 0x140307e36,0x140307e13: MOV RDX, qword ptr [RBP + -0x18],0x140307e17: MOV RCX, qword ptr [RBP + -0x20],0x140307e1b: MOV RAX, qword ptr [RBP + -0x28],0x140307e1f: MOV R8, qword ptr [RBP + 0x48],0x140307e23: MOV qword ptr [R8], RAX,0x140307e26: MOV qword ptr [R8 + 0x8], RCX,0x140307e2a: MOV qword ptr [R8 + 0x10], RDX,0x140307e2e: MOV byte ptr [R8 + 0x18], 0x1,0x140307e33: MOV RAX, R8,0x140307e36: ADD RSP, 0x58,0x140307e3a: POP R15,0x140307e3c: POP R14,0x140307e3e: POP R13,0x140307e40: POP R12,0x140307e42: POP RDI,0x140307e43: POP RSI,0x140307e44: POP RBX,0x140307e45: POP RBP,0x140307e46: RET,0x140307e47: CALL 0x14000bff0,0x140307e4d: CALL 0x140005500

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140309020 | FUN_140309020 | [object Object] | [object Object] |
| 0x140309ea0 | FUN_140309ea0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x140005500 | FUN_140005500       | [object Object] | [object Object] |
| 0x14000bff0 | FUN_14000bff0       | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0       | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20 | [object Object] | [object Object] |
| 0x140341510 | isspace             | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420       | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140309148    | 0x140307a80    | [object Object]  | [object Object]  | [object Object] |
| 0x14030917c    | 0x140307a80    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a161    | 0x140307a80    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a18e    | 0x140307a80    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6d4c    | 0x140307a80    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x140307a80    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x140307aa1    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307aa6    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307ac6    | 0x140307b74              | [object Object]  | [object Object]  | [object Object] |
| 0x140307acf    | 0x140307e47              | [object Object]  | [object Object]  | [object Object] |
| 0x140307adc    | 0x140307b07              | [object Object]  | [object Object]  | [object Object] |
| 0x140307ae5    | 0x140307e4d              | [object Object]  | [object Object]  | [object Object] |
| 0x140307aeb    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307af3    | 0x140307df8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b05    | 0x140307b12              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b0a    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b12    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307b16    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307b20    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b25    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307b2c    | 0x140307b64              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b2e    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307b3c    | 0x140307b59              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b4d    | 0x140307df8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b57    | 0x140307b5c              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b5f    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b64    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307b68    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307b70    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307b7d    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x140307b84    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x140307b8c    | stack:0xffffffffffffff90 | [object Object]  |                  | [object Object] |
| 0x140307b93    | 0x140307e13              | [object Object]  | [object Object]  | [object Object] |
| 0x140307ba5    | 0x140341510              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bac    | 0x140307d87              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bb5    | 0x140307bc3              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bba    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x140307bbe    | 0x140307d87              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bc6    | 0x140307db8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bd1    | 0x140307bdb              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bd9    | 0x140307bf7              | [object Object]  | [object Object]  | [object Object] |
| 0x140307be0    | 0x140307bea              | [object Object]  | [object Object]  | [object Object] |
| 0x140307be8    | 0x140307bf7              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bef    | 0x140307c01              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bf9    | 0x140307db8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bff    | 0x140307c1b              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c04    | 0x140307c0d              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c0b    | 0x140307c1b              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c10    | 0x140307db8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c29    | 0x140307d84              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c3c    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307c40    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307c47    | 0x140307c55              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c4c    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307c50    | 0x140307d87              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c55    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307c6c    | 0x140307e47              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c76    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x140307c8c    | 0x140307c9d              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c9b    | 0x140307cca              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cae    | 0x140307cb4              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cb2    | 0x140307cf1              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cbb    | 0x140307ce6              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cc4    | 0x140307e4d              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cca    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cd2    | 0x140307df8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307ce4    | 0x140307cf1              | [object Object]  | [object Object]  | [object Object] |
| 0x140307ce9    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cf5    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307cf9    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307d03    | 0x140307d0a              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d08    | 0x140307d26              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d10    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d15    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307d26    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d2b    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307d32    | 0x140307d67              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d34    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307d42    | 0x140307d5f              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d53    | 0x140307df8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d5d    | 0x140307d62              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d62    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d67    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307d6b    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x140307d72    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307d7a    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307d7e    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x140307d82    | 0x140307d87              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d87    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x140307d8e    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x140307d92    | stack:0xffffffffffffff90 | [object Object]  |                  | [object Object] |
| 0x140307d96    | 0x140307ba0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307da0    | 0x140307db8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307da5    | 0x140307e13              | [object Object]  | [object Object]  | [object Object] |
| 0x140307db6    | 0x140307e13              | [object Object]  | [object Object]  | [object Object] |
| 0x140307db8    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x140307dc0    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307dc7    | 0x140307e0e              | [object Object]  | [object Object]  | [object Object] |
| 0x140307dc9    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307dd7    | 0x140307e06              | [object Object]  | [object Object]  | [object Object] |
| 0x140307de8    | 0x140307dff              | [object Object]  | [object Object]  | [object Object] |
| 0x140307dee    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307df6    | 0x140307e36              | [object Object]  | [object Object]  | [object Object] |
| 0x140307e09    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307e11    | 0x140307e36              | [object Object]  | [object Object]  | [object Object] |
| 0x140307e13    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307e17    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307e1b    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307e1f    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x140307e47    | 0x14000bff0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307e4d    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value               | source_address |
|-------------|---------------------|----------------|
| 0x140005500 | FUN_140005500       | 0x140307e4d    |
| 0x14000bff0 | FUN_14000bff0       | 0x140307e47    |
| 0x140307b07 | LAB_140307b07       | 0x140307adc    |
| 0x140307b12 | LAB_140307b12       | 0x140307b05    |
| 0x140307b59 | LAB_140307b59       | 0x140307b3c    |
| 0x140307b5c | LAB_140307b5c       | 0x140307b57    |
| 0x140307b64 | LAB_140307b64       | 0x140307b2c    |
| 0x140307b74 | LAB_140307b74       | 0x140307ac6    |
| 0x140307ba0 | LAB_140307ba0       | 0x140307d96    |
| 0x140307bc3 | LAB_140307bc3       | 0x140307bb5    |
| 0x140307bdb | LAB_140307bdb       | 0x140307bd1    |
| 0x140307bea | LAB_140307bea       | 0x140307be0    |
| 0x140307bf7 | LAB_140307bf7       | 0x140307bd9    |
| 0x140307bf7 | LAB_140307bf7       | 0x140307be8    |
| 0x140307c01 | LAB_140307c01       | 0x140307bef    |
| 0x140307c0d | LAB_140307c0d       | 0x140307c04    |
| 0x140307c1b | LAB_140307c1b       | 0x140307bff    |
| 0x140307c1b | LAB_140307c1b       | 0x140307c0b    |
| 0x140307c55 | LAB_140307c55       | 0x140307c47    |
| 0x140307c9d | LAB_140307c9d       | 0x140307c8c    |
| 0x140307cb4 | LAB_140307cb4       | 0x140307cae    |
| 0x140307cca | LAB_140307cca       | 0x140307c9b    |
| 0x140307ce6 | LAB_140307ce6       | 0x140307cbb    |
| 0x140307cf1 | LAB_140307cf1       | 0x140307cb2    |
| 0x140307cf1 | LAB_140307cf1       | 0x140307ce4    |
| 0x140307d0a | LAB_140307d0a       | 0x140307d03    |
| 0x140307d26 | LAB_140307d26       | 0x140307d08    |
| 0x140307d5f | LAB_140307d5f       | 0x140307d42    |
| 0x140307d62 | LAB_140307d62       | 0x140307d5d    |
| 0x140307d67 | LAB_140307d67       | 0x140307d32    |
| 0x140307d84 | LAB_140307d84       | 0x140307c29    |
| 0x140307d87 | LAB_140307d87       | 0x140307bac    |
| 0x140307d87 | LAB_140307d87       | 0x140307bbe    |
| 0x140307d87 | LAB_140307d87       | 0x140307c50    |
| 0x140307d87 | LAB_140307d87       | 0x140307d82    |
| 0x140307db8 | LAB_140307db8       | 0x140307bc6    |
| 0x140307db8 | LAB_140307db8       | 0x140307bf9    |
| 0x140307db8 | LAB_140307db8       | 0x140307c10    |
| 0x140307db8 | LAB_140307db8       | 0x140307da0    |
| 0x140307df8 | LAB_140307df8       | 0x140307af3    |
| 0x140307df8 | LAB_140307df8       | 0x140307b4d    |
| 0x140307df8 | LAB_140307df8       | 0x140307cd2    |
| 0x140307df8 | LAB_140307df8       | 0x140307d53    |
| 0x140307dff | LAB_140307dff       | 0x140307de8    |
| 0x140307e06 | LAB_140307e06       | 0x140307dd7    |
| 0x140307e0e | LAB_140307e0e       | 0x140307dc7    |
| 0x140307e13 | LAB_140307e13       | 0x140307b93    |
| 0x140307e13 | LAB_140307e13       | 0x140307da5    |
| 0x140307e13 | LAB_140307e13       | 0x140307db6    |
| 0x140307e36 | LAB_140307e36       | 0x140307df6    |
| 0x140307e36 | LAB_140307e36       | 0x140307e11    |
| 0x140307e47 | LAB_140307e47       | 0x140307acf    |
| 0x140307e47 | LAB_140307e47       | 0x140307c6c    |
| 0x140307e4d | LAB_140307e4d       | 0x140307ae5    |
| 0x140307e4d | LAB_140307e4d       | 0x140307cc4    |
| 0x1403272a0 | FUN_1403272a0       | 0x140307aeb    |
| 0x1403272a0 | FUN_1403272a0       | 0x140307b0a    |
| 0x1403272a0 | FUN_1403272a0       | 0x140307cca    |
| 0x1403272a0 | FUN_1403272a0       | 0x140307ce9    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140307b5f    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140307d62    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140307dee    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140307e09    |
| 0x140341510 | isspace             | 0x140307ba5    |
| 0x14035f420 | FUN_14035f420       | 0x140307b20    |
| 0x14035f420 | FUN_14035f420       | 0x140307d10    |
| 0x14035f420 | FUN_14035f420       | 0x140307d26    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140307a80 | 0x140307acc | 0x140307acc,0x140307b74 |
| 0x140307acc | 0x140307ad5 | 0x140307ad5,0x140307e47 |
| 0x140307ad5 | 0x140307ade | 0x140307ade,0x140307b07 |
| 0x140307ade | 0x140307aeb | 0x140307aeb,0x140307e4d |
| 0x140307aeb | 0x140307af9 | 0x140307af9,0x140307df8 |
| 0x140307af9 | 0x140307b07 | 0x140307b12             |
| 0x140307b07 | 0x140307b12 | 0x140307b12             |
| 0x140307b12 | 0x140307b2e | 0x140307b2e,0x140307b64 |
| 0x140307b2e | 0x140307b3e | 0x140307b3e,0x140307b59 |
| 0x140307b3e | 0x140307b53 | 0x140307b53,0x140307df8 |
| 0x140307b53 | 0x140307b59 | 0x140307b5c             |
| 0x140307b59 | 0x140307b5c | 0x140307b5c             |
| 0x140307b5c | 0x140307b64 | 0x140307b64             |
| 0x140307b64 | 0x140307b74 | 0x140307b74             |
| 0x140307b74 | 0x140307b99 | 0x140307b99,0x140307e13 |
| 0x140307b99 | 0x140307ba0 | 0x140307ba0             |
| 0x140307ba0 | 0x140307bb2 | 0x140307bb2,0x140307d87 |
| 0x140307bb2 | 0x140307bb7 | 0x140307bb7,0x140307bc3 |
| 0x140307bb7 | 0x140307bc3 | 0x140307d87             |
| 0x140307bc3 | 0x140307bcc | 0x140307bcc,0x140307db8 |
| 0x140307bcc | 0x140307bd3 | 0x140307bd3,0x140307bdb |
| 0x140307bd3 | 0x140307bdb | 0x140307bf7             |
| 0x140307bdb | 0x140307be2 | 0x140307be2,0x140307bea |
| 0x140307be2 | 0x140307bea | 0x140307bf7             |
| 0x140307bea | 0x140307bf1 | 0x140307bf1,0x140307c01 |
| 0x140307bf1 | 0x140307bf7 | 0x140307bf7             |
| 0x140307bf7 | 0x140307bff | 0x140307bff,0x140307db8 |
| 0x140307bff | 0x140307c01 | 0x140307c1b             |
| 0x140307c01 | 0x140307c06 | 0x140307c06,0x140307c0d |
| 0x140307c06 | 0x140307c0d | 0x140307c1b             |
| 0x140307c0d | 0x140307c16 | 0x140307c16,0x140307db8 |
| 0x140307c16 | 0x140307c1b | 0x140307c1b             |
| 0x140307c1b | 0x140307c2f | 0x140307c2f,0x140307d84 |
| 0x140307c2f | 0x140307c49 | 0x140307c49,0x140307c55 |
| 0x140307c49 | 0x140307c55 | 0x140307d87             |
| 0x140307c55 | 0x140307c72 | 0x140307c72,0x140307e47 |
| 0x140307c72 | 0x140307c8e | 0x140307c8e,0x140307c9d |
| 0x140307c8e | 0x140307c9d | 0x140307cca             |
| 0x140307c9d | 0x140307cb0 | 0x140307cb0,0x140307cb4 |
| 0x140307cb0 | 0x140307cb4 | 0x140307cf1             |
| 0x140307cb4 | 0x140307cbd | 0x140307cbd,0x140307ce6 |
| 0x140307cbd | 0x140307cca | 0x140307cca,0x140307e4d |
| 0x140307cca | 0x140307cd8 | 0x140307cd8,0x140307df8 |
| 0x140307cd8 | 0x140307ce6 | 0x140307cf1             |
| 0x140307ce6 | 0x140307cf1 | 0x140307cf1             |
| 0x140307cf1 | 0x140307d05 | 0x140307d05,0x140307d0a |
| 0x140307d05 | 0x140307d0a | 0x140307d26             |
| 0x140307d0a | 0x140307d26 | 0x140307d26             |
| 0x140307d26 | 0x140307d34 | 0x140307d34,0x140307d67 |
| 0x140307d34 | 0x140307d44 | 0x140307d44,0x140307d5f |
| 0x140307d44 | 0x140307d59 | 0x140307d59,0x140307df8 |
| 0x140307d59 | 0x140307d5f | 0x140307d62             |
| 0x140307d5f | 0x140307d62 | 0x140307d62             |
| 0x140307d62 | 0x140307d67 | 0x140307d67             |
| 0x140307d67 | 0x140307d84 | 0x140307d87             |
| 0x140307d84 | 0x140307d87 | 0x140307d87             |
| 0x140307d87 | 0x140307d9c | 0x140307ba0,0x140307d9c |
| 0x140307d9c | 0x140307da2 | 0x140307da2,0x140307db8 |
| 0x140307da2 | 0x140307da7 | 0x140307da7,0x140307e13 |
| 0x140307da7 | 0x140307db8 | 0x140307db8,0x140307e13 |
| 0x140307db8 | 0x140307dc9 | 0x140307dc9,0x140307e0e |
| 0x140307dc9 | 0x140307dd9 | 0x140307dd9,0x140307e06 |
| 0x140307dd9 | 0x140307dea | 0x140307dea,0x140307dff |
| 0x140307dea | 0x140307df8 | 0x140307e36             |
| 0x140307df8 | 0x140307dff | 0x140307dff             |
| 0x140307dff | 0x140307e06 | 0x140307e06             |
| 0x140307e06 | 0x140307e0e | 0x140307e0e             |
| 0x140307e0e | 0x140307e13 | 0x140307e36             |
| 0x140307e13 | 0x140307e36 | 0x140307e36             |
| 0x140307e36 | 0x140307e47 |                         |
| 0x140307e47 | 0x140307e4c |                         |
| 0x140307e4d | 0x140307e52 |                         |

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

longlong *

## raw_result.value.native_api.return_type.size_bytes

8

## raw_result.value.native_api.return_type.storage

RAX:8

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                       |
|------------------|-------------------------|----------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.        |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type longlong *. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters

| role      | ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | longlong *   | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | undefined8 * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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

| id               | address     | sequence | opcode        | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|---------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x140307a94#3904 | 0x140307a94 | 3904     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307a94#3905 | 0x140307a94 | 3905     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307a9b#2818 | 0x140307a9b | 2818     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307aa1#3306 | 0x140307aa1 | 3306     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307aa1#3307 | 0x140307aa1 | 3307     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307aa6#57   | 0x140307aa6 | 57       | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307aaa#59   | 0x140307aaa | 59       | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307aaa#3906 | 0x140307aaa | 3906     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307ab1#64   | 0x140307ab1 | 64       | INT_RIGHT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ab5#3202 | 0x140307ab5 | 3202     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ac3#111  | 0x140307ac3 | 111      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ac6#116  | 0x140307ac6 | 116      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307acf#128  | 0x140307acf | 128      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307acf#129  | 0x140307acf | 129      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307ad5#131  | 0x140307ad5 | 131      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307adc#140  | 0x140307adc | 140      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307ade#141  | 0x140307ade | 141      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ae5#153  | 0x140307ae5 | 153      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ae5#154  | 0x140307ae5 | 154      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307aeb#157  | 0x140307aeb | 157      | CALL          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307aeb#3480 | 0x140307aeb | 3480     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307aeb#3514 | 0x140307aeb | 3514     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307aeb#3548 | 0x140307aeb | 3548     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307aeb#3582 | 0x140307aeb | 3582     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307af0#162  | 0x140307af0 | 162      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307af3#167  | 0x140307af3 | 167      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307af9#168  | 0x140307af9 | 168      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307afd#172  | 0x140307afd | 172      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307afd#3953 | 0x140307afd | 3953     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b01#181  | 0x140307b01 | 181      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307b01#3907 | 0x140307b01 | 3907     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307b05#182  | 0x140307b05 | 182      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307b0a#1322 | 0x140307b0a | 1322     | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b0a#3479 | 0x140307b0a | 3479     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b0a#3513 | 0x140307b0a | 3513     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b0a#3547 | 0x140307b0a | 3547     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b0a#3581 | 0x140307b0a | 3581     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b0a#3952 | 0x140307b0a | 3952     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b12#2603 | 0x140307b12 | 2603     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b12#3504 | 0x140307b12 | 3504     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b12#3537 | 0x140307b12 | 3537     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b12#3571 | 0x140307b12 | 3571     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b12#3605 | 0x140307b12 | 3605     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b1a#191  | 0x140307b1a | 191      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b1a#3954 | 0x140307b1a | 3954     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b1a#3955 | 0x140307b1a | 3955     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b20#201  | 0x140307b20 | 201      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x140307b20#3481 | 0x140307b20 | 3481     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b20#3515 | 0x140307b20 | 3515     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b20#3549 | 0x140307b20 | 3549     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b20#3583 | 0x140307b20 | 3583     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b29#209  | 0x140307b29 | 209      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b2c#214  | 0x140307b2c | 214      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307b32#220  | 0x140307b32 | 220      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b32#3956 | 0x140307b32 | 3956     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b32#3957 | 0x140307b32 | 3957     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b35#228  | 0x140307b35 | 228      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b3c#237  | 0x140307b3c | 237      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307b3c#3929 | 0x140307b3c | 3929     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b3e#239  | 0x140307b3e | 239      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b3e#3908 | 0x140307b3e | 3908     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307b3e#3958 | 0x140307b3e | 3958     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b45#252  | 0x140307b45 | 252      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b45#3909 | 0x140307b45 | 3909     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b45#3959 | 0x140307b45 | 3959     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b4d#269  | 0x140307b4d | 269      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b4d#271  | 0x140307b4d | 271      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307b4d#3960 | 0x140307b4d | 3960     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b53#274  | 0x140307b53 | 274      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b57#281  | 0x140307b57 | 281      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307b57#3928 | 0x140307b57 | 3928     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b5c#2498 | 0x140307b5c | 2498     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b5c#2576 | 0x140307b5c | 2576     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b5f#285  | 0x140307b5f | 285      | CALL          | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307b5f#3516 | 0x140307b5f | 3516     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b5f#3550 | 0x140307b5f | 3550     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b5f#3584 | 0x140307b5f | 3584     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b6c#293  | 0x140307b6c | 293      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b6c#3961 | 0x140307b6c | 3961     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b6c#3962 | 0x140307b6c | 3962     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b70#3951 | 0x140307b70 | 3951     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b74#3572 | 0x140307b74 | 3572     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b74#3606 | 0x140307b74 | 3606     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b7d#305  | 0x140307b7d | 305      | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b81#306  | 0x140307b81 | 306      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b81#3963 | 0x140307b81 | 3963     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b88#312  | 0x140307b88 | 312      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307b90#321  | 0x140307b90 | 321      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b93#326  | 0x140307b93 | 326      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307b93#3943 | 0x140307b93 | 3943     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b93#3944 | 0x140307b93 | 3944     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b93#3949 | 0x140307b93 | 3949     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307ba0#327  | 0x140307ba0 | 327      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#2503 | 0x140307ba0 | 2503     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#2596 | 0x140307ba0 | 2596     | INT_ZEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307ba0#2652 | 0x140307ba0 | 2652     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#2752 | 0x140307ba0 | 2752     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#2782 | 0x140307ba0 | 2782     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#3369 | 0x140307ba0 | 3369     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#3505 | 0x140307ba0 | 3505     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#3539 | 0x140307ba0 | 3539     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#3573 | 0x140307ba0 | 3573     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#3607 | 0x140307ba0 | 3607     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#334  | 0x140307ba5 | 334      | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#3483 | 0x140307ba5 | 3483     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#3517 | 0x140307ba5 | 3517     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#3551 | 0x140307ba5 | 3551     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#3585 | 0x140307ba5 | 3585     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#3927 | 0x140307ba5 | 3927     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307baa#339  | 0x140307baa | 339      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bac#345  | 0x140307bac | 345      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307bac#3939 | 0x140307bac | 3939     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bac#3945 | 0x140307bac | 3945     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bb2#351  | 0x140307bb2 | 351      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bb5#357  | 0x140307bb5 | 357      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307bb7#359  | 0x140307bb7 | 359      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bbe#369  | 0x140307bbe | 369      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307bbe#3940 | 0x140307bbe | 3940     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bbe#3946 | 0x140307bbe | 3946     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bc3#658  | 0x140307bc3 | 658      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bc6#664  | 0x140307bc6 | 664      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307bcc#3224 | 0x140307bcc | 3224     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bd1#677  | 0x140307bd1 | 677      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bd1#679  | 0x140307bd1 | 679      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307bd1#3964 | 0x140307bd1 | 3964     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bd3#680  | 0x140307bd3 | 680      | INT_SEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bd3#3969 | 0x140307bd3 | 3969     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bd6#684  | 0x140307bd6 | 684      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bd9#692  | 0x140307bd9 | 692      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307bdb#3225 | 0x140307bdb | 3225     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307be0#1248 | 0x140307be0 | 1248     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307be0#1250 | 0x140307be0 | 1250     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307be0#3965 | 0x140307be0 | 3965     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307be2#1251 | 0x140307be2 | 1251     | INT_SEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307be2#3966 | 0x140307be2 | 3966     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307be5#1255 | 0x140307be5 | 1255     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307be8#1263 | 0x140307be8 | 1263     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307bea#3226 | 0x140307bea | 3226     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bef#1276 | 0x140307bef | 1276     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bef#1278 | 0x140307bef | 1278     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307bef#3967 | 0x140307bef | 3967     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bf1#1279 | 0x140307bf1 | 1279     | INT_SEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bf1#3968 | 0x140307bf1 | 3968     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bf4#1283 | 0x140307bf4 | 1283     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bf7#696  | 0x140307bf7 | 696      | INT_SLESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bf7#3234 | 0x140307bf7 | 3234     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307bf7#3970 | 0x140307bf7 | 3970     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bf9#702  | 0x140307bf9 | 702      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c01#1296 | 0x140307c01 | 1296     | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c04#1302 | 0x140307c04 | 1302     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c06#3237 | 0x140307c06 | 3237     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c0b#1304 | 0x140307c0b | 1304     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307c0d#1310 | 0x140307c0d | 1310     | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c10#1316 | 0x140307c10 | 1316     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c16#3236 | 0x140307c16 | 3236     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c1b#706  | 0x140307c1b | 706      | INT_LEFT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c1b#2730 | 0x140307c1b | 2730     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c1b#3235 | 0x140307c1b | 3235     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307c1f#748  | 0x140307c1f | 748      | INT_OR        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c1f#2747 | 0x140307c1f | 2747     | INT_ZEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c22#756  | 0x140307c22 | 756      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c22#3251 | 0x140307c22 | 3251     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c29#769  | 0x140307c29 | 769      | INT_SLESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c29#770  | 0x140307c29 | 770      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c29#3971 | 0x140307c29 | 3971     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c2f#773  | 0x140307c2f | 773      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c2f#2775 | 0x140307c2f | 2775     | INT_ZEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c39#785  | 0x140307c39 | 785      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c39#787  | 0x140307c39 | 787      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c39#2505 | 0x140307c39 | 2505     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c44#838  | 0x140307c44 | 838      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c47#843  | 0x140307c47 | 843      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c47#3262 | 0x140307c47 | 3262     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c49#845  | 0x140307c49 | 845      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307c49#4003 | 0x140307c49 | 4003     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c4c#850  | 0x140307c4c | 850      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c4c#4004 | 0x140307c4c | 4004     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c4c#4005 | 0x140307c4c | 4005     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c50#861  | 0x140307c50 | 861      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307c50#3941 | 0x140307c50 | 3941     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c50#3947 | 0x140307c50 | 3947     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c5c#868  | 0x140307c5c | 868      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c5c#3972 | 0x140307c5c | 3972     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c5c#3973 | 0x140307c5c | 3973     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c69#881  | 0x140307c69 | 881      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c6c#886  | 0x140307c6c | 886      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c72#887  | 0x140307c72 | 887      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c72#3974 | 0x140307c72 | 3974     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c7a#894  | 0x140307c7a | 894      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c7a#3975 | 0x140307c7a | 3975     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c7a#3976 | 0x140307c7a | 3976     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c80#905  | 0x140307c80 | 905      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c86#915  | 0x140307c86 | 915      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c8c#932  | 0x140307c8c | 932      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c8c#933  | 0x140307c8c | 933      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c8e#934  | 0x140307c8e | 934      | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c91#935  | 0x140307c91 | 935      | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c9b#936  | 0x140307c9b | 936      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307c9d#1154 | 0x140307c9d | 1154     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c9d#3977 | 0x140307c9d | 3977     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307ca4#1158 | 0x140307ca4 | 1158     | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ca7#1170 | 0x140307ca7 | 1170     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307ca7#3935 | 0x140307ca7 | 3935     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307ca7#3936 | 0x140307ca7 | 3936     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cab#1176 | 0x140307cab | 1176     | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cab#2597 | 0x140307cab | 2597     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cae#1182 | 0x140307cae | 1182     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307cb0#2648 | 0x140307cb0 | 2648     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cb2#1193 | 0x140307cb2 | 1193     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307cb4#1195 | 0x140307cb4 | 1195     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cbb#1204 | 0x140307cbb | 1204     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307cbd#1205 | 0x140307cbd | 1205     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cbd#3978 | 0x140307cbd | 3978     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cbd#3979 | 0x140307cbd | 3979     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cc4#1217 | 0x140307cc4 | 1217     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cc4#1218 | 0x140307cc4 | 1218     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307cca#939  | 0x140307cca | 939      | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#2537 | 0x140307cca | 2537     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#2600 | 0x140307cca | 2600     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#3487 | 0x140307cca | 3487     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#3521 | 0x140307cca | 3521     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#3555 | 0x140307cca | 3555     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#3589 | 0x140307cca | 3589     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ccf#944  | 0x140307ccf | 944      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cd2#949  | 0x140307cd2 | 949      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307cd8#950  | 0x140307cd8 | 950      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cdc#954  | 0x140307cdc | 954      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cdc#3981 | 0x140307cdc | 3981     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307ce0#963  | 0x140307ce0 | 963      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307ce0#3910 | 0x140307ce0 | 3910     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307ce4#964  | 0x140307ce4 | 964      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307ce9#1227 | 0x140307ce9 | 1227     | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ce9#3485 | 0x140307ce9 | 3485     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ce9#3519 | 0x140307ce9 | 3519     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ce9#3553 | 0x140307ce9 | 3553     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ce9#3587 | 0x140307ce9 | 3587     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ce9#3980 | 0x140307ce9 | 3980     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cf1#966  | 0x140307cf1 | 966      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cf1#968  | 0x140307cf1 | 968      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307cf1#2598 | 0x140307cf1 | 2598     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#2649 | 0x140307cf1 | 2649     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#3497 | 0x140307cf1 | 3497     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#3531 | 0x140307cf1 | 3531     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#3565 | 0x140307cf1 | 3565     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#3599 | 0x140307cf1 | 3599     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#3982 | 0x140307cf1 | 3982     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cf1#3983 | 0x140307cf1 | 3983     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d00#981  | 0x140307d00 | 981      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d03#987  | 0x140307d03 | 987      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307d05#990  | 0x140307d05 | 990      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d05#3990 | 0x140307d05 | 3990     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d05#3991 | 0x140307d05 | 3991     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d08#997  | 0x140307d08 | 997      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307d08#3933 | 0x140307d08 | 3933     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d08#3934 | 0x140307d08 | 3934     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d0d#1119 | 0x140307d0d | 1119     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d0d#3984 | 0x140307d0d | 3984     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d0d#3985 | 0x140307d0d | 3985     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d10#1128 | 0x140307d10 | 1128     | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x140307d10#3488 | 0x140307d10 | 3488     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d10#3522 | 0x140307d10 | 3522     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d10#3556 | 0x140307d10 | 3556     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d10#3590 | 0x140307d10 | 3590     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d19#1134 | 0x140307d19 | 1134     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d19#3986 | 0x140307d19 | 3986     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d19#3987 | 0x140307d19 | 3987     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d1c#1141 | 0x140307d1c | 1141     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d20#1145 | 0x140307d20 | 1145     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d20#3988 | 0x140307d20 | 3988     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d20#3989 | 0x140307d20 | 3989     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d26#1000 | 0x140307d26 | 1000     | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x140307d26#2539 | 0x140307d26 | 2539     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#2573 | 0x140307d26 | 2573     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#2681 | 0x140307d26 | 2681     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3489 | 0x140307d26 | 3489     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3500 | 0x140307d26 | 3500     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3523 | 0x140307d26 | 3523     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3534 | 0x140307d26 | 3534     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3557 | 0x140307d26 | 3557     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3568 | 0x140307d26 | 3568     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3591 | 0x140307d26 | 3591     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3602 | 0x140307d26 | 3602     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d2f#1008 | 0x140307d2f | 1008     | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d32#1013 | 0x140307d32 | 1013     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307d38#1019 | 0x140307d38 | 1019     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d38#3992 | 0x140307d38 | 3992     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d38#3993 | 0x140307d38 | 3993     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d3b#1027 | 0x140307d3b | 1027     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d42#1036 | 0x140307d42 | 1036     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307d42#3932 | 0x140307d42 | 3932     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d44#1038 | 0x140307d44 | 1038     | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d44#3911 | 0x140307d44 | 3911     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307d44#3994 | 0x140307d44 | 3994     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d4b#1051 | 0x140307d4b | 1051     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d4b#3912 | 0x140307d4b | 3912     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d4b#3995 | 0x140307d4b | 3995     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d53#1068 | 0x140307d53 | 1068     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d53#1070 | 0x140307d53 | 1070     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307d53#3996 | 0x140307d53 | 3996     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d59#1073 | 0x140307d59 | 1073     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d5d#1080 | 0x140307d5d | 1080     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307d5d#3931 | 0x140307d5d | 3931     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d62#1083 | 0x140307d62 | 1083     | CALL          | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307d62#2533 | 0x140307d62 | 2533     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d62#2568 | 0x140307d62 | 2568     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d62#3491 | 0x140307d62 | 3491     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d62#3525 | 0x140307d62 | 3525     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d62#3559 | 0x140307d62 | 3559     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d62#3593 | 0x140307d62 | 3593     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d67#3496 | 0x140307d67 | 3496     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d6f#1092 | 0x140307d6f | 1092     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d6f#3997 | 0x140307d6f | 3997     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d6f#3998 | 0x140307d6f | 3998     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d6f#3999 | 0x140307d6f | 3999     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d76#1103 | 0x140307d76 | 1103     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d76#4000 | 0x140307d76 | 4000     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d76#4001 | 0x140307d76 | 4001     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d76#4002 | 0x140307d76 | 4002     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d82#1111 | 0x140307d82 | 1111     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307d82#3942 | 0x140307d82 | 3942     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d82#3948 | 0x140307d82 | 3948     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d84#2777 | 0x140307d84 | 2777     | INT_ZEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d87#2650 | 0x140307d87 | 2650     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#2748 | 0x140307d87 | 2748     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#2778 | 0x140307d87 | 2778     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#3362 | 0x140307d87 | 3362     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#3498 | 0x140307d87 | 3498     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#3532 | 0x140307d87 | 3532     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#3566 | 0x140307d87 | 3566     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#3600 | 0x140307d87 | 3600     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d8b#374  | 0x140307d8b | 374      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307d92#391  | 0x140307d92 | 391      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d96#397  | 0x140307d96 | 397      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307da0#408  | 0x140307da0 | 408      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307da0#410  | 0x140307da0 | 410      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307da2#2760 | 0x140307da2 | 2760     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307da5#421  | 0x140307da5 | 421      | INT_SLESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307da5#422  | 0x140307da5 | 422      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307daf#426  | 0x140307daf | 426      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307daf#428  | 0x140307daf | 428      | INT_LEFT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307daf#2504 | 0x140307daf | 2504     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307db1#469  | 0x140307db1 | 469      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307db3#479  | 0x140307db3 | 479      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307db3#481  | 0x140307db3 | 481      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307db3#2728 | 0x140307db3 | 2728     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307db6#486  | 0x140307db6 | 486      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307db8#3506 | 0x140307db8 | 3506     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307db8#3540 | 0x140307db8 | 3540     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307db8#3574 | 0x140307db8 | 3574     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307db8#3608 | 0x140307db8 | 3608     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307dbc#492  | 0x140307dbc | 492      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307dbc#3913 | 0x140307dbc | 3913     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307dbc#4006 | 0x140307dbc | 4006     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dc4#500  | 0x140307dc4 | 500      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dc7#505  | 0x140307dc7 | 505      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307dcd#511  | 0x140307dcd | 511      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dcd#4007 | 0x140307dcd | 4007     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dcd#4008 | 0x140307dcd | 4008     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dd0#519  | 0x140307dd0 | 519      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dd0#4009 | 0x140307dd0 | 4009     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dd7#528  | 0x140307dd7 | 528      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307dd7#3930 | 0x140307dd7 | 3930     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dd9#530  | 0x140307dd9 | 530      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dd9#3914 | 0x140307dd9 | 3914     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307de0#543  | 0x140307de0 | 543      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307de0#3915 | 0x140307de0 | 3915     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307de0#4010 | 0x140307de0 | 4010     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307de8#560  | 0x140307de8 | 560      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307de8#562  | 0x140307de8 | 562      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307de8#3937 | 0x140307de8 | 3937     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307de8#4011 | 0x140307de8 | 4011     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dea#565  | 0x140307dea | 565      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dee#574  | 0x140307dee | 574      | CALL          | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307dee#3494 | 0x140307dee | 3494     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dee#3528 | 0x140307dee | 3528     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dee#3562 | 0x140307dee | 3562     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dee#3596 | 0x140307dee | 3596     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307df8#2601 | 0x140307df8 | 2601     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307df8#3499 | 0x140307df8 | 3499     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307df8#3533 | 0x140307df8 | 3533     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307df8#3567 | 0x140307df8 | 3567     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307df8#3601 | 0x140307df8 | 3601     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307dfd#1113 | 0x140307dfd | 1113     | CALLOTHER     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#1114 | 0x140307dfd | 1114     | CALLIND       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307dfd#3490 | 0x140307dfd | 3490     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#3524 | 0x140307dfd | 3524     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#3558 | 0x140307dfd | 3558     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#3592 | 0x140307dfd | 3592     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#3916 | 0x140307dfd | 3916     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#3938 | 0x140307dfd | 3938     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dfd#4016 | 0x140307dfd | 4016     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dff#2610 | 0x140307dff | 2610     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dff#2627 | 0x140307dff | 2627     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dff#3510 | 0x140307dff | 3510     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dff#3544 | 0x140307dff | 3544     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dff#3578 | 0x140307dff | 3578     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dff#3612 | 0x140307dff | 3612     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#622  | 0x140307e04 | 622      | CALLOTHER     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#623  | 0x140307e04 | 623      | CALLIND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#1339 | 0x140307e04 | 1339     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e04#3492 | 0x140307e04 | 3492     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#3526 | 0x140307e04 | 3526     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#3560 | 0x140307e04 | 3560     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#3594 | 0x140307e04 | 3594     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#4017 | 0x140307e04 | 4017     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e04#4018 | 0x140307e04 | 4018     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e06#2502 | 0x140307e06 | 2502     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#2609 | 0x140307e06 | 2609     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#2626 | 0x140307e06 | 2626     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#3509 | 0x140307e06 | 3509     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#3543 | 0x140307e06 | 3543     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#3577 | 0x140307e06 | 3577     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#3611 | 0x140307e06 | 3611     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e09#625  | 0x140307e09 | 625      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e09#626  | 0x140307e09 | 626      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307e09#627  | 0x140307e09 | 627      | CALL          | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307e09#3493 | 0x140307e09 | 3493     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e09#3527 | 0x140307e09 | 3527     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e09#3561 | 0x140307e09 | 3561     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e09#3595 | 0x140307e09 | 3595     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e09#4019 | 0x140307e09 | 4019     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e13#3541 | 0x140307e13 | 3541     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e13#3575 | 0x140307e13 | 3575     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e13#3609 | 0x140307e13 | 3609     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e23#643  | 0x140307e23 | 643      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307e23#4012 | 0x140307e23 | 4012     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e26#646  | 0x140307e26 | 646      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307e26#3917 | 0x140307e26 | 3917     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e26#4013 | 0x140307e26 | 4013     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e2a#649  | 0x140307e2a | 649      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307e2a#3918 | 0x140307e2a | 3918     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e2a#4014 | 0x140307e2a | 4014     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e2e#652  | 0x140307e2e | 652      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307e2e#3919 | 0x140307e2e | 3919     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e2e#4015 | 0x140307e2e | 4015     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e36#2494 | 0x140307e36 | 2494     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e36#3923 | 0x140307e36 | 3923     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e36#3925 | 0x140307e36 | 3925     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e46#620  | 0x140307e46 | 620      | RETURN        | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307e46#3924 | 0x140307e46 | 3924     | RETURN        | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307e46#3926 | 0x140307e46 | 3926     | RETURN        | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307e47#1231 | 0x140307e47 | 1231     | CALL          | true    | member           | [object Object]                                                                 |                 |
| 0x140307e47#1233 | 0x140307e47 | 1233     | RETURN        | true    | member           | [object Object]                                                                 |                 |
| 0x140307e47#3484 | 0x140307e47 | 3484     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3511 | 0x140307e47 | 3511     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3518 | 0x140307e47 | 3518     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3545 | 0x140307e47 | 3545     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3552 | 0x140307e47 | 3552     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3579 | 0x140307e47 | 3579     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3586 | 0x140307e47 | 3586     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3613 | 0x140307e47 | 3613     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#1221 | 0x140307e4d | 1221     | CALL          | true    | member           | [object Object]                                                                 |                 |
| 0x140307e4d#1223 | 0x140307e4d | 1223     | RETURN        | true    | member           | [object Object]                                                                 |                 |
| 0x140307e4d#3486 | 0x140307e4d | 3486     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3512 | 0x140307e4d | 3512     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3520 | 0x140307e4d | 3520     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3546 | 0x140307e4d | 3546     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3554 | 0x140307e4d | 3554     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3580 | 0x140307e4d | 3580     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3588 | 0x140307e4d | 3588     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3614 | 0x140307e4d | 3614     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x140307aaa#3906 | 0x140307aaa#59   | 1           |
| 0x140307aaa#59   | 0x140307ab1#64   | 0           |
| 0x140307ab1#64   | 0x140307ab5#3202 | 0           |
| 0x140307ab5#3202 | 0x140307ac3#111  | 0           |
| 0x140307ac3#111  | 0x140307ac6#116  | 1           |
| 0x140307ab5#3202 | 0x140307acf#128  | 1           |
| 0x140307acf#128  | 0x140307acf#129  | 1           |
| 0x140307ab5#3202 | 0x140307ad5#131  | 0           |
| 0x140307ad5#131  | 0x140307adc#140  | 1           |
| 0x140307ab5#3202 | 0x140307ade#141  | 0           |
| 0x140307ade#141  | 0x140307ae5#153  | 0           |
| 0x140307ab5#3202 | 0x140307ae5#153  | 1           |
| 0x140307ae5#153  | 0x140307ae5#154  | 1           |
| 0x140307aa1#3306 | 0x140307aeb#3514 | 0           |
| 0x140307aa1#3307 | 0x140307aeb#3548 | 0           |
| 0x140307aa6#57   | 0x140307aeb#3582 | 0           |
| 0x140307aeb#157  | 0x140307af0#162  | 0           |
| 0x140307af0#162  | 0x140307af3#167  | 1           |
| 0x140307aeb#157  | 0x140307af9#168  | 0           |
| 0x140307af9#168  | 0x140307afd#172  | 0           |
| 0x140307afd#172  | 0x140307afd#3953 | 0           |
| 0x140307b01#3907 | 0x140307b01#181  | 1           |
| 0x140307aeb#157  | 0x140307b01#181  | 2           |
| 0x140307afd#3953 | 0x140307b01#3907 | 0           |
| 0x140307ab5#3202 | 0x140307b0a#1322 | 1           |
| 0x140307aa1#3306 | 0x140307b0a#3513 | 0           |
| 0x140307aa1#3307 | 0x140307b0a#3547 | 0           |
| 0x140307aa6#57   | 0x140307b0a#3581 | 0           |
| 0x140307b0a#1322 | 0x140307b0a#3952 | 0           |
| 0x140307afd#3953 | 0x140307b12#2603 | 0           |
| 0x140307b0a#3952 | 0x140307b12#2603 | 1           |
| 0x140307aeb#3480 | 0x140307b12#3504 | 0           |
| 0x140307b0a#3479 | 0x140307b12#3504 | 1           |
| 0x140307aeb#3514 | 0x140307b12#3537 | 0           |
| 0x140307b0a#3513 | 0x140307b12#3537 | 1           |
| 0x140307aeb#3548 | 0x140307b12#3571 | 0           |
| 0x140307b0a#3547 | 0x140307b12#3571 | 1           |
| 0x140307aeb#3582 | 0x140307b12#3605 | 0           |
| 0x140307b0a#3581 | 0x140307b12#3605 | 1           |
| 0x140307b1a#3954 | 0x140307b1a#191  | 0           |
| 0x140307b1a#3955 | 0x140307b1a#191  | 1           |
| 0x140307b12#3571 | 0x140307b1a#3954 | 0           |
| 0x140307b12#3537 | 0x140307b1a#3955 | 0           |
| 0x140307b12#2603 | 0x140307b20#201  | 1           |
| 0x140307b12#3537 | 0x140307b20#201  | 2           |
| 0x140307b1a#191  | 0x140307b20#201  | 3           |
| 0x140307b12#3504 | 0x140307b20#3481 | 0           |
| 0x140307b12#3537 | 0x140307b20#3515 | 0           |
| 0x140307b12#3571 | 0x140307b20#3549 | 0           |
| 0x140307b12#3605 | 0x140307b20#3583 | 0           |
| 0x140307b20#3515 | 0x140307b29#209  | 0           |
| 0x140307b29#209  | 0x140307b2c#214  | 1           |
| 0x140307b32#3956 | 0x140307b32#220  | 0           |
| 0x140307b32#3957 | 0x140307b32#220  | 1           |
| 0x140307b20#3583 | 0x140307b32#3956 | 0           |
| 0x140307b20#3515 | 0x140307b32#3957 | 0           |
| 0x140307b32#220  | 0x140307b35#228  | 1           |
| 0x140307b35#228  | 0x140307b3c#237  | 1           |
| 0x140307b20#3515 | 0x140307b3c#3929 | 0           |
| 0x140307b3e#3908 | 0x140307b3e#239  | 1           |
| 0x140307b20#3515 | 0x140307b3e#3908 | 0           |
| 0x140307b3e#239  | 0x140307b3e#3958 | 0           |
| 0x140307b45#3959 | 0x140307b45#252  | 0           |
| 0x140307b45#3909 | 0x140307b45#252  | 1           |
| 0x140307b3e#239  | 0x140307b45#3909 | 1           |
| 0x140307b20#3515 | 0x140307b45#3959 | 0           |
| 0x140307b4d#3960 | 0x140307b4d#269  | 1           |
| 0x140307b4d#269  | 0x140307b4d#271  | 1           |
| 0x140307b45#252  | 0x140307b4d#3960 | 0           |
| 0x140307b32#220  | 0x140307b53#274  | 0           |
| 0x140307b3e#3958 | 0x140307b57#3928 | 0           |
| 0x140307b57#3928 | 0x140307b5c#2498 | 0           |
| 0x140307b3c#3929 | 0x140307b5c#2498 | 1           |
| 0x140307b53#274  | 0x140307b5c#2576 | 0           |
| 0x140307b32#220  | 0x140307b5c#2576 | 1           |
| 0x140307b5c#2498 | 0x140307b5f#285  | 1           |
| 0x140307b5c#2576 | 0x140307b5f#285  | 2           |
| 0x140307b20#3515 | 0x140307b5f#3516 | 0           |
| 0x140307b20#3549 | 0x140307b5f#3550 | 0           |
| 0x140307b20#3583 | 0x140307b5f#3584 | 0           |
| 0x140307ab5#3202 | 0x140307b6c#293  | 0           |
| 0x140307b6c#3961 | 0x140307b6c#293  | 1           |
| 0x140307b12#2603 | 0x140307b6c#3961 | 0           |
| 0x140307b6c#293  | 0x140307b6c#3962 | 0           |
| 0x140307b12#2603 | 0x140307b70#3951 | 0           |
| 0x140307aa1#3307 | 0x140307b74#3572 | 0           |
| 0x140307b70#3951 | 0x140307b74#3572 | 1           |
| 0x140307aa6#57   | 0x140307b74#3606 | 0           |
| 0x140307b6c#3962 | 0x140307b74#3606 | 1           |
| 0x140307b81#306  | 0x140307b81#3963 | 0           |
| 0x140307b81#3963 | 0x140307b88#312  | 0           |
| 0x140307aaa#59   | 0x140307b88#312  | 1           |
| 0x140307aaa#59   | 0x140307b90#321  | 0           |
| 0x140307b90#321  | 0x140307b93#326  | 1           |
| 0x140307a9b#2818 | 0x140307b93#3943 | 0           |
| 0x140307a9b#2818 | 0x140307b93#3944 | 0           |
| 0x140307b74#3572 | 0x140307b93#3949 | 0           |
| 0x140307ba0#2503 | 0x140307ba0#327  | 1           |
| 0x140307b81#3963 | 0x140307ba0#2503 | 0           |
| 0x140307d8b#374  | 0x140307ba0#2503 | 1           |
| 0x140307ba0#327  | 0x140307ba0#2596 | 0           |
| 0x140307a9b#2818 | 0x140307ba0#2652 | 0           |
| 0x140307d87#2650 | 0x140307ba0#2652 | 1           |
| 0x140307b93#3943 | 0x140307ba0#2752 | 0           |
| 0x140307d87#2748 | 0x140307ba0#2752 | 1           |
| 0x140307b93#3944 | 0x140307ba0#2782 | 0           |
| 0x140307d87#2778 | 0x140307ba0#2782 | 1           |
| 0x140307b7d#305  | 0x140307ba0#3369 | 0           |
| 0x140307d87#3362 | 0x140307ba0#3369 | 1           |
| 0x140307b88#312  | 0x140307ba0#3505 | 0           |
| 0x140307d87#3498 | 0x140307ba0#3505 | 1           |
| 0x140307b93#3949 | 0x140307ba0#3539 | 0           |
| 0x140307d87#3532 | 0x140307ba0#3539 | 1           |
| 0x140307b74#3572 | 0x140307ba0#3573 | 0           |
| 0x140307d87#3566 | 0x140307ba0#3573 | 1           |
| 0x140307b74#3606 | 0x140307ba0#3607 | 0           |
| 0x140307d87#3600 | 0x140307ba0#3607 | 1           |
| 0x140307ba0#2596 | 0x140307ba5#334  | 1           |
| 0x140307ba0#3505 | 0x140307ba5#3483 | 0           |
| 0x140307ba0#3539 | 0x140307ba5#3517 | 0           |
| 0x140307ba0#3573 | 0x140307ba5#3551 | 0           |
| 0x140307ba0#3607 | 0x140307ba5#3585 | 0           |
| 0x140307ba5#3551 | 0x140307ba5#3927 | 0           |
| 0x140307ba5#334  | 0x140307baa#339  | 0           |
| 0x140307baa#339  | 0x140307bac#345  | 1           |
| 0x140307ba0#2652 | 0x140307bac#3939 | 0           |
| 0x140307ba5#3517 | 0x140307bac#3945 | 0           |
| 0x140307ba0#327  | 0x140307bb2#351  | 0           |
| 0x140307bb2#351  | 0x140307bb5#357  | 1           |
| 0x140307ba0#2652 | 0x140307bb7#359  | 0           |
| 0x140307bb7#359  | 0x140307bbe#3940 | 0           |
| 0x140307ba5#3517 | 0x140307bbe#3946 | 0           |
| 0x140307ba0#2652 | 0x140307bc3#658  | 0           |
| 0x140307bc3#658  | 0x140307bc6#664  | 1           |
| 0x140307ba0#327  | 0x140307bcc#3224 | 0           |
| 0x140307bd1#3964 | 0x140307bd1#677  | 0           |
| 0x140307bd1#677  | 0x140307bd1#679  | 1           |
| 0x140307bcc#3224 | 0x140307bd1#3964 | 0           |
| 0x140307bd3#3969 | 0x140307bd3#680  | 0           |
| 0x140307ba0#327  | 0x140307bd3#3969 | 0           |
| 0x140307bd3#680  | 0x140307bd6#684  | 0           |
| 0x140307ba0#327  | 0x140307bdb#3225 | 0           |
| 0x140307be0#3965 | 0x140307be0#1248 | 0           |
| 0x140307be0#1248 | 0x140307be0#1250 | 1           |
| 0x140307bdb#3225 | 0x140307be0#3965 | 0           |
| 0x140307be2#3966 | 0x140307be2#1251 | 0           |
| 0x140307ba0#327  | 0x140307be2#3966 | 0           |
| 0x140307be2#1251 | 0x140307be5#1255 | 0           |
| 0x140307ba0#327  | 0x140307bea#3226 | 0           |
| 0x140307bef#3967 | 0x140307bef#1276 | 0           |
| 0x140307bef#1276 | 0x140307bef#1278 | 1           |
| 0x140307bea#3226 | 0x140307bef#3967 | 0           |
| 0x140307bf1#3968 | 0x140307bf1#1279 | 0           |
| 0x140307ba0#327  | 0x140307bf1#3968 | 0           |
| 0x140307bf1#1279 | 0x140307bf4#1283 | 0           |
| 0x140307bf7#3970 | 0x140307bf7#696  | 0           |
| 0x140307bd6#684  | 0x140307bf7#3234 | 0           |
| 0x140307be5#1255 | 0x140307bf7#3234 | 1           |
| 0x140307bf4#1283 | 0x140307bf7#3234 | 2           |
| 0x140307bf7#3234 | 0x140307bf7#3970 | 0           |
| 0x140307bf7#696  | 0x140307bf9#702  | 1           |
| 0x140307ba0#327  | 0x140307c01#1296 | 0           |
| 0x140307c01#1296 | 0x140307c04#1302 | 1           |
| 0x140307ba0#327  | 0x140307c0d#1310 | 0           |
| 0x140307c0d#1310 | 0x140307c10#1316 | 1           |
| 0x140307c1b#2730 | 0x140307c1b#706  | 0           |
| 0x140307ba0#2752 | 0x140307c1b#2730 | 0           |
| 0x140307c06#3237 | 0x140307c1b#3235 | 0           |
| 0x140307c16#3236 | 0x140307c1b#3235 | 1           |
| 0x140307bf7#3234 | 0x140307c1b#3235 | 2           |
| 0x140307c1b#706  | 0x140307c1f#748  | 0           |
| 0x140307c1b#3235 | 0x140307c1f#748  | 1           |
| 0x140307c1f#748  | 0x140307c1f#2747 | 0           |
| 0x140307c22#3251 | 0x140307c22#756  | 0           |
| 0x140307ba0#2782 | 0x140307c22#3251 | 0           |
| 0x140307c29#3971 | 0x140307c29#769  | 0           |
| 0x140307c29#769  | 0x140307c29#770  | 1           |
| 0x140307c22#756  | 0x140307c29#3971 | 0           |
| 0x140307c22#3251 | 0x140307c2f#773  | 0           |
| 0x140307c2f#773  | 0x140307c2f#2775 | 0           |
| 0x140307c39#2505 | 0x140307c39#785  | 0           |
| 0x140307c1f#748  | 0x140307c39#787  | 0           |
| 0x140307c39#785  | 0x140307c39#787  | 1           |
| 0x140307c2f#773  | 0x140307c39#2505 | 0           |
| 0x140307ba5#3551 | 0x140307c44#838  | 0           |
| 0x140307ba5#3585 | 0x140307c44#838  | 1           |
| 0x140307c44#838  | 0x140307c47#843  | 1           |
| 0x140307c39#787  | 0x140307c47#3262 | 0           |
| 0x140307c49#4003 | 0x140307c49#845  | 1           |
| 0x140307c47#3262 | 0x140307c49#845  | 2           |
| 0x140307ba5#3551 | 0x140307c49#4003 | 0           |
| 0x140307c4c#4004 | 0x140307c4c#850  | 0           |
| 0x140307ba5#3551 | 0x140307c4c#4004 | 0           |
| 0x140307c4c#850  | 0x140307c4c#4005 | 0           |
| 0x140307ba0#2652 | 0x140307c50#3941 | 0           |
| 0x140307ba5#3517 | 0x140307c50#3947 | 0           |
| 0x140307c5c#3972 | 0x140307c5c#868  | 0           |
| 0x140307c5c#3973 | 0x140307c5c#868  | 1           |
| 0x140307ba5#3551 | 0x140307c5c#3972 | 0           |
| 0x140307ba5#3517 | 0x140307c5c#3973 | 0           |
| 0x140307c5c#868  | 0x140307c69#881  | 0           |
| 0x140307c69#881  | 0x140307c6c#886  | 1           |
| 0x140307c5c#868  | 0x140307c72#887  | 0           |
| 0x140307c72#887  | 0x140307c72#3974 | 0           |
| 0x140307c7a#3975 | 0x140307c7a#894  | 0           |
| 0x140307c7a#3976 | 0x140307c7a#894  | 1           |
| 0x140307ba5#3585 | 0x140307c7a#3975 | 0           |
| 0x140307ba5#3517 | 0x140307c7a#3976 | 0           |
| 0x140307c7a#894  | 0x140307c80#905  | 0           |
| 0x140307c80#905  | 0x140307c86#915  | 1           |
| 0x140307c86#915  | 0x140307c8c#932  | 0           |
| 0x140307c7a#894  | 0x140307c8c#932  | 1           |
| 0x140307c8c#932  | 0x140307c8c#933  | 1           |
| 0x140307c80#905  | 0x140307c9d#1154 | 0           |
| 0x140307c7a#894  | 0x140307c9d#1154 | 1           |
| 0x140307c9d#1154 | 0x140307c9d#3977 | 0           |
| 0x140307c72#3974 | 0x140307ca4#1158 | 0           |
| 0x140307c9d#3977 | 0x140307ca4#1158 | 1           |
| 0x140307ca4#1158 | 0x140307ca7#1170 | 1           |
| 0x140307c72#3974 | 0x140307ca7#3935 | 0           |
| 0x140307c9d#3977 | 0x140307ca7#3936 | 0           |
| 0x140307cab#2597 | 0x140307cab#1176 | 0           |
| 0x140307ca7#3935 | 0x140307cab#2597 | 0           |
| 0x140307ca7#3936 | 0x140307cab#2597 | 1           |
| 0x140307cab#1176 | 0x140307cae#1182 | 1           |
| 0x140307cab#2597 | 0x140307cb4#1195 | 1           |
| 0x140307cb4#1195 | 0x140307cbb#1204 | 1           |
| 0x140307cbd#3978 | 0x140307cbd#1205 | 0           |
| 0x140307cab#2597 | 0x140307cbd#3978 | 0           |
| 0x140307cbd#1205 | 0x140307cbd#3979 | 0           |
| 0x140307cab#2597 | 0x140307cc4#1217 | 0           |
| 0x140307cbd#3979 | 0x140307cc4#1217 | 1           |
| 0x140307cc4#1217 | 0x140307cc4#1218 | 1           |
| 0x140307cca#2537 | 0x140307cca#939  | 1           |
| 0x140307c91#935  | 0x140307cca#2537 | 0           |
| 0x140307cbd#3979 | 0x140307cca#2537 | 1           |
| 0x140307c8e#934  | 0x140307cca#2600 | 0           |
| 0x140307cab#2597 | 0x140307cca#2600 | 1           |
| 0x140307ba5#3483 | 0x140307cca#3487 | 0           |
| 0x140307ba5#3517 | 0x140307cca#3521 | 0           |
| 0x140307ba5#3551 | 0x140307cca#3555 | 0           |
| 0x140307ba5#3585 | 0x140307cca#3589 | 0           |
| 0x140307cca#939  | 0x140307ccf#944  | 0           |
| 0x140307ccf#944  | 0x140307cd2#949  | 1           |
| 0x140307cca#939  | 0x140307cd8#950  | 0           |
| 0x140307cd8#950  | 0x140307cdc#954  | 0           |
| 0x140307cdc#954  | 0x140307cdc#3981 | 0           |
| 0x140307ce0#3910 | 0x140307ce0#963  | 1           |
| 0x140307cca#939  | 0x140307ce0#963  | 2           |
| 0x140307cdc#3981 | 0x140307ce0#3910 | 0           |
| 0x140307cab#2597 | 0x140307ce9#1227 | 1           |
| 0x140307ba5#3483 | 0x140307ce9#3485 | 0           |
| 0x140307ba5#3517 | 0x140307ce9#3519 | 0           |
| 0x140307ba5#3551 | 0x140307ce9#3553 | 0           |
| 0x140307ba5#3585 | 0x140307ce9#3587 | 0           |
| 0x140307ce9#1227 | 0x140307ce9#3980 | 0           |
| 0x140307cf1#3982 | 0x140307cf1#966  | 0           |
| 0x140307c5c#868  | 0x140307cf1#966  | 1           |
| 0x140307cf1#3983 | 0x140307cf1#968  | 1           |
| 0x140307c47#3262 | 0x140307cf1#968  | 2           |
| 0x140307cca#2600 | 0x140307cf1#2598 | 0           |
| 0x140307cab#2597 | 0x140307cf1#2598 | 1           |
| 0x140307cab#2597 | 0x140307cf1#2598 | 2           |
| 0x140307cdc#3981 | 0x140307cf1#2649 | 0           |
| 0x140307cb0#2648 | 0x140307cf1#2649 | 1           |
| 0x140307ce9#3980 | 0x140307cf1#2649 | 2           |
| 0x140307cca#3487 | 0x140307cf1#3497 | 0           |
| 0x140307ba5#3483 | 0x140307cf1#3497 | 1           |
| 0x140307ce9#3485 | 0x140307cf1#3497 | 2           |
| 0x140307cca#3521 | 0x140307cf1#3531 | 0           |
| 0x140307ba5#3517 | 0x140307cf1#3531 | 1           |
| 0x140307ce9#3519 | 0x140307cf1#3531 | 2           |
| 0x140307cca#3555 | 0x140307cf1#3565 | 0           |
| 0x140307ba5#3551 | 0x140307cf1#3565 | 1           |
| 0x140307ce9#3553 | 0x140307cf1#3565 | 2           |
| 0x140307cca#3589 | 0x140307cf1#3599 | 0           |
| 0x140307ba5#3585 | 0x140307cf1#3599 | 1           |
| 0x140307ce9#3587 | 0x140307cf1#3599 | 2           |
| 0x140307cf1#2649 | 0x140307cf1#3982 | 0           |
| 0x140307cf1#966  | 0x140307cf1#3983 | 0           |
| 0x140307ba5#3927 | 0x140307d00#981  | 0           |
| 0x140307cf1#3565 | 0x140307d00#981  | 1           |
| 0x140307d00#981  | 0x140307d03#987  | 1           |
| 0x140307d05#3990 | 0x140307d05#990  | 0           |
| 0x140307d05#3991 | 0x140307d05#990  | 1           |
| 0x140307cf1#3565 | 0x140307d05#3990 | 0           |
| 0x140307cf1#3531 | 0x140307d05#3991 | 0           |
| 0x140307cf1#2649 | 0x140307d08#3933 | 0           |
| 0x140307cf1#3531 | 0x140307d08#3934 | 0           |
| 0x140307d0d#3984 | 0x140307d0d#1119 | 0           |
| 0x140307d0d#3985 | 0x140307d0d#1119 | 1           |
| 0x140307ba5#3927 | 0x140307d0d#3984 | 0           |
| 0x140307cf1#3531 | 0x140307d0d#3985 | 0           |
| 0x140307cf1#2649 | 0x140307d10#1128 | 1           |
| 0x140307cf1#3531 | 0x140307d10#1128 | 2           |
| 0x140307d0d#1119 | 0x140307d10#1128 | 3           |
| 0x140307cf1#3497 | 0x140307d10#3488 | 0           |
| 0x140307cf1#3531 | 0x140307d10#3522 | 0           |
| 0x140307cf1#3565 | 0x140307d10#3556 | 0           |
| 0x140307cf1#3599 | 0x140307d10#3590 | 0           |
| 0x140307d19#3986 | 0x140307d19#1134 | 0           |
| 0x140307d19#3987 | 0x140307d19#1134 | 1           |
| 0x140307d10#3556 | 0x140307d19#3986 | 0           |
| 0x140307ba5#3927 | 0x140307d19#3987 | 0           |
| 0x140307c5c#868  | 0x140307d1c#1141 | 0           |
| 0x140307d1c#1141 | 0x140307d20#1145 | 0           |
| 0x140307d20#3988 | 0x140307d20#1145 | 1           |
| 0x140307cf1#2649 | 0x140307d20#3988 | 0           |
| 0x140307d20#1145 | 0x140307d20#3989 | 0           |
| 0x140307d26#2539 | 0x140307d26#1000 | 1           |
| 0x140307d26#2573 | 0x140307d26#1000 | 2           |
| 0x140307d26#2681 | 0x140307d26#1000 | 3           |
| 0x140307d08#3933 | 0x140307d26#2539 | 0           |
| 0x140307d20#3989 | 0x140307d26#2539 | 1           |
| 0x140307d08#3934 | 0x140307d26#2573 | 0           |
| 0x140307ba5#3927 | 0x140307d26#2573 | 1           |
| 0x140307d05#990  | 0x140307d26#2681 | 0           |
| 0x140307d19#1134 | 0x140307d26#2681 | 1           |
| 0x140307d26#3500 | 0x140307d26#3489 | 0           |
| 0x140307cf1#3497 | 0x140307d26#3500 | 0           |
| 0x140307d10#3488 | 0x140307d26#3500 | 1           |
| 0x140307d26#3534 | 0x140307d26#3523 | 0           |
| 0x140307cf1#3531 | 0x140307d26#3534 | 0           |
| 0x140307d10#3522 | 0x140307d26#3534 | 1           |
| 0x140307d26#3568 | 0x140307d26#3557 | 0           |
| 0x140307cf1#3565 | 0x140307d26#3568 | 0           |
| 0x140307d10#3556 | 0x140307d26#3568 | 1           |
| 0x140307d26#3602 | 0x140307d26#3591 | 0           |
| 0x140307cf1#3599 | 0x140307d26#3602 | 0           |
| 0x140307d10#3590 | 0x140307d26#3602 | 1           |
| 0x140307d26#3523 | 0x140307d2f#1008 | 0           |
| 0x140307d2f#1008 | 0x140307d32#1013 | 1           |
| 0x140307d38#3992 | 0x140307d38#1019 | 0           |
| 0x140307d38#3993 | 0x140307d38#1019 | 1           |
| 0x140307d26#3591 | 0x140307d38#3992 | 0           |
| 0x140307d26#3523 | 0x140307d38#3993 | 0           |
| 0x140307d38#1019 | 0x140307d3b#1027 | 1           |
| 0x140307d3b#1027 | 0x140307d42#1036 | 1           |
| 0x140307d26#3523 | 0x140307d42#3932 | 0           |
| 0x140307d44#3911 | 0x140307d44#1038 | 1           |
| 0x140307d26#3523 | 0x140307d44#3911 | 0           |
| 0x140307d44#1038 | 0x140307d44#3994 | 0           |
| 0x140307d4b#3995 | 0x140307d4b#1051 | 0           |
| 0x140307d4b#3912 | 0x140307d4b#1051 | 1           |
| 0x140307d44#1038 | 0x140307d4b#3912 | 1           |
| 0x140307d26#3523 | 0x140307d4b#3995 | 0           |
| 0x140307d53#3996 | 0x140307d53#1068 | 1           |
| 0x140307d53#1068 | 0x140307d53#1070 | 1           |
| 0x140307d4b#1051 | 0x140307d53#3996 | 0           |
| 0x140307d38#1019 | 0x140307d59#1073 | 0           |
| 0x140307d44#3994 | 0x140307d5d#3931 | 0           |
| 0x140307d62#2533 | 0x140307d62#1083 | 1           |
| 0x140307d62#2568 | 0x140307d62#1083 | 2           |
| 0x140307d5d#3931 | 0x140307d62#2533 | 0           |
| 0x140307d42#3932 | 0x140307d62#2533 | 1           |
| 0x140307d59#1073 | 0x140307d62#2568 | 0           |
| 0x140307d38#1019 | 0x140307d62#2568 | 1           |
| 0x140307d26#3489 | 0x140307d62#3491 | 0           |
| 0x140307d26#3523 | 0x140307d62#3525 | 0           |
| 0x140307d26#3557 | 0x140307d62#3559 | 0           |
| 0x140307d26#3591 | 0x140307d62#3593 | 0           |
| 0x140307d26#3489 | 0x140307d67#3496 | 0           |
| 0x140307d62#3491 | 0x140307d67#3496 | 1           |
| 0x140307d6f#3997 | 0x140307d6f#1092 | 0           |
| 0x140307d6f#3998 | 0x140307d6f#1092 | 1           |
| 0x140307c72#3974 | 0x140307d6f#3997 | 0           |
| 0x140307cf1#2649 | 0x140307d6f#3998 | 0           |
| 0x140307d6f#1092 | 0x140307d6f#3999 | 0           |
| 0x140307d76#4000 | 0x140307d76#1103 | 0           |
| 0x140307d76#4001 | 0x140307d76#1103 | 1           |
| 0x140307cf1#2598 | 0x140307d76#4000 | 0           |
| 0x140307cf1#2649 | 0x140307d76#4001 | 0           |
| 0x140307d76#1103 | 0x140307d76#4002 | 0           |
| 0x140307ba0#3369 | 0x140307d82#3942 | 0           |
| 0x140307cf1#2649 | 0x140307d82#3948 | 0           |
| 0x140307c22#756  | 0x140307d84#2777 | 0           |
| 0x140307bac#3939 | 0x140307d87#2650 | 0           |
| 0x140307bbe#3940 | 0x140307d87#2650 | 1           |
| 0x140307c50#3941 | 0x140307d87#2650 | 2           |
| 0x140307d82#3942 | 0x140307d87#2650 | 3           |
| 0x140307ba0#2652 | 0x140307d87#2650 | 4           |
| 0x140307ba0#2752 | 0x140307d87#2748 | 0           |
| 0x140307ba0#2752 | 0x140307d87#2748 | 1           |
| 0x140307c1f#2747 | 0x140307d87#2748 | 2           |
| 0x140307c1f#2747 | 0x140307d87#2748 | 3           |
| 0x140307c1f#2747 | 0x140307d87#2748 | 4           |
| 0x140307ba0#2782 | 0x140307d87#2778 | 0           |
| 0x140307ba0#2782 | 0x140307d87#2778 | 1           |
| 0x140307c2f#2775 | 0x140307d87#2778 | 2           |
| 0x140307c2f#2775 | 0x140307d87#2778 | 3           |
| 0x140307d84#2777 | 0x140307d87#2778 | 4           |
| 0x140307ba0#3369 | 0x140307d87#3362 | 0           |
| 0x140307bb7#359  | 0x140307d87#3362 | 1           |
| 0x140307ba0#3369 | 0x140307d87#3362 | 2           |
| 0x140307ba0#3369 | 0x140307d87#3362 | 3           |
| 0x140307ba0#3369 | 0x140307d87#3362 | 4           |
| 0x140307ba5#3483 | 0x140307d87#3498 | 0           |
| 0x140307ba5#3483 | 0x140307d87#3498 | 1           |
| 0x140307ba5#3483 | 0x140307d87#3498 | 2           |
| 0x140307d67#3496 | 0x140307d87#3498 | 3           |
| 0x140307ba5#3483 | 0x140307d87#3498 | 4           |
| 0x140307bac#3945 | 0x140307d87#3532 | 0           |
| 0x140307bbe#3946 | 0x140307d87#3532 | 1           |
| 0x140307c50#3947 | 0x140307d87#3532 | 2           |
| 0x140307d82#3948 | 0x140307d87#3532 | 3           |
| 0x140307ba5#3517 | 0x140307d87#3532 | 4           |
| 0x140307ba5#3551 | 0x140307d87#3566 | 0           |
| 0x140307ba5#3551 | 0x140307d87#3566 | 1           |
| 0x140307c4c#4005 | 0x140307d87#3566 | 2           |
| 0x140307d6f#3999 | 0x140307d87#3566 | 3           |
| 0x140307ba5#3551 | 0x140307d87#3566 | 4           |
| 0x140307ba5#3585 | 0x140307d87#3600 | 0           |
| 0x140307ba5#3585 | 0x140307d87#3600 | 1           |
| 0x140307ba5#3585 | 0x140307d87#3600 | 2           |
| 0x140307d76#4002 | 0x140307d87#3600 | 3           |
| 0x140307ba5#3585 | 0x140307d87#3600 | 4           |
| 0x140307ba0#2503 | 0x140307d8b#374  | 0           |
| 0x140307d8b#374  | 0x140307d92#391  | 0           |
| 0x140307d87#3498 | 0x140307d92#391  | 1           |
| 0x140307d92#391  | 0x140307d96#397  | 1           |
| 0x140307d87#2650 | 0x140307da0#408  | 1           |
| 0x140307da0#408  | 0x140307da0#410  | 1           |
| 0x140307d87#2778 | 0x140307da2#2760 | 0           |
| 0x140307da2#2760 | 0x140307da5#421  | 1           |
| 0x140307da5#421  | 0x140307da5#422  | 1           |
| 0x140307daf#2504 | 0x140307daf#426  | 0           |
| 0x140307daf#426  | 0x140307daf#428  | 1           |
| 0x140307d87#2778 | 0x140307daf#2504 | 0           |
| 0x140307daf#428  | 0x140307db1#469  | 0           |
| 0x140307db3#2728 | 0x140307db3#479  | 0           |
| 0x140307db1#469  | 0x140307db3#479  | 1           |
| 0x140307db3#479  | 0x140307db3#481  | 0           |
| 0x140307d87#2748 | 0x140307db3#2728 | 0           |
| 0x140307db3#481  | 0x140307db6#486  | 1           |
| 0x140307d87#3498 | 0x140307db8#3506 | 0           |
| 0x140307d87#3498 | 0x140307db8#3506 | 1           |
| 0x140307ba5#3483 | 0x140307db8#3506 | 2           |
| 0x140307ba5#3483 | 0x140307db8#3506 | 3           |
| 0x140307ba5#3483 | 0x140307db8#3506 | 4           |
| 0x140307d87#3532 | 0x140307db8#3540 | 0           |
| 0x140307d87#3532 | 0x140307db8#3540 | 1           |
| 0x140307ba5#3517 | 0x140307db8#3540 | 2           |
| 0x140307ba5#3517 | 0x140307db8#3540 | 3           |
| 0x140307ba5#3517 | 0x140307db8#3540 | 4           |
| 0x140307d87#3566 | 0x140307db8#3574 | 0           |
| 0x140307d87#3566 | 0x140307db8#3574 | 1           |
| 0x140307ba5#3551 | 0x140307db8#3574 | 2           |
| 0x140307ba5#3551 | 0x140307db8#3574 | 3           |
| 0x140307ba5#3551 | 0x140307db8#3574 | 4           |
| 0x140307d87#3600 | 0x140307db8#3608 | 0           |
| 0x140307d87#3600 | 0x140307db8#3608 | 1           |
| 0x140307ba5#3585 | 0x140307db8#3608 | 2           |
| 0x140307ba5#3585 | 0x140307db8#3608 | 3           |
| 0x140307ba5#3585 | 0x140307db8#3608 | 4           |
| 0x140307dbc#4006 | 0x140307dbc#492  | 1           |
| 0x140307dbc#3913 | 0x140307dbc#4006 | 0           |
| 0x140307db8#3540 | 0x140307dc4#500  | 0           |
| 0x140307dc4#500  | 0x140307dc7#505  | 1           |
| 0x140307dcd#4007 | 0x140307dcd#511  | 0           |
| 0x140307dcd#4008 | 0x140307dcd#511  | 1           |
| 0x140307db8#3608 | 0x140307dcd#4007 | 0           |
| 0x140307db8#3540 | 0x140307dcd#4008 | 0           |
| 0x140307dd0#4009 | 0x140307dd0#519  | 1           |
| 0x140307dcd#511  | 0x140307dd0#4009 | 0           |
| 0x140307dd0#519  | 0x140307dd7#528  | 1           |
| 0x140307db8#3540 | 0x140307dd7#3930 | 0           |
| 0x140307dd9#3914 | 0x140307dd9#530  | 1           |
| 0x140307db8#3540 | 0x140307dd9#3914 | 0           |
| 0x140307de0#4010 | 0x140307de0#543  | 0           |
| 0x140307de0#3915 | 0x140307de0#543  | 1           |
| 0x140307dd9#530  | 0x140307de0#3915 | 1           |
| 0x140307db8#3540 | 0x140307de0#4010 | 0           |
| 0x140307de8#4011 | 0x140307de8#560  | 0           |
| 0x140307de8#560  | 0x140307de8#562  | 1           |
| 0x140307de0#543  | 0x140307de8#4011 | 0           |
| 0x140307dcd#511  | 0x140307dea#565  | 0           |
| 0x140307dd9#530  | 0x140307dee#574  | 1           |
| 0x140307dea#565  | 0x140307dee#574  | 2           |
| 0x140307db8#3506 | 0x140307dee#3494 | 0           |
| 0x140307db8#3540 | 0x140307dee#3528 | 0           |
| 0x140307db8#3574 | 0x140307dee#3562 | 0           |
| 0x140307db8#3608 | 0x140307dee#3596 | 0           |
| 0x140307b12#2603 | 0x140307df8#2601 | 1           |
| 0x140307cca#2600 | 0x140307df8#2601 | 2           |
| 0x140307cf1#2598 | 0x140307df8#2601 | 3           |
| 0x140307aeb#3480 | 0x140307df8#3499 | 0           |
| 0x140307b20#3481 | 0x140307df8#3499 | 1           |
| 0x140307cca#3487 | 0x140307df8#3499 | 2           |
| 0x140307d26#3489 | 0x140307df8#3499 | 3           |
| 0x140307aeb#3514 | 0x140307df8#3533 | 0           |
| 0x140307b20#3515 | 0x140307df8#3533 | 1           |
| 0x140307cca#3521 | 0x140307df8#3533 | 2           |
| 0x140307d26#3523 | 0x140307df8#3533 | 3           |
| 0x140307aeb#3548 | 0x140307df8#3567 | 0           |
| 0x140307b20#3549 | 0x140307df8#3567 | 1           |
| 0x140307cca#3555 | 0x140307df8#3567 | 2           |
| 0x140307d26#3557 | 0x140307df8#3567 | 3           |
| 0x140307aeb#3582 | 0x140307df8#3601 | 0           |
| 0x140307b20#3583 | 0x140307df8#3601 | 1           |
| 0x140307cca#3589 | 0x140307df8#3601 | 2           |
| 0x140307d26#3591 | 0x140307df8#3601 | 3           |
| 0x140307dfd#4016 | 0x140307dfd#1114 | 0           |
| 0x140307df8#3499 | 0x140307dfd#3490 | 0           |
| 0x140307df8#3533 | 0x140307dfd#3524 | 0           |
| 0x140307df8#3567 | 0x140307dfd#3558 | 0           |
| 0x140307df8#3601 | 0x140307dfd#3592 | 0           |
| 0x140307df8#2601 | 0x140307dfd#3938 | 0           |
| 0x140307dfd#1113 | 0x140307dfd#4016 | 0           |
| 0x140307de8#3937 | 0x140307dff#2610 | 0           |
| 0x140307dfd#3938 | 0x140307dff#2610 | 1           |
| 0x140307a94#3904 | 0x140307dff#2627 | 0           |
| 0x140307dfd#3916 | 0x140307dff#2627 | 1           |
| 0x140307db8#3506 | 0x140307dff#3510 | 0           |
| 0x140307dfd#3490 | 0x140307dff#3510 | 1           |
| 0x140307db8#3540 | 0x140307dff#3544 | 0           |
| 0x140307dfd#3524 | 0x140307dff#3544 | 1           |
| 0x140307db8#3574 | 0x140307dff#3578 | 0           |
| 0x140307dfd#3558 | 0x140307dff#3578 | 1           |
| 0x140307db8#3608 | 0x140307dff#3612 | 0           |
| 0x140307dfd#3592 | 0x140307dff#3612 | 1           |
| 0x140307e04#4017 | 0x140307e04#623  | 0           |
| 0x140307dff#2627 | 0x140307e04#1339 | 0           |
| 0x140307dff#3510 | 0x140307e04#3492 | 0           |
| 0x140307dff#3544 | 0x140307e04#3526 | 0           |
| 0x140307dff#3578 | 0x140307e04#3560 | 0           |
| 0x140307dff#3612 | 0x140307e04#3594 | 0           |
| 0x140307e04#622  | 0x140307e04#4017 | 0           |
| 0x140307e04#623  | 0x140307e04#4018 | 0           |
| 0x140307dd7#3930 | 0x140307e06#2502 | 0           |
| 0x140307e04#4018 | 0x140307e06#2502 | 1           |
| 0x140307dff#2610 | 0x140307e06#2609 | 1           |
| 0x140307a94#3905 | 0x140307e06#2626 | 0           |
| 0x140307e04#1339 | 0x140307e06#2626 | 1           |
| 0x140307db8#3506 | 0x140307e06#3509 | 0           |
| 0x140307e04#3492 | 0x140307e06#3509 | 1           |
| 0x140307db8#3540 | 0x140307e06#3543 | 0           |
| 0x140307e04#3526 | 0x140307e06#3543 | 1           |
| 0x140307db8#3574 | 0x140307e06#3577 | 0           |
| 0x140307e04#3560 | 0x140307e06#3577 | 1           |
| 0x140307db8#3608 | 0x140307e06#3611 | 0           |
| 0x140307e04#3594 | 0x140307e06#3611 | 1           |
| 0x140307e06#2626 | 0x140307e09#625  | 0           |
| 0x140307e09#4019 | 0x140307e09#626  | 1           |
| 0x140307e06#2502 | 0x140307e09#627  | 1           |
| 0x140307e06#3509 | 0x140307e09#3493 | 0           |
| 0x140307e06#3543 | 0x140307e09#3527 | 0           |
| 0x140307e06#3577 | 0x140307e09#3561 | 0           |
| 0x140307e06#3611 | 0x140307e09#3595 | 0           |
| 0x140307e09#625  | 0x140307e09#4019 | 0           |
| 0x140307b93#3949 | 0x140307e13#3541 | 0           |
| 0x140307d87#3532 | 0x140307e13#3541 | 1           |
| 0x140307d87#3532 | 0x140307e13#3541 | 2           |
| 0x140307b74#3572 | 0x140307e13#3575 | 0           |
| 0x140307d87#3566 | 0x140307e13#3575 | 1           |
| 0x140307d87#3566 | 0x140307e13#3575 | 2           |
| 0x140307b74#3606 | 0x140307e13#3609 | 0           |
| 0x140307d87#3600 | 0x140307e13#3609 | 1           |
| 0x140307d87#3600 | 0x140307e13#3609 | 2           |
| 0x140307e23#4012 | 0x140307e23#643  | 2           |
| 0x140307e13#3541 | 0x140307e23#4012 | 0           |
| 0x140307e26#3917 | 0x140307e26#646  | 1           |
| 0x140307e26#4013 | 0x140307e26#646  | 2           |
| 0x140307e13#3575 | 0x140307e26#4013 | 0           |
| 0x140307e2a#3918 | 0x140307e2a#649  | 1           |
| 0x140307e2a#4014 | 0x140307e2a#649  | 2           |
| 0x140307e13#3609 | 0x140307e2a#4014 | 0           |
| 0x140307e2e#4015 | 0x140307e2e#652  | 1           |
| 0x140307e2e#3919 | 0x140307e2e#4015 | 0           |
| 0x140307e06#2609 | 0x140307e36#2494 | 1           |
| 0x140307e36#2494 | 0x140307e46#620  | 1           |
| 0x140307e36#3923 | 0x140307e46#3924 | 1           |
| 0x140307e36#3925 | 0x140307e46#3926 | 1           |
| 0x140307e47#3511 | 0x140307e47#3484 | 0           |
| 0x140307ba5#3483 | 0x140307e47#3511 | 1           |
| 0x140307e47#3545 | 0x140307e47#3518 | 0           |
| 0x140307aa1#3306 | 0x140307e47#3545 | 0           |
| 0x140307ba5#3517 | 0x140307e47#3545 | 1           |
| 0x140307e47#3579 | 0x140307e47#3552 | 0           |
| 0x140307aa1#3307 | 0x140307e47#3579 | 0           |
| 0x140307ba5#3551 | 0x140307e47#3579 | 1           |
| 0x140307e47#3613 | 0x140307e47#3586 | 0           |
| 0x140307aa6#57   | 0x140307e47#3613 | 0           |
| 0x140307ba5#3585 | 0x140307e47#3613 | 1           |
| 0x140307e4d#3512 | 0x140307e4d#3486 | 0           |
| 0x140307ba5#3483 | 0x140307e4d#3512 | 1           |
| 0x140307e4d#3546 | 0x140307e4d#3520 | 0           |
| 0x140307aa1#3306 | 0x140307e4d#3546 | 0           |
| 0x140307ba5#3517 | 0x140307e4d#3546 | 1           |
| 0x140307e4d#3580 | 0x140307e4d#3554 | 0           |
| 0x140307aa1#3307 | 0x140307e4d#3580 | 0           |
| 0x140307ba5#3551 | 0x140307e4d#3580 | 1           |
| 0x140307e4d#3614 | 0x140307e4d#3588 | 0           |
| 0x140307aa6#57   | 0x140307e4d#3614 | 0           |
| 0x140307ba5#3585 | 0x140307e4d#3614 | 1           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /longlong *   |
| 1       | param_2 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 1       | 0x140307aaa#3906 | 0           |
| 1       | 0x140307b81#306  | 1           |
| 0       | 0x140307dbc#3913 | 0           |
| 0       | 0x140307de8#3937 | 0           |
| 0       | 0x140307dff#2610 | 0           |
| 0       | 0x140307dff#2610 | 1           |
| 0       | 0x140307e06#2609 | 0           |
| 0       | 0x140307e06#2609 | 1           |
| 0       | 0x140307e23#643  | 1           |
| 0       | 0x140307e26#3917 | 0           |
| 0       | 0x140307e2a#3918 | 0           |
| 0       | 0x140307e2e#3919 | 0           |
| 0       | 0x140307e36#2494 | 0           |
| 0       | 0x140307e36#2494 | 1           |
| 0       | 0x140307e36#3923 | 0           |
| 0       | 0x140307e36#3925 | 0           |
| 0       | 0x140307e46#620  | 1           |

## raw_result.value.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x140307aaa#59   | memory_read        | 1             |             |
| 0x140307ac6#116  | conditional_branch |               | 1           |
| 0x140307acf#129  | conditional_branch |               | 1           |
| 0x140307adc#140  | conditional_branch |               | 1           |
| 0x140307ae5#154  | conditional_branch |               | 1           |
| 0x140307aeb#157  | direct_call        | 0             |             |
| 0x140307af3#167  | conditional_branch |               | 1           |
| 0x140307b01#181  | memory_write       | 1             | 2           |
| 0x140307b0a#1322 | direct_call        | 0             |             |
| 0x140307b20#201  | direct_call        | 0             |             |
| 0x140307b2c#214  | conditional_branch |               | 1           |
| 0x140307b3c#237  | conditional_branch |               | 1           |
| 0x140307b3e#239  | memory_read        | 1             |             |
| 0x140307b4d#271  | conditional_branch |               | 1           |
| 0x140307b5f#285  | direct_call        | 0             |             |
| 0x140307b81#306  | memory_read        | 1             |             |
| 0x140307b93#326  | conditional_branch |               | 1           |
| 0x140307ba0#327  | memory_read        | 1             |             |
| 0x140307ba5#334  | direct_call        | 0             |             |
| 0x140307bac#345  | conditional_branch |               | 1           |
| 0x140307bb5#357  | conditional_branch |               | 1           |
| 0x140307bc6#664  | conditional_branch |               | 1           |
| 0x140307bd1#679  | conditional_branch |               | 1           |
| 0x140307be0#1250 | conditional_branch |               | 1           |
| 0x140307bef#1278 | conditional_branch |               | 1           |
| 0x140307bf9#702  | conditional_branch |               | 1           |
| 0x140307c04#1302 | conditional_branch |               | 1           |
| 0x140307c10#1316 | conditional_branch |               | 1           |
| 0x140307c29#770  | conditional_branch |               | 1           |
| 0x140307c47#843  | conditional_branch |               | 1           |
| 0x140307c49#845  | memory_write       | 1             | 2           |
| 0x140307c6c#886  | conditional_branch |               | 1           |
| 0x140307c8c#933  | conditional_branch |               | 1           |
| 0x140307ca7#1170 | conditional_branch |               | 1           |
| 0x140307cae#1182 | conditional_branch |               | 1           |
| 0x140307cbb#1204 | conditional_branch |               | 1           |
| 0x140307cc4#1218 | conditional_branch |               | 1           |
| 0x140307cca#939  | direct_call        | 0             |             |
| 0x140307cd2#949  | conditional_branch |               | 1           |
| 0x140307ce0#963  | memory_write       | 1             | 2           |
| 0x140307ce9#1227 | direct_call        | 0             |             |
| 0x140307cf1#968  | memory_write       | 1             | 2           |
| 0x140307d03#987  | conditional_branch |               | 1           |
| 0x140307d10#1128 | direct_call        | 0             |             |
| 0x140307d26#1000 | direct_call        | 0             |             |
| 0x140307d32#1013 | conditional_branch |               | 1           |
| 0x140307d42#1036 | conditional_branch |               | 1           |
| 0x140307d44#1038 | memory_read        | 1             |             |
| 0x140307d53#1070 | conditional_branch |               | 1           |
| 0x140307d62#1083 | direct_call        | 0             |             |
| 0x140307d96#397  | conditional_branch |               | 1           |
| 0x140307da0#410  | conditional_branch |               | 1           |
| 0x140307da5#422  | conditional_branch |               | 1           |
| 0x140307db6#486  | conditional_branch |               | 1           |
| 0x140307dbc#492  | memory_write       | 1             | 2           |
| 0x140307dc7#505  | conditional_branch |               | 1           |
| 0x140307dd7#528  | conditional_branch |               | 1           |
| 0x140307dd9#530  | memory_read        | 1             |             |
| 0x140307de8#562  | conditional_branch |               | 1           |
| 0x140307dee#574  | direct_call        | 0             |             |
| 0x140307dfd#1114 | indirect_call      | 0             |             |
| 0x140307e04#623  | indirect_call      | 0             |             |
| 0x140307e09#626  | memory_write       | 1             | 2           |
| 0x140307e09#627  | direct_call        | 0             |             |
| 0x140307e23#643  | memory_write       | 1             | 2           |
| 0x140307e26#646  | memory_write       | 1             | 2           |
| 0x140307e2a#649  | memory_write       | 1             | 2           |
| 0x140307e2e#652  | memory_write       | 1             | 2           |
| 0x140307e47#1231 | direct_call        | 0             |             |
| 0x140307e4d#1221 | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x140307e47 to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140307e4d to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x140307e47 to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140307e4d to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x140307a80

## normalized_result.procedure.name

FUN_140307a80

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
| 0x140307a80 | 0x140307e4b |
| 0x140307e4d | 0x140307e51 |

## normalized_result.procedure.body.total_bytes

977

## normalized_result.procedure.body.span_bytes

978

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_140307a80()

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_58 @ Stack[-0x58]:8      | ghidra-function-database |
| undefined1[16] local_68 @ Stack[-0x68]:16 | ghidra-function-database |
| undefined8 local_70 @ Stack[-0x70]:8      | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8    | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8    | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8    | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8      | ghidra-function-database |

## normalized_result.pseudocode


longlong * FUN_140307a80(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *unaff_RBX;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  ulonglong local_res10;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  byte *local_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  
  puVar15 = auStack_98;
  puVar16 = auStack_98;
  uVar17 = 0;
  local_68 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  uVar11 = param_2[1];
  uVar18 = (uVar11 >> 2) * 3;
  if (uVar18 == 0) {
LAB_140307b74:
    local_res10 = 0;
    pbVar9 = (byte *)*param_2;
    local_70 = pbVar9 + uVar11;
    uVar18 = uVar17;
    uVar14 = uVar17;
    local_68 = plStack_60;
    if (uVar11 != 0) {
      do {
        bVar2 = *pbVar9;
        iVar4 = isspace((uint)bVar2);
        plVar10 = plStack_60;
        if (iVar4 == 0) {
          if (bVar2 == 0x3d) {
            local_res10 = uVar17 + 1;
            uVar17 = local_res10;
          }
          else {
            if (uVar17 != 0) goto LAB_140307db8;
            if ((byte)(bVar2 + 0xbf) < 0x1a) {
              uVar5 = (int)(char)bVar2 - 0x41;
LAB_140307bf7:
              if ((int)uVar5 < 0) goto LAB_140307db8;
            }
            else {
              if ((byte)(bVar2 + 0x9f) < 0x1a) {
                uVar5 = (int)(char)bVar2 - 0x47;
                goto LAB_140307bf7;
              }
              if ((byte)(bVar2 - 0x30) < 10) {
                uVar5 = (int)(char)bVar2 + 4;
                goto LAB_140307bf7;
              }
              if (bVar2 == 0x2b) {
                uVar5 = 0x3e;
              }
              else {
                if (bVar2 != 0x2f) goto LAB_140307db8;
                uVar5 = 0x3f;
              }
            }
            uVar5 = (int)uVar18 << 6 | uVar5;
            uVar18 = (ulonglong)uVar5;
            uVar6 = (int)uVar14 + 6;
            if ((int)uVar6 < 8) {
              uVar14 = (ulonglong)uVar6;
            }
            else {
              uVar6 = (int)uVar14 - 2;
              uVar14 = (ulonglong)uVar6;
              uVar19 = (undefined1)(uVar5 >> ((byte)uVar6 & 0x1f));
              if (plStack_60 == local_58) {
                lVar7 = (longlong)plStack_60 - (longlong)local_68;
                if (lVar7 == 0x7fffffffffffffff) goto LAB_140307e47;
                plVar1 = (longlong *)(lVar7 + 1);
                uVar11 = (longlong)local_58 - (longlong)local_68;
                if (0x7fffffffffffffff - (uVar11 >> 1) < uVar11) {
                  unaff_RBX = (longlong *)0x7fffffffffffffff;
                  plVar12 = (longlong *)0x8000000000000026;
LAB_140307cca:
                  lVar8 = FUN_1403272a0(plVar12);
                  if (lVar8 == 0) goto LAB_140307df8;
                  plVar12 = (longlong *)(lVar8 + 0x27U & 0xffffffffffffffe0);
                  plVar12[-1] = lVar8;
                }
                else {
                  plVar12 = (longlong *)((uVar11 >> 1) + uVar11);
                  unaff_RBX = plVar1;
                  if (plVar1 <= plVar12) {
                    unaff_RBX = plVar12;
                  }
                  if (unaff_RBX == (longlong *)0x0) {
                    plVar12 = (longlong *)0x0;
                  }
                  else {
                    if ((longlong *)0xfff < unaff_RBX) {
                      plVar12 = (longlong *)((longlong)unaff_RBX + 0x27);
                      if (unaff_RBX < plVar12) goto LAB_140307cca;
                      goto LAB_140307e4d;
                    }
                    plVar12 = (longlong *)FUN_1403272a0(unaff_RBX);
                  }
                }
                *(undefined1 *)((longlong)plVar12 + lVar7) = uVar19;
                if (plVar10 == plStack_60) {
                  lVar8 = (longlong)plStack_60 - (longlong)local_68;
                  plVar13 = plVar12;
                  plVar10 = local_68;
                }
                else {
                  FUN_14035f420(plVar12,local_68,(longlong)plVar10 - (longlong)local_68);
                  lVar8 = (longlong)plStack_60 - (longlong)plVar10;
                  plVar13 = (longlong *)(lVar7 + 1 + (longlong)plVar12);
                }
                FUN_14035f420(plVar13,plVar10,lVar8);
                if (local_68 != (longlong *)0x0) {
                  uVar11 = (longlong)local_58 - (longlong)local_68;
                  plVar10 = local_68;
                  if (0xfff < uVar11) {
                    if (0x1f < (ulonglong)((longlong)local_68 + (-8 - local_68[-1])))
                    goto LAB_140307df8;
                    uVar11 = uVar11 + 0x27;
                    plVar10 = (longlong *)local_68[-1];
                  }
                  thunk_FUN_140327e20(plVar10,uVar11);
                }
                plStack_60 = (longlong *)((longlong)plVar1 + (longlong)plVar12);
                local_58 = (longlong *)((longlong)unaff_RBX + (longlong)plVar12);
                uVar17 = local_res10;
                local_68 = plVar12;
              }
              else {
                *(undefined1 *)plStack_60 = uVar19;
                plStack_60 = (longlong *)((longlong)plStack_60 + 1);
              }
            }
          }
        }
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 != local_70);
      if ((2 < uVar17) ||
         ((0 < (int)uVar14 && (((uint)uVar18 & (1 << ((byte)uVar14 & 0x1f)) - 1U) != 0)))) {
LAB_140307db8:
        *(undefined1 *)(param_1 + 3) = 0;
        if (local_68 == (longlong *)0x0) {
          return param_1;
        }
        plVar10 = local_68;
        if (0xfff < (ulonglong)((longlong)local_58 - (longlong)local_68)) {
          if ((ulonglong)((longlong)local_68 + (-8 - local_68[-1])) < 0x20) {
            thunk_FUN_140327e20(local_68[-1],((longlong)local_58 - (longlong)local_68) + 0x27);
            return param_1;
          }
          goto LAB_140307dff;
        }
        goto LAB_140307e06;
      }
    }
    *param_1 = (longlong)local_68;
    param_1[1] = (longlong)plStack_60;
    param_1[2] = (longlong)local_58;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (0x7fffffffffffffff < uVar18) {
LAB_140307e47:
                    /* WARNING: Subroutine does not return */
      FUN_14000bff0();
    }
    if (uVar18 < 0x1000) {
      unaff_RBX = (longlong *)FUN_1403272a0(uVar18);
LAB_140307b12:
      FUN_14035f420(unaff_RBX,local_68,(longlong)plStack_60 - (longlong)local_68);
      if (local_68 != (longlong *)0x0) {
        uVar14 = (longlong)local_58 - (longlong)local_68;
        plVar10 = local_68;
        if (0xfff < uVar14) {
          if (0x1f < (ulonglong)((longlong)local_68 + (-8 - local_68[-1]))) goto LAB_140307df8;
          uVar14 = uVar14 + 0x27;
          plVar10 = (longlong *)local_68[-1];
        }
        thunk_FUN_140327e20(plVar10,uVar14);
      }
      local_58 = (longlong *)(uVar18 + (longlong)unaff_RBX);
      plStack_60 = unaff_RBX;
      goto LAB_140307b74;
    }
    if (uVar18 + 0x27 <= uVar18) {
LAB_140307e4d:
                    /* WARNING: Subroutine does not return */
      FUN_140005500();
    }
    lVar7 = FUN_1403272a0();
    if (lVar7 != 0) {
      unaff_RBX = (longlong *)(lVar7 + 0x27U & 0xffffffffffffffe0);
      unaff_RBX[-1] = lVar7;
      goto LAB_140307b12;
    }
LAB_140307df8:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar15 = auStack_90;
    param_1 = unaff_RBX;
LAB_140307dff:
    pcVar3 = (code *)swi(0x29);
    plVar10 = (longlong *)(*pcVar3)(5);
    puVar16 = puVar15 + 8;
LAB_140307e06:
    *(undefined8 *)(puVar16 + -8) = 0x140307e0e;
    thunk_FUN_140327e20(plVar10);
  }
  return param_1;
}



## normalized_result.assembly

0x140307a80: MOV qword ptr [RSP + 0x8], RCX,0x140307a85: PUSH RBP,0x140307a86: PUSH RBX,0x140307a87: PUSH RSI,0x140307a88: PUSH RDI,0x140307a89: PUSH R12,0x140307a8b: PUSH R13,0x140307a8d: PUSH R14,0x140307a8f: PUSH R15,0x140307a91: MOV RBP, RSP,0x140307a94: SUB RSP, 0x58,0x140307a98: MOV R14, RDX,0x140307a9b: XOR R15D, R15D,0x140307a9e: XORPS XMM0, XMM0,0x140307aa1: MOVDQU xmmword ptr [RBP + -0x28], XMM0,0x140307aa6: MOV qword ptr [RBP + -0x18], R15,0x140307aaa: MOV RSI, qword ptr [RDX + 0x8],0x140307aae: MOV RAX, RSI,0x140307ab1: SHR RAX, 0x2,0x140307ab5: LEA RDI, [RAX + RAX*0x2],0x140307ab9: MOV RAX, 0x7fffffffffffffff,0x140307ac3: TEST RDI, RDI,0x140307ac6: JZ 0x140307b74,0x140307acc: CMP RDI, RAX,0x140307acf: JA 0x140307e47,0x140307ad5: CMP RDI, 0x1000,0x140307adc: JC 0x140307b07,0x140307ade: LEA RCX, [RDI + 0x27],0x140307ae2: CMP RCX, RDI,0x140307ae5: JBE 0x140307e4d,0x140307aeb: CALL 0x1403272a0,0x140307af0: TEST RAX, RAX,0x140307af3: JZ 0x140307df8,0x140307af9: LEA RBX, [RAX + 0x27],0x140307afd: AND RBX, -0x20,0x140307b01: MOV qword ptr [RBX + -0x8], RAX,0x140307b05: JMP 0x140307b12,0x140307b07: MOV RCX, RDI,0x140307b0a: CALL 0x1403272a0,0x140307b0f: MOV RBX, RAX,0x140307b12: MOV RDX, qword ptr [RBP + -0x28],0x140307b16: MOV R8, qword ptr [RBP + -0x20],0x140307b1a: SUB R8, RDX,0x140307b1d: MOV RCX, RBX,0x140307b20: CALL 0x14035f420,0x140307b25: MOV RCX, qword ptr [RBP + -0x28],0x140307b29: TEST RCX, RCX,0x140307b2c: JZ 0x140307b64,0x140307b2e: MOV RDX, qword ptr [RBP + -0x18],0x140307b32: SUB RDX, RCX,0x140307b35: CMP RDX, 0x1000,0x140307b3c: JC 0x140307b59,0x140307b3e: MOV RAX, qword ptr [RCX + -0x8],0x140307b42: SUB RCX, RAX,0x140307b45: SUB RCX, 0x8,0x140307b49: CMP RCX, 0x1f,0x140307b4d: JA 0x140307df8,0x140307b53: ADD RDX, 0x27,0x140307b57: JMP 0x140307b5c,0x140307b59: MOV RAX, RCX,0x140307b5c: MOV RCX, RAX,0x140307b5f: CALL 0x1403272f0,0x140307b64: MOV qword ptr [RBP + -0x28], RBX,0x140307b68: MOV qword ptr [RBP + -0x20], RBX,0x140307b6c: LEA RAX, [RDI + RBX*0x1],0x140307b70: MOV qword ptr [RBP + -0x18], RAX,0x140307b74: MOV R12D, R15D,0x140307b77: MOV R13D, R15D,0x140307b7a: MOV RDI, R15,0x140307b7d: MOV qword ptr [RBP + 0x50], R15,0x140307b81: MOV RAX, qword ptr [R14],0x140307b84: MOV qword ptr [RBP + 0x58], RAX,0x140307b88: LEA RCX, [RSI + RAX*0x1],0x140307b8c: MOV qword ptr [RBP + -0x30], RCX,0x140307b90: TEST RSI, RSI,0x140307b93: JZ 0x140307e13,0x140307b99: NOP dword ptr [RAX],0x140307ba0: MOVZX EBX, byte ptr [RAX],0x140307ba3: MOV ECX, EBX,0x140307ba5: CALL 0x140341510,0x140307baa: TEST EAX, EAX,0x140307bac: JNZ 0x140307d87,0x140307bb2: CMP BL, 0x3d,0x140307bb5: JNZ 0x140307bc3,0x140307bb7: INC RDI,0x140307bba: MOV qword ptr [RBP + 0x50], RDI,0x140307bbe: JMP 0x140307d87,0x140307bc3: TEST RDI, RDI,0x140307bc6: JNZ 0x140307db8,0x140307bcc: LEA EAX, [RBX + -0x41],0x140307bcf: CMP AL, 0x19,0x140307bd1: JA 0x140307bdb,0x140307bd3: MOVSX EAX, BL,0x140307bd6: SUB EAX, 0x41,0x140307bd9: JMP 0x140307bf7,0x140307bdb: LEA EAX, [RBX + -0x61],0x140307bde: CMP AL, 0x19,0x140307be0: JA 0x140307bea,0x140307be2: MOVSX EAX, BL,0x140307be5: SUB EAX, 0x47,0x140307be8: JMP 0x140307bf7,0x140307bea: LEA EAX, [RBX + -0x30],0x140307bed: CMP AL, 0x9,0x140307bef: JA 0x140307c01,0x140307bf1: MOVSX EAX, BL,0x140307bf4: ADD EAX, 0x4,0x140307bf7: TEST EAX, EAX,0x140307bf9: JS 0x140307db8,0x140307bff: JMP 0x140307c1b,0x140307c01: CMP BL, 0x2b,0x140307c04: JNZ 0x140307c0d,0x140307c06: MOV EAX, 0x3e,0x140307c0b: JMP 0x140307c1b,0x140307c0d: CMP BL, 0x2f,0x140307c10: JNZ 0x140307db8,0x140307c16: MOV EAX, 0x3f,0x140307c1b: SHL R12D, 0x6,0x140307c1f: OR R12D, EAX,0x140307c22: LEA EAX, [R13 + 0x6],0x140307c26: CMP EAX, 0x8,0x140307c29: JL 0x140307d84,0x140307c2f: SUB R13D, 0x2,0x140307c33: MOV R15D, R12D,0x140307c36: MOV ECX, R13D,0x140307c39: SHR R15D, CL,0x140307c3c: MOV RSI, qword ptr [RBP + -0x20],0x140307c40: MOV RCX, qword ptr [RBP + -0x18],0x140307c44: CMP RSI, RCX,0x140307c47: JZ 0x140307c55,0x140307c49: MOV byte ptr [RSI], R15B,0x140307c4c: INC qword ptr [RBP + -0x20],0x140307c50: JMP 0x140307d87,0x140307c55: MOV RAX, qword ptr [RBP + -0x28],0x140307c59: MOV R14, RSI,0x140307c5c: SUB R14, RAX,0x140307c5f: MOV R9, 0x7fffffffffffffff,0x140307c69: CMP R14, R9,0x140307c6c: JZ 0x140307e47,0x140307c72: LEA R8, [R14 + 0x1],0x140307c76: MOV qword ptr [RBP + 0x60], R8,0x140307c7a: SUB RCX, RAX,0x140307c7d: MOV RDX, RCX,0x140307c80: SHR RDX, 0x1,0x140307c83: MOV RAX, R9,0x140307c86: SUB RAX, RDX,0x140307c89: CMP RCX, RAX,0x140307c8c: JBE 0x140307c9d,0x140307c8e: MOV RBX, R9,0x140307c91: MOV RCX, -0x7fffffffffffffda,0x140307c9b: JMP 0x140307cca,0x140307c9d: LEA RAX, [RDX + RCX*0x1],0x140307ca1: MOV RBX, R8,0x140307ca4: CMP RAX, R8,0x140307ca7: CMOVNC RBX, RAX,0x140307cab: TEST RBX, RBX,0x140307cae: JNZ 0x140307cb4,0x140307cb0: XOR EDI, EDI,0x140307cb2: JMP 0x140307cf1,0x140307cb4: CMP RBX, 0x1000,0x140307cbb: JC 0x140307ce6,0x140307cbd: LEA RCX, [RBX + 0x27],0x140307cc1: CMP RCX, RBX,0x140307cc4: JBE 0x140307e4d,0x140307cca: CALL 0x1403272a0,0x140307ccf: TEST RAX, RAX,0x140307cd2: JZ 0x140307df8,0x140307cd8: LEA RDI, [RAX + 0x27],0x140307cdc: AND RDI, -0x20,0x140307ce0: MOV qword ptr [RDI + -0x8], RAX,0x140307ce4: JMP 0x140307cf1,0x140307ce6: MOV RCX, RBX,0x140307ce9: CALL 0x1403272a0,0x140307cee: MOV RDI, RAX,0x140307cf1: MOV byte ptr [RDI + R14*0x1], R15B,0x140307cf5: MOV R8, qword ptr [RBP + -0x20],0x140307cf9: MOV RDX, qword ptr [RBP + -0x28],0x140307cfd: MOV RCX, RDI,0x140307d00: CMP RSI, R8,0x140307d03: JNZ 0x140307d0a,0x140307d05: SUB R8, RDX,0x140307d08: JMP 0x140307d26,0x140307d0a: MOV R8, RSI,0x140307d0d: SUB R8, RDX,0x140307d10: CALL 0x14035f420,0x140307d15: MOV R8, qword ptr [RBP + -0x20],0x140307d19: SUB R8, RSI,0x140307d1c: LEA RCX, [R14 + 0x1],0x140307d20: ADD RCX, RDI,0x140307d23: MOV RDX, RSI,0x140307d26: CALL 0x14035f420,0x140307d2b: MOV RAX, qword ptr [RBP + -0x28],0x140307d2f: TEST RAX, RAX,0x140307d32: JZ 0x140307d67,0x140307d34: MOV RDX, qword ptr [RBP + -0x18],0x140307d38: SUB RDX, RAX,0x140307d3b: CMP RDX, 0x1000,0x140307d42: JC 0x140307d5f,0x140307d44: MOV RCX, qword ptr [RAX + -0x8],0x140307d48: SUB RAX, RCX,0x140307d4b: SUB RAX, 0x8,0x140307d4f: CMP RAX, 0x1f,0x140307d53: JA 0x140307df8,0x140307d59: ADD RDX, 0x27,0x140307d5d: JMP 0x140307d62,0x140307d5f: MOV RCX, RAX,0x140307d62: CALL 0x1403272f0,0x140307d67: MOV qword ptr [RBP + -0x28], RDI,0x140307d6b: MOV RAX, qword ptr [RBP + 0x60],0x140307d6f: ADD RAX, RDI,0x140307d72: MOV qword ptr [RBP + -0x20], RAX,0x140307d76: LEA RAX, [RBX + RDI*0x1],0x140307d7a: MOV qword ptr [RBP + -0x18], RAX,0x140307d7e: MOV RDI, qword ptr [RBP + 0x50],0x140307d82: JMP 0x140307d87,0x140307d84: MOV R13D, EAX,0x140307d87: MOV RAX, qword ptr [RBP + 0x58],0x140307d8b: INC RAX,0x140307d8e: MOV qword ptr [RBP + 0x58], RAX,0x140307d92: CMP RAX, qword ptr [RBP + -0x30],0x140307d96: JNZ 0x140307ba0,0x140307d9c: CMP RDI, 0x2,0x140307da0: JA 0x140307db8,0x140307da2: TEST R13D, R13D,0x140307da5: JLE 0x140307e13,0x140307da7: MOV ECX, R13D,0x140307daa: MOV EAX, 0x1,0x140307daf: SHL EAX, CL,0x140307db1: DEC EAX,0x140307db3: TEST R12D, EAX,0x140307db6: JZ 0x140307e13,0x140307db8: MOV RBX, qword ptr [RBP + 0x48],0x140307dbc: MOV byte ptr [RBX + 0x18], 0x0,0x140307dc0: MOV RAX, qword ptr [RBP + -0x28],0x140307dc4: TEST RAX, RAX,0x140307dc7: JZ 0x140307e0e,0x140307dc9: MOV RDX, qword ptr [RBP + -0x18],0x140307dcd: SUB RDX, RAX,0x140307dd0: CMP RDX, 0x1000,0x140307dd7: JC 0x140307e06,0x140307dd9: MOV RCX, qword ptr [RAX + -0x8],0x140307ddd: SUB RAX, RCX,0x140307de0: SUB RAX, 0x8,0x140307de4: CMP RAX, 0x1f,0x140307de8: JA 0x140307dff,0x140307dea: ADD RDX, 0x27,0x140307dee: CALL 0x1403272f0,0x140307df3: MOV RAX, RBX,0x140307df6: JMP 0x140307e36,0x140307df8: MOV ECX, 0x5,0x140307dfd: INT 0x29,0x140307dff: MOV ECX, 0x5,0x140307e04: INT 0x29,0x140307e06: MOV RCX, RAX,0x140307e09: CALL 0x1403272f0,0x140307e0e: MOV RAX, RBX,0x140307e11: JMP 0x140307e36,0x140307e13: MOV RDX, qword ptr [RBP + -0x18],0x140307e17: MOV RCX, qword ptr [RBP + -0x20],0x140307e1b: MOV RAX, qword ptr [RBP + -0x28],0x140307e1f: MOV R8, qword ptr [RBP + 0x48],0x140307e23: MOV qword ptr [R8], RAX,0x140307e26: MOV qword ptr [R8 + 0x8], RCX,0x140307e2a: MOV qword ptr [R8 + 0x10], RDX,0x140307e2e: MOV byte ptr [R8 + 0x18], 0x1,0x140307e33: MOV RAX, R8,0x140307e36: ADD RSP, 0x58,0x140307e3a: POP R15,0x140307e3c: POP R14,0x140307e3e: POP R13,0x140307e40: POP R12,0x140307e42: POP RDI,0x140307e43: POP RSI,0x140307e44: POP RBX,0x140307e45: POP RBP,0x140307e46: RET,0x140307e47: CALL 0x14000bff0,0x140307e4d: CALL 0x140005500

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140309020 | FUN_140309020 | [object Object] | [object Object] |
| 0x140309ea0 | FUN_140309ea0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x140005500 | FUN_140005500       | [object Object] | [object Object] |
| 0x14000bff0 | FUN_14000bff0       | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0       | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20 | [object Object] | [object Object] |
| 0x140341510 | isspace             | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420       | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140309148    | 0x140307a80    | [object Object]  | [object Object]  | [object Object] |
| 0x14030917c    | 0x140307a80    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a161    | 0x140307a80    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a18e    | 0x140307a80    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6d4c    | 0x140307a80    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x140307a80    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x140307aa1    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307aa6    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307ac6    | 0x140307b74              | [object Object]  | [object Object]  | [object Object] |
| 0x140307acf    | 0x140307e47              | [object Object]  | [object Object]  | [object Object] |
| 0x140307adc    | 0x140307b07              | [object Object]  | [object Object]  | [object Object] |
| 0x140307ae5    | 0x140307e4d              | [object Object]  | [object Object]  | [object Object] |
| 0x140307aeb    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307af3    | 0x140307df8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b05    | 0x140307b12              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b0a    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b12    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307b16    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307b20    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b25    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307b2c    | 0x140307b64              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b2e    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307b3c    | 0x140307b59              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b4d    | 0x140307df8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b57    | 0x140307b5c              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b5f    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307b64    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307b68    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307b70    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307b7d    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x140307b84    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x140307b8c    | stack:0xffffffffffffff90 | [object Object]  |                  | [object Object] |
| 0x140307b93    | 0x140307e13              | [object Object]  | [object Object]  | [object Object] |
| 0x140307ba5    | 0x140341510              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bac    | 0x140307d87              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bb5    | 0x140307bc3              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bba    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x140307bbe    | 0x140307d87              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bc6    | 0x140307db8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bd1    | 0x140307bdb              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bd9    | 0x140307bf7              | [object Object]  | [object Object]  | [object Object] |
| 0x140307be0    | 0x140307bea              | [object Object]  | [object Object]  | [object Object] |
| 0x140307be8    | 0x140307bf7              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bef    | 0x140307c01              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bf9    | 0x140307db8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307bff    | 0x140307c1b              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c04    | 0x140307c0d              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c0b    | 0x140307c1b              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c10    | 0x140307db8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c29    | 0x140307d84              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c3c    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307c40    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307c47    | 0x140307c55              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c4c    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307c50    | 0x140307d87              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c55    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307c6c    | 0x140307e47              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c76    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x140307c8c    | 0x140307c9d              | [object Object]  | [object Object]  | [object Object] |
| 0x140307c9b    | 0x140307cca              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cae    | 0x140307cb4              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cb2    | 0x140307cf1              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cbb    | 0x140307ce6              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cc4    | 0x140307e4d              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cca    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cd2    | 0x140307df8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307ce4    | 0x140307cf1              | [object Object]  | [object Object]  | [object Object] |
| 0x140307ce9    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307cf5    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307cf9    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307d03    | 0x140307d0a              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d08    | 0x140307d26              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d10    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d15    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307d26    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d2b    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307d32    | 0x140307d67              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d34    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307d42    | 0x140307d5f              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d53    | 0x140307df8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d5d    | 0x140307d62              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d62    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d67    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307d6b    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x140307d72    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307d7a    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307d7e    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x140307d82    | 0x140307d87              | [object Object]  | [object Object]  | [object Object] |
| 0x140307d87    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x140307d8e    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x140307d92    | stack:0xffffffffffffff90 | [object Object]  |                  | [object Object] |
| 0x140307d96    | 0x140307ba0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307da0    | 0x140307db8              | [object Object]  | [object Object]  | [object Object] |
| 0x140307da5    | 0x140307e13              | [object Object]  | [object Object]  | [object Object] |
| 0x140307db6    | 0x140307e13              | [object Object]  | [object Object]  | [object Object] |
| 0x140307db8    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x140307dc0    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307dc7    | 0x140307e0e              | [object Object]  | [object Object]  | [object Object] |
| 0x140307dc9    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307dd7    | 0x140307e06              | [object Object]  | [object Object]  | [object Object] |
| 0x140307de8    | 0x140307dff              | [object Object]  | [object Object]  | [object Object] |
| 0x140307dee    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307df6    | 0x140307e36              | [object Object]  | [object Object]  | [object Object] |
| 0x140307e09    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307e11    | 0x140307e36              | [object Object]  | [object Object]  | [object Object] |
| 0x140307e13    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140307e17    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140307e1b    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140307e1f    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x140307e47    | 0x14000bff0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307e4d    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value               | source_address |
|-------------|---------------------|----------------|
| 0x140005500 | FUN_140005500       | 0x140307e4d    |
| 0x14000bff0 | FUN_14000bff0       | 0x140307e47    |
| 0x140307b07 | LAB_140307b07       | 0x140307adc    |
| 0x140307b12 | LAB_140307b12       | 0x140307b05    |
| 0x140307b59 | LAB_140307b59       | 0x140307b3c    |
| 0x140307b5c | LAB_140307b5c       | 0x140307b57    |
| 0x140307b64 | LAB_140307b64       | 0x140307b2c    |
| 0x140307b74 | LAB_140307b74       | 0x140307ac6    |
| 0x140307ba0 | LAB_140307ba0       | 0x140307d96    |
| 0x140307bc3 | LAB_140307bc3       | 0x140307bb5    |
| 0x140307bdb | LAB_140307bdb       | 0x140307bd1    |
| 0x140307bea | LAB_140307bea       | 0x140307be0    |
| 0x140307bf7 | LAB_140307bf7       | 0x140307bd9    |
| 0x140307bf7 | LAB_140307bf7       | 0x140307be8    |
| 0x140307c01 | LAB_140307c01       | 0x140307bef    |
| 0x140307c0d | LAB_140307c0d       | 0x140307c04    |
| 0x140307c1b | LAB_140307c1b       | 0x140307bff    |
| 0x140307c1b | LAB_140307c1b       | 0x140307c0b    |
| 0x140307c55 | LAB_140307c55       | 0x140307c47    |
| 0x140307c9d | LAB_140307c9d       | 0x140307c8c    |
| 0x140307cb4 | LAB_140307cb4       | 0x140307cae    |
| 0x140307cca | LAB_140307cca       | 0x140307c9b    |
| 0x140307ce6 | LAB_140307ce6       | 0x140307cbb    |
| 0x140307cf1 | LAB_140307cf1       | 0x140307cb2    |
| 0x140307cf1 | LAB_140307cf1       | 0x140307ce4    |
| 0x140307d0a | LAB_140307d0a       | 0x140307d03    |
| 0x140307d26 | LAB_140307d26       | 0x140307d08    |
| 0x140307d5f | LAB_140307d5f       | 0x140307d42    |
| 0x140307d62 | LAB_140307d62       | 0x140307d5d    |
| 0x140307d67 | LAB_140307d67       | 0x140307d32    |
| 0x140307d84 | LAB_140307d84       | 0x140307c29    |
| 0x140307d87 | LAB_140307d87       | 0x140307bac    |
| 0x140307d87 | LAB_140307d87       | 0x140307bbe    |
| 0x140307d87 | LAB_140307d87       | 0x140307c50    |
| 0x140307d87 | LAB_140307d87       | 0x140307d82    |
| 0x140307db8 | LAB_140307db8       | 0x140307bc6    |
| 0x140307db8 | LAB_140307db8       | 0x140307bf9    |
| 0x140307db8 | LAB_140307db8       | 0x140307c10    |
| 0x140307db8 | LAB_140307db8       | 0x140307da0    |
| 0x140307df8 | LAB_140307df8       | 0x140307af3    |
| 0x140307df8 | LAB_140307df8       | 0x140307b4d    |
| 0x140307df8 | LAB_140307df8       | 0x140307cd2    |
| 0x140307df8 | LAB_140307df8       | 0x140307d53    |
| 0x140307dff | LAB_140307dff       | 0x140307de8    |
| 0x140307e06 | LAB_140307e06       | 0x140307dd7    |
| 0x140307e0e | LAB_140307e0e       | 0x140307dc7    |
| 0x140307e13 | LAB_140307e13       | 0x140307b93    |
| 0x140307e13 | LAB_140307e13       | 0x140307da5    |
| 0x140307e13 | LAB_140307e13       | 0x140307db6    |
| 0x140307e36 | LAB_140307e36       | 0x140307df6    |
| 0x140307e36 | LAB_140307e36       | 0x140307e11    |
| 0x140307e47 | LAB_140307e47       | 0x140307acf    |
| 0x140307e47 | LAB_140307e47       | 0x140307c6c    |
| 0x140307e4d | LAB_140307e4d       | 0x140307ae5    |
| 0x140307e4d | LAB_140307e4d       | 0x140307cc4    |
| 0x1403272a0 | FUN_1403272a0       | 0x140307aeb    |
| 0x1403272a0 | FUN_1403272a0       | 0x140307b0a    |
| 0x1403272a0 | FUN_1403272a0       | 0x140307cca    |
| 0x1403272a0 | FUN_1403272a0       | 0x140307ce9    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140307b5f    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140307d62    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140307dee    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x140307e09    |
| 0x140341510 | isspace             | 0x140307ba5    |
| 0x14035f420 | FUN_14035f420       | 0x140307b20    |
| 0x14035f420 | FUN_14035f420       | 0x140307d10    |
| 0x14035f420 | FUN_14035f420       | 0x140307d26    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140307a80 | 0x140307acc | 0x140307acc,0x140307b74 |
| 0x140307acc | 0x140307ad5 | 0x140307ad5,0x140307e47 |
| 0x140307ad5 | 0x140307ade | 0x140307ade,0x140307b07 |
| 0x140307ade | 0x140307aeb | 0x140307aeb,0x140307e4d |
| 0x140307aeb | 0x140307af9 | 0x140307af9,0x140307df8 |
| 0x140307af9 | 0x140307b07 | 0x140307b12             |
| 0x140307b07 | 0x140307b12 | 0x140307b12             |
| 0x140307b12 | 0x140307b2e | 0x140307b2e,0x140307b64 |
| 0x140307b2e | 0x140307b3e | 0x140307b3e,0x140307b59 |
| 0x140307b3e | 0x140307b53 | 0x140307b53,0x140307df8 |
| 0x140307b53 | 0x140307b59 | 0x140307b5c             |
| 0x140307b59 | 0x140307b5c | 0x140307b5c             |
| 0x140307b5c | 0x140307b64 | 0x140307b64             |
| 0x140307b64 | 0x140307b74 | 0x140307b74             |
| 0x140307b74 | 0x140307b99 | 0x140307b99,0x140307e13 |
| 0x140307b99 | 0x140307ba0 | 0x140307ba0             |
| 0x140307ba0 | 0x140307bb2 | 0x140307bb2,0x140307d87 |
| 0x140307bb2 | 0x140307bb7 | 0x140307bb7,0x140307bc3 |
| 0x140307bb7 | 0x140307bc3 | 0x140307d87             |
| 0x140307bc3 | 0x140307bcc | 0x140307bcc,0x140307db8 |
| 0x140307bcc | 0x140307bd3 | 0x140307bd3,0x140307bdb |
| 0x140307bd3 | 0x140307bdb | 0x140307bf7             |
| 0x140307bdb | 0x140307be2 | 0x140307be2,0x140307bea |
| 0x140307be2 | 0x140307bea | 0x140307bf7             |
| 0x140307bea | 0x140307bf1 | 0x140307bf1,0x140307c01 |
| 0x140307bf1 | 0x140307bf7 | 0x140307bf7             |
| 0x140307bf7 | 0x140307bff | 0x140307bff,0x140307db8 |
| 0x140307bff | 0x140307c01 | 0x140307c1b             |
| 0x140307c01 | 0x140307c06 | 0x140307c06,0x140307c0d |
| 0x140307c06 | 0x140307c0d | 0x140307c1b             |
| 0x140307c0d | 0x140307c16 | 0x140307c16,0x140307db8 |
| 0x140307c16 | 0x140307c1b | 0x140307c1b             |
| 0x140307c1b | 0x140307c2f | 0x140307c2f,0x140307d84 |
| 0x140307c2f | 0x140307c49 | 0x140307c49,0x140307c55 |
| 0x140307c49 | 0x140307c55 | 0x140307d87             |
| 0x140307c55 | 0x140307c72 | 0x140307c72,0x140307e47 |
| 0x140307c72 | 0x140307c8e | 0x140307c8e,0x140307c9d |
| 0x140307c8e | 0x140307c9d | 0x140307cca             |
| 0x140307c9d | 0x140307cb0 | 0x140307cb0,0x140307cb4 |
| 0x140307cb0 | 0x140307cb4 | 0x140307cf1             |
| 0x140307cb4 | 0x140307cbd | 0x140307cbd,0x140307ce6 |
| 0x140307cbd | 0x140307cca | 0x140307cca,0x140307e4d |
| 0x140307cca | 0x140307cd8 | 0x140307cd8,0x140307df8 |
| 0x140307cd8 | 0x140307ce6 | 0x140307cf1             |
| 0x140307ce6 | 0x140307cf1 | 0x140307cf1             |
| 0x140307cf1 | 0x140307d05 | 0x140307d05,0x140307d0a |
| 0x140307d05 | 0x140307d0a | 0x140307d26             |
| 0x140307d0a | 0x140307d26 | 0x140307d26             |
| 0x140307d26 | 0x140307d34 | 0x140307d34,0x140307d67 |
| 0x140307d34 | 0x140307d44 | 0x140307d44,0x140307d5f |
| 0x140307d44 | 0x140307d59 | 0x140307d59,0x140307df8 |
| 0x140307d59 | 0x140307d5f | 0x140307d62             |
| 0x140307d5f | 0x140307d62 | 0x140307d62             |
| 0x140307d62 | 0x140307d67 | 0x140307d67             |
| 0x140307d67 | 0x140307d84 | 0x140307d87             |
| 0x140307d84 | 0x140307d87 | 0x140307d87             |
| 0x140307d87 | 0x140307d9c | 0x140307ba0,0x140307d9c |
| 0x140307d9c | 0x140307da2 | 0x140307da2,0x140307db8 |
| 0x140307da2 | 0x140307da7 | 0x140307da7,0x140307e13 |
| 0x140307da7 | 0x140307db8 | 0x140307db8,0x140307e13 |
| 0x140307db8 | 0x140307dc9 | 0x140307dc9,0x140307e0e |
| 0x140307dc9 | 0x140307dd9 | 0x140307dd9,0x140307e06 |
| 0x140307dd9 | 0x140307dea | 0x140307dea,0x140307dff |
| 0x140307dea | 0x140307df8 | 0x140307e36             |
| 0x140307df8 | 0x140307dff | 0x140307dff             |
| 0x140307dff | 0x140307e06 | 0x140307e06             |
| 0x140307e06 | 0x140307e0e | 0x140307e0e             |
| 0x140307e0e | 0x140307e13 | 0x140307e36             |
| 0x140307e13 | 0x140307e36 | 0x140307e36             |
| 0x140307e36 | 0x140307e47 |                         |
| 0x140307e47 | 0x140307e4c |                         |
| 0x140307e4d | 0x140307e52 |                         |

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

longlong *

## normalized_result.native_api.return_type.size_bytes

8

## normalized_result.native_api.return_type.storage

RAX:8

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                       |
|------------------|-------------------------|----------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.        |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type longlong *. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters

| ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | longlong *   | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | undefined8 * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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

| id               | address     | sequence | opcode        | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|---------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x140307a94#3904 | 0x140307a94 | 3904     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307a94#3905 | 0x140307a94 | 3905     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307a9b#2818 | 0x140307a9b | 2818     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307aa1#3306 | 0x140307aa1 | 3306     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307aa1#3307 | 0x140307aa1 | 3307     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307aa6#57   | 0x140307aa6 | 57       | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307aaa#59   | 0x140307aaa | 59       | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307aaa#3906 | 0x140307aaa | 3906     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307ab1#64   | 0x140307ab1 | 64       | INT_RIGHT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ab5#3202 | 0x140307ab5 | 3202     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ac3#111  | 0x140307ac3 | 111      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ac6#116  | 0x140307ac6 | 116      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307acf#128  | 0x140307acf | 128      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307acf#129  | 0x140307acf | 129      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307ad5#131  | 0x140307ad5 | 131      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307adc#140  | 0x140307adc | 140      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307ade#141  | 0x140307ade | 141      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ae5#153  | 0x140307ae5 | 153      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ae5#154  | 0x140307ae5 | 154      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307aeb#157  | 0x140307aeb | 157      | CALL          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307aeb#3480 | 0x140307aeb | 3480     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307aeb#3514 | 0x140307aeb | 3514     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307aeb#3548 | 0x140307aeb | 3548     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307aeb#3582 | 0x140307aeb | 3582     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307af0#162  | 0x140307af0 | 162      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307af3#167  | 0x140307af3 | 167      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307af9#168  | 0x140307af9 | 168      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307afd#172  | 0x140307afd | 172      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307afd#3953 | 0x140307afd | 3953     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b01#181  | 0x140307b01 | 181      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307b01#3907 | 0x140307b01 | 3907     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307b05#182  | 0x140307b05 | 182      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307b0a#1322 | 0x140307b0a | 1322     | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b0a#3479 | 0x140307b0a | 3479     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b0a#3513 | 0x140307b0a | 3513     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b0a#3547 | 0x140307b0a | 3547     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b0a#3581 | 0x140307b0a | 3581     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b0a#3952 | 0x140307b0a | 3952     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b12#2603 | 0x140307b12 | 2603     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b12#3504 | 0x140307b12 | 3504     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b12#3537 | 0x140307b12 | 3537     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b12#3571 | 0x140307b12 | 3571     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b12#3605 | 0x140307b12 | 3605     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b1a#191  | 0x140307b1a | 191      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b1a#3954 | 0x140307b1a | 3954     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b1a#3955 | 0x140307b1a | 3955     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b20#201  | 0x140307b20 | 201      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x140307b20#3481 | 0x140307b20 | 3481     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b20#3515 | 0x140307b20 | 3515     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b20#3549 | 0x140307b20 | 3549     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b20#3583 | 0x140307b20 | 3583     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b29#209  | 0x140307b29 | 209      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b2c#214  | 0x140307b2c | 214      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307b32#220  | 0x140307b32 | 220      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b32#3956 | 0x140307b32 | 3956     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b32#3957 | 0x140307b32 | 3957     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b35#228  | 0x140307b35 | 228      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b3c#237  | 0x140307b3c | 237      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307b3c#3929 | 0x140307b3c | 3929     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b3e#239  | 0x140307b3e | 239      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b3e#3908 | 0x140307b3e | 3908     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307b3e#3958 | 0x140307b3e | 3958     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b45#252  | 0x140307b45 | 252      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b45#3909 | 0x140307b45 | 3909     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b45#3959 | 0x140307b45 | 3959     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b4d#269  | 0x140307b4d | 269      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b4d#271  | 0x140307b4d | 271      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307b4d#3960 | 0x140307b4d | 3960     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b53#274  | 0x140307b53 | 274      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b57#281  | 0x140307b57 | 281      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307b57#3928 | 0x140307b57 | 3928     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b5c#2498 | 0x140307b5c | 2498     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b5c#2576 | 0x140307b5c | 2576     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b5f#285  | 0x140307b5f | 285      | CALL          | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307b5f#3516 | 0x140307b5f | 3516     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b5f#3550 | 0x140307b5f | 3550     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b5f#3584 | 0x140307b5f | 3584     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b6c#293  | 0x140307b6c | 293      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b6c#3961 | 0x140307b6c | 3961     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b6c#3962 | 0x140307b6c | 3962     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b70#3951 | 0x140307b70 | 3951     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b74#3572 | 0x140307b74 | 3572     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b74#3606 | 0x140307b74 | 3606     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b7d#305  | 0x140307b7d | 305      | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b81#306  | 0x140307b81 | 306      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b81#3963 | 0x140307b81 | 3963     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b88#312  | 0x140307b88 | 312      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307b90#321  | 0x140307b90 | 321      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307b93#326  | 0x140307b93 | 326      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307b93#3943 | 0x140307b93 | 3943     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b93#3944 | 0x140307b93 | 3944     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307b93#3949 | 0x140307b93 | 3949     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307ba0#327  | 0x140307ba0 | 327      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#2503 | 0x140307ba0 | 2503     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#2596 | 0x140307ba0 | 2596     | INT_ZEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307ba0#2652 | 0x140307ba0 | 2652     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#2752 | 0x140307ba0 | 2752     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#2782 | 0x140307ba0 | 2782     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#3369 | 0x140307ba0 | 3369     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#3505 | 0x140307ba0 | 3505     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#3539 | 0x140307ba0 | 3539     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#3573 | 0x140307ba0 | 3573     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba0#3607 | 0x140307ba0 | 3607     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#334  | 0x140307ba5 | 334      | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#3483 | 0x140307ba5 | 3483     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#3517 | 0x140307ba5 | 3517     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#3551 | 0x140307ba5 | 3551     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#3585 | 0x140307ba5 | 3585     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ba5#3927 | 0x140307ba5 | 3927     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307baa#339  | 0x140307baa | 339      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bac#345  | 0x140307bac | 345      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307bac#3939 | 0x140307bac | 3939     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bac#3945 | 0x140307bac | 3945     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bb2#351  | 0x140307bb2 | 351      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bb5#357  | 0x140307bb5 | 357      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307bb7#359  | 0x140307bb7 | 359      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bbe#369  | 0x140307bbe | 369      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307bbe#3940 | 0x140307bbe | 3940     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bbe#3946 | 0x140307bbe | 3946     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bc3#658  | 0x140307bc3 | 658      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bc6#664  | 0x140307bc6 | 664      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307bcc#3224 | 0x140307bcc | 3224     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bd1#677  | 0x140307bd1 | 677      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bd1#679  | 0x140307bd1 | 679      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307bd1#3964 | 0x140307bd1 | 3964     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bd3#680  | 0x140307bd3 | 680      | INT_SEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bd3#3969 | 0x140307bd3 | 3969     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bd6#684  | 0x140307bd6 | 684      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bd9#692  | 0x140307bd9 | 692      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307bdb#3225 | 0x140307bdb | 3225     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307be0#1248 | 0x140307be0 | 1248     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307be0#1250 | 0x140307be0 | 1250     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307be0#3965 | 0x140307be0 | 3965     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307be2#1251 | 0x140307be2 | 1251     | INT_SEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307be2#3966 | 0x140307be2 | 3966     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307be5#1255 | 0x140307be5 | 1255     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307be8#1263 | 0x140307be8 | 1263     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307bea#3226 | 0x140307bea | 3226     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bef#1276 | 0x140307bef | 1276     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bef#1278 | 0x140307bef | 1278     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307bef#3967 | 0x140307bef | 3967     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bf1#1279 | 0x140307bf1 | 1279     | INT_SEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bf1#3968 | 0x140307bf1 | 3968     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bf4#1283 | 0x140307bf4 | 1283     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bf7#696  | 0x140307bf7 | 696      | INT_SLESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307bf7#3234 | 0x140307bf7 | 3234     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307bf7#3970 | 0x140307bf7 | 3970     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307bf9#702  | 0x140307bf9 | 702      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c01#1296 | 0x140307c01 | 1296     | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c04#1302 | 0x140307c04 | 1302     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c06#3237 | 0x140307c06 | 3237     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c0b#1304 | 0x140307c0b | 1304     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307c0d#1310 | 0x140307c0d | 1310     | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c10#1316 | 0x140307c10 | 1316     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c16#3236 | 0x140307c16 | 3236     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c1b#706  | 0x140307c1b | 706      | INT_LEFT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c1b#2730 | 0x140307c1b | 2730     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c1b#3235 | 0x140307c1b | 3235     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307c1f#748  | 0x140307c1f | 748      | INT_OR        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c1f#2747 | 0x140307c1f | 2747     | INT_ZEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c22#756  | 0x140307c22 | 756      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c22#3251 | 0x140307c22 | 3251     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c29#769  | 0x140307c29 | 769      | INT_SLESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c29#770  | 0x140307c29 | 770      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c29#3971 | 0x140307c29 | 3971     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c2f#773  | 0x140307c2f | 773      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c2f#2775 | 0x140307c2f | 2775     | INT_ZEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c39#785  | 0x140307c39 | 785      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c39#787  | 0x140307c39 | 787      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c39#2505 | 0x140307c39 | 2505     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c44#838  | 0x140307c44 | 838      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c47#843  | 0x140307c47 | 843      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c47#3262 | 0x140307c47 | 3262     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c49#845  | 0x140307c49 | 845      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307c49#4003 | 0x140307c49 | 4003     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c4c#850  | 0x140307c4c | 850      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c4c#4004 | 0x140307c4c | 4004     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c4c#4005 | 0x140307c4c | 4005     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c50#861  | 0x140307c50 | 861      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307c50#3941 | 0x140307c50 | 3941     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c50#3947 | 0x140307c50 | 3947     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c5c#868  | 0x140307c5c | 868      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c5c#3972 | 0x140307c5c | 3972     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c5c#3973 | 0x140307c5c | 3973     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c69#881  | 0x140307c69 | 881      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c6c#886  | 0x140307c6c | 886      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c72#887  | 0x140307c72 | 887      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c72#3974 | 0x140307c72 | 3974     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c7a#894  | 0x140307c7a | 894      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c7a#3975 | 0x140307c7a | 3975     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c7a#3976 | 0x140307c7a | 3976     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c80#905  | 0x140307c80 | 905      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c86#915  | 0x140307c86 | 915      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c8c#932  | 0x140307c8c | 932      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c8c#933  | 0x140307c8c | 933      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307c8e#934  | 0x140307c8e | 934      | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c91#935  | 0x140307c91 | 935      | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307c9b#936  | 0x140307c9b | 936      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307c9d#1154 | 0x140307c9d | 1154     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307c9d#3977 | 0x140307c9d | 3977     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307ca4#1158 | 0x140307ca4 | 1158     | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ca7#1170 | 0x140307ca7 | 1170     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307ca7#3935 | 0x140307ca7 | 3935     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307ca7#3936 | 0x140307ca7 | 3936     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cab#1176 | 0x140307cab | 1176     | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cab#2597 | 0x140307cab | 2597     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cae#1182 | 0x140307cae | 1182     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307cb0#2648 | 0x140307cb0 | 2648     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cb2#1193 | 0x140307cb2 | 1193     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307cb4#1195 | 0x140307cb4 | 1195     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cbb#1204 | 0x140307cbb | 1204     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307cbd#1205 | 0x140307cbd | 1205     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cbd#3978 | 0x140307cbd | 3978     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cbd#3979 | 0x140307cbd | 3979     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cc4#1217 | 0x140307cc4 | 1217     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cc4#1218 | 0x140307cc4 | 1218     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307cca#939  | 0x140307cca | 939      | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#2537 | 0x140307cca | 2537     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#2600 | 0x140307cca | 2600     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#3487 | 0x140307cca | 3487     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#3521 | 0x140307cca | 3521     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#3555 | 0x140307cca | 3555     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cca#3589 | 0x140307cca | 3589     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ccf#944  | 0x140307ccf | 944      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cd2#949  | 0x140307cd2 | 949      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307cd8#950  | 0x140307cd8 | 950      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cdc#954  | 0x140307cdc | 954      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cdc#3981 | 0x140307cdc | 3981     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307ce0#963  | 0x140307ce0 | 963      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307ce0#3910 | 0x140307ce0 | 3910     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307ce4#964  | 0x140307ce4 | 964      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307ce9#1227 | 0x140307ce9 | 1227     | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ce9#3485 | 0x140307ce9 | 3485     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ce9#3519 | 0x140307ce9 | 3519     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ce9#3553 | 0x140307ce9 | 3553     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ce9#3587 | 0x140307ce9 | 3587     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307ce9#3980 | 0x140307ce9 | 3980     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cf1#966  | 0x140307cf1 | 966      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307cf1#968  | 0x140307cf1 | 968      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307cf1#2598 | 0x140307cf1 | 2598     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#2649 | 0x140307cf1 | 2649     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#3497 | 0x140307cf1 | 3497     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#3531 | 0x140307cf1 | 3531     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#3565 | 0x140307cf1 | 3565     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#3599 | 0x140307cf1 | 3599     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307cf1#3982 | 0x140307cf1 | 3982     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307cf1#3983 | 0x140307cf1 | 3983     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d00#981  | 0x140307d00 | 981      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d03#987  | 0x140307d03 | 987      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307d05#990  | 0x140307d05 | 990      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d05#3990 | 0x140307d05 | 3990     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d05#3991 | 0x140307d05 | 3991     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d08#997  | 0x140307d08 | 997      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307d08#3933 | 0x140307d08 | 3933     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d08#3934 | 0x140307d08 | 3934     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d0d#1119 | 0x140307d0d | 1119     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d0d#3984 | 0x140307d0d | 3984     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d0d#3985 | 0x140307d0d | 3985     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d10#1128 | 0x140307d10 | 1128     | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x140307d10#3488 | 0x140307d10 | 3488     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d10#3522 | 0x140307d10 | 3522     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d10#3556 | 0x140307d10 | 3556     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d10#3590 | 0x140307d10 | 3590     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d19#1134 | 0x140307d19 | 1134     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d19#3986 | 0x140307d19 | 3986     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d19#3987 | 0x140307d19 | 3987     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d1c#1141 | 0x140307d1c | 1141     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d20#1145 | 0x140307d20 | 1145     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d20#3988 | 0x140307d20 | 3988     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d20#3989 | 0x140307d20 | 3989     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d26#1000 | 0x140307d26 | 1000     | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x140307d26#2539 | 0x140307d26 | 2539     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#2573 | 0x140307d26 | 2573     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#2681 | 0x140307d26 | 2681     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3489 | 0x140307d26 | 3489     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3500 | 0x140307d26 | 3500     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3523 | 0x140307d26 | 3523     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3534 | 0x140307d26 | 3534     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3557 | 0x140307d26 | 3557     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3568 | 0x140307d26 | 3568     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3591 | 0x140307d26 | 3591     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d26#3602 | 0x140307d26 | 3602     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d2f#1008 | 0x140307d2f | 1008     | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d32#1013 | 0x140307d32 | 1013     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307d38#1019 | 0x140307d38 | 1019     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d38#3992 | 0x140307d38 | 3992     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d38#3993 | 0x140307d38 | 3993     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d3b#1027 | 0x140307d3b | 1027     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d42#1036 | 0x140307d42 | 1036     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307d42#3932 | 0x140307d42 | 3932     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d44#1038 | 0x140307d44 | 1038     | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d44#3911 | 0x140307d44 | 3911     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307d44#3994 | 0x140307d44 | 3994     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d4b#1051 | 0x140307d4b | 1051     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d4b#3912 | 0x140307d4b | 3912     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d4b#3995 | 0x140307d4b | 3995     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d53#1068 | 0x140307d53 | 1068     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d53#1070 | 0x140307d53 | 1070     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307d53#3996 | 0x140307d53 | 3996     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d59#1073 | 0x140307d59 | 1073     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d5d#1080 | 0x140307d5d | 1080     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307d5d#3931 | 0x140307d5d | 3931     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d62#1083 | 0x140307d62 | 1083     | CALL          | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307d62#2533 | 0x140307d62 | 2533     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d62#2568 | 0x140307d62 | 2568     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d62#3491 | 0x140307d62 | 3491     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d62#3525 | 0x140307d62 | 3525     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d62#3559 | 0x140307d62 | 3559     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d62#3593 | 0x140307d62 | 3593     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d67#3496 | 0x140307d67 | 3496     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d6f#1092 | 0x140307d6f | 1092     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d6f#3997 | 0x140307d6f | 3997     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d6f#3998 | 0x140307d6f | 3998     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d6f#3999 | 0x140307d6f | 3999     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d76#1103 | 0x140307d76 | 1103     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d76#4000 | 0x140307d76 | 4000     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d76#4001 | 0x140307d76 | 4001     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d76#4002 | 0x140307d76 | 4002     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d82#1111 | 0x140307d82 | 1111     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x140307d82#3942 | 0x140307d82 | 3942     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d82#3948 | 0x140307d82 | 3948     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d84#2777 | 0x140307d84 | 2777     | INT_ZEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307d87#2650 | 0x140307d87 | 2650     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#2748 | 0x140307d87 | 2748     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#2778 | 0x140307d87 | 2778     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#3362 | 0x140307d87 | 3362     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#3498 | 0x140307d87 | 3498     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#3532 | 0x140307d87 | 3532     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#3566 | 0x140307d87 | 3566     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d87#3600 | 0x140307d87 | 3600     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307d8b#374  | 0x140307d8b | 374      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307d92#391  | 0x140307d92 | 391      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307d96#397  | 0x140307d96 | 397      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307da0#408  | 0x140307da0 | 408      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307da0#410  | 0x140307da0 | 410      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307da2#2760 | 0x140307da2 | 2760     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307da5#421  | 0x140307da5 | 421      | INT_SLESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307da5#422  | 0x140307da5 | 422      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307daf#426  | 0x140307daf | 426      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307daf#428  | 0x140307daf | 428      | INT_LEFT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307daf#2504 | 0x140307daf | 2504     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307db1#469  | 0x140307db1 | 469      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307db3#479  | 0x140307db3 | 479      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307db3#481  | 0x140307db3 | 481      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307db3#2728 | 0x140307db3 | 2728     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307db6#486  | 0x140307db6 | 486      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307db8#3506 | 0x140307db8 | 3506     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307db8#3540 | 0x140307db8 | 3540     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307db8#3574 | 0x140307db8 | 3574     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307db8#3608 | 0x140307db8 | 3608     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140307dbc#492  | 0x140307dbc | 492      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307dbc#3913 | 0x140307dbc | 3913     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307dbc#4006 | 0x140307dbc | 4006     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dc4#500  | 0x140307dc4 | 500      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dc7#505  | 0x140307dc7 | 505      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307dcd#511  | 0x140307dcd | 511      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dcd#4007 | 0x140307dcd | 4007     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dcd#4008 | 0x140307dcd | 4008     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dd0#519  | 0x140307dd0 | 519      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dd0#4009 | 0x140307dd0 | 4009     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dd7#528  | 0x140307dd7 | 528      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307dd7#3930 | 0x140307dd7 | 3930     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dd9#530  | 0x140307dd9 | 530      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dd9#3914 | 0x140307dd9 | 3914     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307de0#543  | 0x140307de0 | 543      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307de0#3915 | 0x140307de0 | 3915     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307de0#4010 | 0x140307de0 | 4010     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307de8#560  | 0x140307de8 | 560      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307de8#562  | 0x140307de8 | 562      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307de8#3937 | 0x140307de8 | 3937     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307de8#4011 | 0x140307de8 | 4011     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dea#565  | 0x140307dea | 565      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dee#574  | 0x140307dee | 574      | CALL          | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307dee#3494 | 0x140307dee | 3494     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dee#3528 | 0x140307dee | 3528     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dee#3562 | 0x140307dee | 3562     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dee#3596 | 0x140307dee | 3596     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307df8#2601 | 0x140307df8 | 2601     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307df8#3499 | 0x140307df8 | 3499     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307df8#3533 | 0x140307df8 | 3533     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307df8#3567 | 0x140307df8 | 3567     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307df8#3601 | 0x140307df8 | 3601     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307dfd#1113 | 0x140307dfd | 1113     | CALLOTHER     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#1114 | 0x140307dfd | 1114     | CALLIND       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307dfd#3490 | 0x140307dfd | 3490     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#3524 | 0x140307dfd | 3524     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#3558 | 0x140307dfd | 3558     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#3592 | 0x140307dfd | 3592     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#3916 | 0x140307dfd | 3916     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dfd#3938 | 0x140307dfd | 3938     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dfd#4016 | 0x140307dfd | 4016     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307dff#2610 | 0x140307dff | 2610     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dff#2627 | 0x140307dff | 2627     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dff#3510 | 0x140307dff | 3510     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dff#3544 | 0x140307dff | 3544     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dff#3578 | 0x140307dff | 3578     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307dff#3612 | 0x140307dff | 3612     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#622  | 0x140307e04 | 622      | CALLOTHER     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#623  | 0x140307e04 | 623      | CALLIND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#1339 | 0x140307e04 | 1339     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e04#3492 | 0x140307e04 | 3492     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#3526 | 0x140307e04 | 3526     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#3560 | 0x140307e04 | 3560     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#3594 | 0x140307e04 | 3594     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e04#4017 | 0x140307e04 | 4017     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e04#4018 | 0x140307e04 | 4018     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e06#2502 | 0x140307e06 | 2502     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#2609 | 0x140307e06 | 2609     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#2626 | 0x140307e06 | 2626     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#3509 | 0x140307e06 | 3509     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#3543 | 0x140307e06 | 3543     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#3577 | 0x140307e06 | 3577     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e06#3611 | 0x140307e06 | 3611     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e09#625  | 0x140307e09 | 625      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e09#626  | 0x140307e09 | 626      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307e09#627  | 0x140307e09 | 627      | CALL          | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307e09#3493 | 0x140307e09 | 3493     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e09#3527 | 0x140307e09 | 3527     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e09#3561 | 0x140307e09 | 3561     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e09#3595 | 0x140307e09 | 3595     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e09#4019 | 0x140307e09 | 4019     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e13#3541 | 0x140307e13 | 3541     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e13#3575 | 0x140307e13 | 3575     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e13#3609 | 0x140307e13 | 3609     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e23#643  | 0x140307e23 | 643      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307e23#4012 | 0x140307e23 | 4012     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e26#646  | 0x140307e26 | 646      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307e26#3917 | 0x140307e26 | 3917     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e26#4013 | 0x140307e26 | 4013     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e2a#649  | 0x140307e2a | 649      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307e2a#3918 | 0x140307e2a | 3918     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e2a#4014 | 0x140307e2a | 4014     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e2e#652  | 0x140307e2e | 652      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x140307e2e#3919 | 0x140307e2e | 3919     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x140307e2e#4015 | 0x140307e2e | 4015     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e36#2494 | 0x140307e36 | 2494     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e36#3923 | 0x140307e36 | 3923     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e36#3925 | 0x140307e36 | 3925     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x140307e46#620  | 0x140307e46 | 620      | RETURN        | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307e46#3924 | 0x140307e46 | 3924     | RETURN        | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307e46#3926 | 0x140307e46 | 3926     | RETURN        | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x140307e47#1231 | 0x140307e47 | 1231     | CALL          | true    | member           | [object Object]                                                                 |                 |
| 0x140307e47#1233 | 0x140307e47 | 1233     | RETURN        | true    | member           | [object Object]                                                                 |                 |
| 0x140307e47#3484 | 0x140307e47 | 3484     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3511 | 0x140307e47 | 3511     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3518 | 0x140307e47 | 3518     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3545 | 0x140307e47 | 3545     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3552 | 0x140307e47 | 3552     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3579 | 0x140307e47 | 3579     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3586 | 0x140307e47 | 3586     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e47#3613 | 0x140307e47 | 3613     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#1221 | 0x140307e4d | 1221     | CALL          | true    | member           | [object Object]                                                                 |                 |
| 0x140307e4d#1223 | 0x140307e4d | 1223     | RETURN        | true    | member           | [object Object]                                                                 |                 |
| 0x140307e4d#3486 | 0x140307e4d | 3486     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3512 | 0x140307e4d | 3512     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3520 | 0x140307e4d | 3520     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3546 | 0x140307e4d | 3546     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3554 | 0x140307e4d | 3554     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3580 | 0x140307e4d | 3580     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3588 | 0x140307e4d | 3588     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x140307e4d#3614 | 0x140307e4d | 3614     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x140307aaa#3906 | 0x140307aaa#59   | 1           |
| 0x140307aaa#59   | 0x140307ab1#64   | 0           |
| 0x140307ab1#64   | 0x140307ab5#3202 | 0           |
| 0x140307ab5#3202 | 0x140307ac3#111  | 0           |
| 0x140307ac3#111  | 0x140307ac6#116  | 1           |
| 0x140307ab5#3202 | 0x140307acf#128  | 1           |
| 0x140307acf#128  | 0x140307acf#129  | 1           |
| 0x140307ab5#3202 | 0x140307ad5#131  | 0           |
| 0x140307ad5#131  | 0x140307adc#140  | 1           |
| 0x140307ab5#3202 | 0x140307ade#141  | 0           |
| 0x140307ade#141  | 0x140307ae5#153  | 0           |
| 0x140307ab5#3202 | 0x140307ae5#153  | 1           |
| 0x140307ae5#153  | 0x140307ae5#154  | 1           |
| 0x140307aa1#3306 | 0x140307aeb#3514 | 0           |
| 0x140307aa1#3307 | 0x140307aeb#3548 | 0           |
| 0x140307aa6#57   | 0x140307aeb#3582 | 0           |
| 0x140307aeb#157  | 0x140307af0#162  | 0           |
| 0x140307af0#162  | 0x140307af3#167  | 1           |
| 0x140307aeb#157  | 0x140307af9#168  | 0           |
| 0x140307af9#168  | 0x140307afd#172  | 0           |
| 0x140307afd#172  | 0x140307afd#3953 | 0           |
| 0x140307b01#3907 | 0x140307b01#181  | 1           |
| 0x140307aeb#157  | 0x140307b01#181  | 2           |
| 0x140307afd#3953 | 0x140307b01#3907 | 0           |
| 0x140307ab5#3202 | 0x140307b0a#1322 | 1           |
| 0x140307aa1#3306 | 0x140307b0a#3513 | 0           |
| 0x140307aa1#3307 | 0x140307b0a#3547 | 0           |
| 0x140307aa6#57   | 0x140307b0a#3581 | 0           |
| 0x140307b0a#1322 | 0x140307b0a#3952 | 0           |
| 0x140307afd#3953 | 0x140307b12#2603 | 0           |
| 0x140307b0a#3952 | 0x140307b12#2603 | 1           |
| 0x140307aeb#3480 | 0x140307b12#3504 | 0           |
| 0x140307b0a#3479 | 0x140307b12#3504 | 1           |
| 0x140307aeb#3514 | 0x140307b12#3537 | 0           |
| 0x140307b0a#3513 | 0x140307b12#3537 | 1           |
| 0x140307aeb#3548 | 0x140307b12#3571 | 0           |
| 0x140307b0a#3547 | 0x140307b12#3571 | 1           |
| 0x140307aeb#3582 | 0x140307b12#3605 | 0           |
| 0x140307b0a#3581 | 0x140307b12#3605 | 1           |
| 0x140307b1a#3954 | 0x140307b1a#191  | 0           |
| 0x140307b1a#3955 | 0x140307b1a#191  | 1           |
| 0x140307b12#3571 | 0x140307b1a#3954 | 0           |
| 0x140307b12#3537 | 0x140307b1a#3955 | 0           |
| 0x140307b12#2603 | 0x140307b20#201  | 1           |
| 0x140307b12#3537 | 0x140307b20#201  | 2           |
| 0x140307b1a#191  | 0x140307b20#201  | 3           |
| 0x140307b12#3504 | 0x140307b20#3481 | 0           |
| 0x140307b12#3537 | 0x140307b20#3515 | 0           |
| 0x140307b12#3571 | 0x140307b20#3549 | 0           |
| 0x140307b12#3605 | 0x140307b20#3583 | 0           |
| 0x140307b20#3515 | 0x140307b29#209  | 0           |
| 0x140307b29#209  | 0x140307b2c#214  | 1           |
| 0x140307b32#3956 | 0x140307b32#220  | 0           |
| 0x140307b32#3957 | 0x140307b32#220  | 1           |
| 0x140307b20#3583 | 0x140307b32#3956 | 0           |
| 0x140307b20#3515 | 0x140307b32#3957 | 0           |
| 0x140307b32#220  | 0x140307b35#228  | 1           |
| 0x140307b35#228  | 0x140307b3c#237  | 1           |
| 0x140307b20#3515 | 0x140307b3c#3929 | 0           |
| 0x140307b3e#3908 | 0x140307b3e#239  | 1           |
| 0x140307b20#3515 | 0x140307b3e#3908 | 0           |
| 0x140307b3e#239  | 0x140307b3e#3958 | 0           |
| 0x140307b45#3959 | 0x140307b45#252  | 0           |
| 0x140307b45#3909 | 0x140307b45#252  | 1           |
| 0x140307b3e#239  | 0x140307b45#3909 | 1           |
| 0x140307b20#3515 | 0x140307b45#3959 | 0           |
| 0x140307b4d#3960 | 0x140307b4d#269  | 1           |
| 0x140307b4d#269  | 0x140307b4d#271  | 1           |
| 0x140307b45#252  | 0x140307b4d#3960 | 0           |
| 0x140307b32#220  | 0x140307b53#274  | 0           |
| 0x140307b3e#3958 | 0x140307b57#3928 | 0           |
| 0x140307b57#3928 | 0x140307b5c#2498 | 0           |
| 0x140307b3c#3929 | 0x140307b5c#2498 | 1           |
| 0x140307b53#274  | 0x140307b5c#2576 | 0           |
| 0x140307b32#220  | 0x140307b5c#2576 | 1           |
| 0x140307b5c#2498 | 0x140307b5f#285  | 1           |
| 0x140307b5c#2576 | 0x140307b5f#285  | 2           |
| 0x140307b20#3515 | 0x140307b5f#3516 | 0           |
| 0x140307b20#3549 | 0x140307b5f#3550 | 0           |
| 0x140307b20#3583 | 0x140307b5f#3584 | 0           |
| 0x140307ab5#3202 | 0x140307b6c#293  | 0           |
| 0x140307b6c#3961 | 0x140307b6c#293  | 1           |
| 0x140307b12#2603 | 0x140307b6c#3961 | 0           |
| 0x140307b6c#293  | 0x140307b6c#3962 | 0           |
| 0x140307b12#2603 | 0x140307b70#3951 | 0           |
| 0x140307aa1#3307 | 0x140307b74#3572 | 0           |
| 0x140307b70#3951 | 0x140307b74#3572 | 1           |
| 0x140307aa6#57   | 0x140307b74#3606 | 0           |
| 0x140307b6c#3962 | 0x140307b74#3606 | 1           |
| 0x140307b81#306  | 0x140307b81#3963 | 0           |
| 0x140307b81#3963 | 0x140307b88#312  | 0           |
| 0x140307aaa#59   | 0x140307b88#312  | 1           |
| 0x140307aaa#59   | 0x140307b90#321  | 0           |
| 0x140307b90#321  | 0x140307b93#326  | 1           |
| 0x140307a9b#2818 | 0x140307b93#3943 | 0           |
| 0x140307a9b#2818 | 0x140307b93#3944 | 0           |
| 0x140307b74#3572 | 0x140307b93#3949 | 0           |
| 0x140307ba0#2503 | 0x140307ba0#327  | 1           |
| 0x140307b81#3963 | 0x140307ba0#2503 | 0           |
| 0x140307d8b#374  | 0x140307ba0#2503 | 1           |
| 0x140307ba0#327  | 0x140307ba0#2596 | 0           |
| 0x140307a9b#2818 | 0x140307ba0#2652 | 0           |
| 0x140307d87#2650 | 0x140307ba0#2652 | 1           |
| 0x140307b93#3943 | 0x140307ba0#2752 | 0           |
| 0x140307d87#2748 | 0x140307ba0#2752 | 1           |
| 0x140307b93#3944 | 0x140307ba0#2782 | 0           |
| 0x140307d87#2778 | 0x140307ba0#2782 | 1           |
| 0x140307b7d#305  | 0x140307ba0#3369 | 0           |
| 0x140307d87#3362 | 0x140307ba0#3369 | 1           |
| 0x140307b88#312  | 0x140307ba0#3505 | 0           |
| 0x140307d87#3498 | 0x140307ba0#3505 | 1           |
| 0x140307b93#3949 | 0x140307ba0#3539 | 0           |
| 0x140307d87#3532 | 0x140307ba0#3539 | 1           |
| 0x140307b74#3572 | 0x140307ba0#3573 | 0           |
| 0x140307d87#3566 | 0x140307ba0#3573 | 1           |
| 0x140307b74#3606 | 0x140307ba0#3607 | 0           |
| 0x140307d87#3600 | 0x140307ba0#3607 | 1           |
| 0x140307ba0#2596 | 0x140307ba5#334  | 1           |
| 0x140307ba0#3505 | 0x140307ba5#3483 | 0           |
| 0x140307ba0#3539 | 0x140307ba5#3517 | 0           |
| 0x140307ba0#3573 | 0x140307ba5#3551 | 0           |
| 0x140307ba0#3607 | 0x140307ba5#3585 | 0           |
| 0x140307ba5#3551 | 0x140307ba5#3927 | 0           |
| 0x140307ba5#334  | 0x140307baa#339  | 0           |
| 0x140307baa#339  | 0x140307bac#345  | 1           |
| 0x140307ba0#2652 | 0x140307bac#3939 | 0           |
| 0x140307ba5#3517 | 0x140307bac#3945 | 0           |
| 0x140307ba0#327  | 0x140307bb2#351  | 0           |
| 0x140307bb2#351  | 0x140307bb5#357  | 1           |
| 0x140307ba0#2652 | 0x140307bb7#359  | 0           |
| 0x140307bb7#359  | 0x140307bbe#3940 | 0           |
| 0x140307ba5#3517 | 0x140307bbe#3946 | 0           |
| 0x140307ba0#2652 | 0x140307bc3#658  | 0           |
| 0x140307bc3#658  | 0x140307bc6#664  | 1           |
| 0x140307ba0#327  | 0x140307bcc#3224 | 0           |
| 0x140307bd1#3964 | 0x140307bd1#677  | 0           |
| 0x140307bd1#677  | 0x140307bd1#679  | 1           |
| 0x140307bcc#3224 | 0x140307bd1#3964 | 0           |
| 0x140307bd3#3969 | 0x140307bd3#680  | 0           |
| 0x140307ba0#327  | 0x140307bd3#3969 | 0           |
| 0x140307bd3#680  | 0x140307bd6#684  | 0           |
| 0x140307ba0#327  | 0x140307bdb#3225 | 0           |
| 0x140307be0#3965 | 0x140307be0#1248 | 0           |
| 0x140307be0#1248 | 0x140307be0#1250 | 1           |
| 0x140307bdb#3225 | 0x140307be0#3965 | 0           |
| 0x140307be2#3966 | 0x140307be2#1251 | 0           |
| 0x140307ba0#327  | 0x140307be2#3966 | 0           |
| 0x140307be2#1251 | 0x140307be5#1255 | 0           |
| 0x140307ba0#327  | 0x140307bea#3226 | 0           |
| 0x140307bef#3967 | 0x140307bef#1276 | 0           |
| 0x140307bef#1276 | 0x140307bef#1278 | 1           |
| 0x140307bea#3226 | 0x140307bef#3967 | 0           |
| 0x140307bf1#3968 | 0x140307bf1#1279 | 0           |
| 0x140307ba0#327  | 0x140307bf1#3968 | 0           |
| 0x140307bf1#1279 | 0x140307bf4#1283 | 0           |
| 0x140307bf7#3970 | 0x140307bf7#696  | 0           |
| 0x140307bd6#684  | 0x140307bf7#3234 | 0           |
| 0x140307be5#1255 | 0x140307bf7#3234 | 1           |
| 0x140307bf4#1283 | 0x140307bf7#3234 | 2           |
| 0x140307bf7#3234 | 0x140307bf7#3970 | 0           |
| 0x140307bf7#696  | 0x140307bf9#702  | 1           |
| 0x140307ba0#327  | 0x140307c01#1296 | 0           |
| 0x140307c01#1296 | 0x140307c04#1302 | 1           |
| 0x140307ba0#327  | 0x140307c0d#1310 | 0           |
| 0x140307c0d#1310 | 0x140307c10#1316 | 1           |
| 0x140307c1b#2730 | 0x140307c1b#706  | 0           |
| 0x140307ba0#2752 | 0x140307c1b#2730 | 0           |
| 0x140307c06#3237 | 0x140307c1b#3235 | 0           |
| 0x140307c16#3236 | 0x140307c1b#3235 | 1           |
| 0x140307bf7#3234 | 0x140307c1b#3235 | 2           |
| 0x140307c1b#706  | 0x140307c1f#748  | 0           |
| 0x140307c1b#3235 | 0x140307c1f#748  | 1           |
| 0x140307c1f#748  | 0x140307c1f#2747 | 0           |
| 0x140307c22#3251 | 0x140307c22#756  | 0           |
| 0x140307ba0#2782 | 0x140307c22#3251 | 0           |
| 0x140307c29#3971 | 0x140307c29#769  | 0           |
| 0x140307c29#769  | 0x140307c29#770  | 1           |
| 0x140307c22#756  | 0x140307c29#3971 | 0           |
| 0x140307c22#3251 | 0x140307c2f#773  | 0           |
| 0x140307c2f#773  | 0x140307c2f#2775 | 0           |
| 0x140307c39#2505 | 0x140307c39#785  | 0           |
| 0x140307c1f#748  | 0x140307c39#787  | 0           |
| 0x140307c39#785  | 0x140307c39#787  | 1           |
| 0x140307c2f#773  | 0x140307c39#2505 | 0           |
| 0x140307ba5#3551 | 0x140307c44#838  | 0           |
| 0x140307ba5#3585 | 0x140307c44#838  | 1           |
| 0x140307c44#838  | 0x140307c47#843  | 1           |
| 0x140307c39#787  | 0x140307c47#3262 | 0           |
| 0x140307c49#4003 | 0x140307c49#845  | 1           |
| 0x140307c47#3262 | 0x140307c49#845  | 2           |
| 0x140307ba5#3551 | 0x140307c49#4003 | 0           |
| 0x140307c4c#4004 | 0x140307c4c#850  | 0           |
| 0x140307ba5#3551 | 0x140307c4c#4004 | 0           |
| 0x140307c4c#850  | 0x140307c4c#4005 | 0           |
| 0x140307ba0#2652 | 0x140307c50#3941 | 0           |
| 0x140307ba5#3517 | 0x140307c50#3947 | 0           |
| 0x140307c5c#3972 | 0x140307c5c#868  | 0           |
| 0x140307c5c#3973 | 0x140307c5c#868  | 1           |
| 0x140307ba5#3551 | 0x140307c5c#3972 | 0           |
| 0x140307ba5#3517 | 0x140307c5c#3973 | 0           |
| 0x140307c5c#868  | 0x140307c69#881  | 0           |
| 0x140307c69#881  | 0x140307c6c#886  | 1           |
| 0x140307c5c#868  | 0x140307c72#887  | 0           |
| 0x140307c72#887  | 0x140307c72#3974 | 0           |
| 0x140307c7a#3975 | 0x140307c7a#894  | 0           |
| 0x140307c7a#3976 | 0x140307c7a#894  | 1           |
| 0x140307ba5#3585 | 0x140307c7a#3975 | 0           |
| 0x140307ba5#3517 | 0x140307c7a#3976 | 0           |
| 0x140307c7a#894  | 0x140307c80#905  | 0           |
| 0x140307c80#905  | 0x140307c86#915  | 1           |
| 0x140307c86#915  | 0x140307c8c#932  | 0           |
| 0x140307c7a#894  | 0x140307c8c#932  | 1           |
| 0x140307c8c#932  | 0x140307c8c#933  | 1           |
| 0x140307c80#905  | 0x140307c9d#1154 | 0           |
| 0x140307c7a#894  | 0x140307c9d#1154 | 1           |
| 0x140307c9d#1154 | 0x140307c9d#3977 | 0           |
| 0x140307c72#3974 | 0x140307ca4#1158 | 0           |
| 0x140307c9d#3977 | 0x140307ca4#1158 | 1           |
| 0x140307ca4#1158 | 0x140307ca7#1170 | 1           |
| 0x140307c72#3974 | 0x140307ca7#3935 | 0           |
| 0x140307c9d#3977 | 0x140307ca7#3936 | 0           |
| 0x140307cab#2597 | 0x140307cab#1176 | 0           |
| 0x140307ca7#3935 | 0x140307cab#2597 | 0           |
| 0x140307ca7#3936 | 0x140307cab#2597 | 1           |
| 0x140307cab#1176 | 0x140307cae#1182 | 1           |
| 0x140307cab#2597 | 0x140307cb4#1195 | 1           |
| 0x140307cb4#1195 | 0x140307cbb#1204 | 1           |
| 0x140307cbd#3978 | 0x140307cbd#1205 | 0           |
| 0x140307cab#2597 | 0x140307cbd#3978 | 0           |
| 0x140307cbd#1205 | 0x140307cbd#3979 | 0           |
| 0x140307cab#2597 | 0x140307cc4#1217 | 0           |
| 0x140307cbd#3979 | 0x140307cc4#1217 | 1           |
| 0x140307cc4#1217 | 0x140307cc4#1218 | 1           |
| 0x140307cca#2537 | 0x140307cca#939  | 1           |
| 0x140307c91#935  | 0x140307cca#2537 | 0           |
| 0x140307cbd#3979 | 0x140307cca#2537 | 1           |
| 0x140307c8e#934  | 0x140307cca#2600 | 0           |
| 0x140307cab#2597 | 0x140307cca#2600 | 1           |
| 0x140307ba5#3483 | 0x140307cca#3487 | 0           |
| 0x140307ba5#3517 | 0x140307cca#3521 | 0           |
| 0x140307ba5#3551 | 0x140307cca#3555 | 0           |
| 0x140307ba5#3585 | 0x140307cca#3589 | 0           |
| 0x140307cca#939  | 0x140307ccf#944  | 0           |
| 0x140307ccf#944  | 0x140307cd2#949  | 1           |
| 0x140307cca#939  | 0x140307cd8#950  | 0           |
| 0x140307cd8#950  | 0x140307cdc#954  | 0           |
| 0x140307cdc#954  | 0x140307cdc#3981 | 0           |
| 0x140307ce0#3910 | 0x140307ce0#963  | 1           |
| 0x140307cca#939  | 0x140307ce0#963  | 2           |
| 0x140307cdc#3981 | 0x140307ce0#3910 | 0           |
| 0x140307cab#2597 | 0x140307ce9#1227 | 1           |
| 0x140307ba5#3483 | 0x140307ce9#3485 | 0           |
| 0x140307ba5#3517 | 0x140307ce9#3519 | 0           |
| 0x140307ba5#3551 | 0x140307ce9#3553 | 0           |
| 0x140307ba5#3585 | 0x140307ce9#3587 | 0           |
| 0x140307ce9#1227 | 0x140307ce9#3980 | 0           |
| 0x140307cf1#3982 | 0x140307cf1#966  | 0           |
| 0x140307c5c#868  | 0x140307cf1#966  | 1           |
| 0x140307cf1#3983 | 0x140307cf1#968  | 1           |
| 0x140307c47#3262 | 0x140307cf1#968  | 2           |
| 0x140307cca#2600 | 0x140307cf1#2598 | 0           |
| 0x140307cab#2597 | 0x140307cf1#2598 | 1           |
| 0x140307cab#2597 | 0x140307cf1#2598 | 2           |
| 0x140307cdc#3981 | 0x140307cf1#2649 | 0           |
| 0x140307cb0#2648 | 0x140307cf1#2649 | 1           |
| 0x140307ce9#3980 | 0x140307cf1#2649 | 2           |
| 0x140307cca#3487 | 0x140307cf1#3497 | 0           |
| 0x140307ba5#3483 | 0x140307cf1#3497 | 1           |
| 0x140307ce9#3485 | 0x140307cf1#3497 | 2           |
| 0x140307cca#3521 | 0x140307cf1#3531 | 0           |
| 0x140307ba5#3517 | 0x140307cf1#3531 | 1           |
| 0x140307ce9#3519 | 0x140307cf1#3531 | 2           |
| 0x140307cca#3555 | 0x140307cf1#3565 | 0           |
| 0x140307ba5#3551 | 0x140307cf1#3565 | 1           |
| 0x140307ce9#3553 | 0x140307cf1#3565 | 2           |
| 0x140307cca#3589 | 0x140307cf1#3599 | 0           |
| 0x140307ba5#3585 | 0x140307cf1#3599 | 1           |
| 0x140307ce9#3587 | 0x140307cf1#3599 | 2           |
| 0x140307cf1#2649 | 0x140307cf1#3982 | 0           |
| 0x140307cf1#966  | 0x140307cf1#3983 | 0           |
| 0x140307ba5#3927 | 0x140307d00#981  | 0           |
| 0x140307cf1#3565 | 0x140307d00#981  | 1           |
| 0x140307d00#981  | 0x140307d03#987  | 1           |
| 0x140307d05#3990 | 0x140307d05#990  | 0           |
| 0x140307d05#3991 | 0x140307d05#990  | 1           |
| 0x140307cf1#3565 | 0x140307d05#3990 | 0           |
| 0x140307cf1#3531 | 0x140307d05#3991 | 0           |
| 0x140307cf1#2649 | 0x140307d08#3933 | 0           |
| 0x140307cf1#3531 | 0x140307d08#3934 | 0           |
| 0x140307d0d#3984 | 0x140307d0d#1119 | 0           |
| 0x140307d0d#3985 | 0x140307d0d#1119 | 1           |
| 0x140307ba5#3927 | 0x140307d0d#3984 | 0           |
| 0x140307cf1#3531 | 0x140307d0d#3985 | 0           |
| 0x140307cf1#2649 | 0x140307d10#1128 | 1           |
| 0x140307cf1#3531 | 0x140307d10#1128 | 2           |
| 0x140307d0d#1119 | 0x140307d10#1128 | 3           |
| 0x140307cf1#3497 | 0x140307d10#3488 | 0           |
| 0x140307cf1#3531 | 0x140307d10#3522 | 0           |
| 0x140307cf1#3565 | 0x140307d10#3556 | 0           |
| 0x140307cf1#3599 | 0x140307d10#3590 | 0           |
| 0x140307d19#3986 | 0x140307d19#1134 | 0           |
| 0x140307d19#3987 | 0x140307d19#1134 | 1           |
| 0x140307d10#3556 | 0x140307d19#3986 | 0           |
| 0x140307ba5#3927 | 0x140307d19#3987 | 0           |
| 0x140307c5c#868  | 0x140307d1c#1141 | 0           |
| 0x140307d1c#1141 | 0x140307d20#1145 | 0           |
| 0x140307d20#3988 | 0x140307d20#1145 | 1           |
| 0x140307cf1#2649 | 0x140307d20#3988 | 0           |
| 0x140307d20#1145 | 0x140307d20#3989 | 0           |
| 0x140307d26#2539 | 0x140307d26#1000 | 1           |
| 0x140307d26#2573 | 0x140307d26#1000 | 2           |
| 0x140307d26#2681 | 0x140307d26#1000 | 3           |
| 0x140307d08#3933 | 0x140307d26#2539 | 0           |
| 0x140307d20#3989 | 0x140307d26#2539 | 1           |
| 0x140307d08#3934 | 0x140307d26#2573 | 0           |
| 0x140307ba5#3927 | 0x140307d26#2573 | 1           |
| 0x140307d05#990  | 0x140307d26#2681 | 0           |
| 0x140307d19#1134 | 0x140307d26#2681 | 1           |
| 0x140307d26#3500 | 0x140307d26#3489 | 0           |
| 0x140307cf1#3497 | 0x140307d26#3500 | 0           |
| 0x140307d10#3488 | 0x140307d26#3500 | 1           |
| 0x140307d26#3534 | 0x140307d26#3523 | 0           |
| 0x140307cf1#3531 | 0x140307d26#3534 | 0           |
| 0x140307d10#3522 | 0x140307d26#3534 | 1           |
| 0x140307d26#3568 | 0x140307d26#3557 | 0           |
| 0x140307cf1#3565 | 0x140307d26#3568 | 0           |
| 0x140307d10#3556 | 0x140307d26#3568 | 1           |
| 0x140307d26#3602 | 0x140307d26#3591 | 0           |
| 0x140307cf1#3599 | 0x140307d26#3602 | 0           |
| 0x140307d10#3590 | 0x140307d26#3602 | 1           |
| 0x140307d26#3523 | 0x140307d2f#1008 | 0           |
| 0x140307d2f#1008 | 0x140307d32#1013 | 1           |
| 0x140307d38#3992 | 0x140307d38#1019 | 0           |
| 0x140307d38#3993 | 0x140307d38#1019 | 1           |
| 0x140307d26#3591 | 0x140307d38#3992 | 0           |
| 0x140307d26#3523 | 0x140307d38#3993 | 0           |
| 0x140307d38#1019 | 0x140307d3b#1027 | 1           |
| 0x140307d3b#1027 | 0x140307d42#1036 | 1           |
| 0x140307d26#3523 | 0x140307d42#3932 | 0           |
| 0x140307d44#3911 | 0x140307d44#1038 | 1           |
| 0x140307d26#3523 | 0x140307d44#3911 | 0           |
| 0x140307d44#1038 | 0x140307d44#3994 | 0           |
| 0x140307d4b#3995 | 0x140307d4b#1051 | 0           |
| 0x140307d4b#3912 | 0x140307d4b#1051 | 1           |
| 0x140307d44#1038 | 0x140307d4b#3912 | 1           |
| 0x140307d26#3523 | 0x140307d4b#3995 | 0           |
| 0x140307d53#3996 | 0x140307d53#1068 | 1           |
| 0x140307d53#1068 | 0x140307d53#1070 | 1           |
| 0x140307d4b#1051 | 0x140307d53#3996 | 0           |
| 0x140307d38#1019 | 0x140307d59#1073 | 0           |
| 0x140307d44#3994 | 0x140307d5d#3931 | 0           |
| 0x140307d62#2533 | 0x140307d62#1083 | 1           |
| 0x140307d62#2568 | 0x140307d62#1083 | 2           |
| 0x140307d5d#3931 | 0x140307d62#2533 | 0           |
| 0x140307d42#3932 | 0x140307d62#2533 | 1           |
| 0x140307d59#1073 | 0x140307d62#2568 | 0           |
| 0x140307d38#1019 | 0x140307d62#2568 | 1           |
| 0x140307d26#3489 | 0x140307d62#3491 | 0           |
| 0x140307d26#3523 | 0x140307d62#3525 | 0           |
| 0x140307d26#3557 | 0x140307d62#3559 | 0           |
| 0x140307d26#3591 | 0x140307d62#3593 | 0           |
| 0x140307d26#3489 | 0x140307d67#3496 | 0           |
| 0x140307d62#3491 | 0x140307d67#3496 | 1           |
| 0x140307d6f#3997 | 0x140307d6f#1092 | 0           |
| 0x140307d6f#3998 | 0x140307d6f#1092 | 1           |
| 0x140307c72#3974 | 0x140307d6f#3997 | 0           |
| 0x140307cf1#2649 | 0x140307d6f#3998 | 0           |
| 0x140307d6f#1092 | 0x140307d6f#3999 | 0           |
| 0x140307d76#4000 | 0x140307d76#1103 | 0           |
| 0x140307d76#4001 | 0x140307d76#1103 | 1           |
| 0x140307cf1#2598 | 0x140307d76#4000 | 0           |
| 0x140307cf1#2649 | 0x140307d76#4001 | 0           |
| 0x140307d76#1103 | 0x140307d76#4002 | 0           |
| 0x140307ba0#3369 | 0x140307d82#3942 | 0           |
| 0x140307cf1#2649 | 0x140307d82#3948 | 0           |
| 0x140307c22#756  | 0x140307d84#2777 | 0           |
| 0x140307bac#3939 | 0x140307d87#2650 | 0           |
| 0x140307bbe#3940 | 0x140307d87#2650 | 1           |
| 0x140307c50#3941 | 0x140307d87#2650 | 2           |
| 0x140307d82#3942 | 0x140307d87#2650 | 3           |
| 0x140307ba0#2652 | 0x140307d87#2650 | 4           |
| 0x140307ba0#2752 | 0x140307d87#2748 | 0           |
| 0x140307ba0#2752 | 0x140307d87#2748 | 1           |
| 0x140307c1f#2747 | 0x140307d87#2748 | 2           |
| 0x140307c1f#2747 | 0x140307d87#2748 | 3           |
| 0x140307c1f#2747 | 0x140307d87#2748 | 4           |
| 0x140307ba0#2782 | 0x140307d87#2778 | 0           |
| 0x140307ba0#2782 | 0x140307d87#2778 | 1           |
| 0x140307c2f#2775 | 0x140307d87#2778 | 2           |
| 0x140307c2f#2775 | 0x140307d87#2778 | 3           |
| 0x140307d84#2777 | 0x140307d87#2778 | 4           |
| 0x140307ba0#3369 | 0x140307d87#3362 | 0           |
| 0x140307bb7#359  | 0x140307d87#3362 | 1           |
| 0x140307ba0#3369 | 0x140307d87#3362 | 2           |
| 0x140307ba0#3369 | 0x140307d87#3362 | 3           |
| 0x140307ba0#3369 | 0x140307d87#3362 | 4           |
| 0x140307ba5#3483 | 0x140307d87#3498 | 0           |
| 0x140307ba5#3483 | 0x140307d87#3498 | 1           |
| 0x140307ba5#3483 | 0x140307d87#3498 | 2           |
| 0x140307d67#3496 | 0x140307d87#3498 | 3           |
| 0x140307ba5#3483 | 0x140307d87#3498 | 4           |
| 0x140307bac#3945 | 0x140307d87#3532 | 0           |
| 0x140307bbe#3946 | 0x140307d87#3532 | 1           |
| 0x140307c50#3947 | 0x140307d87#3532 | 2           |
| 0x140307d82#3948 | 0x140307d87#3532 | 3           |
| 0x140307ba5#3517 | 0x140307d87#3532 | 4           |
| 0x140307ba5#3551 | 0x140307d87#3566 | 0           |
| 0x140307ba5#3551 | 0x140307d87#3566 | 1           |
| 0x140307c4c#4005 | 0x140307d87#3566 | 2           |
| 0x140307d6f#3999 | 0x140307d87#3566 | 3           |
| 0x140307ba5#3551 | 0x140307d87#3566 | 4           |
| 0x140307ba5#3585 | 0x140307d87#3600 | 0           |
| 0x140307ba5#3585 | 0x140307d87#3600 | 1           |
| 0x140307ba5#3585 | 0x140307d87#3600 | 2           |
| 0x140307d76#4002 | 0x140307d87#3600 | 3           |
| 0x140307ba5#3585 | 0x140307d87#3600 | 4           |
| 0x140307ba0#2503 | 0x140307d8b#374  | 0           |
| 0x140307d8b#374  | 0x140307d92#391  | 0           |
| 0x140307d87#3498 | 0x140307d92#391  | 1           |
| 0x140307d92#391  | 0x140307d96#397  | 1           |
| 0x140307d87#2650 | 0x140307da0#408  | 1           |
| 0x140307da0#408  | 0x140307da0#410  | 1           |
| 0x140307d87#2778 | 0x140307da2#2760 | 0           |
| 0x140307da2#2760 | 0x140307da5#421  | 1           |
| 0x140307da5#421  | 0x140307da5#422  | 1           |
| 0x140307daf#2504 | 0x140307daf#426  | 0           |
| 0x140307daf#426  | 0x140307daf#428  | 1           |
| 0x140307d87#2778 | 0x140307daf#2504 | 0           |
| 0x140307daf#428  | 0x140307db1#469  | 0           |
| 0x140307db3#2728 | 0x140307db3#479  | 0           |
| 0x140307db1#469  | 0x140307db3#479  | 1           |
| 0x140307db3#479  | 0x140307db3#481  | 0           |
| 0x140307d87#2748 | 0x140307db3#2728 | 0           |
| 0x140307db3#481  | 0x140307db6#486  | 1           |
| 0x140307d87#3498 | 0x140307db8#3506 | 0           |
| 0x140307d87#3498 | 0x140307db8#3506 | 1           |
| 0x140307ba5#3483 | 0x140307db8#3506 | 2           |
| 0x140307ba5#3483 | 0x140307db8#3506 | 3           |
| 0x140307ba5#3483 | 0x140307db8#3506 | 4           |
| 0x140307d87#3532 | 0x140307db8#3540 | 0           |
| 0x140307d87#3532 | 0x140307db8#3540 | 1           |
| 0x140307ba5#3517 | 0x140307db8#3540 | 2           |
| 0x140307ba5#3517 | 0x140307db8#3540 | 3           |
| 0x140307ba5#3517 | 0x140307db8#3540 | 4           |
| 0x140307d87#3566 | 0x140307db8#3574 | 0           |
| 0x140307d87#3566 | 0x140307db8#3574 | 1           |
| 0x140307ba5#3551 | 0x140307db8#3574 | 2           |
| 0x140307ba5#3551 | 0x140307db8#3574 | 3           |
| 0x140307ba5#3551 | 0x140307db8#3574 | 4           |
| 0x140307d87#3600 | 0x140307db8#3608 | 0           |
| 0x140307d87#3600 | 0x140307db8#3608 | 1           |
| 0x140307ba5#3585 | 0x140307db8#3608 | 2           |
| 0x140307ba5#3585 | 0x140307db8#3608 | 3           |
| 0x140307ba5#3585 | 0x140307db8#3608 | 4           |
| 0x140307dbc#4006 | 0x140307dbc#492  | 1           |
| 0x140307dbc#3913 | 0x140307dbc#4006 | 0           |
| 0x140307db8#3540 | 0x140307dc4#500  | 0           |
| 0x140307dc4#500  | 0x140307dc7#505  | 1           |
| 0x140307dcd#4007 | 0x140307dcd#511  | 0           |
| 0x140307dcd#4008 | 0x140307dcd#511  | 1           |
| 0x140307db8#3608 | 0x140307dcd#4007 | 0           |
| 0x140307db8#3540 | 0x140307dcd#4008 | 0           |
| 0x140307dd0#4009 | 0x140307dd0#519  | 1           |
| 0x140307dcd#511  | 0x140307dd0#4009 | 0           |
| 0x140307dd0#519  | 0x140307dd7#528  | 1           |
| 0x140307db8#3540 | 0x140307dd7#3930 | 0           |
| 0x140307dd9#3914 | 0x140307dd9#530  | 1           |
| 0x140307db8#3540 | 0x140307dd9#3914 | 0           |
| 0x140307de0#4010 | 0x140307de0#543  | 0           |
| 0x140307de0#3915 | 0x140307de0#543  | 1           |
| 0x140307dd9#530  | 0x140307de0#3915 | 1           |
| 0x140307db8#3540 | 0x140307de0#4010 | 0           |
| 0x140307de8#4011 | 0x140307de8#560  | 0           |
| 0x140307de8#560  | 0x140307de8#562  | 1           |
| 0x140307de0#543  | 0x140307de8#4011 | 0           |
| 0x140307dcd#511  | 0x140307dea#565  | 0           |
| 0x140307dd9#530  | 0x140307dee#574  | 1           |
| 0x140307dea#565  | 0x140307dee#574  | 2           |
| 0x140307db8#3506 | 0x140307dee#3494 | 0           |
| 0x140307db8#3540 | 0x140307dee#3528 | 0           |
| 0x140307db8#3574 | 0x140307dee#3562 | 0           |
| 0x140307db8#3608 | 0x140307dee#3596 | 0           |
| 0x140307b12#2603 | 0x140307df8#2601 | 1           |
| 0x140307cca#2600 | 0x140307df8#2601 | 2           |
| 0x140307cf1#2598 | 0x140307df8#2601 | 3           |
| 0x140307aeb#3480 | 0x140307df8#3499 | 0           |
| 0x140307b20#3481 | 0x140307df8#3499 | 1           |
| 0x140307cca#3487 | 0x140307df8#3499 | 2           |
| 0x140307d26#3489 | 0x140307df8#3499 | 3           |
| 0x140307aeb#3514 | 0x140307df8#3533 | 0           |
| 0x140307b20#3515 | 0x140307df8#3533 | 1           |
| 0x140307cca#3521 | 0x140307df8#3533 | 2           |
| 0x140307d26#3523 | 0x140307df8#3533 | 3           |
| 0x140307aeb#3548 | 0x140307df8#3567 | 0           |
| 0x140307b20#3549 | 0x140307df8#3567 | 1           |
| 0x140307cca#3555 | 0x140307df8#3567 | 2           |
| 0x140307d26#3557 | 0x140307df8#3567 | 3           |
| 0x140307aeb#3582 | 0x140307df8#3601 | 0           |
| 0x140307b20#3583 | 0x140307df8#3601 | 1           |
| 0x140307cca#3589 | 0x140307df8#3601 | 2           |
| 0x140307d26#3591 | 0x140307df8#3601 | 3           |
| 0x140307dfd#4016 | 0x140307dfd#1114 | 0           |
| 0x140307df8#3499 | 0x140307dfd#3490 | 0           |
| 0x140307df8#3533 | 0x140307dfd#3524 | 0           |
| 0x140307df8#3567 | 0x140307dfd#3558 | 0           |
| 0x140307df8#3601 | 0x140307dfd#3592 | 0           |
| 0x140307df8#2601 | 0x140307dfd#3938 | 0           |
| 0x140307dfd#1113 | 0x140307dfd#4016 | 0           |
| 0x140307de8#3937 | 0x140307dff#2610 | 0           |
| 0x140307dfd#3938 | 0x140307dff#2610 | 1           |
| 0x140307a94#3904 | 0x140307dff#2627 | 0           |
| 0x140307dfd#3916 | 0x140307dff#2627 | 1           |
| 0x140307db8#3506 | 0x140307dff#3510 | 0           |
| 0x140307dfd#3490 | 0x140307dff#3510 | 1           |
| 0x140307db8#3540 | 0x140307dff#3544 | 0           |
| 0x140307dfd#3524 | 0x140307dff#3544 | 1           |
| 0x140307db8#3574 | 0x140307dff#3578 | 0           |
| 0x140307dfd#3558 | 0x140307dff#3578 | 1           |
| 0x140307db8#3608 | 0x140307dff#3612 | 0           |
| 0x140307dfd#3592 | 0x140307dff#3612 | 1           |
| 0x140307e04#4017 | 0x140307e04#623  | 0           |
| 0x140307dff#2627 | 0x140307e04#1339 | 0           |
| 0x140307dff#3510 | 0x140307e04#3492 | 0           |
| 0x140307dff#3544 | 0x140307e04#3526 | 0           |
| 0x140307dff#3578 | 0x140307e04#3560 | 0           |
| 0x140307dff#3612 | 0x140307e04#3594 | 0           |
| 0x140307e04#622  | 0x140307e04#4017 | 0           |
| 0x140307e04#623  | 0x140307e04#4018 | 0           |
| 0x140307dd7#3930 | 0x140307e06#2502 | 0           |
| 0x140307e04#4018 | 0x140307e06#2502 | 1           |
| 0x140307dff#2610 | 0x140307e06#2609 | 1           |
| 0x140307a94#3905 | 0x140307e06#2626 | 0           |
| 0x140307e04#1339 | 0x140307e06#2626 | 1           |
| 0x140307db8#3506 | 0x140307e06#3509 | 0           |
| 0x140307e04#3492 | 0x140307e06#3509 | 1           |
| 0x140307db8#3540 | 0x140307e06#3543 | 0           |
| 0x140307e04#3526 | 0x140307e06#3543 | 1           |
| 0x140307db8#3574 | 0x140307e06#3577 | 0           |
| 0x140307e04#3560 | 0x140307e06#3577 | 1           |
| 0x140307db8#3608 | 0x140307e06#3611 | 0           |
| 0x140307e04#3594 | 0x140307e06#3611 | 1           |
| 0x140307e06#2626 | 0x140307e09#625  | 0           |
| 0x140307e09#4019 | 0x140307e09#626  | 1           |
| 0x140307e06#2502 | 0x140307e09#627  | 1           |
| 0x140307e06#3509 | 0x140307e09#3493 | 0           |
| 0x140307e06#3543 | 0x140307e09#3527 | 0           |
| 0x140307e06#3577 | 0x140307e09#3561 | 0           |
| 0x140307e06#3611 | 0x140307e09#3595 | 0           |
| 0x140307e09#625  | 0x140307e09#4019 | 0           |
| 0x140307b93#3949 | 0x140307e13#3541 | 0           |
| 0x140307d87#3532 | 0x140307e13#3541 | 1           |
| 0x140307d87#3532 | 0x140307e13#3541 | 2           |
| 0x140307b74#3572 | 0x140307e13#3575 | 0           |
| 0x140307d87#3566 | 0x140307e13#3575 | 1           |
| 0x140307d87#3566 | 0x140307e13#3575 | 2           |
| 0x140307b74#3606 | 0x140307e13#3609 | 0           |
| 0x140307d87#3600 | 0x140307e13#3609 | 1           |
| 0x140307d87#3600 | 0x140307e13#3609 | 2           |
| 0x140307e23#4012 | 0x140307e23#643  | 2           |
| 0x140307e13#3541 | 0x140307e23#4012 | 0           |
| 0x140307e26#3917 | 0x140307e26#646  | 1           |
| 0x140307e26#4013 | 0x140307e26#646  | 2           |
| 0x140307e13#3575 | 0x140307e26#4013 | 0           |
| 0x140307e2a#3918 | 0x140307e2a#649  | 1           |
| 0x140307e2a#4014 | 0x140307e2a#649  | 2           |
| 0x140307e13#3609 | 0x140307e2a#4014 | 0           |
| 0x140307e2e#4015 | 0x140307e2e#652  | 1           |
| 0x140307e2e#3919 | 0x140307e2e#4015 | 0           |
| 0x140307e06#2609 | 0x140307e36#2494 | 1           |
| 0x140307e36#2494 | 0x140307e46#620  | 1           |
| 0x140307e36#3923 | 0x140307e46#3924 | 1           |
| 0x140307e36#3925 | 0x140307e46#3926 | 1           |
| 0x140307e47#3511 | 0x140307e47#3484 | 0           |
| 0x140307ba5#3483 | 0x140307e47#3511 | 1           |
| 0x140307e47#3545 | 0x140307e47#3518 | 0           |
| 0x140307aa1#3306 | 0x140307e47#3545 | 0           |
| 0x140307ba5#3517 | 0x140307e47#3545 | 1           |
| 0x140307e47#3579 | 0x140307e47#3552 | 0           |
| 0x140307aa1#3307 | 0x140307e47#3579 | 0           |
| 0x140307ba5#3551 | 0x140307e47#3579 | 1           |
| 0x140307e47#3613 | 0x140307e47#3586 | 0           |
| 0x140307aa6#57   | 0x140307e47#3613 | 0           |
| 0x140307ba5#3585 | 0x140307e47#3613 | 1           |
| 0x140307e4d#3512 | 0x140307e4d#3486 | 0           |
| 0x140307ba5#3483 | 0x140307e4d#3512 | 1           |
| 0x140307e4d#3546 | 0x140307e4d#3520 | 0           |
| 0x140307aa1#3306 | 0x140307e4d#3546 | 0           |
| 0x140307ba5#3517 | 0x140307e4d#3546 | 1           |
| 0x140307e4d#3580 | 0x140307e4d#3554 | 0           |
| 0x140307aa1#3307 | 0x140307e4d#3580 | 0           |
| 0x140307ba5#3551 | 0x140307e4d#3580 | 1           |
| 0x140307e4d#3614 | 0x140307e4d#3588 | 0           |
| 0x140307aa6#57   | 0x140307e4d#3614 | 0           |
| 0x140307ba5#3585 | 0x140307e4d#3614 | 1           |

## normalized_result.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x140307aaa#59   | memory_read        | 1             |             |
| 0x140307ac6#116  | conditional_branch |               | 1           |
| 0x140307acf#129  | conditional_branch |               | 1           |
| 0x140307adc#140  | conditional_branch |               | 1           |
| 0x140307ae5#154  | conditional_branch |               | 1           |
| 0x140307aeb#157  | direct_call        | 0             |             |
| 0x140307af3#167  | conditional_branch |               | 1           |
| 0x140307b01#181  | memory_write       | 1             | 2           |
| 0x140307b0a#1322 | direct_call        | 0             |             |
| 0x140307b20#201  | direct_call        | 0             |             |
| 0x140307b2c#214  | conditional_branch |               | 1           |
| 0x140307b3c#237  | conditional_branch |               | 1           |
| 0x140307b3e#239  | memory_read        | 1             |             |
| 0x140307b4d#271  | conditional_branch |               | 1           |
| 0x140307b5f#285  | direct_call        | 0             |             |
| 0x140307b81#306  | memory_read        | 1             |             |
| 0x140307b93#326  | conditional_branch |               | 1           |
| 0x140307ba0#327  | memory_read        | 1             |             |
| 0x140307ba5#334  | direct_call        | 0             |             |
| 0x140307bac#345  | conditional_branch |               | 1           |
| 0x140307bb5#357  | conditional_branch |               | 1           |
| 0x140307bc6#664  | conditional_branch |               | 1           |
| 0x140307bd1#679  | conditional_branch |               | 1           |
| 0x140307be0#1250 | conditional_branch |               | 1           |
| 0x140307bef#1278 | conditional_branch |               | 1           |
| 0x140307bf9#702  | conditional_branch |               | 1           |
| 0x140307c04#1302 | conditional_branch |               | 1           |
| 0x140307c10#1316 | conditional_branch |               | 1           |
| 0x140307c29#770  | conditional_branch |               | 1           |
| 0x140307c47#843  | conditional_branch |               | 1           |
| 0x140307c49#845  | memory_write       | 1             | 2           |
| 0x140307c6c#886  | conditional_branch |               | 1           |
| 0x140307c8c#933  | conditional_branch |               | 1           |
| 0x140307ca7#1170 | conditional_branch |               | 1           |
| 0x140307cae#1182 | conditional_branch |               | 1           |
| 0x140307cbb#1204 | conditional_branch |               | 1           |
| 0x140307cc4#1218 | conditional_branch |               | 1           |
| 0x140307cca#939  | direct_call        | 0             |             |
| 0x140307cd2#949  | conditional_branch |               | 1           |
| 0x140307ce0#963  | memory_write       | 1             | 2           |
| 0x140307ce9#1227 | direct_call        | 0             |             |
| 0x140307cf1#968  | memory_write       | 1             | 2           |
| 0x140307d03#987  | conditional_branch |               | 1           |
| 0x140307d10#1128 | direct_call        | 0             |             |
| 0x140307d26#1000 | direct_call        | 0             |             |
| 0x140307d32#1013 | conditional_branch |               | 1           |
| 0x140307d42#1036 | conditional_branch |               | 1           |
| 0x140307d44#1038 | memory_read        | 1             |             |
| 0x140307d53#1070 | conditional_branch |               | 1           |
| 0x140307d62#1083 | direct_call        | 0             |             |
| 0x140307d96#397  | conditional_branch |               | 1           |
| 0x140307da0#410  | conditional_branch |               | 1           |
| 0x140307da5#422  | conditional_branch |               | 1           |
| 0x140307db6#486  | conditional_branch |               | 1           |
| 0x140307dbc#492  | memory_write       | 1             | 2           |
| 0x140307dc7#505  | conditional_branch |               | 1           |
| 0x140307dd7#528  | conditional_branch |               | 1           |
| 0x140307dd9#530  | memory_read        | 1             |             |
| 0x140307de8#562  | conditional_branch |               | 1           |
| 0x140307dee#574  | direct_call        | 0             |             |
| 0x140307dfd#1114 | indirect_call      | 0             |             |
| 0x140307e04#623  | indirect_call      | 0             |             |
| 0x140307e09#626  | memory_write       | 1             | 2           |
| 0x140307e09#627  | direct_call        | 0             |             |
| 0x140307e23#643  | memory_write       | 1             | 2           |
| 0x140307e26#646  | memory_write       | 1             | 2           |
| 0x140307e2a#649  | memory_write       | 1             | 2           |
| 0x140307e2e#652  | memory_write       | 1             | 2           |
| 0x140307e47#1231 | direct_call        | 0             |             |
| 0x140307e4d#1221 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /longlong *   |
| 1       | param_2 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 1       | 0x140307aaa#3906 | 0           |
| 1       | 0x140307b81#306  | 1           |
| 0       | 0x140307dbc#3913 | 0           |
| 0       | 0x140307de8#3937 | 0           |
| 0       | 0x140307dff#2610 | 0           |
| 0       | 0x140307dff#2610 | 1           |
| 0       | 0x140307e06#2609 | 0           |
| 0       | 0x140307e06#2609 | 1           |
| 0       | 0x140307e23#643  | 1           |
| 0       | 0x140307e26#3917 | 0           |
| 0       | 0x140307e2a#3918 | 0           |
| 0       | 0x140307e2e#3919 | 0           |
| 0       | 0x140307e36#2494 | 0           |
| 0       | 0x140307e36#2494 | 1           |
| 0       | 0x140307e36#3923 | 0           |
| 0       | 0x140307e36#3925 | 0           |
| 0       | 0x140307e46#620  | 1           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x140307e47 to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140307e4d to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x140307e47 to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140307e4d to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

