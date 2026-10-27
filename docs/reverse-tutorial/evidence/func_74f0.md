## evidence_id

ev_a05150160ef88093495132b031a7af14f7bab47415cb2682acf6764257c6fff3

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
| procedure | 0x1401f74f0 |

## raw_result.value.procedure.address

0x1401f74f0

## raw_result.value.procedure.name

FUN_1401f74f0

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
| 0x1401f74f0 | 0x1401f78ea |
| 0x1401f78ec | 0x1401f78f0 |

## raw_result.value.procedure.body.total_bytes

1024

## raw_result.value.procedure.body.span_bytes

1025

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f74f0()

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_50 @ Stack[-0x50]:8      | ghidra-function-database |
| undefined1[16] local_60 @ Stack[-0x60]:16 | ghidra-function-database |

## raw_result.value.pseudocode


undefined8 * FUN_1401f74f0(undefined8 *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  longlong lVar3;
  LPWSTR pWVar4;
  LPWSTR pWVar5;
  ulonglong uVar6;
  LPWSTR pWVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [32];
  LPWSTR local_60;
  LPWSTR pWStack_58;
  LPWSTR local_50;
  
  puVar9 = auStack_88;
  puVar11 = auStack_88;
  puVar10 = auStack_88;
  puVar8 = auStack_88;
  pWVar5 = (LPWSTR)0x0;
  local_60 = (LPWSTR)0x0;
  pWStack_58 = (LPWSTR)0x0;
  local_50 = (LPWSTR)0x0;
  local_60 = (LPWSTR)FUN_1403272a0(0x400);
  pWVar4 = local_60 + 0x200;
  local_50 = pWVar4;
  FUN_14035fad0(local_60,0,0x400);
  uVar6 = (longlong)pWVar4 - (longlong)local_60 >> 1 & 0xffffffff;
  pWStack_58 = pWVar4;
  do {
    DVar2 = GetModuleFileNameW((HMODULE)0x0,local_60,(DWORD)uVar6);
    pWVar4 = local_60;
    if (DVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 7;
      *(undefined2 *)param_1 = 0;
      if (local_60 != (LPWSTR)0x0) {
        pWVar5 = local_60;
        puVar8 = auStack_88;
        if ((0xfff < (ulonglong)(((longlong)local_50 - (longlong)local_60 >> 1) * 2)) &&
           (pWVar5 = *(LPWSTR *)(local_60 + -4), puVar8 = auStack_88,
           (undefined1 *)0x1f <
           (undefined1 *)((longlong)local_60 + (-8 - (longlong)*(LPWSTR *)(local_60 + -4))))) {
LAB_1401f78c0:
          pWVar5 = (LPWSTR)&DAT_00000005;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar8 = puVar11 + 8;
        }
LAB_1401f78cd:
        *(undefined8 *)(puVar8 + -8) = 0x1401f78d2;
        thunk_FUN_140327e20(pWVar5);
      }
      return param_1;
    }
    uVar13 = (longlong)pWStack_58 - (longlong)local_60 >> 1;
    uVar6 = (ulonglong)DVar2;
    if (uVar6 < uVar13 - 1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      if (DVar2 < 8) {
        param_1[2] = uVar6;
        param_1[3] = 7;
        FUN_14035f420(param_1,local_60,uVar6 * 2);
        *(undefined2 *)(uVar6 * 2 + (longlong)param_1) = 0;
      }
      else {
        uVar14 = uVar6 | 7;
        if (uVar14 < 10) {
          uVar14 = 10;
        }
        uVar13 = uVar14 * 2 + 2;
        if (uVar14 != 0x7fffffffffffffff) {
          if (uVar13 < 0x1000) {
LAB_1401f7838:
            *(undefined8 *)(puVar9 + -8) = 0x1401f783d;
            pWVar5 = (LPWSTR)FUN_1403272a0();
            puVar10 = puVar9;
          }
          else {
            uVar15 = uVar14 * 2 + 0x29;
            if (uVar15 <= uVar13) goto LAB_1401f78e6;
            lVar3 = FUN_1403272a0(uVar15);
            if (lVar3 == 0) goto LAB_1401f7831;
            pWVar5 = (LPWSTR)(lVar3 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)(pWVar5 + -4) = lVar3;
            puVar10 = auStack_88;
          }
        }
        *param_1 = pWVar5;
        param_1[2] = uVar6;
        param_1[3] = uVar14;
        *(undefined8 *)(puVar10 + -8) = 0x1401f7860;
        FUN_14035f420(pWVar5,pWVar4,uVar6 * 2);
        pWVar5[uVar6] = L'\0';
        pWVar4 = local_60;
        puVar8 = puVar10;
      }
LAB_1401f7754:
      if (pWVar4 == (LPWSTR)0x0) {
        return param_1;
      }
      pWVar5 = pWVar4;
      if (((ulonglong)(((longlong)local_50 - (longlong)pWVar4 >> 1) * 2) < 0x1000) ||
         (pWVar5 = *(LPWSTR *)(pWVar4 + -4), puVar11 = puVar8,
         (undefined1 *)((longlong)pWVar4 + (-8 - (longlong)pWVar5)) < &DAT_00000020))
      goto LAB_1401f78cd;
      goto LAB_1401f78c0;
    }
    if (0x7fff < uVar13) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 7;
      *(undefined2 *)param_1 = 0;
      puVar8 = auStack_88;
      goto LAB_1401f7754;
    }
    uVar14 = uVar13 * 2;
    uVar16 = (longlong)pWStack_58 - (longlong)local_60;
    uVar15 = (longlong)uVar16 >> 1;
    if (uVar14 < uVar15) {
      uVar6 = (longlong)(local_60 + uVar13 * 2) - (longlong)local_60 >> 1 & 0xffffffff;
      pWStack_58 = local_60 + uVar13 * 2;
    }
    else if (uVar15 < uVar14) {
      if ((ulonglong)((longlong)local_50 - (longlong)local_60 >> 1) < uVar14) {
        if (0x7fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_14000bff0();
        }
        uVar6 = (longlong)local_50 - (longlong)local_60 >> 1;
        if ((0x7fffffffffffffff - (uVar6 >> 1) < uVar6) ||
           ((uVar6 = (uVar6 >> 1) + uVar6, uVar12 = uVar14, uVar14 <= uVar6 &&
            (uVar12 = uVar6, 0x7fffffffffffffff < uVar6)))) {
LAB_1401f78e6:
                    /* WARNING: Subroutine does not return */
          FUN_140005500();
        }
        uVar6 = uVar12 * 2;
        pWVar7 = pWVar5;
        if (uVar6 != 0) {
          if (uVar6 < 0x1000) {
            pWVar7 = (LPWSTR)FUN_1403272a0(uVar6);
          }
          else {
            if (uVar6 + 0x27 <= uVar6) goto LAB_1401f78e6;
            lVar3 = FUN_1403272a0();
            if (lVar3 == 0) goto LAB_1401f7831;
            pWVar7 = (LPWSTR)(lVar3 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)(pWVar7 + -4) = lVar3;
          }
        }
        FUN_14035fad0((undefined1 *)((longlong)pWVar7 + (uVar16 & 0xfffffffffffffffe)),0,
                      (uVar14 - uVar15) * 2);
        FUN_14035f420(pWVar7,local_60,(longlong)pWStack_58 - (longlong)local_60);
        if (local_60 != (LPWSTR)0x0) {
          uVar15 = ((longlong)local_50 - (longlong)local_60 >> 1) * 2;
          pWVar4 = local_60;
          if (0xfff < uVar15) {
            pWVar4 = pWVar7;
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)local_60 + (-8 - (longlong)*(LPWSTR *)(local_60 + -4)))) {
LAB_1401f7831:
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar9 = auStack_80;
              goto LAB_1401f7838;
            }
            uVar15 = uVar15 + 0x27;
            pWVar4 = *(LPWSTR *)(local_60 + -4);
          }
          thunk_FUN_140327e20(pWVar4,uVar15);
        }
        local_50 = pWVar7 + uVar12;
        uVar6 = (longlong)(pWVar7 + uVar13 * 2) - (longlong)pWVar7 >> 1 & 0xffffffff;
        local_60 = pWVar7;
        pWStack_58 = pWVar7 + uVar13 * 2;
      }
      else {
        pWVar4 = pWStack_58 + (uVar14 - uVar15);
        FUN_14035fad0(pWStack_58,0);
        uVar6 = (longlong)pWVar4 - (longlong)local_60 >> 1 & 0xffffffff;
        pWStack_58 = pWVar4;
      }
    }
    else {
      uVar6 = (longlong)pWStack_58 - (longlong)local_60 >> 1 & 0xffffffff;
    }
  } while( true );
}



## raw_result.value.assembly

0x1401f74f0: PUSH RBP,0x1401f74f2: PUSH RBX,0x1401f74f3: PUSH RSI,0x1401f74f4: PUSH RDI,0x1401f74f5: PUSH R12,0x1401f74f7: PUSH R13,0x1401f74f9: PUSH R14,0x1401f74fb: PUSH R15,0x1401f74fd: MOV RBP, RSP,0x1401f7500: SUB RSP, 0x48,0x1401f7504: MOV R12, RCX,0x1401f7507: XOR R13D, R13D,0x1401f750a: XORPS XMM0, XMM0,0x1401f750d: MOVDQU xmmword ptr [RBP + -0x20], XMM0,0x1401f7512: MOV qword ptr [RBP + -0x10], R13,0x1401f7516: MOV ECX, 0x400,0x1401f751b: CALL 0x1403272a0,0x1401f7520: MOV qword ptr [RBP + -0x20], RAX,0x1401f7524: LEA RBX, [RAX + 0x400],0x1401f752b: MOV qword ptr [RBP + -0x10], RBX,0x1401f752f: XOR EDX, EDX,0x1401f7531: MOV R8D, 0x400,0x1401f7537: MOV RCX, RAX,0x1401f753a: CALL 0x14035fad0,0x1401f753f: MOV qword ptr [RBP + -0x18], RBX,0x1401f7543: MOV RDX, qword ptr [RBP + -0x20],0x1401f7547: SUB RBX, RDX,0x1401f754a: SAR RBX, 0x1,0x1401f754d: MOV R8D, EBX,0x1401f7550: XOR ECX, ECX,0x1401f7552: CALL qword ptr [0x14037a9f8],0x1401f7558: TEST EAX, EAX,0x1401f755a: MOV ECX, EAX,0x1401f755c: JZ 0x1401f786e,0x1401f7562: MOV R8, 0x7fffffffffffffff,0x1401f756c: MOV R9, qword ptr [RBP + -0x18],0x1401f7570: MOV RDI, R9,0x1401f7573: MOV RBX, qword ptr [RBP + -0x20],0x1401f7577: SUB RDI, RBX,0x1401f757a: SAR RDI, 0x1,0x1401f757d: MOV ESI, EAX,0x1401f757f: LEA RAX, [RDI + -0x1],0x1401f7583: CMP RSI, RAX,0x1401f7586: JC 0x1401f779a,0x1401f758c: CMP RDI, 0x8000,0x1401f7593: JNC 0x1401f7739,0x1401f7599: ADD RDI, RDI,0x1401f759c: MOV R15, R9,0x1401f759f: SUB R15, RBX,0x1401f75a2: MOV R14, R15,0x1401f75a5: SAR R14, 0x1,0x1401f75a8: CMP RDI, R14,0x1401f75ab: JNC 0x1401f75c3,0x1401f75ad: LEA RDI, [RBX + RDI*0x2],0x1401f75b1: MOV qword ptr [RBP + -0x18], RDI,0x1401f75b5: SUB RDI, RBX,0x1401f75b8: SAR RDI, 0x1,0x1401f75bb: MOV R8D, EDI,0x1401f75be: MOV RDX, RBX,0x1401f75c1: JMP 0x1401f7550,0x1401f75c3: JBE 0x1401f7725,0x1401f75c9: MOV RCX, qword ptr [RBP + -0x10],0x1401f75cd: MOV RAX, RCX,0x1401f75d0: SUB RAX, RBX,0x1401f75d3: SAR RAX, 0x1,0x1401f75d6: CMP RDI, RAX,0x1401f75d9: JBE 0x1401f76f7,0x1401f75df: CMP RDI, R8,0x1401f75e2: JA 0x1401f78ec,0x1401f75e8: SUB RCX, RBX,0x1401f75eb: SAR RCX, 0x1,0x1401f75ee: MOV RDX, RCX,0x1401f75f1: SHR RDX, 0x1,0x1401f75f4: MOV RAX, R8,0x1401f75f7: SUB RAX, RDX,0x1401f75fa: CMP RCX, RAX,0x1401f75fd: JA 0x1401f78e6,0x1401f7603: LEA RSI, [RDX + RCX*0x1],0x1401f7607: CMP RSI, RDI,0x1401f760a: JNC 0x1401f7611,0x1401f760c: MOV RSI, RDI,0x1401f760f: JMP 0x1401f761a,0x1401f7611: CMP RSI, R8,0x1401f7614: JA 0x1401f78e6,0x1401f761a: ADD RSI, RSI,0x1401f761d: JNZ 0x1401f7624,0x1401f761f: MOV RBX, R13,0x1401f7622: JMP 0x1401f7661,0x1401f7624: CMP RSI, 0x1000,0x1401f762b: JC 0x1401f7656,0x1401f762d: LEA RCX, [RSI + 0x27],0x1401f7631: CMP RCX, RSI,0x1401f7634: JBE 0x1401f78e6,0x1401f763a: CALL 0x1403272a0,0x1401f763f: TEST RAX, RAX,0x1401f7642: JZ 0x1401f7831,0x1401f7648: LEA RBX, [RAX + 0x27],0x1401f764c: AND RBX, -0x20,0x1401f7650: MOV qword ptr [RBX + -0x8], RAX,0x1401f7654: JMP 0x1401f7661,0x1401f7656: MOV RCX, RSI,0x1401f7659: CALL 0x1403272a0,0x1401f765e: MOV RBX, RAX,0x1401f7661: AND R15, -0x2,0x1401f7665: LEA RCX, [RBX + R15*0x1],0x1401f7669: MOV R8, RDI,0x1401f766c: SUB R8, R14,0x1401f766f: ADD R8, R8,0x1401f7672: XOR EDX, EDX,0x1401f7674: CALL 0x14035fad0,0x1401f7679: MOV RDX, qword ptr [RBP + -0x20],0x1401f767d: MOV R8, qword ptr [RBP + -0x18],0x1401f7681: SUB R8, RDX,0x1401f7684: MOV RCX, RBX,0x1401f7687: CALL 0x14035f420,0x1401f768c: MOV RCX, qword ptr [RBP + -0x20],0x1401f7690: TEST RCX, RCX,0x1401f7693: JZ 0x1401f76d2,0x1401f7695: MOV RAX, qword ptr [RBP + -0x10],0x1401f7699: SUB RAX, RCX,0x1401f769c: SAR RAX, 0x1,0x1401f769f: LEA RDX, [RAX + RAX*0x1],0x1401f76a3: CMP RDX, 0x1000,0x1401f76aa: JC 0x1401f76c7,0x1401f76ac: MOV RAX, qword ptr [RCX + -0x8],0x1401f76b0: SUB RCX, RAX,0x1401f76b3: SUB RCX, 0x8,0x1401f76b7: CMP RCX, 0x1f,0x1401f76bb: JA 0x1401f7831,0x1401f76c1: ADD RDX, 0x27,0x1401f76c5: JMP 0x1401f76ca,0x1401f76c7: MOV RAX, RCX,0x1401f76ca: MOV RCX, RAX,0x1401f76cd: CALL 0x1403272f0,0x1401f76d2: MOV qword ptr [RBP + -0x20], RBX,0x1401f76d6: LEA RDI, [RBX + RDI*0x2],0x1401f76da: MOV qword ptr [RBP + -0x18], RDI,0x1401f76de: LEA RAX, [RSI + RBX*0x1],0x1401f76e2: MOV qword ptr [RBP + -0x10], RAX,0x1401f76e6: SUB RDI, RBX,0x1401f76e9: SAR RDI, 0x1,0x1401f76ec: MOV R8D, EDI,0x1401f76ef: MOV RDX, RBX,0x1401f76f2: JMP 0x1401f7550,0x1401f76f7: SUB RDI, R14,0x1401f76fa: LEA R8, [RDI + RDI*0x1],0x1401f76fe: LEA RDI, [R8 + R9*0x1],0x1401f7702: XOR EDX, EDX,0x1401f7704: MOV RCX, R9,0x1401f7707: CALL 0x14035fad0,0x1401f770c: MOV qword ptr [RBP + -0x18], RDI,0x1401f7710: MOV RBX, qword ptr [RBP + -0x20],0x1401f7714: SUB RDI, RBX,0x1401f7717: SAR RDI, 0x1,0x1401f771a: MOV R8D, EDI,0x1401f771d: MOV RDX, RBX,0x1401f7720: JMP 0x1401f7550,0x1401f7725: MOV RDI, R9,0x1401f7728: SUB RDI, RBX,0x1401f772b: SAR RDI, 0x1,0x1401f772e: MOV R8D, EDI,0x1401f7731: MOV RDX, RBX,0x1401f7734: JMP 0x1401f7550,0x1401f7739: XORPS XMM0, XMM0,0x1401f773c: MOVUPS xmmword ptr [R12], XMM0,0x1401f7741: MOV qword ptr [R12 + 0x10], R13,0x1401f7746: MOV qword ptr [R12 + 0x18], 0x7,0x1401f774f: MOV word ptr [R12], R13W,0x1401f7754: TEST RBX, RBX,0x1401f7757: JZ 0x1401f78d2,0x1401f775d: MOV RAX, qword ptr [RBP + -0x10],0x1401f7761: SUB RAX, RBX,0x1401f7764: SAR RAX, 0x1,0x1401f7767: LEA RDX, [RAX + RAX*0x1],0x1401f776b: CMP RDX, 0x1000,0x1401f7772: JC 0x1401f7792,0x1401f7774: MOV RCX, qword ptr [RBX + -0x8],0x1401f7778: SUB RBX, RCX,0x1401f777b: SUB RBX, 0x8,0x1401f777f: CMP RBX, 0x1f,0x1401f7783: JA 0x1401f78c0,0x1401f7789: ADD RDX, 0x27,0x1401f778d: JMP 0x1401f78cd,0x1401f7792: MOV RCX, RBX,0x1401f7795: JMP 0x1401f78cd,0x1401f779a: XORPS XMM0, XMM0,0x1401f779d: MOVUPS xmmword ptr [R12], XMM0,0x1401f77a2: MOV qword ptr [R12 + 0x10], R13,0x1401f77a7: MOV qword ptr [R12 + 0x18], R13,0x1401f77ac: CMP ECX, 0x7,0x1401f77af: JA 0x1401f77db,0x1401f77b1: MOV qword ptr [R12 + 0x10], RSI,0x1401f77b6: MOV qword ptr [R12 + 0x18], 0x7,0x1401f77bf: LEA RDI, [RSI + RSI*0x1],0x1401f77c3: MOV R8, RDI,0x1401f77c6: MOV RDX, RBX,0x1401f77c9: MOV RCX, R12,0x1401f77cc: CALL 0x14035f420,0x1401f77d1: MOV word ptr [RDI + R12*0x1], R13W,0x1401f77d6: JMP 0x1401f7754,0x1401f77db: MOV RDI, RSI,0x1401f77de: OR RDI, 0x7,0x1401f77e2: MOV EAX, 0xa,0x1401f77e7: CMP RDI, RAX,0x1401f77ea: CMOVC RDI, RAX,0x1401f77ee: LEA RCX, [0x2 + RDI*0x2],0x1401f77f6: TEST RCX, RCX,0x1401f77f9: JNZ 0x1401f7800,0x1401f77fb: MOV R14, R13,0x1401f77fe: JMP 0x1401f7840,0x1401f7800: CMP RCX, 0x1000,0x1401f7807: JC 0x1401f7838,0x1401f7809: LEA RAX, [RCX + 0x27],0x1401f780d: CMP RAX, RCX,0x1401f7810: JBE 0x1401f78e6,0x1401f7816: MOV RCX, RAX,0x1401f7819: CALL 0x1403272a0,0x1401f781e: TEST RAX, RAX,0x1401f7821: JZ 0x1401f7831,0x1401f7823: LEA R14, [RAX + 0x27],0x1401f7827: AND R14, -0x20,0x1401f782b: MOV qword ptr [R14 + -0x8], RAX,0x1401f782f: JMP 0x1401f7840,0x1401f7831: MOV ECX, 0x5,0x1401f7836: INT 0x29,0x1401f7838: CALL 0x1403272a0,0x1401f783d: MOV R14, RAX,0x1401f7840: MOV qword ptr [R12], R14,0x1401f7844: MOV qword ptr [R12 + 0x10], RSI,0x1401f7849: MOV qword ptr [R12 + 0x18], RDI,0x1401f784e: LEA RDI, [RSI + RSI*0x1],0x1401f7852: MOV R8, RDI,0x1401f7855: MOV RDX, RBX,0x1401f7858: MOV RCX, R14,0x1401f785b: CALL 0x14035f420,0x1401f7860: MOV word ptr [RDI + R14*0x1], R13W,0x1401f7865: MOV RBX, qword ptr [RBP + -0x20],0x1401f7869: JMP 0x1401f7754,0x1401f786e: XORPS XMM0, XMM0,0x1401f7871: MOVUPS xmmword ptr [R12], XMM0,0x1401f7876: MOV qword ptr [R12 + 0x10], R13,0x1401f787b: MOV qword ptr [R12 + 0x18], 0x7,0x1401f7884: MOV word ptr [R12], R13W,0x1401f7889: MOV RCX, qword ptr [RBP + -0x20],0x1401f788d: TEST RCX, RCX,0x1401f7890: JZ 0x1401f78d2,0x1401f7892: MOV RAX, qword ptr [RBP + -0x10],0x1401f7896: SUB RAX, RCX,0x1401f7899: SAR RAX, 0x1,0x1401f789c: LEA RDX, [RAX + RAX*0x1],0x1401f78a0: CMP RDX, 0x1000,0x1401f78a7: JC 0x1401f78c7,0x1401f78a9: MOV RAX, qword ptr [RCX + -0x8],0x1401f78ad: SUB RCX, RAX,0x1401f78b0: SUB RCX, 0x8,0x1401f78b4: CMP RCX, 0x1f,0x1401f78b8: JA 0x1401f78c0,0x1401f78ba: ADD RDX, 0x27,0x1401f78be: JMP 0x1401f78ca,0x1401f78c0: MOV ECX, 0x5,0x1401f78c5: INT 0x29,0x1401f78c7: MOV RAX, RCX,0x1401f78ca: MOV RCX, RAX,0x1401f78cd: CALL 0x1403272f0,0x1401f78d2: MOV RAX, R12,0x1401f78d5: ADD RSP, 0x48,0x1401f78d9: POP R15,0x1401f78db: POP R14,0x1401f78dd: POP R13,0x1401f78df: POP R12,0x1401f78e1: POP RDI,0x1401f78e2: POP RSI,0x1401f78e3: POP RBX,0x1401f78e4: POP RBP,0x1401f78e5: RET,0x1401f78e6: CALL 0x140005500,0x1401f78ec: CALL 0x14000bff0

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f7ae0 | FUN_1401f7ae0 | [object Object] | [object Object] |

## raw_result.value.callees

