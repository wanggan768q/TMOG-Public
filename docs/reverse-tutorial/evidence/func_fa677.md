## evidence_id

ev_b6652028f347ed1e2cc9cdd4e29ad2c76ca10c805ebffee64c5a618774217754

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
| procedure | 0x1401fa677 |

## raw_result.value.procedure.address

0x1401fa380

## raw_result.value.procedure.name

FUN_1401fa380

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
| 0x1401fa380 | 0x1401fa748 |

## raw_result.value.procedure.body.total_bytes

969

## raw_result.value.procedure.body.span_bytes

969

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401fa380()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined local_18 @ Stack[-0x18]:1    | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8   | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8   | ghidra-function-database |
| undefined4 local_38 @ Stack[-0x38]:4   | ghidra-function-database |
| undefined4 local_40 @ Stack[-0x40]:4   | ghidra-function-database |
| undefined4 local_48 @ Stack[-0x48]:4   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## raw_result.value.pseudocode


void FUN_1401fa380(longlong param_1)

{
  HWND pHVar1;
  bool bVar2;
  char cVar3;
  HWND pHVar4;
  BOOL BVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  BOOL BVar8;
  undefined8 local_28;
  undefined8 local_20;
  
  BVar6 = 0;
  BVar8 = 0;
  switch(*(undefined8 *)(param_1 + 0x2ec8)) {
  case 8:
    cVar3 = *(char *)(param_1 + 0x1f5b);
    break;
  case 9:
    cVar3 = *(char *)(param_1 + 0x1f5c);
    break;
  case 10:
    cVar3 = *(char *)(param_1 + 0xb91);
    break;
  case 0xb:
    cVar3 = *(char *)(param_1 + 0xd60);
    break;
  case 0xc:
    cVar3 = *(char *)(param_1 + 0xdd2);
    break;
  case 0xd:
    cVar3 = *(char *)(param_1 + 0x1f5d);
    break;
  case 0xe:
    cVar3 = *(char *)(param_1 + 0x1f5e);
    break;
  default:
    goto switchD_1401fa3cd_default;
  }
  if (cVar3 == '\0') {
    bVar2 = true;
  }
  else {
switchD_1401fa3cd_default:
    bVar2 = false;
    BVar6 = 1;
  }
  if (*(HWND *)(param_1 + 0x290) != (HWND)0x0) {
    EnableWindow(*(HWND *)(param_1 + 0x290),1);
  }
  if (*(HWND *)(param_1 + 0x288) != (HWND)0x0) {
    EnableWindow(*(HWND *)(param_1 + 0x288),BVar6);
  }
  if (*(HWND *)(param_1 + 0xaa8) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xaa8),BVar5);
  }
  puVar7 = (undefined8 *)(param_1 + 0xab0);
  if (param_1 != param_1 + 0x18) {
    do {
      if ((HWND)*puVar7 != (HWND)0x0) {
        if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
          BVar5 = 1;
        }
        EnableWindow((HWND)*puVar7,BVar5);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (undefined8 *)(param_1 + 0xac8));
  }
  pHVar1 = *(HWND *)(param_1 + 0xac8);
  if (pHVar1 != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(pHVar1,BVar5);
  }
  if (*(HWND *)(param_1 + 0xad0) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xad0),BVar5);
  }
  if (*(HWND *)(param_1 + 0xad8) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xad8),BVar5);
  }
  if (*(HWND *)(param_1 + 0xae0) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xae0),BVar5);
  }
  if (*(HWND *)(param_1 + 0xae8) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xae8),BVar5);
  }
  if (*(HWND *)(param_1 + 0xaf0) != (HWND)0x0) {
    EnableWindow(*(HWND *)(param_1 + 0xaf0),0);
  }
  if (*(HWND *)(param_1 + 0xaa0) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xaa0),BVar5);
  }
  if (*(HWND *)(param_1 + 0x2c0) != (HWND)0x0) {
    EnableWindow(*(HWND *)(param_1 + 0x2c0),BVar6);
  }
  puVar7 = &local_28;
  local_28 = *(undefined8 *)(param_1 + 0x1920);
  local_20 = *(undefined8 *)(param_1 + 0x1928);
  do {
    if ((HWND)*puVar7 != (HWND)0x0) {
      if ((!bVar2) || (BVar6 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 0xe)) {
        BVar6 = 1;
      }
      EnableWindow((HWND)*puVar7,BVar6);
    }
    puVar7 = puVar7 + 1;
  } while (puVar7 != (undefined8 *)&stack0xffffffffffffffe8);
  if (bVar2) {
    FUN_1401f87c0(param_1);
    if ((*(longlong *)(param_1 + 0x1f68) != 0) && (*(longlong *)(param_1 + 0x1f70) != 0)) {
      pHVar1 = *(HWND *)(param_1 + 0x290);
      pHVar4 = GetFocus();
      if ((pHVar4 == pHVar1) && (*(HWND *)(param_1 + 0x1f88) != (HWND)0x0)) {
        SetFocus(*(HWND *)(param_1 + 0x1f88));
      }
      FUN_1401f8260(param_1);
      SetWindowPos(*(HWND *)(param_1 + 0x1f68),(HWND)0x0,0,0,0,0,0x53);
      RedrawWindow(*(HWND *)(param_1 + 0x1f68),(RECT *)0x0,(HRGN)0x0,0x105);
      SetWindowPos(*(HWND *)(param_1 + 0x1f70),(HWND)0x0,0,0,0,0,0x53);
      RedrawWindow(*(HWND *)(param_1 + 0x1f70),(RECT *)0x0,(HRGN)0x0,0x185);
    }
  }
  else {
    if (*(HWND *)(param_1 + 0x1f68) != (HWND)0x0) {
      ShowWindow(*(HWND *)(param_1 + 0x1f68),0);
    }
    if (*(HWND *)(param_1 + 0x1f70) != (HWND)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401fa66d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ShowWindow(*(HWND *)(param_1 + 0x1f70),0);
      return;
    }
  }
  return;
}



## raw_result.value.assembly

0x1401fa380: PUSH RBX,0x1401fa382: PUSH RDI,0x1401fa383: PUSH R15,0x1401fa385: SUB RSP, 0x50,0x1401fa389: MOV qword ptr [RSP + 0x70], RBP,0x1401fa38e: MOV RDI, RCX,0x1401fa391: MOV RCX, qword ptr [RCX + 0x2ec8],0x1401fa398: XOR R15D, R15D,0x1401fa39b: MOV qword ptr [RSP + 0x78], RSI,0x1401fa3a0: MOV qword ptr [RSP + 0x80], R14,0x1401fa3a8: LEA RAX, [RCX + -0x8],0x1401fa3ac: CMP RAX, 0x6,0x1401fa3b0: JA 0x1401fa418,0x1401fa3b2: LEA RAX, [RCX + -0x8],0x1401fa3b6: CMP RAX, 0x6,0x1401fa3ba: JA 0x1401fa418,0x1401fa3bc: LEA RCX, [0x140000000],0x1401fa3c3: MOV EAX, dword ptr [RCX + RAX*0x4 + 0x1fa74c],0x1401fa3ca: ADD RAX, RCX,0x1401fa3cd: JMP RAX,0x1401fa3cf: MOVZX EAX, byte ptr [RDI + 0x1f5b],0x1401fa3d6: JMP 0x1401fa40c,0x1401fa3d8: MOVZX EAX, byte ptr [RDI + 0x1f5c],0x1401fa3df: JMP 0x1401fa40c,0x1401fa3e1: MOVZX EAX, byte ptr [RDI + 0xb91],0x1401fa3e8: JMP 0x1401fa40c,0x1401fa3ea: MOVZX EAX, byte ptr [RDI + 0xd60],0x1401fa3f1: JMP 0x1401fa40c,0x1401fa3f3: MOVZX EAX, byte ptr [RDI + 0xdd2],0x1401fa3fa: JMP 0x1401fa40c,0x1401fa3fc: MOVZX EAX, byte ptr [RDI + 0x1f5d],0x1401fa403: JMP 0x1401fa40c,0x1401fa405: MOVZX EAX, byte ptr [RDI + 0x1f5e],0x1401fa40c: TEST AL, AL,0x1401fa40e: JNZ 0x1401fa418,0x1401fa410: MOV SIL, 0x1,0x1401fa413: MOV EBP, R15D,0x1401fa416: JMP 0x1401fa420,0x1401fa418: XOR SIL, SIL,0x1401fa41b: MOV EBP, 0x1,0x1401fa420: MOV RCX, qword ptr [RDI + 0x290],0x1401fa427: TEST RCX, RCX,0x1401fa42a: JZ 0x1401fa437,0x1401fa42c: MOV EDX, 0x1,0x1401fa431: CALL qword ptr [0x14037ade0],0x1401fa437: MOV RCX, qword ptr [RDI + 0x288],0x1401fa43e: TEST RCX, RCX,0x1401fa441: JZ 0x1401fa44b,0x1401fa443: MOV EDX, EBP,0x1401fa445: CALL qword ptr [0x14037ade0],0x1401fa44b: MOV RCX, qword ptr [RDI + 0xaa8],0x1401fa452: TEST RCX, RCX,0x1401fa455: JZ 0x1401fa474,0x1401fa457: TEST SIL, SIL,0x1401fa45a: JZ 0x1401fa469,0x1401fa45c: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa464: MOV EDX, R15D,0x1401fa467: JZ 0x1401fa46e,0x1401fa469: MOV EDX, 0x1,0x1401fa46e: CALL qword ptr [0x14037ade0],0x1401fa474: LEA RAX, [RDI + 0x18],0x1401fa478: LEA R14, [RDI + 0xac8],0x1401fa47f: LEA RBX, [RDI + 0xab0],0x1401fa486: CMP RDI, RAX,0x1401fa489: JZ 0x1401fa4be,0x1401fa48b: NOP dword ptr [RAX + RAX*0x1],0x1401fa490: MOV RCX, qword ptr [RBX],0x1401fa493: TEST RCX, RCX,0x1401fa496: JZ 0x1401fa4b5,0x1401fa498: TEST SIL, SIL,0x1401fa49b: JZ 0x1401fa4aa,0x1401fa49d: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa4a5: MOV EDX, R15D,0x1401fa4a8: JZ 0x1401fa4af,0x1401fa4aa: MOV EDX, 0x1,0x1401fa4af: CALL qword ptr [0x14037ade0],0x1401fa4b5: ADD RBX, 0x8,0x1401fa4b9: CMP RBX, R14,0x1401fa4bc: JNZ 0x1401fa490,0x1401fa4be: MOV RCX, qword ptr [R14],0x1401fa4c1: MOV R14, qword ptr [RSP + 0x80],0x1401fa4c9: TEST RCX, RCX,0x1401fa4cc: JZ 0x1401fa4eb,0x1401fa4ce: TEST SIL, SIL,0x1401fa4d1: JZ 0x1401fa4e0,0x1401fa4d3: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa4db: MOV EDX, R15D,0x1401fa4de: JZ 0x1401fa4e5,0x1401fa4e0: MOV EDX, 0x1,0x1401fa4e5: CALL qword ptr [0x14037ade0],0x1401fa4eb: MOV RCX, qword ptr [RDI + 0xad0],0x1401fa4f2: TEST RCX, RCX,0x1401fa4f5: JZ 0x1401fa514,0x1401fa4f7: TEST SIL, SIL,0x1401fa4fa: JZ 0x1401fa509,0x1401fa4fc: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa504: MOV EDX, R15D,0x1401fa507: JZ 0x1401fa50e,0x1401fa509: MOV EDX, 0x1,0x1401fa50e: CALL qword ptr [0x14037ade0],0x1401fa514: MOV RCX, qword ptr [RDI + 0xad8],0x1401fa51b: TEST RCX, RCX,0x1401fa51e: JZ 0x1401fa53d,0x1401fa520: TEST SIL, SIL,0x1401fa523: JZ 0x1401fa532,0x1401fa525: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa52d: MOV EDX, R15D,0x1401fa530: JZ 0x1401fa537,0x1401fa532: MOV EDX, 0x1,0x1401fa537: CALL qword ptr [0x14037ade0],0x1401fa53d: MOV RCX, qword ptr [RDI + 0xae0],0x1401fa544: TEST RCX, RCX,0x1401fa547: JZ 0x1401fa566,0x1401fa549: TEST SIL, SIL,0x1401fa54c: JZ 0x1401fa55b,0x1401fa54e: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa556: MOV EDX, R15D,0x1401fa559: JZ 0x1401fa560,0x1401fa55b: MOV EDX, 0x1,0x1401fa560: CALL qword ptr [0x14037ade0],0x1401fa566: MOV RCX, qword ptr [RDI + 0xae8],0x1401fa56d: TEST RCX, RCX,0x1401fa570: JZ 0x1401fa58f,0x1401fa572: TEST SIL, SIL,0x1401fa575: JZ 0x1401fa584,0x1401fa577: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa57f: MOV EDX, R15D,0x1401fa582: JZ 0x1401fa589,0x1401fa584: MOV EDX, 0x1,0x1401fa589: CALL qword ptr [0x14037ade0],0x1401fa58f: MOV RCX, qword ptr [RDI + 0xaf0],0x1401fa596: TEST RCX, RCX,0x1401fa599: JZ 0x1401fa5a3,0x1401fa59b: XOR EDX, EDX,0x1401fa59d: CALL qword ptr [0x14037ade0],0x1401fa5a3: MOV RCX, qword ptr [RDI + 0xaa0],0x1401fa5aa: TEST RCX, RCX,0x1401fa5ad: JZ 0x1401fa5cc,0x1401fa5af: TEST SIL, SIL,0x1401fa5b2: JZ 0x1401fa5c1,0x1401fa5b4: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa5bc: MOV EDX, R15D,0x1401fa5bf: JZ 0x1401fa5c6,0x1401fa5c1: MOV EDX, 0x1,0x1401fa5c6: CALL qword ptr [0x14037ade0],0x1401fa5cc: MOV RCX, qword ptr [RDI + 0x2c0],0x1401fa5d3: TEST RCX, RCX,0x1401fa5d6: JZ 0x1401fa5e0,0x1401fa5d8: MOV EDX, EBP,0x1401fa5da: CALL qword ptr [0x14037ade0],0x1401fa5e0: MOV RAX, qword ptr [RDI + 0x1920],0x1401fa5e7: LEA RBX, [RSP + 0x40],0x1401fa5ec: MOV RBP, qword ptr [RSP + 0x70],0x1401fa5f1: MOV qword ptr [RSP + 0x40], RAX,0x1401fa5f6: MOV RAX, qword ptr [RDI + 0x1928],0x1401fa5fd: MOV qword ptr [RSP + 0x48], RAX,0x1401fa602: MOV RCX, qword ptr [RBX],0x1401fa605: TEST RCX, RCX,0x1401fa608: JZ 0x1401fa627,0x1401fa60a: TEST SIL, SIL,0x1401fa60d: JZ 0x1401fa61c,0x1401fa60f: CMP qword ptr [RDI + 0x2ec8], 0xe,0x1401fa617: MOV EDX, R15D,0x1401fa61a: JZ 0x1401fa621,0x1401fa61c: MOV EDX, 0x1,0x1401fa621: CALL qword ptr [0x14037ade0],0x1401fa627: ADD RBX, 0x8,0x1401fa62b: LEA RAX, [RSP + 0x50],0x1401fa630: CMP RBX, RAX,0x1401fa633: JNZ 0x1401fa602,0x1401fa635: TEST SIL, SIL,0x1401fa638: MOV RSI, qword ptr [RSP + 0x78],0x1401fa63d: JNZ 0x1401fa674,0x1401fa63f: MOV RCX, qword ptr [RDI + 0x1f68],0x1401fa646: TEST RCX, RCX,0x1401fa649: JZ 0x1401fa653,0x1401fa64b: XOR EDX, EDX,0x1401fa64d: CALL qword ptr [0x14037ae00],0x1401fa653: MOV RCX, qword ptr [RDI + 0x1f70],0x1401fa65a: TEST RCX, RCX,0x1401fa65d: JZ 0x1401fa740,0x1401fa663: XOR EDX, EDX,0x1401fa665: ADD RSP, 0x50,0x1401fa669: POP R15,0x1401fa66b: POP RDI,0x1401fa66c: POP RBX,0x1401fa66d: JMP qword ptr [0x14037ae00],0x1401fa674: MOV RCX, RDI,0x1401fa677: CALL 0x1401f87c0,0x1401fa67c: CMP qword ptr [RDI + 0x1f68], R15,0x1401fa683: JZ 0x1401fa740,0x1401fa689: CMP qword ptr [RDI + 0x1f70], R15,0x1401fa690: JZ 0x1401fa740,0x1401fa696: MOV RBX, qword ptr [RDI + 0x290],0x1401fa69d: CALL qword ptr [0x14037ae78],0x1401fa6a3: CMP RAX, RBX,0x1401fa6a6: JNZ 0x1401fa6ba,0x1401fa6a8: MOV RCX, qword ptr [RDI + 0x1f88],0x1401fa6af: TEST RCX, RCX,0x1401fa6b2: JZ 0x1401fa6ba,0x1401fa6b4: CALL qword ptr [0x14037b048],0x1401fa6ba: MOV RCX, RDI,0x1401fa6bd: CALL 0x1401f8260,0x1401fa6c2: MOV RCX, qword ptr [RDI + 0x1f68],0x1401fa6c9: XOR R9D, R9D,0x1401fa6cc: MOV dword ptr [RSP + 0x30], 0x53,0x1401fa6d4: XOR R8D, R8D,0x1401fa6d7: MOV dword ptr [RSP + 0x28], R15D,0x1401fa6dc: XOR EDX, EDX,0x1401fa6de: MOV dword ptr [RSP + 0x20], R15D,0x1401fa6e3: CALL qword ptr [0x14037afd0],0x1401fa6e9: MOV RCX, qword ptr [RDI + 0x1f68],0x1401fa6f0: MOV R9D, 0x105,0x1401fa6f6: XOR R8D, R8D,0x1401fa6f9: XOR EDX, EDX,0x1401fa6fb: CALL qword ptr [0x14037ac60],0x1401fa701: MOV RCX, qword ptr [RDI + 0x1f70],0x1401fa708: XOR R9D, R9D,0x1401fa70b: MOV dword ptr [RSP + 0x30], 0x53,0x1401fa713: XOR R8D, R8D,0x1401fa716: MOV dword ptr [RSP + 0x28], R15D,0x1401fa71b: XOR EDX, EDX,0x1401fa71d: MOV dword ptr [RSP + 0x20], R15D,0x1401fa722: CALL qword ptr [0x14037afd0],0x1401fa728: MOV RCX, qword ptr [RDI + 0x1f70],0x1401fa72f: MOV R9D, 0x185,0x1401fa735: XOR R8D, R8D,0x1401fa738: XOR EDX, EDX,0x1401fa73a: CALL qword ptr [0x14037ac60],0x1401fa740: ADD RSP, 0x50,0x1401fa744: POP R15,0x1401fa746: POP RDI,0x1401fa747: POP RBX,0x1401fa748: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x14007bd50 | FUN_14007bd50 | [object Object] | [object Object] |
| 0x1400ddca0 | FUN_1400ddca0 | [object Object] | [object Object] |
| 0x1401e59c0 | FUN_1401e59c0 | [object Object] | [object Object] |

## raw_result.value.callees

