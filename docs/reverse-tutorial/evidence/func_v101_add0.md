## evidence_id

ev_f50cd336d724884fe832bebec8fa871d368adc4ef50cb0dadfbfcd7166b10f6b

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
| procedure | 0x14030add0 |

## raw_result.value.procedure.address

0x14030add0

## raw_result.value.procedure.name

FUN_14030add0

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
| 0x14030add0 | 0x14030afda |
| 0x14030afdc | 0x14030afe0 |

## raw_result.value.procedure.body.total_bytes

528

## raw_result.value.procedure.body.span_bytes

529

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_14030add0()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined4 local_48 @ Stack[-0x48]:4   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## raw_result.value.pseudocode


ulonglong * FUN_14030add0(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined4 local_48;
  
  puVar8 = auStack_68;
  pcVar11 = (char *)*param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_48 = 1;
  lVar7 = param_2[1];
  FUN_140081b00(0,lVar7);
  pcVar2 = pcVar11 + lVar7;
  if (lVar7 != 0) {
    do {
      cVar3 = *pcVar11;
      if (((byte)(cVar3 - 0x30U) < 10) || ((byte)(cVar3 + 0xbfU) < 6)) {
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        if (uVar4 < uVar5) {
          param_1[2] = uVar4 + 1;
          if (uVar5 < 0x10) {
            *(char *)((longlong)param_1 + uVar4) = cVar3;
            *(undefined1 *)((longlong)param_1 + uVar4 + 1) = 0;
          }
          else {
            uVar5 = *param_1;
            *(char *)(uVar5 + uVar4) = cVar3;
            *(undefined1 *)(uVar5 + 1 + uVar4) = 0;
          }
        }
        else {
          if (uVar4 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_140005640();
          }
          uVar9 = uVar4 + 1 | 0xf;
          if (0x7fffffffffffffff < uVar9) {
            uVar9 = 0x7fffffffffffffff;
            uVar10 = 0x8000000000000027;
LAB_14030af06:
            lVar7 = FUN_1403272a0(uVar10);
            if (lVar7 != 0) {
              uVar10 = lVar7 + 0x27U & 0xffffffffffffffe0;
              *(longlong *)(uVar10 - 8) = lVar7;
              goto LAB_14030af2d;
            }
LAB_14030afcf:
            pcVar6 = (code *)swi(0x29);
            (*pcVar6)(5);
            puVar8 = auStack_60;
LAB_14030afd6:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar8 + -8) = &UNK_14030afdb;
            FUN_140005500();
          }
          if (0x7fffffffffffffff - (uVar5 >> 1) < uVar5) {
            uVar9 = 0x7fffffffffffffff;
            uVar10 = 0x8000000000000027;
            goto LAB_14030af06;
          }
          uVar10 = (uVar5 >> 1) + uVar5;
          if (uVar9 < uVar10) {
            uVar9 = uVar10;
          }
          uVar1 = uVar9 + 1;
          if (uVar1 == 0) {
            uVar10 = 0;
          }
          else {
            if (0xfff < uVar1) {
              uVar10 = uVar9 + 0x28;
              if (uVar10 <= uVar1) goto LAB_14030afd6;
              goto LAB_14030af06;
            }
            uVar10 = FUN_1403272a0(uVar1);
          }
LAB_14030af2d:
          param_1[2] = uVar4 + 1;
          param_1[3] = uVar9;
          if (uVar5 < 0x10) {
            FUN_14035f420(uVar10,param_1,uVar4);
            *(char *)(uVar10 + uVar4) = cVar3;
            *(undefined1 *)(uVar10 + 1 + uVar4) = 0;
          }
          else {
            uVar9 = *param_1;
            FUN_14035f420(uVar10,uVar9,uVar4);
            *(char *)(uVar10 + uVar4) = cVar3;
            *(undefined1 *)(uVar10 + 1 + uVar4) = 0;
            if (uVar5 + 1 < 0x1000) {
              thunk_FUN_140327e20(uVar9);
            }
            else {
              if (0x1f < (uVar9 - *(longlong *)(uVar9 - 8)) - 8) goto LAB_14030afcf;
              thunk_FUN_140327e20(*(longlong *)(uVar9 - 8),uVar5 + 0x28);
            }
          }
          *param_1 = uVar10;
        }
      }
      pcVar11 = pcVar11 + 1;
    } while (pcVar11 != pcVar2);
  }
  return param_1;
}



## raw_result.value.assembly

0x14030add0: MOV qword ptr [RSP + 0x18], RBX,0x14030add5: MOV qword ptr [RSP + 0x8], RCX,0x14030adda: PUSH RBP,0x14030addb: PUSH RSI,0x14030addc: PUSH RDI,0x14030addd: PUSH R12,0x14030addf: PUSH R13,0x14030ade1: PUSH R14,0x14030ade3: PUSH R15,0x14030ade5: SUB RSP, 0x30,0x14030ade9: MOV R12, qword ptr [RDX],0x14030adec: MOV RSI, RCX,0x14030adef: XOR EAX, EAX,0x14030adf1: MOV dword ptr [RSP + 0x20], EAX,0x14030adf5: XORPS XMM0, XMM0,0x14030adf8: MOVUPS xmmword ptr [RCX], XMM0,0x14030adfb: MOV qword ptr [RCX + 0x10], RAX,0x14030adff: MOV qword ptr [RCX + 0x18], 0xf,0x14030ae07: MOV byte ptr [RCX], AL,0x14030ae09: MOV dword ptr [RSP + 0x20], 0x1,0x14030ae11: MOV RBX, qword ptr [RDX + 0x8],0x14030ae15: MOV RDX, RBX,0x14030ae18: CALL 0x140081b00,0x14030ae1d: LEA RAX, [RBX + R12*0x1],0x14030ae21: MOV qword ptr [RSP + 0x78], RAX,0x14030ae26: TEST RBX, RBX,0x14030ae29: JZ 0x14030afb4,0x14030ae2f: MOV RDX, 0x7fffffffffffffff,0x14030ae39: NOP dword ptr [RAX],0x14030ae40: MOVZX R15D, byte ptr [R12],0x14030ae45: LEA EAX, [R15 + -0x30],0x14030ae49: CMP AL, 0x9,0x14030ae4b: JBE 0x14030ae59,0x14030ae4d: LEA EAX, [R15 + -0x41],0x14030ae51: CMP AL, 0x5,0x14030ae53: JA 0x14030afa6,0x14030ae59: MOV RBX, qword ptr [RSI + 0x10],0x14030ae5d: MOV R14, qword ptr [RSI + 0x18],0x14030ae61: CMP RBX, R14,0x14030ae64: JNC 0x14030ae96,0x14030ae66: LEA RAX, [RBX + 0x1],0x14030ae6a: MOV qword ptr [RSI + 0x10], RAX,0x14030ae6e: CMP R14, 0xf,0x14030ae72: JBE 0x14030ae85,0x14030ae74: MOV RAX, qword ptr [RSI],0x14030ae77: MOV byte ptr [RAX + RBX*0x1], R15B,0x14030ae7b: MOV byte ptr [RAX + RBX*0x1 + 0x1], 0x0,0x14030ae80: JMP 0x14030afa6,0x14030ae85: MOV RAX, RSI,0x14030ae88: MOV byte ptr [RAX + RBX*0x1], R15B,0x14030ae8c: MOV byte ptr [RAX + RBX*0x1 + 0x1], 0x0,0x14030ae91: JMP 0x14030afa6,0x14030ae96: MOV RAX, RDX,0x14030ae99: SUB RAX, RBX,0x14030ae9c: CMP RAX, 0x1,0x14030aea0: JC 0x14030afdc,0x14030aea6: LEA R13, [RBX + 0x1],0x14030aeaa: MOV RBP, R13,0x14030aead: OR RBP, 0xf,0x14030aeb1: CMP RBP, RDX,0x14030aeb4: JBE 0x14030aebf,0x14030aeb6: MOV RBP, RDX,0x14030aeb9: LEA RCX, [RDX + 0x28],0x14030aebd: JMP 0x14030af06,0x14030aebf: MOV RCX, R14,0x14030aec2: SHR RCX, 0x1,0x14030aec5: MOV RAX, RDX,0x14030aec8: SUB RAX, RCX,0x14030aecb: CMP R14, RAX,0x14030aece: JBE 0x14030aed9,0x14030aed0: MOV RBP, RDX,0x14030aed3: LEA RCX, [RDX + 0x28],0x14030aed7: JMP 0x14030af06,0x14030aed9: LEA RAX, [RCX + R14*0x1],0x14030aedd: CMP RBP, RAX,0x14030aee0: CMOVC RBP, RAX,0x14030aee4: LEA RAX, [RBP + 0x1],0x14030aee8: TEST RAX, RAX,0x14030aeeb: JNZ 0x14030aef1,0x14030aeed: XOR EDI, EDI,0x14030aeef: JMP 0x14030af2d,0x14030aef1: CMP RAX, 0x1000,0x14030aef7: JC 0x14030af22,0x14030aef9: LEA RCX, [RBP + 0x28],0x14030aefd: CMP RCX, RAX,0x14030af00: JBE 0x14030afd6,0x14030af06: CALL 0x1403272a0,0x14030af0b: TEST RAX, RAX,0x14030af0e: JZ 0x14030afcf,0x14030af14: LEA RDI, [RAX + 0x27],0x14030af18: AND RDI, -0x20,0x14030af1c: MOV qword ptr [RDI + -0x8], RAX,0x14030af20: JMP 0x14030af2d,0x14030af22: MOV RCX, RAX,0x14030af25: CALL 0x1403272a0,0x14030af2a: MOV RDI, RAX,0x14030af2d: MOV qword ptr [RSI + 0x10], R13,0x14030af31: MOV qword ptr [RSI + 0x18], RBP,0x14030af35: MOV R8, RBX,0x14030af38: MOV RCX, RDI,0x14030af3b: CMP R14, 0xf,0x14030af3f: JBE 0x14030af88,0x14030af41: MOV RBP, qword ptr [RSI],0x14030af44: MOV RDX, RBP,0x14030af47: CALL 0x14035f420,0x14030af4c: MOV byte ptr [RDI + RBX*0x1], R15B,0x14030af50: MOV byte ptr [RDI + RBX*0x1 + 0x1], 0x0,0x14030af55: LEA RDX, [R14 + 0x1],0x14030af59: CMP RDX, 0x1000,0x14030af60: JC 0x14030af7e,0x14030af62: MOV RCX, qword ptr [RBP + -0x8],0x14030af66: SUB RBP, RCX,0x14030af69: SUB RBP, 0x8,0x14030af6d: CMP RBP, 0x1f,0x14030af71: JA 0x14030afcf,0x14030af73: LEA RDX, [R14 + 0x28],0x14030af77: CALL 0x1403272f0,0x14030af7c: JMP 0x14030af99,0x14030af7e: MOV RCX, RBP,0x14030af81: CALL 0x1403272f0,0x14030af86: JMP 0x14030af99,0x14030af88: MOV RDX, RSI,0x14030af8b: CALL 0x14035f420,0x14030af90: MOV byte ptr [RDI + RBX*0x1], R15B,0x14030af94: MOV byte ptr [RDI + RBX*0x1 + 0x1], 0x0,0x14030af99: MOV RDX, 0x7fffffffffffffff,0x14030afa3: MOV qword ptr [RSI], RDI,0x14030afa6: INC R12,0x14030afa9: CMP R12, qword ptr [RSP + 0x78],0x14030afae: JNZ 0x14030ae40,0x14030afb4: MOV RAX, RSI,0x14030afb7: MOV RBX, qword ptr [RSP + 0x80],0x14030afbf: ADD RSP, 0x30,0x14030afc3: POP R15,0x14030afc5: POP R14,0x14030afc7: POP R13,0x14030afc9: POP R12,0x14030afcb: POP RDI,0x14030afcc: POP RSI,0x14030afcd: POP RBP,0x14030afce: RET,0x14030afcf: MOV ECX, 0x5,0x14030afd4: INT 0x29,0x14030afd6: CALL 0x140005500,0x14030afdc: CALL 0x140005640

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x14030b3a0 | FUN_14030b3a0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x140005500 | FUN_140005500       | [object Object] | [object Object] |
| 0x140005640 | FUN_140005640       | [object Object] | [object Object] |
| 0x140081b00 | FUN_140081b00       | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0       | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20 | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420       | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14030b6ea    | 0x14030add0    | [object Object]  | [object Object]  | [object Object] |
| 0x14030b91a    | 0x14030add0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6df4    | 0x14030add0    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14030add0    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030add5    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x14030adf1    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030ae09    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030ae18    | 0x140081b00              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae21    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x14030ae29    | 0x14030afb4              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae4b    | 0x14030ae59              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae53    | 0x14030afa6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae64    | 0x14030ae96              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae72    | 0x14030ae85              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae80    | 0x14030afa6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae91    | 0x14030afa6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aea0    | 0x14030afdc              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aeb4    | 0x14030aebf              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aebd    | 0x14030af06              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aece    | 0x14030aed9              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aed7    | 0x14030af06              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aeeb    | 0x14030aef1              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aeef    | 0x14030af2d              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aef7    | 0x14030af22              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af00    | 0x14030afd6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af06    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af0e    | 0x14030afcf              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af20    | 0x14030af2d              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af25    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af3f    | 0x14030af88              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af47    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af60    | 0x14030af7e              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af71    | 0x14030afcf              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af77    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af7c    | 0x14030af99              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af81    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af86    | 0x14030af99              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af8b    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030afa9    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x14030afae    | 0x14030ae40              | [object Object]  | [object Object]  | [object Object] |
| 0x14030afb7    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030afd6    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |
| 0x14030afdc    | 0x140005640              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value               | source_address |
|-------------|---------------------|----------------|
| 0x140005500 | FUN_140005500       | 0x14030afd6    |
| 0x140005640 | FUN_140005640       | 0x14030afdc    |
| 0x140081b00 | FUN_140081b00       | 0x14030ae18    |
| 0x14030ae40 | LAB_14030ae40       | 0x14030afae    |
| 0x14030ae59 | LAB_14030ae59       | 0x14030ae4b    |
| 0x14030ae85 | LAB_14030ae85       | 0x14030ae72    |
| 0x14030ae96 | LAB_14030ae96       | 0x14030ae64    |
| 0x14030aebf | LAB_14030aebf       | 0x14030aeb4    |
| 0x14030aed9 | LAB_14030aed9       | 0x14030aece    |
| 0x14030aef1 | LAB_14030aef1       | 0x14030aeeb    |
| 0x14030af06 | LAB_14030af06       | 0x14030aebd    |
| 0x14030af06 | LAB_14030af06       | 0x14030aed7    |
| 0x14030af22 | LAB_14030af22       | 0x14030aef7    |
| 0x14030af2d | LAB_14030af2d       | 0x14030aeef    |
| 0x14030af2d | LAB_14030af2d       | 0x14030af20    |
| 0x14030af7e | LAB_14030af7e       | 0x14030af60    |
| 0x14030af88 | LAB_14030af88       | 0x14030af3f    |
| 0x14030af99 | LAB_14030af99       | 0x14030af7c    |
| 0x14030af99 | LAB_14030af99       | 0x14030af86    |
| 0x14030afa6 | LAB_14030afa6       | 0x14030ae53    |
| 0x14030afa6 | LAB_14030afa6       | 0x14030ae80    |
| 0x14030afa6 | LAB_14030afa6       | 0x14030ae91    |
| 0x14030afb4 | LAB_14030afb4       | 0x14030ae29    |
| 0x14030afcf | LAB_14030afcf       | 0x14030af0e    |
| 0x14030afcf | LAB_14030afcf       | 0x14030af71    |
| 0x14030afd6 | LAB_14030afd6       | 0x14030af00    |
| 0x14030afdc | LAB_14030afdc       | 0x14030aea0    |
| 0x1403272a0 | FUN_1403272a0       | 0x14030af06    |
| 0x1403272a0 | FUN_1403272a0       | 0x14030af25    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x14030af77    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x14030af81    |
| 0x14035f420 | FUN_14035f420       | 0x14030af47    |
| 0x14035f420 | FUN_14035f420       | 0x14030af8b    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14030add0 | 0x14030ae2f | 0x14030ae2f,0x14030afb4 |
| 0x14030ae2f | 0x14030ae40 | 0x14030ae40             |
| 0x14030ae40 | 0x14030ae4d | 0x14030ae4d,0x14030ae59 |
| 0x14030ae4d | 0x14030ae59 | 0x14030ae59,0x14030afa6 |
| 0x14030ae59 | 0x14030ae66 | 0x14030ae66,0x14030ae96 |
| 0x14030ae66 | 0x14030ae74 | 0x14030ae74,0x14030ae85 |
| 0x14030ae74 | 0x14030ae85 | 0x14030afa6             |
| 0x14030ae85 | 0x14030ae96 | 0x14030afa6             |
| 0x14030ae96 | 0x14030aea6 | 0x14030aea6,0x14030afdc |
| 0x14030aea6 | 0x14030aeb6 | 0x14030aeb6,0x14030aebf |
| 0x14030aeb6 | 0x14030aebf | 0x14030af06             |
| 0x14030aebf | 0x14030aed0 | 0x14030aed0,0x14030aed9 |
| 0x14030aed0 | 0x14030aed9 | 0x14030af06             |
| 0x14030aed9 | 0x14030aeed | 0x14030aeed,0x14030aef1 |
| 0x14030aeed | 0x14030aef1 | 0x14030af2d             |
| 0x14030aef1 | 0x14030aef9 | 0x14030aef9,0x14030af22 |
| 0x14030aef9 | 0x14030af06 | 0x14030af06,0x14030afd6 |
| 0x14030af06 | 0x14030af14 | 0x14030af14,0x14030afcf |
| 0x14030af14 | 0x14030af22 | 0x14030af2d             |
| 0x14030af22 | 0x14030af2d | 0x14030af2d             |
| 0x14030af2d | 0x14030af41 | 0x14030af41,0x14030af88 |
| 0x14030af41 | 0x14030af62 | 0x14030af62,0x14030af7e |
| 0x14030af62 | 0x14030af73 | 0x14030af73,0x14030afcf |
| 0x14030af73 | 0x14030af7e | 0x14030af99             |
| 0x14030af7e | 0x14030af88 | 0x14030af99             |
| 0x14030af88 | 0x14030af99 | 0x14030af99             |
| 0x14030af99 | 0x14030afa6 | 0x14030afa6             |
| 0x14030afa6 | 0x14030afb4 | 0x14030ae40,0x14030afb4 |
| 0x14030afb4 | 0x14030afcf |                         |
| 0x14030afcf | 0x14030afd6 | 0x14030afd6             |
| 0x14030afd6 | 0x14030afdb |                         |
| 0x14030afdc | 0x14030afe1 |                         |

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