| address        | name                             | classification  | body            |
|----------------|----------------------------------|-----------------|-----------------|
| EXTERNAL:0x2a4 | KERNEL32.DLL::GetModuleFileNameW | [object Object] | [object Object] |
| 0x140005500    | FUN_140005500                    | [object Object] | [object Object] |
| 0x14000bff0    | FUN_14000bff0                    | [object Object] | [object Object] |
| 0x1403272a0    | FUN_1403272a0                    | [object Object] | [object Object] |
| 0x1403272f0    | thunk_FUN_140327e20              | [object Object] | [object Object] |
| 0x14035f420    | FUN_14035f420                    | [object Object] | [object Object] |
| 0x14035fad0    | FUN_14035fad0                    | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f7afa    | 0x1401f74f0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfaf8    | 0x1401f74f0    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f750d    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7512    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f751b    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7520    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f752b    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f753a    | 0x14035fad0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f753f    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7543    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7552    | EXTERNAL:0x2a4           | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7552    | 0x14037a9f8              | [object Object]  |                  | [object Object] |
| 0x1401f755c    | 0x1401f786e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f756c    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7573    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7586    | 0x1401f779a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7593    | 0x1401f7739              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75ab    | 0x1401f75c3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75b1    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f75c1    | 0x1401f7550              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75c3    | 0x1401f7725              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75c9    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f75d9    | 0x1401f76f7              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75e2    | 0x1401f78ec              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75fd    | 0x1401f78e6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f760a    | 0x1401f7611              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f760f    | 0x1401f761a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7614    | 0x1401f78e6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f761d    | 0x1401f7624              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7622    | 0x1401f7661              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f762b    | 0x1401f7656              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7634    | 0x1401f78e6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f763a    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7642    | 0x1401f7831              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7654    | 0x1401f7661              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7659    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7674    | 0x14035fad0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7679    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f767d    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7687    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f768c    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7693    | 0x1401f76d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7695    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f76aa    | 0x1401f76c7              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f76bb    | 0x1401f7831              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f76c5    | 0x1401f76ca              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f76cd    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f76d2    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f76da    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f76e2    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f76f2    | 0x1401f7550              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7707    | 0x14035fad0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f770c    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7710    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7720    | 0x1401f7550              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7734    | 0x1401f7550              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7757    | 0x1401f78d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f775d    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f7772    | 0x1401f7792              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7783    | 0x1401f78c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f778d    | 0x1401f78cd              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7795    | 0x1401f78cd              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f77af    | 0x1401f77db              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f77cc    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f77d6    | 0x1401f7754              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f77f9    | 0x1401f7800              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f77fe    | 0x1401f7840              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7807    | 0x1401f7838              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7810    | 0x1401f78e6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7819    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7821    | 0x1401f7831              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f782f    | 0x1401f7840              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7838    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f785b    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7865    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7869    | 0x1401f7754              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7889    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7890    | 0x1401f78d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7892    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f78a7    | 0x1401f78c7              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f78b8    | 0x1401f78c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f78be    | 0x1401f78ca              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f78cd    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f78e6    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f78ec    | 0x14000bff0              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address        | value                            | source_address |
|----------------|----------------------------------|----------------|
| 0x140005500    | FUN_140005500                    | 0x1401f78e6    |
| 0x14000bff0    | FUN_14000bff0                    | 0x1401f78ec    |
| 0x1401f7550    | LAB_1401f7550                    | 0x1401f75c1    |
| 0x1401f7550    | LAB_1401f7550                    | 0x1401f76f2    |
| 0x1401f7550    | LAB_1401f7550                    | 0x1401f7720    |
| 0x1401f7550    | LAB_1401f7550                    | 0x1401f7734    |
| 0x1401f75c3    | LAB_1401f75c3                    | 0x1401f75ab    |
| 0x1401f7611    | LAB_1401f7611                    | 0x1401f760a    |
| 0x1401f761a    | LAB_1401f761a                    | 0x1401f760f    |
| 0x1401f7624    | LAB_1401f7624                    | 0x1401f761d    |
| 0x1401f7656    | LAB_1401f7656                    | 0x1401f762b    |
| 0x1401f7661    | LAB_1401f7661                    | 0x1401f7622    |
| 0x1401f7661    | LAB_1401f7661                    | 0x1401f7654    |
| 0x1401f76c7    | LAB_1401f76c7                    | 0x1401f76aa    |
| 0x1401f76ca    | LAB_1401f76ca                    | 0x1401f76c5    |
| 0x1401f76d2    | LAB_1401f76d2                    | 0x1401f7693    |
| 0x1401f76f7    | LAB_1401f76f7                    | 0x1401f75d9    |
| 0x1401f7725    | LAB_1401f7725                    | 0x1401f75c3    |
| 0x1401f7739    | LAB_1401f7739                    | 0x1401f7593    |
| 0x1401f7754    | LAB_1401f7754                    | 0x1401f77d6    |
| 0x1401f7754    | LAB_1401f7754                    | 0x1401f7869    |
| 0x1401f7792    | LAB_1401f7792                    | 0x1401f7772    |
| 0x1401f779a    | LAB_1401f779a                    | 0x1401f7586    |
| 0x1401f77db    | LAB_1401f77db                    | 0x1401f77af    |
| 0x1401f7800    | LAB_1401f7800                    | 0x1401f77f9    |
| 0x1401f7831    | LAB_1401f7831                    | 0x1401f7642    |
| 0x1401f7831    | LAB_1401f7831                    | 0x1401f76bb    |
| 0x1401f7831    | LAB_1401f7831                    | 0x1401f7821    |
| 0x1401f7838    | LAB_1401f7838                    | 0x1401f7807    |
| 0x1401f7840    | LAB_1401f7840                    | 0x1401f77fe    |
| 0x1401f7840    | LAB_1401f7840                    | 0x1401f782f    |
| 0x1401f786e    | LAB_1401f786e                    | 0x1401f755c    |
| 0x1401f78c0    | LAB_1401f78c0                    | 0x1401f7783    |
| 0x1401f78c0    | LAB_1401f78c0                    | 0x1401f78b8    |
| 0x1401f78c7    | LAB_1401f78c7                    | 0x1401f78a7    |
| 0x1401f78ca    | LAB_1401f78ca                    | 0x1401f78be    |
| 0x1401f78cd    | LAB_1401f78cd                    | 0x1401f778d    |
| 0x1401f78cd    | LAB_1401f78cd                    | 0x1401f7795    |
| 0x1401f78d2    | LAB_1401f78d2                    | 0x1401f7757    |
| 0x1401f78d2    | LAB_1401f78d2                    | 0x1401f7890    |
| 0x1401f78e6    | LAB_1401f78e6                    | 0x1401f75fd    |
| 0x1401f78e6    | LAB_1401f78e6                    | 0x1401f7614    |
| 0x1401f78e6    | LAB_1401f78e6                    | 0x1401f7634    |
| 0x1401f78e6    | LAB_1401f78e6                    | 0x1401f7810    |
| 0x1401f78ec    | LAB_1401f78ec                    | 0x1401f75e2    |
| 0x1403272a0    | FUN_1403272a0                    | 0x1401f751b    |
| 0x1403272a0    | FUN_1403272a0                    | 0x1401f763a    |
| 0x1403272a0    | FUN_1403272a0                    | 0x1401f7659    |
| 0x1403272a0    | FUN_1403272a0                    | 0x1401f7819    |
| 0x1403272a0    | FUN_1403272a0                    | 0x1401f7838    |
| 0x1403272f0    | thunk_FUN_140327e20              | 0x1401f76cd    |
| 0x1403272f0    | thunk_FUN_140327e20              | 0x1401f78cd    |
| 0x14035f420    | FUN_14035f420                    | 0x1401f7687    |
| 0x14035f420    | FUN_14035f420                    | 0x1401f77cc    |
| 0x14035f420    | FUN_14035f420                    | 0x1401f785b    |
| 0x14035fad0    | FUN_14035fad0                    | 0x1401f753a    |
| 0x14035fad0    | FUN_14035fad0                    | 0x1401f7674    |
| 0x14035fad0    | FUN_14035fad0                    | 0x1401f7707    |
| 0x14037a9f8    | PTR_GetModuleFileNameW_14037a9f8 | 0x1401f7552    |
| EXTERNAL:0x2a4 | KERNEL32.DLL::GetModuleFileNameW | 0x1401f7552    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f74f0 | 0x1401f7550 | 0x1401f7550             |
| 0x1401f7550 | 0x1401f7562 | 0x1401f7562,0x1401f786e |
| 0x1401f7562 | 0x1401f758c | 0x1401f758c,0x1401f779a |
| 0x1401f758c | 0x1401f7599 | 0x1401f7599,0x1401f7739 |
| 0x1401f7599 | 0x1401f75ad | 0x1401f75ad,0x1401f75c3 |
| 0x1401f75ad | 0x1401f75c3 | 0x1401f7550             |
| 0x1401f75c3 | 0x1401f75c9 | 0x1401f75c9,0x1401f7725 |
| 0x1401f75c9 | 0x1401f75df | 0x1401f75df,0x1401f76f7 |
| 0x1401f75df | 0x1401f75e8 | 0x1401f75e8,0x1401f78ec |
| 0x1401f75e8 | 0x1401f7603 | 0x1401f7603,0x1401f78e6 |
| 0x1401f7603 | 0x1401f760c | 0x1401f760c,0x1401f7611 |
| 0x1401f760c | 0x1401f7611 | 0x1401f761a             |
| 0x1401f7611 | 0x1401f761a | 0x1401f761a,0x1401f78e6 |
| 0x1401f761a | 0x1401f761f | 0x1401f761f,0x1401f7624 |
| 0x1401f761f | 0x1401f7624 | 0x1401f7661             |
| 0x1401f7624 | 0x1401f762d | 0x1401f762d,0x1401f7656 |
| 0x1401f762d | 0x1401f763a | 0x1401f763a,0x1401f78e6 |
| 0x1401f763a | 0x1401f7648 | 0x1401f7648,0x1401f7831 |
| 0x1401f7648 | 0x1401f7656 | 0x1401f7661             |
| 0x1401f7656 | 0x1401f7661 | 0x1401f7661             |
| 0x1401f7661 | 0x1401f7695 | 0x1401f7695,0x1401f76d2 |
| 0x1401f7695 | 0x1401f76ac | 0x1401f76ac,0x1401f76c7 |
| 0x1401f76ac | 0x1401f76c1 | 0x1401f76c1,0x1401f7831 |
| 0x1401f76c1 | 0x1401f76c7 | 0x1401f76ca             |
| 0x1401f76c7 | 0x1401f76ca | 0x1401f76ca             |
| 0x1401f76ca | 0x1401f76d2 | 0x1401f76d2             |
| 0x1401f76d2 | 0x1401f76f7 | 0x1401f7550             |
| 0x1401f76f7 | 0x1401f7725 | 0x1401f7550             |
| 0x1401f7725 | 0x1401f7739 | 0x1401f7550             |
| 0x1401f7739 | 0x1401f7754 | 0x1401f7754             |
| 0x1401f7754 | 0x1401f775d | 0x1401f775d,0x1401f78d2 |
| 0x1401f775d | 0x1401f7774 | 0x1401f7774,0x1401f7792 |
| 0x1401f7774 | 0x1401f7789 | 0x1401f7789,0x1401f78c0 |
| 0x1401f7789 | 0x1401f7792 | 0x1401f78cd             |
| 0x1401f7792 | 0x1401f779a | 0x1401f78cd             |
| 0x1401f779a | 0x1401f77b1 | 0x1401f77b1,0x1401f77db |
| 0x1401f77b1 | 0x1401f77db | 0x1401f7754             |
| 0x1401f77db | 0x1401f77fb | 0x1401f77fb,0x1401f7800 |
| 0x1401f77fb | 0x1401f7800 | 0x1401f7840             |
| 0x1401f7800 | 0x1401f7809 | 0x1401f7809,0x1401f7838 |
| 0x1401f7809 | 0x1401f7816 | 0x1401f7816,0x1401f78e6 |
| 0x1401f7816 | 0x1401f7823 | 0x1401f7823,0x1401f7831 |
| 0x1401f7823 | 0x1401f7831 | 0x1401f7840             |
| 0x1401f7831 | 0x1401f7838 | 0x1401f7838             |
| 0x1401f7838 | 0x1401f7840 | 0x1401f7840             |
| 0x1401f7840 | 0x1401f786e | 0x1401f7754             |
| 0x1401f786e | 0x1401f7892 | 0x1401f7892,0x1401f78d2 |
| 0x1401f7892 | 0x1401f78a9 | 0x1401f78a9,0x1401f78c7 |
| 0x1401f78a9 | 0x1401f78ba | 0x1401f78ba,0x1401f78c0 |
| 0x1401f78ba | 0x1401f78c0 | 0x1401f78ca             |
| 0x1401f78c0 | 0x1401f78c7 | 0x1401f78c7             |
| 0x1401f78c7 | 0x1401f78ca | 0x1401f78ca             |
| 0x1401f78ca | 0x1401f78cd | 0x1401f78cd             |
| 0x1401f78cd | 0x1401f78d2 | 0x1401f78d2             |
| 0x1401f78d2 | 0x1401f78e6 |                         |
| 0x1401f78e6 | 0x1401f78eb |                         |
| 0x1401f78ec | 0x1401f78f1 |                         |

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

