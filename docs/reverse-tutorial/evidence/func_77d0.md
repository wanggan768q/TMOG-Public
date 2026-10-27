## evidence_id

ev_105153f51f9b9846949c28e86da6e5084a87fb410561213d904a1316334ffcea

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
| procedure | 0x1403077d0 |

## raw_result.value.procedure.address

0x1403077d0

## raw_result.value.procedure.name

FUN_1403077d0

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
| 0x1403077d0 | 0x140307933 |
| 0x140307935 | 0x140307939 |

## raw_result.value.procedure.body.total_bytes

361

## raw_result.value.procedure.body.span_bytes

362

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1403077d0()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_38 @ Stack[-0x38]:8   | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8   | ghidra-function-database |
| undefined8 local_48 @ Stack[-0x48]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## raw_result.value.pseudocode


undefined8 * FUN_1403077d0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [56];
  
  puVar9 = auStack_68;
  puVar8 = auStack_68;
  plVar7 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = (longlong *)param_2[1];
  param_2 = (longlong *)*param_2;
  uVar5 = ((longlong)plVar2 - (longlong)param_2) / 0x18;
  if (uVar5 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_14000bff0();
    }
    uVar1 = uVar5 * 0x18;
    if (uVar1 != 0) {
      if (uVar1 < 0x1000) {
        plVar7 = (longlong *)FUN_1403272a0(uVar1);
        puVar9 = auStack_68;
      }
      else {
        if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140005500();
        }
        lVar6 = FUN_1403272a0();
        if (lVar6 == 0) {
          pcVar4 = (code *)swi(0x29);
          lVar6 = (*pcVar4)(5);
          puVar8 = auStack_60;
        }
        plVar7 = (longlong *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        plVar7[-1] = lVar6;
        puVar9 = puVar8;
      }
    }
    *param_1 = plVar7;
    param_1[1] = plVar7;
    param_1[2] = plVar7 + uVar5 * 3;
    *(undefined8 **)(puVar9 + 0x70) = param_1;
    *(longlong **)(puVar9 + 0x20) = plVar7;
    *(longlong **)(puVar9 + 0x28) = plVar7;
    *(undefined8 **)(puVar9 + 0x30) = param_1;
    for (; param_2 != plVar2; param_2 = param_2 + 3) {
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = 0;
      if (param_2[1] != *param_2) {
        *(undefined8 *)(puVar9 + -8) = 0x1403078dc;
        FUN_14000cd40(plVar7);
        lVar6 = *plVar7;
        lVar3 = *param_2;
        lVar10 = param_2[1] - lVar3;
        *(undefined8 *)(puVar9 + -8) = 0x1403078f4;
        FUN_14035f420(lVar6,lVar3,lVar10);
        plVar7[1] = lVar10 + lVar6;
      }
      plVar7 = plVar7 + 3;
      *(longlong **)(puVar9 + 0x28) = plVar7;
    }
    param_1[1] = plVar7;
  }
  return param_1;
}



## raw_result.value.assembly