| role      | ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | ulonglong *  | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
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

| id               | address     | sequence | opcode        | is_dead | block_membership | inputs                                                          | output          |
|------------------|-------------|----------|---------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x14030ade5#1407 | 0x14030ade5 | 1407     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ade9#36   | 0x14030ade9 | 36       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ade9#1421 | 0x14030ade9 | 1421     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030adf8#1180 | 0x14030adf8 | 1180     | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030adf8#1181 | 0x14030adf8 | 1181     | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030adf8#1408 | 0x14030adf8 | 1408     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030adfb#60   | 0x14030adfb | 60       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030adfb#1409 | 0x14030adfb | 1409     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030adff#63   | 0x14030adff | 63       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030adff#1410 | 0x14030adff | 1410     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae07#65   | 0x14030ae07 | 65       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae07#1422 | 0x14030ae07 | 1422     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae09#68   | 0x14030ae09 | 68       | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae11#70   | 0x14030ae11 | 70       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae11#1411 | 0x14030ae11 | 1411     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae18#75   | 0x14030ae18 | 75       | CALL          | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae18#1255 | 0x14030ae18 | 1255     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae1d#77   | 0x14030ae1d | 77       | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae26#86   | 0x14030ae26 | 86       | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae29#91   | 0x14030ae29 | 91       | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ae40#93   | 0x14030ae40 | 93       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae40#927  | 0x14030ae40 | 927      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae40#1272 | 0x14030ae40 | 1272     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae45#1140 | 0x14030ae45 | 1140     | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae4b#108  | 0x14030ae4b | 108      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae4b#109  | 0x14030ae4b | 109      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ae4b#1423 | 0x14030ae4b | 1423     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae4d#1141 | 0x14030ae4d | 1141     | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae53#123  | 0x14030ae53 | 123      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae53#124  | 0x14030ae53 | 124      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ae53#1424 | 0x14030ae53 | 1424     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae59#126  | 0x14030ae59 | 126      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae59#1412 | 0x14030ae59 | 1412     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae5d#129  | 0x14030ae5d | 129      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae5d#1413 | 0x14030ae5d | 1413     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae61#132  | 0x14030ae61 | 132      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae64#142  | 0x14030ae64 | 142      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ae66#143  | 0x14030ae66 | 143      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae6a#147  | 0x14030ae6a | 147      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae6a#1414 | 0x14030ae6a | 1414     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae72#158  | 0x14030ae72 | 158      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae72#159  | 0x14030ae72 | 159      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ae74#160  | 0x14030ae74 | 160      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae77#163  | 0x14030ae77 | 163      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae77#165  | 0x14030ae77 | 165      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae77#1437 | 0x14030ae77 | 1437     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae7b#166  | 0x14030ae7b | 166      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae7b#168  | 0x14030ae7b | 168      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae7b#170  | 0x14030ae7b | 170      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae7b#1438 | 0x14030ae7b | 1438     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae80#171  | 0x14030ae80 | 171      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ae88#240  | 0x14030ae88 | 240      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae88#242  | 0x14030ae88 | 242      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae88#1433 | 0x14030ae88 | 1433     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae88#1434 | 0x14030ae88 | 1434     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae8c#245  | 0x14030ae8c | 245      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae8c#247  | 0x14030ae8c | 247      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae8c#1415 | 0x14030ae8c | 1415     | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae8c#1435 | 0x14030ae8c | 1435     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae8c#1436 | 0x14030ae8c | 1436     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae91#248  | 0x14030ae91 | 248      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ae9c#260  | 0x14030ae9c | 260      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aea0#269  | 0x14030aea0 | 269      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aea6#270  | 0x14030aea6 | 270      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aead#275  | 0x14030aead | 275      | INT_OR        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aeb4#292  | 0x14030aeb4 | 292      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aeb4#293  | 0x14030aeb4 | 293      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aeb6#294  | 0x14030aeb6 | 294      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aeb9#295  | 0x14030aeb9 | 295      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aebd#297  | 0x14030aebd | 297      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030aec2#447  | 0x14030aec2 | 447      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aec8#457  | 0x14030aec8 | 457      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aece#474  | 0x14030aece | 474      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aece#475  | 0x14030aece | 475      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aed0#476  | 0x14030aed0 | 476      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aed3#478  | 0x14030aed3 | 478      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aed7#479  | 0x14030aed7 | 479      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030aed9#481  | 0x14030aed9 | 481      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aedd#484  | 0x14030aedd | 484      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aee0#495  | 0x14030aee0 | 495      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aee0#1419 | 0x14030aee0 | 1419     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aee0#1420 | 0x14030aee0 | 1420     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aee4#497  | 0x14030aee4 | 497      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aee4#888  | 0x14030aee4 | 888      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aee8#503  | 0x14030aee8 | 503      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aeeb#509  | 0x14030aeeb | 509      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aeed#902  | 0x14030aeed | 902      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aeef#520  | 0x14030aeef | 520      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030aef1#521  | 0x14030aef1 | 521      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aef7#530  | 0x14030aef7 | 530      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aef9#531  | 0x14030aef9 | 531      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af00#543  | 0x14030af00 | 543      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af00#544  | 0x14030af00 | 544      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af06#300  | 0x14030af06 | 300      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af06#852  | 0x14030af06 | 852      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af06#890  | 0x14030af06 | 890      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af06#1258 | 0x14030af06 | 1258     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af0b#305  | 0x14030af0b | 305      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af0e#310  | 0x14030af0e | 310      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af14#311  | 0x14030af14 | 311      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af18#315  | 0x14030af18 | 315      | INT_AND       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af1c#322  | 0x14030af1c | 322      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af1c#324  | 0x14030af1c | 324      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af1c#1425 | 0x14030af1c | 1425     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af20#325  | 0x14030af20 | 325      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030af25#548  | 0x14030af25 | 548      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af25#1257 | 0x14030af25 | 1257     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af2d#328  | 0x14030af2d | 328      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af2d#889  | 0x14030af2d | 889      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af2d#903  | 0x14030af2d | 903      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af2d#1266 | 0x14030af2d | 1266     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af2d#1416 | 0x14030af2d | 1416     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af31#331  | 0x14030af31 | 331      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af31#1417 | 0x14030af31 | 1417     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af3f#344  | 0x14030af3f | 344      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af3f#345  | 0x14030af3f | 345      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af41#346  | 0x14030af41 | 346      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af47#351  | 0x14030af47 | 351      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030af47#1260 | 0x14030af47 | 1260     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af4c#353  | 0x14030af4c | 353      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af4c#355  | 0x14030af4c | 355      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af4c#1428 | 0x14030af4c | 1428     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af50#356  | 0x14030af50 | 356      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af50#358  | 0x14030af50 | 358      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af50#360  | 0x14030af50 | 360      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af50#1429 | 0x14030af50 | 1429     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af55#361  | 0x14030af55 | 361      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af59#364  | 0x14030af59 | 364      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af60#373  | 0x14030af60 | 373      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af62#374  | 0x14030af62 | 374      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af62#375  | 0x14030af62 | 375      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af62#1430 | 0x14030af62 | 1430     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af66#379  | 0x14030af66 | 379      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af69#388  | 0x14030af69 | 388      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af71#405  | 0x14030af71 | 405      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af71#407  | 0x14030af71 | 407      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af73#408  | 0x14030af73 | 408      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af77#412  | 0x14030af77 | 412      | CALL          | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af77#1264 | 0x14030af77 | 1264     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af7c#413  | 0x14030af7c | 413      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030af81#428  | 0x14030af81 | 428      | CALL          | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af81#1261 | 0x14030af81 | 1261     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af86#429  | 0x14030af86 | 429      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030af8b#433  | 0x14030af8b | 433      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030af8b#1259 | 0x14030af8b | 1259     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af90#435  | 0x14030af90 | 435      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af90#437  | 0x14030af90 | 437      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af90#1426 | 0x14030af90 | 1426     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af94#438  | 0x14030af94 | 438      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af94#440  | 0x14030af94 | 440      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af94#442  | 0x14030af94 | 442      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af94#1427 | 0x14030af94 | 1427     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af99#1267 | 0x14030af99 | 1267     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030afa3#416  | 0x14030afa3 | 416      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030afa6#173  | 0x14030afa6 | 173      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030afa6#1268 | 0x14030afa6 | 1268     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x14030afa9#187  | 0x14030afa9 | 187      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afae#193  | 0x14030afae | 193      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030afb4#194  | 0x14030afb4 | 194      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030afce#237  | 0x14030afce | 237      | RETURN        | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030afcf#1269 | 0x14030afcf | 1269     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd4#418  | 0x14030afd4 | 418      | CALLOTHER     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd4#419  | 0x14030afd4 | 419      | CALLIND       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030afd4#1262 | 0x14030afd4 | 1262     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd4#1418 | 0x14030afd4 | 1418     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd4#1431 | 0x14030afd4 | 1431     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030afd6#420  | 0x14030afd6 | 420      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030afd6#421  | 0x14030afd6 | 421      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030afd6#422  | 0x14030afd6 | 422      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x14030afd6#424  | 0x14030afd6 | 424      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x14030afd6#883  | 0x14030afd6 | 883      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd6#1263 | 0x14030afd6 | 1263     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd6#1270 | 0x14030afd6 | 1270     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd6#1406 | 0x14030afd6 | 1406     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd6#1432 | 0x14030afd6 | 1432     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030afdc#552  | 0x14030afdc | 552      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x14030afdc#554  | 0x14030afdc | 554      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x14030afdc#1256 | 0x14030afdc | 1256     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x14030ade9#36   | 0x14030ade9#1421 | 0           |
| 0x14030adf8#1408 | 0x14030adf8#1181 | 1           |
| 0x14030adfb#1409 | 0x14030adfb#60   | 1           |
| 0x14030adff#1410 | 0x14030adff#63   | 1           |
| 0x14030ae07#1422 | 0x14030ae07#65   | 1           |
| 0x14030ae11#1411 | 0x14030ae11#70   | 1           |
| 0x14030ae11#70   | 0x14030ae18#75   | 2           |
| 0x14030ae09#68   | 0x14030ae18#1255 | 0           |
| 0x14030ade9#1421 | 0x14030ae1d#77   | 0           |
| 0x14030ae11#70   | 0x14030ae1d#77   | 1           |
| 0x14030ae11#70   | 0x14030ae26#86   | 0           |
| 0x14030ae26#86   | 0x14030ae29#91   | 1           |
| 0x14030ae40#927  | 0x14030ae40#93   | 1           |
| 0x14030afa6#173  | 0x14030ae40#927  | 0           |
| 0x14030ade9#1421 | 0x14030ae40#927  | 1           |
| 0x14030afa6#1268 | 0x14030ae40#1272 | 0           |
| 0x14030ae18#1255 | 0x14030ae40#1272 | 1           |
| 0x14030ae40#93   | 0x14030ae45#1140 | 0           |
| 0x14030ae4b#1423 | 0x14030ae4b#108  | 0           |
| 0x14030ae4b#108  | 0x14030ae4b#109  | 1           |
| 0x14030ae45#1140 | 0x14030ae4b#1423 | 0           |
| 0x14030ae40#93   | 0x14030ae4d#1141 | 0           |
| 0x14030ae53#1424 | 0x14030ae53#123  | 0           |
| 0x14030ae53#123  | 0x14030ae53#124  | 1           |
| 0x14030ae4d#1141 | 0x14030ae53#1424 | 0           |
| 0x14030ae59#1412 | 0x14030ae59#126  | 1           |
| 0x14030ae5d#1413 | 0x14030ae5d#129  | 1           |
| 0x14030ae59#126  | 0x14030ae61#132  | 0           |
| 0x14030ae5d#129  | 0x14030ae61#132  | 1           |
| 0x14030ae61#132  | 0x14030ae64#142  | 1           |
| 0x14030ae59#126  | 0x14030ae66#143  | 0           |
| 0x14030ae6a#1414 | 0x14030ae6a#147  | 1           |
| 0x14030ae66#143  | 0x14030ae6a#147  | 2           |
| 0x14030ae5d#129  | 0x14030ae72#158  | 0           |
| 0x14030ae72#158  | 0x14030ae72#159  | 1           |
| 0x14030ae74#160  | 0x14030ae77#163  | 0           |
| 0x14030ae59#126  | 0x14030ae77#163  | 1           |
| 0x14030ae77#1437 | 0x14030ae77#165  | 1           |
| 0x14030ae40#93   | 0x14030ae77#165  | 2           |
| 0x14030ae77#163  | 0x14030ae77#1437 | 0           |
| 0x14030ae74#160  | 0x14030ae7b#166  | 0           |
| 0x14030ae7b#166  | 0x14030ae7b#168  | 0           |
| 0x14030ae59#126  | 0x14030ae7b#168  | 1           |
| 0x14030ae7b#1438 | 0x14030ae7b#170  | 1           |
| 0x14030ae7b#168  | 0x14030ae7b#1438 | 0           |
| 0x14030ae88#1433 | 0x14030ae88#240  | 0           |
| 0x14030ae59#126  | 0x14030ae88#240  | 1           |
| 0x14030ae88#1434 | 0x14030ae88#242  | 1           |
| 0x14030ae40#93   | 0x14030ae88#242  | 2           |
| 0x14030ae88#240  | 0x14030ae88#1434 | 0           |
| 0x14030ae8c#1435 | 0x14030ae8c#245  | 0           |
| 0x14030ae8c#1415 | 0x14030ae8c#245  | 1           |
| 0x14030ae8c#1436 | 0x14030ae8c#247  | 1           |
| 0x14030ae59#126  | 0x14030ae8c#1415 | 0           |
| 0x14030ae8c#245  | 0x14030ae8c#1436 | 0           |
| 0x14030ae59#126  | 0x14030ae9c#260  | 0           |
| 0x14030ae9c#260  | 0x14030aea0#269  | 1           |
| 0x14030ae59#126  | 0x14030aea6#270  | 0           |
| 0x14030aea6#270  | 0x14030aead#275  | 0           |
| 0x14030aead#275  | 0x14030aeb4#292  | 1           |
| 0x14030aeb4#292  | 0x14030aeb4#293  | 1           |
| 0x14030ae5d#129  | 0x14030aec2#447  | 0           |
| 0x14030aec2#447  | 0x14030aec8#457  | 1           |
| 0x14030aec8#457  | 0x14030aece#474  | 0           |
| 0x14030ae5d#129  | 0x14030aece#474  | 1           |
| 0x14030aece#474  | 0x14030aece#475  | 1           |
| 0x14030aec2#447  | 0x14030aed9#481  | 0           |
| 0x14030ae5d#129  | 0x14030aed9#481  | 1           |
| 0x14030aead#275  | 0x14030aedd#484  | 0           |
| 0x14030aed9#481  | 0x14030aedd#484  | 1           |
| 0x14030aedd#484  | 0x14030aee0#495  | 1           |
| 0x14030aead#275  | 0x14030aee0#1419 | 0           |
| 0x14030aed9#481  | 0x14030aee0#1420 | 0           |
| 0x14030aee4#888  | 0x14030aee4#497  | 0           |
| 0x14030aee0#1419 | 0x14030aee4#888  | 0           |
| 0x14030aee0#1420 | 0x14030aee4#888  | 1           |
| 0x14030aee4#497  | 0x14030aee8#503  | 0           |
| 0x14030aee8#503  | 0x14030aeeb#509  | 1           |
| 0x14030aee4#497  | 0x14030aef1#521  | 1           |
| 0x14030aef1#521  | 0x14030aef7#530  | 1           |
| 0x14030aee4#888  | 0x14030aef9#531  | 0           |
| 0x14030aef9#531  | 0x14030af00#543  | 0           |
| 0x14030aee4#497  | 0x14030af00#543  | 1           |
| 0x14030af00#543  | 0x14030af00#544  | 1           |
| 0x14030af06#852  | 0x14030af06#300  | 1           |
| 0x14030aeb9#295  | 0x14030af06#852  | 0           |
| 0x14030aed3#478  | 0x14030af06#852  | 1           |
| 0x14030aef9#531  | 0x14030af06#852  | 2           |
| 0x14030aeb6#294  | 0x14030af06#890  | 0           |
| 0x14030aed0#476  | 0x14030af06#890  | 1           |
| 0x14030aee4#888  | 0x14030af06#890  | 2           |
| 0x14030ae40#1272 | 0x14030af06#1258 | 0           |
| 0x14030af06#300  | 0x14030af0b#305  | 0           |
| 0x14030af0b#305  | 0x14030af0e#310  | 1           |
| 0x14030af06#300  | 0x14030af14#311  | 0           |
| 0x14030af14#311  | 0x14030af18#315  | 0           |
| 0x14030af18#315  | 0x14030af1c#322  | 0           |
| 0x14030af1c#1425 | 0x14030af1c#324  | 1           |
| 0x14030af06#300  | 0x14030af1c#324  | 2           |
| 0x14030af1c#322  | 0x14030af1c#1425 | 0           |
| 0x14030aee4#497  | 0x14030af25#548  | 1           |
| 0x14030ae40#1272 | 0x14030af25#1257 | 0           |
| 0x14030af2d#1416 | 0x14030af2d#328  | 1           |
| 0x14030aea6#270  | 0x14030af2d#328  | 2           |
| 0x14030af06#890  | 0x14030af2d#889  | 0           |
| 0x14030aee4#888  | 0x14030af2d#889  | 1           |
| 0x14030aee4#888  | 0x14030af2d#889  | 2           |
| 0x14030af18#315  | 0x14030af2d#903  | 0           |
| 0x14030aeed#902  | 0x14030af2d#903  | 1           |
| 0x14030af25#548  | 0x14030af2d#903  | 2           |
| 0x14030af06#1258 | 0x14030af2d#1266 | 0           |
| 0x14030ae40#1272 | 0x14030af2d#1266 | 1           |
| 0x14030af25#1257 | 0x14030af2d#1266 | 2           |
| 0x14030af31#1417 | 0x14030af31#331  | 1           |
| 0x14030af2d#889  | 0x14030af31#331  | 2           |
| 0x14030ae5d#129  | 0x14030af3f#344  | 0           |
| 0x14030af3f#344  | 0x14030af3f#345  | 1           |
| 0x14030af2d#903  | 0x14030af47#351  | 1           |
| 0x14030af41#346  | 0x14030af47#351  | 2           |
| 0x14030ae59#126  | 0x14030af47#351  | 3           |
| 0x14030af2d#1266 | 0x14030af47#1260 | 0           |
| 0x14030af2d#903  | 0x14030af4c#353  | 0           |
| 0x14030ae59#126  | 0x14030af4c#353  | 1           |
| 0x14030af4c#1428 | 0x14030af4c#355  | 1           |
| 0x14030ae40#93   | 0x14030af4c#355  | 2           |
| 0x14030af4c#353  | 0x14030af4c#1428 | 0           |
| 0x14030af2d#903  | 0x14030af50#356  | 0           |
| 0x14030af50#356  | 0x14030af50#358  | 0           |
| 0x14030ae59#126  | 0x14030af50#358  | 1           |
| 0x14030af50#1429 | 0x14030af50#360  | 1           |
| 0x14030af50#358  | 0x14030af50#1429 | 0           |
| 0x14030ae5d#129  | 0x14030af55#361  | 0           |
| 0x14030af55#361  | 0x14030af59#364  | 0           |
| 0x14030af59#364  | 0x14030af60#373  | 1           |
| 0x14030af41#346  | 0x14030af62#374  | 0           |
| 0x14030af62#1430 | 0x14030af62#375  | 1           |
| 0x14030af62#374  | 0x14030af62#1430 | 0           |
| 0x14030af41#346  | 0x14030af66#379  | 0           |
| 0x14030af62#375  | 0x14030af66#379  | 1           |
| 0x14030af66#379  | 0x14030af69#388  | 0           |
| 0x14030af69#388  | 0x14030af71#405  | 1           |
| 0x14030af71#405  | 0x14030af71#407  | 1           |
| 0x14030ae5d#129  | 0x14030af73#408  | 0           |
| 0x14030af62#375  | 0x14030af77#412  | 1           |
| 0x14030af73#408  | 0x14030af77#412  | 2           |
| 0x14030af47#1260 | 0x14030af77#1264 | 0           |
| 0x14030af41#346  | 0x14030af81#428  | 1           |
| 0x14030af47#1260 | 0x14030af81#1261 | 0           |
| 0x14030af2d#903  | 0x14030af8b#433  | 1           |
| 0x14030ae59#126  | 0x14030af8b#433  | 3           |
| 0x14030af2d#1266 | 0x14030af8b#1259 | 0           |
| 0x14030af2d#903  | 0x14030af90#435  | 0           |
| 0x14030ae59#126  | 0x14030af90#435  | 1           |
| 0x14030af90#1426 | 0x14030af90#437  | 1           |
| 0x14030ae40#93   | 0x14030af90#437  | 2           |
| 0x14030af90#435  | 0x14030af90#1426 | 0           |
| 0x14030af2d#903  | 0x14030af94#438  | 0           |
| 0x14030af94#438  | 0x14030af94#440  | 0           |
| 0x14030ae59#126  | 0x14030af94#440  | 1           |
| 0x14030af94#1427 | 0x14030af94#442  | 1           |
| 0x14030af94#440  | 0x14030af94#1427 | 0           |
| 0x14030af77#1264 | 0x14030af99#1267 | 0           |
| 0x14030af81#1261 | 0x14030af99#1267 | 1           |
| 0x14030af8b#1259 | 0x14030af99#1267 | 2           |
| 0x14030af2d#903  | 0x14030afa3#416  | 2           |
| 0x14030ae40#927  | 0x14030afa6#173  | 0           |
| 0x14030ae40#1272 | 0x14030afa6#1268 | 0           |
| 0x14030ae40#1272 | 0x14030afa6#1268 | 1           |
| 0x14030ae40#1272 | 0x14030afa6#1268 | 2           |
| 0x14030af99#1267 | 0x14030afa6#1268 | 3           |
| 0x14030afa6#173  | 0x14030afa9#187  | 0           |
| 0x14030ae1d#77   | 0x14030afa9#187  | 1           |
| 0x14030afa9#187  | 0x14030afae#193  | 1           |
| 0x14030afb4#194  | 0x14030afce#237  | 1           |
| 0x14030af06#1258 | 0x14030afcf#1269 | 0           |
| 0x14030af47#1260 | 0x14030afcf#1269 | 1           |
| 0x14030afd4#1431 | 0x14030afd4#419  | 0           |
| 0x14030afcf#1269 | 0x14030afd4#1262 | 0           |
| 0x14030afd4#418  | 0x14030afd4#1431 | 0           |
| 0x14030afd6#883  | 0x14030afd6#420  | 0           |
| 0x14030afd6#1432 | 0x14030afd6#421  | 1           |
| 0x14030afd6#1406 | 0x14030afd6#421  | 2           |
| 0x14030afd4#1418 | 0x14030afd6#883  | 0           |
| 0x14030ade5#1407 | 0x14030afd6#883  | 1           |
| 0x14030afd6#1270 | 0x14030afd6#1263 | 0           |
| 0x14030afd4#1262 | 0x14030afd6#1270 | 0           |
| 0x14030ae40#1272 | 0x14030afd6#1270 | 1           |
| 0x14030afd6#420  | 0x14030afd6#1432 | 0           |
| 0x14030ae40#1272 | 0x14030afdc#1256 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /ulonglong *  |
| 1       | param_2 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 1       | 0x14030ade9#36   | 1           |
| 0       | 0x14030adf8#1180 | 1           |
| 0       | 0x14030adf8#1408 | 0           |
| 0       | 0x14030adfb#1409 | 0           |
| 0       | 0x14030adff#1410 | 0           |
| 0       | 0x14030ae07#1422 | 0           |
| 1       | 0x14030ae11#1411 | 0           |
| 0       | 0x14030ae59#1412 | 0           |
| 0       | 0x14030ae5d#1413 | 0           |
| 0       | 0x14030ae6a#1414 | 0           |
| 0       | 0x14030ae74#160  | 1           |
| 0       | 0x14030ae88#1433 | 0           |
| 0       | 0x14030ae8c#1435 | 0           |
| 0       | 0x14030af2d#1416 | 0           |
| 0       | 0x14030af31#1417 | 0           |
| 0       | 0x14030af41#346  | 1           |
| 0       | 0x14030af8b#433  | 2           |
| 0       | 0x14030afa3#416  | 1           |
| 0       | 0x14030afb4#194  | 0           |