| id               | address     | sequence | opcode        | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|---------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x1401f7500#2782 | 0x1401f7500 | 2782     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2783 | 0x1401f7500 | 2783     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2784 | 0x1401f7500 | 2784     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2785 | 0x1401f7500 | 2785     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2786 | 0x1401f7500 | 2786     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2787 | 0x1401f7500 | 2787     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2788 | 0x1401f7500 | 2788     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2789 | 0x1401f7500 | 2789     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7507#1924 | 0x1401f7507 | 1924     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f750d#2357 | 0x1401f750d | 2357     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f750d#2358 | 0x1401f750d | 2358     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7512#54   | 0x1401f7512 | 54       | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f751b#58   | 0x1401f751b | 58       | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f751b#2409 | 0x1401f751b | 2409     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f751b#2442 | 0x1401f751b | 2442     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f751b#2475 | 0x1401f751b | 2475     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f751b#2860 | 0x1401f751b | 2860     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7524#2790 | 0x1401f7524 | 2790     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f753a#81   | 0x1401f753a | 81       | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f753a#2410 | 0x1401f753a | 2410     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f753a#2443 | 0x1401f753a | 2443     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f753a#2476 | 0x1401f753a | 2476     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f753a#2859 | 0x1401f753a | 2859     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7547#90   | 0x1401f7547 | 90       | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7547#2861 | 0x1401f7547 | 2861     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7547#2862 | 0x1401f7547 | 2862     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f754a#100  | 0x1401f754a | 100      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f754d#1844 | 0x1401f754d | 1844     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f754d#2852 | 0x1401f754d | 2852     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f754d#2855 | 0x1401f754d | 2855     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7550#1874 | 0x1401f7550 | 1874     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7550#2433 | 0x1401f7550 | 2433     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7550#2466 | 0x1401f7550 | 2466     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7550#2499 | 0x1401f7550 | 2499     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7552#122  | 0x1401f7552 | 122      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f7552#2375 | 0x1401f7552 | 2375     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7552#2411 | 0x1401f7552 | 2411     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7552#2444 | 0x1401f7552 | 2444     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7552#2477 | 0x1401f7552 | 2477     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7552#2827 | 0x1401f7552 | 2827     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7558#127  | 0x1401f7558 | 127      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f755c#134  | 0x1401f755c | 134      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7577#145  | 0x1401f7577 | 145      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7577#2871 | 0x1401f7577 | 2871     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7577#2872 | 0x1401f7577 | 2872     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f757a#155  | 0x1401f757a | 155      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f757d#1809 | 0x1401f757d | 1809     | INT_ZEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f757f#164  | 0x1401f757f | 164      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7583#167  | 0x1401f7583 | 167      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7586#176  | 0x1401f7586 | 176      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f758c#178  | 0x1401f758c | 178      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7593#188  | 0x1401f7593 | 188      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7599#2296 | 0x1401f7599 | 2296     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f759f#201  | 0x1401f759f | 201      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f759f#2878 | 0x1401f759f | 2878     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f759f#2879 | 0x1401f759f | 2879     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75a5#212  | 0x1401f75a5 | 212      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75a5#2880 | 0x1401f75a5 | 2880     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75a8#220  | 0x1401f75a8 | 220      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75ab#230  | 0x1401f75ab | 230      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f75ad#2791 | 0x1401f75ad | 2791     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75ad#2792 | 0x1401f75ad | 2792     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f75b5#239  | 0x1401f75b5 | 239      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75b5#2919 | 0x1401f75b5 | 2919     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75b5#2920 | 0x1401f75b5 | 2920     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75b8#249  | 0x1401f75b8 | 249      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75bb#1846 | 0x1401f75bb | 1846     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75c1#259  | 0x1401f75c1 | 259      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f75c1#2853 | 0x1401f75c1 | 2853     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75c1#2856 | 0x1401f75c1 | 2856     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75c3#260  | 0x1401f75c3 | 260      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75c3#261  | 0x1401f75c3 | 261      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f75d0#268  | 0x1401f75d0 | 268      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75d0#2883 | 0x1401f75d0 | 2883     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75d0#2884 | 0x1401f75d0 | 2884     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75d3#278  | 0x1401f75d3 | 278      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75d9#295  | 0x1401f75d9 | 295      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75d9#296  | 0x1401f75d9 | 296      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f75d9#2885 | 0x1401f75d9 | 2885     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75e2#307  | 0x1401f75e2 | 307      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75e2#309  | 0x1401f75e2 | 309      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f75e8#312  | 0x1401f75e8 | 312      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75e8#2888 | 0x1401f75e8 | 2888     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75e8#2889 | 0x1401f75e8 | 2889     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75eb#322  | 0x1401f75eb | 322      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75f1#333  | 0x1401f75f1 | 333      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75f7#343  | 0x1401f75f7 | 343      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75fd#360  | 0x1401f75fd | 360      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75fd#362  | 0x1401f75fd | 362      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7603#364  | 0x1401f7603 | 364      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7607#367  | 0x1401f7607 | 367      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f760a#377  | 0x1401f760a | 377      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f760a#2851 | 0x1401f760a | 2851     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7614#843  | 0x1401f7614 | 843      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7614#844  | 0x1401f7614 | 844      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7614#2850 | 0x1401f7614 | 2850     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f761a#384  | 0x1401f761a | 384      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f761a#1813 | 0x1401f761a | 1813     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f761a#2309 | 0x1401f761a | 2309     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f761d#390  | 0x1401f761d | 390      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f761d#2836 | 0x1401f761d | 2836     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7624#770  | 0x1401f7624 | 770      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f762b#779  | 0x1401f762b | 779      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f762d#780  | 0x1401f762d | 780      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7634#792  | 0x1401f7634 | 792      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7634#793  | 0x1401f7634 | 793      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f763a#796  | 0x1401f763a | 796      | CALL          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f763a#2418 | 0x1401f763a | 2418     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f763a#2451 | 0x1401f763a | 2451     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f763a#2484 | 0x1401f763a | 2484     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f763f#801  | 0x1401f763f | 801      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7642#806  | 0x1401f7642 | 806      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7648#807  | 0x1401f7648 | 807      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f764c#811  | 0x1401f764c | 811      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f764c#2891 | 0x1401f764c | 2891     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7650#820  | 0x1401f7650 | 820      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7650#2793 | 0x1401f7650 | 2793     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7650#2892 | 0x1401f7650 | 2892     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7654#821  | 0x1401f7654 | 821      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f7654#2834 | 0x1401f7654 | 2834     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7659#830  | 0x1401f7659 | 830      | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7659#2416 | 0x1401f7659 | 2416     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7659#2449 | 0x1401f7659 | 2449     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7659#2482 | 0x1401f7659 | 2482     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7659#2890 | 0x1401f7659 | 2890     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f765e#2835 | 0x1401f765e | 2835     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7661#395  | 0x1401f7661 | 395      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7661#1784 | 0x1401f7661 | 1784     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7661#2432 | 0x1401f7661 | 2432     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7661#2465 | 0x1401f7661 | 2465     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7661#2498 | 0x1401f7661 | 2498     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7665#403  | 0x1401f7665 | 403      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7665#2893 | 0x1401f7665 | 2893     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7665#2894 | 0x1401f7665 | 2894     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f766c#408  | 0x1401f766c | 408      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f766f#2314 | 0x1401f766f | 2314     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7674#436  | 0x1401f7674 | 436      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f7674#2419 | 0x1401f7674 | 2419     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7674#2452 | 0x1401f7674 | 2452     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7674#2485 | 0x1401f7674 | 2485     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7681#445  | 0x1401f7681 | 445      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7681#2895 | 0x1401f7681 | 2895     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7681#2896 | 0x1401f7681 | 2896     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7687#455  | 0x1401f7687 | 455      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f7687#2420 | 0x1401f7687 | 2420     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7687#2453 | 0x1401f7687 | 2453     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7687#2486 | 0x1401f7687 | 2486     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7690#463  | 0x1401f7690 | 463      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7693#468  | 0x1401f7693 | 468      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7699#474  | 0x1401f7699 | 474      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7699#2897 | 0x1401f7699 | 2897     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7699#2898 | 0x1401f7699 | 2898     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f769c#484  | 0x1401f769c | 484      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f769f#2349 | 0x1401f769f | 2349     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76a3#495  | 0x1401f76a3 | 495      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76aa#504  | 0x1401f76aa | 504      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f76aa#2829 | 0x1401f76aa | 2829     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76ac#506  | 0x1401f76ac | 506      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76ac#2794 | 0x1401f76ac | 2794     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f76ac#2899 | 0x1401f76ac | 2899     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76b3#519  | 0x1401f76b3 | 519      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76b3#2795 | 0x1401f76b3 | 2795     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76b3#2900 | 0x1401f76b3 | 2900     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76b3#2901 | 0x1401f76b3 | 2901     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76b3#2902 | 0x1401f76b3 | 2902     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76bb#536  | 0x1401f76bb | 536      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76bb#538  | 0x1401f76bb | 538      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f76bb#2837 | 0x1401f76bb | 2837     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76c1#541  | 0x1401f76c1 | 541      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76c5#548  | 0x1401f76c5 | 548      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f76c5#2828 | 0x1401f76c5 | 2828     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76ca#1672 | 0x1401f76ca | 1672     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76ca#1769 | 0x1401f76ca | 1769     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76cd#552  | 0x1401f76cd | 552      | CALL          | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f76cd#2426 | 0x1401f76cd | 2426     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76cd#2459 | 0x1401f76cd | 2459     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76cd#2492 | 0x1401f76cd | 2492     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76d6#2796 | 0x1401f76d6 | 2796     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76d6#2797 | 0x1401f76d6 | 2797     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f76de#2798 | 0x1401f76de | 2798     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f76e6#570  | 0x1401f76e6 | 570      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76e6#2917 | 0x1401f76e6 | 2917     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76e6#2918 | 0x1401f76e6 | 2918     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76e9#580  | 0x1401f76e9 | 580      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76ec#1848 | 0x1401f76ec | 1848     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76f2#590  | 0x1401f76f2 | 590      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f76f2#2854 | 0x1401f76f2 | 2854     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76f2#2857 | 0x1401f76f2 | 2857     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76f7#852  | 0x1401f76f7 | 852      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76fe#2799 | 0x1401f76fe | 2799     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7707#878  | 0x1401f7707 | 878      | CALL          | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7707#2414 | 0x1401f7707 | 2414     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7707#2447 | 0x1401f7707 | 2447     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7707#2480 | 0x1401f7707 | 2480     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7714#887  | 0x1401f7714 | 887      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7714#2886 | 0x1401f7714 | 2886     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7714#2887 | 0x1401f7714 | 2887     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7717#897  | 0x1401f7717 | 897      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f771a#1850 | 0x1401f771a | 1850     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7720#907  | 0x1401f7720 | 907      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f7720#2858 | 0x1401f7720 | 2858     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7728#911  | 0x1401f7728 | 911      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7728#2881 | 0x1401f7728 | 2881     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7728#2882 | 0x1401f7728 | 2882     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f772b#921  | 0x1401f772b | 921      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f772e#1852 | 0x1401f772e | 1852     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7734#931  | 0x1401f7734 | 931      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f773c#2362 | 0x1401f773c | 2362     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f773c#2363 | 0x1401f773c | 2363     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f773c#2800 | 0x1401f773c | 2800     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7741#940  | 0x1401f7741 | 940      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7741#2801 | 0x1401f7741 | 2801     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7746#943  | 0x1401f7746 | 943      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7746#2802 | 0x1401f7746 | 2802     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f774f#945  | 0x1401f774f | 945      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f774f#2844 | 0x1401f774f | 2844     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f774f#2877 | 0x1401f774f | 2877     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7754#627  | 0x1401f7754 | 627      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7754#1791 | 0x1401f7754 | 1791     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7754#1800 | 0x1401f7754 | 1800     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7754#2435 | 0x1401f7754 | 2435     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7754#2468 | 0x1401f7754 | 2468     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7754#2501 | 0x1401f7754 | 2501     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7757#632  | 0x1401f7757 | 632      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7761#638  | 0x1401f7761 | 638      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7761#2907 | 0x1401f7761 | 2907     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7761#2908 | 0x1401f7761 | 2908     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7764#648  | 0x1401f7764 | 648      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7767#2351 | 0x1401f7767 | 2351     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f776b#659  | 0x1401f776b | 659      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f776b#2909 | 0x1401f776b | 2909     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7772#668  | 0x1401f7772 | 668      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7772#2830 | 0x1401f7772 | 2830     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7772#2845 | 0x1401f7772 | 2845     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7774#670  | 0x1401f7774 | 670      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7774#2803 | 0x1401f7774 | 2803     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7774#2910 | 0x1401f7774 | 2910     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f777b#683  | 0x1401f777b | 683      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f777b#2804 | 0x1401f777b | 2804     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f777b#2911 | 0x1401f777b | 2911     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f777b#2912 | 0x1401f777b | 2912     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f777b#2913 | 0x1401f777b | 2913     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7783#700  | 0x1401f7783 | 700      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7783#702  | 0x1401f7783 | 702      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7783#2824 | 0x1401f7783 | 2824     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7783#2849 | 0x1401f7783 | 2849     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f779d#2367 | 0x1401f779d | 2367     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f779d#2368 | 0x1401f779d | 2368     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f779d#2805 | 0x1401f779d | 2805     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f77a2#954  | 0x1401f77a2 | 954      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f77a2#2806 | 0x1401f77a2 | 2806     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f77a7#957  | 0x1401f77a7 | 957      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f77a7#2807 | 0x1401f77a7 | 2807     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f77af#968  | 0x1401f77af | 968      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77af#970  | 0x1401f77af | 970      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f77b1#973  | 0x1401f77b1 | 973      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f77b1#2808 | 0x1401f77b1 | 2808     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f77b6#976  | 0x1401f77b6 | 976      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f77b6#2809 | 0x1401f77b6 | 2809     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f77bf#2354 | 0x1401f77bf | 2354     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77cc#985  | 0x1401f77cc | 985      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f77cc#2413 | 0x1401f77cc | 2413     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77cc#2446 | 0x1401f77cc | 2446     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77cc#2479 | 0x1401f77cc | 2479     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77d1#987  | 0x1401f77d1 | 987      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77d1#989  | 0x1401f77d1 | 989      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f77d1#2875 | 0x1401f77d1 | 2875     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f77d1#2876 | 0x1401f77d1 | 2876     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f77d6#990  | 0x1401f77d6 | 990      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f77de#994  | 0x1401f77de | 994      | INT_OR        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77e7#1003 | 0x1401f77e7 | 1003     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77ea#1014 | 0x1401f77ea | 1014     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f77ea#1015 | 0x1401f77ea | 1015     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f77ee#1016 | 0x1401f77ee | 1016     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77ee#1017 | 0x1401f77ee | 1017     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77ee#1827 | 0x1401f77ee | 1827     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77f6#1023 | 0x1401f77f6 | 1023     | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77f9#1029 | 0x1401f77f9 | 1029     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7800#1033 | 0x1401f7800 | 1033     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7807#1042 | 0x1401f7807 | 1042     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7809#1043 | 0x1401f7809 | 1043     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7810#1055 | 0x1401f7810 | 1055     | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7810#1056 | 0x1401f7810 | 1056     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7819#1060 | 0x1401f7819 | 1060     | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7819#2412 | 0x1401f7819 | 2412     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7819#2445 | 0x1401f7819 | 2445     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7819#2478 | 0x1401f7819 | 2478     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f781e#1065 | 0x1401f781e | 1065     | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7821#1070 | 0x1401f7821 | 1070     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7823#1071 | 0x1401f7823 | 1071     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7827#1075 | 0x1401f7827 | 1075     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7827#2873 | 0x1401f7827 | 2873     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f782b#1084 | 0x1401f782b | 1084     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f782b#2810 | 0x1401f782b | 2810     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f782b#2874 | 0x1401f782b | 2874     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f782f#1085 | 0x1401f782f | 1085     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f782f#2842 | 0x1401f782f | 2842     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7831#1785 | 0x1401f7831 | 1785     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7831#1812 | 0x1401f7831 | 1812     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7831#1830 | 0x1401f7831 | 1830     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7831#2431 | 0x1401f7831 | 2431     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7831#2464 | 0x1401f7831 | 2464     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7831#2497 | 0x1401f7831 | 2497     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7836#592  | 0x1401f7836 | 592      | CALLOTHER     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7836#593  | 0x1401f7836 | 593      | CALLIND       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7836#2421 | 0x1401f7836 | 2421     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7836#2454 | 0x1401f7836 | 2454     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7836#2487 | 0x1401f7836 | 2487     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7836#2811 | 0x1401f7836 | 2811     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7836#2838 | 0x1401f7836 | 2838     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7836#2903 | 0x1401f7836 | 2903     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7838#594  | 0x1401f7838 | 594      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7838#595  | 0x1401f7838 | 595      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7838#596  | 0x1401f7838 | 596      | CALL          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7838#1789 | 0x1401f7838 | 1789     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#1804 | 0x1401f7838 | 1804     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#1814 | 0x1401f7838 | 1814     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#1828 | 0x1401f7838 | 1828     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2422 | 0x1401f7838 | 2422     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2439 | 0x1401f7838 | 2439     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2455 | 0x1401f7838 | 2455     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2472 | 0x1401f7838 | 2472     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2488 | 0x1401f7838 | 2488     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2505 | 0x1401f7838 | 2505     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2904 | 0x1401f7838 | 2904     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7838#2905 | 0x1401f7838 | 2905     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f783d#2841 | 0x1401f783d | 2841     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7840#599  | 0x1401f7840 | 599      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7840#1790 | 0x1401f7840 | 1790     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#1799 | 0x1401f7840 | 1799     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#1815 | 0x1401f7840 | 1815     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#1831 | 0x1401f7840 | 1831     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#1925 | 0x1401f7840 | 1925     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#2434 | 0x1401f7840 | 2434     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#2467 | 0x1401f7840 | 2467     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#2500 | 0x1401f7840 | 2500     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7844#602  | 0x1401f7844 | 602      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7844#2812 | 0x1401f7844 | 2812     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7849#605  | 0x1401f7849 | 605      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7849#2813 | 0x1401f7849 | 2813     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f784e#2352 | 0x1401f784e | 2352     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f785b#612  | 0x1401f785b | 612      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f785b#613  | 0x1401f785b | 613      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f785b#614  | 0x1401f785b | 614      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f785b#2423 | 0x1401f785b | 2423     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f785b#2456 | 0x1401f785b | 2456     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f785b#2489 | 0x1401f785b | 2489     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f785b#2906 | 0x1401f785b | 2906     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7860#618  | 0x1401f7860 | 618      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7860#2814 | 0x1401f7860 | 2814     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7869#622  | 0x1401f7869 | 622      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f7869#2840 | 0x1401f7869 | 2840     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7869#2843 | 0x1401f7869 | 2843     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7871#2372 | 0x1401f7871 | 2372     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7871#2373 | 0x1401f7871 | 2373     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7871#2815 | 0x1401f7871 | 2815     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7876#1094 | 0x1401f7876 | 1094     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7876#2816 | 0x1401f7876 | 2816     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f787b#1097 | 0x1401f787b | 1097     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f787b#2817 | 0x1401f787b | 2817     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7884#1099 | 0x1401f7884 | 1099     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7884#2863 | 0x1401f7884 | 2863     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f788d#1107 | 0x1401f788d | 1107     | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7890#1112 | 0x1401f7890 | 1112     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7896#1118 | 0x1401f7896 | 1118     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7896#2864 | 0x1401f7896 | 2864     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7896#2865 | 0x1401f7896 | 2865     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7899#1128 | 0x1401f7899 | 1128     | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f789c#2353 | 0x1401f789c | 2353     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78a0#1139 | 0x1401f78a0 | 1139     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78a0#2866 | 0x1401f78a0 | 2866     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78a7#1148 | 0x1401f78a7 | 1148     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78a7#2833 | 0x1401f78a7 | 2833     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78a7#2848 | 0x1401f78a7 | 2848     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78a9#1150 | 0x1401f78a9 | 1150     | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78a9#2818 | 0x1401f78a9 | 2818     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f78a9#2867 | 0x1401f78a9 | 2867     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78b0#1163 | 0x1401f78b0 | 1163     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78b0#2819 | 0x1401f78b0 | 2819     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78b0#2868 | 0x1401f78b0 | 2868     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78b0#2869 | 0x1401f78b0 | 2869     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78b0#2870 | 0x1401f78b0 | 2870     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78b8#1180 | 0x1401f78b8 | 1180     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78b8#1182 | 0x1401f78b8 | 1182     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78b8#2831 | 0x1401f78b8 | 2831     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78b8#2846 | 0x1401f78b8 | 2846     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78c0#761  | 0x1401f78c0 | 761      | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c0#1803 | 0x1401f78c0 | 1803     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c0#2438 | 0x1401f78c0 | 2438     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c0#2471 | 0x1401f78c0 | 2471     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c0#2504 | 0x1401f78c0 | 2504     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c0#2914 | 0x1401f78c0 | 2914     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78c5#762  | 0x1401f78c5 | 762      | CALLOTHER     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c5#763  | 0x1401f78c5 | 763      | CALLIND       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78c5#1210 | 0x1401f78c5 | 1210     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f78c5#1710 | 0x1401f78c5 | 1710     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c5#2424 | 0x1401f78c5 | 2424     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c5#2457 | 0x1401f78c5 | 2457     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c5#2490 | 0x1401f78c5 | 2490     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c5#2832 | 0x1401f78c5 | 2832     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78c5#2847 | 0x1401f78c5 | 2847     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78c5#2915 | 0x1401f78c5 | 2915     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78cd#713  | 0x1401f78cd | 713      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f78cd#714  | 0x1401f78cd | 714      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f78cd#715  | 0x1401f78cd | 715      | CALL          | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78cd#1721 | 0x1401f78cd | 1721     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f78cd#1802 | 0x1401f78cd | 1802     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f78cd#2425 | 0x1401f78cd | 2425     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78cd#2437 | 0x1401f78cd | 2437     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f78cd#2458 | 0x1401f78cd | 2458     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78cd#2470 | 0x1401f78cd | 2470     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f78cd#2491 | 0x1401f78cd | 2491     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78cd#2503 | 0x1401f78cd | 2503     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f78cd#2916 | 0x1401f78cd | 2916     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78d2#716  | 0x1401f78d2 | 716      | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78d2#2825 | 0x1401f78d2 | 2825     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78e5#760  | 0x1401f78e5 | 760      | RETURN        | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78e5#2826 | 0x1401f78e5 | 2826     | RETURN        | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78e6#824  | 0x1401f78e6 | 824      | CALL          | true    | member           | [object Object]                                                                 |                 |
| 0x1401f78e6#826  | 0x1401f78e6 | 826      | RETURN        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f78e6#2417 | 0x1401f78e6 | 2417     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78e6#2450 | 0x1401f78e6 | 2450     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78e6#2483 | 0x1401f78e6 | 2483     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78ec#847  | 0x1401f78ec | 847      | CALL          | true    | member           | [object Object]                                                                 |                 |
| 0x1401f78ec#849  | 0x1401f78ec | 849      | RETURN        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f78ec#2415 | 0x1401f78ec | 2415     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78ec#2448 | 0x1401f78ec | 2448     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78ec#2481 | 0x1401f78ec | 2481     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401f750d#2357 | 0x1401f751b#2409 | 0           |
| 0x1401f750d#2358 | 0x1401f751b#2442 | 0           |
| 0x1401f7512#54   | 0x1401f751b#2475 | 0           |
| 0x1401f751b#58   | 0x1401f751b#2860 | 0           |
| 0x1401f751b#2860 | 0x1401f7524#2790 | 0           |
| 0x1401f751b#2860 | 0x1401f753a#81   | 1           |
| 0x1401f751b#2860 | 0x1401f753a#2410 | 0           |
| 0x1401f751b#2442 | 0x1401f753a#2443 | 0           |
| 0x1401f753a#2859 | 0x1401f753a#2476 | 0           |
| 0x1401f7524#2790 | 0x1401f753a#2859 | 0           |
| 0x1401f7547#2861 | 0x1401f7547#90   | 0           |
| 0x1401f7547#2862 | 0x1401f7547#90   | 1           |
| 0x1401f7524#2790 | 0x1401f7547#2861 | 0           |
| 0x1401f753a#2410 | 0x1401f7547#2862 | 0           |
| 0x1401f7547#90   | 0x1401f754a#100  | 0           |
| 0x1401f754a#100  | 0x1401f754d#1844 | 0           |
| 0x1401f753a#2410 | 0x1401f754d#2852 | 0           |
| 0x1401f7524#2790 | 0x1401f754d#2855 | 0           |
| 0x1401f754d#1844 | 0x1401f7550#1874 | 0           |
| 0x1401f75bb#1846 | 0x1401f7550#1874 | 1           |
| 0x1401f76ec#1848 | 0x1401f7550#1874 | 2           |
| 0x1401f771a#1850 | 0x1401f7550#1874 | 3           |
| 0x1401f772e#1852 | 0x1401f7550#1874 | 4           |
| 0x1401f754d#2852 | 0x1401f7550#2433 | 0           |
| 0x1401f75c1#2853 | 0x1401f7550#2433 | 1           |
| 0x1401f76f2#2854 | 0x1401f7550#2433 | 2           |
| 0x1401f7707#2414 | 0x1401f7550#2433 | 3           |
| 0x1401f7552#2411 | 0x1401f7550#2433 | 4           |
| 0x1401f754d#2855 | 0x1401f7550#2466 | 0           |
| 0x1401f75c1#2856 | 0x1401f7550#2466 | 1           |
| 0x1401f76f2#2857 | 0x1401f7550#2466 | 2           |
| 0x1401f7720#2858 | 0x1401f7550#2466 | 3           |
| 0x1401f7552#2444 | 0x1401f7550#2466 | 4           |
| 0x1401f753a#2476 | 0x1401f7550#2499 | 0           |
| 0x1401f7552#2477 | 0x1401f7550#2499 | 1           |
| 0x1401f76de#2798 | 0x1401f7550#2499 | 2           |
| 0x1401f7707#2480 | 0x1401f7550#2499 | 3           |
| 0x1401f7552#2477 | 0x1401f7550#2499 | 4           |
| 0x1401f7550#2433 | 0x1401f7552#122  | 2           |
| 0x1401f7552#2375 | 0x1401f7552#122  | 3           |
| 0x1401f7550#1874 | 0x1401f7552#2375 | 0           |
| 0x1401f7550#2433 | 0x1401f7552#2411 | 0           |
| 0x1401f7550#2466 | 0x1401f7552#2444 | 0           |
| 0x1401f7550#2499 | 0x1401f7552#2477 | 0           |
| 0x1401f7552#2411 | 0x1401f7552#2827 | 0           |
| 0x1401f7552#122  | 0x1401f7558#127  | 0           |
| 0x1401f7558#127  | 0x1401f755c#134  | 1           |
| 0x1401f7577#2871 | 0x1401f7577#145  | 0           |
| 0x1401f7577#2872 | 0x1401f7577#145  | 1           |
| 0x1401f7552#2444 | 0x1401f7577#2871 | 0           |
| 0x1401f7552#2411 | 0x1401f7577#2872 | 0           |
| 0x1401f7577#145  | 0x1401f757a#155  | 0           |
| 0x1401f7552#122  | 0x1401f757d#1809 | 0           |
| 0x1401f757a#155  | 0x1401f757f#164  | 0           |
| 0x1401f757d#1809 | 0x1401f7583#167  | 0           |
| 0x1401f757f#164  | 0x1401f7583#167  | 1           |
| 0x1401f7583#167  | 0x1401f7586#176  | 1           |
| 0x1401f757a#155  | 0x1401f758c#178  | 1           |
| 0x1401f758c#178  | 0x1401f7593#188  | 1           |
| 0x1401f757a#155  | 0x1401f7599#2296 | 0           |
| 0x1401f759f#2878 | 0x1401f759f#201  | 0           |
| 0x1401f759f#2879 | 0x1401f759f#201  | 1           |
| 0x1401f7552#2444 | 0x1401f759f#2878 | 0           |
| 0x1401f7552#2411 | 0x1401f759f#2879 | 0           |
| 0x1401f75a5#2880 | 0x1401f75a5#212  | 0           |
| 0x1401f759f#201  | 0x1401f75a5#2880 | 0           |
| 0x1401f7599#2296 | 0x1401f75a8#220  | 0           |
| 0x1401f75a5#212  | 0x1401f75a8#220  | 1           |
| 0x1401f75a8#220  | 0x1401f75ab#230  | 1           |
| 0x1401f757a#155  | 0x1401f75ad#2791 | 0           |
| 0x1401f7552#2411 | 0x1401f75ad#2792 | 0           |
| 0x1401f75ad#2791 | 0x1401f75ad#2792 | 1           |
| 0x1401f75b5#2919 | 0x1401f75b5#239  | 0           |
| 0x1401f75b5#2920 | 0x1401f75b5#239  | 1           |
| 0x1401f75ad#2792 | 0x1401f75b5#2919 | 0           |
| 0x1401f7552#2411 | 0x1401f75b5#2920 | 0           |
| 0x1401f75b5#239  | 0x1401f75b8#249  | 0           |
| 0x1401f75b8#249  | 0x1401f75bb#1846 | 0           |
| 0x1401f7552#2411 | 0x1401f75c1#2853 | 0           |
| 0x1401f75ad#2792 | 0x1401f75c1#2856 | 0           |
| 0x1401f75a5#212  | 0x1401f75c3#260  | 0           |
| 0x1401f7599#2296 | 0x1401f75c3#260  | 1           |
| 0x1401f75c3#260  | 0x1401f75c3#261  | 1           |
| 0x1401f75d0#2883 | 0x1401f75d0#268  | 0           |
| 0x1401f75d0#2884 | 0x1401f75d0#268  | 1           |
| 0x1401f7552#2477 | 0x1401f75d0#2883 | 0           |
| 0x1401f7552#2411 | 0x1401f75d0#2884 | 0           |
| 0x1401f75d0#268  | 0x1401f75d3#278  | 0           |
| 0x1401f75d9#2885 | 0x1401f75d9#295  | 0           |
| 0x1401f7599#2296 | 0x1401f75d9#295  | 1           |
| 0x1401f75d9#295  | 0x1401f75d9#296  | 1           |
| 0x1401f75d3#278  | 0x1401f75d9#2885 | 0           |
| 0x1401f7599#2296 | 0x1401f75e2#307  | 1           |
| 0x1401f75e2#307  | 0x1401f75e2#309  | 1           |
| 0x1401f75e8#2888 | 0x1401f75e8#312  | 0           |
| 0x1401f75e8#2889 | 0x1401f75e8#312  | 1           |
| 0x1401f7552#2477 | 0x1401f75e8#2888 | 0           |
| 0x1401f7552#2411 | 0x1401f75e8#2889 | 0           |
| 0x1401f75e8#312  | 0x1401f75eb#322  | 0           |
| 0x1401f75eb#322  | 0x1401f75f1#333  | 0           |
| 0x1401f75f1#333  | 0x1401f75f7#343  | 1           |
| 0x1401f75f7#343  | 0x1401f75fd#360  | 0           |
| 0x1401f75eb#322  | 0x1401f75fd#360  | 1           |
| 0x1401f75fd#360  | 0x1401f75fd#362  | 1           |
| 0x1401f75f1#333  | 0x1401f7603#364  | 0           |
| 0x1401f75eb#322  | 0x1401f7603#364  | 1           |
| 0x1401f7599#2296 | 0x1401f7607#367  | 0           |
| 0x1401f7603#364  | 0x1401f7607#367  | 1           |
| 0x1401f7607#367  | 0x1401f760a#377  | 1           |
| 0x1401f7599#2296 | 0x1401f760a#2851 | 0           |
| 0x1401f7603#364  | 0x1401f7614#843  | 1           |
| 0x1401f7614#843  | 0x1401f7614#844  | 1           |
| 0x1401f7603#364  | 0x1401f7614#2850 | 0           |
| 0x1401f761a#2309 | 0x1401f761a#384  | 0           |
| 0x1401f7614#2850 | 0x1401f761a#1813 | 0           |
| 0x1401f760a#2851 | 0x1401f761a#1813 | 1           |
| 0x1401f761a#1813 | 0x1401f761a#2309 | 0           |
| 0x1401f761a#384  | 0x1401f761d#390  | 1           |
| 0x1401f7507#1924 | 0x1401f761d#2836 | 0           |
| 0x1401f761a#2309 | 0x1401f7624#770  | 0           |
| 0x1401f7624#770  | 0x1401f762b#779  | 1           |
| 0x1401f761a#2309 | 0x1401f762d#780  | 0           |
| 0x1401f762d#780  | 0x1401f7634#792  | 0           |
| 0x1401f761a#2309 | 0x1401f7634#792  | 1           |
| 0x1401f7634#792  | 0x1401f7634#793  | 1           |
| 0x1401f7552#2411 | 0x1401f763a#2418 | 0           |
| 0x1401f7552#2444 | 0x1401f763a#2451 | 0           |
| 0x1401f7552#2477 | 0x1401f763a#2484 | 0           |
| 0x1401f763a#796  | 0x1401f763f#801  | 0           |
| 0x1401f763f#801  | 0x1401f7642#806  | 1           |
| 0x1401f763a#796  | 0x1401f7648#807  | 0           |
| 0x1401f7648#807  | 0x1401f764c#811  | 0           |
| 0x1401f764c#811  | 0x1401f764c#2891 | 0           |
| 0x1401f7650#2892 | 0x1401f7650#820  | 1           |
| 0x1401f763a#796  | 0x1401f7650#820  | 2           |
| 0x1401f764c#2891 | 0x1401f7650#2793 | 0           |
| 0x1401f7650#2793 | 0x1401f7650#2892 | 0           |
| 0x1401f764c#2891 | 0x1401f7654#2834 | 0           |
| 0x1401f761a#2309 | 0x1401f7659#830  | 1           |
| 0x1401f7552#2411 | 0x1401f7659#2416 | 0           |
| 0x1401f7552#2444 | 0x1401f7659#2449 | 0           |
| 0x1401f7552#2477 | 0x1401f7659#2482 | 0           |
| 0x1401f7659#830  | 0x1401f7659#2890 | 0           |
| 0x1401f7659#2890 | 0x1401f765e#2835 | 0           |
| 0x1401f759f#201  | 0x1401f7661#395  | 0           |
| 0x1401f7654#2834 | 0x1401f7661#1784 | 0           |
| 0x1401f765e#2835 | 0x1401f7661#1784 | 1           |
| 0x1401f761d#2836 | 0x1401f7661#1784 | 2           |
| 0x1401f763a#2418 | 0x1401f7661#2432 | 0           |
| 0x1401f7659#2416 | 0x1401f7661#2432 | 1           |
| 0x1401f7552#2411 | 0x1401f7661#2432 | 2           |
| 0x1401f763a#2451 | 0x1401f7661#2465 | 0           |
| 0x1401f7659#2449 | 0x1401f7661#2465 | 1           |
| 0x1401f7552#2444 | 0x1401f7661#2465 | 2           |
| 0x1401f763a#2484 | 0x1401f7661#2498 | 0           |
| 0x1401f7659#2482 | 0x1401f7661#2498 | 1           |
| 0x1401f7552#2477 | 0x1401f7661#2498 | 2           |
| 0x1401f7665#2893 | 0x1401f7665#403  | 0           |
| 0x1401f7661#395  | 0x1401f7665#403  | 1           |
| 0x1401f7661#1784 | 0x1401f7665#2893 | 0           |
| 0x1401f7665#403  | 0x1401f7665#2894 | 0           |
| 0x1401f7599#2296 | 0x1401f766c#408  | 0           |
| 0x1401f75a5#212  | 0x1401f766c#408  | 1           |
| 0x1401f766c#408  | 0x1401f766f#2314 | 0           |
| 0x1401f7665#2894 | 0x1401f7674#436  | 1           |
| 0x1401f766f#2314 | 0x1401f7674#436  | 3           |
| 0x1401f7661#2432 | 0x1401f7674#2419 | 0           |
| 0x1401f7661#2465 | 0x1401f7674#2452 | 0           |
| 0x1401f7661#2498 | 0x1401f7674#2485 | 0           |
| 0x1401f7681#2895 | 0x1401f7681#445  | 0           |
| 0x1401f7681#2896 | 0x1401f7681#445  | 1           |
| 0x1401f7674#2452 | 0x1401f7681#2895 | 0           |
| 0x1401f7674#2419 | 0x1401f7681#2896 | 0           |
| 0x1401f7661#1784 | 0x1401f7687#455  | 1           |
| 0x1401f7674#2419 | 0x1401f7687#455  | 2           |
| 0x1401f7681#445  | 0x1401f7687#455  | 3           |
| 0x1401f7674#2419 | 0x1401f7687#2420 | 0           |
| 0x1401f7674#2452 | 0x1401f7687#2453 | 0           |
| 0x1401f7674#2485 | 0x1401f7687#2486 | 0           |
| 0x1401f7687#2420 | 0x1401f7690#463  | 0           |
| 0x1401f7690#463  | 0x1401f7693#468  | 1           |
| 0x1401f7699#2897 | 0x1401f7699#474  | 0           |
| 0x1401f7699#2898 | 0x1401f7699#474  | 1           |
| 0x1401f7687#2486 | 0x1401f7699#2897 | 0           |
| 0x1401f7687#2420 | 0x1401f7699#2898 | 0           |
| 0x1401f7699#474  | 0x1401f769c#484  | 0           |
| 0x1401f769c#484  | 0x1401f769f#2349 | 0           |
| 0x1401f769f#2349 | 0x1401f76a3#495  | 1           |
| 0x1401f76a3#495  | 0x1401f76aa#504  | 1           |
| 0x1401f7687#2420 | 0x1401f76aa#2829 | 0           |
| 0x1401f76ac#2899 | 0x1401f76ac#506  | 1           |
| 0x1401f7687#2420 | 0x1401f76ac#2794 | 0           |
| 0x1401f76ac#2794 | 0x1401f76ac#2899 | 0           |
| 0x1401f76b3#2901 | 0x1401f76b3#519  | 0           |
| 0x1401f76b3#2795 | 0x1401f76b3#519  | 1           |
| 0x1401f76b3#2900 | 0x1401f76b3#2795 | 1           |
| 0x1401f76ac#506  | 0x1401f76b3#2900 | 0           |
| 0x1401f7687#2420 | 0x1401f76b3#2901 | 0           |
| 0x1401f76b3#519  | 0x1401f76b3#2902 | 0           |
| 0x1401f76b3#2902 | 0x1401f76bb#536  | 1           |
| 0x1401f76bb#536  | 0x1401f76bb#538  | 1           |
| 0x1401f7661#1784 | 0x1401f76bb#2837 | 0           |
| 0x1401f769f#2349 | 0x1401f76c1#541  | 0           |
| 0x1401f76ac#506  | 0x1401f76c5#2828 | 0           |
| 0x1401f76c5#2828 | 0x1401f76ca#1672 | 0           |
| 0x1401f76aa#2829 | 0x1401f76ca#1672 | 1           |
| 0x1401f76c1#541  | 0x1401f76ca#1769 | 0           |
| 0x1401f769f#2349 | 0x1401f76ca#1769 | 1           |
| 0x1401f76ca#1672 | 0x1401f76cd#552  | 1           |
| 0x1401f76ca#1769 | 0x1401f76cd#552  | 2           |
| 0x1401f7687#2420 | 0x1401f76cd#2426 | 0           |
| 0x1401f7687#2453 | 0x1401f76cd#2459 | 0           |
| 0x1401f7687#2486 | 0x1401f76cd#2492 | 0           |
| 0x1401f757a#155  | 0x1401f76d6#2796 | 0           |
| 0x1401f7661#1784 | 0x1401f76d6#2797 | 0           |
| 0x1401f76d6#2796 | 0x1401f76d6#2797 | 1           |
| 0x1401f7661#1784 | 0x1401f76de#2798 | 0           |
| 0x1401f761a#1813 | 0x1401f76de#2798 | 1           |
| 0x1401f76e6#2917 | 0x1401f76e6#570  | 0           |
| 0x1401f76e6#2918 | 0x1401f76e6#570  | 1           |
| 0x1401f76d6#2797 | 0x1401f76e6#2917 | 0           |
| 0x1401f7661#1784 | 0x1401f76e6#2918 | 0           |
| 0x1401f76e6#570  | 0x1401f76e9#580  | 0           |
| 0x1401f76e9#580  | 0x1401f76ec#1848 | 0           |
| 0x1401f7661#1784 | 0x1401f76f2#2854 | 0           |
| 0x1401f76d6#2797 | 0x1401f76f2#2857 | 0           |
| 0x1401f7599#2296 | 0x1401f76f7#852  | 0           |
| 0x1401f75a5#212  | 0x1401f76f7#852  | 1           |
| 0x1401f7552#2444 | 0x1401f76fe#2799 | 0           |
| 0x1401f76f7#852  | 0x1401f76fe#2799 | 1           |
| 0x1401f7552#2444 | 0x1401f7707#878  | 1           |
| 0x1401f7552#2411 | 0x1401f7707#2414 | 0           |
| 0x1401f7552#2444 | 0x1401f7707#2447 | 0           |
| 0x1401f7552#2477 | 0x1401f7707#2480 | 0           |
| 0x1401f7714#2886 | 0x1401f7714#887  | 0           |
| 0x1401f7714#2887 | 0x1401f7714#887  | 1           |
| 0x1401f76fe#2799 | 0x1401f7714#2886 | 0           |
| 0x1401f7707#2414 | 0x1401f7714#2887 | 0           |
| 0x1401f7714#887  | 0x1401f7717#897  | 0           |
| 0x1401f7717#897  | 0x1401f771a#1850 | 0           |
| 0x1401f76fe#2799 | 0x1401f7720#2858 | 0           |
| 0x1401f7728#2881 | 0x1401f7728#911  | 0           |
| 0x1401f7728#2882 | 0x1401f7728#911  | 1           |
| 0x1401f7552#2444 | 0x1401f7728#2881 | 0           |
| 0x1401f7552#2411 | 0x1401f7728#2882 | 0           |
| 0x1401f7728#911  | 0x1401f772b#921  | 0           |
| 0x1401f772b#921  | 0x1401f772e#1852 | 0           |
| 0x1401f773c#2800 | 0x1401f773c#2363 | 1           |
| 0x1401f7741#2801 | 0x1401f7741#940  | 1           |
| 0x1401f7746#2802 | 0x1401f7746#943  | 1           |
| 0x1401f774f#2877 | 0x1401f774f#945  | 1           |
| 0x1401f7500#2782 | 0x1401f774f#2844 | 0           |
| 0x1401f7754#1791 | 0x1401f7754#627  | 0           |
| 0x1401f7869#2840 | 0x1401f7754#1791 | 0           |
| 0x1401f7552#2827 | 0x1401f7754#1791 | 1           |
| 0x1401f7552#2827 | 0x1401f7754#1791 | 2           |
| 0x1401f7869#2843 | 0x1401f7754#1800 | 0           |
| 0x1401f774f#2844 | 0x1401f7754#1800 | 1           |
| 0x1401f7500#2788 | 0x1401f7754#1800 | 2           |
| 0x1401f785b#2423 | 0x1401f7754#2435 | 0           |
| 0x1401f7552#2411 | 0x1401f7754#2435 | 1           |
| 0x1401f77cc#2413 | 0x1401f7754#2435 | 2           |
| 0x1401f785b#2456 | 0x1401f7754#2468 | 0           |
| 0x1401f7552#2444 | 0x1401f7754#2468 | 1           |
| 0x1401f77cc#2446 | 0x1401f7754#2468 | 2           |
| 0x1401f785b#2489 | 0x1401f7754#2501 | 0           |
| 0x1401f7552#2477 | 0x1401f7754#2501 | 1           |
| 0x1401f77cc#2479 | 0x1401f7754#2501 | 2           |
| 0x1401f7754#627  | 0x1401f7757#632  | 1           |
| 0x1401f7761#2907 | 0x1401f7761#638  | 0           |
| 0x1401f7761#2908 | 0x1401f7761#638  | 1           |
| 0x1401f7754#2501 | 0x1401f7761#2907 | 0           |
| 0x1401f7754#1791 | 0x1401f7761#2908 | 0           |
| 0x1401f7761#638  | 0x1401f7764#648  | 0           |
| 0x1401f7764#648  | 0x1401f7767#2351 | 0           |
| 0x1401f776b#2909 | 0x1401f776b#659  | 0           |
| 0x1401f7767#2351 | 0x1401f776b#2909 | 0           |
| 0x1401f776b#659  | 0x1401f7772#668  | 1           |
| 0x1401f7754#1791 | 0x1401f7772#2830 | 0           |
| 0x1401f7754#1800 | 0x1401f7772#2845 | 0           |
| 0x1401f7774#2910 | 0x1401f7774#670  | 1           |
| 0x1401f7754#1791 | 0x1401f7774#2803 | 0           |
| 0x1401f7774#2803 | 0x1401f7774#2910 | 0           |
| 0x1401f777b#2912 | 0x1401f777b#683  | 0           |
| 0x1401f777b#2804 | 0x1401f777b#683  | 1           |
| 0x1401f777b#2911 | 0x1401f777b#2804 | 1           |
| 0x1401f7774#670  | 0x1401f777b#2911 | 0           |
| 0x1401f7754#1791 | 0x1401f777b#2912 | 0           |
| 0x1401f777b#683  | 0x1401f777b#2913 | 0           |
| 0x1401f777b#2913 | 0x1401f7783#700  | 0           |
| 0x1401f7783#2824 | 0x1401f7783#700  | 1           |
| 0x1401f7783#700  | 0x1401f7783#702  | 1           |
| 0x1401f7754#1800 | 0x1401f7783#2849 | 0           |
| 0x1401f779d#2805 | 0x1401f779d#2368 | 1           |
| 0x1401f77a2#2806 | 0x1401f77a2#954  | 1           |
| 0x1401f77a7#2807 | 0x1401f77a7#957  | 1           |
| 0x1401f7552#122  | 0x1401f77af#968  | 0           |
| 0x1401f77af#968  | 0x1401f77af#970  | 1           |
| 0x1401f77b1#2808 | 0x1401f77b1#973  | 1           |
| 0x1401f757d#1809 | 0x1401f77b1#973  | 2           |
| 0x1401f77b6#2809 | 0x1401f77b6#976  | 1           |
| 0x1401f757d#1809 | 0x1401f77bf#2354 | 0           |
| 0x1401f7552#2411 | 0x1401f77cc#985  | 2           |
| 0x1401f77bf#2354 | 0x1401f77cc#985  | 3           |
| 0x1401f7552#2411 | 0x1401f77cc#2413 | 0           |
| 0x1401f7552#2444 | 0x1401f77cc#2446 | 0           |
| 0x1401f7552#2477 | 0x1401f77cc#2479 | 0           |
| 0x1401f77bf#2354 | 0x1401f77d1#987  | 0           |
| 0x1401f77d1#2875 | 0x1401f77d1#987  | 1           |
| 0x1401f77d1#2876 | 0x1401f77d1#989  | 1           |
| 0x1401f77d1#987  | 0x1401f77d1#2876 | 0           |
| 0x1401f757d#1809 | 0x1401f77de#994  | 0           |
| 0x1401f77de#994  | 0x1401f77e7#1003 | 0           |
| 0x1401f77e7#1003 | 0x1401f77ea#1014 | 1           |
| 0x1401f77ee#1827 | 0x1401f77ee#1016 | 0           |
| 0x1401f77ee#1016 | 0x1401f77ee#1017 | 0           |
| 0x1401f77de#994  | 0x1401f77ee#1827 | 0           |
| 0x1401f77ea#1015 | 0x1401f77ee#1827 | 1           |
| 0x1401f77ee#1827 | 0x1401f77f6#1023 | 0           |
| 0x1401f77f6#1023 | 0x1401f77f9#1029 | 1           |
| 0x1401f77ee#1017 | 0x1401f7800#1033 | 0           |
| 0x1401f7800#1033 | 0x1401f7807#1042 | 1           |
| 0x1401f77ee#1016 | 0x1401f7809#1043 | 0           |
| 0x1401f7809#1043 | 0x1401f7810#1055 | 0           |
| 0x1401f77ee#1017 | 0x1401f7810#1055 | 1           |
| 0x1401f7810#1055 | 0x1401f7810#1056 | 1           |
| 0x1401f7809#1043 | 0x1401f7819#1060 | 1           |
| 0x1401f7552#2411 | 0x1401f7819#2412 | 0           |
| 0x1401f7552#2444 | 0x1401f7819#2445 | 0           |
| 0x1401f7552#2477 | 0x1401f7819#2478 | 0           |
| 0x1401f7819#1060 | 0x1401f781e#1065 | 0           |
| 0x1401f781e#1065 | 0x1401f7821#1070 | 1           |
| 0x1401f7819#1060 | 0x1401f7823#1071 | 0           |
| 0x1401f7823#1071 | 0x1401f7827#1075 | 0           |
| 0x1401f7827#1075 | 0x1401f7827#2873 | 0           |
| 0x1401f782b#2874 | 0x1401f782b#1084 | 1           |
| 0x1401f7819#1060 | 0x1401f782b#1084 | 2           |
| 0x1401f7827#2873 | 0x1401f782b#2810 | 0           |
| 0x1401f782b#2810 | 0x1401f782b#2874 | 0           |
| 0x1401f7500#2789 | 0x1401f782f#2842 | 0           |
| 0x1401f76bb#2837 | 0x1401f7831#1785 | 0           |
| 0x1401f7552#2827 | 0x1401f7831#1785 | 1           |
| 0x1401f7552#2827 | 0x1401f7831#1785 | 2           |
| 0x1401f761a#2309 | 0x1401f7831#1812 | 0           |
| 0x1401f761a#2309 | 0x1401f7831#1812 | 1           |
| 0x1401f757d#1809 | 0x1401f7831#1812 | 2           |
| 0x1401f7599#2296 | 0x1401f7831#1830 | 0           |
| 0x1401f7599#2296 | 0x1401f7831#1830 | 1           |
| 0x1401f77ee#1827 | 0x1401f7831#1830 | 2           |
| 0x1401f7687#2420 | 0x1401f7831#2431 | 0           |
| 0x1401f763a#2418 | 0x1401f7831#2431 | 1           |
| 0x1401f7819#2412 | 0x1401f7831#2431 | 2           |
| 0x1401f7687#2453 | 0x1401f7831#2464 | 0           |
| 0x1401f763a#2451 | 0x1401f7831#2464 | 1           |
| 0x1401f7819#2445 | 0x1401f7831#2464 | 2           |
| 0x1401f7687#2486 | 0x1401f7831#2497 | 0           |
| 0x1401f763a#2484 | 0x1401f7831#2497 | 1           |
| 0x1401f7819#2478 | 0x1401f7831#2497 | 2           |
| 0x1401f7836#2903 | 0x1401f7836#593  | 0           |
| 0x1401f7831#2431 | 0x1401f7836#2421 | 0           |
| 0x1401f7831#2464 | 0x1401f7836#2454 | 0           |
| 0x1401f7831#2497 | 0x1401f7836#2487 | 0           |
| 0x1401f7831#1785 | 0x1401f7836#2838 | 0           |
| 0x1401f7836#592  | 0x1401f7836#2903 | 0           |
| 0x1401f7838#1804 | 0x1401f7838#594  | 0           |
| 0x1401f7838#2904 | 0x1401f7838#595  | 1           |
| 0x1401f7836#2838 | 0x1401f7838#1789 | 0           |
| 0x1401f7552#2827 | 0x1401f7838#1789 | 1           |
| 0x1401f7836#2811 | 0x1401f7838#1804 | 0           |
| 0x1401f7500#2783 | 0x1401f7838#1804 | 1           |
| 0x1401f7831#1812 | 0x1401f7838#1814 | 0           |
| 0x1401f757d#1809 | 0x1401f7838#1814 | 1           |
| 0x1401f7831#1830 | 0x1401f7838#1828 | 0           |
| 0x1401f77ee#1827 | 0x1401f7838#1828 | 1           |
| 0x1401f7838#2439 | 0x1401f7838#2422 | 0           |
| 0x1401f7836#2421 | 0x1401f7838#2439 | 0           |
| 0x1401f7552#2411 | 0x1401f7838#2439 | 1           |
| 0x1401f7838#2472 | 0x1401f7838#2455 | 0           |
| 0x1401f7836#2454 | 0x1401f7838#2472 | 0           |
| 0x1401f7552#2444 | 0x1401f7838#2472 | 1           |
| 0x1401f7838#2505 | 0x1401f7838#2488 | 0           |
| 0x1401f7836#2487 | 0x1401f7838#2505 | 0           |
| 0x1401f7552#2477 | 0x1401f7838#2505 | 1           |
| 0x1401f7838#594  | 0x1401f7838#2904 | 0           |
| 0x1401f7838#596  | 0x1401f7838#2905 | 0           |
| 0x1401f7838#1804 | 0x1401f783d#2841 | 0           |
| 0x1401f7840#1925 | 0x1401f7840#599  | 2           |
| 0x1401f7838#1789 | 0x1401f7840#1790 | 0           |
| 0x1401f7552#2827 | 0x1401f7840#1790 | 1           |
| 0x1401f7552#2827 | 0x1401f7840#1790 | 2           |
| 0x1401f783d#2841 | 0x1401f7840#1799 | 0           |
| 0x1401f782f#2842 | 0x1401f7840#1799 | 1           |
| 0x1401f7500#2787 | 0x1401f7840#1799 | 2           |
| 0x1401f7838#1814 | 0x1401f7840#1815 | 0           |
| 0x1401f757d#1809 | 0x1401f7840#1815 | 1           |
| 0x1401f757d#1809 | 0x1401f7840#1815 | 2           |
| 0x1401f7838#1828 | 0x1401f7840#1831 | 0           |
| 0x1401f77ee#1827 | 0x1401f7840#1831 | 1           |
| 0x1401f77ee#1827 | 0x1401f7840#1831 | 2           |
| 0x1401f7838#2905 | 0x1401f7840#1925 | 0           |
| 0x1401f7827#2873 | 0x1401f7840#1925 | 1           |
| 0x1401f7507#1924 | 0x1401f7840#1925 | 2           |
| 0x1401f7838#2422 | 0x1401f7840#2434 | 0           |
| 0x1401f7819#2412 | 0x1401f7840#2434 | 1           |
| 0x1401f7552#2411 | 0x1401f7840#2434 | 2           |
| 0x1401f7838#2455 | 0x1401f7840#2467 | 0           |
| 0x1401f7819#2445 | 0x1401f7840#2467 | 1           |
| 0x1401f7552#2444 | 0x1401f7840#2467 | 2           |
| 0x1401f7838#2488 | 0x1401f7840#2500 | 0           |
| 0x1401f7819#2478 | 0x1401f7840#2500 | 1           |
| 0x1401f7552#2477 | 0x1401f7840#2500 | 2           |
| 0x1401f7844#2812 | 0x1401f7844#602  | 1           |
| 0x1401f7840#1815 | 0x1401f7844#602  | 2           |
| 0x1401f7849#2813 | 0x1401f7849#605  | 1           |
| 0x1401f7840#1831 | 0x1401f7849#605  | 2           |
| 0x1401f7840#1815 | 0x1401f784e#2352 | 0           |
| 0x1401f7840#1799 | 0x1401f785b#612  | 0           |
| 0x1401f785b#2906 | 0x1401f785b#613  | 1           |
| 0x1401f7840#1925 | 0x1401f785b#614  | 1           |
| 0x1401f7840#1790 | 0x1401f785b#614  | 2           |
| 0x1401f784e#2352 | 0x1401f785b#614  | 3           |
| 0x1401f7840#2434 | 0x1401f785b#2423 | 0           |
| 0x1401f7840#2467 | 0x1401f785b#2456 | 0           |
| 0x1401f7840#2500 | 0x1401f785b#2489 | 0           |
| 0x1401f785b#612  | 0x1401f785b#2906 | 0           |
| 0x1401f7860#2814 | 0x1401f7860#618  | 1           |
| 0x1401f7840#1925 | 0x1401f7860#2814 | 0           |
| 0x1401f7840#1815 | 0x1401f7860#2814 | 1           |
| 0x1401f785b#2423 | 0x1401f7869#2840 | 0           |
| 0x1401f7840#1799 | 0x1401f7869#2843 | 0           |
| 0x1401f7871#2815 | 0x1401f7871#2373 | 1           |
| 0x1401f7876#2816 | 0x1401f7876#1094 | 1           |
| 0x1401f787b#2817 | 0x1401f787b#1097 | 1           |
| 0x1401f7884#2863 | 0x1401f7884#1099 | 1           |
| 0x1401f7552#2411 | 0x1401f788d#1107 | 0           |
| 0x1401f788d#1107 | 0x1401f7890#1112 | 1           |
| 0x1401f7896#2864 | 0x1401f7896#1118 | 0           |
| 0x1401f7896#2865 | 0x1401f7896#1118 | 1           |
| 0x1401f7552#2477 | 0x1401f7896#2864 | 0           |
| 0x1401f7552#2411 | 0x1401f7896#2865 | 0           |
| 0x1401f7896#1118 | 0x1401f7899#1128 | 0           |
| 0x1401f7899#1128 | 0x1401f789c#2353 | 0           |
| 0x1401f78a0#2866 | 0x1401f78a0#1139 | 1           |
| 0x1401f789c#2353 | 0x1401f78a0#2866 | 0           |
| 0x1401f78a0#1139 | 0x1401f78a7#1148 | 1           |
| 0x1401f7552#2411 | 0x1401f78a7#2833 | 0           |
| 0x1401f7500#2785 | 0x1401f78a7#2848 | 0           |
| 0x1401f78a9#2867 | 0x1401f78a9#1150 | 1           |
| 0x1401f7552#2411 | 0x1401f78a9#2818 | 0           |
| 0x1401f78a9#2818 | 0x1401f78a9#2867 | 0           |
| 0x1401f78b0#2869 | 0x1401f78b0#1163 | 0           |
| 0x1401f78b0#2819 | 0x1401f78b0#1163 | 1           |
| 0x1401f78b0#2868 | 0x1401f78b0#2819 | 1           |
| 0x1401f78a9#1150 | 0x1401f78b0#2868 | 0           |
| 0x1401f7552#2411 | 0x1401f78b0#2869 | 0           |
| 0x1401f78b0#1163 | 0x1401f78b0#2870 | 0           |
| 0x1401f78b0#2870 | 0x1401f78b8#1180 | 1           |
| 0x1401f78b8#1180 | 0x1401f78b8#1182 | 1           |
| 0x1401f78a9#1150 | 0x1401f78b8#2831 | 0           |
| 0x1401f7500#2786 | 0x1401f78b8#2846 | 0           |
| 0x1401f7783#2849 | 0x1401f78c0#1803 | 0           |
| 0x1401f7500#2784 | 0x1401f78c0#1803 | 1           |
| 0x1401f7754#2435 | 0x1401f78c0#2438 | 0           |
| 0x1401f7552#2411 | 0x1401f78c0#2438 | 1           |
| 0x1401f7754#2468 | 0x1401f78c0#2471 | 0           |
| 0x1401f7552#2444 | 0x1401f78c0#2471 | 1           |
| 0x1401f7754#2501 | 0x1401f78c0#2504 | 0           |
| 0x1401f7552#2477 | 0x1401f78c0#2504 | 1           |
| 0x1401f78c0#761  | 0x1401f78c0#2914 | 0           |
| 0x1401f78c5#2915 | 0x1401f78c5#763  | 0           |
| 0x1401f78c0#1803 | 0x1401f78c5#1210 | 0           |
| 0x1401f78c0#2914 | 0x1401f78c5#1710 | 0           |
| 0x1401f78c0#2438 | 0x1401f78c5#2424 | 0           |
| 0x1401f78c0#2471 | 0x1401f78c5#2457 | 0           |
| 0x1401f78c0#2504 | 0x1401f78c5#2490 | 0           |
| 0x1401f78c5#1710 | 0x1401f78c5#2832 | 0           |
| 0x1401f78c5#1210 | 0x1401f78c5#2847 | 0           |
| 0x1401f78c5#762  | 0x1401f78c5#2915 | 0           |
| 0x1401f78cd#1802 | 0x1401f78cd#713  | 0           |
| 0x1401f78cd#2916 | 0x1401f78cd#714  | 1           |
| 0x1401f78cd#1721 | 0x1401f78cd#715  | 1           |
| 0x1401f7772#2830 | 0x1401f78cd#1721 | 0           |
| 0x1401f78b8#2831 | 0x1401f78cd#1721 | 1           |
| 0x1401f78c5#2832 | 0x1401f78cd#1721 | 2           |
| 0x1401f78a7#2833 | 0x1401f78cd#1721 | 3           |
| 0x1401f7774#670  | 0x1401f78cd#1721 | 4           |
| 0x1401f7772#2845 | 0x1401f78cd#1802 | 0           |
| 0x1401f78b8#2846 | 0x1401f78cd#1802 | 1           |
| 0x1401f78c5#2847 | 0x1401f78cd#1802 | 2           |
| 0x1401f78a7#2848 | 0x1401f78cd#1802 | 3           |
| 0x1401f7754#1800 | 0x1401f78cd#1802 | 4           |
| 0x1401f78cd#2437 | 0x1401f78cd#2425 | 0           |
| 0x1401f7754#2435 | 0x1401f78cd#2437 | 0           |
| 0x1401f7552#2411 | 0x1401f78cd#2437 | 1           |
| 0x1401f78c5#2424 | 0x1401f78cd#2437 | 2           |
| 0x1401f7552#2411 | 0x1401f78cd#2437 | 3           |
| 0x1401f7754#2435 | 0x1401f78cd#2437 | 4           |
| 0x1401f78cd#2470 | 0x1401f78cd#2458 | 0           |
| 0x1401f7754#2468 | 0x1401f78cd#2470 | 0           |
| 0x1401f7552#2444 | 0x1401f78cd#2470 | 1           |
| 0x1401f78c5#2457 | 0x1401f78cd#2470 | 2           |
| 0x1401f7552#2444 | 0x1401f78cd#2470 | 3           |
| 0x1401f7754#2468 | 0x1401f78cd#2470 | 4           |
| 0x1401f78cd#2503 | 0x1401f78cd#2491 | 0           |
| 0x1401f7754#2501 | 0x1401f78cd#2503 | 0           |
| 0x1401f7552#2477 | 0x1401f78cd#2503 | 1           |
| 0x1401f78c5#2490 | 0x1401f78cd#2503 | 2           |
| 0x1401f7552#2477 | 0x1401f78cd#2503 | 3           |
| 0x1401f7754#2501 | 0x1401f78cd#2503 | 4           |
| 0x1401f78cd#713  | 0x1401f78cd#2916 | 0           |
| 0x1401f78d2#716  | 0x1401f78e5#760  | 1           |
| 0x1401f78d2#2825 | 0x1401f78e5#2826 | 1           |
| 0x1401f7552#2411 | 0x1401f78e6#2417 | 0           |
| 0x1401f7552#2444 | 0x1401f78e6#2450 | 0           |
| 0x1401f7552#2477 | 0x1401f78e6#2483 | 0           |
| 0x1401f7552#2411 | 0x1401f78ec#2415 | 0           |
| 0x1401f7552#2444 | 0x1401f78ec#2448 | 0           |
| 0x1401f7552#2477 | 0x1401f78ec#2481 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x1401f773c#2362 | 1           |
| 0       | 0x1401f773c#2800 | 0           |
| 0       | 0x1401f7741#2801 | 0           |
| 0       | 0x1401f7746#2802 | 0           |
| 0       | 0x1401f774f#2877 | 0           |
| 0       | 0x1401f779d#2367 | 1           |
| 0       | 0x1401f779d#2805 | 0           |
| 0       | 0x1401f77a2#2806 | 0           |
| 0       | 0x1401f77a7#2807 | 0           |
| 0       | 0x1401f77b1#2808 | 0           |
| 0       | 0x1401f77b6#2809 | 0           |
| 0       | 0x1401f77cc#985  | 1           |
| 0       | 0x1401f77d1#2875 | 0           |
| 0       | 0x1401f7840#599  | 1           |
| 0       | 0x1401f7844#2812 | 0           |
| 0       | 0x1401f7849#2813 | 0           |
| 0       | 0x1401f7871#2372 | 1           |
| 0       | 0x1401f7871#2815 | 0           |
| 0       | 0x1401f7876#2816 | 0           |
| 0       | 0x1401f787b#2817 | 0           |
| 0       | 0x1401f7884#2863 | 0           |
| 0       | 0x1401f78d2#716  | 0           |
| 0       | 0x1401f78d2#2825 | 0           |