0x1403077d0: MOV qword ptr [RSP + 0x10], RBX,0x1403077d5: MOV qword ptr [RSP + 0x18], RBP,0x1403077da: PUSH RSI,0x1403077db: PUSH RDI,0x1403077dc: PUSH R12,0x1403077de: PUSH R14,0x1403077e0: PUSH R15,0x1403077e2: SUB RSP, 0x40,0x1403077e6: MOV R15, RCX,0x1403077e9: XOR R12D, R12D,0x1403077ec: MOV qword ptr [RCX], R12,0x1403077ef: MOV qword ptr [RCX + 0x8], R12,0x1403077f3: MOV qword ptr [RCX + 0x10], R12,0x1403077f7: MOV RBP, qword ptr [RDX + 0x8],0x1403077fb: MOV R14, qword ptr [RDX],0x1403077fe: MOV RDX, RBP,0x140307801: SUB RDX, R14,0x140307804: MOV RAX, 0x2aaaaaaaaaaaaaab,0x14030780e: IMUL RDX,0x140307811: SAR RDX, 0x2,0x140307815: MOV RAX, RDX,0x140307818: SHR RAX, 0x3f,0x14030781c: ADD RDX, RAX,0x14030781f: JZ 0x140307912,0x140307825: MOV RAX, 0xaaaaaaaaaaaaaaa,0x14030782f: CMP RDX, RAX,0x140307832: JA 0x140307935,0x140307838: LEA RAX, [RDX + RDX*0x2],0x14030783c: LEA RDI, [RAX*0x8],0x140307844: TEST RDI, RDI,0x140307847: JNZ 0x14030784e,0x140307849: MOV EBX, R12D,0x14030784c: JMP 0x14030788e,0x14030784e: CMP RDI, 0x1000,0x140307855: JC 0x140307883,0x140307857: LEA RCX, [RDI + 0x27],0x14030785b: CMP RCX, RDI,0x14030785e: JBE 0x14030792f,0x140307864: CALL 0x1403272a0,0x140307869: TEST RAX, RAX,0x14030786c: JNZ 0x140307875,0x14030786e: MOV ECX, 0x5,0x140307873: INT 0x29,0x140307875: LEA RBX, [RAX + 0x27],0x140307879: AND RBX, -0x20,0x14030787d: MOV qword ptr [RBX + -0x8], RAX,0x140307881: JMP 0x14030788e,0x140307883: MOV RCX, RDI,0x140307886: CALL 0x1403272a0,0x14030788b: MOV RBX, RAX,0x14030788e: MOV qword ptr [R15], RBX,0x140307891: MOV qword ptr [R15 + 0x8], RBX,0x140307895: LEA RAX, [RDI + RBX*0x1],0x140307899: MOV qword ptr [R15 + 0x10], RAX,0x14030789d: MOV qword ptr [RSP + 0x70], R15,0x1403078a2: MOV qword ptr [RSP + 0x20], RBX,0x1403078a7: MOV qword ptr [RSP + 0x28], RBX,0x1403078ac: MOV qword ptr [RSP + 0x30], R15,0x1403078b1: CMP R14, RBP,0x1403078b4: JZ 0x14030790e,0x1403078b6: NOP dword ptr [RAX + RAX*0x1],0x1403078c0: MOV qword ptr [RBX], R12,0x1403078c3: MOV qword ptr [RBX + 0x8], R12,0x1403078c7: MOV qword ptr [RBX + 0x10], R12,0x1403078cb: MOV RDX, qword ptr [R14 + 0x8],0x1403078cf: SUB RDX, qword ptr [R14],0x1403078d2: JZ 0x1403078fc,0x1403078d4: MOV RCX, RBX,0x1403078d7: CALL 0x14000cd40,0x1403078dc: MOV RSI, qword ptr [RBX],0x1403078df: MOV RDX, qword ptr [R14],0x1403078e2: MOV RDI, qword ptr [R14 + 0x8],0x1403078e6: SUB RDI, RDX,0x1403078e9: MOV R8, RDI,0x1403078ec: MOV RCX, RSI,0x1403078ef: CALL 0x14035f420,0x1403078f4: LEA RAX, [RDI + RSI*0x1],0x1403078f8: MOV qword ptr [RBX + 0x8], RAX,0x1403078fc: ADD RBX, 0x18,0x140307900: MOV qword ptr [RSP + 0x28], RBX,0x140307905: ADD R14, 0x18,0x140307909: CMP R14, RBP,0x14030790c: JNZ 0x1403078c0,0x14030790e: MOV qword ptr [R15 + 0x8], RBX,0x140307912: MOV RAX, R15,0x140307915: MOV RBX, qword ptr [RSP + 0x78],0x14030791a: MOV RBP, qword ptr [RSP + 0x80],0x140307922: ADD RSP, 0x40,0x140307926: POP R15,0x140307928: POP R14,0x14030792a: POP R12,0x14030792c: POP RDI,0x14030792d: POP RSI,0x14030792e: RET,0x14030792f: CALL 0x140005500,0x140307935: CALL 0x14000bff0

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140309ac0 | FUN_140309ac0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140005500 | FUN_140005500 | [object Object] | [object Object] |
| 0x14000bff0 | FUN_14000bff0 | [object Object] | [object Object] |
| 0x14000cd40 | FUN_14000cd40 | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0 | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420 | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140309b34    | 0x1403077d0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6d34    | 0x1403077d0    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1403077d0    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1403077d5    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030781f    | 0x140307912              | [object Object]  | [object Object]  | [object Object] |
| 0x140307832    | 0x140307935              | [object Object]  | [object Object]  | [object Object] |
| 0x140307847    | 0x14030784e              | [object Object]  | [object Object]  | [object Object] |
| 0x14030784c    | 0x14030788e              | [object Object]  | [object Object]  | [object Object] |
| 0x140307855    | 0x140307883              | [object Object]  | [object Object]  | [object Object] |
| 0x14030785e    | 0x14030792f              | [object Object]  | [object Object]  | [object Object] |
| 0x140307864    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030786c    | 0x140307875              | [object Object]  | [object Object]  | [object Object] |
| 0x140307881    | 0x14030788e              | [object Object]  | [object Object]  | [object Object] |
| 0x140307886    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030789d    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1403078a2    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1403078a7    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1403078ac    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1403078b4    | 0x14030790e              | [object Object]  | [object Object]  | [object Object] |
| 0x1403078d2    | 0x1403078fc              | [object Object]  | [object Object]  | [object Object] |
| 0x1403078d7    | 0x14000cd40              | [object Object]  | [object Object]  | [object Object] |
| 0x1403078ef    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x140307900    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x14030790c    | 0x1403078c0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307915    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x14030791a    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030792f    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |
| 0x140307935    | 0x14000bff0              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x140005500 | FUN_140005500 | 0x14030792f    |
| 0x14000bff0 | FUN_14000bff0 | 0x140307935    |
| 0x14000cd40 | FUN_14000cd40 | 0x1403078d7    |
| 0x14030784e | LAB_14030784e | 0x140307847    |
| 0x140307875 | LAB_140307875 | 0x14030786c    |
| 0x140307883 | LAB_140307883 | 0x140307855    |
| 0x14030788e | LAB_14030788e | 0x14030784c    |
| 0x14030788e | LAB_14030788e | 0x140307881    |
| 0x1403078c0 | LAB_1403078c0 | 0x14030790c    |
| 0x1403078fc | LAB_1403078fc | 0x1403078d2    |
| 0x14030790e | LAB_14030790e | 0x1403078b4    |
| 0x140307912 | LAB_140307912 | 0x14030781f    |
| 0x14030792f | LAB_14030792f | 0x14030785e    |
| 0x140307935 | LAB_140307935 | 0x140307832    |
| 0x1403272a0 | FUN_1403272a0 | 0x140307864    |
| 0x1403272a0 | FUN_1403272a0 | 0x140307886    |
| 0x14035f420 | FUN_14035f420 | 0x1403078ef    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1403077d0 | 0x140307825 | 0x140307825,0x140307912 |
| 0x140307825 | 0x140307838 | 0x140307838,0x140307935 |
| 0x140307838 | 0x140307849 | 0x140307849,0x14030784e |
| 0x140307849 | 0x14030784e | 0x14030788e             |
| 0x14030784e | 0x140307857 | 0x140307857,0x140307883 |
| 0x140307857 | 0x140307864 | 0x140307864,0x14030792f |
| 0x140307864 | 0x14030786e | 0x14030786e,0x140307875 |
| 0x14030786e | 0x140307875 | 0x140307875             |
| 0x140307875 | 0x140307883 | 0x14030788e             |
| 0x140307883 | 0x14030788e | 0x14030788e             |
| 0x14030788e | 0x1403078b6 | 0x1403078b6,0x14030790e |
| 0x1403078b6 | 0x1403078c0 | 0x1403078c0             |
| 0x1403078c0 | 0x1403078d4 | 0x1403078d4,0x1403078fc |
| 0x1403078d4 | 0x1403078fc | 0x1403078fc             |
| 0x1403078fc | 0x14030790e | 0x1403078c0,0x14030790e |
| 0x14030790e | 0x140307912 | 0x140307912             |
| 0x140307912 | 0x14030792f |                         |
| 0x14030792f | 0x140307934 |                         |
| 0x140307935 | 0x14030793a |                         |

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
| parameter | 1       | param_2 | longlong *   | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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
| 0x1403077e2#884 | 0x1403077e2 | 884      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403077e2#885 | 0x1403077e2 | 885      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403077e2#886 | 0x1403077e2 | 886      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403077e9#611 | 0x1403077e9 | 611      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403077ec#42  | 0x1403077ec | 42       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403077ef#45  | 0x1403077ef | 45       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403077ef#887 | 0x1403077ef | 887      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403077f3#48  | 0x1403077f3 | 48       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403077f3#888 | 0x1403077f3 | 888      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403077f7#50  | 0x1403077f7 | 50       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403077f7#889 | 0x1403077f7 | 889      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403077f7#909 | 0x1403077f7 | 909      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403077fb#52  | 0x1403077fb | 52       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403077fb#910 | 0x1403077fb | 910      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307801#57  | 0x140307801 | 57       | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307801#911 | 0x140307801 | 911      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307801#912 | 0x140307801 | 912      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307811#701 | 0x140307811 | 701      | INT_SDIV      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030781c#159 | 0x14030781c | 159      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030781f#164 | 0x14030781f | 164      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140307832#176 | 0x140307832 | 176      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307832#178 | 0x140307832 | 178      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030783c#182 | 0x14030783c | 182      | INT_MULT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307844#188 | 0x140307844 | 188      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307847#194 | 0x140307847 | 194      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030784e#365 | 0x14030784e | 365      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307855#374 | 0x140307855 | 374      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140307857#375 | 0x140307857 | 375      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030785e#387 | 0x14030785e | 387      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030785e#388 | 0x14030785e | 388      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140307864#391 | 0x140307864 | 391      | CALL          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307869#396 | 0x140307869 | 396      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030786c#402 | 0x14030786c | 402      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140307873#404 | 0x140307873 | 404      | CALLOTHER     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307873#405 | 0x140307873 | 405      | CALLIND       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307873#890 | 0x140307873 | 890      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307873#914 | 0x140307873 | 914      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307875#406 | 0x140307875 | 406      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307875#537 | 0x140307875 | 537      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307875#579 | 0x140307875 | 579      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307879#410 | 0x140307879 | 410      | INT_AND       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307879#915 | 0x140307879 | 915      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030787d#419 | 0x14030787d | 419      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030787d#891 | 0x14030787d | 891      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307881#420 | 0x140307881 | 420      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x140307881#907 | 0x140307881 | 907      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307886#429 | 0x140307886 | 429      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307886#913 | 0x140307886 | 913      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030788b#908 | 0x14030788b | 908      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030788e#199 | 0x14030788e | 199      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030788e#574 | 0x14030788e | 574      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030788e#580 | 0x14030788e | 580      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307891#202 | 0x140307891 | 202      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140307891#892 | 0x140307891 | 892      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307895#893 | 0x140307895 | 893      | INT_MULT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307895#894 | 0x140307895 | 894      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307899#208 | 0x140307899 | 208      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140307899#895 | 0x140307899 | 895      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030789d#209 | 0x14030789d | 209      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030789d#211 | 0x14030789d | 211      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030789d#916 | 0x14030789d | 916      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078a2#212 | 0x1403078a2 | 212      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078a2#214 | 0x1403078a2 | 214      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078a2#917 | 0x1403078a2 | 917      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078a7#215 | 0x1403078a7 | 215      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078a7#217 | 0x1403078a7 | 217      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078a7#918 | 0x1403078a7 | 918      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078ac#218 | 0x1403078ac | 218      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078ac#220 | 0x1403078ac | 220      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078ac#919 | 0x1403078ac | 919      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078b1#226 | 0x1403078b1 | 226      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078b4#231 | 0x1403078b4 | 231      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1403078b4#904 | 0x1403078b4 | 904      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078b4#906 | 0x1403078b4 | 906      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078c0#235 | 0x1403078c0 | 235      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078c3#238 | 0x1403078c3 | 238      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078c3#896 | 0x1403078c3 | 896      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078c7#241 | 0x1403078c7 | 241      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078c7#897 | 0x1403078c7 | 897      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078cb#243 | 0x1403078cb | 243      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078cb#898 | 0x1403078cb | 898      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078cf#249 | 0x1403078cf | 249      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078cf#252 | 0x1403078cf | 252      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078d2#257 | 0x1403078d2 | 257      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1403078d7#259 | 0x1403078d7 | 259      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078d7#260 | 0x1403078d7 | 260      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078d7#261 | 0x1403078d7 | 261      | CALL          | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1403078d7#920 | 0x1403078d7 | 920      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078dc#262 | 0x1403078dc | 262      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078df#264 | 0x1403078df | 264      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078e2#267 | 0x1403078e2 | 267      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078e2#899 | 0x1403078e2 | 899      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078e6#271 | 0x1403078e6 | 271      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078ef#280 | 0x1403078ef | 280      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078ef#281 | 0x1403078ef | 281      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078ef#282 | 0x1403078ef | 282      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1403078ef#921 | 0x1403078ef | 921      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078f4#284 | 0x1403078f4 | 284      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078f8#288 | 0x1403078f8 | 288      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078f8#900 | 0x1403078f8 | 900      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078fc#901 | 0x1403078fc | 901      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307900#298 | 0x140307900 | 298      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307900#300 | 0x140307900 | 300      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140307900#922 | 0x140307900 | 922      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307905#902 | 0x140307905 | 902      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030790e#324 | 0x14030790e | 324      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030790e#903 | 0x14030790e | 903      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307912#325 | 0x140307912 | 325      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030792e#363 | 0x14030792e | 363      | RETURN        | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030792f#423 | 0x14030792f | 423      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x14030792f#425 | 0x14030792f | 425      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x140307935#433 | 0x140307935 | 433      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x140307935#435 | 0x140307935 | 435      | RETURN        | true    | member           | [object Object]                                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1403077ef#887 | 0x1403077ef#45  | 1           |
| 0x1403077f3#888 | 0x1403077f3#48  | 1           |
| 0x1403077f7#889 | 0x1403077f7#50  | 1           |
| 0x1403077f7#50  | 0x1403077f7#909 | 0           |
| 0x1403077fb#52  | 0x1403077fb#910 | 0           |
| 0x140307801#911 | 0x140307801#57  | 0           |
| 0x140307801#912 | 0x140307801#57  | 1           |
| 0x1403077f7#909 | 0x140307801#911 | 0           |
| 0x1403077fb#910 | 0x140307801#912 | 0           |
| 0x140307801#57  | 0x140307811#701 | 0           |
| 0x140307811#701 | 0x14030781c#159 | 0           |
| 0x14030781c#159 | 0x14030781f#164 | 1           |
| 0x140307811#701 | 0x140307832#176 | 1           |
| 0x140307832#176 | 0x140307832#178 | 1           |
| 0x140307811#701 | 0x14030783c#182 | 0           |
| 0x14030783c#182 | 0x140307844#188 | 0           |
| 0x140307844#188 | 0x140307847#194 | 1           |
| 0x14030783c#182 | 0x14030784e#365 | 0           |
| 0x14030784e#365 | 0x140307855#374 | 1           |
| 0x14030783c#182 | 0x140307857#375 | 0           |
| 0x140307857#375 | 0x14030785e#387 | 0           |
| 0x14030783c#182 | 0x14030785e#387 | 1           |
| 0x14030785e#387 | 0x14030785e#388 | 1           |
| 0x140307864#391 | 0x140307869#396 | 0           |
| 0x140307869#396 | 0x14030786c#402 | 1           |
| 0x140307873#914 | 0x140307873#405 | 0           |
| 0x140307873#404 | 0x140307873#914 | 0           |
| 0x140307875#537 | 0x140307875#406 | 0           |
| 0x140307864#391 | 0x140307875#537 | 0           |
| 0x140307873#405 | 0x140307875#537 | 1           |
| 0x1403077e2#885 | 0x140307875#579 | 0           |
| 0x140307873#890 | 0x140307875#579 | 1           |
| 0x140307875#406 | 0x140307879#410 | 0           |
| 0x140307879#410 | 0x140307879#915 | 0           |
| 0x14030787d#891 | 0x14030787d#419 | 1           |
| 0x140307875#537 | 0x14030787d#419 | 2           |
| 0x140307879#915 | 0x14030787d#891 | 0           |
| 0x140307875#579 | 0x140307881#907 | 0           |
| 0x14030783c#182 | 0x140307886#429 | 1           |
| 0x140307886#429 | 0x140307886#913 | 0           |
| 0x1403077e2#886 | 0x14030788b#908 | 0           |
| 0x14030788e#574 | 0x14030788e#199 | 2           |
| 0x140307879#915 | 0x14030788e#574 | 0           |
| 0x140307886#913 | 0x14030788e#574 | 1           |
| 0x1403077e9#611 | 0x14030788e#574 | 2           |
| 0x140307881#907 | 0x14030788e#580 | 0           |
| 0x14030788b#908 | 0x14030788e#580 | 1           |
| 0x1403077e2#884 | 0x14030788e#580 | 2           |
| 0x140307891#892 | 0x140307891#202 | 1           |
| 0x14030788e#574 | 0x140307891#202 | 2           |
| 0x140307811#701 | 0x140307895#893 | 0           |
| 0x14030788e#574 | 0x140307895#894 | 0           |
| 0x140307895#893 | 0x140307895#894 | 1           |
| 0x140307899#895 | 0x140307899#208 | 1           |
| 0x140307895#894 | 0x140307899#208 | 2           |
| 0x14030788e#580 | 0x14030789d#209 | 0           |
| 0x14030789d#916 | 0x14030789d#211 | 1           |
| 0x14030789d#209 | 0x14030789d#916 | 0           |
| 0x14030788e#580 | 0x1403078a2#212 | 0           |
| 0x1403078a2#917 | 0x1403078a2#214 | 1           |
| 0x14030788e#574 | 0x1403078a2#214 | 2           |
| 0x1403078a2#212 | 0x1403078a2#917 | 0           |
| 0x14030788e#580 | 0x1403078a7#215 | 0           |
| 0x1403078a7#918 | 0x1403078a7#217 | 1           |
| 0x14030788e#574 | 0x1403078a7#217 | 2           |
| 0x1403078a7#215 | 0x1403078a7#918 | 0           |
| 0x14030788e#580 | 0x1403078ac#218 | 0           |
| 0x1403078ac#919 | 0x1403078ac#220 | 1           |
| 0x1403078ac#218 | 0x1403078ac#919 | 0           |
| 0x1403078b4#904 | 0x1403078b1#226 | 0           |
| 0x1403077f7#909 | 0x1403078b1#226 | 1           |
| 0x1403078b1#226 | 0x1403078b4#231 | 1           |
| 0x1403077fb#910 | 0x1403078b4#904 | 0           |
| 0x140307905#902 | 0x1403078b4#904 | 1           |
| 0x14030788e#574 | 0x1403078b4#906 | 0           |
| 0x1403078fc#901 | 0x1403078b4#906 | 1           |
| 0x1403078b4#906 | 0x1403078c0#235 | 1           |
| 0x1403078c3#896 | 0x1403078c3#238 | 1           |
| 0x1403078b4#906 | 0x1403078c3#896 | 0           |
| 0x1403078c7#897 | 0x1403078c7#241 | 1           |
| 0x1403078b4#906 | 0x1403078c7#897 | 0           |
| 0x1403078cb#898 | 0x1403078cb#243 | 1           |
| 0x1403078b4#904 | 0x1403078cb#898 | 0           |
| 0x1403078b4#904 | 0x1403078cf#249 | 1           |
| 0x1403078cb#243 | 0x1403078cf#252 | 0           |
| 0x1403078cf#249 | 0x1403078cf#252 | 1           |
| 0x1403078cf#252 | 0x1403078d2#257 | 1           |
| 0x14030788e#580 | 0x1403078d7#259 | 0           |
| 0x1403078d7#920 | 0x1403078d7#260 | 1           |
| 0x1403078b4#906 | 0x1403078d7#261 | 1           |
| 0x1403078d7#259 | 0x1403078d7#920 | 0           |
| 0x1403078b4#906 | 0x1403078dc#262 | 1           |
| 0x1403078b4#904 | 0x1403078df#264 | 1           |
| 0x1403078e2#899 | 0x1403078e2#267 | 1           |
| 0x1403078b4#904 | 0x1403078e2#899 | 0           |
| 0x1403078e2#267 | 0x1403078e6#271 | 0           |
| 0x1403078df#264 | 0x1403078e6#271 | 1           |
| 0x14030788e#580 | 0x1403078ef#280 | 0           |
| 0x1403078ef#921 | 0x1403078ef#281 | 1           |
| 0x1403078dc#262 | 0x1403078ef#282 | 1           |
| 0x1403078df#264 | 0x1403078ef#282 | 2           |
| 0x1403078e6#271 | 0x1403078ef#282 | 3           |
| 0x1403078ef#280 | 0x1403078ef#921 | 0           |
| 0x1403078e6#271 | 0x1403078f4#284 | 0           |
| 0x1403078dc#262 | 0x1403078f4#284 | 1           |
| 0x1403078f8#900 | 0x1403078f8#288 | 1           |
| 0x1403078f4#284 | 0x1403078f8#288 | 2           |
| 0x1403078b4#906 | 0x1403078f8#900 | 0           |
| 0x1403078b4#906 | 0x1403078fc#901 | 0           |
| 0x14030788e#580 | 0x140307900#298 | 0           |
| 0x140307900#922 | 0x140307900#300 | 1           |
| 0x1403078fc#901 | 0x140307900#300 | 2           |
| 0x140307900#298 | 0x140307900#922 | 0           |
| 0x1403078b4#904 | 0x140307905#902 | 0           |
| 0x14030790e#903 | 0x14030790e#324 | 1           |
| 0x1403078b4#906 | 0x14030790e#324 | 2           |
| 0x140307912#325 | 0x14030792e#363 | 1           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |
| 1       | param_2 | /longlong *   |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1403077ec#42  | 1           |
| 0       | 0x1403077ef#887 | 0           |
| 0       | 0x1403077f3#888 | 0           |
| 1       | 0x1403077f7#889 | 0           |
| 1       | 0x1403077fb#52  | 1           |
| 1       | 0x140307801#912 | 0           |
| 0       | 0x14030788e#199 | 1           |
| 0       | 0x140307891#892 | 0           |
| 0       | 0x140307899#895 | 0           |
| 0       | 0x14030789d#211 | 2           |
| 0       | 0x1403078ac#220 | 2           |
| 1       | 0x1403078b1#226 | 0           |
| 1       | 0x1403078b4#904 | 0           |
| 1       | 0x1403078b4#904 | 1           |
| 1       | 0x1403078cb#898 | 0           |
| 1       | 0x1403078cf#249 | 1           |
| 1       | 0x1403078df#264 | 1           |
| 1       | 0x1403078e2#899 | 0           |
| 1       | 0x140307905#902 | 0           |
| 0       | 0x14030790e#903 | 0           |
| 0       | 0x140307912#325 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1403077ec#42  | memory_write       | 1             | 2           |
| 0x1403077ef#45  | memory_write       | 1             | 2           |
| 0x1403077f3#48  | memory_write       | 1             | 2           |
| 0x1403077f7#50  | memory_read        | 1             |             |
| 0x1403077fb#52  | memory_read        | 1             |             |
| 0x14030781f#164 | conditional_branch |               | 1           |
| 0x140307832#178 | conditional_branch |               | 1           |
| 0x140307847#194 | conditional_branch |               | 1           |
| 0x140307855#374 | conditional_branch |               | 1           |
| 0x14030785e#388 | conditional_branch |               | 1           |
| 0x140307864#391 | direct_call        | 0             |             |
| 0x14030786c#402 | conditional_branch |               | 1           |
| 0x140307873#405 | indirect_call      | 0             |             |
| 0x14030787d#419 | memory_write       | 1             | 2           |
| 0x140307886#429 | direct_call        | 0             |             |
| 0x14030788e#199 | memory_write       | 1             | 2           |
| 0x140307891#202 | memory_write       | 1             | 2           |
| 0x140307899#208 | memory_write       | 1             | 2           |
| 0x14030789d#211 | memory_write       | 1             | 2           |
| 0x1403078a2#214 | memory_write       | 1             | 2           |
| 0x1403078a7#217 | memory_write       | 1             | 2           |
| 0x1403078ac#220 | memory_write       | 1             | 2           |
| 0x1403078b4#231 | conditional_branch |               | 1           |
| 0x1403078c0#235 | memory_write       | 1             | 2           |
| 0x1403078c3#238 | memory_write       | 1             | 2           |
| 0x1403078c7#241 | memory_write       | 1             | 2           |
| 0x1403078cb#243 | memory_read        | 1             |             |
| 0x1403078cf#249 | memory_read        | 1             |             |
| 0x1403078d2#257 | conditional_branch |               | 1           |
| 0x1403078d7#260 | memory_write       | 1             | 2           |
| 0x1403078d7#261 | direct_call        | 0             |             |
| 0x1403078dc#262 | memory_read        | 1             |             |
| 0x1403078df#264 | memory_read        | 1             |             |
| 0x1403078e2#267 | memory_read        | 1             |             |
| 0x1403078ef#281 | memory_write       | 1             | 2           |
| 0x1403078ef#282 | direct_call        | 0             |             |
| 0x1403078f8#288 | memory_write       | 1             | 2           |
| 0x140307900#300 | memory_write       | 1             | 2           |
| 0x14030790e#324 | memory_write       | 1             | 2           |
| 0x14030792f#423 | direct_call        | 0             |             |
| 0x140307935#433 | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x14030792f to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140307935 to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x14030792f to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140307935 to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x1403077d0