## raw_result.value.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x14030ade9#36   | memory_read        | 1             |             |
| 0x14030adf8#1180 | memory_write       | 1             | 2           |
| 0x14030adf8#1181 | memory_write       | 1             | 2           |
| 0x14030adfb#60   | memory_write       | 1             | 2           |
| 0x14030adff#63   | memory_write       | 1             | 2           |
| 0x14030ae07#65   | memory_write       | 1             | 2           |
| 0x14030ae11#70   | memory_read        | 1             |             |
| 0x14030ae18#75   | direct_call        | 0             |             |
| 0x14030ae29#91   | conditional_branch |               | 1           |
| 0x14030ae40#93   | memory_read        | 1             |             |
| 0x14030ae4b#109  | conditional_branch |               | 1           |
| 0x14030ae53#124  | conditional_branch |               | 1           |
| 0x14030ae59#126  | memory_read        | 1             |             |
| 0x14030ae5d#129  | memory_read        | 1             |             |
| 0x14030ae64#142  | conditional_branch |               | 1           |
| 0x14030ae6a#147  | memory_write       | 1             | 2           |
| 0x14030ae72#159  | conditional_branch |               | 1           |
| 0x14030ae74#160  | memory_read        | 1             |             |
| 0x14030ae77#165  | memory_write       | 1             | 2           |
| 0x14030ae7b#170  | memory_write       | 1             | 2           |
| 0x14030ae88#242  | memory_write       | 1             | 2           |
| 0x14030ae8c#247  | memory_write       | 1             | 2           |
| 0x14030aea0#269  | conditional_branch |               | 1           |
| 0x14030aeb4#293  | conditional_branch |               | 1           |
| 0x14030aece#475  | conditional_branch |               | 1           |
| 0x14030aee0#495  | conditional_branch |               | 1           |
| 0x14030aeeb#509  | conditional_branch |               | 1           |
| 0x14030aef7#530  | conditional_branch |               | 1           |
| 0x14030af00#544  | conditional_branch |               | 1           |
| 0x14030af06#300  | direct_call        | 0             |             |
| 0x14030af0e#310  | conditional_branch |               | 1           |
| 0x14030af1c#324  | memory_write       | 1             | 2           |
| 0x14030af25#548  | direct_call        | 0             |             |
| 0x14030af2d#328  | memory_write       | 1             | 2           |
| 0x14030af31#331  | memory_write       | 1             | 2           |
| 0x14030af3f#345  | conditional_branch |               | 1           |
| 0x14030af41#346  | memory_read        | 1             |             |
| 0x14030af47#351  | direct_call        | 0             |             |
| 0x14030af4c#355  | memory_write       | 1             | 2           |
| 0x14030af50#360  | memory_write       | 1             | 2           |
| 0x14030af60#373  | conditional_branch |               | 1           |
| 0x14030af62#375  | memory_read        | 1             |             |
| 0x14030af71#407  | conditional_branch |               | 1           |
| 0x14030af77#412  | direct_call        | 0             |             |
| 0x14030af81#428  | direct_call        | 0             |             |
| 0x14030af8b#433  | direct_call        | 0             |             |
| 0x14030af90#437  | memory_write       | 1             | 2           |
| 0x14030af94#442  | memory_write       | 1             | 2           |
| 0x14030afa3#416  | memory_write       | 1             | 2           |
| 0x14030afae#193  | conditional_branch |               | 1           |
| 0x14030afd4#419  | indirect_call      | 0             |             |
| 0x14030afd6#421  | memory_write       | 1             | 2           |
| 0x14030afd6#422  | direct_call        | 0             |             |
| 0x14030afdc#552  | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x14030afd6 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14030afdc to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x14030afd6 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14030afdc to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x14030add0