| address        | name                     | classification  | body            |
|----------------|--------------------------|-----------------|-----------------|
| EXTERNAL:0x12b | USER32.DLL::RedrawWindow | [object Object] | [object Object] |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow | [object Object] | [object Object] |
| EXTERNAL:0x15f | USER32.DLL::ShowWindow   | [object Object] | [object Object] |
| EXTERNAL:0x16e | USER32.DLL::GetFocus     | [object Object] | [object Object] |
| EXTERNAL:0x199 | USER32.DLL::SetWindowPos | [object Object] | [object Object] |
| EXTERNAL:0x1a8 | USER32.DLL::SetFocus     | [object Object] | [object Object] |
| 0x1401f8260    | FUN_1401f8260            | [object Object] | [object Object] |
| 0x1401f87c0    | FUN_1401f87c0            | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14007be20    | 0x1401fa380    | [object Object]  | [object Object]  | [object Object] |
| 0x1400df0fe    | 0x1401fa380    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e6ce7    | 0x1401fa380    | [object Object]  | [object Object]  | [object Object] |
| 0x1404a546c    | 0x1401fa380    |                  | [object Object]  | [object Object] |
| 0x1404a5470    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404a5480    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404a5484    | 0x1401fa3a0    |                  | [object Object]  | [object Object] |
| 0x1404a5490    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404a5494    | 0x1401fa3a0    |                  | [object Object]  | [object Object] |
| 0x1404a54a4    | 0x1401fa380    |                  | [object Object]  | [object Object] |
| 0x1404a54a8    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404a54b4    | 0x1401fa380    |                  | [object Object]  | [object Object] |
| 0x1404a54b8    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404dfc9c    | 0x1401fa380    |                  | [object Object]  | [object Object] |
| 0x1404dfca8    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404dfcb4    | 0x1401fa3a0    |                  | [object Object]  | [object Object] |
| 0x1404dfcc0    | 0x1401fa4ce    |                  | [object Object]  | [object Object] |
| 0x1404dfccc    | 0x1401fa602    |                  | [object Object]  | [object Object] |
| 0x1404dfcd8    | 0x1401fa63f    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401fa389    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401fa39b    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401fa3a0    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401fa3b0    | 0x1401fa418              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3ba    | 0x1401fa418              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3bc    | 0x140000000              | [object Object]  |                  | [object Object] |
| 0x1401fa3c3    | 0x1401fa74c              | [object Object]  |                  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3cf              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3d8              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3e1              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3ea              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3f3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3fc              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa405              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3d6    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3df    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3e8    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3f1    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3fa    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa403    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa40e    | 0x1401fa418              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa416    | 0x1401fa420              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa42a    | 0x1401fa437              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa431    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa431    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa441    | 0x1401fa44b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa445    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa445    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa455    | 0x1401fa474              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa45a    | 0x1401fa469              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa467    | 0x1401fa46e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa46e    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa46e    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa489    | 0x1401fa4be              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa496    | 0x1401fa4b5              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa49b    | 0x1401fa4aa              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4a8    | 0x1401fa4af              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4af    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4af    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa4bc    | 0x1401fa490              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4c1    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401fa4cc    | 0x1401fa4eb              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4d1    | 0x1401fa4e0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4de    | 0x1401fa4e5              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4e5    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4e5    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa4f5    | 0x1401fa514              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4fa    | 0x1401fa509              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa507    | 0x1401fa50e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa50e    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa50e    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa51e    | 0x1401fa53d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa523    | 0x1401fa532              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa530    | 0x1401fa537              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa537    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa537    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa547    | 0x1401fa566              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa54c    | 0x1401fa55b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa559    | 0x1401fa560              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa560    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa560    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa570    | 0x1401fa58f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa575    | 0x1401fa584              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa582    | 0x1401fa589              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa589    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa589    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa599    | 0x1401fa5a3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa59d    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa59d    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa5ad    | 0x1401fa5cc              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5b2    | 0x1401fa5c1              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5bf    | 0x1401fa5c6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5c6    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5c6    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa5d6    | 0x1401fa5e0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5da    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5da    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa5e7    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401fa5ec    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401fa5f1    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401fa5fd    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401fa602    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401fa608    | 0x1401fa627              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa60d    | 0x1401fa61c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa61a    | 0x1401fa621              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa621    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa621    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa62b    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401fa633    | 0x1401fa602              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa638    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401fa63d    | 0x1401fa674              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa649    | 0x1401fa653              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa64d    | EXTERNAL:0x15f           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa64d    | 0x14037ae00              | [object Object]  |                  | [object Object] |
| 0x1401fa65d    | 0x1401fa740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa66d    | EXTERNAL:0x15f           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa66d    | 0x14037ae00              | [object Object]  |                  | [object Object] |
| 0x1401fa677    | 0x1401f87c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa683    | 0x1401fa740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa690    | 0x1401fa740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa69d    | EXTERNAL:0x16e           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa69d    | 0x14037ae78              | [object Object]  |                  | [object Object] |
| 0x1401fa6a6    | 0x1401fa6ba              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6b2    | 0x1401fa6ba              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6b4    | EXTERNAL:0x1a8           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6b4    | 0x14037b048              | [object Object]  |                  | [object Object] |
| 0x1401fa6bd    | 0x1401f8260              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6cc    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401fa6d7    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401fa6de    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401fa6e3    | EXTERNAL:0x199           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6e3    | 0x14037afd0              | [object Object]  |                  | [object Object] |
| 0x1401fa6fb    | EXTERNAL:0x12b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6fb    | 0x14037ac60              | [object Object]  |                  | [object Object] |
| 0x1401fa70b    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401fa716    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401fa71d    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401fa722    | EXTERNAL:0x199           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa722    | 0x14037afd0              | [object Object]  |                  | [object Object] |
| 0x1401fa73a    | EXTERNAL:0x12b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa73a    | 0x14037ac60              | [object Object]  |                  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address        | value                                    | source_address |
|----------------|------------------------------------------|----------------|
| 0x140000000    | IMAGE_DOS_HEADER_140000000               | 0x1401fa3bc    |
| 0x1401f8260    | FUN_1401f8260                            | 0x1401fa6bd    |
| 0x1401f87c0    | FUN_1401f87c0                            | 0x1401fa677    |
| 0x1401fa3cf    | switchD_1401fa3cd::caseD_8               | 0x1401fa3cd    |
| 0x1401fa3d8    | switchD_1401fa3cd::caseD_9               | 0x1401fa3cd    |
| 0x1401fa3e1    | switchD_1401fa3cd::caseD_a               | 0x1401fa3cd    |
| 0x1401fa3ea    | switchD_1401fa3cd::caseD_b               | 0x1401fa3cd    |
| 0x1401fa3f3    | switchD_1401fa3cd::caseD_c               | 0x1401fa3cd    |
| 0x1401fa3fc    | switchD_1401fa3cd::caseD_d               | 0x1401fa3cd    |
| 0x1401fa405    | switchD_1401fa3cd::caseD_e               | 0x1401fa3cd    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa3d6    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa3df    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa3e8    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa3f1    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa3fa    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa403    |
| 0x1401fa418    | switchD_1401fa3cd::default               | 0x1401fa3b0    |
| 0x1401fa418    | switchD_1401fa3cd::default               | 0x1401fa3ba    |
| 0x1401fa418    | switchD_1401fa3cd::default               | 0x1401fa40e    |
| 0x1401fa420    | LAB_1401fa420                            | 0x1401fa416    |
| 0x1401fa437    | LAB_1401fa437                            | 0x1401fa42a    |
| 0x1401fa44b    | LAB_1401fa44b                            | 0x1401fa441    |
| 0x1401fa469    | LAB_1401fa469                            | 0x1401fa45a    |
| 0x1401fa46e    | LAB_1401fa46e                            | 0x1401fa467    |
| 0x1401fa474    | LAB_1401fa474                            | 0x1401fa455    |
| 0x1401fa490    | LAB_1401fa490                            | 0x1401fa4bc    |
| 0x1401fa4aa    | LAB_1401fa4aa                            | 0x1401fa49b    |
| 0x1401fa4af    | LAB_1401fa4af                            | 0x1401fa4a8    |
| 0x1401fa4b5    | LAB_1401fa4b5                            | 0x1401fa496    |
| 0x1401fa4be    | LAB_1401fa4be                            | 0x1401fa489    |
| 0x1401fa4e0    | LAB_1401fa4e0                            | 0x1401fa4d1    |
| 0x1401fa4e5    | LAB_1401fa4e5                            | 0x1401fa4de    |
| 0x1401fa4eb    | LAB_1401fa4eb                            | 0x1401fa4cc    |
| 0x1401fa509    | LAB_1401fa509                            | 0x1401fa4fa    |
| 0x1401fa50e    | LAB_1401fa50e                            | 0x1401fa507    |
| 0x1401fa514    | LAB_1401fa514                            | 0x1401fa4f5    |
| 0x1401fa532    | LAB_1401fa532                            | 0x1401fa523    |
| 0x1401fa537    | LAB_1401fa537                            | 0x1401fa530    |
| 0x1401fa53d    | LAB_1401fa53d                            | 0x1401fa51e    |
| 0x1401fa55b    | LAB_1401fa55b                            | 0x1401fa54c    |
| 0x1401fa560    | LAB_1401fa560                            | 0x1401fa559    |
| 0x1401fa566    | LAB_1401fa566                            | 0x1401fa547    |
| 0x1401fa584    | LAB_1401fa584                            | 0x1401fa575    |
| 0x1401fa589    | LAB_1401fa589                            | 0x1401fa582    |
| 0x1401fa58f    | LAB_1401fa58f                            | 0x1401fa570    |
| 0x1401fa5a3    | LAB_1401fa5a3                            | 0x1401fa599    |
| 0x1401fa5c1    | LAB_1401fa5c1                            | 0x1401fa5b2    |
| 0x1401fa5c6    | LAB_1401fa5c6                            | 0x1401fa5bf    |
| 0x1401fa5cc    | LAB_1401fa5cc                            | 0x1401fa5ad    |
| 0x1401fa5e0    | LAB_1401fa5e0                            | 0x1401fa5d6    |
| 0x1401fa602    | LAB_1401fa602                            | 0x1401fa633    |
| 0x1401fa61c    | LAB_1401fa61c                            | 0x1401fa60d    |
| 0x1401fa621    | LAB_1401fa621                            | 0x1401fa61a    |
| 0x1401fa627    | LAB_1401fa627                            | 0x1401fa608    |
| 0x1401fa653    | LAB_1401fa653                            | 0x1401fa649    |
| 0x1401fa674    | LAB_1401fa674                            | 0x1401fa63d    |
| 0x1401fa6ba    | LAB_1401fa6ba                            | 0x1401fa6a6    |
| 0x1401fa6ba    | LAB_1401fa6ba                            | 0x1401fa6b2    |
| 0x1401fa740    | LAB_1401fa740                            | 0x1401fa65d    |
| 0x1401fa740    | LAB_1401fa740                            | 0x1401fa683    |
| 0x1401fa740    | LAB_1401fa740                            | 0x1401fa690    |
| 0x1401fa74c    | switchD_1401fa3cd::switchdataD_1401fa74c | 0x1401fa3c3    |
| 0x14037ac60    | PTR_RedrawWindow_14037ac60               | 0x1401fa6fb    |
| 0x14037ac60    | PTR_RedrawWindow_14037ac60               | 0x1401fa73a    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa431    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa445    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa46e    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa4af    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa4e5    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa50e    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa537    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa560    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa589    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa59d    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa5c6    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa5da    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa621    |
| 0x14037ae00    | PTR_ShowWindow_14037ae00                 | 0x1401fa64d    |
| 0x14037ae00    | PTR_ShowWindow_14037ae00                 | 0x1401fa66d    |
| 0x14037ae78    | PTR_GetFocus_14037ae78                   | 0x1401fa69d    |
| 0x14037afd0    | PTR_SetWindowPos_14037afd0               | 0x1401fa6e3    |
| 0x14037afd0    | PTR_SetWindowPos_14037afd0               | 0x1401fa722    |
| 0x14037b048    | PTR_SetFocus_14037b048                   | 0x1401fa6b4    |
| EXTERNAL:0x12b | USER32.DLL::RedrawWindow                 | 0x1401fa6fb    |
| EXTERNAL:0x12b | USER32.DLL::RedrawWindow                 | 0x1401fa73a    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa431    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa445    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa46e    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa4af    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa4e5    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa50e    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa537    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa560    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa589    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa59d    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa5c6    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa5da    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa621    |
| EXTERNAL:0x15f | USER32.DLL::ShowWindow                   | 0x1401fa64d    |
| EXTERNAL:0x15f | USER32.DLL::ShowWindow                   | 0x1401fa66d    |
| EXTERNAL:0x16e | USER32.DLL::GetFocus                     | 0x1401fa69d    |
| EXTERNAL:0x199 | USER32.DLL::SetWindowPos                 | 0x1401fa6e3    |
| EXTERNAL:0x199 | USER32.DLL::SetWindowPos                 | 0x1401fa722    |
| EXTERNAL:0x1a8 | USER32.DLL::SetFocus                     | 0x1401fa6b4    |

## raw_result.value.basic_blocks

| start       | end         | successors                                                                          |
|-------------|-------------|-------------------------------------------------------------------------------------|
| 0x1401fa380 | 0x1401fa389 | 0x1401fa389                                                                         |
| 0x1401fa389 | 0x1401fa3a0 | 0x1401fa3a0                                                                         |
| 0x1401fa3a0 | 0x1401fa3b2 | 0x1401fa3b2,0x1401fa418                                                             |
| 0x1401fa3b2 | 0x1401fa3bc | 0x1401fa3bc,0x1401fa418                                                             |
| 0x1401fa3bc | 0x1401fa3cd | 0x1401fa3cd                                                                         |
| 0x1401fa3cd | 0x1401fa3cf | 0x1401fa3cf,0x1401fa3d8,0x1401fa3e1,0x1401fa3ea,0x1401fa3f3,0x1401fa3fc,0x1401fa405 |
| 0x1401fa3cf | 0x1401fa3d8 | 0x1401fa40c                                                                         |
| 0x1401fa3d8 | 0x1401fa3e1 | 0x1401fa40c                                                                         |
| 0x1401fa3e1 | 0x1401fa3ea | 0x1401fa40c                                                                         |
| 0x1401fa3ea | 0x1401fa3f3 | 0x1401fa40c                                                                         |
| 0x1401fa3f3 | 0x1401fa3fc | 0x1401fa40c                                                                         |
| 0x1401fa3fc | 0x1401fa405 | 0x1401fa40c                                                                         |
| 0x1401fa405 | 0x1401fa40c | 0x1401fa40c                                                                         |
| 0x1401fa40c | 0x1401fa410 | 0x1401fa410,0x1401fa418                                                             |
| 0x1401fa410 | 0x1401fa418 | 0x1401fa420                                                                         |
| 0x1401fa418 | 0x1401fa420 | 0x1401fa420                                                                         |
| 0x1401fa420 | 0x1401fa42c | 0x1401fa42c,0x1401fa437                                                             |
| 0x1401fa42c | 0x1401fa437 | 0x1401fa437                                                                         |
| 0x1401fa437 | 0x1401fa443 | 0x1401fa443,0x1401fa44b                                                             |
| 0x1401fa443 | 0x1401fa44b | 0x1401fa44b                                                                         |
| 0x1401fa44b | 0x1401fa457 | 0x1401fa457,0x1401fa474                                                             |
| 0x1401fa457 | 0x1401fa45c | 0x1401fa45c,0x1401fa469                                                             |
| 0x1401fa45c | 0x1401fa469 | 0x1401fa469,0x1401fa46e                                                             |
| 0x1401fa469 | 0x1401fa46e | 0x1401fa46e                                                                         |
| 0x1401fa46e | 0x1401fa474 | 0x1401fa474                                                                         |
| 0x1401fa474 | 0x1401fa48b | 0x1401fa48b,0x1401fa4be                                                             |
| 0x1401fa48b | 0x1401fa490 | 0x1401fa490                                                                         |
| 0x1401fa490 | 0x1401fa498 | 0x1401fa498,0x1401fa4b5                                                             |
| 0x1401fa498 | 0x1401fa49d | 0x1401fa49d,0x1401fa4aa                                                             |
| 0x1401fa49d | 0x1401fa4aa | 0x1401fa4aa,0x1401fa4af                                                             |
| 0x1401fa4aa | 0x1401fa4af | 0x1401fa4af                                                                         |
| 0x1401fa4af | 0x1401fa4b5 | 0x1401fa4b5                                                                         |
| 0x1401fa4b5 | 0x1401fa4be | 0x1401fa490,0x1401fa4be                                                             |
| 0x1401fa4be | 0x1401fa4ce | 0x1401fa4ce,0x1401fa4eb                                                             |
| 0x1401fa4ce | 0x1401fa4d3 | 0x1401fa4d3,0x1401fa4e0                                                             |
| 0x1401fa4d3 | 0x1401fa4e0 | 0x1401fa4e0,0x1401fa4e5                                                             |
| 0x1401fa4e0 | 0x1401fa4e5 | 0x1401fa4e5                                                                         |
| 0x1401fa4e5 | 0x1401fa4eb | 0x1401fa4eb                                                                         |
| 0x1401fa4eb | 0x1401fa4f7 | 0x1401fa4f7,0x1401fa514                                                             |
| 0x1401fa4f7 | 0x1401fa4fc | 0x1401fa4fc,0x1401fa509                                                             |
| 0x1401fa4fc | 0x1401fa509 | 0x1401fa509,0x1401fa50e                                                             |
| 0x1401fa509 | 0x1401fa50e | 0x1401fa50e                                                                         |
| 0x1401fa50e | 0x1401fa514 | 0x1401fa514                                                                         |
| 0x1401fa514 | 0x1401fa520 | 0x1401fa520,0x1401fa53d                                                             |
| 0x1401fa520 | 0x1401fa525 | 0x1401fa525,0x1401fa532                                                             |
| 0x1401fa525 | 0x1401fa532 | 0x1401fa532,0x1401fa537                                                             |
| 0x1401fa532 | 0x1401fa537 | 0x1401fa537                                                                         |
| 0x1401fa537 | 0x1401fa53d | 0x1401fa53d                                                                         |
| 0x1401fa53d | 0x1401fa549 | 0x1401fa549,0x1401fa566                                                             |
| 0x1401fa549 | 0x1401fa54e | 0x1401fa54e,0x1401fa55b                                                             |
| 0x1401fa54e | 0x1401fa55b | 0x1401fa55b,0x1401fa560                                                             |
| 0x1401fa55b | 0x1401fa560 | 0x1401fa560                                                                         |
| 0x1401fa560 | 0x1401fa566 | 0x1401fa566                                                                         |
| 0x1401fa566 | 0x1401fa572 | 0x1401fa572,0x1401fa58f                                                             |
| 0x1401fa572 | 0x1401fa577 | 0x1401fa577,0x1401fa584                                                             |
| 0x1401fa577 | 0x1401fa584 | 0x1401fa584,0x1401fa589                                                             |
| 0x1401fa584 | 0x1401fa589 | 0x1401fa589                                                                         |
| 0x1401fa589 | 0x1401fa58f | 0x1401fa58f                                                                         |
| 0x1401fa58f | 0x1401fa59b | 0x1401fa59b,0x1401fa5a3                                                             |
| 0x1401fa59b | 0x1401fa5a3 | 0x1401fa5a3                                                                         |
| 0x1401fa5a3 | 0x1401fa5af | 0x1401fa5af,0x1401fa5cc                                                             |
| 0x1401fa5af | 0x1401fa5b4 | 0x1401fa5b4,0x1401fa5c1                                                             |
| 0x1401fa5b4 | 0x1401fa5c1 | 0x1401fa5c1,0x1401fa5c6                                                             |
| 0x1401fa5c1 | 0x1401fa5c6 | 0x1401fa5c6                                                                         |
| 0x1401fa5c6 | 0x1401fa5cc | 0x1401fa5cc                                                                         |
| 0x1401fa5cc | 0x1401fa5d8 | 0x1401fa5d8,0x1401fa5e0                                                             |
| 0x1401fa5d8 | 0x1401fa5e0 | 0x1401fa5e0                                                                         |
| 0x1401fa5e0 | 0x1401fa602 | 0x1401fa602                                                                         |
| 0x1401fa602 | 0x1401fa60a | 0x1401fa60a,0x1401fa627                                                             |
| 0x1401fa60a | 0x1401fa60f | 0x1401fa60f,0x1401fa61c                                                             |
| 0x1401fa60f | 0x1401fa61c | 0x1401fa61c,0x1401fa621                                                             |
| 0x1401fa61c | 0x1401fa621 | 0x1401fa621                                                                         |
| 0x1401fa621 | 0x1401fa627 | 0x1401fa627                                                                         |
| 0x1401fa627 | 0x1401fa635 | 0x1401fa602,0x1401fa635                                                             |
| 0x1401fa635 | 0x1401fa63f | 0x1401fa63f,0x1401fa674                                                             |
| 0x1401fa63f | 0x1401fa64b | 0x1401fa64b,0x1401fa653                                                             |
| 0x1401fa64b | 0x1401fa653 | 0x1401fa653                                                                         |
| 0x1401fa653 | 0x1401fa663 | 0x1401fa663,0x1401fa740                                                             |
| 0x1401fa663 | 0x1401fa674 |                                                                                     |
| 0x1401fa674 | 0x1401fa689 | 0x1401fa689,0x1401fa740                                                             |
| 0x1401fa689 | 0x1401fa696 | 0x1401fa696,0x1401fa740                                                             |
| 0x1401fa696 | 0x1401fa6a8 | 0x1401fa6a8,0x1401fa6ba                                                             |
| 0x1401fa6a8 | 0x1401fa6b4 | 0x1401fa6b4,0x1401fa6ba                                                             |
| 0x1401fa6b4 | 0x1401fa6ba | 0x1401fa6ba                                                                         |
| 0x1401fa6ba | 0x1401fa740 | 0x1401fa740                                                                         |
| 0x1401fa740 | 0x1401fa749 |                                                                                     |

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

| role      | ordinal | name    | data_type | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|-----------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | longlong  | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

## raw_result.value.native_api.jump_tables