## normalized_result.procedure.name

FUN_1403077d0

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
| 0x1403077d0 | 0x140307933 |
| 0x140307935 | 0x140307939 |

## normalized_result.procedure.body.total_bytes

361

## normalized_result.procedure.body.span_bytes

362

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1403077d0()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined8 local_38 @ Stack[-0x38]:8   | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8   | ghidra-function-database |
| undefined8 local_48 @ Stack[-0x48]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## normalized_result.pseudocode


undefined8 * FUN_1403077d0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [56];
  
  puVar9 = auStack_68;
  puVar8 = auStack_68;
  plVar7 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = (longlong *)param_2[1];
  param_2 = (longlong *)*param_2;
  uVar5 = ((longlong)plVar2 - (longlong)param_2) / 0x18;
  if (uVar5 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_14000bff0();
    }
    uVar1 = uVar5 * 0x18;
    if (uVar1 != 0) {
      if (uVar1 < 0x1000) {
        plVar7 = (longlong *)FUN_1403272a0(uVar1);
        puVar9 = auStack_68;
      }
      else {
        if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140005500();
        }
        lVar6 = FUN_1403272a0();
        if (lVar6 == 0) {
          pcVar4 = (code *)swi(0x29);
          lVar6 = (*pcVar4)(5);
          puVar8 = auStack_60;
        }
        plVar7 = (longlong *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        plVar7[-1] = lVar6;
        puVar9 = puVar8;
      }
    }
    *param_1 = plVar7;
    param_1[1] = plVar7;
    param_1[2] = plVar7 + uVar5 * 3;
    *(undefined8 **)(puVar9 + 0x70) = param_1;
    *(longlong **)(puVar9 + 0x20) = plVar7;
    *(longlong **)(puVar9 + 0x28) = plVar7;
    *(undefined8 **)(puVar9 + 0x30) = param_1;
    for (; param_2 != plVar2; param_2 = param_2 + 3) {
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = 0;
      if (param_2[1] != *param_2) {
        *(undefined8 *)(puVar9 + -8) = 0x1403078dc;
        FUN_14000cd40(plVar7);
        lVar6 = *plVar7;
        lVar3 = *param_2;
        lVar10 = param_2[1] - lVar3;
        *(undefined8 *)(puVar9 + -8) = 0x1403078f4;
        FUN_14035f420(lVar6,lVar3,lVar10);
        plVar7[1] = lVar10 + lVar6;
      }
      plVar7 = plVar7 + 3;
      *(longlong **)(puVar9 + 0x28) = plVar7;
    }
    param_1[1] = plVar7;
  }
  return param_1;
}