## normalized_result.procedure.name

FUN_14030add0

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
| 0x14030add0 | 0x14030afda |
| 0x14030afdc | 0x14030afe0 |

## normalized_result.procedure.body.total_bytes

528

## normalized_result.procedure.body.span_bytes

529

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_14030add0()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined4 local_48 @ Stack[-0x48]:4   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8   | ghidra-function-database |

## normalized_result.pseudocode


ulonglong * FUN_14030add0(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined4 local_48;
  
  puVar8 = auStack_68;
  pcVar11 = (char *)*param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_48 = 1;
  lVar7 = param_2[1];
  FUN_140081b00(0,lVar7);
  pcVar2 = pcVar11 + lVar7;
  if (lVar7 != 0) {
    do {
      cVar3 = *pcVar11;
      if (((byte)(cVar3 - 0x30U) < 10) || ((byte)(cVar3 + 0xbfU) < 6)) {
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        if (uVar4 < uVar5) {
          param_1[2] = uVar4 + 1;
          if (uVar5 < 0x10) {
            *(char *)((longlong)param_1 + uVar4) = cVar3;
            *(undefined1 *)((longlong)param_1 + uVar4 + 1) = 0;
          }
          else {
            uVar5 = *param_1;
            *(char *)(uVar5 + uVar4) = cVar3;
            *(undefined1 *)(uVar5 + 1 + uVar4) = 0;
          }
        }
        else {
          if (uVar4 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_140005640();
          }
          uVar9 = uVar4 + 1 | 0xf;
          if (0x7fffffffffffffff < uVar9) {
            uVar9 = 0x7fffffffffffffff;
            uVar10 = 0x8000000000000027;
LAB_14030af06:
            lVar7 = FUN_1403272a0(uVar10);
            if (lVar7 != 0) {
              uVar10 = lVar7 + 0x27U & 0xffffffffffffffe0;
              *(longlong *)(uVar10 - 8) = lVar7;
              goto LAB_14030af2d;
            }
LAB_14030afcf:
            pcVar6 = (code *)swi(0x29);
            (*pcVar6)(5);
            puVar8 = auStack_60;
LAB_14030afd6:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar8 + -8) = &UNK_14030afdb;
            FUN_140005500();
          }
          if (0x7fffffffffffffff - (uVar5 >> 1) < uVar5) {
            uVar9 = 0x7fffffffffffffff;
            uVar10 = 0x8000000000000027;
            goto LAB_14030af06;
          }
          uVar10 = (uVar5 >> 1) + uVar5;
          if (uVar9 < uVar10) {
            uVar9 = uVar10;
          }
          uVar1 = uVar9 + 1;
          if (uVar1 == 0) {
            uVar10 = 0;
          }
          else {
            if (0xfff < uVar1) {
              uVar10 = uVar9 + 0x28;
              if (uVar10 <= uVar1) goto LAB_14030afd6;
              goto LAB_14030af06;
            }
            uVar10 = FUN_1403272a0(uVar1);
          }
LAB_14030af2d:
          param_1[2] = uVar4 + 1;
          param_1[3] = uVar9;
          if (uVar5 < 0x10) {
            FUN_14035f420(uVar10,param_1,uVar4);
            *(char *)(uVar10 + uVar4) = cVar3;
            *(undefined1 *)(uVar10 + 1 + uVar4) = 0;
          }
          else {
            uVar9 = *param_1;
            FUN_14035f420(uVar10,uVar9,uVar4);
            *(char *)(uVar10 + uVar4) = cVar3;
            *(undefined1 *)(uVar10 + 1 + uVar4) = 0;
            if (uVar5 + 1 < 0x1000) {
              thunk_FUN_140327e20(uVar9);
            }
            else {
              if (0x1f < (uVar9 - *(longlong *)(uVar9 - 8)) - 8) goto LAB_14030afcf;
              thunk_FUN_140327e20(*(longlong *)(uVar9 - 8),uVar5 + 0x28);
            }
          }
          *param_1 = uVar10;
        }
      }
      pcVar11 = pcVar11 + 1;
    } while (pcVar11 != pcVar2);
  }
  return param_1;
}