| dispatch_address | data_sources    | mappings                                                                                                        | default_targets | limitations |
|------------------|-----------------|-----------------------------------------------------------------------------------------------------------------|-----------------|-------------|
| 0x1401fa3cd      | [object Object] | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |             |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------------------------------------------------------|-----------------|
| 0x1401fa391#22   | 0x1401fa391 | 22       | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa391#23   | 0x1401fa391 | 23       | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa391#3046 | 0x1401fa391 | 3046     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa398#2986 | 0x1401fa398 | 2986     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa398#3031 | 0x1401fa398 | 3031     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3cd#87   | 0x1401fa3cd | 87       | BRANCHIND    | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3cf#1021 | 0x1401fa3cf | 1021     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3cf#1022 | 0x1401fa3cf | 1022     | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3cf#3053 | 0x1401fa3cf | 3053     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3d6#1025 | 0x1401fa3d6 | 1025     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3d8#1016 | 0x1401fa3d8 | 1016     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3d8#1017 | 0x1401fa3d8 | 1017     | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3d8#3052 | 0x1401fa3d8 | 3052     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3df#1020 | 0x1401fa3df | 1020     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3e1#1011 | 0x1401fa3e1 | 1011     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3e1#1012 | 0x1401fa3e1 | 1012     | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3e1#3051 | 0x1401fa3e1 | 3051     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3e8#1015 | 0x1401fa3e8 | 1015     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3ea#1006 | 0x1401fa3ea | 1006     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3ea#1007 | 0x1401fa3ea | 1007     | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3ea#3050 | 0x1401fa3ea | 3050     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3f1#1010 | 0x1401fa3f1 | 1010     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3f3#1001 | 0x1401fa3f3 | 1001     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3f3#1002 | 0x1401fa3f3 | 1002     | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3f3#3049 | 0x1401fa3f3 | 3049     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3fa#1005 | 0x1401fa3fa | 1005     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3fc#996  | 0x1401fa3fc | 996      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3fc#997  | 0x1401fa3fc | 997      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3fc#3048 | 0x1401fa3fc | 3048     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa403#1000 | 0x1401fa403 | 1000     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa405#977  | 0x1401fa405 | 977      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa405#978  | 0x1401fa405 | 978      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa405#3047 | 0x1401fa405 | 3047     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa40c#985  | 0x1401fa40c | 985      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa40c#2329 | 0x1401fa40c | 2329     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401fa40e#991  | 0x1401fa40e | 991      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa410#2983 | 0x1401fa410 | 2983     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa416#995  | 0x1401fa416 | 995      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa418#2984 | 0x1401fa418 | 2984     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa41b#3030 | 0x1401fa41b | 3030     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa420#98   | 0x1401fa420 | 98       | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa420#99   | 0x1401fa420 | 99       | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa420#2973 | 0x1401fa420 | 2973     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa420#3032 | 0x1401fa420 | 3032     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa420#3054 | 0x1401fa420 | 3054     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa427#105  | 0x1401fa427 | 105      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa42a#110  | 0x1401fa42a | 110      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa431#115  | 0x1401fa431 | 115      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa437#116  | 0x1401fa437 | 116      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa437#117  | 0x1401fa437 | 117      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa437#3055 | 0x1401fa437 | 3055     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa43e#123  | 0x1401fa43e | 123      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa441#128  | 0x1401fa441 | 128      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa445#134  | 0x1401fa445 | 134      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa44b#135  | 0x1401fa44b | 135      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa44b#136  | 0x1401fa44b | 136      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa44b#3056 | 0x1401fa44b | 3056     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa452#142  | 0x1401fa452 | 142      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa455#147  | 0x1401fa455 | 147      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa457#2982 | 0x1401fa457 | 2982     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa45a#157  | 0x1401fa45a | 157      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa45c#158  | 0x1401fa45c | 158      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa45c#159  | 0x1401fa45c | 159      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa45c#165  | 0x1401fa45c | 165      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa45c#3057 | 0x1401fa45c | 3057     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa467#172  | 0x1401fa467 | 172      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa467#3037 | 0x1401fa467 | 3037     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa469#2987 | 0x1401fa469 | 2987     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa46e#177  | 0x1401fa46e | 177      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa46e#2988 | 0x1401fa46e | 2988     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa474#178  | 0x1401fa474 | 178      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa478#180  | 0x1401fa478 | 180      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa478#3058 | 0x1401fa478 | 3058     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa47f#182  | 0x1401fa47f | 182      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa47f#3059 | 0x1401fa47f | 3059     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa486#189  | 0x1401fa486 | 189      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa489#194  | 0x1401fa489 | 194      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa490#197  | 0x1401fa490 | 197      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa490#1756 | 0x1401fa490 | 1756     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa490#3060 | 0x1401fa490 | 3060     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa493#203  | 0x1401fa493 | 203      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa496#208  | 0x1401fa496 | 208      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa498#2974 | 0x1401fa498 | 2974     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa49b#218  | 0x1401fa49b | 218      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa49d#219  | 0x1401fa49d | 219      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa49d#220  | 0x1401fa49d | 220      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa49d#226  | 0x1401fa49d | 226      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa49d#3061 | 0x1401fa49d | 3061     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4a8#233  | 0x1401fa4a8 | 233      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4a8#3038 | 0x1401fa4a8 | 3038     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4aa#2992 | 0x1401fa4aa | 2992     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4af#238  | 0x1401fa4af | 238      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa4af#2993 | 0x1401fa4af | 2993     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4b5#3033 | 0x1401fa4b5 | 3033     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa4b9#253  | 0x1401fa4b9 | 253      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4bc#259  | 0x1401fa4bc | 259      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4be#260  | 0x1401fa4be | 260      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4be#3062 | 0x1401fa4be | 3062     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4c9#269  | 0x1401fa4c9 | 269      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4cc#274  | 0x1401fa4cc | 274      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4ce#2975 | 0x1401fa4ce | 2975     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4d1#284  | 0x1401fa4d1 | 284      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4d3#285  | 0x1401fa4d3 | 285      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4d3#286  | 0x1401fa4d3 | 286      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4d3#292  | 0x1401fa4d3 | 292      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4d3#3063 | 0x1401fa4d3 | 3063     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4de#299  | 0x1401fa4de | 299      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4de#3039 | 0x1401fa4de | 3039     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4e0#2996 | 0x1401fa4e0 | 2996     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4e5#304  | 0x1401fa4e5 | 304      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa4e5#2997 | 0x1401fa4e5 | 2997     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4eb#305  | 0x1401fa4eb | 305      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4eb#306  | 0x1401fa4eb | 306      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4eb#3064 | 0x1401fa4eb | 3064     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4f2#312  | 0x1401fa4f2 | 312      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4f5#317  | 0x1401fa4f5 | 317      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4f7#2976 | 0x1401fa4f7 | 2976     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4fa#327  | 0x1401fa4fa | 327      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4fc#328  | 0x1401fa4fc | 328      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4fc#329  | 0x1401fa4fc | 329      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4fc#335  | 0x1401fa4fc | 335      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4fc#3065 | 0x1401fa4fc | 3065     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa507#342  | 0x1401fa507 | 342      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa507#3040 | 0x1401fa507 | 3040     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa509#3000 | 0x1401fa509 | 3000     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa50e#347  | 0x1401fa50e | 347      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa50e#3001 | 0x1401fa50e | 3001     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa514#348  | 0x1401fa514 | 348      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa514#349  | 0x1401fa514 | 349      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa514#3066 | 0x1401fa514 | 3066     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa51b#355  | 0x1401fa51b | 355      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa51e#360  | 0x1401fa51e | 360      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa520#2977 | 0x1401fa520 | 2977     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa523#370  | 0x1401fa523 | 370      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa525#371  | 0x1401fa525 | 371      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa525#372  | 0x1401fa525 | 372      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa525#378  | 0x1401fa525 | 378      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa525#3067 | 0x1401fa525 | 3067     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa530#385  | 0x1401fa530 | 385      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa530#3041 | 0x1401fa530 | 3041     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa532#3004 | 0x1401fa532 | 3004     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa537#390  | 0x1401fa537 | 390      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa537#3005 | 0x1401fa537 | 3005     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa53d#391  | 0x1401fa53d | 391      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa53d#392  | 0x1401fa53d | 392      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa53d#3068 | 0x1401fa53d | 3068     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa544#398  | 0x1401fa544 | 398      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa547#403  | 0x1401fa547 | 403      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa549#2978 | 0x1401fa549 | 2978     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa54c#413  | 0x1401fa54c | 413      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa54e#414  | 0x1401fa54e | 414      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa54e#415  | 0x1401fa54e | 415      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa54e#421  | 0x1401fa54e | 421      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa54e#3069 | 0x1401fa54e | 3069     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa559#428  | 0x1401fa559 | 428      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa559#3042 | 0x1401fa559 | 3042     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa55b#3008 | 0x1401fa55b | 3008     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa560#433  | 0x1401fa560 | 433      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa560#3009 | 0x1401fa560 | 3009     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa566#434  | 0x1401fa566 | 434      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa566#435  | 0x1401fa566 | 435      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa566#3070 | 0x1401fa566 | 3070     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa56d#441  | 0x1401fa56d | 441      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa570#446  | 0x1401fa570 | 446      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa572#2979 | 0x1401fa572 | 2979     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa575#456  | 0x1401fa575 | 456      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa577#457  | 0x1401fa577 | 457      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa577#458  | 0x1401fa577 | 458      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa577#464  | 0x1401fa577 | 464      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa577#3071 | 0x1401fa577 | 3071     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa582#471  | 0x1401fa582 | 471      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa582#3043 | 0x1401fa582 | 3043     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa584#3012 | 0x1401fa584 | 3012     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa589#476  | 0x1401fa589 | 476      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa589#3013 | 0x1401fa589 | 3013     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa58f#477  | 0x1401fa58f | 477      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa58f#478  | 0x1401fa58f | 478      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa58f#3072 | 0x1401fa58f | 3072     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa596#484  | 0x1401fa596 | 484      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa599#489  | 0x1401fa599 | 489      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa59d#503  | 0x1401fa59d | 503      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa5a3#504  | 0x1401fa5a3 | 504      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5a3#505  | 0x1401fa5a3 | 505      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5a3#3073 | 0x1401fa5a3 | 3073     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5aa#511  | 0x1401fa5aa | 511      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5ad#516  | 0x1401fa5ad | 516      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa5af#2980 | 0x1401fa5af | 2980     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5b2#526  | 0x1401fa5b2 | 526      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa5b4#527  | 0x1401fa5b4 | 527      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5b4#528  | 0x1401fa5b4 | 528      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5b4#534  | 0x1401fa5b4 | 534      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5b4#3074 | 0x1401fa5b4 | 3074     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5bf#541  | 0x1401fa5bf | 541      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa5bf#3044 | 0x1401fa5bf | 3044     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5c1#3017 | 0x1401fa5c1 | 3017     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5c6#546  | 0x1401fa5c6 | 546      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa5c6#3018 | 0x1401fa5c6 | 3018     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5cc#547  | 0x1401fa5cc | 547      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5cc#548  | 0x1401fa5cc | 548      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5cc#3075 | 0x1401fa5cc | 3075     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5d3#554  | 0x1401fa5d3 | 554      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5d6#559  | 0x1401fa5d6 | 559      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa5da#565  | 0x1401fa5da | 565      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa5e0#566  | 0x1401fa5e0 | 566      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5e0#567  | 0x1401fa5e0 | 567      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5e0#3076 | 0x1401fa5e0 | 3076     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5e7#3034 | 0x1401fa5e7 | 3034     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5f1#576  | 0x1401fa5f1 | 576      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5f6#577  | 0x1401fa5f6 | 577      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5f6#578  | 0x1401fa5f6 | 578      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5f6#3077 | 0x1401fa5f6 | 3077     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5fd#582  | 0x1401fa5fd | 582      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa602#583  | 0x1401fa602 | 583      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa602#1754 | 0x1401fa602 | 1754     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa602#2779 | 0x1401fa602 | 2779     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa602#2822 | 0x1401fa602 | 2822     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa602#3078 | 0x1401fa602 | 3078     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa605#589  | 0x1401fa605 | 589      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa608#594  | 0x1401fa608 | 594      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa60a#2981 | 0x1401fa60a | 2981     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa60d#604  | 0x1401fa60d | 604      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa60f#605  | 0x1401fa60f | 605      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa60f#606  | 0x1401fa60f | 606      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa60f#612  | 0x1401fa60f | 612      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa60f#3079 | 0x1401fa60f | 3079     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa61a#619  | 0x1401fa61a | 619      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa61a#3045 | 0x1401fa61a | 3045     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa61c#3022 | 0x1401fa61c | 3022     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa621#624  | 0x1401fa621 | 624      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa621#2763 | 0x1401fa621 | 2763     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa621#2806 | 0x1401fa621 | 2806     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa621#3023 | 0x1401fa621 | 3023     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa627#2778 | 0x1401fa627 | 2778     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa627#2821 | 0x1401fa627 | 2821     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa627#3035 | 0x1401fa627 | 3035     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa62b#3036 | 0x1401fa62b | 3036     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa630#641  | 0x1401fa630 | 641      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa630#3080 | 0x1401fa630 | 3080     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa633#647  | 0x1401fa633 | 647      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa63d#661  | 0x1401fa63d | 661      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa63f#662  | 0x1401fa63f | 662      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa63f#663  | 0x1401fa63f | 663      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa63f#3089 | 0x1401fa63f | 3089     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa646#669  | 0x1401fa646 | 669      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa649#674  | 0x1401fa649 | 674      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa64d#688  | 0x1401fa64d | 688      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa64d#2772 | 0x1401fa64d | 2772     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa64d#2815 | 0x1401fa64d | 2815     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa653#689  | 0x1401fa653 | 689      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa653#690  | 0x1401fa653 | 690      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa653#2777 | 0x1401fa653 | 2777     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa653#2820 | 0x1401fa653 | 2820     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa653#3090 | 0x1401fa653 | 3090     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa65a#696  | 0x1401fa65a | 696      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa65d#701  | 0x1401fa65d | 701      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa66d#733  | 0x1401fa66d | 733      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa66d#976  | 0x1401fa66d | 976      | RETURN       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa66d#2773 | 0x1401fa66d | 2773     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa66d#2816 | 0x1401fa66d | 2816     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa677#761  | 0x1401fa677 | 761      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa677#2764 | 0x1401fa677 | 2764     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa677#2807 | 0x1401fa677 | 2807     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa67c#762  | 0x1401fa67c | 762      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa67c#763  | 0x1401fa67c | 763      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa67c#769  | 0x1401fa67c | 769      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa67c#3081 | 0x1401fa67c | 3081     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa683#774  | 0x1401fa683 | 774      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa689#775  | 0x1401fa689 | 775      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa689#776  | 0x1401fa689 | 776      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa689#782  | 0x1401fa689 | 782      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa689#3082 | 0x1401fa689 | 3082     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa690#787  | 0x1401fa690 | 787      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa696#788  | 0x1401fa696 | 788      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa696#789  | 0x1401fa696 | 789      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa696#3083 | 0x1401fa696 | 3083     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa69d#794  | 0x1401fa69d | 794      | CALL         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa69d#2765 | 0x1401fa69d | 2765     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa69d#2808 | 0x1401fa69d | 2808     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6a3#800  | 0x1401fa6a3 | 800      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6a6#806  | 0x1401fa6a6 | 806      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa6a8#807  | 0x1401fa6a8 | 807      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6a8#808  | 0x1401fa6a8 | 808      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6a8#3084 | 0x1401fa6a8 | 3084     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa6af#814  | 0x1401fa6af | 814      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6b2#819  | 0x1401fa6b2 | 819      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa6b4#823  | 0x1401fa6b4 | 823      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa6b4#2766 | 0x1401fa6b4 | 2766     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6b4#2809 | 0x1401fa6b4 | 2809     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6ba#2775 | 0x1401fa6ba | 2775     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa6ba#2818 | 0x1401fa6ba | 2818     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa6bd#827  | 0x1401fa6bd | 827      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa6bd#2767 | 0x1401fa6bd | 2767     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6bd#2810 | 0x1401fa6bd | 2810     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6c2#828  | 0x1401fa6c2 | 828      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6c2#829  | 0x1401fa6c2 | 829      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6c2#3085 | 0x1401fa6c2 | 3085     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa6e3#873  | 0x1401fa6e3 | 873      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa6e3#2768 | 0x1401fa6e3 | 2768     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6e3#2811 | 0x1401fa6e3 | 2811     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6e9#874  | 0x1401fa6e9 | 874      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6e9#875  | 0x1401fa6e9 | 875      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6e9#3086 | 0x1401fa6e9 | 3086     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa6fb#901  | 0x1401fa6fb | 901      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                                 |                 |
| 0x1401fa6fb#2769 | 0x1401fa6fb | 2769     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6fb#2812 | 0x1401fa6fb | 2812     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa701#902  | 0x1401fa701 | 902      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa701#903  | 0x1401fa701 | 903      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa701#3087 | 0x1401fa701 | 3087     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa722#947  | 0x1401fa722 | 947      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa722#2770 | 0x1401fa722 | 2770     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa722#2813 | 0x1401fa722 | 2813     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa728#948  | 0x1401fa728 | 948      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa728#949  | 0x1401fa728 | 949      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa728#3088 | 0x1401fa728 | 3088     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa73a#975  | 0x1401fa73a | 975      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                                 |                 |
| 0x1401fa73a#2771 | 0x1401fa73a | 2771     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa73a#2814 | 0x1401fa73a | 2814     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa748#757  | 0x1401fa748 | 757      | RETURN       | true    | member           | [object Object]                                                                                                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401fa391#3046 | 0x1401fa391#23   | 1           |
| 0x1401fa391#22   | 0x1401fa391#3046 | 0           |
| 0x1401fa391#23   | 0x1401fa3cd#87   | 0           |
| 0x1401fa3cf#3053 | 0x1401fa3cf#1022 | 1           |
| 0x1401fa3cf#1021 | 0x1401fa3cf#3053 | 0           |
| 0x1401fa3d8#3052 | 0x1401fa3d8#1017 | 1           |
| 0x1401fa3d8#1016 | 0x1401fa3d8#3052 | 0           |
| 0x1401fa3e1#3051 | 0x1401fa3e1#1012 | 1           |
| 0x1401fa3e1#1011 | 0x1401fa3e1#3051 | 0           |
| 0x1401fa3ea#3050 | 0x1401fa3ea#1007 | 1           |
| 0x1401fa3ea#1006 | 0x1401fa3ea#3050 | 0           |
| 0x1401fa3f3#3049 | 0x1401fa3f3#1002 | 1           |
| 0x1401fa3f3#1001 | 0x1401fa3f3#3049 | 0           |
| 0x1401fa3fc#3048 | 0x1401fa3fc#997  | 1           |
| 0x1401fa3fc#996  | 0x1401fa3fc#3048 | 0           |
| 0x1401fa405#3047 | 0x1401fa405#978  | 1           |
| 0x1401fa405#977  | 0x1401fa405#3047 | 0           |
| 0x1401fa40c#2329 | 0x1401fa40c#985  | 0           |
| 0x1401fa405#978  | 0x1401fa40c#2329 | 0           |
| 0x1401fa3fc#997  | 0x1401fa40c#2329 | 1           |
| 0x1401fa3f3#1002 | 0x1401fa40c#2329 | 2           |
| 0x1401fa3ea#1007 | 0x1401fa40c#2329 | 3           |
| 0x1401fa3e1#1012 | 0x1401fa40c#2329 | 4           |
| 0x1401fa3d8#1017 | 0x1401fa40c#2329 | 5           |
| 0x1401fa3cf#1022 | 0x1401fa40c#2329 | 6           |
| 0x1401fa40c#985  | 0x1401fa40e#991  | 1           |
| 0x1401fa420#3054 | 0x1401fa420#99   | 1           |
| 0x1401fa418#2984 | 0x1401fa420#2973 | 0           |
| 0x1401fa410#2983 | 0x1401fa420#2973 | 1           |
| 0x1401fa41b#3030 | 0x1401fa420#3032 | 0           |
| 0x1401fa398#3031 | 0x1401fa420#3032 | 1           |
| 0x1401fa420#98   | 0x1401fa420#3054 | 0           |
| 0x1401fa420#99   | 0x1401fa427#105  | 0           |
| 0x1401fa427#105  | 0x1401fa42a#110  | 1           |
| 0x1401fa420#99   | 0x1401fa431#115  | 1           |
| 0x1401fa437#3055 | 0x1401fa437#117  | 1           |
| 0x1401fa437#116  | 0x1401fa437#3055 | 0           |
| 0x1401fa437#117  | 0x1401fa43e#123  | 0           |
| 0x1401fa43e#123  | 0x1401fa441#128  | 1           |
| 0x1401fa437#117  | 0x1401fa445#134  | 1           |
| 0x1401fa420#3032 | 0x1401fa445#134  | 2           |
| 0x1401fa44b#3056 | 0x1401fa44b#136  | 1           |
| 0x1401fa44b#135  | 0x1401fa44b#3056 | 0           |
| 0x1401fa44b#136  | 0x1401fa452#142  | 0           |
| 0x1401fa452#142  | 0x1401fa455#147  | 1           |
| 0x1401fa420#2973 | 0x1401fa457#2982 | 0           |
| 0x1401fa457#2982 | 0x1401fa45a#157  | 1           |
| 0x1401fa45c#3057 | 0x1401fa45c#159  | 1           |
| 0x1401fa45c#159  | 0x1401fa45c#165  | 0           |
| 0x1401fa45c#158  | 0x1401fa45c#3057 | 0           |
| 0x1401fa45c#165  | 0x1401fa467#172  | 1           |
| 0x1401fa398#2986 | 0x1401fa467#3037 | 0           |
| 0x1401fa44b#136  | 0x1401fa46e#177  | 1           |
| 0x1401fa46e#2988 | 0x1401fa46e#177  | 2           |
| 0x1401fa467#3037 | 0x1401fa46e#2988 | 0           |
| 0x1401fa469#2987 | 0x1401fa46e#2988 | 1           |
| 0x1401fa478#180  | 0x1401fa478#3058 | 0           |
| 0x1401fa47f#182  | 0x1401fa47f#3059 | 0           |
| 0x1401fa474#178  | 0x1401fa486#189  | 1           |
| 0x1401fa486#189  | 0x1401fa489#194  | 1           |
| 0x1401fa490#1756 | 0x1401fa490#197  | 1           |
| 0x1401fa4b5#3033 | 0x1401fa490#1756 | 0           |
| 0x1401fa47f#3059 | 0x1401fa490#1756 | 1           |
| 0x1401fa490#197  | 0x1401fa490#3060 | 0           |
| 0x1401fa490#3060 | 0x1401fa493#203  | 0           |
| 0x1401fa493#203  | 0x1401fa496#208  | 1           |
| 0x1401fa420#2973 | 0x1401fa498#2974 | 0           |
| 0x1401fa498#2974 | 0x1401fa49b#218  | 1           |
| 0x1401fa49d#3061 | 0x1401fa49d#220  | 1           |
| 0x1401fa49d#220  | 0x1401fa49d#226  | 0           |
| 0x1401fa49d#219  | 0x1401fa49d#3061 | 0           |
| 0x1401fa49d#226  | 0x1401fa4a8#233  | 1           |
| 0x1401fa398#2986 | 0x1401fa4a8#3038 | 0           |
| 0x1401fa490#3060 | 0x1401fa4af#238  | 1           |
| 0x1401fa4af#2993 | 0x1401fa4af#238  | 2           |
| 0x1401fa4a8#3038 | 0x1401fa4af#2993 | 0           |
| 0x1401fa4aa#2992 | 0x1401fa4af#2993 | 1           |
| 0x1401fa490#1756 | 0x1401fa4b5#3033 | 0           |
| 0x1401fa4b5#3033 | 0x1401fa4b9#253  | 0           |
| 0x1401fa478#3058 | 0x1401fa4b9#253  | 1           |
| 0x1401fa4b9#253  | 0x1401fa4bc#259  | 1           |
| 0x1401fa4be#3062 | 0x1401fa4be#260  | 1           |
| 0x1401fa478#180  | 0x1401fa4be#3062 | 0           |
| 0x1401fa4be#260  | 0x1401fa4c9#269  | 0           |
| 0x1401fa4c9#269  | 0x1401fa4cc#274  | 1           |
| 0x1401fa420#2973 | 0x1401fa4ce#2975 | 0           |
| 0x1401fa4ce#2975 | 0x1401fa4d1#284  | 1           |
| 0x1401fa4d3#3063 | 0x1401fa4d3#286  | 1           |
| 0x1401fa4d3#286  | 0x1401fa4d3#292  | 0           |
| 0x1401fa4d3#285  | 0x1401fa4d3#3063 | 0           |
| 0x1401fa4d3#292  | 0x1401fa4de#299  | 1           |
| 0x1401fa398#2986 | 0x1401fa4de#3039 | 0           |
| 0x1401fa4be#260  | 0x1401fa4e5#304  | 1           |
| 0x1401fa4e5#2997 | 0x1401fa4e5#304  | 2           |
| 0x1401fa4de#3039 | 0x1401fa4e5#2997 | 0           |
| 0x1401fa4e0#2996 | 0x1401fa4e5#2997 | 1           |
| 0x1401fa4eb#3064 | 0x1401fa4eb#306  | 1           |
| 0x1401fa4eb#305  | 0x1401fa4eb#3064 | 0           |
| 0x1401fa4eb#306  | 0x1401fa4f2#312  | 0           |
| 0x1401fa4f2#312  | 0x1401fa4f5#317  | 1           |
| 0x1401fa420#2973 | 0x1401fa4f7#2976 | 0           |
| 0x1401fa4f7#2976 | 0x1401fa4fa#327  | 1           |
| 0x1401fa4fc#3065 | 0x1401fa4fc#329  | 1           |
| 0x1401fa4fc#329  | 0x1401fa4fc#335  | 0           |
| 0x1401fa4fc#328  | 0x1401fa4fc#3065 | 0           |
| 0x1401fa4fc#335  | 0x1401fa507#342  | 1           |
| 0x1401fa398#2986 | 0x1401fa507#3040 | 0           |
| 0x1401fa4eb#306  | 0x1401fa50e#347  | 1           |
| 0x1401fa50e#3001 | 0x1401fa50e#347  | 2           |
| 0x1401fa507#3040 | 0x1401fa50e#3001 | 0           |
| 0x1401fa509#3000 | 0x1401fa50e#3001 | 1           |
| 0x1401fa514#3066 | 0x1401fa514#349  | 1           |
| 0x1401fa514#348  | 0x1401fa514#3066 | 0           |
| 0x1401fa514#349  | 0x1401fa51b#355  | 0           |
| 0x1401fa51b#355  | 0x1401fa51e#360  | 1           |
| 0x1401fa420#2973 | 0x1401fa520#2977 | 0           |
| 0x1401fa520#2977 | 0x1401fa523#370  | 1           |
| 0x1401fa525#3067 | 0x1401fa525#372  | 1           |
| 0x1401fa525#372  | 0x1401fa525#378  | 0           |
| 0x1401fa525#371  | 0x1401fa525#3067 | 0           |
| 0x1401fa525#378  | 0x1401fa530#385  | 1           |
| 0x1401fa398#2986 | 0x1401fa530#3041 | 0           |
| 0x1401fa514#349  | 0x1401fa537#390  | 1           |
| 0x1401fa537#3005 | 0x1401fa537#390  | 2           |
| 0x1401fa530#3041 | 0x1401fa537#3005 | 0           |
| 0x1401fa532#3004 | 0x1401fa537#3005 | 1           |
| 0x1401fa53d#3068 | 0x1401fa53d#392  | 1           |
| 0x1401fa53d#391  | 0x1401fa53d#3068 | 0           |
| 0x1401fa53d#392  | 0x1401fa544#398  | 0           |
| 0x1401fa544#398  | 0x1401fa547#403  | 1           |
| 0x1401fa420#2973 | 0x1401fa549#2978 | 0           |
| 0x1401fa549#2978 | 0x1401fa54c#413  | 1           |
| 0x1401fa54e#3069 | 0x1401fa54e#415  | 1           |
| 0x1401fa54e#415  | 0x1401fa54e#421  | 0           |
| 0x1401fa54e#414  | 0x1401fa54e#3069 | 0           |
| 0x1401fa54e#421  | 0x1401fa559#428  | 1           |
| 0x1401fa398#2986 | 0x1401fa559#3042 | 0           |
| 0x1401fa53d#392  | 0x1401fa560#433  | 1           |
| 0x1401fa560#3009 | 0x1401fa560#433  | 2           |
| 0x1401fa559#3042 | 0x1401fa560#3009 | 0           |
| 0x1401fa55b#3008 | 0x1401fa560#3009 | 1           |
| 0x1401fa566#3070 | 0x1401fa566#435  | 1           |
| 0x1401fa566#434  | 0x1401fa566#3070 | 0           |
| 0x1401fa566#435  | 0x1401fa56d#441  | 0           |
| 0x1401fa56d#441  | 0x1401fa570#446  | 1           |
| 0x1401fa420#2973 | 0x1401fa572#2979 | 0           |
| 0x1401fa572#2979 | 0x1401fa575#456  | 1           |
| 0x1401fa577#3071 | 0x1401fa577#458  | 1           |
| 0x1401fa577#458  | 0x1401fa577#464  | 0           |
| 0x1401fa577#457  | 0x1401fa577#3071 | 0           |
| 0x1401fa577#464  | 0x1401fa582#471  | 1           |
| 0x1401fa398#2986 | 0x1401fa582#3043 | 0           |
| 0x1401fa566#435  | 0x1401fa589#476  | 1           |
| 0x1401fa589#3013 | 0x1401fa589#476  | 2           |
| 0x1401fa582#3043 | 0x1401fa589#3013 | 0           |
| 0x1401fa584#3012 | 0x1401fa589#3013 | 1           |
| 0x1401fa58f#3072 | 0x1401fa58f#478  | 1           |
| 0x1401fa58f#477  | 0x1401fa58f#3072 | 0           |
| 0x1401fa58f#478  | 0x1401fa596#484  | 0           |
| 0x1401fa596#484  | 0x1401fa599#489  | 1           |
| 0x1401fa58f#478  | 0x1401fa59d#503  | 1           |
| 0x1401fa5a3#3073 | 0x1401fa5a3#505  | 1           |
| 0x1401fa5a3#504  | 0x1401fa5a3#3073 | 0           |
| 0x1401fa5a3#505  | 0x1401fa5aa#511  | 0           |
| 0x1401fa5aa#511  | 0x1401fa5ad#516  | 1           |
| 0x1401fa420#2973 | 0x1401fa5af#2980 | 0           |
| 0x1401fa5af#2980 | 0x1401fa5b2#526  | 1           |
| 0x1401fa5b4#3074 | 0x1401fa5b4#528  | 1           |
| 0x1401fa5b4#528  | 0x1401fa5b4#534  | 0           |
| 0x1401fa5b4#527  | 0x1401fa5b4#3074 | 0           |
| 0x1401fa5b4#534  | 0x1401fa5bf#541  | 1           |
| 0x1401fa398#2986 | 0x1401fa5bf#3044 | 0           |
| 0x1401fa5a3#505  | 0x1401fa5c6#546  | 1           |
| 0x1401fa5c6#3018 | 0x1401fa5c6#546  | 2           |
| 0x1401fa5bf#3044 | 0x1401fa5c6#3018 | 0           |
| 0x1401fa5c1#3017 | 0x1401fa5c6#3018 | 1           |
| 0x1401fa5cc#3075 | 0x1401fa5cc#548  | 1           |
| 0x1401fa5cc#547  | 0x1401fa5cc#3075 | 0           |
| 0x1401fa5cc#548  | 0x1401fa5d3#554  | 0           |
| 0x1401fa5d3#554  | 0x1401fa5d6#559  | 1           |
| 0x1401fa5cc#548  | 0x1401fa5da#565  | 1           |
| 0x1401fa420#3032 | 0x1401fa5da#565  | 2           |
| 0x1401fa5e0#3076 | 0x1401fa5e0#567  | 1           |
| 0x1401fa5e0#566  | 0x1401fa5e0#3076 | 0           |
| 0x1401fa5e0#567  | 0x1401fa5f1#576  | 0           |
| 0x1401fa5f6#3077 | 0x1401fa5f6#578  | 1           |
| 0x1401fa5f6#577  | 0x1401fa5f6#3077 | 0           |
| 0x1401fa5f6#578  | 0x1401fa5fd#582  | 0           |
| 0x1401fa602#1754 | 0x1401fa602#583  | 1           |
| 0x1401fa5e7#3034 | 0x1401fa602#1754 | 0           |
| 0x1401fa627#3035 | 0x1401fa602#1754 | 1           |
| 0x1401fa5f1#576  | 0x1401fa602#2779 | 0           |
| 0x1401fa627#2778 | 0x1401fa602#2779 | 1           |
| 0x1401fa5fd#582  | 0x1401fa602#2822 | 0           |
| 0x1401fa627#2821 | 0x1401fa602#2822 | 1           |
| 0x1401fa602#583  | 0x1401fa602#3078 | 0           |
| 0x1401fa602#3078 | 0x1401fa605#589  | 0           |
| 0x1401fa605#589  | 0x1401fa608#594  | 1           |
| 0x1401fa420#2973 | 0x1401fa60a#2981 | 0           |
| 0x1401fa60a#2981 | 0x1401fa60d#604  | 1           |
| 0x1401fa60f#3079 | 0x1401fa60f#606  | 1           |
| 0x1401fa60f#606  | 0x1401fa60f#612  | 0           |
| 0x1401fa60f#605  | 0x1401fa60f#3079 | 0           |
| 0x1401fa60f#612  | 0x1401fa61a#619  | 1           |
| 0x1401fa398#2986 | 0x1401fa61a#3045 | 0           |
| 0x1401fa602#3078 | 0x1401fa621#624  | 1           |
| 0x1401fa621#3023 | 0x1401fa621#624  | 2           |
| 0x1401fa602#2779 | 0x1401fa621#2763 | 0           |
| 0x1401fa602#2822 | 0x1401fa621#2806 | 0           |
| 0x1401fa61a#3045 | 0x1401fa621#3023 | 0           |
| 0x1401fa61c#3022 | 0x1401fa621#3023 | 1           |
| 0x1401fa602#2779 | 0x1401fa627#2778 | 0           |
| 0x1401fa621#2763 | 0x1401fa627#2778 | 1           |
| 0x1401fa602#2822 | 0x1401fa627#2821 | 0           |
| 0x1401fa621#2806 | 0x1401fa627#2821 | 1           |
| 0x1401fa602#1754 | 0x1401fa627#3035 | 0           |
| 0x1401fa627#3035 | 0x1401fa630#641  | 0           |
| 0x1401fa630#3080 | 0x1401fa630#641  | 1           |
| 0x1401fa62b#3036 | 0x1401fa630#3080 | 0           |
| 0x1401fa630#641  | 0x1401fa633#647  | 1           |
| 0x1401fa420#2973 | 0x1401fa63d#661  | 1           |
| 0x1401fa63f#3089 | 0x1401fa63f#663  | 1           |
| 0x1401fa63f#662  | 0x1401fa63f#3089 | 0           |
| 0x1401fa63f#663  | 0x1401fa646#669  | 0           |
| 0x1401fa646#669  | 0x1401fa649#674  | 1           |
| 0x1401fa63f#663  | 0x1401fa64d#688  | 1           |
| 0x1401fa627#2778 | 0x1401fa64d#2772 | 0           |
| 0x1401fa627#2821 | 0x1401fa64d#2815 | 0           |
| 0x1401fa653#3090 | 0x1401fa653#690  | 1           |
| 0x1401fa627#2778 | 0x1401fa653#2777 | 0           |
| 0x1401fa64d#2772 | 0x1401fa653#2777 | 1           |
| 0x1401fa627#2821 | 0x1401fa653#2820 | 0           |
| 0x1401fa64d#2815 | 0x1401fa653#2820 | 1           |
| 0x1401fa653#689  | 0x1401fa653#3090 | 0           |
| 0x1401fa653#690  | 0x1401fa65a#696  | 0           |
| 0x1401fa65a#696  | 0x1401fa65d#701  | 1           |
| 0x1401fa653#690  | 0x1401fa66d#733  | 1           |
| 0x1401fa653#2777 | 0x1401fa66d#2773 | 0           |
| 0x1401fa653#2820 | 0x1401fa66d#2816 | 0           |
| 0x1401fa627#2778 | 0x1401fa677#2764 | 0           |
| 0x1401fa627#2821 | 0x1401fa677#2807 | 0           |
| 0x1401fa67c#3081 | 0x1401fa67c#763  | 1           |
| 0x1401fa67c#763  | 0x1401fa67c#769  | 0           |
| 0x1401fa67c#762  | 0x1401fa67c#3081 | 0           |
| 0x1401fa67c#769  | 0x1401fa683#774  | 1           |
| 0x1401fa689#3082 | 0x1401fa689#776  | 1           |
| 0x1401fa689#776  | 0x1401fa689#782  | 0           |
| 0x1401fa689#775  | 0x1401fa689#3082 | 0           |
| 0x1401fa689#782  | 0x1401fa690#787  | 1           |
| 0x1401fa696#3083 | 0x1401fa696#789  | 1           |
| 0x1401fa696#788  | 0x1401fa696#3083 | 0           |
| 0x1401fa677#2764 | 0x1401fa69d#2765 | 0           |
| 0x1401fa677#2807 | 0x1401fa69d#2808 | 0           |
| 0x1401fa69d#794  | 0x1401fa6a3#800  | 0           |
| 0x1401fa696#789  | 0x1401fa6a3#800  | 1           |
| 0x1401fa6a3#800  | 0x1401fa6a6#806  | 1           |
| 0x1401fa6a8#3084 | 0x1401fa6a8#808  | 1           |
| 0x1401fa6a8#807  | 0x1401fa6a8#3084 | 0           |
| 0x1401fa6a8#808  | 0x1401fa6af#814  | 0           |
| 0x1401fa6af#814  | 0x1401fa6b2#819  | 1           |
| 0x1401fa6a8#808  | 0x1401fa6b4#823  | 1           |
| 0x1401fa69d#2765 | 0x1401fa6b4#2766 | 0           |
| 0x1401fa69d#2808 | 0x1401fa6b4#2809 | 0           |
| 0x1401fa69d#2765 | 0x1401fa6ba#2775 | 0           |
| 0x1401fa69d#2765 | 0x1401fa6ba#2775 | 1           |
| 0x1401fa6b4#2766 | 0x1401fa6ba#2775 | 2           |
| 0x1401fa69d#2808 | 0x1401fa6ba#2818 | 0           |
| 0x1401fa69d#2808 | 0x1401fa6ba#2818 | 1           |
| 0x1401fa6b4#2809 | 0x1401fa6ba#2818 | 2           |
| 0x1401fa6ba#2775 | 0x1401fa6bd#2767 | 0           |
| 0x1401fa6ba#2818 | 0x1401fa6bd#2810 | 0           |
| 0x1401fa6c2#3085 | 0x1401fa6c2#829  | 1           |
| 0x1401fa6c2#828  | 0x1401fa6c2#3085 | 0           |
| 0x1401fa6c2#829  | 0x1401fa6e3#873  | 1           |
| 0x1401fa6bd#2767 | 0x1401fa6e3#2768 | 0           |
| 0x1401fa6bd#2810 | 0x1401fa6e3#2811 | 0           |
| 0x1401fa6e9#3086 | 0x1401fa6e9#875  | 1           |
| 0x1401fa6e9#874  | 0x1401fa6e9#3086 | 0           |
| 0x1401fa6e9#875  | 0x1401fa6fb#901  | 1           |
| 0x1401fa6e3#2768 | 0x1401fa6fb#2769 | 0           |
| 0x1401fa6e3#2811 | 0x1401fa6fb#2812 | 0           |
| 0x1401fa701#3087 | 0x1401fa701#903  | 1           |
| 0x1401fa701#902  | 0x1401fa701#3087 | 0           |
| 0x1401fa701#903  | 0x1401fa722#947  | 1           |
| 0x1401fa6fb#2769 | 0x1401fa722#2770 | 0           |
| 0x1401fa6fb#2812 | 0x1401fa722#2813 | 0           |
| 0x1401fa728#3088 | 0x1401fa728#949  | 1           |
| 0x1401fa728#948  | 0x1401fa728#3088 | 0           |
| 0x1401fa728#949  | 0x1401fa73a#975  | 1           |
| 0x1401fa722#2770 | 0x1401fa73a#2771 | 0           |
| 0x1401fa722#2813 | 0x1401fa73a#2814 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x1401fa391#22   | 0           |
| 0       | 0x1401fa3cf#1021 | 0           |
| 0       | 0x1401fa3d8#1016 | 0           |
| 0       | 0x1401fa3e1#1011 | 0           |
| 0       | 0x1401fa3ea#1006 | 0           |
| 0       | 0x1401fa3f3#1001 | 0           |
| 0       | 0x1401fa3fc#996  | 0           |
| 0       | 0x1401fa405#977  | 0           |
| 0       | 0x1401fa420#98   | 0           |
| 0       | 0x1401fa437#116  | 0           |
| 0       | 0x1401fa44b#135  | 0           |
| 0       | 0x1401fa45c#158  | 0           |
| 0       | 0x1401fa474#178  | 0           |
| 0       | 0x1401fa478#180  | 0           |
| 0       | 0x1401fa47f#182  | 0           |
| 0       | 0x1401fa486#189  | 0           |
| 0       | 0x1401fa49d#219  | 0           |
| 0       | 0x1401fa4d3#285  | 0           |
| 0       | 0x1401fa4eb#305  | 0           |
| 0       | 0x1401fa4fc#328  | 0           |
| 0       | 0x1401fa514#348  | 0           |
| 0       | 0x1401fa525#371  | 0           |
| 0       | 0x1401fa53d#391  | 0           |
| 0       | 0x1401fa54e#414  | 0           |
| 0       | 0x1401fa566#434  | 0           |
| 0       | 0x1401fa577#457  | 0           |
| 0       | 0x1401fa58f#477  | 0           |
| 0       | 0x1401fa5a3#504  | 0           |
| 0       | 0x1401fa5b4#527  | 0           |
| 0       | 0x1401fa5cc#547  | 0           |
| 0       | 0x1401fa5e0#566  | 0           |
| 0       | 0x1401fa5f6#577  | 0           |
| 0       | 0x1401fa60f#605  | 0           |
| 0       | 0x1401fa63f#662  | 0           |
| 0       | 0x1401fa653#689  | 0           |
| 0       | 0x1401fa677#761  | 1           |
| 0       | 0x1401fa67c#762  | 0           |
| 0       | 0x1401fa689#775  | 0           |
| 0       | 0x1401fa696#788  | 0           |
| 0       | 0x1401fa6a8#807  | 0           |
| 0       | 0x1401fa6bd#827  | 1           |
| 0       | 0x1401fa6c2#828  | 0           |
| 0       | 0x1401fa6e9#874  | 0           |
| 0       | 0x1401fa701#902  | 0           |
| 0       | 0x1401fa728#948  | 0           |

