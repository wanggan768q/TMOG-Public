## evidence_id

ev_00aad3beb22d6d7df378a70d522e2fcbf4e9f51302a4c103070a3e8727a84ffe

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
| procedure | 0x140033700 |

## raw_result.value.procedure.address

0x140033700

## raw_result.value.procedure.name

FUN_140033700

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
| 0x140033700 | 0x14003391c |
| 0x14003391e | 0x140033922 |

## raw_result.value.procedure.body.total_bytes

546

## raw_result.value.procedure.body.span_bytes

547

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_140033700()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_28 @ Stack[-0x28]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## raw_result.value.pseudocode


undefined8 * FUN_140033700(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *unaff_RSI;
  undefined8 *unaff_R12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  lVar9 = param_1[1] - lVar2 >> 3;
  if (lVar9 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_14000c010();
  }
  uVar6 = param_1[2] - lVar2 >> 3;
  if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_14003391e:
                    /* WARNING: Subroutine does not return */
    FUN_140005500();
  }
  uVar6 = (uVar6 >> 1) + uVar6;
  uVar1 = lVar9 + 1;
  uVar7 = uVar1;
  if (uVar1 <= uVar6) {
    uVar7 = uVar6;
  }
  if (0x1fffffffffffffff < uVar7) goto LAB_14003391e;
  uVar6 = uVar7 * 8;
  if (uVar6 == 0) {
    unaff_RSI = (undefined8 *)0x0;
LAB_1400337d1:
    uVar3 = *param_3;
    *param_3 = 0xffffffffffffffff;
    unaff_R12 = (undefined8 *)
                (((longlong)param_2 - lVar2 & 0xfffffffffffffff8U) + (longlong)unaff_RSI);
    *unaff_R12 = uVar3;
    puVar10 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)*param_1;
    puVar5 = unaff_RSI;
    if (param_2 == puVar10) {
      for (; puVar8 != puVar10; puVar8 = puVar8 + 1) {
        uVar3 = *puVar8;
        *puVar8 = 0xffffffffffffffff;
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
      }
    }
    else {
      for (; puVar8 != param_2; puVar8 = puVar8 + 1) {
        uVar3 = *puVar8;
        *puVar8 = 0xffffffffffffffff;
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
      }
      puVar10 = (undefined8 *)param_1[1];
      puVar8 = unaff_R12;
      for (; param_2 != puVar10; param_2 = param_2 + 1) {
        puVar8 = puVar8 + 1;
        uVar3 = *param_2;
        *param_2 = 0xffffffffffffffff;
        *puVar8 = uVar3;
      }
    }
    puVar10 = (undefined8 *)*param_1;
    if (puVar10 == (undefined8 *)0x0) goto LAB_1400338e4;
    puVar8 = (undefined8 *)param_1[1];
    for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
      if ((longlong)*puVar10 - 1U < 0xfffffffffffffffe) {
        CloseHandle((HANDLE)*puVar10);
      }
    }
    lVar2 = *param_1;
    lVar9 = lVar2;
    puVar11 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar2 >> 3) * 8)) &&
       (lVar9 = *(longlong *)(lVar2 + -8), puVar11 = auStack_48, 0x1f < (lVar2 - lVar9) - 8U))
    goto LAB_1400338d2;
  }
  else {
    if (uVar6 < 0x1000) {
      unaff_RSI = (undefined8 *)FUN_1403272a0(uVar6);
      goto LAB_1400337d1;
    }
    if (uVar6 + 0x27 <= uVar6) goto LAB_14003391e;
    lVar9 = FUN_1403272a0();
    if (lVar9 != 0) {
      unaff_RSI = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
      unaff_RSI[-1] = lVar9;
      goto LAB_1400337d1;
    }
LAB_1400338d2:
    lVar9 = 5;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar11 = auStack_40;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1400338e4;
  thunk_FUN_140327e20(lVar9);
LAB_1400338e4:
  *param_1 = (longlong)unaff_RSI;
  param_1[1] = (longlong)(unaff_RSI + uVar1);
  param_1[2] = (longlong)(unaff_RSI + uVar7);
  return unaff_R12;
}



## raw_result.value.assembly

0x140033700: PUSH RBX,0x140033702: PUSH RBP,0x140033703: PUSH RDI,0x140033704: PUSH R15,0x140033706: SUB RSP, 0x28,0x14003370a: MOV RBP, qword ptr [RCX],0x14003370d: MOV RBX, RDX,0x140033710: MOV RDX, qword ptr [RCX + 0x8],0x140033714: MOV R9, 0x1fffffffffffffff,0x14003371e: SUB RDX, RBP,0x140033721: MOV R15, R8,0x140033724: SAR RDX, 0x3,0x140033728: MOV RDI, RCX,0x14003372b: CMP RDX, R9,0x14003372e: JZ 0x140033918,0x140033734: MOV RCX, qword ptr [RCX + 0x10],0x140033738: MOV RAX, R9,0x14003373b: MOV qword ptr [RSP + 0x50], RSI,0x140033740: SUB RCX, RBP,0x140033743: SAR RCX, 0x3,0x140033747: MOV qword ptr [RSP + 0x58], R12,0x14003374c: MOV R8, RCX,0x14003374f: SHR R8, 0x1,0x140033752: SUB RAX, R8,0x140033755: MOV qword ptr [RSP + 0x60], R13,0x14003375a: MOV qword ptr [RSP + 0x20], R14,0x14003375f: CMP RCX, RAX,0x140033762: JA 0x14003391e,0x140033768: LEA RAX, [R8 + RCX*0x1],0x14003376c: LEA R13, [RDX + 0x1],0x140033770: CMP RAX, R13,0x140033773: MOV RCX, R13,0x140033776: CMOVNC RCX, RAX,0x14003377a: CMP RCX, R9,0x14003377d: JA 0x14003391e,0x140033783: LEA R14, [RCX*0x8],0x14003378b: TEST R14, R14,0x14003378e: JNZ 0x140033794,0x140033790: XOR ESI, ESI,0x140033792: JMP 0x1400337d1,0x140033794: CMP R14, 0x1000,0x14003379b: JC 0x1400337c6,0x14003379d: LEA RCX, [R14 + 0x27],0x1400337a1: CMP RCX, R14,0x1400337a4: JBE 0x14003391e,0x1400337aa: CALL 0x1403272a0,0x1400337af: TEST RAX, RAX,0x1400337b2: JZ 0x1400338d2,0x1400337b8: LEA RSI, [RAX + 0x27],0x1400337bc: AND RSI, -0x20,0x1400337c0: MOV qword ptr [RSI + -0x8], RAX,0x1400337c4: JMP 0x1400337d1,0x1400337c6: MOV RCX, R14,0x1400337c9: CALL 0x1403272a0,0x1400337ce: MOV RSI, RAX,0x1400337d1: MOV RCX, qword ptr [R15],0x1400337d4: MOV R12, RBX,0x1400337d7: SUB R12, RBP,0x1400337da: MOV qword ptr [R15], -0x1,0x1400337e1: AND R12, -0x8,0x1400337e5: MOV RDX, RSI,0x1400337e8: ADD R12, RSI,0x1400337eb: MOV qword ptr [R12], RCX,0x1400337ef: MOV R8, qword ptr [RDI + 0x8],0x1400337f3: MOV RCX, qword ptr [RDI],0x1400337f6: CMP RBX, R8,0x1400337f9: JNZ 0x14003381d,0x1400337fb: CMP RCX, R8,0x1400337fe: JZ 0x14003386b,0x140033800: MOV RAX, qword ptr [RCX],0x140033803: LEA RDX, [RDX + 0x8],0x140033807: MOV qword ptr [RCX], -0x1,0x14003380e: ADD RCX, 0x8,0x140033812: MOV qword ptr [RDX + -0x8], RAX,0x140033816: CMP RCX, R8,0x140033819: JNZ 0x140033800,0x14003381b: JMP 0x14003386b,0x14003381d: CMP RCX, RBX,0x140033820: JZ 0x14003383d,0x140033822: MOV RAX, qword ptr [RCX],0x140033825: LEA RDX, [RDX + 0x8],0x140033829: MOV qword ptr [RCX], -0x1,0x140033830: ADD RCX, 0x8,0x140033834: MOV qword ptr [RDX + -0x8], RAX,0x140033838: CMP RCX, RBX,0x14003383b: JNZ 0x140033822,0x14003383d: MOV RDX, qword ptr [RDI + 0x8],0x140033841: LEA RCX, [R12 + 0x8],0x140033846: CMP RBX, RDX,0x140033849: JZ 0x14003386b,0x14003384b: NOP dword ptr [RAX + RAX*0x1],0x140033850: MOV RAX, qword ptr [RBX],0x140033853: LEA RCX, [RCX + 0x8],0x140033857: MOV qword ptr [RBX], -0x1,0x14003385e: ADD RBX, 0x8,0x140033862: MOV qword ptr [RCX + -0x8], RAX,0x140033866: CMP RBX, RDX,0x140033869: JNZ 0x140033850,0x14003386b: MOV RBX, qword ptr [RDI],0x14003386e: TEST RBX, RBX,0x140033871: JZ 0x1400338e4,0x140033873: MOV RBP, qword ptr [RDI + 0x8],0x140033877: CMP RBX, RBP,0x14003387a: JZ 0x14003389c,0x14003387c: NOP dword ptr [RAX],0x140033880: MOV RCX, qword ptr [RBX],0x140033883: LEA RAX, [RCX + -0x1],0x140033887: CMP RAX, -0x3,0x14003388b: JA 0x140033893,0x14003388d: CALL qword ptr [0x14037a900],0x140033893: ADD RBX, 0x8,0x140033897: CMP RBX, RBP,0x14003389a: JNZ 0x140033880,0x14003389c: MOV RCX, qword ptr [RDI],0x14003389f: MOV RAX, qword ptr [RDI + 0x10],0x1400338a3: SUB RAX, RCX,0x1400338a6: SAR RAX, 0x3,0x1400338aa: LEA RDX, [RAX*0x8],0x1400338b2: CMP RDX, 0x1000,0x1400338b9: JC 0x1400338d9,0x1400338bb: MOV RAX, qword ptr [RCX + -0x8],0x1400338bf: SUB RCX, RAX,0x1400338c2: SUB RCX, 0x8,0x1400338c6: CMP RCX, 0x1f,0x1400338ca: JA 0x1400338d2,0x1400338cc: ADD RDX, 0x27,0x1400338d0: JMP 0x1400338dc,0x1400338d2: MOV ECX, 0x5,0x1400338d7: INT 0x29,0x1400338d9: MOV RAX, RCX,0x1400338dc: MOV RCX, RAX,0x1400338df: CALL 0x1403272f0,0x1400338e4: LEA RCX, [RSI + R13*0x8],0x1400338e8: MOV qword ptr [RDI], RSI,0x1400338eb: MOV R13, qword ptr [RSP + 0x60],0x1400338f0: MOV RAX, R12,0x1400338f3: MOV R12, qword ptr [RSP + 0x58],0x1400338f8: MOV qword ptr [RDI + 0x8], RCX,0x1400338fc: LEA RCX, [R14 + RSI*0x1],0x140033900: MOV RSI, qword ptr [RSP + 0x50],0x140033905: MOV R14, qword ptr [RSP + 0x20],0x14003390a: MOV qword ptr [RDI + 0x10], RCX,0x14003390e: ADD RSP, 0x28,0x140033912: POP R15,0x140033914: POP RDI,0x140033915: POP RBP,0x140033916: POP RBX,0x140033917: RET,0x140033918: CALL 0x14000c010,0x14003391e: CALL 0x140005500

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1400348d0 | FUN_1400348d0 | [object Object] | [object Object] |

## raw_result.value.callees