## normalized_result.assembly

0x14030add0: MOV qword ptr [RSP + 0x18], RBX,0x14030add5: MOV qword ptr [RSP + 0x8], RCX,0x14030adda: PUSH RBP,0x14030addb: PUSH RSI,0x14030addc: PUSH RDI,0x14030addd: PUSH R12,0x14030addf: PUSH R13,0x14030ade1: PUSH R14,0x14030ade3: PUSH R15,0x14030ade5: SUB RSP, 0x30,0x14030ade9: MOV R12, qword ptr [RDX],0x14030adec: MOV RSI, RCX,0x14030adef: XOR EAX, EAX,0x14030adf1: MOV dword ptr [RSP + 0x20], EAX,0x14030adf5: XORPS XMM0, XMM0,0x14030adf8: MOVUPS xmmword ptr [RCX], XMM0,0x14030adfb: MOV qword ptr [RCX + 0x10], RAX,0x14030adff: MOV qword ptr [RCX + 0x18], 0xf,0x14030ae07: MOV byte ptr [RCX], AL,0x14030ae09: MOV dword ptr [RSP + 0x20], 0x1,0x14030ae11: MOV RBX, qword ptr [RDX + 0x8],0x14030ae15: MOV RDX, RBX,0x14030ae18: CALL 0x140081b00,0x14030ae1d: LEA RAX, [RBX + R12*0x1],0x14030ae21: MOV qword ptr [RSP + 0x78], RAX,0x14030ae26: TEST RBX, RBX,0x14030ae29: JZ 0x14030afb4,0x14030ae2f: MOV RDX, 0x7fffffffffffffff,0x14030ae39: NOP dword ptr [RAX],0x14030ae40: MOVZX R15D, byte ptr [R12],0x14030ae45: LEA EAX, [R15 + -0x30],0x14030ae49: CMP AL, 0x9,0x14030ae4b: JBE 0x14030ae59,0x14030ae4d: LEA EAX, [R15 + -0x41],0x14030ae51: CMP AL, 0x5,0x14030ae53: JA 0x14030afa6,0x14030ae59: MOV RBX, qword ptr [RSI + 0x10],0x14030ae5d: MOV R14, qword ptr [RSI + 0x18],0x14030ae61: CMP RBX, R14,0x14030ae64: JNC 0x14030ae96,0x14030ae66: LEA RAX, [RBX + 0x1],0x14030ae6a: MOV qword ptr [RSI + 0x10], RAX,0x14030ae6e: CMP R14, 0xf,0x14030ae72: JBE 0x14030ae85,0x14030ae74: MOV RAX, qword ptr [RSI],0x14030ae77: MOV byte ptr [RAX + RBX*0x1], R15B,0x14030ae7b: MOV byte ptr [RAX + RBX*0x1 + 0x1], 0x0,0x14030ae80: JMP 0x14030afa6,0x14030ae85: MOV RAX, RSI,0x14030ae88: MOV byte ptr [RAX + RBX*0x1], R15B,0x14030ae8c: MOV byte ptr [RAX + RBX*0x1 + 0x1], 0x0,0x14030ae91: JMP 0x14030afa6,0x14030ae96: MOV RAX, RDX,0x14030ae99: SUB RAX, RBX,0x14030ae9c: CMP RAX, 0x1,0x14030aea0: JC 0x14030afdc,0x14030aea6: LEA R13, [RBX + 0x1],0x14030aeaa: MOV RBP, R13,0x14030aead: OR RBP, 0xf,0x14030aeb1: CMP RBP, RDX,0x14030aeb4: JBE 0x14030aebf,0x14030aeb6: MOV RBP, RDX,0x14030aeb9: LEA RCX, [RDX + 0x28],0x14030aebd: JMP 0x14030af06,0x14030aebf: MOV RCX, R14,0x14030aec2: SHR RCX, 0x1,0x14030aec5: MOV RAX, RDX,0x14030aec8: SUB RAX, RCX,0x14030aecb: CMP R14, RAX,0x14030aece: JBE 0x14030aed9,0x14030aed0: MOV RBP, RDX,0x14030aed3: LEA RCX, [RDX + 0x28],0x14030aed7: JMP 0x14030af06,0x14030aed9: LEA RAX, [RCX + R14*0x1],0x14030aedd: CMP RBP, RAX,0x14030aee0: CMOVC RBP, RAX,0x14030aee4: LEA RAX, [RBP + 0x1],0x14030aee8: TEST RAX, RAX,0x14030aeeb: JNZ 0x14030aef1,0x14030aeed: XOR EDI, EDI,0x14030aeef: JMP 0x14030af2d,0x14030aef1: CMP RAX, 0x1000,0x14030aef7: JC 0x14030af22,0x14030aef9: LEA RCX, [RBP + 0x28],0x14030aefd: CMP RCX, RAX,0x14030af00: JBE 0x14030afd6,0x14030af06: CALL 0x1403272a0,0x14030af0b: TEST RAX, RAX,0x14030af0e: JZ 0x14030afcf,0x14030af14: LEA RDI, [RAX + 0x27],0x14030af18: AND RDI, -0x20,0x14030af1c: MOV qword ptr [RDI + -0x8], RAX,0x14030af20: JMP 0x14030af2d,0x14030af22: MOV RCX, RAX,0x14030af25: CALL 0x1403272a0,0x14030af2a: MOV RDI, RAX,0x14030af2d: MOV qword ptr [RSI + 0x10], R13,0x14030af31: MOV qword ptr [RSI + 0x18], RBP,0x14030af35: MOV R8, RBX,0x14030af38: MOV RCX, RDI,0x14030af3b: CMP R14, 0xf,0x14030af3f: JBE 0x14030af88,0x14030af41: MOV RBP, qword ptr [RSI],0x14030af44: MOV RDX, RBP,0x14030af47: CALL 0x14035f420,0x14030af4c: MOV byte ptr [RDI + RBX*0x1], R15B,0x14030af50: MOV byte ptr [RDI + RBX*0x1 + 0x1], 0x0,0x14030af55: LEA RDX, [R14 + 0x1],0x14030af59: CMP RDX, 0x1000,0x14030af60: JC 0x14030af7e,0x14030af62: MOV RCX, qword ptr [RBP + -0x8],0x14030af66: SUB RBP, RCX,0x14030af69: SUB RBP, 0x8,0x14030af6d: CMP RBP, 0x1f,0x14030af71: JA 0x14030afcf,0x14030af73: LEA RDX, [R14 + 0x28],0x14030af77: CALL 0x1403272f0,0x14030af7c: JMP 0x14030af99,0x14030af7e: MOV RCX, RBP,0x14030af81: CALL 0x1403272f0,0x14030af86: JMP 0x14030af99,0x14030af88: MOV RDX, RSI,0x14030af8b: CALL 0x14035f420,0x14030af90: MOV byte ptr [RDI + RBX*0x1], R15B,0x14030af94: MOV byte ptr [RDI + RBX*0x1 + 0x1], 0x0,0x14030af99: MOV RDX, 0x7fffffffffffffff,0x14030afa3: MOV qword ptr [RSI], RDI,0x14030afa6: INC R12,0x14030afa9: CMP R12, qword ptr [RSP + 0x78],0x14030afae: JNZ 0x14030ae40,0x14030afb4: MOV RAX, RSI,0x14030afb7: MOV RBX, qword ptr [RSP + 0x80],0x14030afbf: ADD RSP, 0x30,0x14030afc3: POP R15,0x14030afc5: POP R14,0x14030afc7: POP R13,0x14030afc9: POP R12,0x14030afcb: POP RDI,0x14030afcc: POP RSI,0x14030afcd: POP RBP,0x14030afce: RET,0x14030afcf: MOV ECX, 0x5,0x14030afd4: INT 0x29,0x14030afd6: CALL 0x140005500,0x14030afdc: CALL 0x140005640

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x14030b3a0 | FUN_14030b3a0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                | classification  | body            |
|-------------|---------------------|-----------------|-----------------|
| 0x140005500 | FUN_140005500       | [object Object] | [object Object] |
| 0x140005640 | FUN_140005640       | [object Object] | [object Object] |
| 0x140081b00 | FUN_140081b00       | [object Object] | [object Object] |
| 0x1403272a0 | FUN_1403272a0       | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20 | [object Object] | [object Object] |
| 0x14035f420 | FUN_14035f420       | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14030b6ea    | 0x14030add0    | [object Object]  | [object Object]  | [object Object] |
| 0x14030b91a    | 0x14030add0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6df4    | 0x14030add0    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14030add0    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030add5    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x14030adf1    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030ae09    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030ae18    | 0x140081b00              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae21    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x14030ae29    | 0x14030afb4              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae4b    | 0x14030ae59              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae53    | 0x14030afa6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae64    | 0x14030ae96              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae72    | 0x14030ae85              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae80    | 0x14030afa6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030ae91    | 0x14030afa6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aea0    | 0x14030afdc              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aeb4    | 0x14030aebf              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aebd    | 0x14030af06              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aece    | 0x14030aed9              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aed7    | 0x14030af06              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aeeb    | 0x14030aef1              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aeef    | 0x14030af2d              | [object Object]  | [object Object]  | [object Object] |
| 0x14030aef7    | 0x14030af22              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af00    | 0x14030afd6              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af06    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af0e    | 0x14030afcf              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af20    | 0x14030af2d              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af25    | 0x1403272a0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af3f    | 0x14030af88              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af47    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af60    | 0x14030af7e              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af71    | 0x14030afcf              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af77    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af7c    | 0x14030af99              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af81    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af86    | 0x14030af99              | [object Object]  | [object Object]  | [object Object] |
| 0x14030af8b    | 0x14035f420              | [object Object]  | [object Object]  | [object Object] |
| 0x14030afa9    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x14030afae    | 0x14030ae40              | [object Object]  | [object Object]  | [object Object] |
| 0x14030afb7    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x14030afd6    | 0x140005500              | [object Object]  | [object Object]  | [object Object] |
| 0x14030afdc    | 0x140005640              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value               | source_address |
|-------------|---------------------|----------------|
| 0x140005500 | FUN_140005500       | 0x14030afd6    |
| 0x140005640 | FUN_140005640       | 0x14030afdc    |
| 0x140081b00 | FUN_140081b00       | 0x14030ae18    |
| 0x14030ae40 | LAB_14030ae40       | 0x14030afae    |
| 0x14030ae59 | LAB_14030ae59       | 0x14030ae4b    |
| 0x14030ae85 | LAB_14030ae85       | 0x14030ae72    |
| 0x14030ae96 | LAB_14030ae96       | 0x14030ae64    |
| 0x14030aebf | LAB_14030aebf       | 0x14030aeb4    |
| 0x14030aed9 | LAB_14030aed9       | 0x14030aece    |
| 0x14030aef1 | LAB_14030aef1       | 0x14030aeeb    |
| 0x14030af06 | LAB_14030af06       | 0x14030aebd    |
| 0x14030af06 | LAB_14030af06       | 0x14030aed7    |
| 0x14030af22 | LAB_14030af22       | 0x14030aef7    |
| 0x14030af2d | LAB_14030af2d       | 0x14030aeef    |
| 0x14030af2d | LAB_14030af2d       | 0x14030af20    |
| 0x14030af7e | LAB_14030af7e       | 0x14030af60    |
| 0x14030af88 | LAB_14030af88       | 0x14030af3f    |
| 0x14030af99 | LAB_14030af99       | 0x14030af7c    |
| 0x14030af99 | LAB_14030af99       | 0x14030af86    |
| 0x14030afa6 | LAB_14030afa6       | 0x14030ae53    |
| 0x14030afa6 | LAB_14030afa6       | 0x14030ae80    |
| 0x14030afa6 | LAB_14030afa6       | 0x14030ae91    |
| 0x14030afb4 | LAB_14030afb4       | 0x14030ae29    |
| 0x14030afcf | LAB_14030afcf       | 0x14030af0e    |
| 0x14030afcf | LAB_14030afcf       | 0x14030af71    |
| 0x14030afd6 | LAB_14030afd6       | 0x14030af00    |
| 0x14030afdc | LAB_14030afdc       | 0x14030aea0    |
| 0x1403272a0 | FUN_1403272a0       | 0x14030af06    |
| 0x1403272a0 | FUN_1403272a0       | 0x14030af25    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x14030af77    |
| 0x1403272f0 | thunk_FUN_140327e20 | 0x14030af81    |
| 0x14035f420 | FUN_14035f420       | 0x14030af47    |
| 0x14035f420 | FUN_14035f420       | 0x14030af8b    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14030add0 | 0x14030ae2f | 0x14030ae2f,0x14030afb4 |
| 0x14030ae2f | 0x14030ae40 | 0x14030ae40             |
| 0x14030ae40 | 0x14030ae4d | 0x14030ae4d,0x14030ae59 |
| 0x14030ae4d | 0x14030ae59 | 0x14030ae59,0x14030afa6 |
| 0x14030ae59 | 0x14030ae66 | 0x14030ae66,0x14030ae96 |
| 0x14030ae66 | 0x14030ae74 | 0x14030ae74,0x14030ae85 |
| 0x14030ae74 | 0x14030ae85 | 0x14030afa6             |
| 0x14030ae85 | 0x14030ae96 | 0x14030afa6             |
| 0x14030ae96 | 0x14030aea6 | 0x14030aea6,0x14030afdc |
| 0x14030aea6 | 0x14030aeb6 | 0x14030aeb6,0x14030aebf |
| 0x14030aeb6 | 0x14030aebf | 0x14030af06             |
| 0x14030aebf | 0x14030aed0 | 0x14030aed0,0x14030aed9 |
| 0x14030aed0 | 0x14030aed9 | 0x14030af06             |
| 0x14030aed9 | 0x14030aeed | 0x14030aeed,0x14030aef1 |
| 0x14030aeed | 0x14030aef1 | 0x14030af2d             |
| 0x14030aef1 | 0x14030aef9 | 0x14030aef9,0x14030af22 |
| 0x14030aef9 | 0x14030af06 | 0x14030af06,0x14030afd6 |
| 0x14030af06 | 0x14030af14 | 0x14030af14,0x14030afcf |
| 0x14030af14 | 0x14030af22 | 0x14030af2d             |
| 0x14030af22 | 0x14030af2d | 0x14030af2d             |
| 0x14030af2d | 0x14030af41 | 0x14030af41,0x14030af88 |
| 0x14030af41 | 0x14030af62 | 0x14030af62,0x14030af7e |
| 0x14030af62 | 0x14030af73 | 0x14030af73,0x14030afcf |
| 0x14030af73 | 0x14030af7e | 0x14030af99             |
| 0x14030af7e | 0x14030af88 | 0x14030af99             |
| 0x14030af88 | 0x14030af99 | 0x14030af99             |
| 0x14030af99 | 0x14030afa6 | 0x14030afa6             |
| 0x14030afa6 | 0x14030afb4 | 0x14030ae40,0x14030afb4 |
| 0x14030afb4 | 0x14030afcf |                         |
| 0x14030afcf | 0x14030afd6 | 0x14030afd6             |
| 0x14030afd6 | 0x14030afdb |                         |
| 0x14030afdc | 0x14030afe1 |                         |

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