## raw_result.value.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x1401fa391#23   | memory_read        | 1             |             |
| 0x1401fa3cd#87   | indirect_branch    | 0             |             |
| 0x1401fa3cf#1022 | memory_read        | 1             |             |
| 0x1401fa3d8#1017 | memory_read        | 1             |             |
| 0x1401fa3e1#1012 | memory_read        | 1             |             |
| 0x1401fa3ea#1007 | memory_read        | 1             |             |
| 0x1401fa3f3#1002 | memory_read        | 1             |             |
| 0x1401fa3fc#997  | memory_read        | 1             |             |
| 0x1401fa405#978  | memory_read        | 1             |             |
| 0x1401fa40e#991  | conditional_branch |               | 1           |
| 0x1401fa420#99   | memory_read        | 1             |             |
| 0x1401fa42a#110  | conditional_branch |               | 1           |
| 0x1401fa431#115  | direct_call        | 0             |             |
| 0x1401fa437#117  | memory_read        | 1             |             |
| 0x1401fa441#128  | conditional_branch |               | 1           |
| 0x1401fa445#134  | direct_call        | 0             |             |
| 0x1401fa44b#136  | memory_read        | 1             |             |
| 0x1401fa455#147  | conditional_branch |               | 1           |
| 0x1401fa45a#157  | conditional_branch |               | 1           |
| 0x1401fa45c#159  | memory_read        | 1             |             |
| 0x1401fa467#172  | conditional_branch |               | 1           |
| 0x1401fa46e#177  | direct_call        | 0             |             |
| 0x1401fa489#194  | conditional_branch |               | 1           |
| 0x1401fa490#197  | memory_read        | 1             |             |
| 0x1401fa496#208  | conditional_branch |               | 1           |
| 0x1401fa49b#218  | conditional_branch |               | 1           |
| 0x1401fa49d#220  | memory_read        | 1             |             |
| 0x1401fa4a8#233  | conditional_branch |               | 1           |
| 0x1401fa4af#238  | direct_call        | 0             |             |
| 0x1401fa4bc#259  | conditional_branch |               | 1           |
| 0x1401fa4be#260  | memory_read        | 1             |             |
| 0x1401fa4cc#274  | conditional_branch |               | 1           |
| 0x1401fa4d1#284  | conditional_branch |               | 1           |
| 0x1401fa4d3#286  | memory_read        | 1             |             |
| 0x1401fa4de#299  | conditional_branch |               | 1           |
| 0x1401fa4e5#304  | direct_call        | 0             |             |
| 0x1401fa4eb#306  | memory_read        | 1             |             |
| 0x1401fa4f5#317  | conditional_branch |               | 1           |
| 0x1401fa4fa#327  | conditional_branch |               | 1           |
| 0x1401fa4fc#329  | memory_read        | 1             |             |
| 0x1401fa507#342  | conditional_branch |               | 1           |
| 0x1401fa50e#347  | direct_call        | 0             |             |
| 0x1401fa514#349  | memory_read        | 1             |             |
| 0x1401fa51e#360  | conditional_branch |               | 1           |
| 0x1401fa523#370  | conditional_branch |               | 1           |
| 0x1401fa525#372  | memory_read        | 1             |             |
| 0x1401fa530#385  | conditional_branch |               | 1           |
| 0x1401fa537#390  | direct_call        | 0             |             |
| 0x1401fa53d#392  | memory_read        | 1             |             |
| 0x1401fa547#403  | conditional_branch |               | 1           |
| 0x1401fa54c#413  | conditional_branch |               | 1           |
| 0x1401fa54e#415  | memory_read        | 1             |             |
| 0x1401fa559#428  | conditional_branch |               | 1           |
| 0x1401fa560#433  | direct_call        | 0             |             |
| 0x1401fa566#435  | memory_read        | 1             |             |
| 0x1401fa570#446  | conditional_branch |               | 1           |
| 0x1401fa575#456  | conditional_branch |               | 1           |
| 0x1401fa577#458  | memory_read        | 1             |             |
| 0x1401fa582#471  | conditional_branch |               | 1           |
| 0x1401fa589#476  | direct_call        | 0             |             |
| 0x1401fa58f#478  | memory_read        | 1             |             |
| 0x1401fa599#489  | conditional_branch |               | 1           |
| 0x1401fa59d#503  | direct_call        | 0             |             |
| 0x1401fa5a3#505  | memory_read        | 1             |             |
| 0x1401fa5ad#516  | conditional_branch |               | 1           |
| 0x1401fa5b2#526  | conditional_branch |               | 1           |
| 0x1401fa5b4#528  | memory_read        | 1             |             |
| 0x1401fa5bf#541  | conditional_branch |               | 1           |
| 0x1401fa5c6#546  | direct_call        | 0             |             |
| 0x1401fa5cc#548  | memory_read        | 1             |             |
| 0x1401fa5d6#559  | conditional_branch |               | 1           |
| 0x1401fa5da#565  | direct_call        | 0             |             |
| 0x1401fa5e0#567  | memory_read        | 1             |             |
| 0x1401fa5f6#578  | memory_read        | 1             |             |
| 0x1401fa602#583  | memory_read        | 1             |             |
| 0x1401fa608#594  | conditional_branch |               | 1           |
| 0x1401fa60d#604  | conditional_branch |               | 1           |
| 0x1401fa60f#606  | memory_read        | 1             |             |
| 0x1401fa61a#619  | conditional_branch |               | 1           |
| 0x1401fa621#624  | direct_call        | 0             |             |
| 0x1401fa633#647  | conditional_branch |               | 1           |
| 0x1401fa63d#661  | conditional_branch |               | 1           |
| 0x1401fa63f#663  | memory_read        | 1             |             |
| 0x1401fa649#674  | conditional_branch |               | 1           |
| 0x1401fa64d#688  | direct_call        | 0             |             |
| 0x1401fa653#690  | memory_read        | 1             |             |
| 0x1401fa65d#701  | conditional_branch |               | 1           |
| 0x1401fa66d#733  | direct_call        | 0             |             |
| 0x1401fa677#761  | direct_call        | 0             |             |
| 0x1401fa67c#763  | memory_read        | 1             |             |
| 0x1401fa683#774  | conditional_branch |               | 1           |
| 0x1401fa689#776  | memory_read        | 1             |             |
| 0x1401fa690#787  | conditional_branch |               | 1           |
| 0x1401fa696#789  | memory_read        | 1             |             |
| 0x1401fa69d#794  | direct_call        | 0             |             |
| 0x1401fa6a6#806  | conditional_branch |               | 1           |
| 0x1401fa6a8#808  | memory_read        | 1             |             |
| 0x1401fa6b2#819  | conditional_branch |               | 1           |
| 0x1401fa6b4#823  | direct_call        | 0             |             |
| 0x1401fa6bd#827  | direct_call        | 0             |             |
| 0x1401fa6c2#829  | memory_read        | 1             |             |
| 0x1401fa6e3#873  | direct_call        | 0             |             |
| 0x1401fa6e9#875  | memory_read        | 1             |             |
| 0x1401fa6fb#901  | direct_call        | 0             |             |
| 0x1401fa701#903  | memory_read        | 1             |             |
| 0x1401fa722#947  | direct_call        | 0             |             |
| 0x1401fa728#949  | memory_read        | 1             |             |
| 0x1401fa73a#975  | direct_call        | 0             |             |

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

0x1401fa380

## normalized_result.procedure.name

FUN_1401fa380

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
| 0x1401fa380 | 0x1401fa748 |

## normalized_result.procedure.body.total_bytes

969

## normalized_result.procedure.body.span_bytes

969

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401fa380()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined local_18 @ Stack[-0x18]:1    | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8   | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8   | ghidra-function-database |
| undefined4 local_38 @ Stack[-0x38]:4   | ghidra-function-database |
| undefined4 local_40 @ Stack[-0x40]:4   | ghidra-function-database |
| undefined4 local_48 @ Stack[-0x48]:4   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## normalized_result.pseudocode