| address        | name                      | classification  | body            |
|----------------|---------------------------|-----------------|-----------------|
| EXTERNAL:0x285 | KERNEL32.DLL::CloseHandle | [object Object] | [object Object] |
| 0x140005500    | FUN_140005500             | [object Object] | [object Object] |
| 0x14000c010    | FUN_14000c010             | [object Object] | [object Object] |
| 0x1403272a0    | FUN_1403272a0             | [object Object] | [object Object] |
| 0x1403272f0    | thunk_FUN_140327e20       | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140034d12    | 0x140033700    | [object Object]  | [object Object]  | [object Object] |
| 0x140483660    | 0x140033700    |                  | [object Object]  | [object Object] |
| 0x140483664    | 0x14003373b    |                  | [object Object]  | [object Object] |
| 0x140483670    | 0x140033700    |                  | [object Object]  | [object Object] |
| 0x140483674    | 0x14003373b    |                  | [object Object]  | [object Object] |
| 0x140483690    | 0x140033700    |                  | [object Object]  | [object Object] |
| 0x140483694    | 0x14003373b    |                  | [object Object]  | [object Object] |
| 0x1404d2454    | 0x140033700    |                  | [object Object]  | [object Object] |
| 0x1404d2460    | 0x14003373b    |                  | [object Object]  | [object Object] |
| 0x1404d246c    | 0x140033918    |                  | [object Object]  | [object Object] |
| 0x1404d2478    | 0x14003391e    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14003372e    | 0x140033918              | [object Object]  | [object Object]  | [object Object] |
| 0x14003373b    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x140033747    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x140033755    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14003375a    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x140033762    | 0x14003391e              | [object Object]  | [object Object]  | [object Object] |
| 0x14003377d    | 0x14003391e              | [object Object]  | [object Object]  | [object Object] |
| 0x14003378e    | 0x140033794              | [object Object]  | [object Object]  | [object Object] |
| 0x140033792    | 0x1400337d1              | [object Object]  | [object Object]  | [object Object] |
| 0x14003379b    | 0x1400337c6              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337a4    | 0x14003391e              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337aa    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337b2    | 0x1400338d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337c4    | 0x1400337d1              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337c9    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337f9    | 0x14003381d              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337fe    | 0x14003386b              | [object Object]  | [object Object]  | [object Object] |
| 0x140033819    | 0x140033800              | [object Object]  | [object Object]  | [object Object] |
| 0x14003381b    | 0x14003386b              | [object Object]  | [object Object]  | [object Object] |
| 0x140033820    | 0x14003383d              | [object Object]  | [object Object]  | [object Object] |
| 0x14003383b    | 0x140033822              | [object Object]  | [object Object]  | [object Object] |
| 0x140033849    | 0x14003386b              | [object Object]  | [object Object]  | [object Object] |
| 0x140033869    | 0x140033850              | [object Object]  | [object Object]  | [object Object] |
| 0x140033871    | 0x1400338e4              | [object Object]  | [object Object]  | [object Object] |
| 0x14003387a    | 0x14003389c              | [object Object]  | [object Object]  | [object Object] |
| 0x14003388b    | 0x140033893              | [object Object]  | [object Object]  | [object Object] |
| 0x14003388d    | EXTERNAL:0x285           | [object Object]  | [object Object]  | [object Object] |
| 0x14003388d    | 0x14037a900              | [object Object]  |                  | [object Object] |
| 0x14003389a    | 0x140033880              | [object Object]  | [object Object]  | [object Object] |
| 0x1400338b9    | 0x1400338d9              | [object Object]  | [object Object]  | [object Object] |
| 0x1400338ca    | 0x1400338d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1400338d0    | 0x1400338dc              | [object Object]  | [object Object]  | [object Object] |
| 0x1400338df    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1400338eb    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1400338f3    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x140033900    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x140033905    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x140033918    | 0x14000c010              | [object Object]  | [object Object]  | [object Object] |
| 0x14003391e    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address        | value                     | source_address |
|----------------|---------------------------|----------------|
| 0x140005500    | FUN_140005500             | 0x14003391e    |
| 0x14000c010    | FUN_14000c010             | 0x140033918    |
| 0x140033794    | LAB_140033794             | 0x14003378e    |
| 0x1400337c6    | LAB_1400337c6             | 0x14003379b    |
| 0x1400337d1    | LAB_1400337d1             | 0x140033792    |
| 0x1400337d1    | LAB_1400337d1             | 0x1400337c4    |
| 0x140033800    | LAB_140033800             | 0x140033819    |
| 0x14003381d    | LAB_14003381d             | 0x1400337f9    |
| 0x140033822    | LAB_140033822             | 0x14003383b    |
| 0x14003383d    | LAB_14003383d             | 0x140033820    |
| 0x140033850    | LAB_140033850             | 0x140033869    |
| 0x14003386b    | LAB_14003386b             | 0x1400337fe    |
| 0x14003386b    | LAB_14003386b             | 0x14003381b    |
| 0x14003386b    | LAB_14003386b             | 0x140033849    |
| 0x140033880    | LAB_140033880             | 0x14003389a    |
| 0x140033893    | LAB_140033893             | 0x14003388b    |
| 0x14003389c    | LAB_14003389c             | 0x14003387a    |
| 0x1400338d2    | LAB_1400338d2             | 0x1400337b2    |
| 0x1400338d2    | LAB_1400338d2             | 0x1400338ca    |
| 0x1400338d9    | LAB_1400338d9             | 0x1400338b9    |
| 0x1400338dc    | LAB_1400338dc             | 0x1400338d0    |
| 0x1400338e4    | LAB_1400338e4             | 0x140033871    |
| 0x140033918    | LAB_140033918             | 0x14003372e    |
| 0x14003391e    | LAB_14003391e             | 0x140033762    |
| 0x14003391e    | LAB_14003391e             | 0x14003377d    |
| 0x14003391e    | LAB_14003391e             | 0x1400337a4    |
| 0x1403272a0    | FUN_1403272a0             | 0x1400337aa    |
| 0x1403272a0    | FUN_1403272a0             | 0x1400337c9    |
| 0x1403272f0    | thunk_FUN_140327e20       | 0x1400338df    |
| 0x14037a900    | PTR_CloseHandle_14037a900 | 0x14003388d    |
| EXTERNAL:0x285 | KERNEL32.DLL::CloseHandle | 0x14003388d    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140033700 | 0x140033734 | 0x140033734,0x140033918 |
| 0x140033734 | 0x14003373b | 0x14003373b             |
| 0x14003373b | 0x140033768 | 0x140033768,0x14003391e |
| 0x140033768 | 0x140033783 | 0x140033783,0x14003391e |
| 0x140033783 | 0x140033790 | 0x140033790,0x140033794 |
| 0x140033790 | 0x140033794 | 0x1400337d1             |
| 0x140033794 | 0x14003379d | 0x14003379d,0x1400337c6 |
| 0x14003379d | 0x1400337aa | 0x1400337aa,0x14003391e |
| 0x1400337aa | 0x1400337b8 | 0x1400337b8,0x1400338d2 |
| 0x1400337b8 | 0x1400337c6 | 0x1400337d1             |
| 0x1400337c6 | 0x1400337d1 | 0x1400337d1             |
| 0x1400337d1 | 0x1400337fb | 0x1400337fb,0x14003381d |
| 0x1400337fb | 0x140033800 | 0x140033800,0x14003386b |
| 0x140033800 | 0x14003381b | 0x140033800,0x14003381b |
| 0x14003381b | 0x14003381d | 0x14003386b             |
| 0x14003381d | 0x140033822 | 0x140033822,0x14003383d |
| 0x140033822 | 0x14003383d | 0x140033822,0x14003383d |
| 0x14003383d | 0x14003384b | 0x14003384b,0x14003386b |
| 0x14003384b | 0x140033850 | 0x140033850             |
| 0x140033850 | 0x14003386b | 0x140033850,0x14003386b |
| 0x14003386b | 0x140033873 | 0x140033873,0x1400338e4 |
| 0x140033873 | 0x14003387c | 0x14003387c,0x14003389c |
| 0x14003387c | 0x140033880 | 0x140033880             |
| 0x140033880 | 0x14003388d | 0x14003388d,0x140033893 |
| 0x14003388d | 0x140033893 | 0x140033893             |
| 0x140033893 | 0x14003389c | 0x140033880,0x14003389c |
| 0x14003389c | 0x1400338bb | 0x1400338bb,0x1400338d9 |
| 0x1400338bb | 0x1400338cc | 0x1400338cc,0x1400338d2 |
| 0x1400338cc | 0x1400338d2 | 0x1400338dc             |
| 0x1400338d2 | 0x1400338d9 | 0x1400338d9             |
| 0x1400338d9 | 0x1400338dc | 0x1400338dc             |
| 0x1400338dc | 0x1400338e4 | 0x1400338e4             |
| 0x1400338e4 | 0x140033918 |                         |
| 0x140033918 | 0x14003391d |                         |
| 0x14003391e | 0x140033923 |                         |

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
| parameter | 0       | param_1 | longlong *   | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | undefined8 * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 2       | param_3 | undefined8 * | 8          | R8:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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