## normalized_result.assembly

0x1403077d0: MOV qword ptr [RSP + 0x10], RBX,0x1403077d5: MOV qword ptr [RSP + 0x18], RBP,0x1403077da: PUSH RSI,0x1403077db: PUSH RDI,0x1403077dc: PUSH R12,0x1403077de: PUSH R14,0x1403077e0: PUSH R15,0x1403077e2: SUB RSP, 0x40,0x1403077e6: MOV R15, RCX,0x1403077e9: XOR R12D, R12D,0x1403077ec: MOV qword ptr [RCX], R12,0x1403077ef: MOV qword ptr [RCX + 0x8], R12,0x1403077f3: MOV qword ptr [RCX + 0x10], R12,0x1403077f7: MOV RBP, qword ptr [RDX + 0x8],0x1403077fb: MOV R14, qword ptr [RDX],0x1403077fe: MOV RDX, RBP,0x140307801: SUB RDX, R14,0x140307804: MOV RAX, 0x2aaaaaaaaaaaaaab,0x14030780e: IMUL RDX,0x140307811: SAR RDX, 0x2,0x140307815: MOV RAX, RDX,0x140307818: SHR RAX, 0x3f,0x14030781c: ADD RDX, RAX,0x14030781f: JZ 0x140307912,0x140307825: MOV RAX, 0xaaaaaaaaaaaaaaa,0x14030782f: CMP RDX, RAX,0x140307832: JA 0x140307935,0x140307838: LEA RAX, [RDX + RDX*0x2],0x14030783c: LEA RDI, [RAX*0x8],0x140307844: TEST RDI, RDI,0x140307847: JNZ 0x14030784e,0x140307849: MOV EBX, R12D,0x14030784c: JMP 0x14030788e,0x14030784e: CMP RDI, 0x1000,0x140307855: JC 0x140307883,0x140307857: LEA RCX, [RDI + 0x27],0x14030785b: CMP RCX, RDI,0x14030785e: JBE 0x14030792f,0x140307864: CALL 0x1403272a0,0x140307869: TEST RAX, RAX,0x14030786c: JNZ 0x140307875,0x14030786e: MOV ECX, 0x5,0x140307873: INT 0x29,0x140307875: LEA RBX, [RAX + 0x27],0x140307879: AND RBX, -0x20,0x14030787d: MOV qword ptr [RBX + -0x8], RAX,0x140307881: JMP 0x14030788e,0x140307883: MOV RCX, RDI,0x140307886: CALL 0x1403272a0,0x14030788b: MOV RBX, RAX,0x14030788e: MOV qword ptr [R15], RBX,0x140307891: MOV qword ptr [R15 + 0x8], RBX,0x140307895: LEA RAX, [RDI + RBX*0x1],0x140307899: MOV qword ptr [R15 + 0x10], RAX,0x14030789d: MOV qword ptr [RSP + 0x70], R15,0x1403078a2: MOV qword ptr [RSP + 0x20], RBX,0x1403078a7: MOV qword ptr [RSP + 0x28], RBX,0x1403078ac: MOV qword ptr [RSP + 0x30], R15,0x1403078b1: CMP R14, RBP,0x1403078b4: JZ 0x14030790e,0x1403078b6: NOP dword ptr [RAX + RAX*0x1],0x1403078c0: MOV qword ptr [RBX], R12,0x1403078c3: MOV qword ptr [RBX + 0x8], R12,0x1403078c7: MOV qword ptr [RBX + 0x10], R12,0x1403078cb: MOV RDX, qword ptr [R14 + 0x8],0x1403078cf: SUB RDX, qword ptr [R14],0x1403078d2: JZ 0x1403078fc,0x1403078d4: MOV RCX, RBX,0x1403078d7: CALL 0x14000cd40,0x1403078dc: MOV RSI, qword ptr [RBX],0x1403078df: MOV RDX, qword ptr [R14],0x1403078e2: MOV RDI, qword ptr [R14 + 0x8],0x1403078e6: SUB RDI, RDX,0x1403078e9: MOV R8, RDI,0x1403078ec: MOV RCX, RSI,0x1403078ef: CALL 0x14035f420,0x1403078f4: LEA RAX, [RDI + RSI*0x1],0x1403078f8: MOV qword ptr [RBX + 0x8], RAX,0x1403078fc: ADD RBX, 0x18,0x140307900: MOV qword ptr [RSP + 0x28], RBX,0x140307905: ADD R14, 0x18,0x140307909: CMP R14, RBP,0x14030790c: JNZ 0x1403078c0,0x14030790e: MOV qword ptr [R15 + 0x8], RBX,0x140307912: MOV RAX, R15,0x140307915: MOV RBX, qword ptr [RSP + 0x78],0x14030791a: MOV RBP, qword ptr [RSP + 0x80],0x140307922: ADD RSP, 0x40,0x140307926: POP R15,0x140307928: POP R14,0x14030792a: POP R12,0x14030792c: POP RDI,0x14030792d: POP RSI,0x14030792e: RET,0x14030792f: CALL 0x140005500,0x140307935: CALL 0x14000bff0

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140309ac0 | FUN_140309ac0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x140005500 | FUN_140005500 | [object Object] | [object Object] |
| 0x14000bff0 | FUN_14000bff0 | [object Object] | [object Object] |
| 0x14000cd40 | FUN_14000cd40 | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0 | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420 | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140309b34    | 0x1403077d0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6d34    | 0x1403077d0    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1403077d0    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1403077d5    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030781f    | 0x140307912              | [object Object]  | [object Object]  | [object Object] |
| 0x140307832    | 0x140307935              | [object Object]  | [object Object]  | [object Object] |
| 0x140307847    | 0x14030784e              | [object Object]  | [object Object]  | [object Object] |
| 0x14030784c    | 0x14030788e              | [object Object]  | [object Object]  | [object Object] |
| 0x140307855    | 0x140307883              | [object Object]  | [object Object]  | [object Object] |
| 0x14030785e    | 0x14030792f              | [object Object]  | [object Object]  | [object Object] |
| 0x140307864    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030786c    | 0x140307875              | [object Object]  | [object Object]  | [object Object] |
| 0x140307881    | 0x14030788e              | [object Object]  | [object Object]  | [object Object] |
| 0x140307886    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030789d    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1403078a2    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x1403078a7    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1403078ac    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1403078b4    | 0x14030790e              | [object Object]  | [object Object]  | [object Object] |
| 0x1403078d2    | 0x1403078fc              | [object Object]  | [object Object]  | [object Object] |
| 0x1403078d7    | 0x14000cd40              | [object Object]  | [object Object]  | [object Object] |
| 0x1403078ef    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x140307900    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x14030790c    | 0x1403078c0              | [object Object]  | [object Object]  | [object Object] |
| 0x140307915    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x14030791a    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030792f    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |
| 0x140307935    | 0x14000bff0              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x140005500 | FUN_140005500 | 0x14030792f    |
| 0x14000bff0 | FUN_14000bff0 | 0x140307935    |
| 0x14000cd40 | FUN_14000cd40 | 0x1403078d7    |
| 0x14030784e | LAB_14030784e | 0x140307847    |
| 0x140307875 | LAB_140307875 | 0x14030786c    |
| 0x140307883 | LAB_140307883 | 0x140307855    |
| 0x14030788e | LAB_14030788e | 0x14030784c    |
| 0x14030788e | LAB_14030788e | 0x140307881    |
| 0x1403078c0 | LAB_1403078c0 | 0x14030790c    |
| 0x1403078fc | LAB_1403078fc | 0x1403078d2    |
| 0x14030790e | LAB_14030790e | 0x1403078b4    |
| 0x140307912 | LAB_140307912 | 0x14030781f    |
| 0x14030792f | LAB_14030792f | 0x14030785e    |
| 0x140307935 | LAB_140307935 | 0x140307832    |
| 0x1403272a0 | FUN_1403272a0 | 0x140307864    |
| 0x1403272a0 | FUN_1403272a0 | 0x140307886    |
| 0x14035f420 | FUN_14035f420 | 0x1403078ef    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1403077d0 | 0x140307825 | 0x140307825,0x140307912 |
| 0x140307825 | 0x140307838 | 0x140307838,0x140307935 |
| 0x140307838 | 0x140307849 | 0x140307849,0x14030784e |
| 0x140307849 | 0x14030784e | 0x14030788e             |
| 0x14030784e | 0x140307857 | 0x140307857,0x140307883 |
| 0x140307857 | 0x140307864 | 0x140307864,0x14030792f |
| 0x140307864 | 0x14030786e | 0x14030786e,0x140307875 |
| 0x14030786e | 0x140307875 | 0x140307875             |
| 0x140307875 | 0x140307883 | 0x14030788e             |
| 0x140307883 | 0x14030788e | 0x14030788e             |
| 0x14030788e | 0x1403078b6 | 0x1403078b6,0x14030790e |
| 0x1403078b6 | 0x1403078c0 | 0x1403078c0             |
| 0x1403078c0 | 0x1403078d4 | 0x1403078d4,0x1403078fc |
| 0x1403078d4 | 0x1403078fc | 0x1403078fc             |
| 0x1403078fc | 0x14030790e | 0x1403078c0,0x14030790e |
| 0x14030790e | 0x140307912 | 0x140307912             |
| 0x140307912 | 0x14030792f |                         |
| 0x14030792f | 0x140307934 |                         |
| 0x140307935 | 0x14030793a |                         |

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
| 1       | param_2 | longlong *   | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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
| 0x1403077e2#884 | 0x1403077e2 | 884      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403077e2#885 | 0x1403077e2 | 885      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403077e2#886 | 0x1403077e2 | 886      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403077e9#611 | 0x1403077e9 | 611      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403077ec#42  | 0x1403077ec | 42       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403077ef#45  | 0x1403077ef | 45       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403077ef#887 | 0x1403077ef | 887      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403077f3#48  | 0x1403077f3 | 48       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403077f3#888 | 0x1403077f3 | 888      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403077f7#50  | 0x1403077f7 | 50       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403077f7#889 | 0x1403077f7 | 889      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403077f7#909 | 0x1403077f7 | 909      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403077fb#52  | 0x1403077fb | 52       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403077fb#910 | 0x1403077fb | 910      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307801#57  | 0x140307801 | 57       | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307801#911 | 0x140307801 | 911      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307801#912 | 0x140307801 | 912      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307811#701 | 0x140307811 | 701      | INT_SDIV      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030781c#159 | 0x14030781c | 159      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030781f#164 | 0x14030781f | 164      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140307832#176 | 0x140307832 | 176      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307832#178 | 0x140307832 | 178      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030783c#182 | 0x14030783c | 182      | INT_MULT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307844#188 | 0x140307844 | 188      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307847#194 | 0x140307847 | 194      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030784e#365 | 0x14030784e | 365      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307855#374 | 0x140307855 | 374      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140307857#375 | 0x140307857 | 375      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030785e#387 | 0x14030785e | 387      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030785e#388 | 0x14030785e | 388      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140307864#391 | 0x140307864 | 391      | CALL          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307869#396 | 0x140307869 | 396      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030786c#402 | 0x14030786c | 402      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140307873#404 | 0x140307873 | 404      | CALLOTHER     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307873#405 | 0x140307873 | 405      | CALLIND       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307873#890 | 0x140307873 | 890      | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307873#914 | 0x140307873 | 914      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307875#406 | 0x140307875 | 406      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307875#537 | 0x140307875 | 537      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307875#579 | 0x140307875 | 579      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307879#410 | 0x140307879 | 410      | INT_AND       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307879#915 | 0x140307879 | 915      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030787d#419 | 0x14030787d | 419      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030787d#891 | 0x14030787d | 891      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307881#420 | 0x140307881 | 420      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x140307881#907 | 0x140307881 | 907      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307886#429 | 0x140307886 | 429      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307886#913 | 0x140307886 | 913      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030788b#908 | 0x14030788b | 908      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030788e#199 | 0x14030788e | 199      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030788e#574 | 0x14030788e | 574      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030788e#580 | 0x14030788e | 580      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307891#202 | 0x140307891 | 202      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140307891#892 | 0x140307891 | 892      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307895#893 | 0x140307895 | 893      | INT_MULT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140307895#894 | 0x140307895 | 894      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307899#208 | 0x140307899 | 208      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140307899#895 | 0x140307899 | 895      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030789d#209 | 0x14030789d | 209      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030789d#211 | 0x14030789d | 211      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030789d#916 | 0x14030789d | 916      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078a2#212 | 0x1403078a2 | 212      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078a2#214 | 0x1403078a2 | 214      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078a2#917 | 0x1403078a2 | 917      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078a7#215 | 0x1403078a7 | 215      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078a7#217 | 0x1403078a7 | 217      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078a7#918 | 0x1403078a7 | 918      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078ac#218 | 0x1403078ac | 218      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078ac#220 | 0x1403078ac | 220      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078ac#919 | 0x1403078ac | 919      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078b1#226 | 0x1403078b1 | 226      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078b4#231 | 0x1403078b4 | 231      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1403078b4#904 | 0x1403078b4 | 904      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078b4#906 | 0x1403078b4 | 906      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078c0#235 | 0x1403078c0 | 235      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078c3#238 | 0x1403078c3 | 238      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078c3#896 | 0x1403078c3 | 896      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078c7#241 | 0x1403078c7 | 241      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078c7#897 | 0x1403078c7 | 897      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078cb#243 | 0x1403078cb | 243      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078cb#898 | 0x1403078cb | 898      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078cf#249 | 0x1403078cf | 249      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078cf#252 | 0x1403078cf | 252      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078d2#257 | 0x1403078d2 | 257      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1403078d7#259 | 0x1403078d7 | 259      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078d7#260 | 0x1403078d7 | 260      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078d7#261 | 0x1403078d7 | 261      | CALL          | true    | member           | [object Object],[object Object]                                 |                 |
| 0x1403078d7#920 | 0x1403078d7 | 920      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078dc#262 | 0x1403078dc | 262      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078df#264 | 0x1403078df | 264      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078e2#267 | 0x1403078e2 | 267      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078e2#899 | 0x1403078e2 | 899      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078e6#271 | 0x1403078e6 | 271      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078ef#280 | 0x1403078ef | 280      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078ef#281 | 0x1403078ef | 281      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078ef#282 | 0x1403078ef | 282      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x1403078ef#921 | 0x1403078ef | 921      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x1403078f4#284 | 0x1403078f4 | 284      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x1403078f8#288 | 0x1403078f8 | 288      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x1403078f8#900 | 0x1403078f8 | 900      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x1403078fc#901 | 0x1403078fc | 901      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307900#298 | 0x140307900 | 298      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307900#300 | 0x140307900 | 300      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x140307900#922 | 0x140307900 | 922      | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x140307905#902 | 0x140307905 | 902      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030790e#324 | 0x14030790e | 324      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030790e#903 | 0x14030790e | 903      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140307912#325 | 0x140307912 | 325      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030792e#363 | 0x14030792e | 363      | RETURN        | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030792f#423 | 0x14030792f | 423      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x14030792f#425 | 0x14030792f | 425      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x140307935#433 | 0x140307935 | 433      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x140307935#435 | 0x140307935 | 435      | RETURN        | true    | member           | [object Object]                                                 |                 |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1403077ef#887 | 0x1403077ef#45  | 1           |
| 0x1403077f3#888 | 0x1403077f3#48  | 1           |
| 0x1403077f7#889 | 0x1403077f7#50  | 1           |
| 0x1403077f7#50  | 0x1403077f7#909 | 0           |
| 0x1403077fb#52  | 0x1403077fb#910 | 0           |
| 0x140307801#911 | 0x140307801#57  | 0           |
| 0x140307801#912 | 0x140307801#57  | 1           |
| 0x1403077f7#909 | 0x140307801#911 | 0           |
| 0x1403077fb#910 | 0x140307801#912 | 0           |
| 0x140307801#57  | 0x140307811#701 | 0           |
| 0x140307811#701 | 0x14030781c#159 | 0           |
| 0x14030781c#159 | 0x14030781f#164 | 1           |
| 0x140307811#701 | 0x140307832#176 | 1           |
| 0x140307832#176 | 0x140307832#178 | 1           |
| 0x140307811#701 | 0x14030783c#182 | 0           |
| 0x14030783c#182 | 0x140307844#188 | 0           |
| 0x140307844#188 | 0x140307847#194 | 1           |
| 0x14030783c#182 | 0x14030784e#365 | 0           |
| 0x14030784e#365 | 0x140307855#374 | 1           |
| 0x14030783c#182 | 0x140307857#375 | 0           |
| 0x140307857#375 | 0x14030785e#387 | 0           |
| 0x14030783c#182 | 0x14030785e#387 | 1           |
| 0x14030785e#387 | 0x14030785e#388 | 1           |
| 0x140307864#391 | 0x140307869#396 | 0           |
| 0x140307869#396 | 0x14030786c#402 | 1           |
| 0x140307873#914 | 0x140307873#405 | 0           |
| 0x140307873#404 | 0x140307873#914 | 0           |
| 0x140307875#537 | 0x140307875#406 | 0           |
| 0x140307864#391 | 0x140307875#537 | 0           |
| 0x140307873#405 | 0x140307875#537 | 1           |
| 0x1403077e2#885 | 0x140307875#579 | 0           |
| 0x140307873#890 | 0x140307875#579 | 1           |
| 0x140307875#406 | 0x140307879#410 | 0           |
| 0x140307879#410 | 0x140307879#915 | 0           |
| 0x14030787d#891 | 0x14030787d#419 | 1           |
| 0x140307875#537 | 0x14030787d#419 | 2           |
| 0x140307879#915 | 0x14030787d#891 | 0           |
| 0x140307875#579 | 0x140307881#907 | 0           |
| 0x14030783c#182 | 0x140307886#429 | 1           |
| 0x140307886#429 | 0x140307886#913 | 0           |
| 0x1403077e2#886 | 0x14030788b#908 | 0           |
| 0x14030788e#574 | 0x14030788e#199 | 2           |
| 0x140307879#915 | 0x14030788e#574 | 0           |
| 0x140307886#913 | 0x14030788e#574 | 1           |
| 0x1403077e9#611 | 0x14030788e#574 | 2           |
| 0x140307881#907 | 0x14030788e#580 | 0           |
| 0x14030788b#908 | 0x14030788e#580 | 1           |
| 0x1403077e2#884 | 0x14030788e#580 | 2           |
| 0x140307891#892 | 0x140307891#202 | 1           |
| 0x14030788e#574 | 0x140307891#202 | 2           |
| 0x140307811#701 | 0x140307895#893 | 0           |
| 0x14030788e#574 | 0x140307895#894 | 0           |
| 0x140307895#893 | 0x140307895#894 | 1           |
| 0x140307899#895 | 0x140307899#208 | 1           |
| 0x140307895#894 | 0x140307899#208 | 2           |
| 0x14030788e#580 | 0x14030789d#209 | 0           |
| 0x14030789d#916 | 0x14030789d#211 | 1           |
| 0x14030789d#209 | 0x14030789d#916 | 0           |
| 0x14030788e#580 | 0x1403078a2#212 | 0           |
| 0x1403078a2#917 | 0x1403078a2#214 | 1           |
| 0x14030788e#574 | 0x1403078a2#214 | 2           |
| 0x1403078a2#212 | 0x1403078a2#917 | 0           |
| 0x14030788e#580 | 0x1403078a7#215 | 0           |
| 0x1403078a7#918 | 0x1403078a7#217 | 1           |
| 0x14030788e#574 | 0x1403078a7#217 | 2           |
| 0x1403078a7#215 | 0x1403078a7#918 | 0           |
| 0x14030788e#580 | 0x1403078ac#218 | 0           |
| 0x1403078ac#919 | 0x1403078ac#220 | 1           |
| 0x1403078ac#218 | 0x1403078ac#919 | 0           |
| 0x1403078b4#904 | 0x1403078b1#226 | 0           |
| 0x1403077f7#909 | 0x1403078b1#226 | 1           |
| 0x1403078b1#226 | 0x1403078b4#231 | 1           |
| 0x1403077fb#910 | 0x1403078b4#904 | 0           |
| 0x140307905#902 | 0x1403078b4#904 | 1           |
| 0x14030788e#574 | 0x1403078b4#906 | 0           |
| 0x1403078fc#901 | 0x1403078b4#906 | 1           |
| 0x1403078b4#906 | 0x1403078c0#235 | 1           |
| 0x1403078c3#896 | 0x1403078c3#238 | 1           |
| 0x1403078b4#906 | 0x1403078c3#896 | 0           |
| 0x1403078c7#897 | 0x1403078c7#241 | 1           |
| 0x1403078b4#906 | 0x1403078c7#897 | 0           |
| 0x1403078cb#898 | 0x1403078cb#243 | 1           |
| 0x1403078b4#904 | 0x1403078cb#898 | 0           |
| 0x1403078b4#904 | 0x1403078cf#249 | 1           |
| 0x1403078cb#243 | 0x1403078cf#252 | 0           |
| 0x1403078cf#249 | 0x1403078cf#252 | 1           |
| 0x1403078cf#252 | 0x1403078d2#257 | 1           |
| 0x14030788e#580 | 0x1403078d7#259 | 0           |
| 0x1403078d7#920 | 0x1403078d7#260 | 1           |
| 0x1403078b4#906 | 0x1403078d7#261 | 1           |
| 0x1403078d7#259 | 0x1403078d7#920 | 0           |
| 0x1403078b4#906 | 0x1403078dc#262 | 1           |
| 0x1403078b4#904 | 0x1403078df#264 | 1           |
| 0x1403078e2#899 | 0x1403078e2#267 | 1           |
| 0x1403078b4#904 | 0x1403078e2#899 | 0           |
| 0x1403078e2#267 | 0x1403078e6#271 | 0           |
| 0x1403078df#264 | 0x1403078e6#271 | 1           |
| 0x14030788e#580 | 0x1403078ef#280 | 0           |
| 0x1403078ef#921 | 0x1403078ef#281 | 1           |
| 0x1403078dc#262 | 0x1403078ef#282 | 1           |
| 0x1403078df#264 | 0x1403078ef#282 | 2           |
| 0x1403078e6#271 | 0x1403078ef#282 | 3           |
| 0x1403078ef#280 | 0x1403078ef#921 | 0           |
| 0x1403078e6#271 | 0x1403078f4#284 | 0           |
| 0x1403078dc#262 | 0x1403078f4#284 | 1           |
| 0x1403078f8#900 | 0x1403078f8#288 | 1           |
| 0x1403078f4#284 | 0x1403078f8#288 | 2           |
| 0x1403078b4#906 | 0x1403078f8#900 | 0           |
| 0x1403078b4#906 | 0x1403078fc#901 | 0           |
| 0x14030788e#580 | 0x140307900#298 | 0           |
| 0x140307900#922 | 0x140307900#300 | 1           |
| 0x1403078fc#901 | 0x140307900#300 | 2           |
| 0x140307900#298 | 0x140307900#922 | 0           |
| 0x1403078b4#904 | 0x140307905#902 | 0           |
| 0x14030790e#903 | 0x14030790e#324 | 1           |
| 0x1403078b4#906 | 0x14030790e#324 | 2           |
| 0x140307912#325 | 0x14030792e#363 | 1           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1403077ec#42  | memory_write       | 1             | 2           |
| 0x1403077ef#45  | memory_write       | 1             | 2           |
| 0x1403077f3#48  | memory_write       | 1             | 2           |
| 0x1403077f7#50  | memory_read        | 1             |             |
| 0x1403077fb#52  | memory_read        | 1             |             |
| 0x14030781f#164 | conditional_branch |               | 1           |
| 0x140307832#178 | conditional_branch |               | 1           |
| 0x140307847#194 | conditional_branch |               | 1           |
| 0x140307855#374 | conditional_branch |               | 1           |
| 0x14030785e#388 | conditional_branch |               | 1           |
| 0x140307864#391 | direct_call        | 0             |             |
| 0x14030786c#402 | conditional_branch |               | 1           |
| 0x140307873#405 | indirect_call      | 0             |             |
| 0x14030787d#419 | memory_write       | 1             | 2           |
| 0x140307886#429 | direct_call        | 0             |             |
| 0x14030788e#199 | memory_write       | 1             | 2           |
| 0x140307891#202 | memory_write       | 1             | 2           |
| 0x140307899#208 | memory_write       | 1             | 2           |
| 0x14030789d#211 | memory_write       | 1             | 2           |
| 0x1403078a2#214 | memory_write       | 1             | 2           |
| 0x1403078a7#217 | memory_write       | 1             | 2           |
| 0x1403078ac#220 | memory_write       | 1             | 2           |
| 0x1403078b4#231 | conditional_branch |               | 1           |
| 0x1403078c0#235 | memory_write       | 1             | 2           |
| 0x1403078c3#238 | memory_write       | 1             | 2           |
| 0x1403078c7#241 | memory_write       | 1             | 2           |
| 0x1403078cb#243 | memory_read        | 1             |             |
| 0x1403078cf#249 | memory_read        | 1             |             |
| 0x1403078d2#257 | conditional_branch |               | 1           |
| 0x1403078d7#260 | memory_write       | 1             | 2           |
| 0x1403078d7#261 | direct_call        | 0             |             |
| 0x1403078dc#262 | memory_read        | 1             |             |
| 0x1403078df#264 | memory_read        | 1             |             |
| 0x1403078e2#267 | memory_read        | 1             |             |
| 0x1403078ef#281 | memory_write       | 1             | 2           |
| 0x1403078ef#282 | direct_call        | 0             |             |
| 0x1403078f8#288 | memory_write       | 1             | 2           |
| 0x140307900#300 | memory_write       | 1             | 2           |
| 0x14030790e#324 | memory_write       | 1             | 2           |
| 0x14030792f#423 | direct_call        | 0             |             |
| 0x140307935#433 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |
| 1       | param_2 | /longlong *   |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1403077ec#42  | 1           |
| 0       | 0x1403077ef#887 | 0           |
| 0       | 0x1403077f3#888 | 0           |
| 1       | 0x1403077f7#889 | 0           |
| 1       | 0x1403077fb#52  | 1           |
| 1       | 0x140307801#912 | 0           |
| 0       | 0x14030788e#199 | 1           |
| 0       | 0x140307891#892 | 0           |
| 0       | 0x140307899#895 | 0           |
| 0       | 0x14030789d#211 | 2           |
| 0       | 0x1403078ac#220 | 2           |
| 1       | 0x1403078b1#226 | 0           |
| 1       | 0x1403078b4#904 | 0           |
| 1       | 0x1403078b4#904 | 1           |
| 1       | 0x1403078cb#898 | 0           |
| 1       | 0x1403078cf#249 | 1           |
| 1       | 0x1403078df#264 | 1           |
| 1       | 0x1403078e2#899 | 0           |
| 1       | 0x140307905#902 | 0           |
| 0       | 0x14030790e#903 | 0           |
| 0       | 0x140307912#325 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x14030792f to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140307935 to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x14030792f to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x140307935 to 0x14000bff0 FUN_14000bff0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