| ordinal | name    | data_type    | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|--------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | ulonglong *  | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
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

| id               | address     | sequence | opcode        | is_dead | block_membership | inputs                                                          | output          |
|------------------|-------------|----------|---------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x14030ade5#1407 | 0x14030ade5 | 1407     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ade9#36   | 0x14030ade9 | 36       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ade9#1421 | 0x14030ade9 | 1421     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030adf8#1180 | 0x14030adf8 | 1180     | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030adf8#1181 | 0x14030adf8 | 1181     | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030adf8#1408 | 0x14030adf8 | 1408     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030adfb#60   | 0x14030adfb | 60       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030adfb#1409 | 0x14030adfb | 1409     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030adff#63   | 0x14030adff | 63       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030adff#1410 | 0x14030adff | 1410     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae07#65   | 0x14030ae07 | 65       | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae07#1422 | 0x14030ae07 | 1422     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae09#68   | 0x14030ae09 | 68       | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae11#70   | 0x14030ae11 | 70       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae11#1411 | 0x14030ae11 | 1411     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae18#75   | 0x14030ae18 | 75       | CALL          | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae18#1255 | 0x14030ae18 | 1255     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae1d#77   | 0x14030ae1d | 77       | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae26#86   | 0x14030ae26 | 86       | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae29#91   | 0x14030ae29 | 91       | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ae40#93   | 0x14030ae40 | 93       | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae40#927  | 0x14030ae40 | 927      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae40#1272 | 0x14030ae40 | 1272     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae45#1140 | 0x14030ae45 | 1140     | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae4b#108  | 0x14030ae4b | 108      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae4b#109  | 0x14030ae4b | 109      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ae4b#1423 | 0x14030ae4b | 1423     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae4d#1141 | 0x14030ae4d | 1141     | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae53#123  | 0x14030ae53 | 123      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae53#124  | 0x14030ae53 | 124      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ae53#1424 | 0x14030ae53 | 1424     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae59#126  | 0x14030ae59 | 126      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae59#1412 | 0x14030ae59 | 1412     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae5d#129  | 0x14030ae5d | 129      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae5d#1413 | 0x14030ae5d | 1413     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae61#132  | 0x14030ae61 | 132      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae64#142  | 0x14030ae64 | 142      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ae66#143  | 0x14030ae66 | 143      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae6a#147  | 0x14030ae6a | 147      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae6a#1414 | 0x14030ae6a | 1414     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030ae72#158  | 0x14030ae72 | 158      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae72#159  | 0x14030ae72 | 159      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030ae74#160  | 0x14030ae74 | 160      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae77#163  | 0x14030ae77 | 163      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae77#165  | 0x14030ae77 | 165      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae77#1437 | 0x14030ae77 | 1437     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae7b#166  | 0x14030ae7b | 166      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae7b#168  | 0x14030ae7b | 168      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae7b#170  | 0x14030ae7b | 170      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae7b#1438 | 0x14030ae7b | 1438     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae80#171  | 0x14030ae80 | 171      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ae88#240  | 0x14030ae88 | 240      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae88#242  | 0x14030ae88 | 242      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae88#1433 | 0x14030ae88 | 1433     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae88#1434 | 0x14030ae88 | 1434     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae8c#245  | 0x14030ae8c | 245      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae8c#247  | 0x14030ae8c | 247      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030ae8c#1415 | 0x14030ae8c | 1415     | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030ae8c#1435 | 0x14030ae8c | 1435     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae8c#1436 | 0x14030ae8c | 1436     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030ae91#248  | 0x14030ae91 | 248      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030ae9c#260  | 0x14030ae9c | 260      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aea0#269  | 0x14030aea0 | 269      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aea6#270  | 0x14030aea6 | 270      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aead#275  | 0x14030aead | 275      | INT_OR        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aeb4#292  | 0x14030aeb4 | 292      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aeb4#293  | 0x14030aeb4 | 293      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aeb6#294  | 0x14030aeb6 | 294      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aeb9#295  | 0x14030aeb9 | 295      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aebd#297  | 0x14030aebd | 297      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030aec2#447  | 0x14030aec2 | 447      | INT_RIGHT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aec8#457  | 0x14030aec8 | 457      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aece#474  | 0x14030aece | 474      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aece#475  | 0x14030aece | 475      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aed0#476  | 0x14030aed0 | 476      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aed3#478  | 0x14030aed3 | 478      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aed7#479  | 0x14030aed7 | 479      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030aed9#481  | 0x14030aed9 | 481      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aedd#484  | 0x14030aedd | 484      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aee0#495  | 0x14030aee0 | 495      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aee0#1419 | 0x14030aee0 | 1419     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aee0#1420 | 0x14030aee0 | 1420     | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aee4#497  | 0x14030aee4 | 497      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aee4#888  | 0x14030aee4 | 888      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aee8#503  | 0x14030aee8 | 503      | INT_EQUAL     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aeeb#509  | 0x14030aeeb | 509      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aeed#902  | 0x14030aeed | 902      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030aeef#520  | 0x14030aeef | 520      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030aef1#521  | 0x14030aef1 | 521      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030aef7#530  | 0x14030aef7 | 530      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030aef9#531  | 0x14030aef9 | 531      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af00#543  | 0x14030af00 | 543      | INT_LESSEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af00#544  | 0x14030af00 | 544      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af06#300  | 0x14030af06 | 300      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af06#852  | 0x14030af06 | 852      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af06#890  | 0x14030af06 | 890      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af06#1258 | 0x14030af06 | 1258     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af0b#305  | 0x14030af0b | 305      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af0e#310  | 0x14030af0e | 310      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af14#311  | 0x14030af14 | 311      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af18#315  | 0x14030af18 | 315      | INT_AND       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af1c#322  | 0x14030af1c | 322      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af1c#324  | 0x14030af1c | 324      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af1c#1425 | 0x14030af1c | 1425     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af20#325  | 0x14030af20 | 325      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030af25#548  | 0x14030af25 | 548      | CALL          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af25#1257 | 0x14030af25 | 1257     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af2d#328  | 0x14030af2d | 328      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af2d#889  | 0x14030af2d | 889      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af2d#903  | 0x14030af2d | 903      | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af2d#1266 | 0x14030af2d | 1266     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af2d#1416 | 0x14030af2d | 1416     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af31#331  | 0x14030af31 | 331      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af31#1417 | 0x14030af31 | 1417     | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030af3f#344  | 0x14030af3f | 344      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af3f#345  | 0x14030af3f | 345      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af41#346  | 0x14030af41 | 346      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af47#351  | 0x14030af47 | 351      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030af47#1260 | 0x14030af47 | 1260     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af4c#353  | 0x14030af4c | 353      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af4c#355  | 0x14030af4c | 355      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af4c#1428 | 0x14030af4c | 1428     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af50#356  | 0x14030af50 | 356      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af50#358  | 0x14030af50 | 358      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af50#360  | 0x14030af50 | 360      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af50#1429 | 0x14030af50 | 1429     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af55#361  | 0x14030af55 | 361      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af59#364  | 0x14030af59 | 364      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af60#373  | 0x14030af60 | 373      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af62#374  | 0x14030af62 | 374      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af62#375  | 0x14030af62 | 375      | LOAD          | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af62#1430 | 0x14030af62 | 1430     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af66#379  | 0x14030af66 | 379      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af69#388  | 0x14030af69 | 388      | INT_SUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af71#405  | 0x14030af71 | 405      | INT_LESS      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af71#407  | 0x14030af71 | 407      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af73#408  | 0x14030af73 | 408      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af77#412  | 0x14030af77 | 412      | CALL          | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af77#1264 | 0x14030af77 | 1264     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af7c#413  | 0x14030af7c | 413      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030af81#428  | 0x14030af81 | 428      | CALL          | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030af81#1261 | 0x14030af81 | 1261     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af86#429  | 0x14030af86 | 429      | BRANCH        | true    | member           | [object Object]                                                 |                 |
| 0x14030af8b#433  | 0x14030af8b | 433      | CALL          | true    | member           | [object Object],[object Object],[object Object],[object Object] |                 |
| 0x14030af8b#1259 | 0x14030af8b | 1259     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af90#435  | 0x14030af90 | 435      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af90#437  | 0x14030af90 | 437      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af90#1426 | 0x14030af90 | 1426     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af94#438  | 0x14030af94 | 438      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af94#440  | 0x14030af94 | 440      | INT_ADD       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030af94#442  | 0x14030af94 | 442      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030af94#1427 | 0x14030af94 | 1427     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030af99#1267 | 0x14030af99 | 1267     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030afa3#416  | 0x14030afa3 | 416      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030afa6#173  | 0x14030afa6 | 173      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030afa6#1268 | 0x14030afa6 | 1268     | MULTIEQUAL    | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x14030afa9#187  | 0x14030afa9 | 187      | INT_NOTEQUAL  | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afae#193  | 0x14030afae | 193      | CBRANCH       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030afb4#194  | 0x14030afb4 | 194      | COPY          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030afce#237  | 0x14030afce | 237      | RETURN        | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030afcf#1269 | 0x14030afcf | 1269     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd4#418  | 0x14030afd4 | 418      | CALLOTHER     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd4#419  | 0x14030afd4 | 419      | CALLIND       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030afd4#1262 | 0x14030afd4 | 1262     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd4#1418 | 0x14030afd4 | 1418     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd4#1431 | 0x14030afd4 | 1431     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030afd6#420  | 0x14030afd6 | 420      | PTRADD        | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030afd6#421  | 0x14030afd6 | 421      | STORE         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030afd6#422  | 0x14030afd6 | 422      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x14030afd6#424  | 0x14030afd6 | 424      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x14030afd6#883  | 0x14030afd6 | 883      | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd6#1263 | 0x14030afd6 | 1263     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd6#1270 | 0x14030afd6 | 1270     | MULTIEQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd6#1406 | 0x14030afd6 | 1406     | PTRSUB        | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030afd6#1432 | 0x14030afd6 | 1432     | CAST          | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030afdc#552  | 0x14030afdc | 552      | CALL          | true    | member           | [object Object]                                                 |                 |
| 0x14030afdc#554  | 0x14030afdc | 554      | RETURN        | true    | member           | [object Object]                                                 |                 |
| 0x14030afdc#1256 | 0x14030afdc | 1256     | INDIRECT      | true    | member           | [object Object],[object Object]                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x14030ade9#36   | 0x14030ade9#1421 | 0           |
| 0x14030adf8#1408 | 0x14030adf8#1181 | 1           |
| 0x14030adfb#1409 | 0x14030adfb#60   | 1           |
| 0x14030adff#1410 | 0x14030adff#63   | 1           |
| 0x14030ae07#1422 | 0x14030ae07#65   | 1           |
| 0x14030ae11#1411 | 0x14030ae11#70   | 1           |
| 0x14030ae11#70   | 0x14030ae18#75   | 2           |
| 0x14030ae09#68   | 0x14030ae18#1255 | 0           |
| 0x14030ade9#1421 | 0x14030ae1d#77   | 0           |
| 0x14030ae11#70   | 0x14030ae1d#77   | 1           |
| 0x14030ae11#70   | 0x14030ae26#86   | 0           |
| 0x14030ae26#86   | 0x14030ae29#91   | 1           |
| 0x14030ae40#927  | 0x14030ae40#93   | 1           |
| 0x14030afa6#173  | 0x14030ae40#927  | 0           |
| 0x14030ade9#1421 | 0x14030ae40#927  | 1           |
| 0x14030afa6#1268 | 0x14030ae40#1272 | 0           |
| 0x14030ae18#1255 | 0x14030ae40#1272 | 1           |
| 0x14030ae40#93   | 0x14030ae45#1140 | 0           |
| 0x14030ae4b#1423 | 0x14030ae4b#108  | 0           |
| 0x14030ae4b#108  | 0x14030ae4b#109  | 1           |
| 0x14030ae45#1140 | 0x14030ae4b#1423 | 0           |
| 0x14030ae40#93   | 0x14030ae4d#1141 | 0           |
| 0x14030ae53#1424 | 0x14030ae53#123  | 0           |
| 0x14030ae53#123  | 0x14030ae53#124  | 1           |
| 0x14030ae4d#1141 | 0x14030ae53#1424 | 0           |
| 0x14030ae59#1412 | 0x14030ae59#126  | 1           |
| 0x14030ae5d#1413 | 0x14030ae5d#129  | 1           |
| 0x14030ae59#126  | 0x14030ae61#132  | 0           |
| 0x14030ae5d#129  | 0x14030ae61#132  | 1           |
| 0x14030ae61#132  | 0x14030ae64#142  | 1           |
| 0x14030ae59#126  | 0x14030ae66#143  | 0           |
| 0x14030ae6a#1414 | 0x14030ae6a#147  | 1           |
| 0x14030ae66#143  | 0x14030ae6a#147  | 2           |
| 0x14030ae5d#129  | 0x14030ae72#158  | 0           |
| 0x14030ae72#158  | 0x14030ae72#159  | 1           |
| 0x14030ae74#160  | 0x14030ae77#163  | 0           |
| 0x14030ae59#126  | 0x14030ae77#163  | 1           |
| 0x14030ae77#1437 | 0x14030ae77#165  | 1           |
| 0x14030ae40#93   | 0x14030ae77#165  | 2           |
| 0x14030ae77#163  | 0x14030ae77#1437 | 0           |
| 0x14030ae74#160  | 0x14030ae7b#166  | 0           |
| 0x14030ae7b#166  | 0x14030ae7b#168  | 0           |
| 0x14030ae59#126  | 0x14030ae7b#168  | 1           |
| 0x14030ae7b#1438 | 0x14030ae7b#170  | 1           |
| 0x14030ae7b#168  | 0x14030ae7b#1438 | 0           |
| 0x14030ae88#1433 | 0x14030ae88#240  | 0           |
| 0x14030ae59#126  | 0x14030ae88#240  | 1           |
| 0x14030ae88#1434 | 0x14030ae88#242  | 1           |
| 0x14030ae40#93   | 0x14030ae88#242  | 2           |
| 0x14030ae88#240  | 0x14030ae88#1434 | 0           |
| 0x14030ae8c#1435 | 0x14030ae8c#245  | 0           |
| 0x14030ae8c#1415 | 0x14030ae8c#245  | 1           |
| 0x14030ae8c#1436 | 0x14030ae8c#247  | 1           |
| 0x14030ae59#126  | 0x14030ae8c#1415 | 0           |
| 0x14030ae8c#245  | 0x14030ae8c#1436 | 0           |
| 0x14030ae59#126  | 0x14030ae9c#260  | 0           |
| 0x14030ae9c#260  | 0x14030aea0#269  | 1           |
| 0x14030ae59#126  | 0x14030aea6#270  | 0           |
| 0x14030aea6#270  | 0x14030aead#275  | 0           |
| 0x14030aead#275  | 0x14030aeb4#292  | 1           |
| 0x14030aeb4#292  | 0x14030aeb4#293  | 1           |
| 0x14030ae5d#129  | 0x14030aec2#447  | 0           |
| 0x14030aec2#447  | 0x14030aec8#457  | 1           |
| 0x14030aec8#457  | 0x14030aece#474  | 0           |
| 0x14030ae5d#129  | 0x14030aece#474  | 1           |
| 0x14030aece#474  | 0x14030aece#475  | 1           |
| 0x14030aec2#447  | 0x14030aed9#481  | 0           |
| 0x14030ae5d#129  | 0x14030aed9#481  | 1           |
| 0x14030aead#275  | 0x14030aedd#484  | 0           |
| 0x14030aed9#481  | 0x14030aedd#484  | 1           |
| 0x14030aedd#484  | 0x14030aee0#495  | 1           |
| 0x14030aead#275  | 0x14030aee0#1419 | 0           |
| 0x14030aed9#481  | 0x14030aee0#1420 | 0           |
| 0x14030aee4#888  | 0x14030aee4#497  | 0           |
| 0x14030aee0#1419 | 0x14030aee4#888  | 0           |
| 0x14030aee0#1420 | 0x14030aee4#888  | 1           |
| 0x14030aee4#497  | 0x14030aee8#503  | 0           |
| 0x14030aee8#503  | 0x14030aeeb#509  | 1           |
| 0x14030aee4#497  | 0x14030aef1#521  | 1           |
| 0x14030aef1#521  | 0x14030aef7#530  | 1           |
| 0x14030aee4#888  | 0x14030aef9#531  | 0           |
| 0x14030aef9#531  | 0x14030af00#543  | 0           |
| 0x14030aee4#497  | 0x14030af00#543  | 1           |
| 0x14030af00#543  | 0x14030af00#544  | 1           |
| 0x14030af06#852  | 0x14030af06#300  | 1           |
| 0x14030aeb9#295  | 0x14030af06#852  | 0           |
| 0x14030aed3#478  | 0x14030af06#852  | 1           |
| 0x14030aef9#531  | 0x14030af06#852  | 2           |
| 0x14030aeb6#294  | 0x14030af06#890  | 0           |
| 0x14030aed0#476  | 0x14030af06#890  | 1           |
| 0x14030aee4#888  | 0x14030af06#890  | 2           |
| 0x14030ae40#1272 | 0x14030af06#1258 | 0           |
| 0x14030af06#300  | 0x14030af0b#305  | 0           |
| 0x14030af0b#305  | 0x14030af0e#310  | 1           |
| 0x14030af06#300  | 0x14030af14#311  | 0           |
| 0x14030af14#311  | 0x14030af18#315  | 0           |
| 0x14030af18#315  | 0x14030af1c#322  | 0           |
| 0x14030af1c#1425 | 0x14030af1c#324  | 1           |
| 0x14030af06#300  | 0x14030af1c#324  | 2           |
| 0x14030af1c#322  | 0x14030af1c#1425 | 0           |
| 0x14030aee4#497  | 0x14030af25#548  | 1           |
| 0x14030ae40#1272 | 0x14030af25#1257 | 0           |
| 0x14030af2d#1416 | 0x14030af2d#328  | 1           |
| 0x14030aea6#270  | 0x14030af2d#328  | 2           |
| 0x14030af06#890  | 0x14030af2d#889  | 0           |
| 0x14030aee4#888  | 0x14030af2d#889  | 1           |
| 0x14030aee4#888  | 0x14030af2d#889  | 2           |
| 0x14030af18#315  | 0x14030af2d#903  | 0           |
| 0x14030aeed#902  | 0x14030af2d#903  | 1           |
| 0x14030af25#548  | 0x14030af2d#903  | 2           |
| 0x14030af06#1258 | 0x14030af2d#1266 | 0           |
| 0x14030ae40#1272 | 0x14030af2d#1266 | 1           |
| 0x14030af25#1257 | 0x14030af2d#1266 | 2           |
| 0x14030af31#1417 | 0x14030af31#331  | 1           |
| 0x14030af2d#889  | 0x14030af31#331  | 2           |
| 0x14030ae5d#129  | 0x14030af3f#344  | 0           |
| 0x14030af3f#344  | 0x14030af3f#345  | 1           |
| 0x14030af2d#903  | 0x14030af47#351  | 1           |
| 0x14030af41#346  | 0x14030af47#351  | 2           |
| 0x14030ae59#126  | 0x14030af47#351  | 3           |
| 0x14030af2d#1266 | 0x14030af47#1260 | 0           |
| 0x14030af2d#903  | 0x14030af4c#353  | 0           |
| 0x14030ae59#126  | 0x14030af4c#353  | 1           |
| 0x14030af4c#1428 | 0x14030af4c#355  | 1           |
| 0x14030ae40#93   | 0x14030af4c#355  | 2           |
| 0x14030af4c#353  | 0x14030af4c#1428 | 0           |
| 0x14030af2d#903  | 0x14030af50#356  | 0           |
| 0x14030af50#356  | 0x14030af50#358  | 0           |
| 0x14030ae59#126  | 0x14030af50#358  | 1           |
| 0x14030af50#1429 | 0x14030af50#360  | 1           |
| 0x14030af50#358  | 0x14030af50#1429 | 0           |
| 0x14030ae5d#129  | 0x14030af55#361  | 0           |
| 0x14030af55#361  | 0x14030af59#364  | 0           |
| 0x14030af59#364  | 0x14030af60#373  | 1           |
| 0x14030af41#346  | 0x14030af62#374  | 0           |
| 0x14030af62#1430 | 0x14030af62#375  | 1           |
| 0x14030af62#374  | 0x14030af62#1430 | 0           |
| 0x14030af41#346  | 0x14030af66#379  | 0           |
| 0x14030af62#375  | 0x14030af66#379  | 1           |
| 0x14030af66#379  | 0x14030af69#388  | 0           |
| 0x14030af69#388  | 0x14030af71#405  | 1           |
| 0x14030af71#405  | 0x14030af71#407  | 1           |
| 0x14030ae5d#129  | 0x14030af73#408  | 0           |
| 0x14030af62#375  | 0x14030af77#412  | 1           |
| 0x14030af73#408  | 0x14030af77#412  | 2           |
| 0x14030af47#1260 | 0x14030af77#1264 | 0           |
| 0x14030af41#346  | 0x14030af81#428  | 1           |
| 0x14030af47#1260 | 0x14030af81#1261 | 0           |
| 0x14030af2d#903  | 0x14030af8b#433  | 1           |
| 0x14030ae59#126  | 0x14030af8b#433  | 3           |
| 0x14030af2d#1266 | 0x14030af8b#1259 | 0           |
| 0x14030af2d#903  | 0x14030af90#435  | 0           |
| 0x14030ae59#126  | 0x14030af90#435  | 1           |
| 0x14030af90#1426 | 0x14030af90#437  | 1           |
| 0x14030ae40#93   | 0x14030af90#437  | 2           |
| 0x14030af90#435  | 0x14030af90#1426 | 0           |
| 0x14030af2d#903  | 0x14030af94#438  | 0           |
| 0x14030af94#438  | 0x14030af94#440  | 0           |
| 0x14030ae59#126  | 0x14030af94#440  | 1           |
| 0x14030af94#1427 | 0x14030af94#442  | 1           |
| 0x14030af94#440  | 0x14030af94#1427 | 0           |
| 0x14030af77#1264 | 0x14030af99#1267 | 0           |
| 0x14030af81#1261 | 0x14030af99#1267 | 1           |
| 0x14030af8b#1259 | 0x14030af99#1267 | 2           |
| 0x14030af2d#903  | 0x14030afa3#416  | 2           |
| 0x14030ae40#927  | 0x14030afa6#173  | 0           |
| 0x14030ae40#1272 | 0x14030afa6#1268 | 0           |
| 0x14030ae40#1272 | 0x14030afa6#1268 | 1           |
| 0x14030ae40#1272 | 0x14030afa6#1268 | 2           |
| 0x14030af99#1267 | 0x14030afa6#1268 | 3           |
| 0x14030afa6#173  | 0x14030afa9#187  | 0           |
| 0x14030ae1d#77   | 0x14030afa9#187  | 1           |
| 0x14030afa9#187  | 0x14030afae#193  | 1           |
| 0x14030afb4#194  | 0x14030afce#237  | 1           |
| 0x14030af06#1258 | 0x14030afcf#1269 | 0           |
| 0x14030af47#1260 | 0x14030afcf#1269 | 1           |
| 0x14030afd4#1431 | 0x14030afd4#419  | 0           |
| 0x14030afcf#1269 | 0x14030afd4#1262 | 0           |
| 0x14030afd4#418  | 0x14030afd4#1431 | 0           |
| 0x14030afd6#883  | 0x14030afd6#420  | 0           |
| 0x14030afd6#1432 | 0x14030afd6#421  | 1           |
| 0x14030afd6#1406 | 0x14030afd6#421  | 2           |
| 0x14030afd4#1418 | 0x14030afd6#883  | 0           |
| 0x14030ade5#1407 | 0x14030afd6#883  | 1           |
| 0x14030afd6#1270 | 0x14030afd6#1263 | 0           |
| 0x14030afd4#1262 | 0x14030afd6#1270 | 0           |
| 0x14030ae40#1272 | 0x14030afd6#1270 | 1           |
| 0x14030afd6#420  | 0x14030afd6#1432 | 0           |
| 0x14030ae40#1272 | 0x14030afdc#1256 | 0           |