## raw_result.value.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x1401f751b#58   | direct_call        | 0             |             |
| 0x1401f753a#81   | direct_call        | 0             |             |
| 0x1401f7552#122  | direct_call        | 0             |             |
| 0x1401f755c#134  | conditional_branch |               | 1           |
| 0x1401f7586#176  | conditional_branch |               | 1           |
| 0x1401f7593#188  | conditional_branch |               | 1           |
| 0x1401f75ab#230  | conditional_branch |               | 1           |
| 0x1401f75c3#261  | conditional_branch |               | 1           |
| 0x1401f75d9#296  | conditional_branch |               | 1           |
| 0x1401f75e2#309  | conditional_branch |               | 1           |
| 0x1401f75fd#362  | conditional_branch |               | 1           |
| 0x1401f760a#377  | conditional_branch |               | 1           |
| 0x1401f7614#844  | conditional_branch |               | 1           |
| 0x1401f761d#390  | conditional_branch |               | 1           |
| 0x1401f762b#779  | conditional_branch |               | 1           |
| 0x1401f7634#793  | conditional_branch |               | 1           |
| 0x1401f763a#796  | direct_call        | 0             |             |
| 0x1401f7642#806  | conditional_branch |               | 1           |
| 0x1401f7650#820  | memory_write       | 1             | 2           |
| 0x1401f7659#830  | direct_call        | 0             |             |
| 0x1401f7674#436  | direct_call        | 0             |             |
| 0x1401f7687#455  | direct_call        | 0             |             |
| 0x1401f7693#468  | conditional_branch |               | 1           |
| 0x1401f76aa#504  | conditional_branch |               | 1           |
| 0x1401f76ac#506  | memory_read        | 1             |             |
| 0x1401f76bb#538  | conditional_branch |               | 1           |
| 0x1401f76cd#552  | direct_call        | 0             |             |
| 0x1401f7707#878  | direct_call        | 0             |             |
| 0x1401f773c#2362 | memory_write       | 1             | 2           |
| 0x1401f773c#2363 | memory_write       | 1             | 2           |
| 0x1401f7741#940  | memory_write       | 1             | 2           |
| 0x1401f7746#943  | memory_write       | 1             | 2           |
| 0x1401f774f#945  | memory_write       | 1             | 2           |
| 0x1401f7757#632  | conditional_branch |               | 1           |
| 0x1401f7772#668  | conditional_branch |               | 1           |
| 0x1401f7774#670  | memory_read        | 1             |             |
| 0x1401f7783#702  | conditional_branch |               | 1           |
| 0x1401f779d#2367 | memory_write       | 1             | 2           |
| 0x1401f779d#2368 | memory_write       | 1             | 2           |
| 0x1401f77a2#954  | memory_write       | 1             | 2           |
| 0x1401f77a7#957  | memory_write       | 1             | 2           |
| 0x1401f77af#970  | conditional_branch |               | 1           |
| 0x1401f77b1#973  | memory_write       | 1             | 2           |
| 0x1401f77b6#976  | memory_write       | 1             | 2           |
| 0x1401f77cc#985  | direct_call        | 0             |             |
| 0x1401f77d1#989  | memory_write       | 1             | 2           |
| 0x1401f77ea#1014 | conditional_branch |               | 1           |
| 0x1401f77f9#1029 | conditional_branch |               | 1           |
| 0x1401f7807#1042 | conditional_branch |               | 1           |
| 0x1401f7810#1056 | conditional_branch |               | 1           |
| 0x1401f7819#1060 | direct_call        | 0             |             |
| 0x1401f7821#1070 | conditional_branch |               | 1           |
| 0x1401f782b#1084 | memory_write       | 1             | 2           |
| 0x1401f7836#593  | indirect_call      | 0             |             |
| 0x1401f7838#595  | memory_write       | 1             | 2           |
| 0x1401f7838#596  | direct_call        | 0             |             |
| 0x1401f7840#599  | memory_write       | 1             | 2           |
| 0x1401f7844#602  | memory_write       | 1             | 2           |
| 0x1401f7849#605  | memory_write       | 1             | 2           |
| 0x1401f785b#613  | memory_write       | 1             | 2           |
| 0x1401f785b#614  | direct_call        | 0             |             |
| 0x1401f7860#618  | memory_write       | 1             | 2           |
| 0x1401f7871#2372 | memory_write       | 1             | 2           |
| 0x1401f7871#2373 | memory_write       | 1             | 2           |
| 0x1401f7876#1094 | memory_write       | 1             | 2           |
| 0x1401f787b#1097 | memory_write       | 1             | 2           |
| 0x1401f7884#1099 | memory_write       | 1             | 2           |
| 0x1401f7890#1112 | conditional_branch |               | 1           |
| 0x1401f78a7#1148 | conditional_branch |               | 1           |
| 0x1401f78a9#1150 | memory_read        | 1             |             |
| 0x1401f78b8#1182 | conditional_branch |               | 1           |
| 0x1401f78c5#763  | indirect_call      | 0             |             |
| 0x1401f78cd#714  | memory_write       | 1             | 2           |
| 0x1401f78cd#715  | direct_call        | 0             |             |
| 0x1401f78e6#824  | direct_call        | 0             |             |
| 0x1401f78ec#847  | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f78e6 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f78ec to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401f78e6 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f78ec to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x1401f74f0

## normalized_result.procedure.name