| id               | address     | sequence | opcode        | is_dead | block_membership | inputs                                          | output          |
|------------------|-------------|----------|---------------|---------|------------------|-------------------------------------------------|-----------------|
| 0x140033706#1517 | 0x140033706 | 1517     | PTRSUB        | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033706#1518 | 0x140033706 | 1518     | PTRSUB        | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003370a#21   | 0x14003370a | 21       | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033710#25   | 0x140033710 | 25       | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033710#1519 | 0x140033710 | 1519     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x14003371e#30   | 0x14003371e | 30       | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033724#40   | 0x140033724 | 40       | INT_SRIGHT    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003372b#84   | 0x14003372b | 84       | INT_EQUAL     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003372e#89   | 0x14003372e | 89       | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033734#91   | 0x140033734 | 91       | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033734#1520 | 0x140033734 | 1520     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033740#99   | 0x140033740 | 99       | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033743#108  | 0x140033743 | 108      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003374f#153  | 0x14003374f | 153      | INT_RIGHT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033752#162  | 0x140033752 | 162      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033762#185  | 0x140033762 | 185      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033762#187  | 0x140033762 | 187      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033768#189  | 0x140033768 | 189      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003376c#191  | 0x14003376c | 191      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033770#194  | 0x140033770 | 194      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033776#207  | 0x140033776 | 207      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033776#1546 | 0x140033776 | 1546     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033776#1547 | 0x140033776 | 1547     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x14003377a#1114 | 0x14003377a | 1114     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003377d#219  | 0x14003377d | 219      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003377d#221  | 0x14003377d | 221      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033783#222  | 0x140033783 | 222      | INT_MULT      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003378b#228  | 0x14003378b | 228      | INT_EQUAL     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003378e#234  | 0x14003378e | 234      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033790#1161 | 0x140033790 | 1161     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033792#245  | 0x140033792 | 245      | BRANCH        | true    | member           | [object Object]                                 |                 |
| 0x140033794#672  | 0x140033794 | 672      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003379b#681  | 0x14003379b | 681      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x14003379d#682  | 0x14003379d | 682      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337a4#694  | 0x1400337a4 | 694      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337a4#695  | 0x1400337a4 | 695      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400337aa#698  | 0x1400337aa | 698      | CALL          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337af#703  | 0x1400337af | 703      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337b2#708  | 0x1400337b2 | 708      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400337b8#709  | 0x1400337b8 | 709      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337bc#713  | 0x1400337bc | 713      | INT_AND       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337bc#1557 | 0x1400337bc | 1557     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337c0#722  | 0x1400337c0 | 722      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400337c0#1521 | 0x1400337c0 | 1521     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400337c4#723  | 0x1400337c4 | 723      | BRANCH        | true    | member           | [object Object]                                 |                 |
| 0x1400337c9#732  | 0x1400337c9 | 732      | CALL          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337c9#1556 | 0x1400337c9 | 1556     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337d1#246  | 0x1400337d1 | 246      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337d1#1162 | 0x1400337d1 | 1162     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400337d7#251  | 0x1400337d7 | 251      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337d7#1558 | 0x1400337d7 | 1558     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337da#259  | 0x1400337da | 259      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400337e1#262  | 0x1400337e1 | 262      | INT_AND       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337e8#272  | 0x1400337e8 | 272      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337e8#1559 | 0x1400337e8 | 1559     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337e8#1560 | 0x1400337e8 | 1560     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337eb#280  | 0x1400337eb | 280      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400337ef#282  | 0x1400337ef | 282      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337ef#1522 | 0x1400337ef | 1522     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400337ef#1561 | 0x1400337ef | 1561     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337f3#284  | 0x1400337f3 | 284      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337f3#1562 | 0x1400337f3 | 1562     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337f6#291  | 0x1400337f6 | 291      | INT_EQUAL     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337f9#297  | 0x1400337f9 | 297      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400337f9#1552 | 0x1400337f9 | 1552     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337f9#1555 | 0x1400337f9 | 1555     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337fb#303  | 0x1400337fb | 303      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337fe#308  | 0x1400337fe | 308      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400337fe#1541 | 0x1400337fe | 1541     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337fe#1543 | 0x1400337fe | 1543     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033800#309  | 0x140033800 | 309      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033803#1523 | 0x140033803 | 1523     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033807#314  | 0x140033807 | 314      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x14003380e#1524 | 0x14003380e | 1524     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033812#326  | 0x140033812 | 326      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140033819#1554 | 0x140033819 | 1554     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x14003381d#587  | 0x14003381d | 587      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033820#592  | 0x140033820 | 592      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033820#1511 | 0x140033820 | 1511     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033820#1513 | 0x140033820 | 1513     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033822#593  | 0x140033822 | 593      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033825#1525 | 0x140033825 | 1525     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033829#598  | 0x140033829 | 598      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140033830#1526 | 0x140033830 | 1526     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033834#610  | 0x140033834 | 610      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x14003383b#1551 | 0x14003383b | 1551     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x14003383d#624  | 0x14003383d | 624      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003383d#1527 | 0x14003383d | 1527     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x14003383d#1563 | 0x14003383d | 1563     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033841#1528 | 0x140033841 | 1528     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033846#633  | 0x140033846 | 633      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033849#638  | 0x140033849 | 638      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033849#1538 | 0x140033849 | 1538     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033849#1540 | 0x140033849 | 1540     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033849#1553 | 0x140033849 | 1553     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033850#641  | 0x140033850 | 641      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033857#646  | 0x140033857 | 646      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x14003385e#1529 | 0x14003385e | 1529     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033862#658  | 0x140033862 | 658      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x14003386b#340  | 0x14003386b | 340      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003386b#1564 | 0x14003386b | 1564     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x14003386e#346  | 0x14003386e | 346      | INT_EQUAL     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033871#351  | 0x140033871 | 351      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033873#353  | 0x140033873 | 353      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033873#1530 | 0x140033873 | 1530     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033873#1565 | 0x140033873 | 1565     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033877#360  | 0x140033877 | 360      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003387a#365  | 0x14003387a | 365      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x14003387a#1514 | 0x14003387a | 1514     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033880#366  | 0x140033880 | 366      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033880#1566 | 0x140033880 | 1566     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033883#368  | 0x140033883 | 368      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033883#1567 | 0x140033883 | 1567     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x14003388b#380  | 0x14003388b | 380      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003388b#382  | 0x14003388b | 382      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x14003388d#386  | 0x14003388d | 386      | CALL          | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033893#1531 | 0x140033893 | 1531     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x14003389c#408  | 0x14003389c | 408      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003389f#411  | 0x14003389f | 411      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003389f#1532 | 0x14003389f | 1532     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338a3#415  | 0x1400338a3 | 415      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338a6#424  | 0x1400338a6 | 424      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338aa#462  | 0x1400338aa | 462      | INT_MULT      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338b2#465  | 0x1400338b2 | 465      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338b2#1568 | 0x1400338b2 | 1568     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338b9#474  | 0x1400338b9 | 474      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400338b9#1545 | 0x1400338b9 | 1545     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338b9#1548 | 0x1400338b9 | 1548     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338bb#475  | 0x1400338bb | 475      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338bb#476  | 0x1400338bb | 476      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338bb#1569 | 0x1400338bb | 1569     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338bf#480  | 0x1400338bf | 480      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338c2#489  | 0x1400338c2 | 489      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338ca#506  | 0x1400338ca | 506      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338ca#508  | 0x1400338ca | 508      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400338ca#1550 | 0x1400338ca | 1550     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338d2#578  | 0x1400338d2 | 578      | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338d2#1163 | 0x1400338d2 | 1163     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338d2#1197 | 0x1400338d2 | 1197     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338d7#579  | 0x1400338d7 | 579      | CALLOTHER     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338d7#580  | 0x1400338d7 | 580      | CALLIND       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400338d7#1098 | 0x1400338d7 | 1098     | INDIRECT      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338d7#1533 | 0x1400338d7 | 1533     | PTRSUB        | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338d7#1549 | 0x1400338d7 | 1549     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338d7#1570 | 0x1400338d7 | 1570     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338dc#1083 | 0x1400338dc | 1083     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338dc#1147 | 0x1400338dc | 1147     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338dc#1165 | 0x1400338dc | 1165     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338dc#1199 | 0x1400338dc | 1199     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338df#520  | 0x1400338df | 520      | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338df#521  | 0x1400338df | 521      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400338df#522  | 0x1400338df | 522      | CALL          | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400338df#1571 | 0x1400338df | 1571     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338e4#1166 | 0x1400338e4 | 1166     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338e4#1200 | 0x1400338e4 | 1200     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338e4#1534 | 0x1400338e4 | 1534     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338e8#527  | 0x1400338e8 | 527      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400338e8#1572 | 0x1400338e8 | 1572     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338f0#531  | 0x1400338f0 | 531      | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338f8#537  | 0x1400338f8 | 537      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400338f8#1535 | 0x1400338f8 | 1535     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338f8#1573 | 0x1400338f8 | 1573     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338fc#1536 | 0x1400338fc | 1536     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x14003390a#549  | 0x14003390a | 549      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x14003390a#1537 | 0x14003390a | 1537     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x14003390a#1574 | 0x14003390a | 1574     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033917#577  | 0x140033917 | 577      | RETURN        | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033918#736  | 0x140033918 | 736      | CALL          | true    | member           | [object Object]                                 |                 |
| 0x140033918#738  | 0x140033918 | 738      | RETURN        | true    | member           | [object Object]                                 |                 |
| 0x14003391e#726  | 0x14003391e | 726      | CALL          | true    | member           | [object Object]                                 |                 |
| 0x14003391e#728  | 0x14003391e | 728      | RETURN        | true    | member           | [object Object]                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x140033710#1519 | 0x140033710#25   | 1           |
| 0x140033710#25   | 0x14003371e#30   | 0           |
| 0x14003370a#21   | 0x14003371e#30   | 1           |
| 0x14003371e#30   | 0x140033724#40   | 0           |
| 0x140033724#40   | 0x14003372b#84   | 0           |
| 0x14003372b#84   | 0x14003372e#89   | 1           |
| 0x140033734#1520 | 0x140033734#91   | 1           |
| 0x140033734#91   | 0x140033740#99   | 0           |
| 0x14003370a#21   | 0x140033740#99   | 1           |
| 0x140033740#99   | 0x140033743#108  | 0           |
| 0x140033743#108  | 0x14003374f#153  | 0           |
| 0x14003374f#153  | 0x140033752#162  | 1           |
| 0x140033752#162  | 0x140033762#185  | 0           |
| 0x140033743#108  | 0x140033762#185  | 1           |
| 0x140033762#185  | 0x140033762#187  | 1           |
| 0x14003374f#153  | 0x140033768#189  | 0           |
| 0x140033743#108  | 0x140033768#189  | 1           |
| 0x140033724#40   | 0x14003376c#191  | 0           |
| 0x14003376c#191  | 0x140033770#194  | 0           |
| 0x140033768#189  | 0x140033770#194  | 1           |
| 0x140033770#194  | 0x140033776#207  | 1           |
| 0x14003376c#191  | 0x140033776#1546 | 0           |
| 0x140033768#189  | 0x140033776#1547 | 0           |
| 0x140033776#1546 | 0x14003377a#1114 | 0           |
| 0x140033776#1547 | 0x14003377a#1114 | 1           |
| 0x14003377a#1114 | 0x14003377d#219  | 1           |
| 0x14003377d#219  | 0x14003377d#221  | 1           |
| 0x14003377a#1114 | 0x140033783#222  | 0           |
| 0x140033783#222  | 0x14003378b#228  | 0           |
| 0x14003378b#228  | 0x14003378e#234  | 1           |
| 0x140033783#222  | 0x140033794#672  | 0           |
| 0x140033794#672  | 0x14003379b#681  | 1           |
| 0x140033783#222  | 0x14003379d#682  | 0           |
| 0x14003379d#682  | 0x1400337a4#694  | 0           |
| 0x140033783#222  | 0x1400337a4#694  | 1           |
| 0x1400337a4#694  | 0x1400337a4#695  | 1           |
| 0x1400337aa#698  | 0x1400337af#703  | 0           |
| 0x1400337af#703  | 0x1400337b2#708  | 1           |
| 0x1400337aa#698  | 0x1400337b8#709  | 0           |
| 0x1400337b8#709  | 0x1400337bc#713  | 0           |
| 0x1400337bc#713  | 0x1400337bc#1557 | 0           |
| 0x1400337c0#1521 | 0x1400337c0#722  | 1           |
| 0x1400337aa#698  | 0x1400337c0#722  | 2           |
| 0x1400337bc#1557 | 0x1400337c0#1521 | 0           |
| 0x140033783#222  | 0x1400337c9#732  | 1           |
| 0x1400337c9#732  | 0x1400337c9#1556 | 0           |
| 0x140033790#1161 | 0x1400337d1#1162 | 0           |
| 0x1400337bc#1557 | 0x1400337d1#1162 | 1           |
| 0x1400337c9#1556 | 0x1400337d1#1162 | 2           |
| 0x1400337d7#1558 | 0x1400337d7#251  | 0           |
| 0x14003370a#21   | 0x1400337d7#251  | 1           |
| 0x1400337d7#251  | 0x1400337e1#262  | 0           |
| 0x1400337e1#262  | 0x1400337e8#272  | 0           |
| 0x1400337e8#1559 | 0x1400337e8#272  | 1           |
| 0x1400337d1#1162 | 0x1400337e8#1559 | 0           |
| 0x1400337e8#272  | 0x1400337e8#1560 | 0           |
| 0x1400337e8#1560 | 0x1400337eb#280  | 1           |
| 0x1400337d1#246  | 0x1400337eb#280  | 2           |
| 0x1400337ef#1522 | 0x1400337ef#282  | 1           |
| 0x1400337ef#282  | 0x1400337ef#1561 | 0           |
| 0x1400337f3#284  | 0x1400337f3#1562 | 0           |
| 0x1400337ef#1561 | 0x1400337f6#291  | 1           |
| 0x1400337f6#291  | 0x1400337f9#297  | 1           |
| 0x1400337d1#1162 | 0x1400337f9#1552 | 0           |
| 0x1400337f9#1552 | 0x1400337f9#1555 | 0           |
| 0x1400337fe#1541 | 0x1400337fb#303  | 0           |
| 0x1400337ef#1561 | 0x1400337fb#303  | 1           |
| 0x1400337fb#303  | 0x1400337fe#308  | 1           |
| 0x14003380e#1524 | 0x1400337fe#1541 | 0           |
| 0x1400337f3#1562 | 0x1400337fe#1541 | 1           |
| 0x140033819#1554 | 0x1400337fe#1543 | 0           |
| 0x1400337f9#1555 | 0x1400337fe#1543 | 1           |
| 0x1400337fe#1541 | 0x140033800#309  | 1           |
| 0x1400337fe#1543 | 0x140033803#1523 | 0           |
| 0x1400337fe#1541 | 0x140033807#314  | 1           |
| 0x1400337fe#1541 | 0x14003380e#1524 | 0           |
| 0x1400337fe#1543 | 0x140033812#326  | 1           |
| 0x140033800#309  | 0x140033812#326  | 2           |
| 0x140033803#1523 | 0x140033819#1554 | 0           |
| 0x140033820#1511 | 0x14003381d#587  | 0           |
| 0x14003381d#587  | 0x140033820#592  | 1           |
| 0x140033830#1526 | 0x140033820#1511 | 0           |
| 0x1400337f3#1562 | 0x140033820#1511 | 1           |
| 0x14003383b#1551 | 0x140033820#1513 | 0           |
| 0x1400337f9#1552 | 0x140033820#1513 | 1           |
| 0x140033820#1511 | 0x140033822#593  | 1           |
| 0x140033820#1513 | 0x140033825#1525 | 0           |
| 0x140033820#1511 | 0x140033829#598  | 1           |
| 0x140033820#1511 | 0x140033830#1526 | 0           |
| 0x140033820#1513 | 0x140033834#610  | 1           |
| 0x140033822#593  | 0x140033834#610  | 2           |
| 0x140033825#1525 | 0x14003383b#1551 | 0           |
| 0x14003383d#1527 | 0x14003383d#624  | 1           |
| 0x14003383d#624  | 0x14003383d#1563 | 0           |
| 0x140033849#1538 | 0x140033841#1528 | 0           |
| 0x140033849#1540 | 0x140033846#633  | 0           |
| 0x14003383d#1563 | 0x140033846#633  | 1           |
| 0x140033846#633  | 0x140033849#638  | 1           |
| 0x140033849#1553 | 0x140033849#1538 | 0           |
| 0x140033841#1528 | 0x140033849#1538 | 1           |
| 0x14003385e#1529 | 0x140033849#1540 | 1           |
| 0x1400337e8#1560 | 0x140033849#1553 | 0           |
| 0x140033849#1540 | 0x140033850#641  | 1           |
| 0x140033849#1540 | 0x140033857#646  | 1           |
| 0x140033849#1540 | 0x14003385e#1529 | 0           |
| 0x140033841#1528 | 0x140033862#658  | 1           |
| 0x140033850#641  | 0x140033862#658  | 2           |
| 0x14003386b#340  | 0x14003386b#1564 | 0           |
| 0x14003386b#1564 | 0x14003386e#346  | 0           |
| 0x14003386e#346  | 0x140033871#351  | 1           |
| 0x140033873#1530 | 0x140033873#353  | 1           |
| 0x140033873#353  | 0x140033873#1565 | 0           |
| 0x14003387a#1514 | 0x140033877#360  | 0           |
| 0x140033873#1565 | 0x140033877#360  | 1           |
| 0x140033877#360  | 0x14003387a#365  | 1           |
| 0x14003386b#1564 | 0x14003387a#1514 | 0           |
| 0x140033893#1531 | 0x14003387a#1514 | 1           |
| 0x14003387a#1514 | 0x140033880#366  | 1           |
| 0x140033880#366  | 0x140033880#1566 | 0           |
| 0x140033883#1567 | 0x140033883#368  | 0           |
| 0x140033880#366  | 0x140033883#1567 | 0           |
| 0x140033883#368  | 0x14003388b#380  | 0           |
| 0x14003388b#380  | 0x14003388b#382  | 1           |
| 0x140033880#1566 | 0x14003388d#386  | 1           |
| 0x14003387a#1514 | 0x140033893#1531 | 0           |
| 0x14003389f#1532 | 0x14003389f#411  | 1           |
| 0x14003389f#411  | 0x1400338a3#415  | 0           |
| 0x14003389c#408  | 0x1400338a3#415  | 1           |
| 0x1400338a3#415  | 0x1400338a6#424  | 0           |
| 0x1400338a6#424  | 0x1400338aa#462  | 0           |
| 0x1400338b2#1568 | 0x1400338b2#465  | 1           |
| 0x1400338aa#462  | 0x1400338b2#1568 | 0           |
| 0x1400338b2#465  | 0x1400338b9#474  | 1           |
| 0x14003389c#408  | 0x1400338b9#1545 | 0           |
| 0x140033706#1517 | 0x1400338b9#1548 | 0           |
| 0x14003389c#408  | 0x1400338bb#475  | 0           |
| 0x1400338bb#1569 | 0x1400338bb#476  | 1           |
| 0x1400338bb#475  | 0x1400338bb#1569 | 0           |
| 0x14003389c#408  | 0x1400338bf#480  | 0           |
| 0x1400338bb#476  | 0x1400338bf#480  | 1           |
| 0x1400338bf#480  | 0x1400338c2#489  | 0           |
| 0x1400338c2#489  | 0x1400338ca#506  | 1           |
| 0x1400338ca#506  | 0x1400338ca#508  | 1           |
| 0x140033706#1518 | 0x1400338ca#1550 | 0           |
| 0x1400337d1#1162 | 0x1400338d2#1163 | 0           |
| 0x1400337e8#1560 | 0x1400338d2#1197 | 0           |
| 0x1400338d7#1570 | 0x1400338d7#580  | 0           |
| 0x1400338d2#578  | 0x1400338d7#1098 | 0           |
| 0x1400338d7#1533 | 0x1400338d7#1549 | 0           |
| 0x1400338d7#579  | 0x1400338d7#1570 | 0           |
| 0x1400338b9#1545 | 0x1400338dc#1083 | 0           |
| 0x1400338d7#1098 | 0x1400338dc#1083 | 1           |
| 0x1400338bb#476  | 0x1400338dc#1083 | 2           |
| 0x1400338b9#1548 | 0x1400338dc#1147 | 0           |
| 0x1400338d7#1549 | 0x1400338dc#1147 | 1           |
| 0x1400338ca#1550 | 0x1400338dc#1147 | 2           |
| 0x1400337d1#1162 | 0x1400338dc#1165 | 0           |
| 0x1400338d2#1163 | 0x1400338dc#1165 | 1           |
| 0x1400337d1#1162 | 0x1400338dc#1165 | 2           |
| 0x1400337e8#1560 | 0x1400338dc#1199 | 0           |
| 0x1400338d2#1197 | 0x1400338dc#1199 | 1           |
| 0x1400337e8#1560 | 0x1400338dc#1199 | 2           |
| 0x1400338dc#1147 | 0x1400338df#520  | 0           |
| 0x1400338df#1571 | 0x1400338df#521  | 1           |
| 0x1400338dc#1083 | 0x1400338df#522  | 1           |
| 0x1400338df#520  | 0x1400338df#1571 | 0           |
| 0x1400337d1#1162 | 0x1400338e4#1166 | 0           |
| 0x1400338dc#1165 | 0x1400338e4#1166 | 1           |
| 0x1400337e8#1560 | 0x1400338e4#1200 | 0           |
| 0x1400338dc#1199 | 0x1400338e4#1200 | 1           |
| 0x1400338e4#1166 | 0x1400338e4#1534 | 0           |
| 0x14003376c#191  | 0x1400338e4#1534 | 1           |
| 0x1400338e8#1572 | 0x1400338e8#527  | 2           |
| 0x1400338e4#1166 | 0x1400338e8#1572 | 0           |
| 0x1400338e4#1200 | 0x1400338f0#531  | 0           |
| 0x1400338f8#1535 | 0x1400338f8#537  | 1           |
| 0x1400338f8#1573 | 0x1400338f8#537  | 2           |
| 0x1400338e4#1534 | 0x1400338f8#1573 | 0           |
| 0x1400338e4#1166 | 0x1400338fc#1536 | 0           |
| 0x14003377a#1114 | 0x1400338fc#1536 | 1           |
| 0x14003390a#1537 | 0x14003390a#549  | 1           |
| 0x14003390a#1574 | 0x14003390a#549  | 2           |
| 0x1400338fc#1536 | 0x14003390a#1574 | 0           |
| 0x1400338f0#531  | 0x140033917#577  | 1           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /longlong *   |
| 1       | param_2 | /undefined8 * |
| 2       | param_3 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x14003370a#21   | 1           |
| 0       | 0x140033710#1519 | 0           |
| 0       | 0x140033734#1520 | 0           |
| 2       | 0x1400337d1#246  | 1           |
| 1       | 0x1400337d7#1558 | 0           |
| 2       | 0x1400337da#259  | 1           |
| 0       | 0x1400337ef#1522 | 0           |
| 0       | 0x1400337f3#284  | 1           |
| 1       | 0x1400337f6#291  | 0           |
| 1       | 0x14003381d#587  | 1           |
| 0       | 0x14003383d#1527 | 0           |
| 1       | 0x140033846#633  | 0           |
| 1       | 0x140033849#1540 | 0           |
| 1       | 0x140033849#1540 | 1           |
| 1       | 0x140033850#641  | 1           |
| 1       | 0x140033857#646  | 1           |
| 1       | 0x14003385e#1529 | 0           |
| 0       | 0x14003386b#340  | 1           |
| 0       | 0x140033873#1530 | 0           |
| 0       | 0x14003389c#408  | 1           |
| 0       | 0x14003389f#1532 | 0           |
| 0       | 0x1400338e8#527  | 1           |
| 0       | 0x1400338f8#1535 | 0           |
| 0       | 0x14003390a#1537 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x14003370a#21  | memory_read        | 1             |             |
| 0x140033710#25  | memory_read        | 1             |             |
| 0x14003372e#89  | conditional_branch |               | 1           |
| 0x140033734#91  | memory_read        | 1             |             |
| 0x140033762#187 | conditional_branch |               | 1           |
| 0x140033776#207 | conditional_branch |               | 1           |
| 0x14003377d#221 | conditional_branch |               | 1           |
| 0x14003378e#234 | conditional_branch |               | 1           |
| 0x14003379b#681 | conditional_branch |               | 1           |
| 0x1400337a4#695 | conditional_branch |               | 1           |
| 0x1400337aa#698 | direct_call        | 0             |             |
| 0x1400337b2#708 | conditional_branch |               | 1           |
| 0x1400337c0#722 | memory_write       | 1             | 2           |
| 0x1400337c9#732 | direct_call        | 0             |             |
| 0x1400337d1#246 | memory_read        | 1             |             |
| 0x1400337da#259 | memory_write       | 1             | 2           |
| 0x1400337eb#280 | memory_write       | 1             | 2           |
| 0x1400337ef#282 | memory_read        | 1             |             |
| 0x1400337f3#284 | memory_read        | 1             |             |
| 0x1400337f9#297 | conditional_branch |               | 1           |
| 0x1400337fe#308 | conditional_branch |               | 1           |
| 0x140033800#309 | memory_read        | 1             |             |
| 0x140033807#314 | memory_write       | 1             | 2           |
| 0x140033812#326 | memory_write       | 1             | 2           |
| 0x140033820#592 | conditional_branch |               | 1           |
| 0x140033822#593 | memory_read        | 1             |             |
| 0x140033829#598 | memory_write       | 1             | 2           |
| 0x140033834#610 | memory_write       | 1             | 2           |
| 0x14003383d#624 | memory_read        | 1             |             |
| 0x140033849#638 | conditional_branch |               | 1           |
| 0x140033850#641 | memory_read        | 1             |             |
| 0x140033857#646 | memory_write       | 1             | 2           |
| 0x140033862#658 | memory_write       | 1             | 2           |
| 0x14003386b#340 | memory_read        | 1             |             |
| 0x140033871#351 | conditional_branch |               | 1           |
| 0x140033873#353 | memory_read        | 1             |             |
| 0x14003387a#365 | conditional_branch |               | 1           |
| 0x140033880#366 | memory_read        | 1             |             |
| 0x14003388b#382 | conditional_branch |               | 1           |
| 0x14003388d#386 | direct_call        | 0             |             |
| 0x14003389c#408 | memory_read        | 1             |             |
| 0x14003389f#411 | memory_read        | 1             |             |
| 0x1400338b9#474 | conditional_branch |               | 1           |
| 0x1400338bb#476 | memory_read        | 1             |             |
| 0x1400338ca#508 | conditional_branch |               | 1           |
| 0x1400338d7#580 | indirect_call      | 0             |             |
| 0x1400338df#521 | memory_write       | 1             | 2           |
| 0x1400338df#522 | direct_call        | 0             |             |
| 0x1400338e8#527 | memory_write       | 1             | 2           |
| 0x1400338f8#537 | memory_write       | 1             | 2           |
| 0x14003390a#549 | memory_write       | 1             | 2           |
| 0x140033918#736 | direct_call        | 0             |             |
| 0x14003391e#726 | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x140033918 to 0x14000c010 FUN_14000c010 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14003391e to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x140033918 to 0x14000c010 FUN_14000c010 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14003391e to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x140033700