void FUN_1401fa380(longlong param_1)

{
  HWND pHVar1;
  bool bVar2;
  char cVar3;
  HWND pHVar4;
  BOOL BVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  BOOL BVar8;
  undefined8 local_28;
  undefined8 local_20;
  
  BVar6 = 0;
  BVar8 = 0;
  switch(*(undefined8 *)(param_1 + 0x2ec8)) {
  case 8:
    cVar3 = *(char *)(param_1 + 0x1f5b);
    break;
  case 9:
    cVar3 = *(char *)(param_1 + 0x1f5c);
    break;
  case 10:
    cVar3 = *(char *)(param_1 + 0xb91);
    break;
  case 0xb:
    cVar3 = *(char *)(param_1 + 0xd60);
    break;
  case 0xc:
    cVar3 = *(char *)(param_1 + 0xdd2);
    break;
  case 0xd:
    cVar3 = *(char *)(param_1 + 0x1f5d);
    break;
  case 0xe:
    cVar3 = *(char *)(param_1 + 0x1f5e);
    break;
  default:
    goto switchD_1401fa3cd_default;
  }
  if (cVar3 == '\0') {
    bVar2 = true;
  }
  else {
switchD_1401fa3cd_default:
    bVar2 = false;
    BVar6 = 1;
  }
  if (*(HWND *)(param_1 + 0x290) != (HWND)0x0) {
    EnableWindow(*(HWND *)(param_1 + 0x290),1);
  }
  if (*(HWND *)(param_1 + 0x288) != (HWND)0x0) {
    EnableWindow(*(HWND *)(param_1 + 0x288),BVar6);
  }
  if (*(HWND *)(param_1 + 0xaa8) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xaa8),BVar5);
  }
  puVar7 = (undefined8 *)(param_1 + 0xab0);
  if (param_1 != param_1 + 0x18) {
    do {
      if ((HWND)*puVar7 != (HWND)0x0) {
        if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
          BVar5 = 1;
        }
        EnableWindow((HWND)*puVar7,BVar5);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (undefined8 *)(param_1 + 0xac8));
  }
  pHVar1 = *(HWND *)(param_1 + 0xac8);
  if (pHVar1 != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(pHVar1,BVar5);
  }
  if (*(HWND *)(param_1 + 0xad0) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xad0),BVar5);
  }
  if (*(HWND *)(param_1 + 0xad8) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xad8),BVar5);
  }
  if (*(HWND *)(param_1 + 0xae0) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xae0),BVar5);
  }
  if (*(HWND *)(param_1 + 0xae8) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xae8),BVar5);
  }
  if (*(HWND *)(param_1 + 0xaf0) != (HWND)0x0) {
    EnableWindow(*(HWND *)(param_1 + 0xaf0),0);
  }
  if (*(HWND *)(param_1 + 0xaa0) != (HWND)0x0) {
    if ((!bVar2) || (BVar5 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 10)) {
      BVar5 = 1;
    }
    EnableWindow(*(HWND *)(param_1 + 0xaa0),BVar5);
  }
  if (*(HWND *)(param_1 + 0x2c0) != (HWND)0x0) {
    EnableWindow(*(HWND *)(param_1 + 0x2c0),BVar6);
  }
  puVar7 = &local_28;
  local_28 = *(undefined8 *)(param_1 + 0x1920);
  local_20 = *(undefined8 *)(param_1 + 0x1928);
  do {
    if ((HWND)*puVar7 != (HWND)0x0) {
      if ((!bVar2) || (BVar6 = BVar8, *(longlong *)(param_1 + 0x2ec8) != 0xe)) {
        BVar6 = 1;
      }
      EnableWindow((HWND)*puVar7,BVar6);
    }
    puVar7 = puVar7 + 1;
  } while (puVar7 != (undefined8 *)&stack0xffffffffffffffe8);
  if (bVar2) {
    FUN_1401f87c0(param_1);
    if ((*(longlong *)(param_1 + 0x1f68) != 0) && (*(longlong *)(param_1 + 0x1f70) != 0)) {
      pHVar1 = *(HWND *)(param_1 + 0x290);
      pHVar4 = GetFocus();
      if ((pHVar4 == pHVar1) && (*(HWND *)(param_1 + 0x1f88) != (HWND)0x0)) {
        SetFocus(*(HWND *)(param_1 + 0x1f88));
      }
      FUN_1401f8260(param_1);
      SetWindowPos(*(HWND *)(param_1 + 0x1f68),(HWND)0x0,0,0,0,0,0x53);
      RedrawWindow(*(HWND *)(param_1 + 0x1f68),(RECT *)0x0,(HRGN)0x0,0x105);
      SetWindowPos(*(HWND *)(param_1 + 0x1f70),(HWND)0x0,0,0,0,0,0x53);
      RedrawWindow(*(HWND *)(param_1 + 0x1f70),(RECT *)0x0,(HRGN)0x0,0x185);
    }
  }
  else {
    if (*(HWND *)(param_1 + 0x1f68) != (HWND)0x0) {
      ShowWindow(*(HWND *)(param_1 + 0x1f68),0);
    }
    if (*(HWND *)(param_1 + 0x1f70) != (HWND)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401fa66d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ShowWindow(*(HWND *)(param_1 + 0x1f70),0);
      return;
    }
  }
  return;
}



## normalized_result.assembly

0x1401fa380: PUSH RBX,0x1401fa382: PUSH RDI,0x1401fa383: PUSH R15,0x1401fa385: SUB RSP, 0x50,0x1401fa389: MOV qword ptr [RSP + 0x70], RBP,0x1401fa38e: MOV RDI, RCX,0x1401fa391: MOV RCX, qword ptr [RCX + 0x2ec8],0x1401fa398: XOR R15D, R15D,0x1401fa39b: MOV qword ptr [RSP + 0x78], RSI,0x1401fa3a0: MOV qword ptr [RSP + 0x80], R14,0x1401fa3a8: LEA RAX, [RCX + -0x8],0x1401fa3ac: CMP RAX, 0x6,0x1401fa3b0: JA 0x1401fa418,0x1401fa3b2: LEA RAX, [RCX + -0x8],0x1401fa3b6: CMP RAX, 0x6,0x1401fa3ba: JA 0x1401fa418,0x1401fa3bc: LEA RCX, [0x140000000],0x1401fa3c3: MOV EAX, dword ptr [RCX + RAX*0x4 + 0x1fa74c],0x1401fa3ca: ADD RAX, RCX,0x1401fa3cd: JMP RAX,0x1401fa3cf: MOVZX EAX, byte ptr [RDI + 0x1f5b],0x1401fa3d6: JMP 0x1401fa40c,0x1401fa3d8: MOVZX EAX, byte ptr [RDI + 0x1f5c],0x1401fa3df: JMP 0x1401fa40c,0x1401fa3e1: MOVZX EAX, byte ptr [RDI + 0xb91],0x1401fa3e8: JMP 0x1401fa40c,0x1401fa3ea: MOVZX EAX, byte ptr [RDI + 0xd60],0x1401fa3f1: JMP 0x1401fa40c,0x1401fa3f3: MOVZX EAX, byte ptr [RDI + 0xdd2],0x1401fa3fa: JMP 0x1401fa40c,0x1401fa3fc: MOVZX EAX, byte ptr [RDI + 0x1f5d],0x1401fa403: JMP 0x1401fa40c,0x1401fa405: MOVZX EAX, byte ptr [RDI + 0x1f5e],0x1401fa40c: TEST AL, AL,0x1401fa40e: JNZ 0x1401fa418,0x1401fa410: MOV SIL, 0x1,0x1401fa413: MOV EBP, R15D,0x1401fa416: JMP 0x1401fa420,0x1401fa418: XOR SIL, SIL,0x1401fa41b: MOV EBP, 0x1,0x1401fa420: MOV RCX, qword ptr [RDI + 0x290],0x1401fa427: TEST RCX, RCX,0x1401fa42a: JZ 0x1401fa437,0x1401fa42c: MOV EDX, 0x1,0x1401fa431: CALL qword ptr [0x14037ade0],0x1401fa437: MOV RCX, qword ptr [RDI + 0x288],0x1401fa43e: TEST RCX, RCX,0x1401fa441: JZ 0x1401fa44b,0x1401fa443: MOV EDX, EBP,0x1401fa445: CALL qword ptr [0x14037ade0],0x1401fa44b: MOV RCX, qword ptr [RDI + 0xaa8],0x1401fa452: TEST RCX, RCX,0x1401fa455: JZ 0x1401fa474,0x1401fa457: TEST SIL, SIL,0x1401fa45a: JZ 0x1401fa469,0x1401fa45c: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa464: MOV EDX, R15D,0x1401fa467: JZ 0x1401fa46e,0x1401fa469: MOV EDX, 0x1,0x1401fa46e: CALL qword ptr [0x14037ade0],0x1401fa474: LEA RAX, [RDI + 0x18],0x1401fa478: LEA R14, [RDI + 0xac8],0x1401fa47f: LEA RBX, [RDI + 0xab0],0x1401fa486: CMP RDI, RAX,0x1401fa489: JZ 0x1401fa4be,0x1401fa48b: NOP dword ptr [RAX + RAX*0x1],0x1401fa490: MOV RCX, qword ptr [RBX],0x1401fa493: TEST RCX, RCX,0x1401fa496: JZ 0x1401fa4b5,0x1401fa498: TEST SIL, SIL,0x1401fa49b: JZ 0x1401fa4aa,0x1401fa49d: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa4a5: MOV EDX, R15D,0x1401fa4a8: JZ 0x1401fa4af,0x1401fa4aa: MOV EDX, 0x1,0x1401fa4af: CALL qword ptr [0x14037ade0],0x1401fa4b5: ADD RBX, 0x8,0x1401fa4b9: CMP RBX, R14,0x1401fa4bc: JNZ 0x1401fa490,0x1401fa4be: MOV RCX, qword ptr [R14],0x1401fa4c1: MOV R14, qword ptr [RSP + 0x80],0x1401fa4c9: TEST RCX, RCX,0x1401fa4cc: JZ 0x1401fa4eb,0x1401fa4ce: TEST SIL, SIL,0x1401fa4d1: JZ 0x1401fa4e0,0x1401fa4d3: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa4db: MOV EDX, R15D,0x1401fa4de: JZ 0x1401fa4e5,0x1401fa4e0: MOV EDX, 0x1,0x1401fa4e5: CALL qword ptr [0x14037ade0],0x1401fa4eb: MOV RCX, qword ptr [RDI + 0xad0],0x1401fa4f2: TEST RCX, RCX,0x1401fa4f5: JZ 0x1401fa514,0x1401fa4f7: TEST SIL, SIL,0x1401fa4fa: JZ 0x1401fa509,0x1401fa4fc: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa504: MOV EDX, R15D,0x1401fa507: JZ 0x1401fa50e,0x1401fa509: MOV EDX, 0x1,0x1401fa50e: CALL qword ptr [0x14037ade0],0x1401fa514: MOV RCX, qword ptr [RDI + 0xad8],0x1401fa51b: TEST RCX, RCX,0x1401fa51e: JZ 0x1401fa53d,0x1401fa520: TEST SIL, SIL,0x1401fa523: JZ 0x1401fa532,0x1401fa525: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa52d: MOV EDX, R15D,0x1401fa530: JZ 0x1401fa537,0x1401fa532: MOV EDX, 0x1,0x1401fa537: CALL qword ptr [0x14037ade0],0x1401fa53d: MOV RCX, qword ptr [RDI + 0xae0],0x1401fa544: TEST RCX, RCX,0x1401fa547: JZ 0x1401fa566,0x1401fa549: TEST SIL, SIL,0x1401fa54c: JZ 0x1401fa55b,0x1401fa54e: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa556: MOV EDX, R15D,0x1401fa559: JZ 0x1401fa560,0x1401fa55b: MOV EDX, 0x1,0x1401fa560: CALL qword ptr [0x14037ade0],0x1401fa566: MOV RCX, qword ptr [RDI + 0xae8],0x1401fa56d: TEST RCX, RCX,0x1401fa570: JZ 0x1401fa58f,0x1401fa572: TEST SIL, SIL,0x1401fa575: JZ 0x1401fa584,0x1401fa577: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa57f: MOV EDX, R15D,0x1401fa582: JZ 0x1401fa589,0x1401fa584: MOV EDX, 0x1,0x1401fa589: CALL qword ptr [0x14037ade0],0x1401fa58f: MOV RCX, qword ptr [RDI + 0xaf0],0x1401fa596: TEST RCX, RCX,0x1401fa599: JZ 0x1401fa5a3,0x1401fa59b: XOR EDX, EDX,0x1401fa59d: CALL qword ptr [0x14037ade0],0x1401fa5a3: MOV RCX, qword ptr [RDI + 0xaa0],0x1401fa5aa: TEST RCX, RCX,0x1401fa5ad: JZ 0x1401fa5cc,0x1401fa5af: TEST SIL, SIL,0x1401fa5b2: JZ 0x1401fa5c1,0x1401fa5b4: CMP qword ptr [RDI + 0x2ec8], 0xa,0x1401fa5bc: MOV EDX, R15D,0x1401fa5bf: JZ 0x1401fa5c6,0x1401fa5c1: MOV EDX, 0x1,0x1401fa5c6: CALL qword ptr [0x14037ade0],0x1401fa5cc: MOV RCX, qword ptr [RDI + 0x2c0],0x1401fa5d3: TEST RCX, RCX,0x1401fa5d6: JZ 0x1401fa5e0,0x1401fa5d8: MOV EDX, EBP,0x1401fa5da: CALL qword ptr [0x14037ade0],0x1401fa5e0: MOV RAX, qword ptr [RDI + 0x1920],0x1401fa5e7: LEA RBX, [RSP + 0x40],0x1401fa5ec: MOV RBP, qword ptr [RSP + 0x70],0x1401fa5f1: MOV qword ptr [RSP + 0x40], RAX,0x1401fa5f6: MOV RAX, qword ptr [RDI + 0x1928],0x1401fa5fd: MOV qword ptr [RSP + 0x48], RAX,0x1401fa602: MOV RCX, qword ptr [RBX],0x1401fa605: TEST RCX, RCX,0x1401fa608: JZ 0x1401fa627,0x1401fa60a: TEST SIL, SIL,0x1401fa60d: JZ 0x1401fa61c,0x1401fa60f: CMP qword ptr [RDI + 0x2ec8], 0xe,0x1401fa617: MOV EDX, R15D,0x1401fa61a: JZ 0x1401fa621,0x1401fa61c: MOV EDX, 0x1,0x1401fa621: CALL qword ptr [0x14037ade0],0x1401fa627: ADD RBX, 0x8,0x1401fa62b: LEA RAX, [RSP + 0x50],0x1401fa630: CMP RBX, RAX,0x1401fa633: JNZ 0x1401fa602,0x1401fa635: TEST SIL, SIL,0x1401fa638: MOV RSI, qword ptr [RSP + 0x78],0x1401fa63d: JNZ 0x1401fa674,0x1401fa63f: MOV RCX, qword ptr [RDI + 0x1f68],0x1401fa646: TEST RCX, RCX,0x1401fa649: JZ 0x1401fa653,0x1401fa64b: XOR EDX, EDX,0x1401fa64d: CALL qword ptr [0x14037ae00],0x1401fa653: MOV RCX, qword ptr [RDI + 0x1f70],0x1401fa65a: TEST RCX, RCX,0x1401fa65d: JZ 0x1401fa740,0x1401fa663: XOR EDX, EDX,0x1401fa665: ADD RSP, 0x50,0x1401fa669: POP R15,0x1401fa66b: POP RDI,0x1401fa66c: POP RBX,0x1401fa66d: JMP qword ptr [0x14037ae00],0x1401fa674: MOV RCX, RDI,0x1401fa677: CALL 0x1401f87c0,0x1401fa67c: CMP qword ptr [RDI + 0x1f68], R15,0x1401fa683: JZ 0x1401fa740,0x1401fa689: CMP qword ptr [RDI + 0x1f70], R15,0x1401fa690: JZ 0x1401fa740,0x1401fa696: MOV RBX, qword ptr [RDI + 0x290],0x1401fa69d: CALL qword ptr [0x14037ae78],0x1401fa6a3: CMP RAX, RBX,0x1401fa6a6: JNZ 0x1401fa6ba,0x1401fa6a8: MOV RCX, qword ptr [RDI + 0x1f88],0x1401fa6af: TEST RCX, RCX,0x1401fa6b2: JZ 0x1401fa6ba,0x1401fa6b4: CALL qword ptr [0x14037b048],0x1401fa6ba: MOV RCX, RDI,0x1401fa6bd: CALL 0x1401f8260,0x1401fa6c2: MOV RCX, qword ptr [RDI + 0x1f68],0x1401fa6c9: XOR R9D, R9D,0x1401fa6cc: MOV dword ptr [RSP + 0x30], 0x53,0x1401fa6d4: XOR R8D, R8D,0x1401fa6d7: MOV dword ptr [RSP + 0x28], R15D,0x1401fa6dc: XOR EDX, EDX,0x1401fa6de: MOV dword ptr [RSP + 0x20], R15D,0x1401fa6e3: CALL qword ptr [0x14037afd0],0x1401fa6e9: MOV RCX, qword ptr [RDI + 0x1f68],0x1401fa6f0: MOV R9D, 0x105,0x1401fa6f6: XOR R8D, R8D,0x1401fa6f9: XOR EDX, EDX,0x1401fa6fb: CALL qword ptr [0x14037ac60],0x1401fa701: MOV RCX, qword ptr [RDI + 0x1f70],0x1401fa708: XOR R9D, R9D,0x1401fa70b: MOV dword ptr [RSP + 0x30], 0x53,0x1401fa713: XOR R8D, R8D,0x1401fa716: MOV dword ptr [RSP + 0x28], R15D,0x1401fa71b: XOR EDX, EDX,0x1401fa71d: MOV dword ptr [RSP + 0x20], R15D,0x1401fa722: CALL qword ptr [0x14037afd0],0x1401fa728: MOV RCX, qword ptr [RDI + 0x1f70],0x1401fa72f: MOV R9D, 0x185,0x1401fa735: XOR R8D, R8D,0x1401fa738: XOR EDX, EDX,0x1401fa73a: CALL qword ptr [0x14037ac60],0x1401fa740: ADD RSP, 0x50,0x1401fa744: POP R15,0x1401fa746: POP RDI,0x1401fa747: POP RBX,0x1401fa748: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x14007bd50 | FUN_14007bd50 | [object Object] | [object Object] |
| 0x1400ddca0 | FUN_1400ddca0 | [object Object] | [object Object] |
| 0x1401e59c0 | FUN_1401e59c0 | [object Object] | [object Object] |

## normalized_result.callees