FUN_1401f74f0

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
| 0x1401f74f0 | 0x1401f78ea |
| 0x1401f78ec | 0x1401f78f0 |

## normalized_result.procedure.body.total_bytes

1024

## normalized_result.procedure.body.span_bytes

1025

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f74f0()

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_50 @ Stack[-0x50]:8      | ghidra-function-database |
| undefined1[16] local_60 @ Stack[-0x60]:16 | ghidra-function-database |

## normalized_result.pseudocode


undefined8 * FUN_1401f74f0(undefined8 *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  longlong lVar3;
  LPWSTR pWVar4;
  LPWSTR pWVar5;
  ulonglong uVar6;
  LPWSTR pWVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [32];
  LPWSTR local_60;
  LPWSTR pWStack_58;
  LPWSTR local_50;
  
  puVar9 = auStack_88;
  puVar11 = auStack_88;
  puVar10 = auStack_88;
  puVar8 = auStack_88;
  pWVar5 = (LPWSTR)0x0;
  local_60 = (LPWSTR)0x0;
  pWStack_58 = (LPWSTR)0x0;
  local_50 = (LPWSTR)0x0;
  local_60 = (LPWSTR)FUN_1403272a0(0x400);
  pWVar4 = local_60 + 0x200;
  local_50 = pWVar4;
  FUN_14035fad0(local_60,0,0x400);
  uVar6 = (longlong)pWVar4 - (longlong)local_60 >> 1 & 0xffffffff;
  pWStack_58 = pWVar4;
  do {
    DVar2 = GetModuleFileNameW((HMODULE)0x0,local_60,(DWORD)uVar6);
    pWVar4 = local_60;
    if (DVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 7;
      *(undefined2 *)param_1 = 0;
      if (local_60 != (LPWSTR)0x0) {
        pWVar5 = local_60;
        puVar8 = auStack_88;
        if ((0xfff < (ulonglong)(((longlong)local_50 - (longlong)local_60 >> 1) * 2)) &&
           (pWVar5 = *(LPWSTR *)(local_60 + -4), puVar8 = auStack_88,
           (undefined1 *)0x1f <
           (undefined1 *)((longlong)local_60 + (-8 - (longlong)*(LPWSTR *)(local_60 + -4))))) {
LAB_1401f78c0:
          pWVar5 = (LPWSTR)&DAT_00000005;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar8 = puVar11 + 8;
        }
LAB_1401f78cd:
        *(undefined8 *)(puVar8 + -8) = 0x1401f78d2;
        thunk_FUN_140327e20(pWVar5);
      }
      return param_1;
    }
    uVar13 = (longlong)pWStack_58 - (longlong)local_60 >> 1;
    uVar6 = (ulonglong)DVar2;
    if (uVar6 < uVar13 - 1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      if (DVar2 < 8) {
        param_1[2] = uVar6;
        param_1[3] = 7;
        FUN_14035f420(param_1,local_60,uVar6 * 2);
        *(undefined2 *)(uVar6 * 2 + (longlong)param_1) = 0;
      }
      else {
        uVar14 = uVar6 | 7;
        if (uVar14 < 10) {
          uVar14 = 10;
        }
        uVar13 = uVar14 * 2 + 2;
        if (uVar14 != 0x7fffffffffffffff) {
          if (uVar13 < 0x1000) {
LAB_1401f7838:
            *(undefined8 *)(puVar9 + -8) = 0x1401f783d;
            pWVar5 = (LPWSTR)FUN_1403272a0();
            puVar10 = puVar9;
          }
          else {
            uVar15 = uVar14 * 2 + 0x29;
            if (uVar15 <= uVar13) goto LAB_1401f78e6;
            lVar3 = FUN_1403272a0(uVar15);
            if (lVar3 == 0) goto LAB_1401f7831;
            pWVar5 = (LPWSTR)(lVar3 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)(pWVar5 + -4) = lVar3;
            puVar10 = auStack_88;
          }
        }
        *param_1 = pWVar5;
        param_1[2] = uVar6;
        param_1[3] = uVar14;
        *(undefined8 *)(puVar10 + -8) = 0x1401f7860;
        FUN_14035f420(pWVar5,pWVar4,uVar6 * 2);
        pWVar5[uVar6] = L'\0';
        pWVar4 = local_60;
        puVar8 = puVar10;
      }
LAB_1401f7754:
      if (pWVar4 == (LPWSTR)0x0) {
        return param_1;
      }
      pWVar5 = pWVar4;
      if (((ulonglong)(((longlong)local_50 - (longlong)pWVar4 >> 1) * 2) < 0x1000) ||
         (pWVar5 = *(LPWSTR *)(pWVar4 + -4), puVar11 = puVar8,
         (undefined1 *)((longlong)pWVar4 + (-8 - (longlong)pWVar5)) < &DAT_00000020))
      goto LAB_1401f78cd;
      goto LAB_1401f78c0;
    }
    if (0x7fff < uVar13) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 7;
      *(undefined2 *)param_1 = 0;
      puVar8 = auStack_88;
      goto LAB_1401f7754;
    }
    uVar14 = uVar13 * 2;
    uVar16 = (longlong)pWStack_58 - (longlong)local_60;
    uVar15 = (longlong)uVar16 >> 1;
    if (uVar14 < uVar15) {
      uVar6 = (longlong)(local_60 + uVar13 * 2) - (longlong)local_60 >> 1 & 0xffffffff;
      pWStack_58 = local_60 + uVar13 * 2;
    }
    else if (uVar15 < uVar14) {
      if ((ulonglong)((longlong)local_50 - (longlong)local_60 >> 1) < uVar14) {
        if (0x7fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_14000bff0();
        }
        uVar6 = (longlong)local_50 - (longlong)local_60 >> 1;
        if ((0x7fffffffffffffff - (uVar6 >> 1) < uVar6) ||
           ((uVar6 = (uVar6 >> 1) + uVar6, uVar12 = uVar14, uVar14 <= uVar6 &&
            (uVar12 = uVar6, 0x7fffffffffffffff < uVar6)))) {
LAB_1401f78e6:
                    /* WARNING: Subroutine does not return */
          FUN_140005500();
        }
        uVar6 = uVar12 * 2;
        pWVar7 = pWVar5;
        if (uVar6 != 0) {
          if (uVar6 < 0x1000) {
            pWVar7 = (LPWSTR)FUN_1403272a0(uVar6);
          }
          else {
            if (uVar6 + 0x27 <= uVar6) goto LAB_1401f78e6;
            lVar3 = FUN_1403272a0();
            if (lVar3 == 0) goto LAB_1401f7831;
            pWVar7 = (LPWSTR)(lVar3 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)(pWVar7 + -4) = lVar3;
          }
        }
        FUN_14035fad0((undefined1 *)((longlong)pWVar7 + (uVar16 & 0xfffffffffffffffe)),0,
                      (uVar14 - uVar15) * 2);
        FUN_14035f420(pWVar7,local_60,(longlong)pWStack_58 - (longlong)local_60);
        if (local_60 != (LPWSTR)0x0) {
          uVar15 = ((longlong)local_50 - (longlong)local_60 >> 1) * 2;
          pWVar4 = local_60;
          if (0xfff < uVar15) {
            pWVar4 = pWVar7;
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)local_60 + (-8 - (longlong)*(LPWSTR *)(local_60 + -4)))) {
LAB_1401f7831:
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar9 = auStack_80;
              goto LAB_1401f7838;
            }
            uVar15 = uVar15 + 0x27;
            pWVar4 = *(LPWSTR *)(local_60 + -4);
          }
          thunk_FUN_140327e20(pWVar4,uVar15);
        }
        local_50 = pWVar7 + uVar12;
        uVar6 = (longlong)(pWVar7 + uVar13 * 2) - (longlong)pWVar7 >> 1 & 0xffffffff;
        local_60 = pWVar7;
        pWStack_58 = pWVar7 + uVar13 * 2;
      }
      else {
        pWVar4 = pWStack_58 + (uVar14 - uVar15);
        FUN_14035fad0(pWStack_58,0);
        uVar6 = (longlong)pWVar4 - (longlong)local_60 >> 1 & 0xffffffff;
        pWStack_58 = pWVar4;
      }
    }
    else {
      uVar6 = (longlong)pWStack_58 - (longlong)local_60 >> 1 & 0xffffffff;
    }
  } while( true );
}



## normalized_result.assembly

0x1401f74f0: PUSH RBP,0x1401f74f2: PUSH RBX,0x1401f74f3: PUSH RSI,0x1401f74f4: PUSH RDI,0x1401f74f5: PUSH R12,0x1401f74f7: PUSH R13,0x1401f74f9: PUSH R14,0x1401f74fb: PUSH R15,0x1401f74fd: MOV RBP, RSP,0x1401f7500: SUB RSP, 0x48,0x1401f7504: MOV R12, RCX,0x1401f7507: XOR R13D, R13D,0x1401f750a: XORPS XMM0, XMM0,0x1401f750d: MOVDQU xmmword ptr [RBP + -0x20], XMM0,0x1401f7512: MOV qword ptr [RBP + -0x10], R13,0x1401f7516: MOV ECX, 0x400,0x1401f751b: CALL 0x1403272a0,0x1401f7520: MOV qword ptr [RBP + -0x20], RAX,0x1401f7524: LEA RBX, [RAX + 0x400],0x1401f752b: MOV qword ptr [RBP + -0x10], RBX,0x1401f752f: XOR EDX, EDX,0x1401f7531: MOV R8D, 0x400,0x1401f7537: MOV RCX, RAX,0x1401f753a: CALL 0x14035fad0,0x1401f753f: MOV qword ptr [RBP + -0x18], RBX,0x1401f7543: MOV RDX, qword ptr [RBP + -0x20],0x1401f7547: SUB RBX, RDX,0x1401f754a: SAR RBX, 0x1,0x1401f754d: MOV R8D, EBX,0x1401f7550: XOR ECX, ECX,0x1401f7552: CALL qword ptr [0x14037a9f8],0x1401f7558: TEST EAX, EAX,0x1401f755a: MOV ECX, EAX,0x1401f755c: JZ 0x1401f786e,0x1401f7562: MOV R8, 0x7fffffffffffffff,0x1401f756c: MOV R9, qword ptr [RBP + -0x18],0x1401f7570: MOV RDI, R9,0x1401f7573: MOV RBX, qword ptr [RBP + -0x20],0x1401f7577: SUB RDI, RBX,0x1401f757a: SAR RDI, 0x1,0x1401f757d: MOV ESI, EAX,0x1401f757f: LEA RAX, [RDI + -0x1],0x1401f7583: CMP RSI, RAX,0x1401f7586: JC 0x1401f779a,0x1401f758c: CMP RDI, 0x8000,0x1401f7593: JNC 0x1401f7739,0x1401f7599: ADD RDI, RDI,0x1401f759c: MOV R15, R9,0x1401f759f: SUB R15, RBX,0x1401f75a2: MOV R14, R15,0x1401f75a5: SAR R14, 0x1,0x1401f75a8: CMP RDI, R14,0x1401f75ab: JNC 0x1401f75c3,0x1401f75ad: LEA RDI, [RBX + RDI*0x2],0x1401f75b1: MOV qword ptr [RBP + -0x18], RDI,0x1401f75b5: SUB RDI, RBX,0x1401f75b8: SAR RDI, 0x1,0x1401f75bb: MOV R8D, EDI,0x1401f75be: MOV RDX, RBX,0x1401f75c1: JMP 0x1401f7550,0x1401f75c3: JBE 0x1401f7725,0x1401f75c9: MOV RCX, qword ptr [RBP + -0x10],0x1401f75cd: MOV RAX, RCX,0x1401f75d0: SUB RAX, RBX,0x1401f75d3: SAR RAX, 0x1,0x1401f75d6: CMP RDI, RAX,0x1401f75d9: JBE 0x1401f76f7,0x1401f75df: CMP RDI, R8,0x1401f75e2: JA 0x1401f78ec,0x1401f75e8: SUB RCX, RBX,0x1401f75eb: SAR RCX, 0x1,0x1401f75ee: MOV RDX, RCX,0x1401f75f1: SHR RDX, 0x1,0x1401f75f4: MOV RAX, R8,0x1401f75f7: SUB RAX, RDX,0x1401f75fa: CMP RCX, RAX,0x1401f75fd: JA 0x1401f78e6,0x1401f7603: LEA RSI, [RDX + RCX*0x1],0x1401f7607: CMP RSI, RDI,0x1401f760a: JNC 0x1401f7611,0x1401f760c: MOV RSI, RDI,0x1401f760f: JMP 0x1401f761a,0x1401f7611: CMP RSI, R8,0x1401f7614: JA 0x1401f78e6,0x1401f761a: ADD RSI, RSI,0x1401f761d: JNZ 0x1401f7624,0x1401f761f: MOV RBX, R13,0x1401f7622: JMP 0x1401f7661,0x1401f7624: CMP RSI, 0x1000,0x1401f762b: JC 0x1401f7656,0x1401f762d: LEA RCX, [RSI + 0x27],0x1401f7631: CMP RCX, RSI,0x1401f7634: JBE 0x1401f78e6,0x1401f763a: CALL 0x1403272a0,0x1401f763f: TEST RAX, RAX,0x1401f7642: JZ 0x1401f7831,0x1401f7648: LEA RBX, [RAX + 0x27],0x1401f764c: AND RBX, -0x20,0x1401f7650: MOV qword ptr [RBX + -0x8], RAX,0x1401f7654: JMP 0x1401f7661,0x1401f7656: MOV RCX, RSI,0x1401f7659: CALL 0x1403272a0,0x1401f765e: MOV RBX, RAX,0x1401f7661: AND R15, -0x2,0x1401f7665: LEA RCX, [RBX + R15*0x1],0x1401f7669: MOV R8, RDI,0x1401f766c: SUB R8, R14,0x1401f766f: ADD R8, R8,0x1401f7672: XOR EDX, EDX,0x1401f7674: CALL 0x14035fad0,0x1401f7679: MOV RDX, qword ptr [RBP + -0x20],0x1401f767d: MOV R8, qword ptr [RBP + -0x18],0x1401f7681: SUB R8, RDX,0x1401f7684: MOV RCX, RBX,0x1401f7687: CALL 0x14035f420,0x1401f768c: MOV RCX, qword ptr [RBP + -0x20],0x1401f7690: TEST RCX, RCX,0x1401f7693: JZ 0x1401f76d2,0x1401f7695: MOV RAX, qword ptr [RBP + -0x10],0x1401f7699: SUB RAX, RCX,0x1401f769c: SAR RAX, 0x1,0x1401f769f: LEA RDX, [RAX + RAX*0x1],0x1401f76a3: CMP RDX, 0x1000,0x1401f76aa: JC 0x1401f76c7,0x1401f76ac: MOV RAX, qword ptr [RCX + -0x8],0x1401f76b0: SUB RCX, RAX,0x1401f76b3: SUB RCX, 0x8,0x1401f76b7: CMP RCX, 0x1f,0x1401f76bb: JA 0x1401f7831,0x1401f76c1: ADD RDX, 0x27,0x1401f76c5: JMP 0x1401f76ca,0x1401f76c7: MOV RAX, RCX,0x1401f76ca: MOV RCX, RAX,0x1401f76cd: CALL 0x1403272f0,0x1401f76d2: MOV qword ptr [RBP + -0x20], RBX,0x1401f76d6: LEA RDI, [RBX + RDI*0x2],0x1401f76da: MOV qword ptr [RBP + -0x18], RDI,0x1401f76de: LEA RAX, [RSI + RBX*0x1],0x1401f76e2: MOV qword ptr [RBP + -0x10], RAX,0x1401f76e6: SUB RDI, RBX,0x1401f76e9: SAR RDI, 0x1,0x1401f76ec: MOV R8D, EDI,0x1401f76ef: MOV RDX, RBX,0x1401f76f2: JMP 0x1401f7550,0x1401f76f7: SUB RDI, R14,0x1401f76fa: LEA R8, [RDI + RDI*0x1],0x1401f76fe: LEA RDI, [R8 + R9*0x1],0x1401f7702: XOR EDX, EDX,0x1401f7704: MOV RCX, R9,0x1401f7707: CALL 0x14035fad0,0x1401f770c: MOV qword ptr [RBP + -0x18], RDI,0x1401f7710: MOV RBX, qword ptr [RBP + -0x20],0x1401f7714: SUB RDI, RBX,0x1401f7717: SAR RDI, 0x1,0x1401f771a: MOV R8D, EDI,0x1401f771d: MOV RDX, RBX,0x1401f7720: JMP 0x1401f7550,0x1401f7725: MOV RDI, R9,0x1401f7728: SUB RDI, RBX,0x1401f772b: SAR RDI, 0x1,0x1401f772e: MOV R8D, EDI,0x1401f7731: MOV RDX, RBX,0x1401f7734: JMP 0x1401f7550,0x1401f7739: XORPS XMM0, XMM0,0x1401f773c: MOVUPS xmmword ptr [R12], XMM0,0x1401f7741: MOV qword ptr [R12 + 0x10], R13,0x1401f7746: MOV qword ptr [R12 + 0x18], 0x7,0x1401f774f: MOV word ptr [R12], R13W,0x1401f7754: TEST RBX, RBX,0x1401f7757: JZ 0x1401f78d2,0x1401f775d: MOV RAX, qword ptr [RBP + -0x10],0x1401f7761: SUB RAX, RBX,0x1401f7764: SAR RAX, 0x1,0x1401f7767: LEA RDX, [RAX + RAX*0x1],0x1401f776b: CMP RDX, 0x1000,0x1401f7772: JC 0x1401f7792,0x1401f7774: MOV RCX, qword ptr [RBX + -0x8],0x1401f7778: SUB RBX, RCX,0x1401f777b: SUB RBX, 0x8,0x1401f777f: CMP RBX, 0x1f,0x1401f7783: JA 0x1401f78c0,0x1401f7789: ADD RDX, 0x27,0x1401f778d: JMP 0x1401f78cd,0x1401f7792: MOV RCX, RBX,0x1401f7795: JMP 0x1401f78cd,0x1401f779a: XORPS XMM0, XMM0,0x1401f779d: MOVUPS xmmword ptr [R12], XMM0,0x1401f77a2: MOV qword ptr [R12 + 0x10], R13,0x1401f77a7: MOV qword ptr [R12 + 0x18], R13,0x1401f77ac: CMP ECX, 0x7,0x1401f77af: JA 0x1401f77db,0x1401f77b1: MOV qword ptr [R12 + 0x10], RSI,0x1401f77b6: MOV qword ptr [R12 + 0x18], 0x7,0x1401f77bf: LEA RDI, [RSI + RSI*0x1],0x1401f77c3: MOV R8, RDI,0x1401f77c6: MOV RDX, RBX,0x1401f77c9: MOV RCX, R12,0x1401f77cc: CALL 0x14035f420,0x1401f77d1: MOV word ptr [RDI + R12*0x1], R13W,0x1401f77d6: JMP 0x1401f7754,0x1401f77db: MOV RDI, RSI,0x1401f77de: OR RDI, 0x7,0x1401f77e2: MOV EAX, 0xa,0x1401f77e7: CMP RDI, RAX,0x1401f77ea: CMOVC RDI, RAX,0x1401f77ee: LEA RCX, [0x2 + RDI*0x2],0x1401f77f6: TEST RCX, RCX,0x1401f77f9: JNZ 0x1401f7800,0x1401f77fb: MOV R14, R13,0x1401f77fe: JMP 0x1401f7840,0x1401f7800: CMP RCX, 0x1000,0x1401f7807: JC 0x1401f7838,0x1401f7809: LEA RAX, [RCX + 0x27],0x1401f780d: CMP RAX, RCX,0x1401f7810: JBE 0x1401f78e6,0x1401f7816: MOV RCX, RAX,0x1401f7819: CALL 0x1403272a0,0x1401f781e: TEST RAX, RAX,0x1401f7821: JZ 0x1401f7831,0x1401f7823: LEA R14, [RAX + 0x27],0x1401f7827: AND R14, -0x20,0x1401f782b: MOV qword ptr [R14 + -0x8], RAX,0x1401f782f: JMP 0x1401f7840,0x1401f7831: MOV ECX, 0x5,0x1401f7836: INT 0x29,0x1401f7838: CALL 0x1403272a0,0x1401f783d: MOV R14, RAX,0x1401f7840: MOV qword ptr [R12], R14,0x1401f7844: MOV qword ptr [R12 + 0x10], RSI,0x1401f7849: MOV qword ptr [R12 + 0x18], RDI,0x1401f784e: LEA RDI, [RSI + RSI*0x1],0x1401f7852: MOV R8, RDI,0x1401f7855: MOV RDX, RBX,0x1401f7858: MOV RCX, R14,0x1401f785b: CALL 0x14035f420,0x1401f7860: MOV word ptr [RDI + R14*0x1], R13W,0x1401f7865: MOV RBX, qword ptr [RBP + -0x20],0x1401f7869: JMP 0x1401f7754,0x1401f786e: XORPS XMM0, XMM0,0x1401f7871: MOVUPS xmmword ptr [R12], XMM0,0x1401f7876: MOV qword ptr [R12 + 0x10], R13,0x1401f787b: MOV qword ptr [R12 + 0x18], 0x7,0x1401f7884: MOV word ptr [R12], R13W,0x1401f7889: MOV RCX, qword ptr [RBP + -0x20],0x1401f788d: TEST RCX, RCX,0x1401f7890: JZ 0x1401f78d2,0x1401f7892: MOV RAX, qword ptr [RBP + -0x10],0x1401f7896: SUB RAX, RCX,0x1401f7899: SAR RAX, 0x1,0x1401f789c: LEA RDX, [RAX + RAX*0x1],0x1401f78a0: CMP RDX, 0x1000,0x1401f78a7: JC 0x1401f78c7,0x1401f78a9: MOV RAX, qword ptr [RCX + -0x8],0x1401f78ad: SUB RCX, RAX,0x1401f78b0: SUB RCX, 0x8,0x1401f78b4: CMP RCX, 0x1f,0x1401f78b8: JA 0x1401f78c0,0x1401f78ba: ADD RDX, 0x27,0x1401f78be: JMP 0x1401f78ca,0x1401f78c0: MOV ECX, 0x5,0x1401f78c5: INT 0x29,0x1401f78c7: MOV RAX, RCX,0x1401f78ca: MOV RCX, RAX,0x1401f78cd: CALL 0x1403272f0,0x1401f78d2: MOV RAX, R12,0x1401f78d5: ADD RSP, 0x48,0x1401f78d9: POP R15,0x1401f78db: POP R14,0x1401f78dd: POP R13,0x1401f78df: POP R12,0x1401f78e1: POP RDI,0x1401f78e2: POP RSI,0x1401f78e3: POP RBX,0x1401f78e4: POP RBP,0x1401f78e5: RET,0x1401f78e6: CALL 0x140005500,0x1401f78ec: CALL 0x14000bff0

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f7ae0 | FUN_1401f7ae0 | [object Object] | [object Object] |

## normalized_result.callees