## normalized_result.procedure.name

FUN_140033700

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
| 0x140033700 | 0x14003391c |
| 0x14003391e | 0x140033922 |

## normalized_result.procedure.body.total_bytes

546

## normalized_result.procedure.body.span_bytes

547

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_140033700()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_28 @ Stack[-0x28]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## normalized_result.pseudocode


undefined8 * FUN_140033700(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *unaff_RSI;
  undefined8 *unaff_R12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  lVar9 = param_1[1] - lVar2 >> 3;
  if (lVar9 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_14000c010();
  }
  uVar6 = param_1[2] - lVar2 >> 3;
  if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_14003391e:
                    /* WARNING: Subroutine does not return */
    FUN_140005500();
  }
  uVar6 = (uVar6 >> 1) + uVar6;
  uVar1 = lVar9 + 1;
  uVar7 = uVar1;
  if (uVar1 <= uVar6) {
    uVar7 = uVar6;
  }
  if (0x1fffffffffffffff < uVar7) goto LAB_14003391e;
  uVar6 = uVar7 * 8;
  if (uVar6 == 0) {
    unaff_RSI = (undefined8 *)0x0;
LAB_1400337d1:
    uVar3 = *param_3;
    *param_3 = 0xffffffffffffffff;
    unaff_R12 = (undefined8 *)
                (((longlong)param_2 - lVar2 & 0xfffffffffffffff8U) + (longlong)unaff_RSI);
    *unaff_R12 = uVar3;
    puVar10 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)*param_1;
    puVar5 = unaff_RSI;
    if (param_2 == puVar10) {
      for (; puVar8 != puVar10; puVar8 = puVar8 + 1) {
        uVar3 = *puVar8;
        *puVar8 = 0xffffffffffffffff;
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
      }
    }
    else {
      for (; puVar8 != param_2; puVar8 = puVar8 + 1) {
        uVar3 = *puVar8;
        *puVar8 = 0xffffffffffffffff;
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
      }
      puVar10 = (undefined8 *)param_1[1];
      puVar8 = unaff_R12;
      for (; param_2 != puVar10; param_2 = param_2 + 1) {
        puVar8 = puVar8 + 1;
        uVar3 = *param_2;
        *param_2 = 0xffffffffffffffff;
        *puVar8 = uVar3;
      }
    }
    puVar10 = (undefined8 *)*param_1;
    if (puVar10 == (undefined8 *)0x0) goto LAB_1400338e4;
    puVar8 = (undefined8 *)param_1[1];
    for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
      if ((longlong)*puVar10 - 1U < 0xfffffffffffffffe) {
        CloseHandle((HANDLE)*puVar10);
      }
    }
    lVar2 = *param_1;
    lVar9 = lVar2;
    puVar11 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar2 >> 3) * 8)) &&
       (lVar9 = *(longlong *)(lVar2 + -8), puVar11 = auStack_48, 0x1f < (lVar2 - lVar9) - 8U))
    goto LAB_1400338d2;
  }
  else {
    if (uVar6 < 0x1000) {
      unaff_RSI = (undefined8 *)FUN_1403272a0(uVar6);
      goto LAB_1400337d1;
    }
    if (uVar6 + 0x27 <= uVar6) goto LAB_14003391e;
    lVar9 = FUN_1403272a0();
    if (lVar9 != 0) {
      unaff_RSI = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
      unaff_RSI[-1] = lVar9;
      goto LAB_1400337d1;
    }
LAB_1400338d2:
    lVar9 = 5;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar11 = auStack_40;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1400338e4;
  thunk_FUN_140327e20(lVar9);
LAB_1400338e4:
  *param_1 = (longlong)unaff_RSI;
  param_1[1] = (longlong)(unaff_RSI + uVar1);
  param_1[2] = (longlong)(unaff_RSI + uVar7);
  return unaff_R12;
}