| address        | name                     | classification  | body            |
|----------------|--------------------------|-----------------|-----------------|
| EXTERNAL:0x12b | USER32.DLL::RedrawWindow | [object Object] | [object Object] |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow | [object Object] | [object Object] |
| EXTERNAL:0x15f | USER32.DLL::ShowWindow   | [object Object] | [object Object] |
| EXTERNAL:0x16e | USER32.DLL::GetFocus     | [object Object] | [object Object] |
| EXTERNAL:0x199 | USER32.DLL::SetWindowPos | [object Object] | [object Object] |
| EXTERNAL:0x1a8 | USER32.DLL::SetFocus     | [object Object] | [object Object] |
| 0x1401f8260    | FUN_1401f8260            | [object Object] | [object Object] |
| 0x1401f87c0    | FUN_1401f87c0            | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14007be20    | 0x1401fa380    | [object Object]  | [object Object]  | [object Object] |
| 0x1400df0fe    | 0x1401fa380    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e6ce7    | 0x1401fa380    | [object Object]  | [object Object]  | [object Object] |
| 0x1404a546c    | 0x1401fa380    |                  | [object Object]  | [object Object] |
| 0x1404a5470    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404a5480    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404a5484    | 0x1401fa3a0    |                  | [object Object]  | [object Object] |
| 0x1404a5490    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404a5494    | 0x1401fa3a0    |                  | [object Object]  | [object Object] |
| 0x1404a54a4    | 0x1401fa380    |                  | [object Object]  | [object Object] |
| 0x1404a54a8    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404a54b4    | 0x1401fa380    |                  | [object Object]  | [object Object] |
| 0x1404a54b8    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404dfc9c    | 0x1401fa380    |                  | [object Object]  | [object Object] |
| 0x1404dfca8    | 0x1401fa389    |                  | [object Object]  | [object Object] |
| 0x1404dfcb4    | 0x1401fa3a0    |                  | [object Object]  | [object Object] |
| 0x1404dfcc0    | 0x1401fa4ce    |                  | [object Object]  | [object Object] |
| 0x1404dfccc    | 0x1401fa602    |                  | [object Object]  | [object Object] |
| 0x1404dfcd8    | 0x1401fa63f    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401fa389    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401fa39b    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401fa3a0    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401fa3b0    | 0x1401fa418              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3ba    | 0x1401fa418              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3bc    | 0x140000000              | [object Object]  |                  | [object Object] |
| 0x1401fa3c3    | 0x1401fa74c              | [object Object]  |                  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3cf              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3d8              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3e1              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3ea              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3f3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa3fc              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3cd    | 0x1401fa405              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3d6    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3df    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3e8    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3f1    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa3fa    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa403    | 0x1401fa40c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa40e    | 0x1401fa418              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa416    | 0x1401fa420              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa42a    | 0x1401fa437              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa431    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa431    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa441    | 0x1401fa44b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa445    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa445    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa455    | 0x1401fa474              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa45a    | 0x1401fa469              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa467    | 0x1401fa46e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa46e    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa46e    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa489    | 0x1401fa4be              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa496    | 0x1401fa4b5              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa49b    | 0x1401fa4aa              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4a8    | 0x1401fa4af              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4af    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4af    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa4bc    | 0x1401fa490              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4c1    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401fa4cc    | 0x1401fa4eb              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4d1    | 0x1401fa4e0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4de    | 0x1401fa4e5              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4e5    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4e5    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa4f5    | 0x1401fa514              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa4fa    | 0x1401fa509              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa507    | 0x1401fa50e              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa50e    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa50e    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa51e    | 0x1401fa53d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa523    | 0x1401fa532              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa530    | 0x1401fa537              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa537    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa537    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa547    | 0x1401fa566              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa54c    | 0x1401fa55b              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa559    | 0x1401fa560              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa560    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa560    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa570    | 0x1401fa58f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa575    | 0x1401fa584              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa582    | 0x1401fa589              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa589    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa589    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa599    | 0x1401fa5a3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa59d    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa59d    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa5ad    | 0x1401fa5cc              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5b2    | 0x1401fa5c1              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5bf    | 0x1401fa5c6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5c6    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5c6    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa5d6    | 0x1401fa5e0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5da    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa5da    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa5e7    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401fa5ec    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401fa5f1    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401fa5fd    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401fa602    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401fa608    | 0x1401fa627              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa60d    | 0x1401fa61c              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa61a    | 0x1401fa621              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa621    | EXTERNAL:0x15b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa621    | 0x14037ade0              | [object Object]  |                  | [object Object] |
| 0x1401fa62b    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401fa633    | 0x1401fa602              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa638    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401fa63d    | 0x1401fa674              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa649    | 0x1401fa653              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa64d    | EXTERNAL:0x15f           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa64d    | 0x14037ae00              | [object Object]  |                  | [object Object] |
| 0x1401fa65d    | 0x1401fa740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa66d    | EXTERNAL:0x15f           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa66d    | 0x14037ae00              | [object Object]  |                  | [object Object] |
| 0x1401fa677    | 0x1401f87c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa683    | 0x1401fa740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa690    | 0x1401fa740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa69d    | EXTERNAL:0x16e           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa69d    | 0x14037ae78              | [object Object]  |                  | [object Object] |
| 0x1401fa6a6    | 0x1401fa6ba              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6b2    | 0x1401fa6ba              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6b4    | EXTERNAL:0x1a8           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6b4    | 0x14037b048              | [object Object]  |                  | [object Object] |
| 0x1401fa6bd    | 0x1401f8260              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6cc    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401fa6d7    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401fa6de    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401fa6e3    | EXTERNAL:0x199           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6e3    | 0x14037afd0              | [object Object]  |                  | [object Object] |
| 0x1401fa6fb    | EXTERNAL:0x12b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa6fb    | 0x14037ac60              | [object Object]  |                  | [object Object] |
| 0x1401fa70b    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401fa716    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401fa71d    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1401fa722    | EXTERNAL:0x199           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa722    | 0x14037afd0              | [object Object]  |                  | [object Object] |
| 0x1401fa73a    | EXTERNAL:0x12b           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa73a    | 0x14037ac60              | [object Object]  |                  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address        | value                                    | source_address |
|----------------|------------------------------------------|----------------|
| 0x140000000    | IMAGE_DOS_HEADER_140000000               | 0x1401fa3bc    |
| 0x1401f8260    | FUN_1401f8260                            | 0x1401fa6bd    |
| 0x1401f87c0    | FUN_1401f87c0                            | 0x1401fa677    |
| 0x1401fa3cf    | switchD_1401fa3cd::caseD_8               | 0x1401fa3cd    |
| 0x1401fa3d8    | switchD_1401fa3cd::caseD_9               | 0x1401fa3cd    |
| 0x1401fa3e1    | switchD_1401fa3cd::caseD_a               | 0x1401fa3cd    |
| 0x1401fa3ea    | switchD_1401fa3cd::caseD_b               | 0x1401fa3cd    |
| 0x1401fa3f3    | switchD_1401fa3cd::caseD_c               | 0x1401fa3cd    |
| 0x1401fa3fc    | switchD_1401fa3cd::caseD_d               | 0x1401fa3cd    |
| 0x1401fa405    | switchD_1401fa3cd::caseD_e               | 0x1401fa3cd    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa3d6    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa3df    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa3e8    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa3f1    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa3fa    |
| 0x1401fa40c    | LAB_1401fa40c                            | 0x1401fa403    |
| 0x1401fa418    | switchD_1401fa3cd::default               | 0x1401fa3b0    |
| 0x1401fa418    | switchD_1401fa3cd::default               | 0x1401fa3ba    |
| 0x1401fa418    | switchD_1401fa3cd::default               | 0x1401fa40e    |
| 0x1401fa420    | LAB_1401fa420                            | 0x1401fa416    |
| 0x1401fa437    | LAB_1401fa437                            | 0x1401fa42a    |
| 0x1401fa44b    | LAB_1401fa44b                            | 0x1401fa441    |
| 0x1401fa469    | LAB_1401fa469                            | 0x1401fa45a    |
| 0x1401fa46e    | LAB_1401fa46e                            | 0x1401fa467    |
| 0x1401fa474    | LAB_1401fa474                            | 0x1401fa455    |
| 0x1401fa490    | LAB_1401fa490                            | 0x1401fa4bc    |
| 0x1401fa4aa    | LAB_1401fa4aa                            | 0x1401fa49b    |
| 0x1401fa4af    | LAB_1401fa4af                            | 0x1401fa4a8    |
| 0x1401fa4b5    | LAB_1401fa4b5                            | 0x1401fa496    |
| 0x1401fa4be    | LAB_1401fa4be                            | 0x1401fa489    |
| 0x1401fa4e0    | LAB_1401fa4e0                            | 0x1401fa4d1    |
| 0x1401fa4e5    | LAB_1401fa4e5                            | 0x1401fa4de    |
| 0x1401fa4eb    | LAB_1401fa4eb                            | 0x1401fa4cc    |
| 0x1401fa509    | LAB_1401fa509                            | 0x1401fa4fa    |
| 0x1401fa50e    | LAB_1401fa50e                            | 0x1401fa507    |
| 0x1401fa514    | LAB_1401fa514                            | 0x1401fa4f5    |
| 0x1401fa532    | LAB_1401fa532                            | 0x1401fa523    |
| 0x1401fa537    | LAB_1401fa537                            | 0x1401fa530    |
| 0x1401fa53d    | LAB_1401fa53d                            | 0x1401fa51e    |
| 0x1401fa55b    | LAB_1401fa55b                            | 0x1401fa54c    |
| 0x1401fa560    | LAB_1401fa560                            | 0x1401fa559    |
| 0x1401fa566    | LAB_1401fa566                            | 0x1401fa547    |
| 0x1401fa584    | LAB_1401fa584                            | 0x1401fa575    |
| 0x1401fa589    | LAB_1401fa589                            | 0x1401fa582    |
| 0x1401fa58f    | LAB_1401fa58f                            | 0x1401fa570    |
| 0x1401fa5a3    | LAB_1401fa5a3                            | 0x1401fa599    |
| 0x1401fa5c1    | LAB_1401fa5c1                            | 0x1401fa5b2    |
| 0x1401fa5c6    | LAB_1401fa5c6                            | 0x1401fa5bf    |
| 0x1401fa5cc    | LAB_1401fa5cc                            | 0x1401fa5ad    |
| 0x1401fa5e0    | LAB_1401fa5e0                            | 0x1401fa5d6    |
| 0x1401fa602    | LAB_1401fa602                            | 0x1401fa633    |
| 0x1401fa61c    | LAB_1401fa61c                            | 0x1401fa60d    |
| 0x1401fa621    | LAB_1401fa621                            | 0x1401fa61a    |
| 0x1401fa627    | LAB_1401fa627                            | 0x1401fa608    |
| 0x1401fa653    | LAB_1401fa653                            | 0x1401fa649    |
| 0x1401fa674    | LAB_1401fa674                            | 0x1401fa63d    |
| 0x1401fa6ba    | LAB_1401fa6ba                            | 0x1401fa6a6    |
| 0x1401fa6ba    | LAB_1401fa6ba                            | 0x1401fa6b2    |
| 0x1401fa740    | LAB_1401fa740                            | 0x1401fa65d    |
| 0x1401fa740    | LAB_1401fa740                            | 0x1401fa683    |
| 0x1401fa740    | LAB_1401fa740                            | 0x1401fa690    |
| 0x1401fa74c    | switchD_1401fa3cd::switchdataD_1401fa74c | 0x1401fa3c3    |
| 0x14037ac60    | PTR_RedrawWindow_14037ac60               | 0x1401fa6fb    |
| 0x14037ac60    | PTR_RedrawWindow_14037ac60               | 0x1401fa73a    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa431    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa445    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa46e    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa4af    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa4e5    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa50e    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa537    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa560    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa589    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa59d    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa5c6    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa5da    |
| 0x14037ade0    | PTR_EnableWindow_14037ade0               | 0x1401fa621    |
| 0x14037ae00    | PTR_ShowWindow_14037ae00                 | 0x1401fa64d    |
| 0x14037ae00    | PTR_ShowWindow_14037ae00                 | 0x1401fa66d    |
| 0x14037ae78    | PTR_GetFocus_14037ae78                   | 0x1401fa69d    |
| 0x14037afd0    | PTR_SetWindowPos_14037afd0               | 0x1401fa6e3    |
| 0x14037afd0    | PTR_SetWindowPos_14037afd0               | 0x1401fa722    |
| 0x14037b048    | PTR_SetFocus_14037b048                   | 0x1401fa6b4    |
| EXTERNAL:0x12b | USER32.DLL::RedrawWindow                 | 0x1401fa6fb    |
| EXTERNAL:0x12b | USER32.DLL::RedrawWindow                 | 0x1401fa73a    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa431    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa445    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa46e    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa4af    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa4e5    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa50e    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa537    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa560    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa589    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa59d    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa5c6    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa5da    |
| EXTERNAL:0x15b | USER32.DLL::EnableWindow                 | 0x1401fa621    |
| EXTERNAL:0x15f | USER32.DLL::ShowWindow                   | 0x1401fa64d    |
| EXTERNAL:0x15f | USER32.DLL::ShowWindow                   | 0x1401fa66d    |
| EXTERNAL:0x16e | USER32.DLL::GetFocus                     | 0x1401fa69d    |
| EXTERNAL:0x199 | USER32.DLL::SetWindowPos                 | 0x1401fa6e3    |
| EXTERNAL:0x199 | USER32.DLL::SetWindowPos                 | 0x1401fa722    |
| EXTERNAL:0x1a8 | USER32.DLL::SetFocus                     | 0x1401fa6b4    |

## normalized_result.basic_blocks

| start       | end         | successors                                                                          |
|-------------|-------------|-------------------------------------------------------------------------------------|
| 0x1401fa380 | 0x1401fa389 | 0x1401fa389                                                                         |
| 0x1401fa389 | 0x1401fa3a0 | 0x1401fa3a0                                                                         |
| 0x1401fa3a0 | 0x1401fa3b2 | 0x1401fa3b2,0x1401fa418                                                             |
| 0x1401fa3b2 | 0x1401fa3bc | 0x1401fa3bc,0x1401fa418                                                             |
| 0x1401fa3bc | 0x1401fa3cd | 0x1401fa3cd                                                                         |
| 0x1401fa3cd | 0x1401fa3cf | 0x1401fa3cf,0x1401fa3d8,0x1401fa3e1,0x1401fa3ea,0x1401fa3f3,0x1401fa3fc,0x1401fa405 |
| 0x1401fa3cf | 0x1401fa3d8 | 0x1401fa40c                                                                         |
| 0x1401fa3d8 | 0x1401fa3e1 | 0x1401fa40c                                                                         |
| 0x1401fa3e1 | 0x1401fa3ea | 0x1401fa40c                                                                         |
| 0x1401fa3ea | 0x1401fa3f3 | 0x1401fa40c                                                                         |
| 0x1401fa3f3 | 0x1401fa3fc | 0x1401fa40c                                                                         |
| 0x1401fa3fc | 0x1401fa405 | 0x1401fa40c                                                                         |
| 0x1401fa405 | 0x1401fa40c | 0x1401fa40c                                                                         |
| 0x1401fa40c | 0x1401fa410 | 0x1401fa410,0x1401fa418                                                             |
| 0x1401fa410 | 0x1401fa418 | 0x1401fa420                                                                         |
| 0x1401fa418 | 0x1401fa420 | 0x1401fa420                                                                         |
| 0x1401fa420 | 0x1401fa42c | 0x1401fa42c,0x1401fa437                                                             |
| 0x1401fa42c | 0x1401fa437 | 0x1401fa437                                                                         |
| 0x1401fa437 | 0x1401fa443 | 0x1401fa443,0x1401fa44b                                                             |
| 0x1401fa443 | 0x1401fa44b | 0x1401fa44b                                                                         |
| 0x1401fa44b | 0x1401fa457 | 0x1401fa457,0x1401fa474                                                             |
| 0x1401fa457 | 0x1401fa45c | 0x1401fa45c,0x1401fa469                                                             |
| 0x1401fa45c | 0x1401fa469 | 0x1401fa469,0x1401fa46e                                                             |
| 0x1401fa469 | 0x1401fa46e | 0x1401fa46e                                                                         |
| 0x1401fa46e | 0x1401fa474 | 0x1401fa474                                                                         |
| 0x1401fa474 | 0x1401fa48b | 0x1401fa48b,0x1401fa4be                                                             |
| 0x1401fa48b | 0x1401fa490 | 0x1401fa490                                                                         |
| 0x1401fa490 | 0x1401fa498 | 0x1401fa498,0x1401fa4b5                                                             |
| 0x1401fa498 | 0x1401fa49d | 0x1401fa49d,0x1401fa4aa                                                             |
| 0x1401fa49d | 0x1401fa4aa | 0x1401fa4aa,0x1401fa4af                                                             |
| 0x1401fa4aa | 0x1401fa4af | 0x1401fa4af                                                                         |
| 0x1401fa4af | 0x1401fa4b5 | 0x1401fa4b5                                                                         |
| 0x1401fa4b5 | 0x1401fa4be | 0x1401fa490,0x1401fa4be                                                             |
| 0x1401fa4be | 0x1401fa4ce | 0x1401fa4ce,0x1401fa4eb                                                             |
| 0x1401fa4ce | 0x1401fa4d3 | 0x1401fa4d3,0x1401fa4e0                                                             |
| 0x1401fa4d3 | 0x1401fa4e0 | 0x1401fa4e0,0x1401fa4e5                                                             |
| 0x1401fa4e0 | 0x1401fa4e5 | 0x1401fa4e5                                                                         |
| 0x1401fa4e5 | 0x1401fa4eb | 0x1401fa4eb                                                                         |
| 0x1401fa4eb | 0x1401fa4f7 | 0x1401fa4f7,0x1401fa514                                                             |
| 0x1401fa4f7 | 0x1401fa4fc | 0x1401fa4fc,0x1401fa509                                                             |
| 0x1401fa4fc | 0x1401fa509 | 0x1401fa509,0x1401fa50e                                                             |
| 0x1401fa509 | 0x1401fa50e | 0x1401fa50e                                                                         |
| 0x1401fa50e | 0x1401fa514 | 0x1401fa514                                                                         |
| 0x1401fa514 | 0x1401fa520 | 0x1401fa520,0x1401fa53d                                                             |
| 0x1401fa520 | 0x1401fa525 | 0x1401fa525,0x1401fa532                                                             |
| 0x1401fa525 | 0x1401fa532 | 0x1401fa532,0x1401fa537                                                             |
| 0x1401fa532 | 0x1401fa537 | 0x1401fa537                                                                         |
| 0x1401fa537 | 0x1401fa53d | 0x1401fa53d                                                                         |
| 0x1401fa53d | 0x1401fa549 | 0x1401fa549,0x1401fa566                                                             |
| 0x1401fa549 | 0x1401fa54e | 0x1401fa54e,0x1401fa55b                                                             |
| 0x1401fa54e | 0x1401fa55b | 0x1401fa55b,0x1401fa560                                                             |
| 0x1401fa55b | 0x1401fa560 | 0x1401fa560                                                                         |
| 0x1401fa560 | 0x1401fa566 | 0x1401fa566                                                                         |
| 0x1401fa566 | 0x1401fa572 | 0x1401fa572,0x1401fa58f                                                             |
| 0x1401fa572 | 0x1401fa577 | 0x1401fa577,0x1401fa584                                                             |
| 0x1401fa577 | 0x1401fa584 | 0x1401fa584,0x1401fa589                                                             |
| 0x1401fa584 | 0x1401fa589 | 0x1401fa589                                                                         |
| 0x1401fa589 | 0x1401fa58f | 0x1401fa58f                                                                         |
| 0x1401fa58f | 0x1401fa59b | 0x1401fa59b,0x1401fa5a3                                                             |
| 0x1401fa59b | 0x1401fa5a3 | 0x1401fa5a3                                                                         |
| 0x1401fa5a3 | 0x1401fa5af | 0x1401fa5af,0x1401fa5cc                                                             |
| 0x1401fa5af | 0x1401fa5b4 | 0x1401fa5b4,0x1401fa5c1                                                             |
| 0x1401fa5b4 | 0x1401fa5c1 | 0x1401fa5c1,0x1401fa5c6                                                             |
| 0x1401fa5c1 | 0x1401fa5c6 | 0x1401fa5c6                                                                         |
| 0x1401fa5c6 | 0x1401fa5cc | 0x1401fa5cc                                                                         |
| 0x1401fa5cc | 0x1401fa5d8 | 0x1401fa5d8,0x1401fa5e0                                                             |
| 0x1401fa5d8 | 0x1401fa5e0 | 0x1401fa5e0                                                                         |
| 0x1401fa5e0 | 0x1401fa602 | 0x1401fa602                                                                         |
| 0x1401fa602 | 0x1401fa60a | 0x1401fa60a,0x1401fa627                                                             |
| 0x1401fa60a | 0x1401fa60f | 0x1401fa60f,0x1401fa61c                                                             |
| 0x1401fa60f | 0x1401fa61c | 0x1401fa61c,0x1401fa621                                                             |
| 0x1401fa61c | 0x1401fa621 | 0x1401fa621                                                                         |
| 0x1401fa621 | 0x1401fa627 | 0x1401fa627                                                                         |
| 0x1401fa627 | 0x1401fa635 | 0x1401fa602,0x1401fa635                                                             |
| 0x1401fa635 | 0x1401fa63f | 0x1401fa63f,0x1401fa674                                                             |
| 0x1401fa63f | 0x1401fa64b | 0x1401fa64b,0x1401fa653                                                             |
| 0x1401fa64b | 0x1401fa653 | 0x1401fa653                                                                         |
| 0x1401fa653 | 0x1401fa663 | 0x1401fa663,0x1401fa740                                                             |
| 0x1401fa663 | 0x1401fa674 |                                                                                     |
| 0x1401fa674 | 0x1401fa689 | 0x1401fa689,0x1401fa740                                                             |
| 0x1401fa689 | 0x1401fa696 | 0x1401fa696,0x1401fa740                                                             |
| 0x1401fa696 | 0x1401fa6a8 | 0x1401fa6a8,0x1401fa6ba                                                             |
| 0x1401fa6a8 | 0x1401fa6b4 | 0x1401fa6b4,0x1401fa6ba                                                             |
| 0x1401fa6b4 | 0x1401fa6ba | 0x1401fa6ba                                                                         |
| 0x1401fa6ba | 0x1401fa740 | 0x1401fa740                                                                         |
| 0x1401fa740 | 0x1401fa749 |                                                                                     |

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

| ordinal | name    | data_type | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|-----------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | longlong  | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

## normalized_result.native_api.jump_tables