| address        | name                             | classification  | body            |
|----------------|----------------------------------|-----------------|-----------------|
| EXTERNAL:0x2a4 | KERNEL32.DLL::GetModuleFileNameW | [object Object] | [object Object] |
| 0x140005500    | FUN_140005500                    | [object Object] | [object Object] |
| 0x14000bff0    | FUN_14000bff0                    | [object Object] | [object Object] |
| 0x1403272a0    | FUN_1403272a0                    | [object Object] | [object Object] |
| 0x1403272f0    | thunk_FUN_140327e20              | [object Object] | [object Object] |
| 0x14035f420    | FUN_14035f420                    | [object Object] | [object Object] |
| 0x14035fad0    | FUN_14035fad0                    | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f7afa    | 0x1401f74f0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfaf8    | 0x1401f74f0    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f750d    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7512    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f751b    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7520    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f752b    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f753a    | 0x14035fad0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f753f    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7543    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7552    | EXTERNAL:0x2a4           | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7552    | 0x14037a9f8              | [object Object]  |                  | [object Object] |
| 0x1401f755c    | 0x1401f786e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f756c    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7573    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7586    | 0x1401f779a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7593    | 0x1401f7739              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75ab    | 0x1401f75c3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75b1    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f75c1    | 0x1401f7550              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75c3    | 0x1401f7725              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75c9    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f75d9    | 0x1401f76f7              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75e2    | 0x1401f78ec              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f75fd    | 0x1401f78e6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f760a    | 0x1401f7611              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f760f    | 0x1401f761a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7614    | 0x1401f78e6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f761d    | 0x1401f7624              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7622    | 0x1401f7661              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f762b    | 0x1401f7656              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7634    | 0x1401f78e6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f763a    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7642    | 0x1401f7831              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7654    | 0x1401f7661              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7659    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7674    | 0x14035fad0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7679    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f767d    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7687    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f768c    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7693    | 0x1401f76d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7695    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f76aa    | 0x1401f76c7              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f76bb    | 0x1401f7831              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f76c5    | 0x1401f76ca              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f76cd    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f76d2    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f76da    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f76e2    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f76f2    | 0x1401f7550              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7707    | 0x14035fad0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f770c    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7710    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7720    | 0x1401f7550              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7734    | 0x1401f7550              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7757    | 0x1401f78d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f775d    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f7772    | 0x1401f7792              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7783    | 0x1401f78c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f778d    | 0x1401f78cd              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7795    | 0x1401f78cd              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f77af    | 0x1401f77db              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f77cc    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f77d6    | 0x1401f7754              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f77f9    | 0x1401f7800              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f77fe    | 0x1401f7840              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7807    | 0x1401f7838              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7810    | 0x1401f78e6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7819    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7821    | 0x1401f7831              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f782f    | 0x1401f7840              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7838    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f785b    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7865    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7869    | 0x1401f7754              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7889    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f7890    | 0x1401f78d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7892    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x1401f78a7    | 0x1401f78c7              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f78b8    | 0x1401f78c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f78be    | 0x1401f78ca              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f78cd    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f78e6    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f78ec    | 0x14000bff0              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address        | value                            | source_address |
|----------------|----------------------------------|----------------|
| 0x140005500    | FUN_140005500                    | 0x1401f78e6    |
| 0x14000bff0    | FUN_14000bff0                    | 0x1401f78ec    |
| 0x1401f7550    | LAB_1401f7550                    | 0x1401f75c1    |
| 0x1401f7550    | LAB_1401f7550                    | 0x1401f76f2    |
| 0x1401f7550    | LAB_1401f7550                    | 0x1401f7720    |
| 0x1401f7550    | LAB_1401f7550                    | 0x1401f7734    |
| 0x1401f75c3    | LAB_1401f75c3                    | 0x1401f75ab    |
| 0x1401f7611    | LAB_1401f7611                    | 0x1401f760a    |
| 0x1401f761a    | LAB_1401f761a                    | 0x1401f760f    |
| 0x1401f7624    | LAB_1401f7624                    | 0x1401f761d    |
| 0x1401f7656    | LAB_1401f7656                    | 0x1401f762b    |
| 0x1401f7661    | LAB_1401f7661                    | 0x1401f7622    |
| 0x1401f7661    | LAB_1401f7661                    | 0x1401f7654    |
| 0x1401f76c7    | LAB_1401f76c7                    | 0x1401f76aa    |
| 0x1401f76ca    | LAB_1401f76ca                    | 0x1401f76c5    |
| 0x1401f76d2    | LAB_1401f76d2                    | 0x1401f7693    |
| 0x1401f76f7    | LAB_1401f76f7                    | 0x1401f75d9    |
| 0x1401f7725    | LAB_1401f7725                    | 0x1401f75c3    |
| 0x1401f7739    | LAB_1401f7739                    | 0x1401f7593    |
| 0x1401f7754    | LAB_1401f7754                    | 0x1401f77d6    |
| 0x1401f7754    | LAB_1401f7754                    | 0x1401f7869    |
| 0x1401f7792    | LAB_1401f7792                    | 0x1401f7772    |
| 0x1401f779a    | LAB_1401f779a                    | 0x1401f7586    |
| 0x1401f77db    | LAB_1401f77db                    | 0x1401f77af    |
| 0x1401f7800    | LAB_1401f7800                    | 0x1401f77f9    |
| 0x1401f7831    | LAB_1401f7831                    | 0x1401f7642    |
| 0x1401f7831    | LAB_1401f7831                    | 0x1401f76bb    |
| 0x1401f7831    | LAB_1401f7831                    | 0x1401f7821    |
| 0x1401f7838    | LAB_1401f7838                    | 0x1401f7807    |
| 0x1401f7840    | LAB_1401f7840                    | 0x1401f77fe    |
| 0x1401f7840    | LAB_1401f7840                    | 0x1401f782f    |
| 0x1401f786e    | LAB_1401f786e                    | 0x1401f755c    |
| 0x1401f78c0    | LAB_1401f78c0                    | 0x1401f7783    |
| 0x1401f78c0    | LAB_1401f78c0                    | 0x1401f78b8    |
| 0x1401f78c7    | LAB_1401f78c7                    | 0x1401f78a7    |
| 0x1401f78ca    | LAB_1401f78ca                    | 0x1401f78be    |
| 0x1401f78cd    | LAB_1401f78cd                    | 0x1401f778d    |
| 0x1401f78cd    | LAB_1401f78cd                    | 0x1401f7795    |
| 0x1401f78d2    | LAB_1401f78d2                    | 0x1401f7757    |
| 0x1401f78d2    | LAB_1401f78d2                    | 0x1401f7890    |
| 0x1401f78e6    | LAB_1401f78e6                    | 0x1401f75fd    |
| 0x1401f78e6    | LAB_1401f78e6                    | 0x1401f7614    |
| 0x1401f78e6    | LAB_1401f78e6                    | 0x1401f7634    |
| 0x1401f78e6    | LAB_1401f78e6                    | 0x1401f7810    |
| 0x1401f78ec    | LAB_1401f78ec                    | 0x1401f75e2    |
| 0x1403272a0    | FUN_1403272a0                    | 0x1401f751b    |
| 0x1403272a0    | FUN_1403272a0                    | 0x1401f763a    |
| 0x1403272a0    | FUN_1403272a0                    | 0x1401f7659    |
| 0x1403272a0    | FUN_1403272a0                    | 0x1401f7819    |
| 0x1403272a0    | FUN_1403272a0                    | 0x1401f7838    |
| 0x1403272f0    | thunk_FUN_140327e20              | 0x1401f76cd    |
| 0x1403272f0    | thunk_FUN_140327e20              | 0x1401f78cd    |
| 0x14035f420    | FUN_14035f420                    | 0x1401f7687    |
| 0x14035f420    | FUN_14035f420                    | 0x1401f77cc    |
| 0x14035f420    | FUN_14035f420                    | 0x1401f785b    |
| 0x14035fad0    | FUN_14035fad0                    | 0x1401f753a    |
| 0x14035fad0    | FUN_14035fad0                    | 0x1401f7674    |
| 0x14035fad0    | FUN_14035fad0                    | 0x1401f7707    |
| 0x14037a9f8    | PTR_GetModuleFileNameW_14037a9f8 | 0x1401f7552    |
| EXTERNAL:0x2a4 | KERNEL32.DLL::GetModuleFileNameW | 0x1401f7552    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f74f0 | 0x1401f7550 | 0x1401f7550             |
| 0x1401f7550 | 0x1401f7562 | 0x1401f7562,0x1401f786e |
| 0x1401f7562 | 0x1401f758c | 0x1401f758c,0x1401f779a |
| 0x1401f758c | 0x1401f7599 | 0x1401f7599,0x1401f7739 |
| 0x1401f7599 | 0x1401f75ad | 0x1401f75ad,0x1401f75c3 |
| 0x1401f75ad | 0x1401f75c3 | 0x1401f7550             |
| 0x1401f75c3 | 0x1401f75c9 | 0x1401f75c9,0x1401f7725 |
| 0x1401f75c9 | 0x1401f75df | 0x1401f75df,0x1401f76f7 |
| 0x1401f75df | 0x1401f75e8 | 0x1401f75e8,0x1401f78ec |
| 0x1401f75e8 | 0x1401f7603 | 0x1401f7603,0x1401f78e6 |
| 0x1401f7603 | 0x1401f760c | 0x1401f760c,0x1401f7611 |
| 0x1401f760c | 0x1401f7611 | 0x1401f761a             |
| 0x1401f7611 | 0x1401f761a | 0x1401f761a,0x1401f78e6 |
| 0x1401f761a | 0x1401f761f | 0x1401f761f,0x1401f7624 |
| 0x1401f761f | 0x1401f7624 | 0x1401f7661             |
| 0x1401f7624 | 0x1401f762d | 0x1401f762d,0x1401f7656 |
| 0x1401f762d | 0x1401f763a | 0x1401f763a,0x1401f78e6 |
| 0x1401f763a | 0x1401f7648 | 0x1401f7648,0x1401f7831 |
| 0x1401f7648 | 0x1401f7656 | 0x1401f7661             |
| 0x1401f7656 | 0x1401f7661 | 0x1401f7661             |
| 0x1401f7661 | 0x1401f7695 | 0x1401f7695,0x1401f76d2 |
| 0x1401f7695 | 0x1401f76ac | 0x1401f76ac,0x1401f76c7 |
| 0x1401f76ac | 0x1401f76c1 | 0x1401f76c1,0x1401f7831 |
| 0x1401f76c1 | 0x1401f76c7 | 0x1401f76ca             |
| 0x1401f76c7 | 0x1401f76ca | 0x1401f76ca             |
| 0x1401f76ca | 0x1401f76d2 | 0x1401f76d2             |
| 0x1401f76d2 | 0x1401f76f7 | 0x1401f7550             |
| 0x1401f76f7 | 0x1401f7725 | 0x1401f7550             |
| 0x1401f7725 | 0x1401f7739 | 0x1401f7550             |
| 0x1401f7739 | 0x1401f7754 | 0x1401f7754             |
| 0x1401f7754 | 0x1401f775d | 0x1401f775d,0x1401f78d2 |
| 0x1401f775d | 0x1401f7774 | 0x1401f7774,0x1401f7792 |
| 0x1401f7774 | 0x1401f7789 | 0x1401f7789,0x1401f78c0 |
| 0x1401f7789 | 0x1401f7792 | 0x1401f78cd             |
| 0x1401f7792 | 0x1401f779a | 0x1401f78cd             |
| 0x1401f779a | 0x1401f77b1 | 0x1401f77b1,0x1401f77db |
| 0x1401f77b1 | 0x1401f77db | 0x1401f7754             |
| 0x1401f77db | 0x1401f77fb | 0x1401f77fb,0x1401f7800 |
| 0x1401f77fb | 0x1401f7800 | 0x1401f7840             |
| 0x1401f7800 | 0x1401f7809 | 0x1401f7809,0x1401f7838 |
| 0x1401f7809 | 0x1401f7816 | 0x1401f7816,0x1401f78e6 |
| 0x1401f7816 | 0x1401f7823 | 0x1401f7823,0x1401f7831 |
| 0x1401f7823 | 0x1401f7831 | 0x1401f7840             |
| 0x1401f7831 | 0x1401f7838 | 0x1401f7838             |
| 0x1401f7838 | 0x1401f7840 | 0x1401f7840             |
| 0x1401f7840 | 0x1401f786e | 0x1401f7754             |
| 0x1401f786e | 0x1401f7892 | 0x1401f7892,0x1401f78d2 |
| 0x1401f7892 | 0x1401f78a9 | 0x1401f78a9,0x1401f78c7 |
| 0x1401f78a9 | 0x1401f78ba | 0x1401f78ba,0x1401f78c0 |
| 0x1401f78ba | 0x1401f78c0 | 0x1401f78ca             |
| 0x1401f78c0 | 0x1401f78c7 | 0x1401f78c7             |
| 0x1401f78c7 | 0x1401f78ca | 0x1401f78ca             |
| 0x1401f78ca | 0x1401f78cd | 0x1401f78cd             |
| 0x1401f78cd | 0x1401f78d2 | 0x1401f78d2             |
| 0x1401f78d2 | 0x1401f78e6 |                         |
| 0x1401f78e6 | 0x1401f78eb |                         |
| 0x1401f78ec | 0x1401f78f1 |                         |

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