## normalized_result.assembly

0x140033700: PUSH RBX,0x140033702: PUSH RBP,0x140033703: PUSH RDI,0x140033704: PUSH R15,0x140033706: SUB RSP, 0x28,0x14003370a: MOV RBP, qword ptr [RCX],0x14003370d: MOV RBX, RDX,0x140033710: MOV RDX, qword ptr [RCX + 0x8],0x140033714: MOV R9, 0x1fffffffffffffff,0x14003371e: SUB RDX, RBP,0x140033721: MOV R15, R8,0x140033724: SAR RDX, 0x3,0x140033728: MOV RDI, RCX,0x14003372b: CMP RDX, R9,0x14003372e: JZ 0x140033918,0x140033734: MOV RCX, qword ptr [RCX + 0x10],0x140033738: MOV RAX, R9,0x14003373b: MOV qword ptr [RSP + 0x50], RSI,0x140033740: SUB RCX, RBP,0x140033743: SAR RCX, 0x3,0x140033747: MOV qword ptr [RSP + 0x58], R12,0x14003374c: MOV R8, RCX,0x14003374f: SHR R8, 0x1,0x140033752: SUB RAX, R8,0x140033755: MOV qword ptr [RSP + 0x60], R13,0x14003375a: MOV qword ptr [RSP + 0x20], R14,0x14003375f: CMP RCX, RAX,0x140033762: JA 0x14003391e,0x140033768: LEA RAX, [R8 + RCX*0x1],0x14003376c: LEA R13, [RDX + 0x1],0x140033770: CMP RAX, R13,0x140033773: MOV RCX, R13,0x140033776: CMOVNC RCX, RAX,0x14003377a: CMP RCX, R9,0x14003377d: JA 0x14003391e,0x140033783: LEA R14, [RCX*0x8],0x14003378b: TEST R14, R14,0x14003378e: JNZ 0x140033794,0x140033790: XOR ESI, ESI,0x140033792: JMP 0x1400337d1,0x140033794: CMP R14, 0x1000,0x14003379b: JC 0x1400337c6,0x14003379d: LEA RCX, [R14 + 0x27],0x1400337a1: CMP RCX, R14,0x1400337a4: JBE 0x14003391e,0x1400337aa: CALL 0x1403272a0,0x1400337af: TEST RAX, RAX,0x1400337b2: JZ 0x1400338d2,0x1400337b8: LEA RSI, [RAX + 0x27],0x1400337bc: AND RSI, -0x20,0x1400337c0: MOV qword ptr [RSI + -0x8], RAX,0x1400337c4: JMP 0x1400337d1,0x1400337c6: MOV RCX, R14,0x1400337c9: CALL 0x1403272a0,0x1400337ce: MOV RSI, RAX,0x1400337d1: MOV RCX, qword ptr [R15],0x1400337d4: MOV R12, RBX,0x1400337d7: SUB R12, RBP,0x1400337da: MOV qword ptr [R15], -0x1,0x1400337e1: AND R12, -0x8,0x1400337e5: MOV RDX, RSI,0x1400337e8: ADD R12, RSI,0x1400337eb: MOV qword ptr [R12], RCX,0x1400337ef: MOV R8, qword ptr [RDI + 0x8],0x1400337f3: MOV RCX, qword ptr [RDI],0x1400337f6: CMP RBX, R8,0x1400337f9: JNZ 0x14003381d,0x1400337fb: CMP RCX, R8,0x1400337fe: JZ 0x14003386b,0x140033800: MOV RAX, qword ptr [RCX],0x140033803: LEA RDX, [RDX + 0x8],0x140033807: MOV qword ptr [RCX], -0x1,0x14003380e: ADD RCX, 0x8,0x140033812: MOV qword ptr [RDX + -0x8], RAX,0x140033816: CMP RCX, R8,0x140033819: JNZ 0x140033800,0x14003381b: JMP 0x14003386b,0x14003381d: CMP RCX, RBX,0x140033820: JZ 0x14003383d,0x140033822: MOV RAX, qword ptr [RCX],0x140033825: LEA RDX, [RDX + 0x8],0x140033829: MOV qword ptr [RCX], -0x1,0x140033830: ADD RCX, 0x8,0x140033834: MOV qword ptr [RDX + -0x8], RAX,0x140033838: CMP RCX, RBX,0x14003383b: JNZ 0x140033822,0x14003383d: MOV RDX, qword ptr [RDI + 0x8],0x140033841: LEA RCX, [R12 + 0x8],0x140033846: CMP RBX, RDX,0x140033849: JZ 0x14003386b,0x14003384b: NOP dword ptr [RAX + RAX*0x1],0x140033850: MOV RAX, qword ptr [RBX],0x140033853: LEA RCX, [RCX + 0x8],0x140033857: MOV qword ptr [RBX], -0x1,0x14003385e: ADD RBX, 0x8,0x140033862: MOV qword ptr [RCX + -0x8], RAX,0x140033866: CMP RBX, RDX,0x140033869: JNZ 0x140033850,0x14003386b: MOV RBX, qword ptr [RDI],0x14003386e: TEST RBX, RBX,0x140033871: JZ 0x1400338e4,0x140033873: MOV RBP, qword ptr [RDI + 0x8],0x140033877: CMP RBX, RBP,0x14003387a: JZ 0x14003389c,0x14003387c: NOP dword ptr [RAX],0x140033880: MOV RCX, qword ptr [RBX],0x140033883: LEA RAX, [RCX + -0x1],0x140033887: CMP RAX, -0x3,0x14003388b: JA 0x140033893,0x14003388d: CALL qword ptr [0x14037a900],0x140033893: ADD RBX, 0x8,0x140033897: CMP RBX, RBP,0x14003389a: JNZ 0x140033880,0x14003389c: MOV RCX, qword ptr [RDI],0x14003389f: MOV RAX, qword ptr [RDI + 0x10],0x1400338a3: SUB RAX, RCX,0x1400338a6: SAR RAX, 0x3,0x1400338aa: LEA RDX, [RAX*0x8],0x1400338b2: CMP RDX, 0x1000,0x1400338b9: JC 0x1400338d9,0x1400338bb: MOV RAX, qword ptr [RCX + -0x8],0x1400338bf: SUB RCX, RAX,0x1400338c2: SUB RCX, 0x8,0x1400338c6: CMP RCX, 0x1f,0x1400338ca: JA 0x1400338d2,0x1400338cc: ADD RDX, 0x27,0x1400338d0: JMP 0x1400338dc,0x1400338d2: MOV ECX, 0x5,0x1400338d7: INT 0x29,0x1400338d9: MOV RAX, RCX,0x1400338dc: MOV RCX, RAX,0x1400338df: CALL 0x1403272f0,0x1400338e4: LEA RCX, [RSI + R13*0x8],0x1400338e8: MOV qword ptr [RDI], RSI,0x1400338eb: MOV R13, qword ptr [RSP + 0x60],0x1400338f0: MOV RAX, R12,0x1400338f3: MOV R12, qword ptr [RSP + 0x58],0x1400338f8: MOV qword ptr [RDI + 0x8], RCX,0x1400338fc: LEA RCX, [R14 + RSI*0x1],0x140033900: MOV RSI, qword ptr [RSP + 0x50],0x140033905: MOV R14, qword ptr [RSP + 0x20],0x14003390a: MOV qword ptr [RDI + 0x10], RCX,0x14003390e: ADD RSP, 0x28,0x140033912: POP R15,0x140033914: POP RDI,0x140033915: POP RBP,0x140033916: POP RBX,0x140033917: RET,0x140033918: CALL 0x14000c010,0x14003391e: CALL 0x140005500

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1400348d0 | FUN_1400348d0 | [object Object] | [object Object] |

## normalized_result.callees