## normalized_result.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x14030ade9#36   | memory_read        | 1             |             |
| 0x14030adf8#1180 | memory_write       | 1             | 2           |
| 0x14030adf8#1181 | memory_write       | 1             | 2           |
| 0x14030adfb#60   | memory_write       | 1             | 2           |
| 0x14030adff#63   | memory_write       | 1             | 2           |
| 0x14030ae07#65   | memory_write       | 1             | 2           |
| 0x14030ae11#70   | memory_read        | 1             |             |
| 0x14030ae18#75   | direct_call        | 0             |             |
| 0x14030ae29#91   | conditional_branch |               | 1           |
| 0x14030ae40#93   | memory_read        | 1             |             |
| 0x14030ae4b#109  | conditional_branch |               | 1           |
| 0x14030ae53#124  | conditional_branch |               | 1           |
| 0x14030ae59#126  | memory_read        | 1             |             |
| 0x14030ae5d#129  | memory_read        | 1             |             |
| 0x14030ae64#142  | conditional_branch |               | 1           |
| 0x14030ae6a#147  | memory_write       | 1             | 2           |
| 0x14030ae72#159  | conditional_branch |               | 1           |
| 0x14030ae74#160  | memory_read        | 1             |             |
| 0x14030ae77#165  | memory_write       | 1             | 2           |
| 0x14030ae7b#170  | memory_write       | 1             | 2           |
| 0x14030ae88#242  | memory_write       | 1             | 2           |
| 0x14030ae8c#247  | memory_write       | 1             | 2           |
| 0x14030aea0#269  | conditional_branch |               | 1           |
| 0x14030aeb4#293  | conditional_branch |               | 1           |
| 0x14030aece#475  | conditional_branch |               | 1           |
| 0x14030aee0#495  | conditional_branch |               | 1           |
| 0x14030aeeb#509  | conditional_branch |               | 1           |
| 0x14030aef7#530  | conditional_branch |               | 1           |
| 0x14030af00#544  | conditional_branch |               | 1           |
| 0x14030af06#300  | direct_call        | 0             |             |
| 0x14030af0e#310  | conditional_branch |               | 1           |
| 0x14030af1c#324  | memory_write       | 1             | 2           |
| 0x14030af25#548  | direct_call        | 0             |             |
| 0x14030af2d#328  | memory_write       | 1             | 2           |
| 0x14030af31#331  | memory_write       | 1             | 2           |
| 0x14030af3f#345  | conditional_branch |               | 1           |
| 0x14030af41#346  | memory_read        | 1             |             |
| 0x14030af47#351  | direct_call        | 0             |             |
| 0x14030af4c#355  | memory_write       | 1             | 2           |
| 0x14030af50#360  | memory_write       | 1             | 2           |
| 0x14030af60#373  | conditional_branch |               | 1           |
| 0x14030af62#375  | memory_read        | 1             |             |
| 0x14030af71#407  | conditional_branch |               | 1           |
| 0x14030af77#412  | direct_call        | 0             |             |
| 0x14030af81#428  | direct_call        | 0             |             |
| 0x14030af8b#433  | direct_call        | 0             |             |
| 0x14030af90#437  | memory_write       | 1             | 2           |
| 0x14030af94#442  | memory_write       | 1             | 2           |
| 0x14030afa3#416  | memory_write       | 1             | 2           |
| 0x14030afae#193  | conditional_branch |               | 1           |
| 0x14030afd4#419  | indirect_call      | 0             |             |
| 0x14030afd6#421  | memory_write       | 1             | 2           |
| 0x14030afd6#422  | direct_call        | 0             |             |
| 0x14030afdc#552  | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /ulonglong *  |
| 1       | param_2 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 1       | 0x14030ade9#36   | 1           |
| 0       | 0x14030adf8#1180 | 1           |
| 0       | 0x14030adf8#1408 | 0           |
| 0       | 0x14030adfb#1409 | 0           |
| 0       | 0x14030adff#1410 | 0           |
| 0       | 0x14030ae07#1422 | 0           |
| 1       | 0x14030ae11#1411 | 0           |
| 0       | 0x14030ae59#1412 | 0           |
| 0       | 0x14030ae5d#1413 | 0           |
| 0       | 0x14030ae6a#1414 | 0           |
| 0       | 0x14030ae74#160  | 1           |
| 0       | 0x14030ae88#1433 | 0           |
| 0       | 0x14030ae8c#1435 | 0           |
| 0       | 0x14030af2d#1416 | 0           |
| 0       | 0x14030af31#1417 | 0           |
| 0       | 0x14030af41#346  | 1           |
| 0       | 0x14030af8b#433  | 2           |
| 0       | 0x14030afa3#416  | 1           |
| 0       | 0x14030afb4#194  | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x14030afd6 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14030afdc to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x14030afd6 to 0x140005500 FUN_140005500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x14030afdc to 0x140005640 FUN_140005640 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