| id               | address     | sequence | opcode        | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|---------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x1401f7500#2782 | 0x1401f7500 | 2782     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2783 | 0x1401f7500 | 2783     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2784 | 0x1401f7500 | 2784     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2785 | 0x1401f7500 | 2785     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2786 | 0x1401f7500 | 2786     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2787 | 0x1401f7500 | 2787     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2788 | 0x1401f7500 | 2788     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7500#2789 | 0x1401f7500 | 2789     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7507#1924 | 0x1401f7507 | 1924     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f750d#2357 | 0x1401f750d | 2357     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f750d#2358 | 0x1401f750d | 2358     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7512#54   | 0x1401f7512 | 54       | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f751b#58   | 0x1401f751b | 58       | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f751b#2409 | 0x1401f751b | 2409     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f751b#2442 | 0x1401f751b | 2442     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f751b#2475 | 0x1401f751b | 2475     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f751b#2860 | 0x1401f751b | 2860     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7524#2790 | 0x1401f7524 | 2790     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f753a#81   | 0x1401f753a | 81       | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f753a#2410 | 0x1401f753a | 2410     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f753a#2443 | 0x1401f753a | 2443     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f753a#2476 | 0x1401f753a | 2476     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f753a#2859 | 0x1401f753a | 2859     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7547#90   | 0x1401f7547 | 90       | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7547#2861 | 0x1401f7547 | 2861     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7547#2862 | 0x1401f7547 | 2862     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f754a#100  | 0x1401f754a | 100      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f754d#1844 | 0x1401f754d | 1844     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f754d#2852 | 0x1401f754d | 2852     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f754d#2855 | 0x1401f754d | 2855     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7550#1874 | 0x1401f7550 | 1874     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7550#2433 | 0x1401f7550 | 2433     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7550#2466 | 0x1401f7550 | 2466     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7550#2499 | 0x1401f7550 | 2499     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7552#122  | 0x1401f7552 | 122      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f7552#2375 | 0x1401f7552 | 2375     | SUBPIECE      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7552#2411 | 0x1401f7552 | 2411     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7552#2444 | 0x1401f7552 | 2444     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7552#2477 | 0x1401f7552 | 2477     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7552#2827 | 0x1401f7552 | 2827     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7558#127  | 0x1401f7558 | 127      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f755c#134  | 0x1401f755c | 134      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7577#145  | 0x1401f7577 | 145      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7577#2871 | 0x1401f7577 | 2871     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7577#2872 | 0x1401f7577 | 2872     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f757a#155  | 0x1401f757a | 155      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f757d#1809 | 0x1401f757d | 1809     | INT_ZEXT      | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f757f#164  | 0x1401f757f | 164      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7583#167  | 0x1401f7583 | 167      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7586#176  | 0x1401f7586 | 176      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f758c#178  | 0x1401f758c | 178      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7593#188  | 0x1401f7593 | 188      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7599#2296 | 0x1401f7599 | 2296     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f759f#201  | 0x1401f759f | 201      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f759f#2878 | 0x1401f759f | 2878     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f759f#2879 | 0x1401f759f | 2879     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75a5#212  | 0x1401f75a5 | 212      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75a5#2880 | 0x1401f75a5 | 2880     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75a8#220  | 0x1401f75a8 | 220      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75ab#230  | 0x1401f75ab | 230      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f75ad#2791 | 0x1401f75ad | 2791     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75ad#2792 | 0x1401f75ad | 2792     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f75b5#239  | 0x1401f75b5 | 239      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75b5#2919 | 0x1401f75b5 | 2919     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75b5#2920 | 0x1401f75b5 | 2920     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75b8#249  | 0x1401f75b8 | 249      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75bb#1846 | 0x1401f75bb | 1846     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75c1#259  | 0x1401f75c1 | 259      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f75c1#2853 | 0x1401f75c1 | 2853     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75c1#2856 | 0x1401f75c1 | 2856     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75c3#260  | 0x1401f75c3 | 260      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75c3#261  | 0x1401f75c3 | 261      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f75d0#268  | 0x1401f75d0 | 268      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75d0#2883 | 0x1401f75d0 | 2883     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75d0#2884 | 0x1401f75d0 | 2884     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75d3#278  | 0x1401f75d3 | 278      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75d9#295  | 0x1401f75d9 | 295      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75d9#296  | 0x1401f75d9 | 296      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f75d9#2885 | 0x1401f75d9 | 2885     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75e2#307  | 0x1401f75e2 | 307      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75e2#309  | 0x1401f75e2 | 309      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f75e8#312  | 0x1401f75e8 | 312      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75e8#2888 | 0x1401f75e8 | 2888     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75e8#2889 | 0x1401f75e8 | 2889     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f75eb#322  | 0x1401f75eb | 322      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75f1#333  | 0x1401f75f1 | 333      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75f7#343  | 0x1401f75f7 | 343      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75fd#360  | 0x1401f75fd | 360      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f75fd#362  | 0x1401f75fd | 362      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7603#364  | 0x1401f7603 | 364      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7607#367  | 0x1401f7607 | 367      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f760a#377  | 0x1401f760a | 377      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f760a#2851 | 0x1401f760a | 2851     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7614#843  | 0x1401f7614 | 843      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7614#844  | 0x1401f7614 | 844      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7614#2850 | 0x1401f7614 | 2850     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f761a#384  | 0x1401f761a | 384      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f761a#1813 | 0x1401f761a | 1813     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f761a#2309 | 0x1401f761a | 2309     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f761d#390  | 0x1401f761d | 390      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f761d#2836 | 0x1401f761d | 2836     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7624#770  | 0x1401f7624 | 770      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f762b#779  | 0x1401f762b | 779      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f762d#780  | 0x1401f762d | 780      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7634#792  | 0x1401f7634 | 792      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7634#793  | 0x1401f7634 | 793      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f763a#796  | 0x1401f763a | 796      | CALL          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f763a#2418 | 0x1401f763a | 2418     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f763a#2451 | 0x1401f763a | 2451     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f763a#2484 | 0x1401f763a | 2484     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f763f#801  | 0x1401f763f | 801      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7642#806  | 0x1401f7642 | 806      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7648#807  | 0x1401f7648 | 807      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f764c#811  | 0x1401f764c | 811      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f764c#2891 | 0x1401f764c | 2891     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7650#820  | 0x1401f7650 | 820      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7650#2793 | 0x1401f7650 | 2793     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7650#2892 | 0x1401f7650 | 2892     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7654#821  | 0x1401f7654 | 821      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f7654#2834 | 0x1401f7654 | 2834     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7659#830  | 0x1401f7659 | 830      | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7659#2416 | 0x1401f7659 | 2416     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7659#2449 | 0x1401f7659 | 2449     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7659#2482 | 0x1401f7659 | 2482     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7659#2890 | 0x1401f7659 | 2890     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f765e#2835 | 0x1401f765e | 2835     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7661#395  | 0x1401f7661 | 395      | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7661#1784 | 0x1401f7661 | 1784     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7661#2432 | 0x1401f7661 | 2432     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7661#2465 | 0x1401f7661 | 2465     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7661#2498 | 0x1401f7661 | 2498     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7665#403  | 0x1401f7665 | 403      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7665#2893 | 0x1401f7665 | 2893     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7665#2894 | 0x1401f7665 | 2894     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f766c#408  | 0x1401f766c | 408      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f766f#2314 | 0x1401f766f | 2314     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7674#436  | 0x1401f7674 | 436      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f7674#2419 | 0x1401f7674 | 2419     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7674#2452 | 0x1401f7674 | 2452     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7674#2485 | 0x1401f7674 | 2485     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7681#445  | 0x1401f7681 | 445      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7681#2895 | 0x1401f7681 | 2895     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7681#2896 | 0x1401f7681 | 2896     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7687#455  | 0x1401f7687 | 455      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f7687#2420 | 0x1401f7687 | 2420     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7687#2453 | 0x1401f7687 | 2453     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7687#2486 | 0x1401f7687 | 2486     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7690#463  | 0x1401f7690 | 463      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7693#468  | 0x1401f7693 | 468      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7699#474  | 0x1401f7699 | 474      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7699#2897 | 0x1401f7699 | 2897     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7699#2898 | 0x1401f7699 | 2898     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f769c#484  | 0x1401f769c | 484      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f769f#2349 | 0x1401f769f | 2349     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76a3#495  | 0x1401f76a3 | 495      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76aa#504  | 0x1401f76aa | 504      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f76aa#2829 | 0x1401f76aa | 2829     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76ac#506  | 0x1401f76ac | 506      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76ac#2794 | 0x1401f76ac | 2794     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f76ac#2899 | 0x1401f76ac | 2899     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76b3#519  | 0x1401f76b3 | 519      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76b3#2795 | 0x1401f76b3 | 2795     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76b3#2900 | 0x1401f76b3 | 2900     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76b3#2901 | 0x1401f76b3 | 2901     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76b3#2902 | 0x1401f76b3 | 2902     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76bb#536  | 0x1401f76bb | 536      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76bb#538  | 0x1401f76bb | 538      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f76bb#2837 | 0x1401f76bb | 2837     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76c1#541  | 0x1401f76c1 | 541      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76c5#548  | 0x1401f76c5 | 548      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f76c5#2828 | 0x1401f76c5 | 2828     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76ca#1672 | 0x1401f76ca | 1672     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76ca#1769 | 0x1401f76ca | 1769     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76cd#552  | 0x1401f76cd | 552      | CALL          | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f76cd#2426 | 0x1401f76cd | 2426     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76cd#2459 | 0x1401f76cd | 2459     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76cd#2492 | 0x1401f76cd | 2492     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76d6#2796 | 0x1401f76d6 | 2796     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76d6#2797 | 0x1401f76d6 | 2797     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f76de#2798 | 0x1401f76de | 2798     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f76e6#570  | 0x1401f76e6 | 570      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76e6#2917 | 0x1401f76e6 | 2917     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76e6#2918 | 0x1401f76e6 | 2918     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76e9#580  | 0x1401f76e9 | 580      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76ec#1848 | 0x1401f76ec | 1848     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76f2#590  | 0x1401f76f2 | 590      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f76f2#2854 | 0x1401f76f2 | 2854     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76f2#2857 | 0x1401f76f2 | 2857     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f76f7#852  | 0x1401f76f7 | 852      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f76fe#2799 | 0x1401f76fe | 2799     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7707#878  | 0x1401f7707 | 878      | CALL          | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7707#2414 | 0x1401f7707 | 2414     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7707#2447 | 0x1401f7707 | 2447     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7707#2480 | 0x1401f7707 | 2480     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7714#887  | 0x1401f7714 | 887      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7714#2886 | 0x1401f7714 | 2886     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7714#2887 | 0x1401f7714 | 2887     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7717#897  | 0x1401f7717 | 897      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f771a#1850 | 0x1401f771a | 1850     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7720#907  | 0x1401f7720 | 907      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f7720#2858 | 0x1401f7720 | 2858     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7728#911  | 0x1401f7728 | 911      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7728#2881 | 0x1401f7728 | 2881     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7728#2882 | 0x1401f7728 | 2882     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f772b#921  | 0x1401f772b | 921      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f772e#1852 | 0x1401f772e | 1852     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7734#931  | 0x1401f7734 | 931      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f773c#2362 | 0x1401f773c | 2362     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f773c#2363 | 0x1401f773c | 2363     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f773c#2800 | 0x1401f773c | 2800     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7741#940  | 0x1401f7741 | 940      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7741#2801 | 0x1401f7741 | 2801     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7746#943  | 0x1401f7746 | 943      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7746#2802 | 0x1401f7746 | 2802     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f774f#945  | 0x1401f774f | 945      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f774f#2844 | 0x1401f774f | 2844     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f774f#2877 | 0x1401f774f | 2877     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7754#627  | 0x1401f7754 | 627      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7754#1791 | 0x1401f7754 | 1791     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7754#1800 | 0x1401f7754 | 1800     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7754#2435 | 0x1401f7754 | 2435     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7754#2468 | 0x1401f7754 | 2468     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7754#2501 | 0x1401f7754 | 2501     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7757#632  | 0x1401f7757 | 632      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7761#638  | 0x1401f7761 | 638      | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7761#2907 | 0x1401f7761 | 2907     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7761#2908 | 0x1401f7761 | 2908     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7764#648  | 0x1401f7764 | 648      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7767#2351 | 0x1401f7767 | 2351     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f776b#659  | 0x1401f776b | 659      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f776b#2909 | 0x1401f776b | 2909     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7772#668  | 0x1401f7772 | 668      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7772#2830 | 0x1401f7772 | 2830     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7772#2845 | 0x1401f7772 | 2845     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7774#670  | 0x1401f7774 | 670      | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7774#2803 | 0x1401f7774 | 2803     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7774#2910 | 0x1401f7774 | 2910     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f777b#683  | 0x1401f777b | 683      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f777b#2804 | 0x1401f777b | 2804     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f777b#2911 | 0x1401f777b | 2911     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f777b#2912 | 0x1401f777b | 2912     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f777b#2913 | 0x1401f777b | 2913     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7783#700  | 0x1401f7783 | 700      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7783#702  | 0x1401f7783 | 702      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7783#2824 | 0x1401f7783 | 2824     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7783#2849 | 0x1401f7783 | 2849     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f779d#2367 | 0x1401f779d | 2367     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f779d#2368 | 0x1401f779d | 2368     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f779d#2805 | 0x1401f779d | 2805     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f77a2#954  | 0x1401f77a2 | 954      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f77a2#2806 | 0x1401f77a2 | 2806     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f77a7#957  | 0x1401f77a7 | 957      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f77a7#2807 | 0x1401f77a7 | 2807     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f77af#968  | 0x1401f77af | 968      | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77af#970  | 0x1401f77af | 970      | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f77b1#973  | 0x1401f77b1 | 973      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f77b1#2808 | 0x1401f77b1 | 2808     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f77b6#976  | 0x1401f77b6 | 976      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f77b6#2809 | 0x1401f77b6 | 2809     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f77bf#2354 | 0x1401f77bf | 2354     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77cc#985  | 0x1401f77cc | 985      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f77cc#2413 | 0x1401f77cc | 2413     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77cc#2446 | 0x1401f77cc | 2446     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77cc#2479 | 0x1401f77cc | 2479     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77d1#987  | 0x1401f77d1 | 987      | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77d1#989  | 0x1401f77d1 | 989      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f77d1#2875 | 0x1401f77d1 | 2875     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f77d1#2876 | 0x1401f77d1 | 2876     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f77d6#990  | 0x1401f77d6 | 990      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f77de#994  | 0x1401f77de | 994      | INT_OR        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77e7#1003 | 0x1401f77e7 | 1003     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77ea#1014 | 0x1401f77ea | 1014     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f77ea#1015 | 0x1401f77ea | 1015     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f77ee#1016 | 0x1401f77ee | 1016     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77ee#1017 | 0x1401f77ee | 1017     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77ee#1827 | 0x1401f77ee | 1827     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77f6#1023 | 0x1401f77f6 | 1023     | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f77f9#1029 | 0x1401f77f9 | 1029     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7800#1033 | 0x1401f7800 | 1033     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7807#1042 | 0x1401f7807 | 1042     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7809#1043 | 0x1401f7809 | 1043     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7810#1055 | 0x1401f7810 | 1055     | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7810#1056 | 0x1401f7810 | 1056     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7819#1060 | 0x1401f7819 | 1060     | CALL          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7819#2412 | 0x1401f7819 | 2412     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7819#2445 | 0x1401f7819 | 2445     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7819#2478 | 0x1401f7819 | 2478     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f781e#1065 | 0x1401f781e | 1065     | INT_EQUAL     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7821#1070 | 0x1401f7821 | 1070     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7823#1071 | 0x1401f7823 | 1071     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7827#1075 | 0x1401f7827 | 1075     | INT_AND       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7827#2873 | 0x1401f7827 | 2873     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f782b#1084 | 0x1401f782b | 1084     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f782b#2810 | 0x1401f782b | 2810     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f782b#2874 | 0x1401f782b | 2874     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f782f#1085 | 0x1401f782f | 1085     | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f782f#2842 | 0x1401f782f | 2842     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7831#1785 | 0x1401f7831 | 1785     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7831#1812 | 0x1401f7831 | 1812     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7831#1830 | 0x1401f7831 | 1830     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7831#2431 | 0x1401f7831 | 2431     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7831#2464 | 0x1401f7831 | 2464     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7831#2497 | 0x1401f7831 | 2497     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7836#592  | 0x1401f7836 | 592      | CALLOTHER     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7836#593  | 0x1401f7836 | 593      | CALLIND       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7836#2421 | 0x1401f7836 | 2421     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7836#2454 | 0x1401f7836 | 2454     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7836#2487 | 0x1401f7836 | 2487     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7836#2811 | 0x1401f7836 | 2811     | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7836#2838 | 0x1401f7836 | 2838     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7836#2903 | 0x1401f7836 | 2903     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7838#594  | 0x1401f7838 | 594      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7838#595  | 0x1401f7838 | 595      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7838#596  | 0x1401f7838 | 596      | CALL          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7838#1789 | 0x1401f7838 | 1789     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#1804 | 0x1401f7838 | 1804     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#1814 | 0x1401f7838 | 1814     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#1828 | 0x1401f7838 | 1828     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2422 | 0x1401f7838 | 2422     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2439 | 0x1401f7838 | 2439     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2455 | 0x1401f7838 | 2455     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2472 | 0x1401f7838 | 2472     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2488 | 0x1401f7838 | 2488     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2505 | 0x1401f7838 | 2505     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7838#2904 | 0x1401f7838 | 2904     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7838#2905 | 0x1401f7838 | 2905     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f783d#2841 | 0x1401f783d | 2841     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7840#599  | 0x1401f7840 | 599      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7840#1790 | 0x1401f7840 | 1790     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#1799 | 0x1401f7840 | 1799     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#1815 | 0x1401f7840 | 1815     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#1831 | 0x1401f7840 | 1831     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#1925 | 0x1401f7840 | 1925     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#2434 | 0x1401f7840 | 2434     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#2467 | 0x1401f7840 | 2467     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7840#2500 | 0x1401f7840 | 2500     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7844#602  | 0x1401f7844 | 602      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7844#2812 | 0x1401f7844 | 2812     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7849#605  | 0x1401f7849 | 605      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7849#2813 | 0x1401f7849 | 2813     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f784e#2352 | 0x1401f784e | 2352     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f785b#612  | 0x1401f785b | 612      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f785b#613  | 0x1401f785b | 613      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f785b#614  | 0x1401f785b | 614      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401f785b#2423 | 0x1401f785b | 2423     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f785b#2456 | 0x1401f785b | 2456     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f785b#2489 | 0x1401f785b | 2489     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f785b#2906 | 0x1401f785b | 2906     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7860#618  | 0x1401f7860 | 618      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7860#2814 | 0x1401f7860 | 2814     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7869#622  | 0x1401f7869 | 622      | BRANCH        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f7869#2840 | 0x1401f7869 | 2840     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7869#2843 | 0x1401f7869 | 2843     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7871#2372 | 0x1401f7871 | 2372     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7871#2373 | 0x1401f7871 | 2373     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7871#2815 | 0x1401f7871 | 2815     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7876#1094 | 0x1401f7876 | 1094     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7876#2816 | 0x1401f7876 | 2816     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f787b#1097 | 0x1401f787b | 1097     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f787b#2817 | 0x1401f787b | 2817     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f7884#1099 | 0x1401f7884 | 1099     | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f7884#2863 | 0x1401f7884 | 2863     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f788d#1107 | 0x1401f788d | 1107     | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7890#1112 | 0x1401f7890 | 1112     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f7896#1118 | 0x1401f7896 | 1118     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f7896#2864 | 0x1401f7896 | 2864     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7896#2865 | 0x1401f7896 | 2865     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f7899#1128 | 0x1401f7899 | 1128     | INT_SRIGHT    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f789c#2353 | 0x1401f789c | 2353     | INT_MULT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78a0#1139 | 0x1401f78a0 | 1139     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78a0#2866 | 0x1401f78a0 | 2866     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78a7#1148 | 0x1401f78a7 | 1148     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78a7#2833 | 0x1401f78a7 | 2833     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78a7#2848 | 0x1401f78a7 | 2848     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78a9#1150 | 0x1401f78a9 | 1150     | LOAD          | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78a9#2818 | 0x1401f78a9 | 2818     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f78a9#2867 | 0x1401f78a9 | 2867     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78b0#1163 | 0x1401f78b0 | 1163     | INT_ADD       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78b0#2819 | 0x1401f78b0 | 2819     | INT_SUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78b0#2868 | 0x1401f78b0 | 2868     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78b0#2869 | 0x1401f78b0 | 2869     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78b0#2870 | 0x1401f78b0 | 2870     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78b8#1180 | 0x1401f78b8 | 1180     | INT_LESS      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78b8#1182 | 0x1401f78b8 | 1182     | CBRANCH       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78b8#2831 | 0x1401f78b8 | 2831     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78b8#2846 | 0x1401f78b8 | 2846     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78c0#761  | 0x1401f78c0 | 761      | PTRSUB        | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c0#1803 | 0x1401f78c0 | 1803     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c0#2438 | 0x1401f78c0 | 2438     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c0#2471 | 0x1401f78c0 | 2471     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c0#2504 | 0x1401f78c0 | 2504     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c0#2914 | 0x1401f78c0 | 2914     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78c5#762  | 0x1401f78c5 | 762      | CALLOTHER     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c5#763  | 0x1401f78c5 | 763      | CALLIND       | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78c5#1210 | 0x1401f78c5 | 1210     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f78c5#1710 | 0x1401f78c5 | 1710     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c5#2424 | 0x1401f78c5 | 2424     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c5#2457 | 0x1401f78c5 | 2457     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c5#2490 | 0x1401f78c5 | 2490     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78c5#2832 | 0x1401f78c5 | 2832     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78c5#2847 | 0x1401f78c5 | 2847     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78c5#2915 | 0x1401f78c5 | 2915     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78cd#713  | 0x1401f78cd | 713      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f78cd#714  | 0x1401f78cd | 714      | STORE         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401f78cd#715  | 0x1401f78cd | 715      | CALL          | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78cd#1721 | 0x1401f78cd | 1721     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f78cd#1802 | 0x1401f78cd | 1802     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f78cd#2425 | 0x1401f78cd | 2425     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78cd#2437 | 0x1401f78cd | 2437     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f78cd#2458 | 0x1401f78cd | 2458     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78cd#2470 | 0x1401f78cd | 2470     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f78cd#2491 | 0x1401f78cd | 2491     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78cd#2503 | 0x1401f78cd | 2503     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f78cd#2916 | 0x1401f78cd | 2916     | CAST          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78d2#716  | 0x1401f78d2 | 716      | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78d2#2825 | 0x1401f78d2 | 2825     | COPY          | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f78e5#760  | 0x1401f78e5 | 760      | RETURN        | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78e5#2826 | 0x1401f78e5 | 2826     | RETURN        | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f78e6#824  | 0x1401f78e6 | 824      | CALL          | true    | member           | [object Object]                                                                 |                 |
| 0x1401f78e6#826  | 0x1401f78e6 | 826      | RETURN        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f78e6#2417 | 0x1401f78e6 | 2417     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78e6#2450 | 0x1401f78e6 | 2450     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78e6#2483 | 0x1401f78e6 | 2483     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78ec#847  | 0x1401f78ec | 847      | CALL          | true    | member           | [object Object]                                                                 |                 |
| 0x1401f78ec#849  | 0x1401f78ec | 849      | RETURN        | true    | member           | [object Object]                                                                 |                 |
| 0x1401f78ec#2415 | 0x1401f78ec | 2415     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78ec#2448 | 0x1401f78ec | 2448     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f78ec#2481 | 0x1401f78ec | 2481     | INDIRECT      | true    | member           | [object Object],[object Object]                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401f750d#2357 | 0x1401f751b#2409 | 0           |
| 0x1401f750d#2358 | 0x1401f751b#2442 | 0           |
| 0x1401f7512#54   | 0x1401f751b#2475 | 0           |
| 0x1401f751b#58   | 0x1401f751b#2860 | 0           |
| 0x1401f751b#2860 | 0x1401f7524#2790 | 0           |
| 0x1401f751b#2860 | 0x1401f753a#81   | 1           |
| 0x1401f751b#2860 | 0x1401f753a#2410 | 0           |
| 0x1401f751b#2442 | 0x1401f753a#2443 | 0           |
| 0x1401f753a#2859 | 0x1401f753a#2476 | 0           |
| 0x1401f7524#2790 | 0x1401f753a#2859 | 0           |
| 0x1401f7547#2861 | 0x1401f7547#90   | 0           |
| 0x1401f7547#2862 | 0x1401f7547#90   | 1           |
| 0x1401f7524#2790 | 0x1401f7547#2861 | 0           |
| 0x1401f753a#2410 | 0x1401f7547#2862 | 0           |
| 0x1401f7547#90   | 0x1401f754a#100  | 0           |
| 0x1401f754a#100  | 0x1401f754d#1844 | 0           |
| 0x1401f753a#2410 | 0x1401f754d#2852 | 0           |
| 0x1401f7524#2790 | 0x1401f754d#2855 | 0           |
| 0x1401f754d#1844 | 0x1401f7550#1874 | 0           |
| 0x1401f75bb#1846 | 0x1401f7550#1874 | 1           |
| 0x1401f76ec#1848 | 0x1401f7550#1874 | 2           |
| 0x1401f771a#1850 | 0x1401f7550#1874 | 3           |
| 0x1401f772e#1852 | 0x1401f7550#1874 | 4           |
| 0x1401f754d#2852 | 0x1401f7550#2433 | 0           |
| 0x1401f75c1#2853 | 0x1401f7550#2433 | 1           |
| 0x1401f76f2#2854 | 0x1401f7550#2433 | 2           |
| 0x1401f7707#2414 | 0x1401f7550#2433 | 3           |
| 0x1401f7552#2411 | 0x1401f7550#2433 | 4           |
| 0x1401f754d#2855 | 0x1401f7550#2466 | 0           |
| 0x1401f75c1#2856 | 0x1401f7550#2466 | 1           |
| 0x1401f76f2#2857 | 0x1401f7550#2466 | 2           |
| 0x1401f7720#2858 | 0x1401f7550#2466 | 3           |
| 0x1401f7552#2444 | 0x1401f7550#2466 | 4           |
| 0x1401f753a#2476 | 0x1401f7550#2499 | 0           |
| 0x1401f7552#2477 | 0x1401f7550#2499 | 1           |
| 0x1401f76de#2798 | 0x1401f7550#2499 | 2           |
| 0x1401f7707#2480 | 0x1401f7550#2499 | 3           |
| 0x1401f7552#2477 | 0x1401f7550#2499 | 4           |
| 0x1401f7550#2433 | 0x1401f7552#122  | 2           |
| 0x1401f7552#2375 | 0x1401f7552#122  | 3           |
| 0x1401f7550#1874 | 0x1401f7552#2375 | 0           |
| 0x1401f7550#2433 | 0x1401f7552#2411 | 0           |
| 0x1401f7550#2466 | 0x1401f7552#2444 | 0           |
| 0x1401f7550#2499 | 0x1401f7552#2477 | 0           |
| 0x1401f7552#2411 | 0x1401f7552#2827 | 0           |
| 0x1401f7552#122  | 0x1401f7558#127  | 0           |
| 0x1401f7558#127  | 0x1401f755c#134  | 1           |
| 0x1401f7577#2871 | 0x1401f7577#145  | 0           |
| 0x1401f7577#2872 | 0x1401f7577#145  | 1           |
| 0x1401f7552#2444 | 0x1401f7577#2871 | 0           |
| 0x1401f7552#2411 | 0x1401f7577#2872 | 0           |
| 0x1401f7577#145  | 0x1401f757a#155  | 0           |
| 0x1401f7552#122  | 0x1401f757d#1809 | 0           |
| 0x1401f757a#155  | 0x1401f757f#164  | 0           |
| 0x1401f757d#1809 | 0x1401f7583#167  | 0           |
| 0x1401f757f#164  | 0x1401f7583#167  | 1           |
| 0x1401f7583#167  | 0x1401f7586#176  | 1           |
| 0x1401f757a#155  | 0x1401f758c#178  | 1           |
| 0x1401f758c#178  | 0x1401f7593#188  | 1           |
| 0x1401f757a#155  | 0x1401f7599#2296 | 0           |
| 0x1401f759f#2878 | 0x1401f759f#201  | 0           |
| 0x1401f759f#2879 | 0x1401f759f#201  | 1           |
| 0x1401f7552#2444 | 0x1401f759f#2878 | 0           |
| 0x1401f7552#2411 | 0x1401f759f#2879 | 0           |
| 0x1401f75a5#2880 | 0x1401f75a5#212  | 0           |
| 0x1401f759f#201  | 0x1401f75a5#2880 | 0           |
| 0x1401f7599#2296 | 0x1401f75a8#220  | 0           |
| 0x1401f75a5#212  | 0x1401f75a8#220  | 1           |
| 0x1401f75a8#220  | 0x1401f75ab#230  | 1           |
| 0x1401f757a#155  | 0x1401f75ad#2791 | 0           |
| 0x1401f7552#2411 | 0x1401f75ad#2792 | 0           |
| 0x1401f75ad#2791 | 0x1401f75ad#2792 | 1           |
| 0x1401f75b5#2919 | 0x1401f75b5#239  | 0           |
| 0x1401f75b5#2920 | 0x1401f75b5#239  | 1           |
| 0x1401f75ad#2792 | 0x1401f75b5#2919 | 0           |
| 0x1401f7552#2411 | 0x1401f75b5#2920 | 0           |
| 0x1401f75b5#239  | 0x1401f75b8#249  | 0           |
| 0x1401f75b8#249  | 0x1401f75bb#1846 | 0           |
| 0x1401f7552#2411 | 0x1401f75c1#2853 | 0           |
| 0x1401f75ad#2792 | 0x1401f75c1#2856 | 0           |
| 0x1401f75a5#212  | 0x1401f75c3#260  | 0           |
| 0x1401f7599#2296 | 0x1401f75c3#260  | 1           |
| 0x1401f75c3#260  | 0x1401f75c3#261  | 1           |
| 0x1401f75d0#2883 | 0x1401f75d0#268  | 0           |
| 0x1401f75d0#2884 | 0x1401f75d0#268  | 1           |
| 0x1401f7552#2477 | 0x1401f75d0#2883 | 0           |
| 0x1401f7552#2411 | 0x1401f75d0#2884 | 0           |
| 0x1401f75d0#268  | 0x1401f75d3#278  | 0           |
| 0x1401f75d9#2885 | 0x1401f75d9#295  | 0           |
| 0x1401f7599#2296 | 0x1401f75d9#295  | 1           |
| 0x1401f75d9#295  | 0x1401f75d9#296  | 1           |
| 0x1401f75d3#278  | 0x1401f75d9#2885 | 0           |
| 0x1401f7599#2296 | 0x1401f75e2#307  | 1           |
| 0x1401f75e2#307  | 0x1401f75e2#309  | 1           |
| 0x1401f75e8#2888 | 0x1401f75e8#312  | 0           |
| 0x1401f75e8#2889 | 0x1401f75e8#312  | 1           |
| 0x1401f7552#2477 | 0x1401f75e8#2888 | 0           |
| 0x1401f7552#2411 | 0x1401f75e8#2889 | 0           |
| 0x1401f75e8#312  | 0x1401f75eb#322  | 0           |
| 0x1401f75eb#322  | 0x1401f75f1#333  | 0           |
| 0x1401f75f1#333  | 0x1401f75f7#343  | 1           |
| 0x1401f75f7#343  | 0x1401f75fd#360  | 0           |
| 0x1401f75eb#322  | 0x1401f75fd#360  | 1           |
| 0x1401f75fd#360  | 0x1401f75fd#362  | 1           |
| 0x1401f75f1#333  | 0x1401f7603#364  | 0           |
| 0x1401f75eb#322  | 0x1401f7603#364  | 1           |
| 0x1401f7599#2296 | 0x1401f7607#367  | 0           |
| 0x1401f7603#364  | 0x1401f7607#367  | 1           |
| 0x1401f7607#367  | 0x1401f760a#377  | 1           |
| 0x1401f7599#2296 | 0x1401f760a#2851 | 0           |
| 0x1401f7603#364  | 0x1401f7614#843  | 1           |
| 0x1401f7614#843  | 0x1401f7614#844  | 1           |
| 0x1401f7603#364  | 0x1401f7614#2850 | 0           |
| 0x1401f761a#2309 | 0x1401f761a#384  | 0           |
| 0x1401f7614#2850 | 0x1401f761a#1813 | 0           |
| 0x1401f760a#2851 | 0x1401f761a#1813 | 1           |
| 0x1401f761a#1813 | 0x1401f761a#2309 | 0           |
| 0x1401f761a#384  | 0x1401f761d#390  | 1           |
| 0x1401f7507#1924 | 0x1401f761d#2836 | 0           |
| 0x1401f761a#2309 | 0x1401f7624#770  | 0           |
| 0x1401f7624#770  | 0x1401f762b#779  | 1           |
| 0x1401f761a#2309 | 0x1401f762d#780  | 0           |
| 0x1401f762d#780  | 0x1401f7634#792  | 0           |
| 0x1401f761a#2309 | 0x1401f7634#792  | 1           |
| 0x1401f7634#792  | 0x1401f7634#793  | 1           |
| 0x1401f7552#2411 | 0x1401f763a#2418 | 0           |
| 0x1401f7552#2444 | 0x1401f763a#2451 | 0           |
| 0x1401f7552#2477 | 0x1401f763a#2484 | 0           |
| 0x1401f763a#796  | 0x1401f763f#801  | 0           |
| 0x1401f763f#801  | 0x1401f7642#806  | 1           |
| 0x1401f763a#796  | 0x1401f7648#807  | 0           |
| 0x1401f7648#807  | 0x1401f764c#811  | 0           |
| 0x1401f764c#811  | 0x1401f764c#2891 | 0           |
| 0x1401f7650#2892 | 0x1401f7650#820  | 1           |
| 0x1401f763a#796  | 0x1401f7650#820  | 2           |
| 0x1401f764c#2891 | 0x1401f7650#2793 | 0           |
| 0x1401f7650#2793 | 0x1401f7650#2892 | 0           |
| 0x1401f764c#2891 | 0x1401f7654#2834 | 0           |
| 0x1401f761a#2309 | 0x1401f7659#830  | 1           |
| 0x1401f7552#2411 | 0x1401f7659#2416 | 0           |
| 0x1401f7552#2444 | 0x1401f7659#2449 | 0           |
| 0x1401f7552#2477 | 0x1401f7659#2482 | 0           |
| 0x1401f7659#830  | 0x1401f7659#2890 | 0           |
| 0x1401f7659#2890 | 0x1401f765e#2835 | 0           |
| 0x1401f759f#201  | 0x1401f7661#395  | 0           |
| 0x1401f7654#2834 | 0x1401f7661#1784 | 0           |
| 0x1401f765e#2835 | 0x1401f7661#1784 | 1           |
| 0x1401f761d#2836 | 0x1401f7661#1784 | 2           |
| 0x1401f763a#2418 | 0x1401f7661#2432 | 0           |
| 0x1401f7659#2416 | 0x1401f7661#2432 | 1           |
| 0x1401f7552#2411 | 0x1401f7661#2432 | 2           |
| 0x1401f763a#2451 | 0x1401f7661#2465 | 0           |
| 0x1401f7659#2449 | 0x1401f7661#2465 | 1           |
| 0x1401f7552#2444 | 0x1401f7661#2465 | 2           |
| 0x1401f763a#2484 | 0x1401f7661#2498 | 0           |
| 0x1401f7659#2482 | 0x1401f7661#2498 | 1           |
| 0x1401f7552#2477 | 0x1401f7661#2498 | 2           |
| 0x1401f7665#2893 | 0x1401f7665#403  | 0           |
| 0x1401f7661#395  | 0x1401f7665#403  | 1           |
| 0x1401f7661#1784 | 0x1401f7665#2893 | 0           |
| 0x1401f7665#403  | 0x1401f7665#2894 | 0           |
| 0x1401f7599#2296 | 0x1401f766c#408  | 0           |
| 0x1401f75a5#212  | 0x1401f766c#408  | 1           |
| 0x1401f766c#408  | 0x1401f766f#2314 | 0           |
| 0x1401f7665#2894 | 0x1401f7674#436  | 1           |
| 0x1401f766f#2314 | 0x1401f7674#436  | 3           |
| 0x1401f7661#2432 | 0x1401f7674#2419 | 0           |
| 0x1401f7661#2465 | 0x1401f7674#2452 | 0           |
| 0x1401f7661#2498 | 0x1401f7674#2485 | 0           |
| 0x1401f7681#2895 | 0x1401f7681#445  | 0           |
| 0x1401f7681#2896 | 0x1401f7681#445  | 1           |
| 0x1401f7674#2452 | 0x1401f7681#2895 | 0           |
| 0x1401f7674#2419 | 0x1401f7681#2896 | 0           |
| 0x1401f7661#1784 | 0x1401f7687#455  | 1           |
| 0x1401f7674#2419 | 0x1401f7687#455  | 2           |
| 0x1401f7681#445  | 0x1401f7687#455  | 3           |
| 0x1401f7674#2419 | 0x1401f7687#2420 | 0           |
| 0x1401f7674#2452 | 0x1401f7687#2453 | 0           |
| 0x1401f7674#2485 | 0x1401f7687#2486 | 0           |
| 0x1401f7687#2420 | 0x1401f7690#463  | 0           |
| 0x1401f7690#463  | 0x1401f7693#468  | 1           |
| 0x1401f7699#2897 | 0x1401f7699#474  | 0           |
| 0x1401f7699#2898 | 0x1401f7699#474  | 1           |
| 0x1401f7687#2486 | 0x1401f7699#2897 | 0           |
| 0x1401f7687#2420 | 0x1401f7699#2898 | 0           |
| 0x1401f7699#474  | 0x1401f769c#484  | 0           |
| 0x1401f769c#484  | 0x1401f769f#2349 | 0           |
| 0x1401f769f#2349 | 0x1401f76a3#495  | 1           |
| 0x1401f76a3#495  | 0x1401f76aa#504  | 1           |
| 0x1401f7687#2420 | 0x1401f76aa#2829 | 0           |
| 0x1401f76ac#2899 | 0x1401f76ac#506  | 1           |
| 0x1401f7687#2420 | 0x1401f76ac#2794 | 0           |
| 0x1401f76ac#2794 | 0x1401f76ac#2899 | 0           |
| 0x1401f76b3#2901 | 0x1401f76b3#519  | 0           |
| 0x1401f76b3#2795 | 0x1401f76b3#519  | 1           |
| 0x1401f76b3#2900 | 0x1401f76b3#2795 | 1           |
| 0x1401f76ac#506  | 0x1401f76b3#2900 | 0           |
| 0x1401f7687#2420 | 0x1401f76b3#2901 | 0           |
| 0x1401f76b3#519  | 0x1401f76b3#2902 | 0           |
| 0x1401f76b3#2902 | 0x1401f76bb#536  | 1           |
| 0x1401f76bb#536  | 0x1401f76bb#538  | 1           |
| 0x1401f7661#1784 | 0x1401f76bb#2837 | 0           |
| 0x1401f769f#2349 | 0x1401f76c1#541  | 0           |
| 0x1401f76ac#506  | 0x1401f76c5#2828 | 0           |
| 0x1401f76c5#2828 | 0x1401f76ca#1672 | 0           |
| 0x1401f76aa#2829 | 0x1401f76ca#1672 | 1           |
| 0x1401f76c1#541  | 0x1401f76ca#1769 | 0           |
| 0x1401f769f#2349 | 0x1401f76ca#1769 | 1           |
| 0x1401f76ca#1672 | 0x1401f76cd#552  | 1           |
| 0x1401f76ca#1769 | 0x1401f76cd#552  | 2           |
| 0x1401f7687#2420 | 0x1401f76cd#2426 | 0           |
| 0x1401f7687#2453 | 0x1401f76cd#2459 | 0           |
| 0x1401f7687#2486 | 0x1401f76cd#2492 | 0           |
| 0x1401f757a#155  | 0x1401f76d6#2796 | 0           |
| 0x1401f7661#1784 | 0x1401f76d6#2797 | 0           |
| 0x1401f76d6#2796 | 0x1401f76d6#2797 | 1           |
| 0x1401f7661#1784 | 0x1401f76de#2798 | 0           |
| 0x1401f761a#1813 | 0x1401f76de#2798 | 1           |
| 0x1401f76e6#2917 | 0x1401f76e6#570  | 0           |
| 0x1401f76e6#2918 | 0x1401f76e6#570  | 1           |
| 0x1401f76d6#2797 | 0x1401f76e6#2917 | 0           |
| 0x1401f7661#1784 | 0x1401f76e6#2918 | 0           |
| 0x1401f76e6#570  | 0x1401f76e9#580  | 0           |
| 0x1401f76e9#580  | 0x1401f76ec#1848 | 0           |
| 0x1401f7661#1784 | 0x1401f76f2#2854 | 0           |
| 0x1401f76d6#2797 | 0x1401f76f2#2857 | 0           |
| 0x1401f7599#2296 | 0x1401f76f7#852  | 0           |
| 0x1401f75a5#212  | 0x1401f76f7#852  | 1           |
| 0x1401f7552#2444 | 0x1401f76fe#2799 | 0           |
| 0x1401f76f7#852  | 0x1401f76fe#2799 | 1           |
| 0x1401f7552#2444 | 0x1401f7707#878  | 1           |
| 0x1401f7552#2411 | 0x1401f7707#2414 | 0           |
| 0x1401f7552#2444 | 0x1401f7707#2447 | 0           |
| 0x1401f7552#2477 | 0x1401f7707#2480 | 0           |
| 0x1401f7714#2886 | 0x1401f7714#887  | 0           |
| 0x1401f7714#2887 | 0x1401f7714#887  | 1           |
| 0x1401f76fe#2799 | 0x1401f7714#2886 | 0           |
| 0x1401f7707#2414 | 0x1401f7714#2887 | 0           |
| 0x1401f7714#887  | 0x1401f7717#897  | 0           |
| 0x1401f7717#897  | 0x1401f771a#1850 | 0           |
| 0x1401f76fe#2799 | 0x1401f7720#2858 | 0           |
| 0x1401f7728#2881 | 0x1401f7728#911  | 0           |
| 0x1401f7728#2882 | 0x1401f7728#911  | 1           |
| 0x1401f7552#2444 | 0x1401f7728#2881 | 0           |
| 0x1401f7552#2411 | 0x1401f7728#2882 | 0           |
| 0x1401f7728#911  | 0x1401f772b#921  | 0           |
| 0x1401f772b#921  | 0x1401f772e#1852 | 0           |
| 0x1401f773c#2800 | 0x1401f773c#2363 | 1           |
| 0x1401f7741#2801 | 0x1401f7741#940  | 1           |
| 0x1401f7746#2802 | 0x1401f7746#943  | 1           |
| 0x1401f774f#2877 | 0x1401f774f#945  | 1           |
| 0x1401f7500#2782 | 0x1401f774f#2844 | 0           |
| 0x1401f7754#1791 | 0x1401f7754#627  | 0           |
| 0x1401f7869#2840 | 0x1401f7754#1791 | 0           |
| 0x1401f7552#2827 | 0x1401f7754#1791 | 1           |
| 0x1401f7552#2827 | 0x1401f7754#1791 | 2           |
| 0x1401f7869#2843 | 0x1401f7754#1800 | 0           |
| 0x1401f774f#2844 | 0x1401f7754#1800 | 1           |
| 0x1401f7500#2788 | 0x1401f7754#1800 | 2           |
| 0x1401f785b#2423 | 0x1401f7754#2435 | 0           |
| 0x1401f7552#2411 | 0x1401f7754#2435 | 1           |
| 0x1401f77cc#2413 | 0x1401f7754#2435 | 2           |
| 0x1401f785b#2456 | 0x1401f7754#2468 | 0           |
| 0x1401f7552#2444 | 0x1401f7754#2468 | 1           |
| 0x1401f77cc#2446 | 0x1401f7754#2468 | 2           |
| 0x1401f785b#2489 | 0x1401f7754#2501 | 0           |
| 0x1401f7552#2477 | 0x1401f7754#2501 | 1           |
| 0x1401f77cc#2479 | 0x1401f7754#2501 | 2           |
| 0x1401f7754#627  | 0x1401f7757#632  | 1           |
| 0x1401f7761#2907 | 0x1401f7761#638  | 0           |
| 0x1401f7761#2908 | 0x1401f7761#638  | 1           |
| 0x1401f7754#2501 | 0x1401f7761#2907 | 0           |
| 0x1401f7754#1791 | 0x1401f7761#2908 | 0           |
| 0x1401f7761#638  | 0x1401f7764#648  | 0           |
| 0x1401f7764#648  | 0x1401f7767#2351 | 0           |
| 0x1401f776b#2909 | 0x1401f776b#659  | 0           |
| 0x1401f7767#2351 | 0x1401f776b#2909 | 0           |
| 0x1401f776b#659  | 0x1401f7772#668  | 1           |
| 0x1401f7754#1791 | 0x1401f7772#2830 | 0           |
| 0x1401f7754#1800 | 0x1401f7772#2845 | 0           |
| 0x1401f7774#2910 | 0x1401f7774#670  | 1           |
| 0x1401f7754#1791 | 0x1401f7774#2803 | 0           |
| 0x1401f7774#2803 | 0x1401f7774#2910 | 0           |
| 0x1401f777b#2912 | 0x1401f777b#683  | 0           |
| 0x1401f777b#2804 | 0x1401f777b#683  | 1           |
| 0x1401f777b#2911 | 0x1401f777b#2804 | 1           |
| 0x1401f7774#670  | 0x1401f777b#2911 | 0           |
| 0x1401f7754#1791 | 0x1401f777b#2912 | 0           |
| 0x1401f777b#683  | 0x1401f777b#2913 | 0           |
| 0x1401f777b#2913 | 0x1401f7783#700  | 0           |
| 0x1401f7783#2824 | 0x1401f7783#700  | 1           |
| 0x1401f7783#700  | 0x1401f7783#702  | 1           |
| 0x1401f7754#1800 | 0x1401f7783#2849 | 0           |
| 0x1401f779d#2805 | 0x1401f779d#2368 | 1           |
| 0x1401f77a2#2806 | 0x1401f77a2#954  | 1           |
| 0x1401f77a7#2807 | 0x1401f77a7#957  | 1           |
| 0x1401f7552#122  | 0x1401f77af#968  | 0           |
| 0x1401f77af#968  | 0x1401f77af#970  | 1           |
| 0x1401f77b1#2808 | 0x1401f77b1#973  | 1           |
| 0x1401f757d#1809 | 0x1401f77b1#973  | 2           |
| 0x1401f77b6#2809 | 0x1401f77b6#976  | 1           |
| 0x1401f757d#1809 | 0x1401f77bf#2354 | 0           |
| 0x1401f7552#2411 | 0x1401f77cc#985  | 2           |
| 0x1401f77bf#2354 | 0x1401f77cc#985  | 3           |
| 0x1401f7552#2411 | 0x1401f77cc#2413 | 0           |
| 0x1401f7552#2444 | 0x1401f77cc#2446 | 0           |
| 0x1401f7552#2477 | 0x1401f77cc#2479 | 0           |
| 0x1401f77bf#2354 | 0x1401f77d1#987  | 0           |
| 0x1401f77d1#2875 | 0x1401f77d1#987  | 1           |
| 0x1401f77d1#2876 | 0x1401f77d1#989  | 1           |
| 0x1401f77d1#987  | 0x1401f77d1#2876 | 0           |
| 0x1401f757d#1809 | 0x1401f77de#994  | 0           |
| 0x1401f77de#994  | 0x1401f77e7#1003 | 0           |
| 0x1401f77e7#1003 | 0x1401f77ea#1014 | 1           |
| 0x1401f77ee#1827 | 0x1401f77ee#1016 | 0           |
| 0x1401f77ee#1016 | 0x1401f77ee#1017 | 0           |
| 0x1401f77de#994  | 0x1401f77ee#1827 | 0           |
| 0x1401f77ea#1015 | 0x1401f77ee#1827 | 1           |
| 0x1401f77ee#1827 | 0x1401f77f6#1023 | 0           |
| 0x1401f77f6#1023 | 0x1401f77f9#1029 | 1           |
| 0x1401f77ee#1017 | 0x1401f7800#1033 | 0           |
| 0x1401f7800#1033 | 0x1401f7807#1042 | 1           |
| 0x1401f77ee#1016 | 0x1401f7809#1043 | 0           |
| 0x1401f7809#1043 | 0x1401f7810#1055 | 0           |
| 0x1401f77ee#1017 | 0x1401f7810#1055 | 1           |
| 0x1401f7810#1055 | 0x1401f7810#1056 | 1           |
| 0x1401f7809#1043 | 0x1401f7819#1060 | 1           |
| 0x1401f7552#2411 | 0x1401f7819#2412 | 0           |
| 0x1401f7552#2444 | 0x1401f7819#2445 | 0           |
| 0x1401f7552#2477 | 0x1401f7819#2478 | 0           |
| 0x1401f7819#1060 | 0x1401f781e#1065 | 0           |
| 0x1401f781e#1065 | 0x1401f7821#1070 | 1           |
| 0x1401f7819#1060 | 0x1401f7823#1071 | 0           |
| 0x1401f7823#1071 | 0x1401f7827#1075 | 0           |
| 0x1401f7827#1075 | 0x1401f7827#2873 | 0           |
| 0x1401f782b#2874 | 0x1401f782b#1084 | 1           |
| 0x1401f7819#1060 | 0x1401f782b#1084 | 2           |
| 0x1401f7827#2873 | 0x1401f782b#2810 | 0           |
| 0x1401f782b#2810 | 0x1401f782b#2874 | 0           |
| 0x1401f7500#2789 | 0x1401f782f#2842 | 0           |
| 0x1401f76bb#2837 | 0x1401f7831#1785 | 0           |
| 0x1401f7552#2827 | 0x1401f7831#1785 | 1           |
| 0x1401f7552#2827 | 0x1401f7831#1785 | 2           |
| 0x1401f761a#2309 | 0x1401f7831#1812 | 0           |
| 0x1401f761a#2309 | 0x1401f7831#1812 | 1           |
| 0x1401f757d#1809 | 0x1401f7831#1812 | 2           |
| 0x1401f7599#2296 | 0x1401f7831#1830 | 0           |
| 0x1401f7599#2296 | 0x1401f7831#1830 | 1           |
| 0x1401f77ee#1827 | 0x1401f7831#1830 | 2           |
| 0x1401f7687#2420 | 0x1401f7831#2431 | 0           |
| 0x1401f763a#2418 | 0x1401f7831#2431 | 1           |
| 0x1401f7819#2412 | 0x1401f7831#2431 | 2           |
| 0x1401f7687#2453 | 0x1401f7831#2464 | 0           |
| 0x1401f763a#2451 | 0x1401f7831#2464 | 1           |
| 0x1401f7819#2445 | 0x1401f7831#2464 | 2           |
| 0x1401f7687#2486 | 0x1401f7831#2497 | 0           |
| 0x1401f763a#2484 | 0x1401f7831#2497 | 1           |
| 0x1401f7819#2478 | 0x1401f7831#2497 | 2           |
| 0x1401f7836#2903 | 0x1401f7836#593  | 0           |
| 0x1401f7831#2431 | 0x1401f7836#2421 | 0           |
| 0x1401f7831#2464 | 0x1401f7836#2454 | 0           |
| 0x1401f7831#2497 | 0x1401f7836#2487 | 0           |
| 0x1401f7831#1785 | 0x1401f7836#2838 | 0           |
| 0x1401f7836#592  | 0x1401f7836#2903 | 0           |
| 0x1401f7838#1804 | 0x1401f7838#594  | 0           |
| 0x1401f7838#2904 | 0x1401f7838#595  | 1           |
| 0x1401f7836#2838 | 0x1401f7838#1789 | 0           |
| 0x1401f7552#2827 | 0x1401f7838#1789 | 1           |
| 0x1401f7836#2811 | 0x1401f7838#1804 | 0           |
| 0x1401f7500#2783 | 0x1401f7838#1804 | 1           |
| 0x1401f7831#1812 | 0x1401f7838#1814 | 0           |
| 0x1401f757d#1809 | 0x1401f7838#1814 | 1           |
| 0x1401f7831#1830 | 0x1401f7838#1828 | 0           |
| 0x1401f77ee#1827 | 0x1401f7838#1828 | 1           |
| 0x1401f7838#2439 | 0x1401f7838#2422 | 0           |
| 0x1401f7836#2421 | 0x1401f7838#2439 | 0           |
| 0x1401f7552#2411 | 0x1401f7838#2439 | 1           |
| 0x1401f7838#2472 | 0x1401f7838#2455 | 0           |
| 0x1401f7836#2454 | 0x1401f7838#2472 | 0           |
| 0x1401f7552#2444 | 0x1401f7838#2472 | 1           |
| 0x1401f7838#2505 | 0x1401f7838#2488 | 0           |
| 0x1401f7836#2487 | 0x1401f7838#2505 | 0           |
| 0x1401f7552#2477 | 0x1401f7838#2505 | 1           |
| 0x1401f7838#594  | 0x1401f7838#2904 | 0           |
| 0x1401f7838#596  | 0x1401f7838#2905 | 0           |
| 0x1401f7838#1804 | 0x1401f783d#2841 | 0           |
| 0x1401f7840#1925 | 0x1401f7840#599  | 2           |
| 0x1401f7838#1789 | 0x1401f7840#1790 | 0           |
| 0x1401f7552#2827 | 0x1401f7840#1790 | 1           |
| 0x1401f7552#2827 | 0x1401f7840#1790 | 2           |
| 0x1401f783d#2841 | 0x1401f7840#1799 | 0           |
| 0x1401f782f#2842 | 0x1401f7840#1799 | 1           |
| 0x1401f7500#2787 | 0x1401f7840#1799 | 2           |
| 0x1401f7838#1814 | 0x1401f7840#1815 | 0           |
| 0x1401f757d#1809 | 0x1401f7840#1815 | 1           |
| 0x1401f757d#1809 | 0x1401f7840#1815 | 2           |
| 0x1401f7838#1828 | 0x1401f7840#1831 | 0           |
| 0x1401f77ee#1827 | 0x1401f7840#1831 | 1           |
| 0x1401f77ee#1827 | 0x1401f7840#1831 | 2           |
| 0x1401f7838#2905 | 0x1401f7840#1925 | 0           |
| 0x1401f7827#2873 | 0x1401f7840#1925 | 1           |
| 0x1401f7507#1924 | 0x1401f7840#1925 | 2           |
| 0x1401f7838#2422 | 0x1401f7840#2434 | 0           |
| 0x1401f7819#2412 | 0x1401f7840#2434 | 1           |
| 0x1401f7552#2411 | 0x1401f7840#2434 | 2           |
| 0x1401f7838#2455 | 0x1401f7840#2467 | 0           |
| 0x1401f7819#2445 | 0x1401f7840#2467 | 1           |
| 0x1401f7552#2444 | 0x1401f7840#2467 | 2           |
| 0x1401f7838#2488 | 0x1401f7840#2500 | 0           |
| 0x1401f7819#2478 | 0x1401f7840#2500 | 1           |
| 0x1401f7552#2477 | 0x1401f7840#2500 | 2           |
| 0x1401f7844#2812 | 0x1401f7844#602  | 1           |
| 0x1401f7840#1815 | 0x1401f7844#602  | 2           |
| 0x1401f7849#2813 | 0x1401f7849#605  | 1           |
| 0x1401f7840#1831 | 0x1401f7849#605  | 2           |
| 0x1401f7840#1815 | 0x1401f784e#2352 | 0           |
| 0x1401f7840#1799 | 0x1401f785b#612  | 0           |
| 0x1401f785b#2906 | 0x1401f785b#613  | 1           |
| 0x1401f7840#1925 | 0x1401f785b#614  | 1           |
| 0x1401f7840#1790 | 0x1401f785b#614  | 2           |
| 0x1401f784e#2352 | 0x1401f785b#614  | 3           |
| 0x1401f7840#2434 | 0x1401f785b#2423 | 0           |
| 0x1401f7840#2467 | 0x1401f785b#2456 | 0           |
| 0x1401f7840#2500 | 0x1401f785b#2489 | 0           |
| 0x1401f785b#612  | 0x1401f785b#2906 | 0           |
| 0x1401f7860#2814 | 0x1401f7860#618  | 1           |
| 0x1401f7840#1925 | 0x1401f7860#2814 | 0           |
| 0x1401f7840#1815 | 0x1401f7860#2814 | 1           |
| 0x1401f785b#2423 | 0x1401f7869#2840 | 0           |
| 0x1401f7840#1799 | 0x1401f7869#2843 | 0           |
| 0x1401f7871#2815 | 0x1401f7871#2373 | 1           |
| 0x1401f7876#2816 | 0x1401f7876#1094 | 1           |
| 0x1401f787b#2817 | 0x1401f787b#1097 | 1           |
| 0x1401f7884#2863 | 0x1401f7884#1099 | 1           |
| 0x1401f7552#2411 | 0x1401f788d#1107 | 0           |
| 0x1401f788d#1107 | 0x1401f7890#1112 | 1           |
| 0x1401f7896#2864 | 0x1401f7896#1118 | 0           |
| 0x1401f7896#2865 | 0x1401f7896#1118 | 1           |
| 0x1401f7552#2477 | 0x1401f7896#2864 | 0           |
| 0x1401f7552#2411 | 0x1401f7896#2865 | 0           |
| 0x1401f7896#1118 | 0x1401f7899#1128 | 0           |
| 0x1401f7899#1128 | 0x1401f789c#2353 | 0           |
| 0x1401f78a0#2866 | 0x1401f78a0#1139 | 1           |
| 0x1401f789c#2353 | 0x1401f78a0#2866 | 0           |
| 0x1401f78a0#1139 | 0x1401f78a7#1148 | 1           |
| 0x1401f7552#2411 | 0x1401f78a7#2833 | 0           |
| 0x1401f7500#2785 | 0x1401f78a7#2848 | 0           |
| 0x1401f78a9#2867 | 0x1401f78a9#1150 | 1           |
| 0x1401f7552#2411 | 0x1401f78a9#2818 | 0           |
| 0x1401f78a9#2818 | 0x1401f78a9#2867 | 0           |
| 0x1401f78b0#2869 | 0x1401f78b0#1163 | 0           |
| 0x1401f78b0#2819 | 0x1401f78b0#1163 | 1           |
| 0x1401f78b0#2868 | 0x1401f78b0#2819 | 1           |
| 0x1401f78a9#1150 | 0x1401f78b0#2868 | 0           |
| 0x1401f7552#2411 | 0x1401f78b0#2869 | 0           |
| 0x1401f78b0#1163 | 0x1401f78b0#2870 | 0           |
| 0x1401f78b0#2870 | 0x1401f78b8#1180 | 1           |
| 0x1401f78b8#1180 | 0x1401f78b8#1182 | 1           |
| 0x1401f78a9#1150 | 0x1401f78b8#2831 | 0           |
| 0x1401f7500#2786 | 0x1401f78b8#2846 | 0           |
| 0x1401f7783#2849 | 0x1401f78c0#1803 | 0           |
| 0x1401f7500#2784 | 0x1401f78c0#1803 | 1           |
| 0x1401f7754#2435 | 0x1401f78c0#2438 | 0           |
| 0x1401f7552#2411 | 0x1401f78c0#2438 | 1           |
| 0x1401f7754#2468 | 0x1401f78c0#2471 | 0           |
| 0x1401f7552#2444 | 0x1401f78c0#2471 | 1           |
| 0x1401f7754#2501 | 0x1401f78c0#2504 | 0           |
| 0x1401f7552#2477 | 0x1401f78c0#2504 | 1           |
| 0x1401f78c0#761  | 0x1401f78c0#2914 | 0           |
| 0x1401f78c5#2915 | 0x1401f78c5#763  | 0           |
| 0x1401f78c0#1803 | 0x1401f78c5#1210 | 0           |
| 0x1401f78c0#2914 | 0x1401f78c5#1710 | 0           |
| 0x1401f78c0#2438 | 0x1401f78c5#2424 | 0           |
| 0x1401f78c0#2471 | 0x1401f78c5#2457 | 0           |
| 0x1401f78c0#2504 | 0x1401f78c5#2490 | 0           |
| 0x1401f78c5#1710 | 0x1401f78c5#2832 | 0           |
| 0x1401f78c5#1210 | 0x1401f78c5#2847 | 0           |
| 0x1401f78c5#762  | 0x1401f78c5#2915 | 0           |
| 0x1401f78cd#1802 | 0x1401f78cd#713  | 0           |
| 0x1401f78cd#2916 | 0x1401f78cd#714  | 1           |
| 0x1401f78cd#1721 | 0x1401f78cd#715  | 1           |
| 0x1401f7772#2830 | 0x1401f78cd#1721 | 0           |
| 0x1401f78b8#2831 | 0x1401f78cd#1721 | 1           |
| 0x1401f78c5#2832 | 0x1401f78cd#1721 | 2           |
| 0x1401f78a7#2833 | 0x1401f78cd#1721 | 3           |
| 0x1401f7774#670  | 0x1401f78cd#1721 | 4           |
| 0x1401f7772#2845 | 0x1401f78cd#1802 | 0           |
| 0x1401f78b8#2846 | 0x1401f78cd#1802 | 1           |
| 0x1401f78c5#2847 | 0x1401f78cd#1802 | 2           |
| 0x1401f78a7#2848 | 0x1401f78cd#1802 | 3           |
| 0x1401f7754#1800 | 0x1401f78cd#1802 | 4           |
| 0x1401f78cd#2437 | 0x1401f78cd#2425 | 0           |
| 0x1401f7754#2435 | 0x1401f78cd#2437 | 0           |
| 0x1401f7552#2411 | 0x1401f78cd#2437 | 1           |
| 0x1401f78c5#2424 | 0x1401f78cd#2437 | 2           |
| 0x1401f7552#2411 | 0x1401f78cd#2437 | 3           |
| 0x1401f7754#2435 | 0x1401f78cd#2437 | 4           |
| 0x1401f78cd#2470 | 0x1401f78cd#2458 | 0           |
| 0x1401f7754#2468 | 0x1401f78cd#2470 | 0           |
| 0x1401f7552#2444 | 0x1401f78cd#2470 | 1           |
| 0x1401f78c5#2457 | 0x1401f78cd#2470 | 2           |
| 0x1401f7552#2444 | 0x1401f78cd#2470 | 3           |
| 0x1401f7754#2468 | 0x1401f78cd#2470 | 4           |
| 0x1401f78cd#2503 | 0x1401f78cd#2491 | 0           |
| 0x1401f7754#2501 | 0x1401f78cd#2503 | 0           |
| 0x1401f7552#2477 | 0x1401f78cd#2503 | 1           |
| 0x1401f78c5#2490 | 0x1401f78cd#2503 | 2           |
| 0x1401f7552#2477 | 0x1401f78cd#2503 | 3           |
| 0x1401f7754#2501 | 0x1401f78cd#2503 | 4           |
| 0x1401f78cd#713  | 0x1401f78cd#2916 | 0           |
| 0x1401f78d2#716  | 0x1401f78e5#760  | 1           |
| 0x1401f78d2#2825 | 0x1401f78e5#2826 | 1           |
| 0x1401f7552#2411 | 0x1401f78e6#2417 | 0           |
| 0x1401f7552#2444 | 0x1401f78e6#2450 | 0           |
| 0x1401f7552#2477 | 0x1401f78e6#2483 | 0           |
| 0x1401f7552#2411 | 0x1401f78ec#2415 | 0           |
| 0x1401f7552#2444 | 0x1401f78ec#2448 | 0           |
| 0x1401f7552#2477 | 0x1401f78ec#2481 | 0           |