| address        | name                      | classification  | body            |
|----------------|---------------------------|-----------------|-----------------|
| EXTERNAL:0x285 | KERNEL32.DLL::CloseHandle | [object Object] | [object Object] |
| 0x140005500    | FUN_140005500             | [object Object] | [object Object] |
| 0x14000c010    | FUN_14000c010             | [object Object] | [object Object] |
| 0x1403272a0    | FUN_1403272a0             | [object Object] | [object Object] |
| 0x1403272f0    | thunk_FUN_140327e20       | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140034d12    | 0x140033700    | [object Object]  | [object Object]  | [object Object] |
| 0x140483660    | 0x140033700    |                  | [object Object]  | [object Object] |
| 0x140483664    | 0x14003373b    |                  | [object Object]  | [object Object] |
| 0x140483670    | 0x140033700    |                  | [object Object]  | [object Object] |
| 0x140483674    | 0x14003373b    |                  | [object Object]  | [object Object] |
| 0x140483690    | 0x140033700    |                  | [object Object]  | [object Object] |
| 0x140483694    | 0x14003373b    |                  | [object Object]  | [object Object] |
| 0x1404d2454    | 0x140033700    |                  | [object Object]  | [object Object] |
| 0x1404d2460    | 0x14003373b    |                  | [object Object]  | [object Object] |
| 0x1404d246c    | 0x140033918    |                  | [object Object]  | [object Object] |
| 0x1404d2478    | 0x14003391e    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14003372e    | 0x140033918              | [object Object]  | [object Object]  | [object Object] |
| 0x14003373b    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x140033747    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x140033755    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14003375a    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x140033762    | 0x14003391e              | [object Object]  | [object Object]  | [object Object] |
| 0x14003377d    | 0x14003391e              | [object Object]  | [object Object]  | [object Object] |
| 0x14003378e    | 0x140033794              | [object Object]  | [object Object]  | [object Object] |
| 0x140033792    | 0x1400337d1              | [object Object]  | [object Object]  | [object Object] |
| 0x14003379b    | 0x1400337c6              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337a4    | 0x14003391e              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337aa    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337b2    | 0x1400338d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337c4    | 0x1400337d1              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337c9    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337f9    | 0x14003381d              | [object Object]  | [object Object]  | [object Object] |
| 0x1400337fe    | 0x14003386b              | [object Object]  | [object Object]  | [object Object] |
| 0x140033819    | 0x140033800              | [object Object]  | [object Object]  | [object Object] |
| 0x14003381b    | 0x14003386b              | [object Object]  | [object Object]  | [object Object] |
| 0x140033820    | 0x14003383d              | [object Object]  | [object Object]  | [object Object] |
| 0x14003383b    | 0x140033822              | [object Object]  | [object Object]  | [object Object] |
| 0x140033849    | 0x14003386b              | [object Object]  | [object Object]  | [object Object] |
| 0x140033869    | 0x140033850              | [object Object]  | [object Object]  | [object Object] |
| 0x140033871    | 0x1400338e4              | [object Object]  | [object Object]  | [object Object] |
| 0x14003387a    | 0x14003389c              | [object Object]  | [object Object]  | [object Object] |
| 0x14003388b    | 0x140033893              | [object Object]  | [object Object]  | [object Object] |
| 0x14003388d    | EXTERNAL:0x285           | [object Object]  | [object Object]  | [object Object] |
| 0x14003388d    | 0x14037a900              | [object Object]  |                  | [object Object] |
| 0x14003389a    | 0x140033880              | [object Object]  | [object Object]  | [object Object] |
| 0x1400338b9    | 0x1400338d9              | [object Object]  | [object Object]  | [object Object] |
| 0x1400338ca    | 0x1400338d2              | [object Object]  | [object Object]  | [object Object] |
| 0x1400338d0    | 0x1400338dc              | [object Object]  | [object Object]  | [object Object] |
| 0x1400338df    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1400338eb    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1400338f3    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x140033900    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x140033905    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x140033918    | 0x14000c010              | [object Object]  | [object Object]  | [object Object] |
| 0x14003391e    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address        | value                     | source_address |
|----------------|---------------------------|----------------|
| 0x140005500    | FUN_140005500             | 0x14003391e    |
| 0x14000c010    | FUN_14000c010             | 0x140033918    |
| 0x140033794    | LAB_140033794             | 0x14003378e    |
| 0x1400337c6    | LAB_1400337c6             | 0x14003379b    |
| 0x1400337d1    | LAB_1400337d1             | 0x140033792    |
| 0x1400337d1    | LAB_1400337d1             | 0x1400337c4    |
| 0x140033800    | LAB_140033800             | 0x140033819    |
| 0x14003381d    | LAB_14003381d             | 0x1400337f9    |
| 0x140033822    | LAB_140033822             | 0x14003383b    |
| 0x14003383d    | LAB_14003383d             | 0x140033820    |
| 0x140033850    | LAB_140033850             | 0x140033869    |
| 0x14003386b    | LAB_14003386b             | 0x1400337fe    |
| 0x14003386b    | LAB_14003386b             | 0x14003381b    |
| 0x14003386b    | LAB_14003386b             | 0x140033849    |
| 0x140033880    | LAB_140033880             | 0x14003389a    |
| 0x140033893    | LAB_140033893             | 0x14003388b    |
| 0x14003389c    | LAB_14003389c             | 0x14003387a    |
| 0x1400338d2    | LAB_1400338d2             | 0x1400337b2    |
| 0x1400338d2    | LAB_1400338d2             | 0x1400338ca    |
| 0x1400338d9    | LAB_1400338d9             | 0x1400338b9    |
| 0x1400338dc    | LAB_1400338dc             | 0x1400338d0    |
| 0x1400338e4    | LAB_1400338e4             | 0x140033871    |
| 0x140033918    | LAB_140033918             | 0x14003372e    |
| 0x14003391e    | LAB_14003391e             | 0x140033762    |
| 0x14003391e    | LAB_14003391e             | 0x14003377d    |
| 0x14003391e    | LAB_14003391e             | 0x1400337a4    |
| 0x1403272a0    | FUN_1403272a0             | 0x1400337aa    |
| 0x1403272a0    | FUN_1403272a0             | 0x1400337c9    |
| 0x1403272f0    | thunk_FUN_140327e20       | 0x1400338df    |
| 0x14037a900    | PTR_CloseHandle_14037a900 | 0x14003388d    |
| EXTERNAL:0x285 | KERNEL32.DLL::CloseHandle | 0x14003388d    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140033700 | 0x140033734 | 0x140033734,0x140033918 |
| 0x140033734 | 0x14003373b | 0x14003373b             |
| 0x14003373b | 0x140033768 | 0x140033768,0x14003391e |
| 0x140033768 | 0x140033783 | 0x140033783,0x14003391e |
| 0x140033783 | 0x140033790 | 0x140033790,0x140033794 |
| 0x140033790 | 0x140033794 | 0x1400337d1             |
| 0x140033794 | 0x14003379d | 0x14003379d,0x1400337c6 |
| 0x14003379d | 0x1400337aa | 0x1400337aa,0x14003391e |
| 0x1400337aa | 0x1400337b8 | 0x1400337b8,0x1400338d2 |
| 0x1400337b8 | 0x1400337c6 | 0x1400337d1             |
| 0x1400337c6 | 0x1400337d1 | 0x1400337d1             |
| 0x1400337d1 | 0x1400337fb | 0x1400337fb,0x14003381d |
| 0x1400337fb | 0x140033800 | 0x140033800,0x14003386b |
| 0x140033800 | 0x14003381b | 0x140033800,0x14003381b |
| 0x14003381b | 0x14003381d | 0x14003386b             |
| 0x14003381d | 0x140033822 | 0x140033822,0x14003383d |
| 0x140033822 | 0x14003383d | 0x140033822,0x14003383d |
| 0x14003383d | 0x14003384b | 0x14003384b,0x14003386b |
| 0x14003384b | 0x140033850 | 0x140033850             |
| 0x140033850 | 0x14003386b | 0x140033850,0x14003386b |
| 0x14003386b | 0x140033873 | 0x140033873,0x1400338e4 |
| 0x140033873 | 0x14003387c | 0x14003387c,0x14003389c |
| 0x14003387c | 0x140033880 | 0x140033880             |
| 0x140033880 | 0x14003388d | 0x14003388d,0x140033893 |
| 0x14003388d | 0x140033893 | 0x140033893             |
| 0x140033893 | 0x14003389c | 0x140033880,0x14003389c |
| 0x14003389c | 0x1400338bb | 0x1400338bb,0x1400338d9 |
| 0x1400338bb | 0x1400338cc | 0x1400338cc,0x1400338d2 |
| 0x1400338cc | 0x1400338d2 | 0x1400338dc             |
| 0x1400338d2 | 0x1400338d9 | 0x1400338d9             |
| 0x1400338d9 | 0x1400338dc | 0x1400338dc             |
| 0x1400338dc | 0x1400338e4 | 0x1400338e4             |
| 0x1400338e4 | 0x140033918 |                         |
| 0x140033918 | 0x14003391d |                         |
| 0x14003391e | 0x140033923 |                         |

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
| 0       | param_1 | longlong *   | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | undefined8 * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 2       | param_3 | undefined8 * | 8          | R8:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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