| dispatch_address | data_sources    | mappings                                                                                                        | default_targets | limitations |
|------------------|-----------------|-----------------------------------------------------------------------------------------------------------------|-----------------|-------------|
| 0x1401fa3cd      | [object Object] | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |             |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------------------------------------------------------|-----------------|
| 0x1401fa391#22   | 0x1401fa391 | 22       | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa391#23   | 0x1401fa391 | 23       | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa391#3046 | 0x1401fa391 | 3046     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa398#2986 | 0x1401fa398 | 2986     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa398#3031 | 0x1401fa398 | 3031     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3cd#87   | 0x1401fa3cd | 87       | BRANCHIND    | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3cf#1021 | 0x1401fa3cf | 1021     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3cf#1022 | 0x1401fa3cf | 1022     | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3cf#3053 | 0x1401fa3cf | 3053     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3d6#1025 | 0x1401fa3d6 | 1025     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3d8#1016 | 0x1401fa3d8 | 1016     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3d8#1017 | 0x1401fa3d8 | 1017     | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3d8#3052 | 0x1401fa3d8 | 3052     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3df#1020 | 0x1401fa3df | 1020     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3e1#1011 | 0x1401fa3e1 | 1011     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3e1#1012 | 0x1401fa3e1 | 1012     | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3e1#3051 | 0x1401fa3e1 | 3051     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3e8#1015 | 0x1401fa3e8 | 1015     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3ea#1006 | 0x1401fa3ea | 1006     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3ea#1007 | 0x1401fa3ea | 1007     | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3ea#3050 | 0x1401fa3ea | 3050     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3f1#1010 | 0x1401fa3f1 | 1010     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3f3#1001 | 0x1401fa3f3 | 1001     | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3f3#1002 | 0x1401fa3f3 | 1002     | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3f3#3049 | 0x1401fa3f3 | 3049     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa3fa#1005 | 0x1401fa3fa | 1005     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa3fc#996  | 0x1401fa3fc | 996      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3fc#997  | 0x1401fa3fc | 997      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa3fc#3048 | 0x1401fa3fc | 3048     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa403#1000 | 0x1401fa403 | 1000     | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa405#977  | 0x1401fa405 | 977      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa405#978  | 0x1401fa405 | 978      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa405#3047 | 0x1401fa405 | 3047     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa40c#985  | 0x1401fa40c | 985      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa40c#2329 | 0x1401fa40c | 2329     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401fa40e#991  | 0x1401fa40e | 991      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa410#2983 | 0x1401fa410 | 2983     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa416#995  | 0x1401fa416 | 995      | BRANCH       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa418#2984 | 0x1401fa418 | 2984     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa41b#3030 | 0x1401fa41b | 3030     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa420#98   | 0x1401fa420 | 98       | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa420#99   | 0x1401fa420 | 99       | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa420#2973 | 0x1401fa420 | 2973     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa420#3032 | 0x1401fa420 | 3032     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa420#3054 | 0x1401fa420 | 3054     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa427#105  | 0x1401fa427 | 105      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa42a#110  | 0x1401fa42a | 110      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa431#115  | 0x1401fa431 | 115      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa437#116  | 0x1401fa437 | 116      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa437#117  | 0x1401fa437 | 117      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa437#3055 | 0x1401fa437 | 3055     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa43e#123  | 0x1401fa43e | 123      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa441#128  | 0x1401fa441 | 128      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa445#134  | 0x1401fa445 | 134      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa44b#135  | 0x1401fa44b | 135      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa44b#136  | 0x1401fa44b | 136      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa44b#3056 | 0x1401fa44b | 3056     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa452#142  | 0x1401fa452 | 142      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa455#147  | 0x1401fa455 | 147      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa457#2982 | 0x1401fa457 | 2982     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa45a#157  | 0x1401fa45a | 157      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa45c#158  | 0x1401fa45c | 158      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa45c#159  | 0x1401fa45c | 159      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa45c#165  | 0x1401fa45c | 165      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa45c#3057 | 0x1401fa45c | 3057     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa467#172  | 0x1401fa467 | 172      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa467#3037 | 0x1401fa467 | 3037     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa469#2987 | 0x1401fa469 | 2987     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa46e#177  | 0x1401fa46e | 177      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa46e#2988 | 0x1401fa46e | 2988     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa474#178  | 0x1401fa474 | 178      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa478#180  | 0x1401fa478 | 180      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa478#3058 | 0x1401fa478 | 3058     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa47f#182  | 0x1401fa47f | 182      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa47f#3059 | 0x1401fa47f | 3059     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa486#189  | 0x1401fa486 | 189      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa489#194  | 0x1401fa489 | 194      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa490#197  | 0x1401fa490 | 197      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa490#1756 | 0x1401fa490 | 1756     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa490#3060 | 0x1401fa490 | 3060     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa493#203  | 0x1401fa493 | 203      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa496#208  | 0x1401fa496 | 208      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa498#2974 | 0x1401fa498 | 2974     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa49b#218  | 0x1401fa49b | 218      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa49d#219  | 0x1401fa49d | 219      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa49d#220  | 0x1401fa49d | 220      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa49d#226  | 0x1401fa49d | 226      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa49d#3061 | 0x1401fa49d | 3061     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4a8#233  | 0x1401fa4a8 | 233      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4a8#3038 | 0x1401fa4a8 | 3038     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4aa#2992 | 0x1401fa4aa | 2992     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4af#238  | 0x1401fa4af | 238      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa4af#2993 | 0x1401fa4af | 2993     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4b5#3033 | 0x1401fa4b5 | 3033     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa4b9#253  | 0x1401fa4b9 | 253      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4bc#259  | 0x1401fa4bc | 259      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4be#260  | 0x1401fa4be | 260      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4be#3062 | 0x1401fa4be | 3062     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4c9#269  | 0x1401fa4c9 | 269      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4cc#274  | 0x1401fa4cc | 274      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4ce#2975 | 0x1401fa4ce | 2975     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4d1#284  | 0x1401fa4d1 | 284      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4d3#285  | 0x1401fa4d3 | 285      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4d3#286  | 0x1401fa4d3 | 286      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4d3#292  | 0x1401fa4d3 | 292      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4d3#3063 | 0x1401fa4d3 | 3063     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4de#299  | 0x1401fa4de | 299      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4de#3039 | 0x1401fa4de | 3039     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4e0#2996 | 0x1401fa4e0 | 2996     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4e5#304  | 0x1401fa4e5 | 304      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa4e5#2997 | 0x1401fa4e5 | 2997     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4eb#305  | 0x1401fa4eb | 305      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4eb#306  | 0x1401fa4eb | 306      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4eb#3064 | 0x1401fa4eb | 3064     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4f2#312  | 0x1401fa4f2 | 312      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4f5#317  | 0x1401fa4f5 | 317      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4f7#2976 | 0x1401fa4f7 | 2976     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa4fa#327  | 0x1401fa4fa | 327      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa4fc#328  | 0x1401fa4fc | 328      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4fc#329  | 0x1401fa4fc | 329      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4fc#335  | 0x1401fa4fc | 335      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa4fc#3065 | 0x1401fa4fc | 3065     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa507#342  | 0x1401fa507 | 342      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa507#3040 | 0x1401fa507 | 3040     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa509#3000 | 0x1401fa509 | 3000     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa50e#347  | 0x1401fa50e | 347      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa50e#3001 | 0x1401fa50e | 3001     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa514#348  | 0x1401fa514 | 348      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa514#349  | 0x1401fa514 | 349      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa514#3066 | 0x1401fa514 | 3066     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa51b#355  | 0x1401fa51b | 355      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa51e#360  | 0x1401fa51e | 360      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa520#2977 | 0x1401fa520 | 2977     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa523#370  | 0x1401fa523 | 370      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa525#371  | 0x1401fa525 | 371      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa525#372  | 0x1401fa525 | 372      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa525#378  | 0x1401fa525 | 378      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa525#3067 | 0x1401fa525 | 3067     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa530#385  | 0x1401fa530 | 385      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa530#3041 | 0x1401fa530 | 3041     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa532#3004 | 0x1401fa532 | 3004     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa537#390  | 0x1401fa537 | 390      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa537#3005 | 0x1401fa537 | 3005     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa53d#391  | 0x1401fa53d | 391      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa53d#392  | 0x1401fa53d | 392      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa53d#3068 | 0x1401fa53d | 3068     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa544#398  | 0x1401fa544 | 398      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa547#403  | 0x1401fa547 | 403      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa549#2978 | 0x1401fa549 | 2978     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa54c#413  | 0x1401fa54c | 413      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa54e#414  | 0x1401fa54e | 414      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa54e#415  | 0x1401fa54e | 415      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa54e#421  | 0x1401fa54e | 421      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa54e#3069 | 0x1401fa54e | 3069     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa559#428  | 0x1401fa559 | 428      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa559#3042 | 0x1401fa559 | 3042     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa55b#3008 | 0x1401fa55b | 3008     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa560#433  | 0x1401fa560 | 433      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa560#3009 | 0x1401fa560 | 3009     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa566#434  | 0x1401fa566 | 434      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa566#435  | 0x1401fa566 | 435      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa566#3070 | 0x1401fa566 | 3070     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa56d#441  | 0x1401fa56d | 441      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa570#446  | 0x1401fa570 | 446      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa572#2979 | 0x1401fa572 | 2979     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa575#456  | 0x1401fa575 | 456      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa577#457  | 0x1401fa577 | 457      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa577#458  | 0x1401fa577 | 458      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa577#464  | 0x1401fa577 | 464      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa577#3071 | 0x1401fa577 | 3071     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa582#471  | 0x1401fa582 | 471      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa582#3043 | 0x1401fa582 | 3043     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa584#3012 | 0x1401fa584 | 3012     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa589#476  | 0x1401fa589 | 476      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa589#3013 | 0x1401fa589 | 3013     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa58f#477  | 0x1401fa58f | 477      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa58f#478  | 0x1401fa58f | 478      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa58f#3072 | 0x1401fa58f | 3072     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa596#484  | 0x1401fa596 | 484      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa599#489  | 0x1401fa599 | 489      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa59d#503  | 0x1401fa59d | 503      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa5a3#504  | 0x1401fa5a3 | 504      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5a3#505  | 0x1401fa5a3 | 505      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5a3#3073 | 0x1401fa5a3 | 3073     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5aa#511  | 0x1401fa5aa | 511      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5ad#516  | 0x1401fa5ad | 516      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa5af#2980 | 0x1401fa5af | 2980     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5b2#526  | 0x1401fa5b2 | 526      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa5b4#527  | 0x1401fa5b4 | 527      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5b4#528  | 0x1401fa5b4 | 528      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5b4#534  | 0x1401fa5b4 | 534      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5b4#3074 | 0x1401fa5b4 | 3074     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5bf#541  | 0x1401fa5bf | 541      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa5bf#3044 | 0x1401fa5bf | 3044     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5c1#3017 | 0x1401fa5c1 | 3017     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5c6#546  | 0x1401fa5c6 | 546      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa5c6#3018 | 0x1401fa5c6 | 3018     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5cc#547  | 0x1401fa5cc | 547      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5cc#548  | 0x1401fa5cc | 548      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5cc#3075 | 0x1401fa5cc | 3075     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5d3#554  | 0x1401fa5d3 | 554      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5d6#559  | 0x1401fa5d6 | 559      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa5da#565  | 0x1401fa5da | 565      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa5e0#566  | 0x1401fa5e0 | 566      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5e0#567  | 0x1401fa5e0 | 567      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5e0#3076 | 0x1401fa5e0 | 3076     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5e7#3034 | 0x1401fa5e7 | 3034     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5f1#576  | 0x1401fa5f1 | 576      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5f6#577  | 0x1401fa5f6 | 577      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5f6#578  | 0x1401fa5f6 | 578      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa5f6#3077 | 0x1401fa5f6 | 3077     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa5fd#582  | 0x1401fa5fd | 582      | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa602#583  | 0x1401fa602 | 583      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa602#1754 | 0x1401fa602 | 1754     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa602#2779 | 0x1401fa602 | 2779     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa602#2822 | 0x1401fa602 | 2822     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa602#3078 | 0x1401fa602 | 3078     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa605#589  | 0x1401fa605 | 589      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa608#594  | 0x1401fa608 | 594      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa60a#2981 | 0x1401fa60a | 2981     | BOOL_NEGATE  | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa60d#604  | 0x1401fa60d | 604      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa60f#605  | 0x1401fa60f | 605      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa60f#606  | 0x1401fa60f | 606      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa60f#612  | 0x1401fa60f | 612      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa60f#3079 | 0x1401fa60f | 3079     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa61a#619  | 0x1401fa61a | 619      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa61a#3045 | 0x1401fa61a | 3045     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa61c#3022 | 0x1401fa61c | 3022     | COPY         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa621#624  | 0x1401fa621 | 624      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa621#2763 | 0x1401fa621 | 2763     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa621#2806 | 0x1401fa621 | 2806     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa621#3023 | 0x1401fa621 | 3023     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa627#2778 | 0x1401fa627 | 2778     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa627#2821 | 0x1401fa627 | 2821     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa627#3035 | 0x1401fa627 | 3035     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa62b#3036 | 0x1401fa62b | 3036     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa630#641  | 0x1401fa630 | 641      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa630#3080 | 0x1401fa630 | 3080     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa633#647  | 0x1401fa633 | 647      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa63d#661  | 0x1401fa63d | 661      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa63f#662  | 0x1401fa63f | 662      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa63f#663  | 0x1401fa63f | 663      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa63f#3089 | 0x1401fa63f | 3089     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa646#669  | 0x1401fa646 | 669      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa649#674  | 0x1401fa649 | 674      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa64d#688  | 0x1401fa64d | 688      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa64d#2772 | 0x1401fa64d | 2772     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa64d#2815 | 0x1401fa64d | 2815     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa653#689  | 0x1401fa653 | 689      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa653#690  | 0x1401fa653 | 690      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa653#2777 | 0x1401fa653 | 2777     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa653#2820 | 0x1401fa653 | 2820     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa653#3090 | 0x1401fa653 | 3090     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa65a#696  | 0x1401fa65a | 696      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa65d#701  | 0x1401fa65d | 701      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa66d#733  | 0x1401fa66d | 733      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                                 |                 |
| 0x1401fa66d#976  | 0x1401fa66d | 976      | RETURN       | true    | member           | [object Object]                                                                                                                 |                 |
| 0x1401fa66d#2773 | 0x1401fa66d | 2773     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa66d#2816 | 0x1401fa66d | 2816     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa677#761  | 0x1401fa677 | 761      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa677#2764 | 0x1401fa677 | 2764     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa677#2807 | 0x1401fa677 | 2807     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa67c#762  | 0x1401fa67c | 762      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa67c#763  | 0x1401fa67c | 763      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa67c#769  | 0x1401fa67c | 769      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa67c#3081 | 0x1401fa67c | 3081     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa683#774  | 0x1401fa683 | 774      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa689#775  | 0x1401fa689 | 775      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa689#776  | 0x1401fa689 | 776      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa689#782  | 0x1401fa689 | 782      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa689#3082 | 0x1401fa689 | 3082     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa690#787  | 0x1401fa690 | 787      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa696#788  | 0x1401fa696 | 788      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa696#789  | 0x1401fa696 | 789      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa696#3083 | 0x1401fa696 | 3083     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa69d#794  | 0x1401fa69d | 794      | CALL         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa69d#2765 | 0x1401fa69d | 2765     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa69d#2808 | 0x1401fa69d | 2808     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6a3#800  | 0x1401fa6a3 | 800      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6a6#806  | 0x1401fa6a6 | 806      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa6a8#807  | 0x1401fa6a8 | 807      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6a8#808  | 0x1401fa6a8 | 808      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6a8#3084 | 0x1401fa6a8 | 3084     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa6af#814  | 0x1401fa6af | 814      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6b2#819  | 0x1401fa6b2 | 819      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa6b4#823  | 0x1401fa6b4 | 823      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa6b4#2766 | 0x1401fa6b4 | 2766     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6b4#2809 | 0x1401fa6b4 | 2809     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6ba#2775 | 0x1401fa6ba | 2775     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa6ba#2818 | 0x1401fa6ba | 2818     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                                 | [object Object] |
| 0x1401fa6bd#827  | 0x1401fa6bd | 827      | CALL         | true    | member           | [object Object],[object Object]                                                                                                 |                 |
| 0x1401fa6bd#2767 | 0x1401fa6bd | 2767     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6bd#2810 | 0x1401fa6bd | 2810     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6c2#828  | 0x1401fa6c2 | 828      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6c2#829  | 0x1401fa6c2 | 829      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6c2#3085 | 0x1401fa6c2 | 3085     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa6e3#873  | 0x1401fa6e3 | 873      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa6e3#2768 | 0x1401fa6e3 | 2768     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6e3#2811 | 0x1401fa6e3 | 2811     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6e9#874  | 0x1401fa6e9 | 874      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6e9#875  | 0x1401fa6e9 | 875      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6e9#3086 | 0x1401fa6e9 | 3086     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa6fb#901  | 0x1401fa6fb | 901      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                                 |                 |
| 0x1401fa6fb#2769 | 0x1401fa6fb | 2769     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa6fb#2812 | 0x1401fa6fb | 2812     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa701#902  | 0x1401fa701 | 902      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa701#903  | 0x1401fa701 | 903      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa701#3087 | 0x1401fa701 | 3087     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa722#947  | 0x1401fa722 | 947      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa722#2770 | 0x1401fa722 | 2770     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa722#2813 | 0x1401fa722 | 2813     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa728#948  | 0x1401fa728 | 948      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa728#949  | 0x1401fa728 | 949      | LOAD         | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa728#3088 | 0x1401fa728 | 3088     | CAST         | true    | member           | [object Object]                                                                                                                 | [object Object] |
| 0x1401fa73a#975  | 0x1401fa73a | 975      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                                 |                 |
| 0x1401fa73a#2771 | 0x1401fa73a | 2771     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa73a#2814 | 0x1401fa73a | 2814     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                                 | [object Object] |
| 0x1401fa748#757  | 0x1401fa748 | 757      | RETURN       | true    | member           | [object Object]                                                                                                                 |                 |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401fa391#3046 | 0x1401fa391#23   | 1           |
| 0x1401fa391#22   | 0x1401fa391#3046 | 0           |
| 0x1401fa391#23   | 0x1401fa3cd#87   | 0           |
| 0x1401fa3cf#3053 | 0x1401fa3cf#1022 | 1           |
| 0x1401fa3cf#1021 | 0x1401fa3cf#3053 | 0           |
| 0x1401fa3d8#3052 | 0x1401fa3d8#1017 | 1           |
| 0x1401fa3d8#1016 | 0x1401fa3d8#3052 | 0           |
| 0x1401fa3e1#3051 | 0x1401fa3e1#1012 | 1           |
| 0x1401fa3e1#1011 | 0x1401fa3e1#3051 | 0           |
| 0x1401fa3ea#3050 | 0x1401fa3ea#1007 | 1           |
| 0x1401fa3ea#1006 | 0x1401fa3ea#3050 | 0           |
| 0x1401fa3f3#3049 | 0x1401fa3f3#1002 | 1           |
| 0x1401fa3f3#1001 | 0x1401fa3f3#3049 | 0           |
| 0x1401fa3fc#3048 | 0x1401fa3fc#997  | 1           |
| 0x1401fa3fc#996  | 0x1401fa3fc#3048 | 0           |
| 0x1401fa405#3047 | 0x1401fa405#978  | 1           |
| 0x1401fa405#977  | 0x1401fa405#3047 | 0           |
| 0x1401fa40c#2329 | 0x1401fa40c#985  | 0           |
| 0x1401fa405#978  | 0x1401fa40c#2329 | 0           |
| 0x1401fa3fc#997  | 0x1401fa40c#2329 | 1           |
| 0x1401fa3f3#1002 | 0x1401fa40c#2329 | 2           |
| 0x1401fa3ea#1007 | 0x1401fa40c#2329 | 3           |
| 0x1401fa3e1#1012 | 0x1401fa40c#2329 | 4           |
| 0x1401fa3d8#1017 | 0x1401fa40c#2329 | 5           |
| 0x1401fa3cf#1022 | 0x1401fa40c#2329 | 6           |
| 0x1401fa40c#985  | 0x1401fa40e#991  | 1           |
| 0x1401fa420#3054 | 0x1401fa420#99   | 1           |
| 0x1401fa418#2984 | 0x1401fa420#2973 | 0           |
| 0x1401fa410#2983 | 0x1401fa420#2973 | 1           |
| 0x1401fa41b#3030 | 0x1401fa420#3032 | 0           |
| 0x1401fa398#3031 | 0x1401fa420#3032 | 1           |
| 0x1401fa420#98   | 0x1401fa420#3054 | 0           |
| 0x1401fa420#99   | 0x1401fa427#105  | 0           |
| 0x1401fa427#105  | 0x1401fa42a#110  | 1           |
| 0x1401fa420#99   | 0x1401fa431#115  | 1           |
| 0x1401fa437#3055 | 0x1401fa437#117  | 1           |
| 0x1401fa437#116  | 0x1401fa437#3055 | 0           |
| 0x1401fa437#117  | 0x1401fa43e#123  | 0           |
| 0x1401fa43e#123  | 0x1401fa441#128  | 1           |
| 0x1401fa437#117  | 0x1401fa445#134  | 1           |
| 0x1401fa420#3032 | 0x1401fa445#134  | 2           |
| 0x1401fa44b#3056 | 0x1401fa44b#136  | 1           |
| 0x1401fa44b#135  | 0x1401fa44b#3056 | 0           |
| 0x1401fa44b#136  | 0x1401fa452#142  | 0           |
| 0x1401fa452#142  | 0x1401fa455#147  | 1           |
| 0x1401fa420#2973 | 0x1401fa457#2982 | 0           |
| 0x1401fa457#2982 | 0x1401fa45a#157  | 1           |
| 0x1401fa45c#3057 | 0x1401fa45c#159  | 1           |
| 0x1401fa45c#159  | 0x1401fa45c#165  | 0           |
| 0x1401fa45c#158  | 0x1401fa45c#3057 | 0           |
| 0x1401fa45c#165  | 0x1401fa467#172  | 1           |
| 0x1401fa398#2986 | 0x1401fa467#3037 | 0           |
| 0x1401fa44b#136  | 0x1401fa46e#177  | 1           |
| 0x1401fa46e#2988 | 0x1401fa46e#177  | 2           |
| 0x1401fa467#3037 | 0x1401fa46e#2988 | 0           |
| 0x1401fa469#2987 | 0x1401fa46e#2988 | 1           |
| 0x1401fa478#180  | 0x1401fa478#3058 | 0           |
| 0x1401fa47f#182  | 0x1401fa47f#3059 | 0           |
| 0x1401fa474#178  | 0x1401fa486#189  | 1           |
| 0x1401fa486#189  | 0x1401fa489#194  | 1           |
| 0x1401fa490#1756 | 0x1401fa490#197  | 1           |
| 0x1401fa4b5#3033 | 0x1401fa490#1756 | 0           |
| 0x1401fa47f#3059 | 0x1401fa490#1756 | 1           |
| 0x1401fa490#197  | 0x1401fa490#3060 | 0           |
| 0x1401fa490#3060 | 0x1401fa493#203  | 0           |
| 0x1401fa493#203  | 0x1401fa496#208  | 1           |
| 0x1401fa420#2973 | 0x1401fa498#2974 | 0           |
| 0x1401fa498#2974 | 0x1401fa49b#218  | 1           |
| 0x1401fa49d#3061 | 0x1401fa49d#220  | 1           |
| 0x1401fa49d#220  | 0x1401fa49d#226  | 0           |
| 0x1401fa49d#219  | 0x1401fa49d#3061 | 0           |
| 0x1401fa49d#226  | 0x1401fa4a8#233  | 1           |
| 0x1401fa398#2986 | 0x1401fa4a8#3038 | 0           |
| 0x1401fa490#3060 | 0x1401fa4af#238  | 1           |
| 0x1401fa4af#2993 | 0x1401fa4af#238  | 2           |
| 0x1401fa4a8#3038 | 0x1401fa4af#2993 | 0           |
| 0x1401fa4aa#2992 | 0x1401fa4af#2993 | 1           |
| 0x1401fa490#1756 | 0x1401fa4b5#3033 | 0           |
| 0x1401fa4b5#3033 | 0x1401fa4b9#253  | 0           |
| 0x1401fa478#3058 | 0x1401fa4b9#253  | 1           |
| 0x1401fa4b9#253  | 0x1401fa4bc#259  | 1           |
| 0x1401fa4be#3062 | 0x1401fa4be#260  | 1           |
| 0x1401fa478#180  | 0x1401fa4be#3062 | 0           |
| 0x1401fa4be#260  | 0x1401fa4c9#269  | 0           |
| 0x1401fa4c9#269  | 0x1401fa4cc#274  | 1           |
| 0x1401fa420#2973 | 0x1401fa4ce#2975 | 0           |
| 0x1401fa4ce#2975 | 0x1401fa4d1#284  | 1           |
| 0x1401fa4d3#3063 | 0x1401fa4d3#286  | 1           |
| 0x1401fa4d3#286  | 0x1401fa4d3#292  | 0           |
| 0x1401fa4d3#285  | 0x1401fa4d3#3063 | 0           |
| 0x1401fa4d3#292  | 0x1401fa4de#299  | 1           |
| 0x1401fa398#2986 | 0x1401fa4de#3039 | 0           |
| 0x1401fa4be#260  | 0x1401fa4e5#304  | 1           |
| 0x1401fa4e5#2997 | 0x1401fa4e5#304  | 2           |
| 0x1401fa4de#3039 | 0x1401fa4e5#2997 | 0           |
| 0x1401fa4e0#2996 | 0x1401fa4e5#2997 | 1           |
| 0x1401fa4eb#3064 | 0x1401fa4eb#306  | 1           |
| 0x1401fa4eb#305  | 0x1401fa4eb#3064 | 0           |
| 0x1401fa4eb#306  | 0x1401fa4f2#312  | 0           |
| 0x1401fa4f2#312  | 0x1401fa4f5#317  | 1           |
| 0x1401fa420#2973 | 0x1401fa4f7#2976 | 0           |
| 0x1401fa4f7#2976 | 0x1401fa4fa#327  | 1           |
| 0x1401fa4fc#3065 | 0x1401fa4fc#329  | 1           |
| 0x1401fa4fc#329  | 0x1401fa4fc#335  | 0           |
| 0x1401fa4fc#328  | 0x1401fa4fc#3065 | 0           |
| 0x1401fa4fc#335  | 0x1401fa507#342  | 1           |
| 0x1401fa398#2986 | 0x1401fa507#3040 | 0           |
| 0x1401fa4eb#306  | 0x1401fa50e#347  | 1           |
| 0x1401fa50e#3001 | 0x1401fa50e#347  | 2           |
| 0x1401fa507#3040 | 0x1401fa50e#3001 | 0           |
| 0x1401fa509#3000 | 0x1401fa50e#3001 | 1           |
| 0x1401fa514#3066 | 0x1401fa514#349  | 1           |
| 0x1401fa514#348  | 0x1401fa514#3066 | 0           |
| 0x1401fa514#349  | 0x1401fa51b#355  | 0           |
| 0x1401fa51b#355  | 0x1401fa51e#360  | 1           |
| 0x1401fa420#2973 | 0x1401fa520#2977 | 0           |
| 0x1401fa520#2977 | 0x1401fa523#370  | 1           |
| 0x1401fa525#3067 | 0x1401fa525#372  | 1           |
| 0x1401fa525#372  | 0x1401fa525#378  | 0           |
| 0x1401fa525#371  | 0x1401fa525#3067 | 0           |
| 0x1401fa525#378  | 0x1401fa530#385  | 1           |
| 0x1401fa398#2986 | 0x1401fa530#3041 | 0           |
| 0x1401fa514#349  | 0x1401fa537#390  | 1           |
| 0x1401fa537#3005 | 0x1401fa537#390  | 2           |
| 0x1401fa530#3041 | 0x1401fa537#3005 | 0           |
| 0x1401fa532#3004 | 0x1401fa537#3005 | 1           |
| 0x1401fa53d#3068 | 0x1401fa53d#392  | 1           |
| 0x1401fa53d#391  | 0x1401fa53d#3068 | 0           |
| 0x1401fa53d#392  | 0x1401fa544#398  | 0           |
| 0x1401fa544#398  | 0x1401fa547#403  | 1           |
| 0x1401fa420#2973 | 0x1401fa549#2978 | 0           |
| 0x1401fa549#2978 | 0x1401fa54c#413  | 1           |
| 0x1401fa54e#3069 | 0x1401fa54e#415  | 1           |
| 0x1401fa54e#415  | 0x1401fa54e#421  | 0           |
| 0x1401fa54e#414  | 0x1401fa54e#3069 | 0           |
| 0x1401fa54e#421  | 0x1401fa559#428  | 1           |
| 0x1401fa398#2986 | 0x1401fa559#3042 | 0           |
| 0x1401fa53d#392  | 0x1401fa560#433  | 1           |
| 0x1401fa560#3009 | 0x1401fa560#433  | 2           |
| 0x1401fa559#3042 | 0x1401fa560#3009 | 0           |
| 0x1401fa55b#3008 | 0x1401fa560#3009 | 1           |
| 0x1401fa566#3070 | 0x1401fa566#435  | 1           |
| 0x1401fa566#434  | 0x1401fa566#3070 | 0           |
| 0x1401fa566#435  | 0x1401fa56d#441  | 0           |
| 0x1401fa56d#441  | 0x1401fa570#446  | 1           |
| 0x1401fa420#2973 | 0x1401fa572#2979 | 0           |
| 0x1401fa572#2979 | 0x1401fa575#456  | 1           |
| 0x1401fa577#3071 | 0x1401fa577#458  | 1           |
| 0x1401fa577#458  | 0x1401fa577#464  | 0           |
| 0x1401fa577#457  | 0x1401fa577#3071 | 0           |
| 0x1401fa577#464  | 0x1401fa582#471  | 1           |
| 0x1401fa398#2986 | 0x1401fa582#3043 | 0           |
| 0x1401fa566#435  | 0x1401fa589#476  | 1           |
| 0x1401fa589#3013 | 0x1401fa589#476  | 2           |
| 0x1401fa582#3043 | 0x1401fa589#3013 | 0           |
| 0x1401fa584#3012 | 0x1401fa589#3013 | 1           |
| 0x1401fa58f#3072 | 0x1401fa58f#478  | 1           |
| 0x1401fa58f#477  | 0x1401fa58f#3072 | 0           |
| 0x1401fa58f#478  | 0x1401fa596#484  | 0           |
| 0x1401fa596#484  | 0x1401fa599#489  | 1           |
| 0x1401fa58f#478  | 0x1401fa59d#503  | 1           |
| 0x1401fa5a3#3073 | 0x1401fa5a3#505  | 1           |
| 0x1401fa5a3#504  | 0x1401fa5a3#3073 | 0           |
| 0x1401fa5a3#505  | 0x1401fa5aa#511  | 0           |
| 0x1401fa5aa#511  | 0x1401fa5ad#516  | 1           |
| 0x1401fa420#2973 | 0x1401fa5af#2980 | 0           |
| 0x1401fa5af#2980 | 0x1401fa5b2#526  | 1           |
| 0x1401fa5b4#3074 | 0x1401fa5b4#528  | 1           |
| 0x1401fa5b4#528  | 0x1401fa5b4#534  | 0           |
| 0x1401fa5b4#527  | 0x1401fa5b4#3074 | 0           |
| 0x1401fa5b4#534  | 0x1401fa5bf#541  | 1           |
| 0x1401fa398#2986 | 0x1401fa5bf#3044 | 0           |
| 0x1401fa5a3#505  | 0x1401fa5c6#546  | 1           |
| 0x1401fa5c6#3018 | 0x1401fa5c6#546  | 2           |
| 0x1401fa5bf#3044 | 0x1401fa5c6#3018 | 0           |
| 0x1401fa5c1#3017 | 0x1401fa5c6#3018 | 1           |
| 0x1401fa5cc#3075 | 0x1401fa5cc#548  | 1           |
| 0x1401fa5cc#547  | 0x1401fa5cc#3075 | 0           |
| 0x1401fa5cc#548  | 0x1401fa5d3#554  | 0           |
| 0x1401fa5d3#554  | 0x1401fa5d6#559  | 1           |
| 0x1401fa5cc#548  | 0x1401fa5da#565  | 1           |
| 0x1401fa420#3032 | 0x1401fa5da#565  | 2           |
| 0x1401fa5e0#3076 | 0x1401fa5e0#567  | 1           |
| 0x1401fa5e0#566  | 0x1401fa5e0#3076 | 0           |
| 0x1401fa5e0#567  | 0x1401fa5f1#576  | 0           |
| 0x1401fa5f6#3077 | 0x1401fa5f6#578  | 1           |
| 0x1401fa5f6#577  | 0x1401fa5f6#3077 | 0           |
| 0x1401fa5f6#578  | 0x1401fa5fd#582  | 0           |
| 0x1401fa602#1754 | 0x1401fa602#583  | 1           |
| 0x1401fa5e7#3034 | 0x1401fa602#1754 | 0           |
| 0x1401fa627#3035 | 0x1401fa602#1754 | 1           |
| 0x1401fa5f1#576  | 0x1401fa602#2779 | 0           |
| 0x1401fa627#2778 | 0x1401fa602#2779 | 1           |
| 0x1401fa5fd#582  | 0x1401fa602#2822 | 0           |
| 0x1401fa627#2821 | 0x1401fa602#2822 | 1           |
| 0x1401fa602#583  | 0x1401fa602#3078 | 0           |
| 0x1401fa602#3078 | 0x1401fa605#589  | 0           |
| 0x1401fa605#589  | 0x1401fa608#594  | 1           |
| 0x1401fa420#2973 | 0x1401fa60a#2981 | 0           |
| 0x1401fa60a#2981 | 0x1401fa60d#604  | 1           |
| 0x1401fa60f#3079 | 0x1401fa60f#606  | 1           |
| 0x1401fa60f#606  | 0x1401fa60f#612  | 0           |
| 0x1401fa60f#605  | 0x1401fa60f#3079 | 0           |
| 0x1401fa60f#612  | 0x1401fa61a#619  | 1           |
| 0x1401fa398#2986 | 0x1401fa61a#3045 | 0           |
| 0x1401fa602#3078 | 0x1401fa621#624  | 1           |
| 0x1401fa621#3023 | 0x1401fa621#624  | 2           |
| 0x1401fa602#2779 | 0x1401fa621#2763 | 0           |
| 0x1401fa602#2822 | 0x1401fa621#2806 | 0           |
| 0x1401fa61a#3045 | 0x1401fa621#3023 | 0           |
| 0x1401fa61c#3022 | 0x1401fa621#3023 | 1           |
| 0x1401fa602#2779 | 0x1401fa627#2778 | 0           |
| 0x1401fa621#2763 | 0x1401fa627#2778 | 1           |
| 0x1401fa602#2822 | 0x1401fa627#2821 | 0           |
| 0x1401fa621#2806 | 0x1401fa627#2821 | 1           |
| 0x1401fa602#1754 | 0x1401fa627#3035 | 0           |
| 0x1401fa627#3035 | 0x1401fa630#641  | 0           |
| 0x1401fa630#3080 | 0x1401fa630#641  | 1           |
| 0x1401fa62b#3036 | 0x1401fa630#3080 | 0           |
| 0x1401fa630#641  | 0x1401fa633#647  | 1           |
| 0x1401fa420#2973 | 0x1401fa63d#661  | 1           |
| 0x1401fa63f#3089 | 0x1401fa63f#663  | 1           |
| 0x1401fa63f#662  | 0x1401fa63f#3089 | 0           |
| 0x1401fa63f#663  | 0x1401fa646#669  | 0           |
| 0x1401fa646#669  | 0x1401fa649#674  | 1           |
| 0x1401fa63f#663  | 0x1401fa64d#688  | 1           |
| 0x1401fa627#2778 | 0x1401fa64d#2772 | 0           |
| 0x1401fa627#2821 | 0x1401fa64d#2815 | 0           |
| 0x1401fa653#3090 | 0x1401fa653#690  | 1           |
| 0x1401fa627#2778 | 0x1401fa653#2777 | 0           |
| 0x1401fa64d#2772 | 0x1401fa653#2777 | 1           |
| 0x1401fa627#2821 | 0x1401fa653#2820 | 0           |
| 0x1401fa64d#2815 | 0x1401fa653#2820 | 1           |
| 0x1401fa653#689  | 0x1401fa653#3090 | 0           |
| 0x1401fa653#690  | 0x1401fa65a#696  | 0           |
| 0x1401fa65a#696  | 0x1401fa65d#701  | 1           |
| 0x1401fa653#690  | 0x1401fa66d#733  | 1           |
| 0x1401fa653#2777 | 0x1401fa66d#2773 | 0           |
| 0x1401fa653#2820 | 0x1401fa66d#2816 | 0           |
| 0x1401fa627#2778 | 0x1401fa677#2764 | 0           |
| 0x1401fa627#2821 | 0x1401fa677#2807 | 0           |
| 0x1401fa67c#3081 | 0x1401fa67c#763  | 1           |
| 0x1401fa67c#763  | 0x1401fa67c#769  | 0           |
| 0x1401fa67c#762  | 0x1401fa67c#3081 | 0           |
| 0x1401fa67c#769  | 0x1401fa683#774  | 1           |
| 0x1401fa689#3082 | 0x1401fa689#776  | 1           |
| 0x1401fa689#776  | 0x1401fa689#782  | 0           |
| 0x1401fa689#775  | 0x1401fa689#3082 | 0           |
| 0x1401fa689#782  | 0x1401fa690#787  | 1           |
| 0x1401fa696#3083 | 0x1401fa696#789  | 1           |
| 0x1401fa696#788  | 0x1401fa696#3083 | 0           |
| 0x1401fa677#2764 | 0x1401fa69d#2765 | 0           |
| 0x1401fa677#2807 | 0x1401fa69d#2808 | 0           |
| 0x1401fa69d#794  | 0x1401fa6a3#800  | 0           |
| 0x1401fa696#789  | 0x1401fa6a3#800  | 1           |
| 0x1401fa6a3#800  | 0x1401fa6a6#806  | 1           |
| 0x1401fa6a8#3084 | 0x1401fa6a8#808  | 1           |
| 0x1401fa6a8#807  | 0x1401fa6a8#3084 | 0           |
| 0x1401fa6a8#808  | 0x1401fa6af#814  | 0           |
| 0x1401fa6af#814  | 0x1401fa6b2#819  | 1           |
| 0x1401fa6a8#808  | 0x1401fa6b4#823  | 1           |
| 0x1401fa69d#2765 | 0x1401fa6b4#2766 | 0           |
| 0x1401fa69d#2808 | 0x1401fa6b4#2809 | 0           |
| 0x1401fa69d#2765 | 0x1401fa6ba#2775 | 0           |
| 0x1401fa69d#2765 | 0x1401fa6ba#2775 | 1           |
| 0x1401fa6b4#2766 | 0x1401fa6ba#2775 | 2           |
| 0x1401fa69d#2808 | 0x1401fa6ba#2818 | 0           |
| 0x1401fa69d#2808 | 0x1401fa6ba#2818 | 1           |
| 0x1401fa6b4#2809 | 0x1401fa6ba#2818 | 2           |
| 0x1401fa6ba#2775 | 0x1401fa6bd#2767 | 0           |
| 0x1401fa6ba#2818 | 0x1401fa6bd#2810 | 0           |
| 0x1401fa6c2#3085 | 0x1401fa6c2#829  | 1           |
| 0x1401fa6c2#828  | 0x1401fa6c2#3085 | 0           |
| 0x1401fa6c2#829  | 0x1401fa6e3#873  | 1           |
| 0x1401fa6bd#2767 | 0x1401fa6e3#2768 | 0           |
| 0x1401fa6bd#2810 | 0x1401fa6e3#2811 | 0           |
| 0x1401fa6e9#3086 | 0x1401fa6e9#875  | 1           |
| 0x1401fa6e9#874  | 0x1401fa6e9#3086 | 0           |
| 0x1401fa6e9#875  | 0x1401fa6fb#901  | 1           |
| 0x1401fa6e3#2768 | 0x1401fa6fb#2769 | 0           |
| 0x1401fa6e3#2811 | 0x1401fa6fb#2812 | 0           |
| 0x1401fa701#3087 | 0x1401fa701#903  | 1           |
| 0x1401fa701#902  | 0x1401fa701#3087 | 0           |
| 0x1401fa701#903  | 0x1401fa722#947  | 1           |
| 0x1401fa6fb#2769 | 0x1401fa722#2770 | 0           |
| 0x1401fa6fb#2812 | 0x1401fa722#2813 | 0           |
| 0x1401fa728#3088 | 0x1401fa728#949  | 1           |
| 0x1401fa728#948  | 0x1401fa728#3088 | 0           |
| 0x1401fa728#949  | 0x1401fa73a#975  | 1           |
| 0x1401fa722#2770 | 0x1401fa73a#2771 | 0           |
| 0x1401fa722#2813 | 0x1401fa73a#2814 | 0           |