## normalized_result.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x1401f751b#58   | direct_call        | 0             |             |
| 0x1401f753a#81   | direct_call        | 0             |             |
| 0x1401f7552#122  | direct_call        | 0             |             |
| 0x1401f755c#134  | conditional_branch |               | 1           |
| 0x1401f7586#176  | conditional_branch |               | 1           |
| 0x1401f7593#188  | conditional_branch |               | 1           |
| 0x1401f75ab#230  | conditional_branch |               | 1           |
| 0x1401f75c3#261  | conditional_branch |               | 1           |
| 0x1401f75d9#296  | conditional_branch |               | 1           |
| 0x1401f75e2#309  | conditional_branch |               | 1           |
| 0x1401f75fd#362  | conditional_branch |               | 1           |
| 0x1401f760a#377  | conditional_branch |               | 1           |
| 0x1401f7614#844  | conditional_branch |               | 1           |
| 0x1401f761d#390  | conditional_branch |               | 1           |
| 0x1401f762b#779  | conditional_branch |               | 1           |
| 0x1401f7634#793  | conditional_branch |               | 1           |
| 0x1401f763a#796  | direct_call        | 0             |             |
| 0x1401f7642#806  | conditional_branch |               | 1           |
| 0x1401f7650#820  | memory_write       | 1             | 2           |
| 0x1401f7659#830  | direct_call        | 0             |             |
| 0x1401f7674#436  | direct_call        | 0             |             |
| 0x1401f7687#455  | direct_call        | 0             |             |
| 0x1401f7693#468  | conditional_branch |               | 1           |
| 0x1401f76aa#504  | conditional_branch |               | 1           |
| 0x1401f76ac#506  | memory_read        | 1             |             |
| 0x1401f76bb#538  | conditional_branch |               | 1           |
| 0x1401f76cd#552  | direct_call        | 0             |             |
| 0x1401f7707#878  | direct_call        | 0             |             |
| 0x1401f773c#2362 | memory_write       | 1             | 2           |
| 0x1401f773c#2363 | memory_write       | 1             | 2           |
| 0x1401f7741#940  | memory_write       | 1             | 2           |
| 0x1401f7746#943  | memory_write       | 1             | 2           |
| 0x1401f774f#945  | memory_write       | 1             | 2           |
| 0x1401f7757#632  | conditional_branch |               | 1           |
| 0x1401f7772#668  | conditional_branch |               | 1           |
| 0x1401f7774#670  | memory_read        | 1             |             |
| 0x1401f7783#702  | conditional_branch |               | 1           |
| 0x1401f779d#2367 | memory_write       | 1             | 2           |
| 0x1401f779d#2368 | memory_write       | 1             | 2           |
| 0x1401f77a2#954  | memory_write       | 1             | 2           |
| 0x1401f77a7#957  | memory_write       | 1             | 2           |
| 0x1401f77af#970  | conditional_branch |               | 1           |
| 0x1401f77b1#973  | memory_write       | 1             | 2           |
| 0x1401f77b6#976  | memory_write       | 1             | 2           |
| 0x1401f77cc#985  | direct_call        | 0             |             |
| 0x1401f77d1#989  | memory_write       | 1             | 2           |
| 0x1401f77ea#1014 | conditional_branch |               | 1           |
| 0x1401f77f9#1029 | conditional_branch |               | 1           |
| 0x1401f7807#1042 | conditional_branch |               | 1           |
| 0x1401f7810#1056 | conditional_branch |               | 1           |
| 0x1401f7819#1060 | direct_call        | 0             |             |
| 0x1401f7821#1070 | conditional_branch |               | 1           |
| 0x1401f782b#1084 | memory_write       | 1             | 2           |
| 0x1401f7836#593  | indirect_call      | 0             |             |
| 0x1401f7838#595  | memory_write       | 1             | 2           |
| 0x1401f7838#596  | direct_call        | 0             |             |
| 0x1401f7840#599  | memory_write       | 1             | 2           |
| 0x1401f7844#602  | memory_write       | 1             | 2           |
| 0x1401f7849#605  | memory_write       | 1             | 2           |
| 0x1401f785b#613  | memory_write       | 1             | 2           |
| 0x1401f785b#614  | direct_call        | 0             |             |
| 0x1401f7860#618  | memory_write       | 1             | 2           |
| 0x1401f7871#2372 | memory_write       | 1             | 2           |
| 0x1401f7871#2373 | memory_write       | 1             | 2           |
| 0x1401f7876#1094 | memory_write       | 1             | 2           |
| 0x1401f787b#1097 | memory_write       | 1             | 2           |
| 0x1401f7884#1099 | memory_write       | 1             | 2           |
| 0x1401f7890#1112 | conditional_branch |               | 1           |
| 0x1401f78a7#1148 | conditional_branch |               | 1           |
| 0x1401f78a9#1150 | memory_read        | 1             |             |
| 0x1401f78b8#1182 | conditional_branch |               | 1           |
| 0x1401f78c5#763  | indirect_call      | 0             |             |
| 0x1401f78cd#714  | memory_write       | 1             | 2           |
| 0x1401f78cd#715  | direct_call        | 0             |             |
| 0x1401f78e6#824  | direct_call        | 0             |             |
| 0x1401f78ec#847  | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x1401f773c#2362 | 1           |
| 0       | 0x1401f773c#2800 | 0           |
| 0       | 0x1401f7741#2801 | 0           |
| 0       | 0x1401f7746#2802 | 0           |
| 0       | 0x1401f774f#2877 | 0           |
| 0       | 0x1401f779d#2367 | 1           |
| 0       | 0x1401f779d#2805 | 0           |
| 0       | 0x1401f77a2#2806 | 0           |
| 0       | 0x1401f77a7#2807 | 0           |
| 0       | 0x1401f77b1#2808 | 0           |
| 0       | 0x1401f77b6#2809 | 0           |
| 0       | 0x1401f77cc#985  | 1           |
| 0       | 0x1401f77d1#2875 | 0           |
| 0       | 0x1401f7840#599  | 1           |
| 0       | 0x1401f7844#2812 | 0           |
| 0       | 0x1401f7849#2813 | 0           |
| 0       | 0x1401f7871#2372 | 1           |
| 0       | 0x1401f7871#2815 | 0           |
| 0       | 0x1401f7876#2816 | 0           |
| 0       | 0x1401f787b#2817 | 0           |
| 0       | 0x1401f7884#2863 | 0           |
| 0       | 0x1401f78d2#716  | 0           |
| 0       | 0x1401f78d2#2825 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f78e6 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f78ec to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401f78e6 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f78ec to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