| id               | address     | sequence | opcode        | is_dead | block_membership | inputs                                          | output          |
|------------------|-------------|----------|---------------|---------|------------------|-------------------------------------------------|-----------------|
| 0x140033706#1517 | 0x140033706 | 1517     | PTRSUB        | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033706#1518 | 0x140033706 | 1518     | PTRSUB        | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003370a#21   | 0x14003370a | 21       | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033710#25   | 0x140033710 | 25       | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033710#1519 | 0x140033710 | 1519     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x14003371e#30   | 0x14003371e | 30       | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033724#40   | 0x140033724 | 40       | INT_SRIGHT    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003372b#84   | 0x14003372b | 84       | INT_EQUAL     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003372e#89   | 0x14003372e | 89       | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033734#91   | 0x140033734 | 91       | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033734#1520 | 0x140033734 | 1520     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033740#99   | 0x140033740 | 99       | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033743#108  | 0x140033743 | 108      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003374f#153  | 0x14003374f | 153      | INT_RIGHT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033752#162  | 0x140033752 | 162      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033762#185  | 0x140033762 | 185      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033762#187  | 0x140033762 | 187      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033768#189  | 0x140033768 | 189      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003376c#191  | 0x14003376c | 191      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033770#194  | 0x140033770 | 194      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033776#207  | 0x140033776 | 207      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033776#1546 | 0x140033776 | 1546     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033776#1547 | 0x140033776 | 1547     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x14003377a#1114 | 0x14003377a | 1114     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003377d#219  | 0x14003377d | 219      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003377d#221  | 0x14003377d | 221      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033783#222  | 0x140033783 | 222      | INT_MULT      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003378b#228  | 0x14003378b | 228      | INT_EQUAL     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003378e#234  | 0x14003378e | 234      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033790#1161 | 0x140033790 | 1161     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033792#245  | 0x140033792 | 245      | BRANCH        | true    | member           | [object Object]                                 |                 |
| 0x140033794#672  | 0x140033794 | 672      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003379b#681  | 0x14003379b | 681      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x14003379d#682  | 0x14003379d | 682      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337a4#694  | 0x1400337a4 | 694      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337a4#695  | 0x1400337a4 | 695      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400337aa#698  | 0x1400337aa | 698      | CALL          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337af#703  | 0x1400337af | 703      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337b2#708  | 0x1400337b2 | 708      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400337b8#709  | 0x1400337b8 | 709      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337bc#713  | 0x1400337bc | 713      | INT_AND       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337bc#1557 | 0x1400337bc | 1557     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337c0#722  | 0x1400337c0 | 722      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400337c0#1521 | 0x1400337c0 | 1521     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400337c4#723  | 0x1400337c4 | 723      | BRANCH        | true    | member           | [object Object]                                 |                 |
| 0x1400337c9#732  | 0x1400337c9 | 732      | CALL          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337c9#1556 | 0x1400337c9 | 1556     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337d1#246  | 0x1400337d1 | 246      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337d1#1162 | 0x1400337d1 | 1162     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400337d7#251  | 0x1400337d7 | 251      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337d7#1558 | 0x1400337d7 | 1558     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337da#259  | 0x1400337da | 259      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400337e1#262  | 0x1400337e1 | 262      | INT_AND       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337e8#272  | 0x1400337e8 | 272      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337e8#1559 | 0x1400337e8 | 1559     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337e8#1560 | 0x1400337e8 | 1560     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337eb#280  | 0x1400337eb | 280      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400337ef#282  | 0x1400337ef | 282      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337ef#1522 | 0x1400337ef | 1522     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400337ef#1561 | 0x1400337ef | 1561     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337f3#284  | 0x1400337f3 | 284      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337f3#1562 | 0x1400337f3 | 1562     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337f6#291  | 0x1400337f6 | 291      | INT_EQUAL     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337f9#297  | 0x1400337f9 | 297      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400337f9#1552 | 0x1400337f9 | 1552     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337f9#1555 | 0x1400337f9 | 1555     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400337fb#303  | 0x1400337fb | 303      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337fe#308  | 0x1400337fe | 308      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400337fe#1541 | 0x1400337fe | 1541     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400337fe#1543 | 0x1400337fe | 1543     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033800#309  | 0x140033800 | 309      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033803#1523 | 0x140033803 | 1523     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033807#314  | 0x140033807 | 314      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x14003380e#1524 | 0x14003380e | 1524     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033812#326  | 0x140033812 | 326      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140033819#1554 | 0x140033819 | 1554     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x14003381d#587  | 0x14003381d | 587      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033820#592  | 0x140033820 | 592      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033820#1511 | 0x140033820 | 1511     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033820#1513 | 0x140033820 | 1513     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033822#593  | 0x140033822 | 593      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033825#1525 | 0x140033825 | 1525     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033829#598  | 0x140033829 | 598      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140033830#1526 | 0x140033830 | 1526     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033834#610  | 0x140033834 | 610      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x14003383b#1551 | 0x14003383b | 1551     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x14003383d#624  | 0x14003383d | 624      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003383d#1527 | 0x14003383d | 1527     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x14003383d#1563 | 0x14003383d | 1563     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033841#1528 | 0x140033841 | 1528     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033846#633  | 0x140033846 | 633      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033849#638  | 0x140033849 | 638      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033849#1538 | 0x140033849 | 1538     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033849#1540 | 0x140033849 | 1540     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033849#1553 | 0x140033849 | 1553     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033850#641  | 0x140033850 | 641      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033857#646  | 0x140033857 | 646      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x14003385e#1529 | 0x14003385e | 1529     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033862#658  | 0x140033862 | 658      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x14003386b#340  | 0x14003386b | 340      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003386b#1564 | 0x14003386b | 1564     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x14003386e#346  | 0x14003386e | 346      | INT_EQUAL     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033871#351  | 0x140033871 | 351      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033873#353  | 0x140033873 | 353      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033873#1530 | 0x140033873 | 1530     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140033873#1565 | 0x140033873 | 1565     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033877#360  | 0x140033877 | 360      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003387a#365  | 0x14003387a | 365      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x14003387a#1514 | 0x14003387a | 1514     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033880#366  | 0x140033880 | 366      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033880#1566 | 0x140033880 | 1566     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033883#368  | 0x140033883 | 368      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140033883#1567 | 0x140033883 | 1567     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x14003388b#380  | 0x14003388b | 380      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003388b#382  | 0x14003388b | 382      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x14003388d#386  | 0x14003388d | 386      | CALL          | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033893#1531 | 0x140033893 | 1531     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x14003389c#408  | 0x14003389c | 408      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003389f#411  | 0x14003389f | 411      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x14003389f#1532 | 0x14003389f | 1532     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338a3#415  | 0x1400338a3 | 415      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338a6#424  | 0x1400338a6 | 424      | INT_SRIGHT    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338aa#462  | 0x1400338aa | 462      | INT_MULT      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338b2#465  | 0x1400338b2 | 465      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338b2#1568 | 0x1400338b2 | 1568     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338b9#474  | 0x1400338b9 | 474      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400338b9#1545 | 0x1400338b9 | 1545     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338b9#1548 | 0x1400338b9 | 1548     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338bb#475  | 0x1400338bb | 475      | INT_ADD       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338bb#476  | 0x1400338bb | 476      | LOAD          | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338bb#1569 | 0x1400338bb | 1569     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338bf#480  | 0x1400338bf | 480      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338c2#489  | 0x1400338c2 | 489      | INT_SUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338ca#506  | 0x1400338ca | 506      | INT_LESS      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338ca#508  | 0x1400338ca | 508      | CBRANCH       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400338ca#1550 | 0x1400338ca | 1550     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338d2#578  | 0x1400338d2 | 578      | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338d2#1163 | 0x1400338d2 | 1163     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338d2#1197 | 0x1400338d2 | 1197     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338d7#579  | 0x1400338d7 | 579      | CALLOTHER     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338d7#580  | 0x1400338d7 | 580      | CALLIND       | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400338d7#1098 | 0x1400338d7 | 1098     | INDIRECT      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338d7#1533 | 0x1400338d7 | 1533     | PTRSUB        | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338d7#1549 | 0x1400338d7 | 1549     | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338d7#1570 | 0x1400338d7 | 1570     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338dc#1083 | 0x1400338dc | 1083     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338dc#1147 | 0x1400338dc | 1147     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338dc#1165 | 0x1400338dc | 1165     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338dc#1199 | 0x1400338dc | 1199     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338df#520  | 0x1400338df | 520      | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338df#521  | 0x1400338df | 521      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400338df#522  | 0x1400338df | 522      | CALL          | true    | member           | [object Object],[object Object]                 |                 |
| 0x1400338df#1571 | 0x1400338df | 1571     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338e4#1166 | 0x1400338e4 | 1166     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338e4#1200 | 0x1400338e4 | 1200     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1400338e4#1534 | 0x1400338e4 | 1534     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338e8#527  | 0x1400338e8 | 527      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400338e8#1572 | 0x1400338e8 | 1572     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338f0#531  | 0x1400338f0 | 531      | COPY          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338f8#537  | 0x1400338f8 | 537      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1400338f8#1535 | 0x1400338f8 | 1535     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1400338f8#1573 | 0x1400338f8 | 1573     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x1400338fc#1536 | 0x1400338fc | 1536     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x14003390a#549  | 0x14003390a | 549      | STORE         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x14003390a#1537 | 0x14003390a | 1537     | PTRADD        | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x14003390a#1574 | 0x14003390a | 1574     | CAST          | true    | member           | [object Object]                                 | [object Object] |
| 0x140033917#577  | 0x140033917 | 577      | RETURN        | true    | member           | [object Object],[object Object]                 |                 |
| 0x140033918#736  | 0x140033918 | 736      | CALL          | true    | member           | [object Object]                                 |                 |
| 0x140033918#738  | 0x140033918 | 738      | RETURN        | true    | member           | [object Object]                                 |                 |
| 0x14003391e#726  | 0x14003391e | 726      | CALL          | true    | member           | [object Object]                                 |                 |
| 0x14003391e#728  | 0x14003391e | 728      | RETURN        | true    | member           | [object Object]                                 |                 |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x140033710#1519 | 0x140033710#25   | 1           |
| 0x140033710#25   | 0x14003371e#30   | 0           |
| 0x14003370a#21   | 0x14003371e#30   | 1           |
| 0x14003371e#30   | 0x140033724#40   | 0           |
| 0x140033724#40   | 0x14003372b#84   | 0           |
| 0x14003372b#84   | 0x14003372e#89   | 1           |
| 0x140033734#1520 | 0x140033734#91   | 1           |
| 0x140033734#91   | 0x140033740#99   | 0           |
| 0x14003370a#21   | 0x140033740#99   | 1           |
| 0x140033740#99   | 0x140033743#108  | 0           |
| 0x140033743#108  | 0x14003374f#153  | 0           |
| 0x14003374f#153  | 0x140033752#162  | 1           |
| 0x140033752#162  | 0x140033762#185  | 0           |
| 0x140033743#108  | 0x140033762#185  | 1           |
| 0x140033762#185  | 0x140033762#187  | 1           |
| 0x14003374f#153  | 0x140033768#189  | 0           |
| 0x140033743#108  | 0x140033768#189  | 1           |
| 0x140033724#40   | 0x14003376c#191  | 0           |
| 0x14003376c#191  | 0x140033770#194  | 0           |
| 0x140033768#189  | 0x140033770#194  | 1           |
| 0x140033770#194  | 0x140033776#207  | 1           |
| 0x14003376c#191  | 0x140033776#1546 | 0           |
| 0x140033768#189  | 0x140033776#1547 | 0           |
| 0x140033776#1546 | 0x14003377a#1114 | 0           |
| 0x140033776#1547 | 0x14003377a#1114 | 1           |
| 0x14003377a#1114 | 0x14003377d#219  | 1           |
| 0x14003377d#219  | 0x14003377d#221  | 1           |
| 0x14003377a#1114 | 0x140033783#222  | 0           |
| 0x140033783#222  | 0x14003378b#228  | 0           |
| 0x14003378b#228  | 0x14003378e#234  | 1           |
| 0x140033783#222  | 0x140033794#672  | 0           |
| 0x140033794#672  | 0x14003379b#681  | 1           |
| 0x140033783#222  | 0x14003379d#682  | 0           |
| 0x14003379d#682  | 0x1400337a4#694  | 0           |
| 0x140033783#222  | 0x1400337a4#694  | 1           |
| 0x1400337a4#694  | 0x1400337a4#695  | 1           |
| 0x1400337aa#698  | 0x1400337af#703  | 0           |
| 0x1400337af#703  | 0x1400337b2#708  | 1           |
| 0x1400337aa#698  | 0x1400337b8#709  | 0           |
| 0x1400337b8#709  | 0x1400337bc#713  | 0           |
| 0x1400337bc#713  | 0x1400337bc#1557 | 0           |
| 0x1400337c0#1521 | 0x1400337c0#722  | 1           |
| 0x1400337aa#698  | 0x1400337c0#722  | 2           |
| 0x1400337bc#1557 | 0x1400337c0#1521 | 0           |
| 0x140033783#222  | 0x1400337c9#732  | 1           |
| 0x1400337c9#732  | 0x1400337c9#1556 | 0           |
| 0x140033790#1161 | 0x1400337d1#1162 | 0           |
| 0x1400337bc#1557 | 0x1400337d1#1162 | 1           |
| 0x1400337c9#1556 | 0x1400337d1#1162 | 2           |
| 0x1400337d7#1558 | 0x1400337d7#251  | 0           |
| 0x14003370a#21   | 0x1400337d7#251  | 1           |
| 0x1400337d7#251  | 0x1400337e1#262  | 0           |
| 0x1400337e1#262  | 0x1400337e8#272  | 0           |
| 0x1400337e8#1559 | 0x1400337e8#272  | 1           |
| 0x1400337d1#1162 | 0x1400337e8#1559 | 0           |
| 0x1400337e8#272  | 0x1400337e8#1560 | 0           |
| 0x1400337e8#1560 | 0x1400337eb#280  | 1           |
| 0x1400337d1#246  | 0x1400337eb#280  | 2           |
| 0x1400337ef#1522 | 0x1400337ef#282  | 1           |
| 0x1400337ef#282  | 0x1400337ef#1561 | 0           |
| 0x1400337f3#284  | 0x1400337f3#1562 | 0           |
| 0x1400337ef#1561 | 0x1400337f6#291  | 1           |
| 0x1400337f6#291  | 0x1400337f9#297  | 1           |
| 0x1400337d1#1162 | 0x1400337f9#1552 | 0           |
| 0x1400337f9#1552 | 0x1400337f9#1555 | 0           |
| 0x1400337fe#1541 | 0x1400337fb#303  | 0           |
| 0x1400337ef#1561 | 0x1400337fb#303  | 1           |
| 0x1400337fb#303  | 0x1400337fe#308  | 1           |
| 0x14003380e#1524 | 0x1400337fe#1541 | 0           |
| 0x1400337f3#1562 | 0x1400337fe#1541 | 1           |
| 0x140033819#1554 | 0x1400337fe#1543 | 0           |
| 0x1400337f9#1555 | 0x1400337fe#1543 | 1           |
| 0x1400337fe#1541 | 0x140033800#309  | 1           |
| 0x1400337fe#1543 | 0x140033803#1523 | 0           |
| 0x1400337fe#1541 | 0x140033807#314  | 1           |
| 0x1400337fe#1541 | 0x14003380e#1524 | 0           |
| 0x1400337fe#1543 | 0x140033812#326  | 1           |
| 0x140033800#309  | 0x140033812#326  | 2           |
| 0x140033803#1523 | 0x140033819#1554 | 0           |
| 0x140033820#1511 | 0x14003381d#587  | 0           |
| 0x14003381d#587  | 0x140033820#592  | 1           |
| 0x140033830#1526 | 0x140033820#1511 | 0           |
| 0x1400337f3#1562 | 0x140033820#1511 | 1           |
| 0x14003383b#1551 | 0x140033820#1513 | 0           |
| 0x1400337f9#1552 | 0x140033820#1513 | 1           |
| 0x140033820#1511 | 0x140033822#593  | 1           |
| 0x140033820#1513 | 0x140033825#1525 | 0           |
| 0x140033820#1511 | 0x140033829#598  | 1           |
| 0x140033820#1511 | 0x140033830#1526 | 0           |
| 0x140033820#1513 | 0x140033834#610  | 1           |
| 0x140033822#593  | 0x140033834#610  | 2           |
| 0x140033825#1525 | 0x14003383b#1551 | 0           |
| 0x14003383d#1527 | 0x14003383d#624  | 1           |
| 0x14003383d#624  | 0x14003383d#1563 | 0           |
| 0x140033849#1538 | 0x140033841#1528 | 0           |
| 0x140033849#1540 | 0x140033846#633  | 0           |
| 0x14003383d#1563 | 0x140033846#633  | 1           |
| 0x140033846#633  | 0x140033849#638  | 1           |
| 0x140033849#1553 | 0x140033849#1538 | 0           |
| 0x140033841#1528 | 0x140033849#1538 | 1           |
| 0x14003385e#1529 | 0x140033849#1540 | 1           |
| 0x1400337e8#1560 | 0x140033849#1553 | 0           |
| 0x140033849#1540 | 0x140033850#641  | 1           |
| 0x140033849#1540 | 0x140033857#646  | 1           |
| 0x140033849#1540 | 0x14003385e#1529 | 0           |
| 0x140033841#1528 | 0x140033862#658  | 1           |
| 0x140033850#641  | 0x140033862#658  | 2           |
| 0x14003386b#340  | 0x14003386b#1564 | 0           |
| 0x14003386b#1564 | 0x14003386e#346  | 0           |
| 0x14003386e#346  | 0x140033871#351  | 1           |
| 0x140033873#1530 | 0x140033873#353  | 1           |
| 0x140033873#353  | 0x140033873#1565 | 0           |
| 0x14003387a#1514 | 0x140033877#360  | 0           |
| 0x140033873#1565 | 0x140033877#360  | 1           |
| 0x140033877#360  | 0x14003387a#365  | 1           |
| 0x14003386b#1564 | 0x14003387a#1514 | 0           |
| 0x140033893#1531 | 0x14003387a#1514 | 1           |
| 0x14003387a#1514 | 0x140033880#366  | 1           |
| 0x140033880#366  | 0x140033880#1566 | 0           |
| 0x140033883#1567 | 0x140033883#368  | 0           |
| 0x140033880#366  | 0x140033883#1567 | 0           |
| 0x140033883#368  | 0x14003388b#380  | 0           |
| 0x14003388b#380  | 0x14003388b#382  | 1           |
| 0x140033880#1566 | 0x14003388d#386  | 1           |
| 0x14003387a#1514 | 0x140033893#1531 | 0           |
| 0x14003389f#1532 | 0x14003389f#411  | 1           |
| 0x14003389f#411  | 0x1400338a3#415  | 0           |
| 0x14003389c#408  | 0x1400338a3#415  | 1           |
| 0x1400338a3#415  | 0x1400338a6#424  | 0           |
| 0x1400338a6#424  | 0x1400338aa#462  | 0           |
| 0x1400338b2#1568 | 0x1400338b2#465  | 1           |
| 0x1400338aa#462  | 0x1400338b2#1568 | 0           |
| 0x1400338b2#465  | 0x1400338b9#474  | 1           |
| 0x14003389c#408  | 0x1400338b9#1545 | 0           |
| 0x140033706#1517 | 0x1400338b9#1548 | 0           |
| 0x14003389c#408  | 0x1400338bb#475  | 0           |
| 0x1400338bb#1569 | 0x1400338bb#476  | 1           |
| 0x1400338bb#475  | 0x1400338bb#1569 | 0           |
| 0x14003389c#408  | 0x1400338bf#480  | 0           |
| 0x1400338bb#476  | 0x1400338bf#480  | 1           |
| 0x1400338bf#480  | 0x1400338c2#489  | 0           |
| 0x1400338c2#489  | 0x1400338ca#506  | 1           |
| 0x1400338ca#506  | 0x1400338ca#508  | 1           |
| 0x140033706#1518 | 0x1400338ca#1550 | 0           |
| 0x1400337d1#1162 | 0x1400338d2#1163 | 0           |
| 0x1400337e8#1560 | 0x1400338d2#1197 | 0           |
| 0x1400338d7#1570 | 0x1400338d7#580  | 0           |
| 0x1400338d2#578  | 0x1400338d7#1098 | 0           |
| 0x1400338d7#1533 | 0x1400338d7#1549 | 0           |
| 0x1400338d7#579  | 0x1400338d7#1570 | 0           |
| 0x1400338b9#1545 | 0x1400338dc#1083 | 0           |
| 0x1400338d7#1098 | 0x1400338dc#1083 | 1           |
| 0x1400338bb#476  | 0x1400338dc#1083 | 2           |
| 0x1400338b9#1548 | 0x1400338dc#1147 | 0           |
| 0x1400338d7#1549 | 0x1400338dc#1147 | 1           |
| 0x1400338ca#1550 | 0x1400338dc#1147 | 2           |
| 0x1400337d1#1162 | 0x1400338dc#1165 | 0           |
| 0x1400338d2#1163 | 0x1400338dc#1165 | 1           |
| 0x1400337d1#1162 | 0x1400338dc#1165 | 2           |
| 0x1400337e8#1560 | 0x1400338dc#1199 | 0           |
| 0x1400338d2#1197 | 0x1400338dc#1199 | 1           |
| 0x1400337e8#1560 | 0x1400338dc#1199 | 2           |
| 0x1400338dc#1147 | 0x1400338df#520  | 0           |
| 0x1400338df#1571 | 0x1400338df#521  | 1           |
| 0x1400338dc#1083 | 0x1400338df#522  | 1           |
| 0x1400338df#520  | 0x1400338df#1571 | 0           |
| 0x1400337d1#1162 | 0x1400338e4#1166 | 0           |
| 0x1400338dc#1165 | 0x1400338e4#1166 | 1           |
| 0x1400337e8#1560 | 0x1400338e4#1200 | 0           |
| 0x1400338dc#1199 | 0x1400338e4#1200 | 1           |
| 0x1400338e4#1166 | 0x1400338e4#1534 | 0           |
| 0x14003376c#191  | 0x1400338e4#1534 | 1           |
| 0x1400338e8#1572 | 0x1400338e8#527  | 2           |
| 0x1400338e4#1166 | 0x1400338e8#1572 | 0           |
| 0x1400338e4#1200 | 0x1400338f0#531  | 0           |
| 0x1400338f8#1535 | 0x1400338f8#537  | 1           |
| 0x1400338f8#1573 | 0x1400338f8#537  | 2           |
| 0x1400338e4#1534 | 0x1400338f8#1573 | 0           |
| 0x1400338e4#1166 | 0x1400338fc#1536 | 0           |
| 0x14003377a#1114 | 0x1400338fc#1536 | 1           |
| 0x14003390a#1537 | 0x14003390a#549  | 1           |
| 0x14003390a#1574 | 0x14003390a#549  | 2           |
| 0x1400338fc#1536 | 0x14003390a#1574 | 0           |
| 0x1400338f0#531  | 0x140033917#577  | 1           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x14003370a#21  | memory_read        | 1             |             |
| 0x140033710#25  | memory_read        | 1             |             |
| 0x14003372e#89  | conditional_branch |               | 1           |
| 0x140033734#91  | memory_read        | 1             |             |
| 0x140033762#187 | conditional_branch |               | 1           |
| 0x140033776#207 | conditional_branch |               | 1           |
| 0x14003377d#221 | conditional_branch |               | 1           |
| 0x14003378e#234 | conditional_branch |               | 1           |
| 0x14003379b#681 | conditional_branch |               | 1           |
| 0x1400337a4#695 | conditional_branch |               | 1           |
| 0x1400337aa#698 | direct_call        | 0             |             |
| 0x1400337b2#708 | conditional_branch |               | 1           |
| 0x1400337c0#722 | memory_write       | 1             | 2           |
| 0x1400337c9#732 | direct_call        | 0             |             |
| 0x1400337d1#246 | memory_read        | 1             |             |
| 0x1400337da#259 | memory_write       | 1             | 2           |
| 0x1400337eb#280 | memory_write       | 1             | 2           |
| 0x1400337ef#282 | memory_read        | 1             |             |
| 0x1400337f3#284 | memory_read        | 1             |             |
| 0x1400337f9#297 | conditional_branch |               | 1           |
| 0x1400337fe#308 | conditional_branch |               | 1           |
| 0x140033800#309 | memory_read        | 1             |             |
| 0x140033807#314 | memory_write       | 1             | 2           |
| 0x140033812#326 | memory_write       | 1             | 2           |
| 0x140033820#592 | conditional_branch |               | 1           |
| 0x140033822#593 | memory_read        | 1             |             |
| 0x140033829#598 | memory_write       | 1             | 2           |
| 0x140033834#610 | memory_write       | 1             | 2           |
| 0x14003383d#624 | memory_read        | 1             |             |
| 0x140033849#638 | conditional_branch |               | 1           |
| 0x140033850#641 | memory_read        | 1             |             |
| 0x140033857#646 | memory_write       | 1             | 2           |
| 0x140033862#658 | memory_write       | 1             | 2           |
| 0x14003386b#340 | memory_read        | 1             |             |
| 0x140033871#351 | conditional_branch |               | 1           |
| 0x140033873#353 | memory_read        | 1             |             |
| 0x14003387a#365 | conditional_branch |               | 1           |
| 0x140033880#366 | memory_read        | 1             |             |
| 0x14003388b#382 | conditional_branch |               | 1           |
| 0x14003388d#386 | direct_call        | 0             |             |
| 0x14003389c#408 | memory_read        | 1             |             |
| 0x14003389f#411 | memory_read        | 1             |             |
| 0x1400338b9#474 | conditional_branch |               | 1           |
| 0x1400338bb#476 | memory_read        | 1             |             |
| 0x1400338ca#508 | conditional_branch |               | 1           |
| 0x1400338d7#580 | indirect_call      | 0             |             |
| 0x1400338df#521 | memory_write       | 1             | 2           |
| 0x1400338df#522 | direct_call        | 0             |             |
| 0x1400338e8#527 | memory_write       | 1             | 2           |
| 0x1400338f8#537 | memory_write       | 1             | 2           |
| 0x14003390a#549 | memory_write       | 1             | 2           |
| 0x140033918#736 | direct_call        | 0             |             |
| 0x14003391e#726 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /longlong *   |
| 1       | param_2 | /undefined8 * |
| 2       | param_3 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x14003370a#21   | 1           |
| 0       | 0x140033710#1519 | 0           |
| 0       | 0x140033734#1520 | 0           |
| 2       | 0x1400337d1#246  | 1           |
| 1       | 0x1400337d7#1558 | 0           |
| 2       | 0x1400337da#259  | 1           |
| 0       | 0x1400337ef#1522 | 0           |
| 0       | 0x1400337f3#284  | 1           |
| 1       | 0x1400337f6#291  | 0           |
| 1       | 0x14003381d#587  | 1           |
| 0       | 0x14003383d#1527 | 0           |
| 1       | 0x140033846#633  | 0           |
| 1       | 0x140033849#1540 | 0           |
| 1       | 0x140033849#1540 | 1           |
| 1       | 0x140033850#641  | 1           |
| 1       | 0x140033857#646  | 1           |
| 1       | 0x14003385e#1529 | 0           |
| 0       | 0x14003386b#340  | 1           |
| 0       | 0x140033873#1530 | 0           |
| 0       | 0x14003389c#408  | 1           |
| 0       | 0x14003389f#1532 | 0           |
| 0       | 0x1400338e8#527  | 1           |
| 0       | 0x1400338f8#1535 | 0           |
| 0       | 0x14003390a#1537 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x140033918 to 0x14000c010 FUN_14000c010 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14003391e to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x140033918 to 0x14000c010 FUN_14000c010 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14003391e to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