## normalized_result.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x1401fa391#23   | memory_read        | 1             |             |
| 0x1401fa3cd#87   | indirect_branch    | 0             |             |
| 0x1401fa3cf#1022 | memory_read        | 1             |             |
| 0x1401fa3d8#1017 | memory_read        | 1             |             |
| 0x1401fa3e1#1012 | memory_read        | 1             |             |
| 0x1401fa3ea#1007 | memory_read        | 1             |             |
| 0x1401fa3f3#1002 | memory_read        | 1             |             |
| 0x1401fa3fc#997  | memory_read        | 1             |             |
| 0x1401fa405#978  | memory_read        | 1             |             |
| 0x1401fa40e#991  | conditional_branch |               | 1           |
| 0x1401fa420#99   | memory_read        | 1             |             |
| 0x1401fa42a#110  | conditional_branch |               | 1           |
| 0x1401fa431#115  | direct_call        | 0             |             |
| 0x1401fa437#117  | memory_read        | 1             |             |
| 0x1401fa441#128  | conditional_branch |               | 1           |
| 0x1401fa445#134  | direct_call        | 0             |             |
| 0x1401fa44b#136  | memory_read        | 1             |             |
| 0x1401fa455#147  | conditional_branch |               | 1           |
| 0x1401fa45a#157  | conditional_branch |               | 1           |
| 0x1401fa45c#159  | memory_read        | 1             |             |
| 0x1401fa467#172  | conditional_branch |               | 1           |
| 0x1401fa46e#177  | direct_call        | 0             |             |
| 0x1401fa489#194  | conditional_branch |               | 1           |
| 0x1401fa490#197  | memory_read        | 1             |             |
| 0x1401fa496#208  | conditional_branch |               | 1           |
| 0x1401fa49b#218  | conditional_branch |               | 1           |
| 0x1401fa49d#220  | memory_read        | 1             |             |
| 0x1401fa4a8#233  | conditional_branch |               | 1           |
| 0x1401fa4af#238  | direct_call        | 0             |             |
| 0x1401fa4bc#259  | conditional_branch |               | 1           |
| 0x1401fa4be#260  | memory_read        | 1             |             |
| 0x1401fa4cc#274  | conditional_branch |               | 1           |
| 0x1401fa4d1#284  | conditional_branch |               | 1           |
| 0x1401fa4d3#286  | memory_read        | 1             |             |
| 0x1401fa4de#299  | conditional_branch |               | 1           |
| 0x1401fa4e5#304  | direct_call        | 0             |             |
| 0x1401fa4eb#306  | memory_read        | 1             |             |
| 0x1401fa4f5#317  | conditional_branch |               | 1           |
| 0x1401fa4fa#327  | conditional_branch |               | 1           |
| 0x1401fa4fc#329  | memory_read        | 1             |             |
| 0x1401fa507#342  | conditional_branch |               | 1           |
| 0x1401fa50e#347  | direct_call        | 0             |             |
| 0x1401fa514#349  | memory_read        | 1             |             |
| 0x1401fa51e#360  | conditional_branch |               | 1           |
| 0x1401fa523#370  | conditional_branch |               | 1           |
| 0x1401fa525#372  | memory_read        | 1             |             |
| 0x1401fa530#385  | conditional_branch |               | 1           |
| 0x1401fa537#390  | direct_call        | 0             |             |
| 0x1401fa53d#392  | memory_read        | 1             |             |
| 0x1401fa547#403  | conditional_branch |               | 1           |
| 0x1401fa54c#413  | conditional_branch |               | 1           |
| 0x1401fa54e#415  | memory_read        | 1             |             |
| 0x1401fa559#428  | conditional_branch |               | 1           |
| 0x1401fa560#433  | direct_call        | 0             |             |
| 0x1401fa566#435  | memory_read        | 1             |             |
| 0x1401fa570#446  | conditional_branch |               | 1           |
| 0x1401fa575#456  | conditional_branch |               | 1           |
| 0x1401fa577#458  | memory_read        | 1             |             |
| 0x1401fa582#471  | conditional_branch |               | 1           |
| 0x1401fa589#476  | direct_call        | 0             |             |
| 0x1401fa58f#478  | memory_read        | 1             |             |
| 0x1401fa599#489  | conditional_branch |               | 1           |
| 0x1401fa59d#503  | direct_call        | 0             |             |
| 0x1401fa5a3#505  | memory_read        | 1             |             |
| 0x1401fa5ad#516  | conditional_branch |               | 1           |
| 0x1401fa5b2#526  | conditional_branch |               | 1           |
| 0x1401fa5b4#528  | memory_read        | 1             |             |
| 0x1401fa5bf#541  | conditional_branch |               | 1           |
| 0x1401fa5c6#546  | direct_call        | 0             |             |
| 0x1401fa5cc#548  | memory_read        | 1             |             |
| 0x1401fa5d6#559  | conditional_branch |               | 1           |
| 0x1401fa5da#565  | direct_call        | 0             |             |
| 0x1401fa5e0#567  | memory_read        | 1             |             |
| 0x1401fa5f6#578  | memory_read        | 1             |             |
| 0x1401fa602#583  | memory_read        | 1             |             |
| 0x1401fa608#594  | conditional_branch |               | 1           |
| 0x1401fa60d#604  | conditional_branch |               | 1           |
| 0x1401fa60f#606  | memory_read        | 1             |             |
| 0x1401fa61a#619  | conditional_branch |               | 1           |
| 0x1401fa621#624  | direct_call        | 0             |             |
| 0x1401fa633#647  | conditional_branch |               | 1           |
| 0x1401fa63d#661  | conditional_branch |               | 1           |
| 0x1401fa63f#663  | memory_read        | 1             |             |
| 0x1401fa649#674  | conditional_branch |               | 1           |
| 0x1401fa64d#688  | direct_call        | 0             |             |
| 0x1401fa653#690  | memory_read        | 1             |             |
| 0x1401fa65d#701  | conditional_branch |               | 1           |
| 0x1401fa66d#733  | direct_call        | 0             |             |
| 0x1401fa677#761  | direct_call        | 0             |             |
| 0x1401fa67c#763  | memory_read        | 1             |             |
| 0x1401fa683#774  | conditional_branch |               | 1           |
| 0x1401fa689#776  | memory_read        | 1             |             |
| 0x1401fa690#787  | conditional_branch |               | 1           |
| 0x1401fa696#789  | memory_read        | 1             |             |
| 0x1401fa69d#794  | direct_call        | 0             |             |
| 0x1401fa6a6#806  | conditional_branch |               | 1           |
| 0x1401fa6a8#808  | memory_read        | 1             |             |
| 0x1401fa6b2#819  | conditional_branch |               | 1           |
| 0x1401fa6b4#823  | direct_call        | 0             |             |
| 0x1401fa6bd#827  | direct_call        | 0             |             |
| 0x1401fa6c2#829  | memory_read        | 1             |             |
| 0x1401fa6e3#873  | direct_call        | 0             |             |
| 0x1401fa6e9#875  | memory_read        | 1             |             |
| 0x1401fa6fb#901  | direct_call        | 0             |             |
| 0x1401fa701#903  | memory_read        | 1             |             |
| 0x1401fa722#947  | direct_call        | 0             |             |
| 0x1401fa728#949  | memory_read        | 1             |             |
| 0x1401fa73a#975  | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x1401fa391#22   | 0           |
| 0       | 0x1401fa3cf#1021 | 0           |
| 0       | 0x1401fa3d8#1016 | 0           |
| 0       | 0x1401fa3e1#1011 | 0           |
| 0       | 0x1401fa3ea#1006 | 0           |
| 0       | 0x1401fa3f3#1001 | 0           |
| 0       | 0x1401fa3fc#996  | 0           |
| 0       | 0x1401fa405#977  | 0           |
| 0       | 0x1401fa420#98   | 0           |
| 0       | 0x1401fa437#116  | 0           |
| 0       | 0x1401fa44b#135  | 0           |
| 0       | 0x1401fa45c#158  | 0           |
| 0       | 0x1401fa474#178  | 0           |
| 0       | 0x1401fa478#180  | 0           |
| 0       | 0x1401fa47f#182  | 0           |
| 0       | 0x1401fa486#189  | 0           |
| 0       | 0x1401fa49d#219  | 0           |
| 0       | 0x1401fa4d3#285  | 0           |
| 0       | 0x1401fa4eb#305  | 0           |
| 0       | 0x1401fa4fc#328  | 0           |
| 0       | 0x1401fa514#348  | 0           |
| 0       | 0x1401fa525#371  | 0           |
| 0       | 0x1401fa53d#391  | 0           |
| 0       | 0x1401fa54e#414  | 0           |
| 0       | 0x1401fa566#434  | 0           |
| 0       | 0x1401fa577#457  | 0           |
| 0       | 0x1401fa58f#477  | 0           |
| 0       | 0x1401fa5a3#504  | 0           |
| 0       | 0x1401fa5b4#527  | 0           |
| 0       | 0x1401fa5cc#547  | 0           |
| 0       | 0x1401fa5e0#566  | 0           |
| 0       | 0x1401fa5f6#577  | 0           |
| 0       | 0x1401fa60f#605  | 0           |
| 0       | 0x1401fa63f#662  | 0           |
| 0       | 0x1401fa653#689  | 0           |
| 0       | 0x1401fa677#761  | 1           |
| 0       | 0x1401fa67c#762  | 0           |
| 0       | 0x1401fa689#775  | 0           |
| 0       | 0x1401fa696#788  | 0           |
| 0       | 0x1401fa6a8#807  | 0           |
| 0       | 0x1401fa6bd#827  | 1           |
| 0       | 0x1401fa6c2#828  | 0           |
| 0       | 0x1401fa6e9#874  | 0           |
| 0       | 0x1401fa701#902  | 0           |
| 0       | 0x1401fa728#948  | 0           |

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

