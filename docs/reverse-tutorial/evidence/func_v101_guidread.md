## evidence_id

ev_f108232a2caab7cc0be4ecb95132370c6ae452bee32c4520b9e7530482e8700f

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
| procedure | 0x1401f4a26 |

## raw_result.value.procedure.address

0x1401f4980

## raw_result.value.procedure.name

FUN_1401f4980

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
| 0x1401f4980 | 0x1401f4c7e |

## raw_result.value.procedure.body.total_bytes

767

## raw_result.value.procedure.body.span_bytes

767

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f4980()

## raw_result.value.procedure.locals

| description                                 | provenance               |
|---------------------------------------------|--------------------------|
| undefined local_128 @ Stack[-0x128]:1       | ghidra-function-database |
| undefined8 local_138 @ Stack[-0x138]:8      | ghidra-function-database |
| undefined8 local_140 @ Stack[-0x140]:8      | ghidra-function-database |
| undefined8 local_150 @ Stack[-0x150]:8      | ghidra-function-database |
| undefined8 local_158 @ Stack[-0x158]:8      | ghidra-function-database |
| undefined8 local_160 @ Stack[-0x160]:8      | ghidra-function-database |
| undefined1[16] local_170 @ Stack[-0x170]:16 | ghidra-function-database |
| undefined8 local_180 @ Stack[-0x180]:8      | ghidra-function-database |
| undefined8 local_188 @ Stack[-0x188]:8      | ghidra-function-database |
| undefined8 local_190 @ Stack[-0x190]:8      | ghidra-function-database |
| undefined4 local_194 @ Stack[-0x194]:4      | ghidra-function-database |
| undefined4 local_198 @ Stack[-0x198]:4      | ghidra-function-database |
| undefined8 local_1a0 @ Stack[-0x1a0]:8      | ghidra-function-database |
| undefined8 local_1a8 @ Stack[-0x1a8]:8      | ghidra-function-database |
| undefined local_20 @ Stack[-0x20]:1         | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8        | ghidra-function-database |
| undefined local_c8 @ Stack[-0xc8]:1         | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8      | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8      | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8        | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401f4980(undefined8 *param_1)

{
  code *pcVar1;
  LSTATUS LVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 ***pppuVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uStackY_1d0;
  undefined1 auStackY_1c8 [8];
  undefined1 auStackY_1c0 [24];
  DWORD local_198;
  DWORD local_194;
  HKEY local_190;
  undefined8 ***local_188;
  undefined8 *local_180;
  undefined8 ***local_170;
  undefined8 uStack_168;
  longlong local_160;
  ulonglong local_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 local_140;
  ulonglong local_138;
  BYTE local_128 [256];
  ulonglong local_28;
  
  puVar8 = auStackY_1c8;
  local_28 = DAT_1404c7ac0 ^ (ulonglong)auStackY_1c8;
  local_190 = (HKEY)0x0;
  LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000002,L"SOFTWARE\\Microsoft\\Cryptography",0,0x101,
                        &local_190);
  puVar9 = auStackY_1c8;
  if (LVar2 == 0) {
    FUN_14035fad0(local_128,0,0x100);
    local_194 = 0x100;
    local_198 = 0;
    LVar2 = RegQueryValueExW(local_190,L"MachineGuid",(LPDWORD)0x0,&local_198,local_128,&local_194);
    RegCloseKey(local_190);
    puVar9 = auStackY_1c8;
    if (((LVar2 == 0) && (puVar9 = auStackY_1c8, local_198 == 1)) &&
       (puVar9 = auStackY_1c8, local_194 != 0)) {
      local_170 = (undefined8 ****)0x0;
      uStack_168 = 0;
      local_160 = 0;
      local_158 = 0;
      FUN_1400017a0(&local_170,local_128,local_194 >> 1);
      ppppuVar6 = &local_170;
      if (7 < local_158) {
        ppppuVar6 = (undefined8 ****)local_170;
      }
      if (local_160 == 0) {
LAB_1401f4af3:
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0xf;
        *(undefined1 *)param_1 = 0;
        puVar9 = auStackY_1c8;
        if (local_158 < 8) goto LAB_1401f4c55;
        uVar7 = local_158 * 2 + 2;
        ppppuVar6 = (undefined8 ****)local_170;
        if (0xfff < uVar7) {
          ppppuVar6 = (undefined8 ****)local_170[-1];
          puVar8 = auStackY_1c8;
          if (0x1f < (ulonglong)((longlong)local_170 + (-8 - (longlong)ppppuVar6)))
          goto LAB_1401f4c39;
          uVar7 = local_158 * 2 + 0x29;
        }
      }
      else {
        lVar4 = (longlong)ppppuVar6 + local_160 * 2;
        lVar3 = thunk_FUN_14031f6e0(ppppuVar6,lVar4,0);
        if ((lVar3 != lVar4) && (lVar4 = lVar3 - (longlong)ppppuVar6 >> 1, lVar4 != -1)) {
          FUN_140029140(&local_170,lVar4,0);
        }
        if (local_160 == 0) goto LAB_1401f4af3;
        local_188 = &local_170;
        if (7 < local_158) {
          local_188 = local_170;
        }
        local_180 = (undefined8 *)local_160;
        pppuVar5 = (undefined8 ***)FUN_140028ed0(&local_150,&local_188);
        local_188 = pppuVar5;
        if ((undefined8 **)0xf < pppuVar5[3]) {
          local_188 = (undefined8 ***)*pppuVar5;
        }
        local_180 = pppuVar5[2];
        FUN_14030b220(param_1,&local_188);
        if (0xf < local_138) {
          uVar7 = local_138 + 1;
          lVar3 = CONCAT71(uStack_14f,local_150);
          lVar4 = lVar3;
          if (uVar7 < 0x1000) {
LAB_1401f4bd4:
            thunk_FUN_140327e20(lVar4,uVar7);
            goto LAB_1401f4bd9;
          }
          lVar4 = *(longlong *)(lVar3 + -8);
          if ((lVar3 - lVar4) - 8U < 0x20) {
            uVar7 = local_138 + 0x28;
            goto LAB_1401f4bd4;
          }
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar8 = auStackY_1c0;
LAB_1401f4c39:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar9 = puVar8 + 8;
          goto LAB_1401f4c40;
        }
LAB_1401f4bd9:
        local_140 = 0;
        local_138 = 0xf;
        local_150 = 0;
        puVar9 = auStackY_1c8;
        if (local_158 < 8) goto LAB_1401f4c55;
        uVar7 = local_158 * 2 + 2;
        ppppuVar6 = (undefined8 ****)local_170;
        if (0xfff < uVar7) {
          if ((ulonglong)((longlong)local_170 + (-8 - (longlong)local_170[-1])) < 0x20) {
            thunk_FUN_140327e20(local_170[-1],local_158 * 2 + 0x29);
            puVar9 = auStackY_1c8;
            goto LAB_1401f4c55;
          }
          goto LAB_1401f4c39;
        }
      }
      thunk_FUN_140327e20(ppppuVar6,uVar7);
      puVar9 = auStackY_1c8;
      goto LAB_1401f4c55;
    }
  }
LAB_1401f4c40:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
LAB_1401f4c55:
  *(undefined8 *)(puVar9 + -8) = 0x1401f4c67;
  return param_1;
}



## raw_result.value.assembly

0x1401f4980: MOV qword ptr [RSP + 0x10], RBX,0x1401f4985: MOV qword ptr [RSP + 0x18], RSI,0x1401f498a: PUSH RBP,0x1401f498b: PUSH RDI,0x1401f498c: PUSH R14,0x1401f498e: LEA RBP, [RSP + -0xb0],0x1401f4996: SUB RSP, 0x1b0,0x1401f499d: MOV RAX, qword ptr [0x1404c7ac0],0x1401f49a4: XOR RAX, RSP,0x1401f49a7: MOV qword ptr [RBP + 0xa0], RAX,0x1401f49ae: MOV RDI, RCX,0x1401f49b1: MOV qword ptr [RSP + 0x38], RCX,0x1401f49b6: XOR R14D, R14D,0x1401f49b9: MOV qword ptr [RSP + 0x38], R14,0x1401f49be: LEA RAX, [RSP + 0x38],0x1401f49c3: MOV qword ptr [RSP + 0x20], RAX,0x1401f49c8: MOV R9D, 0x101,0x1401f49ce: XOR R8D, R8D,0x1401f49d1: LEA RDX, [0x14043c1c0],0x1401f49d8: MOV RCX, -0x7ffffffe,0x1401f49df: CALL qword ptr [0x14037a038],0x1401f49e5: TEST EAX, EAX,0x1401f49e7: JNZ 0x1401f4c40,0x1401f49ed: XOR EDX, EDX,0x1401f49ef: MOV R8D, 0x100,0x1401f49f5: LEA RCX, [RBP + -0x60],0x1401f49f9: CALL 0x14035fad0,0x1401f49fe: MOV dword ptr [RSP + 0x34], 0x100,0x1401f4a06: MOV dword ptr [RSP + 0x30], R14D,0x1401f4a0b: LEA RAX, [RSP + 0x34],0x1401f4a10: MOV qword ptr [RSP + 0x28], RAX,0x1401f4a15: LEA RAX, [RBP + -0x60],0x1401f4a19: MOV qword ptr [RSP + 0x20], RAX,0x1401f4a1e: LEA R9, [RSP + 0x30],0x1401f4a23: XOR R8D, R8D,0x1401f4a26: LEA RDX, [0x14040c848],0x1401f4a2d: MOV RCX, qword ptr [RSP + 0x38],0x1401f4a32: CALL qword ptr [0x14037a040],0x1401f4a38: MOV EBX, EAX,0x1401f4a3a: MOV RCX, qword ptr [RSP + 0x38],0x1401f4a3f: CALL qword ptr [0x14037a030],0x1401f4a45: TEST EBX, EBX,0x1401f4a47: JNZ 0x1401f4c40,0x1401f4a4d: CMP dword ptr [RSP + 0x30], 0x1,0x1401f4a52: JNZ 0x1401f4c40,0x1401f4a58: MOV EAX, dword ptr [RSP + 0x34],0x1401f4a5c: TEST EAX, EAX,0x1401f4a5e: JZ 0x1401f4c40,0x1401f4a64: XORPS XMM0, XMM0,0x1401f4a67: MOVUPS xmmword ptr [RSP + 0x58], XMM0,0x1401f4a6c: MOV qword ptr [RSP + 0x68], R14,0x1401f4a71: MOV qword ptr [RSP + 0x70], R14,0x1401f4a76: MOV R8D, EAX,0x1401f4a79: SHR R8, 0x1,0x1401f4a7c: LEA RDX, [RBP + -0x60],0x1401f4a80: LEA RCX, [RSP + 0x58],0x1401f4a85: CALL 0x1400017a0,0x1401f4a8a: NOP,0x1401f4a8b: MOV R8, qword ptr [RSP + 0x68],0x1401f4a90: LEA RSI, [RSP + 0x58],0x1401f4a95: MOV RCX, qword ptr [RSP + 0x58],0x1401f4a9a: MOV RDX, qword ptr [RSP + 0x70],0x1401f4a9f: CMP RDX, 0x7,0x1401f4aa3: CMOVA RSI, RCX,0x1401f4aa7: TEST R8, R8,0x1401f4aaa: JZ 0x1401f4af3,0x1401f4aac: LEA RBX, [RSI + R8*0x2],0x1401f4ab0: XOR R8D, R8D,0x1401f4ab3: MOV RDX, RBX,0x1401f4ab6: MOV RCX, RSI,0x1401f4ab9: CALL 0x140323ed0,0x1401f4abe: CMP RAX, RBX,0x1401f4ac1: JZ 0x1401f4adf,0x1401f4ac3: SUB RAX, RSI,0x1401f4ac6: SAR RAX, 0x1,0x1401f4ac9: CMP RAX, -0x1,0x1401f4acd: JZ 0x1401f4adf,0x1401f4acf: XOR R8D, R8D,0x1401f4ad2: MOV RDX, RAX,0x1401f4ad5: LEA RCX, [RSP + 0x58],0x1401f4ada: CALL 0x140029140,0x1401f4adf: MOV RCX, qword ptr [RSP + 0x58],0x1401f4ae4: MOV R8, qword ptr [RSP + 0x68],0x1401f4ae9: MOV RDX, qword ptr [RSP + 0x70],0x1401f4aee: TEST R8, R8,0x1401f4af1: JNZ 0x1401f4b4f,0x1401f4af3: XORPS XMM0, XMM0,0x1401f4af6: MOVUPS xmmword ptr [RDI], XMM0,0x1401f4af9: MOV qword ptr [RDI + 0x10], R14,0x1401f4afd: MOV qword ptr [RDI + 0x18], 0xf,0x1401f4b05: MOV byte ptr [RDI], 0x0,0x1401f4b08: CMP RDX, 0x7,0x1401f4b0c: JBE 0x1401f4c55,0x1401f4b12: LEA RAX, [0x2 + RDX*0x2],0x1401f4b1a: CMP RAX, 0x1000,0x1401f4b20: JC 0x1401f4b42,0x1401f4b22: MOV R8, qword ptr [RCX + -0x8],0x1401f4b26: SUB RCX, R8,0x1401f4b29: SUB RCX, 0x8,0x1401f4b2d: CMP RCX, 0x1f,0x1401f4b31: JA 0x1401f4c39,0x1401f4b37: LEA RAX, [0x29 + RDX*0x2],0x1401f4b3f: MOV RCX, R8,0x1401f4b42: MOV RDX, RAX,0x1401f4b45: CALL 0x1403272f0,0x1401f4b4a: JMP 0x1401f4c55,0x1401f4b4f: LEA RAX, [RSP + 0x58],0x1401f4b54: CMP RDX, 0x7,0x1401f4b58: CMOVA RAX, RCX,0x1401f4b5c: MOV qword ptr [RSP + 0x40], RAX,0x1401f4b61: MOV qword ptr [RSP + 0x48], R8,0x1401f4b66: LEA RDX, [RSP + 0x40],0x1401f4b6b: LEA RCX, [RSP + 0x78],0x1401f4b70: CALL 0x140028ed0,0x1401f4b75: NOP,0x1401f4b76: CMP qword ptr [RAX + 0x18], 0xf,0x1401f4b7b: JBE 0x1401f4b82,0x1401f4b7d: MOV RCX, qword ptr [RAX],0x1401f4b80: JMP 0x1401f4b85,0x1401f4b82: MOV RCX, RAX,0x1401f4b85: MOV qword ptr [RSP + 0x40], RCX,0x1401f4b8a: MOV RAX, qword ptr [RAX + 0x10],0x1401f4b8e: MOV qword ptr [RSP + 0x48], RAX,0x1401f4b93: LEA RDX, [RSP + 0x40],0x1401f4b98: MOV RCX, RDI,0x1401f4b9b: CALL 0x14030b220,0x1401f4ba0: NOP,0x1401f4ba1: MOV RDX, qword ptr [RBP + -0x70],0x1401f4ba5: CMP RDX, 0xf,0x1401f4ba9: JBE 0x1401f4bd9,0x1401f4bab: INC RDX,0x1401f4bae: MOV RCX, qword ptr [RSP + 0x78],0x1401f4bb3: CMP RDX, 0x1000,0x1401f4bba: JC 0x1401f4bd4,0x1401f4bbc: MOV RAX, qword ptr [RCX + -0x8],0x1401f4bc0: SUB RCX, RAX,0x1401f4bc3: SUB RCX, 0x8,0x1401f4bc7: CMP RCX, 0x1f,0x1401f4bcb: JA 0x1401f4c32,0x1401f4bcd: ADD RDX, 0x27,0x1401f4bd1: MOV RCX, RAX,0x1401f4bd4: CALL 0x1403272f0,0x1401f4bd9: MOV qword ptr [RBP + -0x78], R14,0x1401f4bdd: MOV qword ptr [RBP + -0x70], 0xf,0x1401f4be5: MOV byte ptr [RSP + 0x78], 0x0,0x1401f4bea: MOV RAX, qword ptr [RSP + 0x70],0x1401f4bef: CMP RAX, 0x7,0x1401f4bf3: JBE 0x1401f4c55,0x1401f4bf5: LEA RDX, [0x2 + RAX*0x2],0x1401f4bfd: MOV RCX, qword ptr [RSP + 0x58],0x1401f4c02: CMP RDX, 0x1000,0x1401f4c09: JC 0x1401f4b45,0x1401f4c0f: MOV R8, qword ptr [RCX + -0x8],0x1401f4c13: SUB RCX, R8,0x1401f4c16: SUB RCX, 0x8,0x1401f4c1a: CMP RCX, 0x1f,0x1401f4c1e: JA 0x1401f4c39,0x1401f4c20: LEA RDX, [0x29 + RAX*0x2],0x1401f4c28: MOV RCX, R8,0x1401f4c2b: CALL 0x1403272f0,0x1401f4c30: JMP 0x1401f4c55,0x1401f4c32: MOV ECX, 0x5,0x1401f4c37: INT 0x29,0x1401f4c39: MOV ECX, 0x5,0x1401f4c3e: INT 0x29,0x1401f4c40: XORPS XMM0, XMM0,0x1401f4c43: MOVUPS xmmword ptr [RDI], XMM0,0x1401f4c46: MOV qword ptr [RDI + 0x10], R14,0x1401f4c4a: MOV qword ptr [RDI + 0x18], 0xf,0x1401f4c52: MOV byte ptr [RDI], R14B,0x1401f4c55: MOV RAX, RDI,0x1401f4c58: MOV RCX, qword ptr [RBP + 0xa0],0x1401f4c5f: XOR RCX, RSP,0x1401f4c62: CALL 0x140327740,0x1401f4c67: LEA R11, [RSP + 0x1b0],0x1401f4c6f: MOV RBX, qword ptr [R11 + 0x28],0x1401f4c73: MOV RSI, qword ptr [R11 + 0x30],0x1401f4c77: MOV RSP, R11,0x1401f4c7a: POP R14,0x1401f4c7c: POP RDI,0x1401f4c7d: POP RBP,0x1401f4c7e: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f0c70 | FUN_1401f0c70 | [object Object] | [object Object] |
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f5db0 | FUN_1401f5db0 | [object Object] | [object Object] |
| 0x1401f6280 | FUN_1401f6280 | [object Object] | [object Object] |

## raw_result.value.callees

| address      | name                           | classification  | body            |
|--------------|--------------------------------|-----------------|-----------------|
| EXTERNAL:0x7 | ADVAPI32.DLL::RegCloseKey      | [object Object] | [object Object] |
| EXTERNAL:0x8 | ADVAPI32.DLL::RegOpenKeyExW    | [object Object] | [object Object] |
| EXTERNAL:0x9 | ADVAPI32.DLL::RegQueryValueExW | [object Object] | [object Object] |
| 0x1400017a0  | FUN_1400017a0                  | [object Object] | [object Object] |
| 0x140028ed0  | FUN_140028ed0                  | [object Object] | [object Object] |
| 0x140029140  | FUN_140029140                  | [object Object] | [object Object] |
| 0x14030b220  | FUN_14030b220                  | [object Object] | [object Object] |
| 0x140323ed0  | thunk_FUN_14031f6e0            | [object Object] | [object Object] |
| 0x1403272f0  | thunk_FUN_140327e20            | [object Object] | [object Object] |
| 0x140327740  | __security_check_cookie        | [object Object] | [object Object] |
| 0x14035fad0  | FUN_14035fad0                  | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f12f6    | 0x1401f4980    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f29a9    | 0x1401f4980    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5e89    | 0x1401f4980    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6509    | 0x1401f4980    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df9e4    | 0x1401f4980    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4980    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401f4985    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401f498e    | stack:0xffffffffffffff38 | [object Object]  |                  | [object Object] |
| 0x1401f499d    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f49a7    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f49b1    | stack:0xfffffffffffffe70 | [object Object]  |                  | [object Object] |
| 0x1401f49b9    | stack:0xfffffffffffffe70 | [object Object]  |                  | [object Object] |
| 0x1401f49be    | stack:0xfffffffffffffe70 | [object Object]  |                  | [object Object] |
| 0x1401f49c3    | stack:0xfffffffffffffe58 | [object Object]  |                  | [object Object] |
| 0x1401f49d1    | 0x14043c1c0              | [object Object]  |                  | [object Object] |
| 0x1401f49df    | EXTERNAL:0x8             | [object Object]  | [object Object]  | [object Object] |
| 0x1401f49df    | 0x14037a038              | [object Object]  |                  | [object Object] |
| 0x1401f49e7    | 0x1401f4c40              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f49f5    | stack:0xfffffffffffffed8 | [object Object]  |                  | [object Object] |
| 0x1401f49f9    | 0x14035fad0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f49fe    | stack:0xfffffffffffffe6c | [object Object]  |                  | [object Object] |
| 0x1401f4a06    | stack:0xfffffffffffffe68 | [object Object]  |                  | [object Object] |
| 0x1401f4a0b    | stack:0xfffffffffffffe6c | [object Object]  |                  | [object Object] |
| 0x1401f4a10    | stack:0xfffffffffffffe60 | [object Object]  |                  | [object Object] |
| 0x1401f4a15    | stack:0xfffffffffffffed8 | [object Object]  |                  | [object Object] |
| 0x1401f4a19    | stack:0xfffffffffffffe58 | [object Object]  |                  | [object Object] |
| 0x1401f4a1e    | stack:0xfffffffffffffe68 | [object Object]  |                  | [object Object] |
| 0x1401f4a26    | 0x14040c848              | [object Object]  |                  | [object Object] |
| 0x1401f4a2d    | stack:0xfffffffffffffe70 | [object Object]  |                  | [object Object] |
| 0x1401f4a32    | EXTERNAL:0x9             | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a32    | 0x14037a040              | [object Object]  |                  | [object Object] |
| 0x1401f4a3a    | stack:0xfffffffffffffe70 | [object Object]  |                  | [object Object] |
| 0x1401f4a3f    | EXTERNAL:0x7             | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a3f    | 0x14037a030              | [object Object]  |                  | [object Object] |
| 0x1401f4a47    | 0x1401f4c40              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a4d    | stack:0xfffffffffffffe68 | [object Object]  |                  | [object Object] |
| 0x1401f4a52    | 0x1401f4c40              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a58    | stack:0xfffffffffffffe6c | [object Object]  |                  | [object Object] |
| 0x1401f4a5e    | 0x1401f4c40              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a67    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4a6c    | stack:0xfffffffffffffea0 | [object Object]  |                  | [object Object] |
| 0x1401f4a71    | stack:0xfffffffffffffea8 | [object Object]  |                  | [object Object] |
| 0x1401f4a7c    | stack:0xfffffffffffffed8 | [object Object]  |                  | [object Object] |
| 0x1401f4a80    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4a85    | 0x1400017a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a8b    | stack:0xfffffffffffffea0 | [object Object]  |                  | [object Object] |
| 0x1401f4a90    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4a95    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4a9a    | stack:0xfffffffffffffea8 | [object Object]  |                  | [object Object] |
| 0x1401f4aaa    | 0x1401f4af3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ab9    | 0x140323ed0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ac1    | 0x1401f4adf              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4acd    | 0x1401f4adf              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ad5    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4ada    | 0x140029140              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4adf    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4adf    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4ae4    | stack:0xfffffffffffffea0 | [object Object]  |                  | [object Object] |
| 0x1401f4ae9    | stack:0xfffffffffffffea8 | [object Object]  |                  | [object Object] |
| 0x1401f4af1    | 0x1401f4b4f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b0c    | 0x1401f4c55              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b20    | 0x1401f4b42              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b31    | 0x1401f4c39              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b45    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b4a    | 0x1401f4c55              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b4f    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4b5c    | stack:0xfffffffffffffe78 | [object Object]  |                  | [object Object] |
| 0x1401f4b61    | stack:0xfffffffffffffe80 | [object Object]  |                  | [object Object] |
| 0x1401f4b66    | stack:0xfffffffffffffe78 | [object Object]  |                  | [object Object] |
| 0x1401f4b6b    | stack:0xfffffffffffffeb0 | [object Object]  |                  | [object Object] |
| 0x1401f4b70    | 0x140028ed0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b7b    | 0x1401f4b82              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b80    | 0x1401f4b85              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b85    | stack:0xfffffffffffffe78 | [object Object]  |                  | [object Object] |
| 0x1401f4b8e    | stack:0xfffffffffffffe80 | [object Object]  |                  | [object Object] |
| 0x1401f4b93    | stack:0xfffffffffffffe78 | [object Object]  |                  | [object Object] |
| 0x1401f4b9b    | 0x14030b220              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ba1    | stack:0xfffffffffffffec8 | [object Object]  |                  | [object Object] |
| 0x1401f4ba9    | 0x1401f4bd9              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4bae    | stack:0xfffffffffffffeb0 | [object Object]  |                  | [object Object] |
| 0x1401f4bba    | 0x1401f4bd4              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4bcb    | 0x1401f4c32              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4bd4    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4bd9    | stack:0xfffffffffffffec0 | [object Object]  |                  | [object Object] |
| 0x1401f4bdd    | stack:0xfffffffffffffec8 | [object Object]  |                  | [object Object] |
| 0x1401f4be5    | stack:0xfffffffffffffeb0 | [object Object]  |                  | [object Object] |
| 0x1401f4bea    | stack:0xfffffffffffffea8 | [object Object]  |                  | [object Object] |
| 0x1401f4bf3    | 0x1401f4c55              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4bfd    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4c09    | 0x1401f4b45              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4c1e    | 0x1401f4c39              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4c2b    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4c30    | 0x1401f4c55              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4c58    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f4c62    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4c67    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f4c6f    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401f4c73    | stack:0x10               | [object Object]  |                  | [object Object] |

## raw_result.value.referenced_strings

| address     | value                           | source_address |
|-------------|---------------------------------|----------------|
| 0x14040c848 | MachineGuid                     | 0x1401f4a26    |
| 0x14043c1c0 | SOFTWARE\Microsoft\Cryptography | 0x1401f49d1    |

## raw_result.value.referenced_names

| address      | value                                       | source_address |
|--------------|---------------------------------------------|----------------|
| 0x1400017a0  | FUN_1400017a0                               | 0x1401f4a85    |
| 0x140028ed0  | FUN_140028ed0                               | 0x1401f4b70    |
| 0x140029140  | FUN_140029140                               | 0x1401f4ada    |
| 0x1401f4adf  | LAB_1401f4adf                               | 0x1401f4ac1    |
| 0x1401f4adf  | LAB_1401f4adf                               | 0x1401f4acd    |
| 0x1401f4af3  | LAB_1401f4af3                               | 0x1401f4aaa    |
| 0x1401f4b42  | LAB_1401f4b42                               | 0x1401f4b20    |
| 0x1401f4b45  | LAB_1401f4b45                               | 0x1401f4c09    |
| 0x1401f4b4f  | LAB_1401f4b4f                               | 0x1401f4af1    |
| 0x1401f4b82  | LAB_1401f4b82                               | 0x1401f4b7b    |
| 0x1401f4b85  | LAB_1401f4b85                               | 0x1401f4b80    |
| 0x1401f4bd4  | LAB_1401f4bd4                               | 0x1401f4bba    |
| 0x1401f4bd9  | LAB_1401f4bd9                               | 0x1401f4ba9    |
| 0x1401f4c32  | LAB_1401f4c32                               | 0x1401f4bcb    |
| 0x1401f4c39  | LAB_1401f4c39                               | 0x1401f4b31    |
| 0x1401f4c39  | LAB_1401f4c39                               | 0x1401f4c1e    |
| 0x1401f4c40  | LAB_1401f4c40                               | 0x1401f49e7    |
| 0x1401f4c40  | LAB_1401f4c40                               | 0x1401f4a47    |
| 0x1401f4c40  | LAB_1401f4c40                               | 0x1401f4a52    |
| 0x1401f4c40  | LAB_1401f4c40                               | 0x1401f4a5e    |
| 0x1401f4c55  | LAB_1401f4c55                               | 0x1401f4b0c    |
| 0x1401f4c55  | LAB_1401f4c55                               | 0x1401f4b4a    |
| 0x1401f4c55  | LAB_1401f4c55                               | 0x1401f4bf3    |
| 0x1401f4c55  | LAB_1401f4c55                               | 0x1401f4c30    |
| 0x14030b220  | FUN_14030b220                               | 0x1401f4b9b    |
| 0x140323ed0  | thunk_FUN_14031f6e0                         | 0x1401f4ab9    |
| 0x1403272f0  | thunk_FUN_140327e20                         | 0x1401f4b45    |
| 0x1403272f0  | thunk_FUN_140327e20                         | 0x1401f4bd4    |
| 0x1403272f0  | thunk_FUN_140327e20                         | 0x1401f4c2b    |
| 0x140327740  | __security_check_cookie                     | 0x1401f4c62    |
| 0x14035fad0  | FUN_14035fad0                               | 0x1401f49f9    |
| 0x14037a030  | PTR_RegCloseKey_14037a030                   | 0x1401f4a3f    |
| 0x14037a038  | PTR_RegOpenKeyExW_14037a038                 | 0x1401f49df    |
| 0x14037a040  | PTR_RegQueryValueExW_14037a040              | 0x1401f4a32    |
| 0x14040c848  | u_MachineGuid_14040c848                     | 0x1401f4a26    |
| 0x14043c1c0  | u_SOFTWARE\Microsoft\Cryptography_14043c1c0 | 0x1401f49d1    |
| 0x1404c7ac0  | DAT_1404c7ac0                               | 0x1401f499d    |
| EXTERNAL:0x7 | ADVAPI32.DLL::RegCloseKey                   | 0x1401f4a3f    |
| EXTERNAL:0x8 | ADVAPI32.DLL::RegOpenKeyExW                 | 0x1401f49df    |
| EXTERNAL:0x9 | ADVAPI32.DLL::RegQueryValueExW              | 0x1401f4a32    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4980 | 0x1401f49ed | 0x1401f49ed,0x1401f4c40 |
| 0x1401f49ed | 0x1401f4a4d | 0x1401f4a4d,0x1401f4c40 |
| 0x1401f4a4d | 0x1401f4a58 | 0x1401f4a58,0x1401f4c40 |
| 0x1401f4a58 | 0x1401f4a64 | 0x1401f4a64,0x1401f4c40 |
| 0x1401f4a64 | 0x1401f4aac | 0x1401f4aac,0x1401f4af3 |
| 0x1401f4aac | 0x1401f4ac3 | 0x1401f4ac3,0x1401f4adf |
| 0x1401f4ac3 | 0x1401f4acf | 0x1401f4acf,0x1401f4adf |
| 0x1401f4acf | 0x1401f4adf | 0x1401f4adf             |
| 0x1401f4adf | 0x1401f4af3 | 0x1401f4af3,0x1401f4b4f |
| 0x1401f4af3 | 0x1401f4b12 | 0x1401f4b12,0x1401f4c55 |
| 0x1401f4b12 | 0x1401f4b22 | 0x1401f4b22,0x1401f4b42 |
| 0x1401f4b22 | 0x1401f4b37 | 0x1401f4b37,0x1401f4c39 |
| 0x1401f4b37 | 0x1401f4b42 | 0x1401f4b42             |
| 0x1401f4b42 | 0x1401f4b45 | 0x1401f4b45             |
| 0x1401f4b45 | 0x1401f4b4f | 0x1401f4c55             |
| 0x1401f4b4f | 0x1401f4b7d | 0x1401f4b7d,0x1401f4b82 |
| 0x1401f4b7d | 0x1401f4b82 | 0x1401f4b85             |
| 0x1401f4b82 | 0x1401f4b85 | 0x1401f4b85             |
| 0x1401f4b85 | 0x1401f4bab | 0x1401f4bab,0x1401f4bd9 |
| 0x1401f4bab | 0x1401f4bbc | 0x1401f4bbc,0x1401f4bd4 |
| 0x1401f4bbc | 0x1401f4bcd | 0x1401f4bcd,0x1401f4c32 |
| 0x1401f4bcd | 0x1401f4bd4 | 0x1401f4bd4             |
| 0x1401f4bd4 | 0x1401f4bd9 | 0x1401f4bd9             |
| 0x1401f4bd9 | 0x1401f4bf5 | 0x1401f4bf5,0x1401f4c55 |
| 0x1401f4bf5 | 0x1401f4c0f | 0x1401f4b45,0x1401f4c0f |
| 0x1401f4c0f | 0x1401f4c20 | 0x1401f4c20,0x1401f4c39 |
| 0x1401f4c20 | 0x1401f4c32 | 0x1401f4c55             |
| 0x1401f4c32 | 0x1401f4c39 | 0x1401f4c39             |
| 0x1401f4c39 | 0x1401f4c40 | 0x1401f4c40             |
| 0x1401f4c40 | 0x1401f4c55 | 0x1401f4c55             |
| 0x1401f4c55 | 0x1401f4c7f |                         |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------------------------------------------------------|-----------------|
| 0x1401f4996#2045 | 0x1401f4996 | 2045     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2046 | 0x1401f4996 | 2046     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2047 | 0x1401f4996 | 2047     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2048 | 0x1401f4996 | 2048     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2049 | 0x1401f4996 | 2049     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2050 | 0x1401f4996 | 2050     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2051 | 0x1401f4996 | 2051     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2052 | 0x1401f4996 | 2052     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2053 | 0x1401f4996 | 2053     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2054 | 0x1401f4996 | 2054     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2055 | 0x1401f4996 | 2055     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49a4#29   | 0x1401f49a4 | 29       | INT_XOR      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49a4#2102 | 0x1401f49a4 | 2102     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f49b9#55   | 0x1401f49b9 | 55       | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f49be#2056 | 0x1401f49be | 2056     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#77   | 0x1401f49df | 77       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f49df#1499 | 0x1401f49df | 1499     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1686 | 0x1401f49df | 1686     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1708 | 0x1401f49df | 1708     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1730 | 0x1401f49df | 1730     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1841 | 0x1401f49df | 1841     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1863 | 0x1401f49df | 1863     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1885 | 0x1401f49df | 1885     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1907 | 0x1401f49df | 1907     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1929 | 0x1401f49df | 1929     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#2044 | 0x1401f49df | 2044     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f49e5#82   | 0x1401f49e5 | 82       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49e7#88   | 0x1401f49e7 | 88       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f49e7#2096 | 0x1401f49e7 | 2096     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f49f5#2057 | 0x1401f49f5 | 2057     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#104  | 0x1401f49f9 | 104      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                 |                 |
| 0x1401f49f9#1500 | 0x1401f49f9 | 1500     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1687 | 0x1401f49f9 | 1687     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1709 | 0x1401f49f9 | 1709     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1731 | 0x1401f49f9 | 1731     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1842 | 0x1401f49f9 | 1842     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1864 | 0x1401f49f9 | 1864     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1886 | 0x1401f49f9 | 1886     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1908 | 0x1401f49f9 | 1908     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1930 | 0x1401f49f9 | 1930     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49fe#107  | 0x1401f49fe | 107      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a06#110  | 0x1401f4a06 | 110      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a0b#2058 | 0x1401f4a0b | 2058     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a15#2059 | 0x1401f4a15 | 2059     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a1e#2060 | 0x1401f4a1e | 2060     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#140  | 0x1401f4a32 | 140      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f4a32#1501 | 0x1401f4a32 | 1501     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1644 | 0x1401f4a32 | 1644     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1666 | 0x1401f4a32 | 1666     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1688 | 0x1401f4a32 | 1688     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1710 | 0x1401f4a32 | 1710     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1732 | 0x1401f4a32 | 1732     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1843 | 0x1401f4a32 | 1843     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1865 | 0x1401f4a32 | 1865     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1887 | 0x1401f4a32 | 1887     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1909 | 0x1401f4a32 | 1909     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1931 | 0x1401f4a32 | 1931     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#2043 | 0x1401f4a32 | 2043     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a3f#149  | 0x1401f4a3f | 149      | CALL         | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4a3f#1502 | 0x1401f4a3f | 1502     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1645 | 0x1401f4a3f | 1645     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1667 | 0x1401f4a3f | 1667     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1689 | 0x1401f4a3f | 1689     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1711 | 0x1401f4a3f | 1711     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1733 | 0x1401f4a3f | 1733     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1844 | 0x1401f4a3f | 1844     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1866 | 0x1401f4a3f | 1866     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1888 | 0x1401f4a3f | 1888     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1910 | 0x1401f4a3f | 1910     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1932 | 0x1401f4a3f | 1932     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a45#154  | 0x1401f4a45 | 154      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a47#160  | 0x1401f4a47 | 160      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4a47#2097 | 0x1401f4a47 | 2097     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a4d#168  | 0x1401f4a4d | 168      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a52#174  | 0x1401f4a52 | 174      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4a52#2098 | 0x1401f4a52 | 2098     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a5c#183  | 0x1401f4a5c | 183      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a5e#188  | 0x1401f4a5e | 188      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4a5e#2099 | 0x1401f4a5e | 2099     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a67#1478 | 0x1401f4a67 | 1478     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a67#1479 | 0x1401f4a67 | 1479     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a6c#198  | 0x1401f4a6c | 198      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a71#201  | 0x1401f4a71 | 201      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a79#1446 | 0x1401f4a79 | 1446     | INT_RIGHT    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a7c#2061 | 0x1401f4a7c | 2061     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a80#2062 | 0x1401f4a80 | 2062     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#220  | 0x1401f4a85 | 220      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                 |                 |
| 0x1401f4a85#1503 | 0x1401f4a85 | 1503     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1646 | 0x1401f4a85 | 1646     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1668 | 0x1401f4a85 | 1668     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1690 | 0x1401f4a85 | 1690     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1712 | 0x1401f4a85 | 1712     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1734 | 0x1401f4a85 | 1734     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1756 | 0x1401f4a85 | 1756     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1778 | 0x1401f4a85 | 1778     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1800 | 0x1401f4a85 | 1800     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1822 | 0x1401f4a85 | 1822     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1845 | 0x1401f4a85 | 1845     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1867 | 0x1401f4a85 | 1867     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1889 | 0x1401f4a85 | 1889     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1911 | 0x1401f4a85 | 1911     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1933 | 0x1401f4a85 | 1933     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a90#2063 | 0x1401f4a90 | 2063     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aa3#242  | 0x1401f4aa3 | 242      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aa3#246  | 0x1401f4aa3 | 246      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4aa3#2100 | 0x1401f4aa3 | 2100     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4aa3#2101 | 0x1401f4aa3 | 2101     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4aa3#2103 | 0x1401f4aa3 | 2103     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4aa7#252  | 0x1401f4aa7 | 252      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aa7#1088 | 0x1401f4aa7 | 1088     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aaa#257  | 0x1401f4aaa | 257      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4aac#258  | 0x1401f4aac | 258      | INT_MULT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aac#259  | 0x1401f4aac | 259      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aac#2104 | 0x1401f4aac | 2104     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4ab9#275  | 0x1401f4ab9 | 275      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x1401f4ab9#1504 | 0x1401f4ab9 | 1504     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1647 | 0x1401f4ab9 | 1647     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1669 | 0x1401f4ab9 | 1669     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1691 | 0x1401f4ab9 | 1691     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1713 | 0x1401f4ab9 | 1713     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1735 | 0x1401f4ab9 | 1735     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1757 | 0x1401f4ab9 | 1757     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1779 | 0x1401f4ab9 | 1779     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1801 | 0x1401f4ab9 | 1801     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1823 | 0x1401f4ab9 | 1823     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1846 | 0x1401f4ab9 | 1846     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1868 | 0x1401f4ab9 | 1868     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1890 | 0x1401f4ab9 | 1890     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1912 | 0x1401f4ab9 | 1912     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1934 | 0x1401f4ab9 | 1934     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4abe#281  | 0x1401f4abe | 281      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ac1#286  | 0x1401f4ac1 | 286      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4ac3#289  | 0x1401f4ac3 | 289      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ac3#2105 | 0x1401f4ac3 | 2105     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4ac6#299  | 0x1401f4ac6 | 299      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ac9#311  | 0x1401f4ac9 | 311      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4acd#316  | 0x1401f4acd | 316      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4ad5#2064 | 0x1401f4ad5 | 2064     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#332  | 0x1401f4ada | 332      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                 |                 |
| 0x1401f4ada#1505 | 0x1401f4ada | 1505     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1648 | 0x1401f4ada | 1648     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1670 | 0x1401f4ada | 1670     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1692 | 0x1401f4ada | 1692     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1714 | 0x1401f4ada | 1714     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1736 | 0x1401f4ada | 1736     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1758 | 0x1401f4ada | 1758     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1780 | 0x1401f4ada | 1780     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1802 | 0x1401f4ada | 1802     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1824 | 0x1401f4ada | 1824     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1847 | 0x1401f4ada | 1847     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1869 | 0x1401f4ada | 1869     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1891 | 0x1401f4ada | 1891     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1913 | 0x1401f4ada | 1913     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1935 | 0x1401f4ada | 1935     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4adf#1529 | 0x1401f4adf | 1529     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1661 | 0x1401f4adf | 1661     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1683 | 0x1401f4adf | 1683     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1705 | 0x1401f4adf | 1705     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1727 | 0x1401f4adf | 1727     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1749 | 0x1401f4adf | 1749     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1771 | 0x1401f4adf | 1771     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1793 | 0x1401f4adf | 1793     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1815 | 0x1401f4adf | 1815     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1837 | 0x1401f4adf | 1837     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1860 | 0x1401f4adf | 1860     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1882 | 0x1401f4adf | 1882     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1904 | 0x1401f4adf | 1904     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1926 | 0x1401f4adf | 1926     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1948 | 0x1401f4adf | 1948     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4aee#346  | 0x1401f4aee | 346      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af1#352  | 0x1401f4af1 | 352      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4af3#1530 | 0x1401f4af3 | 1530     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1662 | 0x1401f4af3 | 1662     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1684 | 0x1401f4af3 | 1684     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1706 | 0x1401f4af3 | 1706     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1728 | 0x1401f4af3 | 1728     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1750 | 0x1401f4af3 | 1750     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1772 | 0x1401f4af3 | 1772     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1794 | 0x1401f4af3 | 1794     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1816 | 0x1401f4af3 | 1816     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1838 | 0x1401f4af3 | 1838     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1861 | 0x1401f4af3 | 1861     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1905 | 0x1401f4af3 | 1905     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1927 | 0x1401f4af3 | 1927     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1949 | 0x1401f4af3 | 1949     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af6#1483 | 0x1401f4af6 | 1483     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4af6#1484 | 0x1401f4af6 | 1484     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4af6#1521 | 0x1401f4af6 | 1521     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af6#1522 | 0x1401f4af6 | 1522     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af6#2065 | 0x1401f4af6 | 2065     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4af9#361  | 0x1401f4af9 | 361      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4af9#1514 | 0x1401f4af9 | 1514     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af9#2066 | 0x1401f4af9 | 2066     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4afd#364  | 0x1401f4afd | 364      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4afd#1515 | 0x1401f4afd | 1515     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4afd#2067 | 0x1401f4afd | 2067     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b05#366  | 0x1401f4b05 | 366      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4b05#1516 | 0x1401f4b05 | 1516     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b05#2106 | 0x1401f4b05 | 2106     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b0c#377  | 0x1401f4b0c | 377      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b0c#378  | 0x1401f4b0c | 378      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4b0c#2090 | 0x1401f4b0c | 2090     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b12#379  | 0x1401f4b12 | 379      | INT_MULT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b12#380  | 0x1401f4b12 | 380      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b1a#382  | 0x1401f4b1a | 382      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b20#391  | 0x1401f4b20 | 391      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4b20#2087 | 0x1401f4b20 | 2087     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b20#2107 | 0x1401f4b20 | 2107     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b22#393  | 0x1401f4b22 | 393      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b22#2068 | 0x1401f4b22 | 2068     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b22#2108 | 0x1401f4b22 | 2108     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b29#406  | 0x1401f4b29 | 406      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b29#2069 | 0x1401f4b29 | 2069     | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b29#2109 | 0x1401f4b29 | 2109     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b29#2110 | 0x1401f4b29 | 2110     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b31#423  | 0x1401f4b31 | 423      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b31#425  | 0x1401f4b31 | 425      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4b31#2095 | 0x1401f4b31 | 2095     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b31#2111 | 0x1401f4b31 | 2111     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b37#426  | 0x1401f4b37 | 426      | INT_MULT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b37#427  | 0x1401f4b37 | 427      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#433  | 0x1401f4b45 | 433      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4b45#1035 | 0x1401f4b45 | 1035     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1067 | 0x1401f4b45 | 1067     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1512 | 0x1401f4b45 | 1512     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1528 | 0x1401f4b45 | 1528     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1655 | 0x1401f4b45 | 1655     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1660 | 0x1401f4b45 | 1660     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1677 | 0x1401f4b45 | 1677     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1682 | 0x1401f4b45 | 1682     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1699 | 0x1401f4b45 | 1699     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1704 | 0x1401f4b45 | 1704     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1721 | 0x1401f4b45 | 1721     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1726 | 0x1401f4b45 | 1726     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1743 | 0x1401f4b45 | 1743     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1748 | 0x1401f4b45 | 1748     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1765 | 0x1401f4b45 | 1765     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1770 | 0x1401f4b45 | 1770     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1787 | 0x1401f4b45 | 1787     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1792 | 0x1401f4b45 | 1792     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1809 | 0x1401f4b45 | 1809     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1814 | 0x1401f4b45 | 1814     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1831 | 0x1401f4b45 | 1831     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1836 | 0x1401f4b45 | 1836     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1854 | 0x1401f4b45 | 1854     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1859 | 0x1401f4b45 | 1859     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1898 | 0x1401f4b45 | 1898     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1903 | 0x1401f4b45 | 1903     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1920 | 0x1401f4b45 | 1920     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1925 | 0x1401f4b45 | 1925     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1942 | 0x1401f4b45 | 1942     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1947 | 0x1401f4b45 | 1947     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b4a#434  | 0x1401f4b4a | 434      | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401f4b4a#2091 | 0x1401f4b4a | 2091     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b4f#2070 | 0x1401f4b4f | 2070     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b58#504  | 0x1401f4b58 | 504      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b58#508  | 0x1401f4b58 | 508      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4b58#2083 | 0x1401f4b58 | 2083     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b58#2084 | 0x1401f4b58 | 2084     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b5c#1012 | 0x1401f4b5c | 1012     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b61#515  | 0x1401f4b61 | 515      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b61#2112 | 0x1401f4b61 | 2112     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b66#2071 | 0x1401f4b66 | 2071     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b6b#2072 | 0x1401f4b6b | 2072     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#522  | 0x1401f4b70 | 522      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b70#1506 | 0x1401f4b70 | 1506     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1649 | 0x1401f4b70 | 1649     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1671 | 0x1401f4b70 | 1671     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1693 | 0x1401f4b70 | 1693     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1715 | 0x1401f4b70 | 1715     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1737 | 0x1401f4b70 | 1737     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1759 | 0x1401f4b70 | 1759     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1781 | 0x1401f4b70 | 1781     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1803 | 0x1401f4b70 | 1803     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1825 | 0x1401f4b70 | 1825     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1848 | 0x1401f4b70 | 1848     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1870 | 0x1401f4b70 | 1870     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1892 | 0x1401f4b70 | 1892     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1914 | 0x1401f4b70 | 1914     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1936 | 0x1401f4b70 | 1936     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#2113 | 0x1401f4b70 | 2113     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b76#524  | 0x1401f4b76 | 524      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b76#2073 | 0x1401f4b76 | 2073     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b7b#535  | 0x1401f4b7b | 535      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b7b#536  | 0x1401f4b7b | 536      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4b7b#2089 | 0x1401f4b7b | 2089     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b7d#537  | 0x1401f4b7d | 537      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b80#539  | 0x1401f4b80 | 539      | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401f4b80#2088 | 0x1401f4b80 | 2088     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b80#2114 | 0x1401f4b80 | 2114     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b85#1036 | 0x1401f4b85 | 1036     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b8a#544  | 0x1401f4b8a | 544      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b8a#2074 | 0x1401f4b8a | 2074     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b93#2075 | 0x1401f4b93 | 2075     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#554  | 0x1401f4b9b | 554      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4b9b#1507 | 0x1401f4b9b | 1507     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1650 | 0x1401f4b9b | 1650     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1672 | 0x1401f4b9b | 1672     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1694 | 0x1401f4b9b | 1694     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1716 | 0x1401f4b9b | 1716     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1738 | 0x1401f4b9b | 1738     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1760 | 0x1401f4b9b | 1760     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1782 | 0x1401f4b9b | 1782     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1804 | 0x1401f4b9b | 1804     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1826 | 0x1401f4b9b | 1826     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1849 | 0x1401f4b9b | 1849     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1871 | 0x1401f4b9b | 1871     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1893 | 0x1401f4b9b | 1893     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1915 | 0x1401f4b9b | 1915     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1937 | 0x1401f4b9b | 1937     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ba9#568  | 0x1401f4ba9 | 568      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ba9#569  | 0x1401f4ba9 | 569      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4bab#571  | 0x1401f4bab | 571      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bae#1840 | 0x1401f4bae | 1840     | PIECE        | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bb3#582  | 0x1401f4bb3 | 582      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bba#591  | 0x1401f4bba | 591      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4bba#2085 | 0x1401f4bba | 2085     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4bbc#592  | 0x1401f4bbc | 592      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bbc#593  | 0x1401f4bbc | 593      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bbc#2115 | 0x1401f4bbc | 2115     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4bc0#597  | 0x1401f4bc0 | 597      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bc3#606  | 0x1401f4bc3 | 606      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bcb#623  | 0x1401f4bcb | 623      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bcb#625  | 0x1401f4bcb | 625      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4bcd#628  | 0x1401f4bcd | 628      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#638  | 0x1401f4bd4 | 638      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4bd4#1033 | 0x1401f4bd4 | 1033     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1065 | 0x1401f4bd4 | 1065     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1509 | 0x1401f4bd4 | 1509     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1652 | 0x1401f4bd4 | 1652     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1674 | 0x1401f4bd4 | 1674     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1696 | 0x1401f4bd4 | 1696     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1718 | 0x1401f4bd4 | 1718     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1740 | 0x1401f4bd4 | 1740     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1762 | 0x1401f4bd4 | 1762     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1784 | 0x1401f4bd4 | 1784     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1806 | 0x1401f4bd4 | 1806     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1828 | 0x1401f4bd4 | 1828     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1939 | 0x1401f4bd4 | 1939     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#641  | 0x1401f4bd9 | 641      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4bd9#1527 | 0x1401f4bd9 | 1527     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1659 | 0x1401f4bd9 | 1659     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1681 | 0x1401f4bd9 | 1681     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1703 | 0x1401f4bd9 | 1703     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1725 | 0x1401f4bd9 | 1725     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1747 | 0x1401f4bd9 | 1747     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1769 | 0x1401f4bd9 | 1769     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1791 | 0x1401f4bd9 | 1791     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1813 | 0x1401f4bd9 | 1813     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1835 | 0x1401f4bd9 | 1835     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1946 | 0x1401f4bd9 | 1946     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bdd#644  | 0x1401f4bdd | 644      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4be5#647  | 0x1401f4be5 | 647      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4bf3#661  | 0x1401f4bf3 | 661      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bf3#662  | 0x1401f4bf3 | 662      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4bf3#2093 | 0x1401f4bf3 | 2093     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4bf5#663  | 0x1401f4bf5 | 663      | INT_MULT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bf5#664  | 0x1401f4bf5 | 664      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c02#670  | 0x1401f4c02 | 670      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c09#679  | 0x1401f4c09 | 679      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4c09#2086 | 0x1401f4c09 | 2086     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c09#2117 | 0x1401f4c09 | 2117     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c0f#681  | 0x1401f4c0f | 681      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c0f#2076 | 0x1401f4c0f | 2076     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c16#694  | 0x1401f4c16 | 694      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c16#2077 | 0x1401f4c16 | 2077     | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c16#2118 | 0x1401f4c16 | 2118     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c16#2119 | 0x1401f4c16 | 2119     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c1e#711  | 0x1401f4c1e | 711      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c1e#713  | 0x1401f4c1e | 713      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4c1e#2120 | 0x1401f4c1e | 2120     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c20#714  | 0x1401f4c20 | 714      | INT_MULT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c20#715  | 0x1401f4c20 | 715      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#720  | 0x1401f4c2b | 720      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c2b#1510 | 0x1401f4c2b | 1510     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1653 | 0x1401f4c2b | 1653     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1675 | 0x1401f4c2b | 1675     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1697 | 0x1401f4c2b | 1697     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1719 | 0x1401f4c2b | 1719     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1741 | 0x1401f4c2b | 1741     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1763 | 0x1401f4c2b | 1763     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1785 | 0x1401f4c2b | 1785     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1807 | 0x1401f4c2b | 1807     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1829 | 0x1401f4c2b | 1829     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1852 | 0x1401f4c2b | 1852     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1896 | 0x1401f4c2b | 1896     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1918 | 0x1401f4c2b | 1918     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1940 | 0x1401f4c2b | 1940     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c30#721  | 0x1401f4c30 | 721      | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401f4c30#2094 | 0x1401f4c30 | 2094     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c37#723  | 0x1401f4c37 | 723      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#724  | 0x1401f4c37 | 724      | CALLIND      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4c37#1508 | 0x1401f4c37 | 1508     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1651 | 0x1401f4c37 | 1651     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1673 | 0x1401f4c37 | 1673     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1695 | 0x1401f4c37 | 1695     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1717 | 0x1401f4c37 | 1717     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1739 | 0x1401f4c37 | 1739     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1761 | 0x1401f4c37 | 1761     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1783 | 0x1401f4c37 | 1783     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1805 | 0x1401f4c37 | 1805     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1827 | 0x1401f4c37 | 1827     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1850 | 0x1401f4c37 | 1850     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1894 | 0x1401f4c37 | 1894     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1916 | 0x1401f4c37 | 1916     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1938 | 0x1401f4c37 | 1938     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#2078 | 0x1401f4c37 | 2078     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#2116 | 0x1401f4c37 | 2116     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c39#1082 | 0x1401f4c39 | 1082     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1526 | 0x1401f4c39 | 1526     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1658 | 0x1401f4c39 | 1658     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1680 | 0x1401f4c39 | 1680     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1702 | 0x1401f4c39 | 1702     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1724 | 0x1401f4c39 | 1724     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1746 | 0x1401f4c39 | 1746     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1768 | 0x1401f4c39 | 1768     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1790 | 0x1401f4c39 | 1790     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1812 | 0x1401f4c39 | 1812     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1834 | 0x1401f4c39 | 1834     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1857 | 0x1401f4c39 | 1857     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1901 | 0x1401f4c39 | 1901     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1923 | 0x1401f4c39 | 1923     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1945 | 0x1401f4c39 | 1945     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c3e#476  | 0x1401f4c3e | 476      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#477  | 0x1401f4c3e | 477      | CALLIND      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4c3e#741  | 0x1401f4c3e | 741      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c3e#1511 | 0x1401f4c3e | 1511     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1654 | 0x1401f4c3e | 1654     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1676 | 0x1401f4c3e | 1676     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1698 | 0x1401f4c3e | 1698     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1720 | 0x1401f4c3e | 1720     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1742 | 0x1401f4c3e | 1742     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1764 | 0x1401f4c3e | 1764     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1786 | 0x1401f4c3e | 1786     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1808 | 0x1401f4c3e | 1808     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1830 | 0x1401f4c3e | 1830     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1853 | 0x1401f4c3e | 1853     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1897 | 0x1401f4c3e | 1897     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1919 | 0x1401f4c3e | 1919     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1941 | 0x1401f4c3e | 1941     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#2121 | 0x1401f4c3e | 2121     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c40#1087 | 0x1401f4c40 | 1087     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f4c40#1531 | 0x1401f4c40 | 1531     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f4c43#1488 | 0x1401f4c43 | 1488     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c43#1489 | 0x1401f4c43 | 1489     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c43#1523 | 0x1401f4c43 | 1523     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c43#1524 | 0x1401f4c43 | 1524     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c43#2079 | 0x1401f4c43 | 2079     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c46#486  | 0x1401f4c46 | 486      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c46#1518 | 0x1401f4c46 | 1518     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c46#2080 | 0x1401f4c46 | 2080     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c4a#489  | 0x1401f4c4a | 489      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c4a#1519 | 0x1401f4c4a | 1519     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c4a#2081 | 0x1401f4c4a | 2081     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c52#491  | 0x1401f4c52 | 491      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c52#1520 | 0x1401f4c52 | 1520     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c52#2092 | 0x1401f4c52 | 2092     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c52#2122 | 0x1401f4c52 | 2122     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c55#435  | 0x1401f4c55 | 435      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c55#1081 | 0x1401f4c55 | 1081     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f4c55#1525 | 0x1401f4c55 | 1525     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f4c62#448  | 0x1401f4c62 | 448      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c62#449  | 0x1401f4c62 | 449      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c62#2123 | 0x1401f4c62 | 2123     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c7e#474  | 0x1401f4c7e | 474      | RETURN       | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4c7e#1513 | 0x1401f4c7e | 1513     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401f49a4#2102 | 0x1401f49a4#29   | 1           |
| 0x1401f4996#2045 | 0x1401f49a4#2102 | 0           |
| 0x1401f49df#2044 | 0x1401f49df#77   | 2           |
| 0x1401f49be#2056 | 0x1401f49df#77   | 5           |
| 0x1401f49b9#55   | 0x1401f49df#1686 | 0           |
| 0x1401f49a4#29   | 0x1401f49df#1929 | 0           |
| 0x1401f49df#77   | 0x1401f49e5#82   | 0           |
| 0x1401f49e5#82   | 0x1401f49e7#88   | 1           |
| 0x1401f4996#2047 | 0x1401f49e7#2096 | 0           |
| 0x1401f49f5#2057 | 0x1401f49f9#104  | 1           |
| 0x1401f49df#1499 | 0x1401f49f9#1500 | 0           |
| 0x1401f49df#1686 | 0x1401f49f9#1687 | 0           |
| 0x1401f49df#1708 | 0x1401f49f9#1709 | 0           |
| 0x1401f49df#1730 | 0x1401f49f9#1731 | 0           |
| 0x1401f49df#1841 | 0x1401f49f9#1842 | 0           |
| 0x1401f49df#1863 | 0x1401f49f9#1864 | 0           |
| 0x1401f49df#1885 | 0x1401f49f9#1886 | 0           |
| 0x1401f49df#1907 | 0x1401f49f9#1908 | 0           |
| 0x1401f49df#1929 | 0x1401f49f9#1930 | 0           |
| 0x1401f49f9#1687 | 0x1401f4a32#140  | 1           |
| 0x1401f4a32#2043 | 0x1401f4a32#140  | 2           |
| 0x1401f4a1e#2060 | 0x1401f4a32#140  | 4           |
| 0x1401f4a15#2059 | 0x1401f4a32#140  | 5           |
| 0x1401f4a0b#2058 | 0x1401f4a32#140  | 6           |
| 0x1401f49f9#1500 | 0x1401f4a32#1501 | 0           |
| 0x1401f4a06#110  | 0x1401f4a32#1644 | 0           |
| 0x1401f49fe#107  | 0x1401f4a32#1666 | 0           |
| 0x1401f49f9#1687 | 0x1401f4a32#1688 | 0           |
| 0x1401f49f9#1709 | 0x1401f4a32#1710 | 0           |
| 0x1401f49f9#1731 | 0x1401f4a32#1732 | 0           |
| 0x1401f49f9#1842 | 0x1401f4a32#1843 | 0           |
| 0x1401f49f9#1864 | 0x1401f4a32#1865 | 0           |
| 0x1401f49f9#1886 | 0x1401f4a32#1887 | 0           |
| 0x1401f49f9#1908 | 0x1401f4a32#1909 | 0           |
| 0x1401f49f9#1930 | 0x1401f4a32#1931 | 0           |
| 0x1401f4a32#1688 | 0x1401f4a3f#149  | 1           |
| 0x1401f4a32#1501 | 0x1401f4a3f#1502 | 0           |
| 0x1401f4a32#1644 | 0x1401f4a3f#1645 | 0           |
| 0x1401f4a32#1666 | 0x1401f4a3f#1667 | 0           |
| 0x1401f4a32#1688 | 0x1401f4a3f#1689 | 0           |
| 0x1401f4a32#1710 | 0x1401f4a3f#1711 | 0           |
| 0x1401f4a32#1732 | 0x1401f4a3f#1733 | 0           |
| 0x1401f4a32#1843 | 0x1401f4a3f#1844 | 0           |
| 0x1401f4a32#1865 | 0x1401f4a3f#1866 | 0           |
| 0x1401f4a32#1887 | 0x1401f4a3f#1888 | 0           |
| 0x1401f4a32#1909 | 0x1401f4a3f#1910 | 0           |
| 0x1401f4a32#1931 | 0x1401f4a3f#1932 | 0           |
| 0x1401f4a32#140  | 0x1401f4a45#154  | 0           |
| 0x1401f4a45#154  | 0x1401f4a47#160  | 1           |
| 0x1401f4996#2050 | 0x1401f4a47#2097 | 0           |
| 0x1401f4a3f#1645 | 0x1401f4a4d#168  | 0           |
| 0x1401f4a4d#168  | 0x1401f4a52#174  | 1           |
| 0x1401f4996#2052 | 0x1401f4a52#2098 | 0           |
| 0x1401f4a3f#1667 | 0x1401f4a5c#183  | 0           |
| 0x1401f4a5c#183  | 0x1401f4a5e#188  | 1           |
| 0x1401f4996#2054 | 0x1401f4a5e#2099 | 0           |
| 0x1401f4a3f#1667 | 0x1401f4a79#1446 | 0           |
| 0x1401f4a80#2062 | 0x1401f4a85#220  | 1           |
| 0x1401f4a7c#2061 | 0x1401f4a85#220  | 2           |
| 0x1401f4a79#1446 | 0x1401f4a85#220  | 3           |
| 0x1401f4a3f#1502 | 0x1401f4a85#1503 | 0           |
| 0x1401f4a3f#1645 | 0x1401f4a85#1646 | 0           |
| 0x1401f4a3f#1667 | 0x1401f4a85#1668 | 0           |
| 0x1401f4a3f#1689 | 0x1401f4a85#1690 | 0           |
| 0x1401f4a3f#1711 | 0x1401f4a85#1712 | 0           |
| 0x1401f4a3f#1733 | 0x1401f4a85#1734 | 0           |
| 0x1401f4a67#1478 | 0x1401f4a85#1756 | 0           |
| 0x1401f4a67#1479 | 0x1401f4a85#1778 | 0           |
| 0x1401f4a6c#198  | 0x1401f4a85#1800 | 0           |
| 0x1401f4a71#201  | 0x1401f4a85#1822 | 0           |
| 0x1401f4a3f#1844 | 0x1401f4a85#1845 | 0           |
| 0x1401f4a3f#1866 | 0x1401f4a85#1867 | 0           |
| 0x1401f4a3f#1888 | 0x1401f4a85#1889 | 0           |
| 0x1401f4a3f#1910 | 0x1401f4a85#1911 | 0           |
| 0x1401f4a3f#1932 | 0x1401f4a85#1933 | 0           |
| 0x1401f4a85#1822 | 0x1401f4aa3#242  | 1           |
| 0x1401f4aa3#242  | 0x1401f4aa3#246  | 1           |
| 0x1401f4a90#2063 | 0x1401f4aa3#2100 | 0           |
| 0x1401f4aa3#2103 | 0x1401f4aa3#2101 | 0           |
| 0x1401f4a85#1756 | 0x1401f4aa3#2103 | 0           |
| 0x1401f4a85#1800 | 0x1401f4aa7#252  | 0           |
| 0x1401f4aa3#2100 | 0x1401f4aa7#1088 | 0           |
| 0x1401f4aa3#2101 | 0x1401f4aa7#1088 | 1           |
| 0x1401f4aa7#252  | 0x1401f4aaa#257  | 1           |
| 0x1401f4a85#1800 | 0x1401f4aac#258  | 0           |
| 0x1401f4aac#2104 | 0x1401f4aac#259  | 0           |
| 0x1401f4aac#258  | 0x1401f4aac#259  | 1           |
| 0x1401f4aa7#1088 | 0x1401f4aac#2104 | 0           |
| 0x1401f4aa7#1088 | 0x1401f4ab9#275  | 1           |
| 0x1401f4aac#259  | 0x1401f4ab9#275  | 2           |
| 0x1401f4a85#1503 | 0x1401f4ab9#1504 | 0           |
| 0x1401f4a85#1646 | 0x1401f4ab9#1647 | 0           |
| 0x1401f4a85#1668 | 0x1401f4ab9#1669 | 0           |
| 0x1401f4a85#1690 | 0x1401f4ab9#1691 | 0           |
| 0x1401f4a85#1712 | 0x1401f4ab9#1713 | 0           |
| 0x1401f4a85#1734 | 0x1401f4ab9#1735 | 0           |
| 0x1401f4a85#1756 | 0x1401f4ab9#1757 | 0           |
| 0x1401f4a85#1778 | 0x1401f4ab9#1779 | 0           |
| 0x1401f4a85#1800 | 0x1401f4ab9#1801 | 0           |
| 0x1401f4a85#1822 | 0x1401f4ab9#1823 | 0           |
| 0x1401f4a85#1845 | 0x1401f4ab9#1846 | 0           |
| 0x1401f4a85#1867 | 0x1401f4ab9#1868 | 0           |
| 0x1401f4a85#1889 | 0x1401f4ab9#1890 | 0           |
| 0x1401f4a85#1911 | 0x1401f4ab9#1912 | 0           |
| 0x1401f4a85#1933 | 0x1401f4ab9#1934 | 0           |
| 0x1401f4ab9#275  | 0x1401f4abe#281  | 0           |
| 0x1401f4aac#259  | 0x1401f4abe#281  | 1           |
| 0x1401f4abe#281  | 0x1401f4ac1#286  | 1           |
| 0x1401f4ab9#275  | 0x1401f4ac3#289  | 0           |
| 0x1401f4ac3#2105 | 0x1401f4ac3#289  | 1           |
| 0x1401f4aa7#1088 | 0x1401f4ac3#2105 | 0           |
| 0x1401f4ac3#289  | 0x1401f4ac6#299  | 0           |
| 0x1401f4ac6#299  | 0x1401f4ac9#311  | 0           |
| 0x1401f4ac9#311  | 0x1401f4acd#316  | 1           |
| 0x1401f4ad5#2064 | 0x1401f4ada#332  | 1           |
| 0x1401f4ac6#299  | 0x1401f4ada#332  | 2           |
| 0x1401f4ab9#1504 | 0x1401f4ada#1505 | 0           |
| 0x1401f4ab9#1647 | 0x1401f4ada#1648 | 0           |
| 0x1401f4ab9#1669 | 0x1401f4ada#1670 | 0           |
| 0x1401f4ab9#1691 | 0x1401f4ada#1692 | 0           |
| 0x1401f4ab9#1713 | 0x1401f4ada#1714 | 0           |
| 0x1401f4ab9#1735 | 0x1401f4ada#1736 | 0           |
| 0x1401f4ab9#1757 | 0x1401f4ada#1758 | 0           |
| 0x1401f4ab9#1779 | 0x1401f4ada#1780 | 0           |
| 0x1401f4ab9#1801 | 0x1401f4ada#1802 | 0           |
| 0x1401f4ab9#1823 | 0x1401f4ada#1824 | 0           |
| 0x1401f4ab9#1846 | 0x1401f4ada#1847 | 0           |
| 0x1401f4ab9#1868 | 0x1401f4ada#1869 | 0           |
| 0x1401f4ab9#1890 | 0x1401f4ada#1891 | 0           |
| 0x1401f4ab9#1912 | 0x1401f4ada#1913 | 0           |
| 0x1401f4ab9#1934 | 0x1401f4ada#1935 | 0           |
| 0x1401f4ab9#1504 | 0x1401f4adf#1529 | 0           |
| 0x1401f4ab9#1504 | 0x1401f4adf#1529 | 1           |
| 0x1401f4ada#1505 | 0x1401f4adf#1529 | 2           |
| 0x1401f4ab9#1647 | 0x1401f4adf#1661 | 0           |
| 0x1401f4ab9#1647 | 0x1401f4adf#1661 | 1           |
| 0x1401f4ada#1648 | 0x1401f4adf#1661 | 2           |
| 0x1401f4ab9#1669 | 0x1401f4adf#1683 | 0           |
| 0x1401f4ab9#1669 | 0x1401f4adf#1683 | 1           |
| 0x1401f4ada#1670 | 0x1401f4adf#1683 | 2           |
| 0x1401f4ab9#1691 | 0x1401f4adf#1705 | 0           |
| 0x1401f4ab9#1691 | 0x1401f4adf#1705 | 1           |
| 0x1401f4ada#1692 | 0x1401f4adf#1705 | 2           |
| 0x1401f4ab9#1713 | 0x1401f4adf#1727 | 0           |
| 0x1401f4ab9#1713 | 0x1401f4adf#1727 | 1           |
| 0x1401f4ada#1714 | 0x1401f4adf#1727 | 2           |
| 0x1401f4ab9#1735 | 0x1401f4adf#1749 | 0           |
| 0x1401f4ab9#1735 | 0x1401f4adf#1749 | 1           |
| 0x1401f4ada#1736 | 0x1401f4adf#1749 | 2           |
| 0x1401f4ab9#1757 | 0x1401f4adf#1771 | 0           |
| 0x1401f4ab9#1757 | 0x1401f4adf#1771 | 1           |
| 0x1401f4ada#1758 | 0x1401f4adf#1771 | 2           |
| 0x1401f4ab9#1779 | 0x1401f4adf#1793 | 0           |
| 0x1401f4ab9#1779 | 0x1401f4adf#1793 | 1           |
| 0x1401f4ada#1780 | 0x1401f4adf#1793 | 2           |
| 0x1401f4ab9#1801 | 0x1401f4adf#1815 | 0           |
| 0x1401f4ab9#1801 | 0x1401f4adf#1815 | 1           |
| 0x1401f4ada#1802 | 0x1401f4adf#1815 | 2           |
| 0x1401f4ab9#1823 | 0x1401f4adf#1837 | 0           |
| 0x1401f4ab9#1823 | 0x1401f4adf#1837 | 1           |
| 0x1401f4ada#1824 | 0x1401f4adf#1837 | 2           |
| 0x1401f4ab9#1846 | 0x1401f4adf#1860 | 0           |
| 0x1401f4ab9#1846 | 0x1401f4adf#1860 | 1           |
| 0x1401f4ada#1847 | 0x1401f4adf#1860 | 2           |
| 0x1401f4ab9#1868 | 0x1401f4adf#1882 | 0           |
| 0x1401f4ab9#1868 | 0x1401f4adf#1882 | 1           |
| 0x1401f4ada#1869 | 0x1401f4adf#1882 | 2           |
| 0x1401f4ab9#1890 | 0x1401f4adf#1904 | 0           |
| 0x1401f4ab9#1890 | 0x1401f4adf#1904 | 1           |
| 0x1401f4ada#1891 | 0x1401f4adf#1904 | 2           |
| 0x1401f4ab9#1912 | 0x1401f4adf#1926 | 0           |
| 0x1401f4ab9#1912 | 0x1401f4adf#1926 | 1           |
| 0x1401f4ada#1913 | 0x1401f4adf#1926 | 2           |
| 0x1401f4ab9#1934 | 0x1401f4adf#1948 | 0           |
| 0x1401f4ab9#1934 | 0x1401f4adf#1948 | 1           |
| 0x1401f4ada#1935 | 0x1401f4adf#1948 | 2           |
| 0x1401f4adf#1815 | 0x1401f4aee#346  | 0           |
| 0x1401f4aee#346  | 0x1401f4af1#352  | 1           |
| 0x1401f4a85#1503 | 0x1401f4af3#1530 | 0           |
| 0x1401f4adf#1529 | 0x1401f4af3#1530 | 1           |
| 0x1401f4a85#1646 | 0x1401f4af3#1662 | 0           |
| 0x1401f4adf#1661 | 0x1401f4af3#1662 | 1           |
| 0x1401f4a85#1668 | 0x1401f4af3#1684 | 0           |
| 0x1401f4adf#1683 | 0x1401f4af3#1684 | 1           |
| 0x1401f4a85#1690 | 0x1401f4af3#1706 | 0           |
| 0x1401f4adf#1705 | 0x1401f4af3#1706 | 1           |
| 0x1401f4a85#1712 | 0x1401f4af3#1728 | 0           |
| 0x1401f4adf#1727 | 0x1401f4af3#1728 | 1           |
| 0x1401f4a85#1734 | 0x1401f4af3#1750 | 0           |
| 0x1401f4adf#1749 | 0x1401f4af3#1750 | 1           |
| 0x1401f4a85#1756 | 0x1401f4af3#1772 | 0           |
| 0x1401f4adf#1771 | 0x1401f4af3#1772 | 1           |
| 0x1401f4a85#1778 | 0x1401f4af3#1794 | 0           |
| 0x1401f4adf#1793 | 0x1401f4af3#1794 | 1           |
| 0x1401f4a85#1800 | 0x1401f4af3#1816 | 0           |
| 0x1401f4adf#1815 | 0x1401f4af3#1816 | 1           |
| 0x1401f4a85#1822 | 0x1401f4af3#1838 | 0           |
| 0x1401f4adf#1837 | 0x1401f4af3#1838 | 1           |
| 0x1401f4a85#1845 | 0x1401f4af3#1861 | 0           |
| 0x1401f4adf#1860 | 0x1401f4af3#1861 | 1           |
| 0x1401f4a85#1889 | 0x1401f4af3#1905 | 0           |
| 0x1401f4adf#1904 | 0x1401f4af3#1905 | 1           |
| 0x1401f4a85#1911 | 0x1401f4af3#1927 | 0           |
| 0x1401f4adf#1926 | 0x1401f4af3#1927 | 1           |
| 0x1401f4a85#1933 | 0x1401f4af3#1949 | 0           |
| 0x1401f4adf#1948 | 0x1401f4af3#1949 | 1           |
| 0x1401f4af6#2065 | 0x1401f4af6#1484 | 1           |
| 0x1401f4af3#1530 | 0x1401f4af6#1521 | 0           |
| 0x1401f4af6#1521 | 0x1401f4af6#1522 | 0           |
| 0x1401f4af9#2066 | 0x1401f4af9#361  | 1           |
| 0x1401f4af6#1522 | 0x1401f4af9#1514 | 0           |
| 0x1401f4afd#2067 | 0x1401f4afd#364  | 1           |
| 0x1401f4af9#1514 | 0x1401f4afd#1515 | 0           |
| 0x1401f4b05#2106 | 0x1401f4b05#366  | 1           |
| 0x1401f4afd#1515 | 0x1401f4b05#1516 | 0           |
| 0x1401f4af3#1838 | 0x1401f4b0c#377  | 0           |
| 0x1401f4b0c#377  | 0x1401f4b0c#378  | 1           |
| 0x1401f4996#2048 | 0x1401f4b0c#2090 | 0           |
| 0x1401f4af3#1838 | 0x1401f4b12#379  | 0           |
| 0x1401f4b12#379  | 0x1401f4b12#380  | 0           |
| 0x1401f4b12#380  | 0x1401f4b1a#382  | 1           |
| 0x1401f4b1a#382  | 0x1401f4b20#391  | 1           |
| 0x1401f4b20#2107 | 0x1401f4b20#2087 | 0           |
| 0x1401f4af3#1772 | 0x1401f4b20#2107 | 0           |
| 0x1401f4b22#2068 | 0x1401f4b22#393  | 1           |
| 0x1401f4af3#1772 | 0x1401f4b22#2068 | 0           |
| 0x1401f4b22#393  | 0x1401f4b22#2108 | 0           |
| 0x1401f4b29#2110 | 0x1401f4b29#406  | 0           |
| 0x1401f4b29#2069 | 0x1401f4b29#406  | 1           |
| 0x1401f4b29#2109 | 0x1401f4b29#2069 | 1           |
| 0x1401f4b22#2108 | 0x1401f4b29#2109 | 0           |
| 0x1401f4af3#1772 | 0x1401f4b29#2110 | 0           |
| 0x1401f4b31#2111 | 0x1401f4b31#423  | 1           |
| 0x1401f4b31#423  | 0x1401f4b31#425  | 1           |
| 0x1401f4996#2046 | 0x1401f4b31#2095 | 0           |
| 0x1401f4b29#406  | 0x1401f4b31#2111 | 0           |
| 0x1401f4af3#1838 | 0x1401f4b37#426  | 0           |
| 0x1401f4b37#426  | 0x1401f4b37#427  | 0           |
| 0x1401f4b45#1035 | 0x1401f4b45#433  | 1           |
| 0x1401f4b45#1067 | 0x1401f4b45#433  | 2           |
| 0x1401f4c09#2086 | 0x1401f4b45#1035 | 0           |
| 0x1401f4b20#2087 | 0x1401f4b45#1035 | 1           |
| 0x1401f4b22#2108 | 0x1401f4b45#1035 | 2           |
| 0x1401f4bf5#664  | 0x1401f4b45#1067 | 0           |
| 0x1401f4b12#380  | 0x1401f4b45#1067 | 1           |
| 0x1401f4b37#427  | 0x1401f4b45#1067 | 2           |
| 0x1401f4b45#1528 | 0x1401f4b45#1512 | 0           |
| 0x1401f4bd9#1527 | 0x1401f4b45#1528 | 0           |
| 0x1401f4b05#1516 | 0x1401f4b45#1528 | 1           |
| 0x1401f4b05#1516 | 0x1401f4b45#1528 | 2           |
| 0x1401f4b45#1660 | 0x1401f4b45#1655 | 0           |
| 0x1401f4bd9#1659 | 0x1401f4b45#1660 | 0           |
| 0x1401f4af3#1662 | 0x1401f4b45#1660 | 1           |
| 0x1401f4af3#1662 | 0x1401f4b45#1660 | 2           |
| 0x1401f4b45#1682 | 0x1401f4b45#1677 | 0           |
| 0x1401f4bd9#1681 | 0x1401f4b45#1682 | 0           |
| 0x1401f4af3#1684 | 0x1401f4b45#1682 | 1           |
| 0x1401f4af3#1684 | 0x1401f4b45#1682 | 2           |
| 0x1401f4b45#1704 | 0x1401f4b45#1699 | 0           |
| 0x1401f4bd9#1703 | 0x1401f4b45#1704 | 0           |
| 0x1401f4af3#1706 | 0x1401f4b45#1704 | 1           |
| 0x1401f4af3#1706 | 0x1401f4b45#1704 | 2           |
| 0x1401f4b45#1726 | 0x1401f4b45#1721 | 0           |
| 0x1401f4bd9#1725 | 0x1401f4b45#1726 | 0           |
| 0x1401f4af3#1728 | 0x1401f4b45#1726 | 1           |
| 0x1401f4af3#1728 | 0x1401f4b45#1726 | 2           |
| 0x1401f4b45#1748 | 0x1401f4b45#1743 | 0           |
| 0x1401f4bd9#1747 | 0x1401f4b45#1748 | 0           |
| 0x1401f4af3#1750 | 0x1401f4b45#1748 | 1           |
| 0x1401f4af3#1750 | 0x1401f4b45#1748 | 2           |
| 0x1401f4b45#1770 | 0x1401f4b45#1765 | 0           |
| 0x1401f4bd9#1769 | 0x1401f4b45#1770 | 0           |
| 0x1401f4af3#1772 | 0x1401f4b45#1770 | 1           |
| 0x1401f4af3#1772 | 0x1401f4b45#1770 | 2           |
| 0x1401f4b45#1792 | 0x1401f4b45#1787 | 0           |
| 0x1401f4bd9#1791 | 0x1401f4b45#1792 | 0           |
| 0x1401f4af3#1794 | 0x1401f4b45#1792 | 1           |
| 0x1401f4af3#1794 | 0x1401f4b45#1792 | 2           |
| 0x1401f4b45#1814 | 0x1401f4b45#1809 | 0           |
| 0x1401f4bd9#1813 | 0x1401f4b45#1814 | 0           |
| 0x1401f4af3#1816 | 0x1401f4b45#1814 | 1           |
| 0x1401f4af3#1816 | 0x1401f4b45#1814 | 2           |
| 0x1401f4b45#1836 | 0x1401f4b45#1831 | 0           |
| 0x1401f4bd9#1835 | 0x1401f4b45#1836 | 0           |
| 0x1401f4af3#1838 | 0x1401f4b45#1836 | 1           |
| 0x1401f4af3#1838 | 0x1401f4b45#1836 | 2           |
| 0x1401f4b45#1859 | 0x1401f4b45#1854 | 0           |
| 0x1401f4be5#647  | 0x1401f4b45#1859 | 0           |
| 0x1401f4af3#1861 | 0x1401f4b45#1859 | 1           |
| 0x1401f4af3#1861 | 0x1401f4b45#1859 | 2           |
| 0x1401f4b45#1903 | 0x1401f4b45#1898 | 0           |
| 0x1401f4bd9#641  | 0x1401f4b45#1903 | 0           |
| 0x1401f4af3#1905 | 0x1401f4b45#1903 | 1           |
| 0x1401f4af3#1905 | 0x1401f4b45#1903 | 2           |
| 0x1401f4b45#1925 | 0x1401f4b45#1920 | 0           |
| 0x1401f4bdd#644  | 0x1401f4b45#1925 | 0           |
| 0x1401f4af3#1927 | 0x1401f4b45#1925 | 1           |
| 0x1401f4af3#1927 | 0x1401f4b45#1925 | 2           |
| 0x1401f4b45#1947 | 0x1401f4b45#1942 | 0           |
| 0x1401f4bd9#1946 | 0x1401f4b45#1947 | 0           |
| 0x1401f4af3#1949 | 0x1401f4b45#1947 | 1           |
| 0x1401f4af3#1949 | 0x1401f4b45#1947 | 2           |
| 0x1401f4996#2051 | 0x1401f4b4a#2091 | 0           |
| 0x1401f4adf#1837 | 0x1401f4b58#504  | 1           |
| 0x1401f4b58#504  | 0x1401f4b58#508  | 1           |
| 0x1401f4b4f#2070 | 0x1401f4b58#2083 | 0           |
| 0x1401f4adf#1771 | 0x1401f4b58#2084 | 0           |
| 0x1401f4b58#2083 | 0x1401f4b5c#1012 | 0           |
| 0x1401f4b58#2084 | 0x1401f4b5c#1012 | 1           |
| 0x1401f4b61#2112 | 0x1401f4b61#515  | 0           |
| 0x1401f4adf#1815 | 0x1401f4b61#2112 | 0           |
| 0x1401f4b6b#2072 | 0x1401f4b70#522  | 1           |
| 0x1401f4b66#2071 | 0x1401f4b70#522  | 2           |
| 0x1401f4adf#1529 | 0x1401f4b70#1506 | 0           |
| 0x1401f4adf#1661 | 0x1401f4b70#1649 | 0           |
| 0x1401f4adf#1683 | 0x1401f4b70#1671 | 0           |
| 0x1401f4adf#1705 | 0x1401f4b70#1693 | 0           |
| 0x1401f4b5c#1012 | 0x1401f4b70#1715 | 0           |
| 0x1401f4b61#515  | 0x1401f4b70#1737 | 0           |
| 0x1401f4adf#1771 | 0x1401f4b70#1759 | 0           |
| 0x1401f4adf#1793 | 0x1401f4b70#1781 | 0           |
| 0x1401f4adf#1815 | 0x1401f4b70#1803 | 0           |
| 0x1401f4adf#1837 | 0x1401f4b70#1825 | 0           |
| 0x1401f4adf#1860 | 0x1401f4b70#1848 | 0           |
| 0x1401f4adf#1882 | 0x1401f4b70#1870 | 0           |
| 0x1401f4adf#1904 | 0x1401f4b70#1892 | 0           |
| 0x1401f4adf#1926 | 0x1401f4b70#1914 | 0           |
| 0x1401f4adf#1948 | 0x1401f4b70#1936 | 0           |
| 0x1401f4b70#522  | 0x1401f4b70#2113 | 0           |
| 0x1401f4b76#2073 | 0x1401f4b76#524  | 1           |
| 0x1401f4b70#2113 | 0x1401f4b76#2073 | 0           |
| 0x1401f4b76#524  | 0x1401f4b7b#535  | 1           |
| 0x1401f4b7b#535  | 0x1401f4b7b#536  | 1           |
| 0x1401f4b70#2113 | 0x1401f4b7b#2089 | 0           |
| 0x1401f4b70#2113 | 0x1401f4b7d#537  | 1           |
| 0x1401f4b80#2114 | 0x1401f4b80#2088 | 0           |
| 0x1401f4b7d#537  | 0x1401f4b80#2114 | 0           |
| 0x1401f4b80#2088 | 0x1401f4b85#1036 | 0           |
| 0x1401f4b7b#2089 | 0x1401f4b85#1036 | 1           |
| 0x1401f4b8a#2074 | 0x1401f4b8a#544  | 1           |
| 0x1401f4b70#2113 | 0x1401f4b8a#2074 | 0           |
| 0x1401f4b93#2075 | 0x1401f4b9b#554  | 2           |
| 0x1401f4b70#1506 | 0x1401f4b9b#1507 | 0           |
| 0x1401f4b70#1649 | 0x1401f4b9b#1650 | 0           |
| 0x1401f4b70#1671 | 0x1401f4b9b#1672 | 0           |
| 0x1401f4b70#1693 | 0x1401f4b9b#1694 | 0           |
| 0x1401f4b85#1036 | 0x1401f4b9b#1716 | 0           |
| 0x1401f4b8a#544  | 0x1401f4b9b#1738 | 0           |
| 0x1401f4b70#1759 | 0x1401f4b9b#1760 | 0           |
| 0x1401f4b70#1781 | 0x1401f4b9b#1782 | 0           |
| 0x1401f4b70#1803 | 0x1401f4b9b#1804 | 0           |
| 0x1401f4b70#1825 | 0x1401f4b9b#1826 | 0           |
| 0x1401f4b70#1848 | 0x1401f4b9b#1849 | 0           |
| 0x1401f4b70#1870 | 0x1401f4b9b#1871 | 0           |
| 0x1401f4b70#1892 | 0x1401f4b9b#1893 | 0           |
| 0x1401f4b70#1914 | 0x1401f4b9b#1915 | 0           |
| 0x1401f4b70#1936 | 0x1401f4b9b#1937 | 0           |
| 0x1401f4b9b#1915 | 0x1401f4ba9#568  | 1           |
| 0x1401f4ba9#568  | 0x1401f4ba9#569  | 1           |
| 0x1401f4b9b#1915 | 0x1401f4bab#571  | 0           |
| 0x1401f4b9b#1871 | 0x1401f4bae#1840 | 0           |
| 0x1401f4b9b#1849 | 0x1401f4bae#1840 | 1           |
| 0x1401f4bab#571  | 0x1401f4bb3#582  | 0           |
| 0x1401f4bb3#582  | 0x1401f4bba#591  | 1           |
| 0x1401f4bae#1840 | 0x1401f4bba#2085 | 0           |
| 0x1401f4bae#1840 | 0x1401f4bbc#592  | 0           |
| 0x1401f4bbc#2115 | 0x1401f4bbc#593  | 1           |
| 0x1401f4bbc#592  | 0x1401f4bbc#2115 | 0           |
| 0x1401f4bae#1840 | 0x1401f4bc0#597  | 0           |
| 0x1401f4bbc#593  | 0x1401f4bc0#597  | 1           |
| 0x1401f4bc0#597  | 0x1401f4bc3#606  | 0           |
| 0x1401f4bc3#606  | 0x1401f4bcb#623  | 0           |
| 0x1401f4bcb#623  | 0x1401f4bcb#625  | 1           |
| 0x1401f4b9b#1915 | 0x1401f4bcd#628  | 0           |
| 0x1401f4bd4#1033 | 0x1401f4bd4#638  | 1           |
| 0x1401f4bd4#1065 | 0x1401f4bd4#638  | 2           |
| 0x1401f4bba#2085 | 0x1401f4bd4#1033 | 0           |
| 0x1401f4bbc#593  | 0x1401f4bd4#1033 | 1           |
| 0x1401f4bab#571  | 0x1401f4bd4#1065 | 0           |
| 0x1401f4bcd#628  | 0x1401f4bd4#1065 | 1           |
| 0x1401f4b9b#1507 | 0x1401f4bd4#1509 | 0           |
| 0x1401f4b9b#1650 | 0x1401f4bd4#1652 | 0           |
| 0x1401f4b9b#1672 | 0x1401f4bd4#1674 | 0           |
| 0x1401f4b9b#1694 | 0x1401f4bd4#1696 | 0           |
| 0x1401f4b9b#1716 | 0x1401f4bd4#1718 | 0           |
| 0x1401f4b9b#1738 | 0x1401f4bd4#1740 | 0           |
| 0x1401f4b9b#1760 | 0x1401f4bd4#1762 | 0           |
| 0x1401f4b9b#1782 | 0x1401f4bd4#1784 | 0           |
| 0x1401f4b9b#1804 | 0x1401f4bd4#1806 | 0           |
| 0x1401f4b9b#1826 | 0x1401f4bd4#1828 | 0           |
| 0x1401f4b9b#1937 | 0x1401f4bd4#1939 | 0           |
| 0x1401f4b9b#1507 | 0x1401f4bd9#1527 | 0           |
| 0x1401f4bd4#1509 | 0x1401f4bd9#1527 | 1           |
| 0x1401f4b9b#1650 | 0x1401f4bd9#1659 | 0           |
| 0x1401f4bd4#1652 | 0x1401f4bd9#1659 | 1           |
| 0x1401f4b9b#1672 | 0x1401f4bd9#1681 | 0           |
| 0x1401f4bd4#1674 | 0x1401f4bd9#1681 | 1           |
| 0x1401f4b9b#1694 | 0x1401f4bd9#1703 | 0           |
| 0x1401f4bd4#1696 | 0x1401f4bd9#1703 | 1           |
| 0x1401f4b9b#1716 | 0x1401f4bd9#1725 | 0           |
| 0x1401f4bd4#1718 | 0x1401f4bd9#1725 | 1           |
| 0x1401f4b9b#1738 | 0x1401f4bd9#1747 | 0           |
| 0x1401f4bd4#1740 | 0x1401f4bd9#1747 | 1           |
| 0x1401f4b9b#1760 | 0x1401f4bd9#1769 | 0           |
| 0x1401f4bd4#1762 | 0x1401f4bd9#1769 | 1           |
| 0x1401f4b9b#1782 | 0x1401f4bd9#1791 | 0           |
| 0x1401f4bd4#1784 | 0x1401f4bd9#1791 | 1           |
| 0x1401f4b9b#1804 | 0x1401f4bd9#1813 | 0           |
| 0x1401f4bd4#1806 | 0x1401f4bd9#1813 | 1           |
| 0x1401f4b9b#1826 | 0x1401f4bd9#1835 | 0           |
| 0x1401f4bd4#1828 | 0x1401f4bd9#1835 | 1           |
| 0x1401f4b9b#1937 | 0x1401f4bd9#1946 | 0           |
| 0x1401f4bd4#1939 | 0x1401f4bd9#1946 | 1           |
| 0x1401f4bd9#1835 | 0x1401f4bf3#661  | 0           |
| 0x1401f4bf3#661  | 0x1401f4bf3#662  | 1           |
| 0x1401f4996#2053 | 0x1401f4bf3#2093 | 0           |
| 0x1401f4bd9#1835 | 0x1401f4bf5#663  | 0           |
| 0x1401f4bf5#663  | 0x1401f4bf5#664  | 0           |
| 0x1401f4bf5#664  | 0x1401f4c02#670  | 1           |
| 0x1401f4c02#670  | 0x1401f4c09#679  | 1           |
| 0x1401f4c09#2117 | 0x1401f4c09#2086 | 0           |
| 0x1401f4bd9#1769 | 0x1401f4c09#2117 | 0           |
| 0x1401f4c0f#2076 | 0x1401f4c0f#681  | 1           |
| 0x1401f4bd9#1769 | 0x1401f4c0f#2076 | 0           |
| 0x1401f4c16#2119 | 0x1401f4c16#694  | 0           |
| 0x1401f4c16#2077 | 0x1401f4c16#694  | 1           |
| 0x1401f4c16#2118 | 0x1401f4c16#2077 | 1           |
| 0x1401f4c0f#681  | 0x1401f4c16#2118 | 0           |
| 0x1401f4bd9#1769 | 0x1401f4c16#2119 | 0           |
| 0x1401f4c1e#2120 | 0x1401f4c1e#711  | 0           |
| 0x1401f4c1e#711  | 0x1401f4c1e#713  | 1           |
| 0x1401f4c16#694  | 0x1401f4c1e#2120 | 0           |
| 0x1401f4bd9#1835 | 0x1401f4c20#714  | 0           |
| 0x1401f4c20#714  | 0x1401f4c20#715  | 0           |
| 0x1401f4c0f#681  | 0x1401f4c2b#720  | 1           |
| 0x1401f4c20#715  | 0x1401f4c2b#720  | 2           |
| 0x1401f4bd9#1527 | 0x1401f4c2b#1510 | 0           |
| 0x1401f4bd9#1659 | 0x1401f4c2b#1653 | 0           |
| 0x1401f4bd9#1681 | 0x1401f4c2b#1675 | 0           |
| 0x1401f4bd9#1703 | 0x1401f4c2b#1697 | 0           |
| 0x1401f4bd9#1725 | 0x1401f4c2b#1719 | 0           |
| 0x1401f4bd9#1747 | 0x1401f4c2b#1741 | 0           |
| 0x1401f4bd9#1769 | 0x1401f4c2b#1763 | 0           |
| 0x1401f4bd9#1791 | 0x1401f4c2b#1785 | 0           |
| 0x1401f4bd9#1813 | 0x1401f4c2b#1807 | 0           |
| 0x1401f4bd9#1835 | 0x1401f4c2b#1829 | 0           |
| 0x1401f4be5#647  | 0x1401f4c2b#1852 | 0           |
| 0x1401f4bd9#641  | 0x1401f4c2b#1896 | 0           |
| 0x1401f4bdd#644  | 0x1401f4c2b#1918 | 0           |
| 0x1401f4bd9#1946 | 0x1401f4c2b#1940 | 0           |
| 0x1401f4996#2055 | 0x1401f4c30#2094 | 0           |
| 0x1401f4c37#2116 | 0x1401f4c37#724  | 0           |
| 0x1401f4b9b#1507 | 0x1401f4c37#1508 | 0           |
| 0x1401f4b9b#1650 | 0x1401f4c37#1651 | 0           |
| 0x1401f4b9b#1672 | 0x1401f4c37#1673 | 0           |
| 0x1401f4b9b#1694 | 0x1401f4c37#1695 | 0           |
| 0x1401f4b9b#1716 | 0x1401f4c37#1717 | 0           |
| 0x1401f4b9b#1738 | 0x1401f4c37#1739 | 0           |
| 0x1401f4b9b#1760 | 0x1401f4c37#1761 | 0           |
| 0x1401f4b9b#1782 | 0x1401f4c37#1783 | 0           |
| 0x1401f4b9b#1804 | 0x1401f4c37#1805 | 0           |
| 0x1401f4b9b#1826 | 0x1401f4c37#1827 | 0           |
| 0x1401f4b9b#1849 | 0x1401f4c37#1850 | 0           |
| 0x1401f4b9b#1893 | 0x1401f4c37#1894 | 0           |
| 0x1401f4b9b#1915 | 0x1401f4c37#1916 | 0           |
| 0x1401f4b9b#1937 | 0x1401f4c37#1938 | 0           |
| 0x1401f4c37#723  | 0x1401f4c37#2116 | 0           |
| 0x1401f4b31#2095 | 0x1401f4c39#1082 | 0           |
| 0x1401f4996#2049 | 0x1401f4c39#1082 | 1           |
| 0x1401f4c37#2078 | 0x1401f4c39#1082 | 2           |
| 0x1401f4b05#1516 | 0x1401f4c39#1526 | 0           |
| 0x1401f4bd9#1527 | 0x1401f4c39#1526 | 1           |
| 0x1401f4c37#1508 | 0x1401f4c39#1526 | 2           |
| 0x1401f4af3#1662 | 0x1401f4c39#1658 | 0           |
| 0x1401f4bd9#1659 | 0x1401f4c39#1658 | 1           |
| 0x1401f4c37#1651 | 0x1401f4c39#1658 | 2           |
| 0x1401f4af3#1684 | 0x1401f4c39#1680 | 0           |
| 0x1401f4bd9#1681 | 0x1401f4c39#1680 | 1           |
| 0x1401f4c37#1673 | 0x1401f4c39#1680 | 2           |
| 0x1401f4af3#1706 | 0x1401f4c39#1702 | 0           |
| 0x1401f4bd9#1703 | 0x1401f4c39#1702 | 1           |
| 0x1401f4c37#1695 | 0x1401f4c39#1702 | 2           |
| 0x1401f4af3#1728 | 0x1401f4c39#1724 | 0           |
| 0x1401f4bd9#1725 | 0x1401f4c39#1724 | 1           |
| 0x1401f4c37#1717 | 0x1401f4c39#1724 | 2           |
| 0x1401f4af3#1750 | 0x1401f4c39#1746 | 0           |
| 0x1401f4bd9#1747 | 0x1401f4c39#1746 | 1           |
| 0x1401f4c37#1739 | 0x1401f4c39#1746 | 2           |
| 0x1401f4af3#1772 | 0x1401f4c39#1768 | 0           |
| 0x1401f4bd9#1769 | 0x1401f4c39#1768 | 1           |
| 0x1401f4c37#1761 | 0x1401f4c39#1768 | 2           |
| 0x1401f4af3#1794 | 0x1401f4c39#1790 | 0           |
| 0x1401f4bd9#1791 | 0x1401f4c39#1790 | 1           |
| 0x1401f4c37#1783 | 0x1401f4c39#1790 | 2           |
| 0x1401f4af3#1816 | 0x1401f4c39#1812 | 0           |
| 0x1401f4bd9#1813 | 0x1401f4c39#1812 | 1           |
| 0x1401f4c37#1805 | 0x1401f4c39#1812 | 2           |
| 0x1401f4af3#1838 | 0x1401f4c39#1834 | 0           |
| 0x1401f4bd9#1835 | 0x1401f4c39#1834 | 1           |
| 0x1401f4c37#1827 | 0x1401f4c39#1834 | 2           |
| 0x1401f4af3#1861 | 0x1401f4c39#1857 | 0           |
| 0x1401f4be5#647  | 0x1401f4c39#1857 | 1           |
| 0x1401f4c37#1850 | 0x1401f4c39#1857 | 2           |
| 0x1401f4af3#1905 | 0x1401f4c39#1901 | 0           |
| 0x1401f4bd9#641  | 0x1401f4c39#1901 | 1           |
| 0x1401f4c37#1894 | 0x1401f4c39#1901 | 2           |
| 0x1401f4af3#1927 | 0x1401f4c39#1923 | 0           |
| 0x1401f4bdd#644  | 0x1401f4c39#1923 | 1           |
| 0x1401f4c37#1916 | 0x1401f4c39#1923 | 2           |
| 0x1401f4af3#1949 | 0x1401f4c39#1945 | 0           |
| 0x1401f4bd9#1946 | 0x1401f4c39#1945 | 1           |
| 0x1401f4c37#1938 | 0x1401f4c39#1945 | 2           |
| 0x1401f4c3e#2121 | 0x1401f4c3e#477  | 0           |
| 0x1401f4c39#1082 | 0x1401f4c3e#741  | 0           |
| 0x1401f4c39#1526 | 0x1401f4c3e#1511 | 0           |
| 0x1401f4c39#1658 | 0x1401f4c3e#1654 | 0           |
| 0x1401f4c39#1680 | 0x1401f4c3e#1676 | 0           |
| 0x1401f4c39#1702 | 0x1401f4c3e#1698 | 0           |
| 0x1401f4c39#1724 | 0x1401f4c3e#1720 | 0           |
| 0x1401f4c39#1746 | 0x1401f4c3e#1742 | 0           |
| 0x1401f4c39#1768 | 0x1401f4c3e#1764 | 0           |
| 0x1401f4c39#1790 | 0x1401f4c3e#1786 | 0           |
| 0x1401f4c39#1812 | 0x1401f4c3e#1808 | 0           |
| 0x1401f4c39#1834 | 0x1401f4c3e#1830 | 0           |
| 0x1401f4c39#1857 | 0x1401f4c3e#1853 | 0           |
| 0x1401f4c39#1901 | 0x1401f4c3e#1897 | 0           |
| 0x1401f4c39#1923 | 0x1401f4c3e#1919 | 0           |
| 0x1401f4c39#1945 | 0x1401f4c3e#1941 | 0           |
| 0x1401f4c3e#476  | 0x1401f4c3e#2121 | 0           |
| 0x1401f49e7#2096 | 0x1401f4c40#1087 | 0           |
| 0x1401f4a47#2097 | 0x1401f4c40#1087 | 1           |
| 0x1401f4a52#2098 | 0x1401f4c40#1087 | 2           |
| 0x1401f4a5e#2099 | 0x1401f4c40#1087 | 3           |
| 0x1401f4c3e#741  | 0x1401f4c40#1087 | 4           |
| 0x1401f49df#1499 | 0x1401f4c40#1531 | 0           |
| 0x1401f4a3f#1502 | 0x1401f4c40#1531 | 1           |
| 0x1401f4a3f#1502 | 0x1401f4c40#1531 | 2           |
| 0x1401f4a3f#1502 | 0x1401f4c40#1531 | 3           |
| 0x1401f4c3e#1511 | 0x1401f4c40#1531 | 4           |
| 0x1401f4c43#2079 | 0x1401f4c43#1489 | 1           |
| 0x1401f4c40#1531 | 0x1401f4c43#1523 | 0           |
| 0x1401f4c43#1523 | 0x1401f4c43#1524 | 0           |
| 0x1401f4c46#2080 | 0x1401f4c46#486  | 1           |
| 0x1401f4c43#1524 | 0x1401f4c46#1518 | 0           |
| 0x1401f4c4a#2081 | 0x1401f4c4a#489  | 1           |
| 0x1401f4c46#1518 | 0x1401f4c4a#1519 | 0           |
| 0x1401f4c52#2122 | 0x1401f4c52#491  | 1           |
| 0x1401f4c4a#1519 | 0x1401f4c52#1520 | 0           |
| 0x1401f4c40#1087 | 0x1401f4c52#2092 | 0           |
| 0x1401f4b0c#2090 | 0x1401f4c55#1081 | 0           |
| 0x1401f4b4a#2091 | 0x1401f4c55#1081 | 1           |
| 0x1401f4c52#2092 | 0x1401f4c55#1081 | 2           |
| 0x1401f4bf3#2093 | 0x1401f4c55#1081 | 3           |
| 0x1401f4c30#2094 | 0x1401f4c55#1081 | 4           |
| 0x1401f4b05#1516 | 0x1401f4c55#1525 | 0           |
| 0x1401f4b45#1512 | 0x1401f4c55#1525 | 1           |
| 0x1401f4c52#1520 | 0x1401f4c55#1525 | 2           |
| 0x1401f4bd9#1527 | 0x1401f4c55#1525 | 3           |
| 0x1401f4c2b#1510 | 0x1401f4c55#1525 | 4           |
| 0x1401f4c55#1081 | 0x1401f4c62#448  | 0           |
| 0x1401f4c62#2123 | 0x1401f4c62#449  | 1           |
| 0x1401f4c62#448  | 0x1401f4c62#2123 | 0           |
| 0x1401f4c55#435  | 0x1401f4c7e#474  | 1           |
| 0x1401f4c55#1525 | 0x1401f4c7e#1513 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x1401f4af6#1483 | 1           |
| 0       | 0x1401f4af6#2065 | 0           |
| 0       | 0x1401f4af9#2066 | 0           |
| 0       | 0x1401f4afd#2067 | 0           |
| 0       | 0x1401f4b05#2106 | 0           |
| 0       | 0x1401f4b9b#554  | 1           |
| 0       | 0x1401f4c43#1488 | 1           |
| 0       | 0x1401f4c43#2079 | 0           |
| 0       | 0x1401f4c46#2080 | 0           |
| 0       | 0x1401f4c4a#2081 | 0           |
| 0       | 0x1401f4c52#2122 | 0           |
| 0       | 0x1401f4c55#435  | 0           |

## raw_result.value.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x1401f49df#77   | direct_call        | 0             |             |
| 0x1401f49e7#88   | conditional_branch |               | 1           |
| 0x1401f49f9#104  | direct_call        | 0             |             |
| 0x1401f4a32#140  | direct_call        | 0             |             |
| 0x1401f4a3f#149  | direct_call        | 0             |             |
| 0x1401f4a47#160  | conditional_branch |               | 1           |
| 0x1401f4a52#174  | conditional_branch |               | 1           |
| 0x1401f4a5e#188  | conditional_branch |               | 1           |
| 0x1401f4a85#220  | direct_call        | 0             |             |
| 0x1401f4aa3#246  | conditional_branch |               | 1           |
| 0x1401f4aaa#257  | conditional_branch |               | 1           |
| 0x1401f4ab9#275  | direct_call        | 0             |             |
| 0x1401f4ac1#286  | conditional_branch |               | 1           |
| 0x1401f4acd#316  | conditional_branch |               | 1           |
| 0x1401f4ada#332  | direct_call        | 0             |             |
| 0x1401f4af1#352  | conditional_branch |               | 1           |
| 0x1401f4af6#1483 | memory_write       | 1             | 2           |
| 0x1401f4af6#1484 | memory_write       | 1             | 2           |
| 0x1401f4af9#361  | memory_write       | 1             | 2           |
| 0x1401f4afd#364  | memory_write       | 1             | 2           |
| 0x1401f4b05#366  | memory_write       | 1             | 2           |
| 0x1401f4b0c#378  | conditional_branch |               | 1           |
| 0x1401f4b20#391  | conditional_branch |               | 1           |
| 0x1401f4b22#393  | memory_read        | 1             |             |
| 0x1401f4b31#425  | conditional_branch |               | 1           |
| 0x1401f4b45#433  | direct_call        | 0             |             |
| 0x1401f4b58#508  | conditional_branch |               | 1           |
| 0x1401f4b70#522  | direct_call        | 0             |             |
| 0x1401f4b76#524  | memory_read        | 1             |             |
| 0x1401f4b7b#536  | conditional_branch |               | 1           |
| 0x1401f4b7d#537  | memory_read        | 1             |             |
| 0x1401f4b8a#544  | memory_read        | 1             |             |
| 0x1401f4b9b#554  | direct_call        | 0             |             |
| 0x1401f4ba9#569  | conditional_branch |               | 1           |
| 0x1401f4bba#591  | conditional_branch |               | 1           |
| 0x1401f4bbc#593  | memory_read        | 1             |             |
| 0x1401f4bcb#625  | conditional_branch |               | 1           |
| 0x1401f4bd4#638  | direct_call        | 0             |             |
| 0x1401f4bf3#662  | conditional_branch |               | 1           |
| 0x1401f4c09#679  | conditional_branch |               | 1           |
| 0x1401f4c0f#681  | memory_read        | 1             |             |
| 0x1401f4c1e#713  | conditional_branch |               | 1           |
| 0x1401f4c2b#720  | direct_call        | 0             |             |
| 0x1401f4c37#724  | indirect_call      | 0             |             |
| 0x1401f4c3e#477  | indirect_call      | 0             |             |
| 0x1401f4c43#1488 | memory_write       | 1             | 2           |
| 0x1401f4c43#1489 | memory_write       | 1             | 2           |
| 0x1401f4c46#486  | memory_write       | 1             | 2           |
| 0x1401f4c4a#489  | memory_write       | 1             | 2           |
| 0x1401f4c52#491  | memory_write       | 1             | 2           |
| 0x1401f4c62#449  | memory_write       | 1             | 2           |

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

0x1401f4980

## normalized_result.procedure.name

FUN_1401f4980

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
| 0x1401f4980 | 0x1401f4c7e |

## normalized_result.procedure.body.total_bytes

767

## normalized_result.procedure.body.span_bytes

767

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f4980()

## normalized_result.procedure.locals

| description                                 | provenance               |
|---------------------------------------------|--------------------------|
| undefined local_128 @ Stack[-0x128]:1       | ghidra-function-database |
| undefined8 local_138 @ Stack[-0x138]:8      | ghidra-function-database |
| undefined8 local_140 @ Stack[-0x140]:8      | ghidra-function-database |
| undefined8 local_150 @ Stack[-0x150]:8      | ghidra-function-database |
| undefined8 local_158 @ Stack[-0x158]:8      | ghidra-function-database |
| undefined8 local_160 @ Stack[-0x160]:8      | ghidra-function-database |
| undefined1[16] local_170 @ Stack[-0x170]:16 | ghidra-function-database |
| undefined8 local_180 @ Stack[-0x180]:8      | ghidra-function-database |
| undefined8 local_188 @ Stack[-0x188]:8      | ghidra-function-database |
| undefined8 local_190 @ Stack[-0x190]:8      | ghidra-function-database |
| undefined4 local_194 @ Stack[-0x194]:4      | ghidra-function-database |
| undefined4 local_198 @ Stack[-0x198]:4      | ghidra-function-database |
| undefined8 local_1a0 @ Stack[-0x1a0]:8      | ghidra-function-database |
| undefined8 local_1a8 @ Stack[-0x1a8]:8      | ghidra-function-database |
| undefined local_20 @ Stack[-0x20]:1         | ghidra-function-database |
| undefined8 local_28 @ Stack[-0x28]:8        | ghidra-function-database |
| undefined local_c8 @ Stack[-0xc8]:1         | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8      | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8      | ghidra-function-database |
| undefined8 local_res8 @ Stack[0x8]:8        | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401f4980(undefined8 *param_1)

{
  code *pcVar1;
  LSTATUS LVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 ***pppuVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uStackY_1d0;
  undefined1 auStackY_1c8 [8];
  undefined1 auStackY_1c0 [24];
  DWORD local_198;
  DWORD local_194;
  HKEY local_190;
  undefined8 ***local_188;
  undefined8 *local_180;
  undefined8 ***local_170;
  undefined8 uStack_168;
  longlong local_160;
  ulonglong local_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 local_140;
  ulonglong local_138;
  BYTE local_128 [256];
  ulonglong local_28;
  
  puVar8 = auStackY_1c8;
  local_28 = DAT_1404c7ac0 ^ (ulonglong)auStackY_1c8;
  local_190 = (HKEY)0x0;
  LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000002,L"SOFTWARE\\Microsoft\\Cryptography",0,0x101,
                        &local_190);
  puVar9 = auStackY_1c8;
  if (LVar2 == 0) {
    FUN_14035fad0(local_128,0,0x100);
    local_194 = 0x100;
    local_198 = 0;
    LVar2 = RegQueryValueExW(local_190,L"MachineGuid",(LPDWORD)0x0,&local_198,local_128,&local_194);
    RegCloseKey(local_190);
    puVar9 = auStackY_1c8;
    if (((LVar2 == 0) && (puVar9 = auStackY_1c8, local_198 == 1)) &&
       (puVar9 = auStackY_1c8, local_194 != 0)) {
      local_170 = (undefined8 ****)0x0;
      uStack_168 = 0;
      local_160 = 0;
      local_158 = 0;
      FUN_1400017a0(&local_170,local_128,local_194 >> 1);
      ppppuVar6 = &local_170;
      if (7 < local_158) {
        ppppuVar6 = (undefined8 ****)local_170;
      }
      if (local_160 == 0) {
LAB_1401f4af3:
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0xf;
        *(undefined1 *)param_1 = 0;
        puVar9 = auStackY_1c8;
        if (local_158 < 8) goto LAB_1401f4c55;
        uVar7 = local_158 * 2 + 2;
        ppppuVar6 = (undefined8 ****)local_170;
        if (0xfff < uVar7) {
          ppppuVar6 = (undefined8 ****)local_170[-1];
          puVar8 = auStackY_1c8;
          if (0x1f < (ulonglong)((longlong)local_170 + (-8 - (longlong)ppppuVar6)))
          goto LAB_1401f4c39;
          uVar7 = local_158 * 2 + 0x29;
        }
      }
      else {
        lVar4 = (longlong)ppppuVar6 + local_160 * 2;
        lVar3 = thunk_FUN_14031f6e0(ppppuVar6,lVar4,0);
        if ((lVar3 != lVar4) && (lVar4 = lVar3 - (longlong)ppppuVar6 >> 1, lVar4 != -1)) {
          FUN_140029140(&local_170,lVar4,0);
        }
        if (local_160 == 0) goto LAB_1401f4af3;
        local_188 = &local_170;
        if (7 < local_158) {
          local_188 = local_170;
        }
        local_180 = (undefined8 *)local_160;
        pppuVar5 = (undefined8 ***)FUN_140028ed0(&local_150,&local_188);
        local_188 = pppuVar5;
        if ((undefined8 **)0xf < pppuVar5[3]) {
          local_188 = (undefined8 ***)*pppuVar5;
        }
        local_180 = pppuVar5[2];
        FUN_14030b220(param_1,&local_188);
        if (0xf < local_138) {
          uVar7 = local_138 + 1;
          lVar3 = CONCAT71(uStack_14f,local_150);
          lVar4 = lVar3;
          if (uVar7 < 0x1000) {
LAB_1401f4bd4:
            thunk_FUN_140327e20(lVar4,uVar7);
            goto LAB_1401f4bd9;
          }
          lVar4 = *(longlong *)(lVar3 + -8);
          if ((lVar3 - lVar4) - 8U < 0x20) {
            uVar7 = local_138 + 0x28;
            goto LAB_1401f4bd4;
          }
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar8 = auStackY_1c0;
LAB_1401f4c39:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar9 = puVar8 + 8;
          goto LAB_1401f4c40;
        }
LAB_1401f4bd9:
        local_140 = 0;
        local_138 = 0xf;
        local_150 = 0;
        puVar9 = auStackY_1c8;
        if (local_158 < 8) goto LAB_1401f4c55;
        uVar7 = local_158 * 2 + 2;
        ppppuVar6 = (undefined8 ****)local_170;
        if (0xfff < uVar7) {
          if ((ulonglong)((longlong)local_170 + (-8 - (longlong)local_170[-1])) < 0x20) {
            thunk_FUN_140327e20(local_170[-1],local_158 * 2 + 0x29);
            puVar9 = auStackY_1c8;
            goto LAB_1401f4c55;
          }
          goto LAB_1401f4c39;
        }
      }
      thunk_FUN_140327e20(ppppuVar6,uVar7);
      puVar9 = auStackY_1c8;
      goto LAB_1401f4c55;
    }
  }
LAB_1401f4c40:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
LAB_1401f4c55:
  *(undefined8 *)(puVar9 + -8) = 0x1401f4c67;
  return param_1;
}



## normalized_result.assembly

0x1401f4980: MOV qword ptr [RSP + 0x10], RBX,0x1401f4985: MOV qword ptr [RSP + 0x18], RSI,0x1401f498a: PUSH RBP,0x1401f498b: PUSH RDI,0x1401f498c: PUSH R14,0x1401f498e: LEA RBP, [RSP + -0xb0],0x1401f4996: SUB RSP, 0x1b0,0x1401f499d: MOV RAX, qword ptr [0x1404c7ac0],0x1401f49a4: XOR RAX, RSP,0x1401f49a7: MOV qword ptr [RBP + 0xa0], RAX,0x1401f49ae: MOV RDI, RCX,0x1401f49b1: MOV qword ptr [RSP + 0x38], RCX,0x1401f49b6: XOR R14D, R14D,0x1401f49b9: MOV qword ptr [RSP + 0x38], R14,0x1401f49be: LEA RAX, [RSP + 0x38],0x1401f49c3: MOV qword ptr [RSP + 0x20], RAX,0x1401f49c8: MOV R9D, 0x101,0x1401f49ce: XOR R8D, R8D,0x1401f49d1: LEA RDX, [0x14043c1c0],0x1401f49d8: MOV RCX, -0x7ffffffe,0x1401f49df: CALL qword ptr [0x14037a038],0x1401f49e5: TEST EAX, EAX,0x1401f49e7: JNZ 0x1401f4c40,0x1401f49ed: XOR EDX, EDX,0x1401f49ef: MOV R8D, 0x100,0x1401f49f5: LEA RCX, [RBP + -0x60],0x1401f49f9: CALL 0x14035fad0,0x1401f49fe: MOV dword ptr [RSP + 0x34], 0x100,0x1401f4a06: MOV dword ptr [RSP + 0x30], R14D,0x1401f4a0b: LEA RAX, [RSP + 0x34],0x1401f4a10: MOV qword ptr [RSP + 0x28], RAX,0x1401f4a15: LEA RAX, [RBP + -0x60],0x1401f4a19: MOV qword ptr [RSP + 0x20], RAX,0x1401f4a1e: LEA R9, [RSP + 0x30],0x1401f4a23: XOR R8D, R8D,0x1401f4a26: LEA RDX, [0x14040c848],0x1401f4a2d: MOV RCX, qword ptr [RSP + 0x38],0x1401f4a32: CALL qword ptr [0x14037a040],0x1401f4a38: MOV EBX, EAX,0x1401f4a3a: MOV RCX, qword ptr [RSP + 0x38],0x1401f4a3f: CALL qword ptr [0x14037a030],0x1401f4a45: TEST EBX, EBX,0x1401f4a47: JNZ 0x1401f4c40,0x1401f4a4d: CMP dword ptr [RSP + 0x30], 0x1,0x1401f4a52: JNZ 0x1401f4c40,0x1401f4a58: MOV EAX, dword ptr [RSP + 0x34],0x1401f4a5c: TEST EAX, EAX,0x1401f4a5e: JZ 0x1401f4c40,0x1401f4a64: XORPS XMM0, XMM0,0x1401f4a67: MOVUPS xmmword ptr [RSP + 0x58], XMM0,0x1401f4a6c: MOV qword ptr [RSP + 0x68], R14,0x1401f4a71: MOV qword ptr [RSP + 0x70], R14,0x1401f4a76: MOV R8D, EAX,0x1401f4a79: SHR R8, 0x1,0x1401f4a7c: LEA RDX, [RBP + -0x60],0x1401f4a80: LEA RCX, [RSP + 0x58],0x1401f4a85: CALL 0x1400017a0,0x1401f4a8a: NOP,0x1401f4a8b: MOV R8, qword ptr [RSP + 0x68],0x1401f4a90: LEA RSI, [RSP + 0x58],0x1401f4a95: MOV RCX, qword ptr [RSP + 0x58],0x1401f4a9a: MOV RDX, qword ptr [RSP + 0x70],0x1401f4a9f: CMP RDX, 0x7,0x1401f4aa3: CMOVA RSI, RCX,0x1401f4aa7: TEST R8, R8,0x1401f4aaa: JZ 0x1401f4af3,0x1401f4aac: LEA RBX, [RSI + R8*0x2],0x1401f4ab0: XOR R8D, R8D,0x1401f4ab3: MOV RDX, RBX,0x1401f4ab6: MOV RCX, RSI,0x1401f4ab9: CALL 0x140323ed0,0x1401f4abe: CMP RAX, RBX,0x1401f4ac1: JZ 0x1401f4adf,0x1401f4ac3: SUB RAX, RSI,0x1401f4ac6: SAR RAX, 0x1,0x1401f4ac9: CMP RAX, -0x1,0x1401f4acd: JZ 0x1401f4adf,0x1401f4acf: XOR R8D, R8D,0x1401f4ad2: MOV RDX, RAX,0x1401f4ad5: LEA RCX, [RSP + 0x58],0x1401f4ada: CALL 0x140029140,0x1401f4adf: MOV RCX, qword ptr [RSP + 0x58],0x1401f4ae4: MOV R8, qword ptr [RSP + 0x68],0x1401f4ae9: MOV RDX, qword ptr [RSP + 0x70],0x1401f4aee: TEST R8, R8,0x1401f4af1: JNZ 0x1401f4b4f,0x1401f4af3: XORPS XMM0, XMM0,0x1401f4af6: MOVUPS xmmword ptr [RDI], XMM0,0x1401f4af9: MOV qword ptr [RDI + 0x10], R14,0x1401f4afd: MOV qword ptr [RDI + 0x18], 0xf,0x1401f4b05: MOV byte ptr [RDI], 0x0,0x1401f4b08: CMP RDX, 0x7,0x1401f4b0c: JBE 0x1401f4c55,0x1401f4b12: LEA RAX, [0x2 + RDX*0x2],0x1401f4b1a: CMP RAX, 0x1000,0x1401f4b20: JC 0x1401f4b42,0x1401f4b22: MOV R8, qword ptr [RCX + -0x8],0x1401f4b26: SUB RCX, R8,0x1401f4b29: SUB RCX, 0x8,0x1401f4b2d: CMP RCX, 0x1f,0x1401f4b31: JA 0x1401f4c39,0x1401f4b37: LEA RAX, [0x29 + RDX*0x2],0x1401f4b3f: MOV RCX, R8,0x1401f4b42: MOV RDX, RAX,0x1401f4b45: CALL 0x1403272f0,0x1401f4b4a: JMP 0x1401f4c55,0x1401f4b4f: LEA RAX, [RSP + 0x58],0x1401f4b54: CMP RDX, 0x7,0x1401f4b58: CMOVA RAX, RCX,0x1401f4b5c: MOV qword ptr [RSP + 0x40], RAX,0x1401f4b61: MOV qword ptr [RSP + 0x48], R8,0x1401f4b66: LEA RDX, [RSP + 0x40],0x1401f4b6b: LEA RCX, [RSP + 0x78],0x1401f4b70: CALL 0x140028ed0,0x1401f4b75: NOP,0x1401f4b76: CMP qword ptr [RAX + 0x18], 0xf,0x1401f4b7b: JBE 0x1401f4b82,0x1401f4b7d: MOV RCX, qword ptr [RAX],0x1401f4b80: JMP 0x1401f4b85,0x1401f4b82: MOV RCX, RAX,0x1401f4b85: MOV qword ptr [RSP + 0x40], RCX,0x1401f4b8a: MOV RAX, qword ptr [RAX + 0x10],0x1401f4b8e: MOV qword ptr [RSP + 0x48], RAX,0x1401f4b93: LEA RDX, [RSP + 0x40],0x1401f4b98: MOV RCX, RDI,0x1401f4b9b: CALL 0x14030b220,0x1401f4ba0: NOP,0x1401f4ba1: MOV RDX, qword ptr [RBP + -0x70],0x1401f4ba5: CMP RDX, 0xf,0x1401f4ba9: JBE 0x1401f4bd9,0x1401f4bab: INC RDX,0x1401f4bae: MOV RCX, qword ptr [RSP + 0x78],0x1401f4bb3: CMP RDX, 0x1000,0x1401f4bba: JC 0x1401f4bd4,0x1401f4bbc: MOV RAX, qword ptr [RCX + -0x8],0x1401f4bc0: SUB RCX, RAX,0x1401f4bc3: SUB RCX, 0x8,0x1401f4bc7: CMP RCX, 0x1f,0x1401f4bcb: JA 0x1401f4c32,0x1401f4bcd: ADD RDX, 0x27,0x1401f4bd1: MOV RCX, RAX,0x1401f4bd4: CALL 0x1403272f0,0x1401f4bd9: MOV qword ptr [RBP + -0x78], R14,0x1401f4bdd: MOV qword ptr [RBP + -0x70], 0xf,0x1401f4be5: MOV byte ptr [RSP + 0x78], 0x0,0x1401f4bea: MOV RAX, qword ptr [RSP + 0x70],0x1401f4bef: CMP RAX, 0x7,0x1401f4bf3: JBE 0x1401f4c55,0x1401f4bf5: LEA RDX, [0x2 + RAX*0x2],0x1401f4bfd: MOV RCX, qword ptr [RSP + 0x58],0x1401f4c02: CMP RDX, 0x1000,0x1401f4c09: JC 0x1401f4b45,0x1401f4c0f: MOV R8, qword ptr [RCX + -0x8],0x1401f4c13: SUB RCX, R8,0x1401f4c16: SUB RCX, 0x8,0x1401f4c1a: CMP RCX, 0x1f,0x1401f4c1e: JA 0x1401f4c39,0x1401f4c20: LEA RDX, [0x29 + RAX*0x2],0x1401f4c28: MOV RCX, R8,0x1401f4c2b: CALL 0x1403272f0,0x1401f4c30: JMP 0x1401f4c55,0x1401f4c32: MOV ECX, 0x5,0x1401f4c37: INT 0x29,0x1401f4c39: MOV ECX, 0x5,0x1401f4c3e: INT 0x29,0x1401f4c40: XORPS XMM0, XMM0,0x1401f4c43: MOVUPS xmmword ptr [RDI], XMM0,0x1401f4c46: MOV qword ptr [RDI + 0x10], R14,0x1401f4c4a: MOV qword ptr [RDI + 0x18], 0xf,0x1401f4c52: MOV byte ptr [RDI], R14B,0x1401f4c55: MOV RAX, RDI,0x1401f4c58: MOV RCX, qword ptr [RBP + 0xa0],0x1401f4c5f: XOR RCX, RSP,0x1401f4c62: CALL 0x140327740,0x1401f4c67: LEA R11, [RSP + 0x1b0],0x1401f4c6f: MOV RBX, qword ptr [R11 + 0x28],0x1401f4c73: MOV RSI, qword ptr [R11 + 0x30],0x1401f4c77: MOV RSP, R11,0x1401f4c7a: POP R14,0x1401f4c7c: POP RDI,0x1401f4c7d: POP RBP,0x1401f4c7e: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f0c70 | FUN_1401f0c70 | [object Object] | [object Object] |
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f5db0 | FUN_1401f5db0 | [object Object] | [object Object] |
| 0x1401f6280 | FUN_1401f6280 | [object Object] | [object Object] |

## normalized_result.callees

| address      | name                           | classification  | body            |
|--------------|--------------------------------|-----------------|-----------------|
| EXTERNAL:0x7 | ADVAPI32.DLL::RegCloseKey      | [object Object] | [object Object] |
| EXTERNAL:0x8 | ADVAPI32.DLL::RegOpenKeyExW    | [object Object] | [object Object] |
| EXTERNAL:0x9 | ADVAPI32.DLL::RegQueryValueExW | [object Object] | [object Object] |
| 0x1400017a0  | FUN_1400017a0                  | [object Object] | [object Object] |
| 0x140028ed0  | FUN_140028ed0                  | [object Object] | [object Object] |
| 0x140029140  | FUN_140029140                  | [object Object] | [object Object] |
| 0x14030b220  | FUN_14030b220                  | [object Object] | [object Object] |
| 0x140323ed0  | thunk_FUN_14031f6e0            | [object Object] | [object Object] |
| 0x1403272f0  | thunk_FUN_140327e20            | [object Object] | [object Object] |
| 0x140327740  | __security_check_cookie        | [object Object] | [object Object] |
| 0x14035fad0  | FUN_14035fad0                  | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f12f6    | 0x1401f4980    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f29a9    | 0x1401f4980    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f5e89    | 0x1401f4980    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6509    | 0x1401f4980    | [object Object]  | [object Object]  | [object Object] |
| 0x1404df9e4    | 0x1401f4980    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f4980    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401f4985    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401f498e    | stack:0xffffffffffffff38 | [object Object]  |                  | [object Object] |
| 0x1401f499d    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f49a7    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f49b1    | stack:0xfffffffffffffe70 | [object Object]  |                  | [object Object] |
| 0x1401f49b9    | stack:0xfffffffffffffe70 | [object Object]  |                  | [object Object] |
| 0x1401f49be    | stack:0xfffffffffffffe70 | [object Object]  |                  | [object Object] |
| 0x1401f49c3    | stack:0xfffffffffffffe58 | [object Object]  |                  | [object Object] |
| 0x1401f49d1    | 0x14043c1c0              | [object Object]  |                  | [object Object] |
| 0x1401f49df    | EXTERNAL:0x8             | [object Object]  | [object Object]  | [object Object] |
| 0x1401f49df    | 0x14037a038              | [object Object]  |                  | [object Object] |
| 0x1401f49e7    | 0x1401f4c40              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f49f5    | stack:0xfffffffffffffed8 | [object Object]  |                  | [object Object] |
| 0x1401f49f9    | 0x14035fad0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f49fe    | stack:0xfffffffffffffe6c | [object Object]  |                  | [object Object] |
| 0x1401f4a06    | stack:0xfffffffffffffe68 | [object Object]  |                  | [object Object] |
| 0x1401f4a0b    | stack:0xfffffffffffffe6c | [object Object]  |                  | [object Object] |
| 0x1401f4a10    | stack:0xfffffffffffffe60 | [object Object]  |                  | [object Object] |
| 0x1401f4a15    | stack:0xfffffffffffffed8 | [object Object]  |                  | [object Object] |
| 0x1401f4a19    | stack:0xfffffffffffffe58 | [object Object]  |                  | [object Object] |
| 0x1401f4a1e    | stack:0xfffffffffffffe68 | [object Object]  |                  | [object Object] |
| 0x1401f4a26    | 0x14040c848              | [object Object]  |                  | [object Object] |
| 0x1401f4a2d    | stack:0xfffffffffffffe70 | [object Object]  |                  | [object Object] |
| 0x1401f4a32    | EXTERNAL:0x9             | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a32    | 0x14037a040              | [object Object]  |                  | [object Object] |
| 0x1401f4a3a    | stack:0xfffffffffffffe70 | [object Object]  |                  | [object Object] |
| 0x1401f4a3f    | EXTERNAL:0x7             | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a3f    | 0x14037a030              | [object Object]  |                  | [object Object] |
| 0x1401f4a47    | 0x1401f4c40              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a4d    | stack:0xfffffffffffffe68 | [object Object]  |                  | [object Object] |
| 0x1401f4a52    | 0x1401f4c40              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a58    | stack:0xfffffffffffffe6c | [object Object]  |                  | [object Object] |
| 0x1401f4a5e    | 0x1401f4c40              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a67    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4a6c    | stack:0xfffffffffffffea0 | [object Object]  |                  | [object Object] |
| 0x1401f4a71    | stack:0xfffffffffffffea8 | [object Object]  |                  | [object Object] |
| 0x1401f4a7c    | stack:0xfffffffffffffed8 | [object Object]  |                  | [object Object] |
| 0x1401f4a80    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4a85    | 0x1400017a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4a8b    | stack:0xfffffffffffffea0 | [object Object]  |                  | [object Object] |
| 0x1401f4a90    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4a95    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4a9a    | stack:0xfffffffffffffea8 | [object Object]  |                  | [object Object] |
| 0x1401f4aaa    | 0x1401f4af3              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ab9    | 0x140323ed0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ac1    | 0x1401f4adf              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4acd    | 0x1401f4adf              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ad5    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4ada    | 0x140029140              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4adf    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4adf    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4ae4    | stack:0xfffffffffffffea0 | [object Object]  |                  | [object Object] |
| 0x1401f4ae9    | stack:0xfffffffffffffea8 | [object Object]  |                  | [object Object] |
| 0x1401f4af1    | 0x1401f4b4f              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b0c    | 0x1401f4c55              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b20    | 0x1401f4b42              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b31    | 0x1401f4c39              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b45    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b4a    | 0x1401f4c55              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b4f    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4b5c    | stack:0xfffffffffffffe78 | [object Object]  |                  | [object Object] |
| 0x1401f4b61    | stack:0xfffffffffffffe80 | [object Object]  |                  | [object Object] |
| 0x1401f4b66    | stack:0xfffffffffffffe78 | [object Object]  |                  | [object Object] |
| 0x1401f4b6b    | stack:0xfffffffffffffeb0 | [object Object]  |                  | [object Object] |
| 0x1401f4b70    | 0x140028ed0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b7b    | 0x1401f4b82              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b80    | 0x1401f4b85              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4b85    | stack:0xfffffffffffffe78 | [object Object]  |                  | [object Object] |
| 0x1401f4b8e    | stack:0xfffffffffffffe80 | [object Object]  |                  | [object Object] |
| 0x1401f4b93    | stack:0xfffffffffffffe78 | [object Object]  |                  | [object Object] |
| 0x1401f4b9b    | 0x14030b220              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4ba1    | stack:0xfffffffffffffec8 | [object Object]  |                  | [object Object] |
| 0x1401f4ba9    | 0x1401f4bd9              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4bae    | stack:0xfffffffffffffeb0 | [object Object]  |                  | [object Object] |
| 0x1401f4bba    | 0x1401f4bd4              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4bcb    | 0x1401f4c32              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4bd4    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4bd9    | stack:0xfffffffffffffec0 | [object Object]  |                  | [object Object] |
| 0x1401f4bdd    | stack:0xfffffffffffffec8 | [object Object]  |                  | [object Object] |
| 0x1401f4be5    | stack:0xfffffffffffffeb0 | [object Object]  |                  | [object Object] |
| 0x1401f4bea    | stack:0xfffffffffffffea8 | [object Object]  |                  | [object Object] |
| 0x1401f4bf3    | 0x1401f4c55              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4bfd    | stack:0xfffffffffffffe90 | [object Object]  |                  | [object Object] |
| 0x1401f4c09    | 0x1401f4b45              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4c1e    | 0x1401f4c39              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4c2b    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4c30    | 0x1401f4c55              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4c58    | stack:0xffffffffffffffd8 | [object Object]  |                  | [object Object] |
| 0x1401f4c62    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4c67    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f4c6f    | stack:0x8                | [object Object]  |                  | [object Object] |
| 0x1401f4c73    | stack:0x10               | [object Object]  |                  | [object Object] |

## normalized_result.referenced_strings

| address     | value                           | source_address |
|-------------|---------------------------------|----------------|
| 0x14040c848 | MachineGuid                     | 0x1401f4a26    |
| 0x14043c1c0 | SOFTWARE\Microsoft\Cryptography | 0x1401f49d1    |

## normalized_result.referenced_names

| address      | value                                       | source_address |
|--------------|---------------------------------------------|----------------|
| 0x1400017a0  | FUN_1400017a0                               | 0x1401f4a85    |
| 0x140028ed0  | FUN_140028ed0                               | 0x1401f4b70    |
| 0x140029140  | FUN_140029140                               | 0x1401f4ada    |
| 0x1401f4adf  | LAB_1401f4adf                               | 0x1401f4ac1    |
| 0x1401f4adf  | LAB_1401f4adf                               | 0x1401f4acd    |
| 0x1401f4af3  | LAB_1401f4af3                               | 0x1401f4aaa    |
| 0x1401f4b42  | LAB_1401f4b42                               | 0x1401f4b20    |
| 0x1401f4b45  | LAB_1401f4b45                               | 0x1401f4c09    |
| 0x1401f4b4f  | LAB_1401f4b4f                               | 0x1401f4af1    |
| 0x1401f4b82  | LAB_1401f4b82                               | 0x1401f4b7b    |
| 0x1401f4b85  | LAB_1401f4b85                               | 0x1401f4b80    |
| 0x1401f4bd4  | LAB_1401f4bd4                               | 0x1401f4bba    |
| 0x1401f4bd9  | LAB_1401f4bd9                               | 0x1401f4ba9    |
| 0x1401f4c32  | LAB_1401f4c32                               | 0x1401f4bcb    |
| 0x1401f4c39  | LAB_1401f4c39                               | 0x1401f4b31    |
| 0x1401f4c39  | LAB_1401f4c39                               | 0x1401f4c1e    |
| 0x1401f4c40  | LAB_1401f4c40                               | 0x1401f49e7    |
| 0x1401f4c40  | LAB_1401f4c40                               | 0x1401f4a47    |
| 0x1401f4c40  | LAB_1401f4c40                               | 0x1401f4a52    |
| 0x1401f4c40  | LAB_1401f4c40                               | 0x1401f4a5e    |
| 0x1401f4c55  | LAB_1401f4c55                               | 0x1401f4b0c    |
| 0x1401f4c55  | LAB_1401f4c55                               | 0x1401f4b4a    |
| 0x1401f4c55  | LAB_1401f4c55                               | 0x1401f4bf3    |
| 0x1401f4c55  | LAB_1401f4c55                               | 0x1401f4c30    |
| 0x14030b220  | FUN_14030b220                               | 0x1401f4b9b    |
| 0x140323ed0  | thunk_FUN_14031f6e0                         | 0x1401f4ab9    |
| 0x1403272f0  | thunk_FUN_140327e20                         | 0x1401f4b45    |
| 0x1403272f0  | thunk_FUN_140327e20                         | 0x1401f4bd4    |
| 0x1403272f0  | thunk_FUN_140327e20                         | 0x1401f4c2b    |
| 0x140327740  | __security_check_cookie                     | 0x1401f4c62    |
| 0x14035fad0  | FUN_14035fad0                               | 0x1401f49f9    |
| 0x14037a030  | PTR_RegCloseKey_14037a030                   | 0x1401f4a3f    |
| 0x14037a038  | PTR_RegOpenKeyExW_14037a038                 | 0x1401f49df    |
| 0x14037a040  | PTR_RegQueryValueExW_14037a040              | 0x1401f4a32    |
| 0x14040c848  | u_MachineGuid_14040c848                     | 0x1401f4a26    |
| 0x14043c1c0  | u_SOFTWARE\Microsoft\Cryptography_14043c1c0 | 0x1401f49d1    |
| 0x1404c7ac0  | DAT_1404c7ac0                               | 0x1401f499d    |
| EXTERNAL:0x7 | ADVAPI32.DLL::RegCloseKey                   | 0x1401f4a3f    |
| EXTERNAL:0x8 | ADVAPI32.DLL::RegOpenKeyExW                 | 0x1401f49df    |
| EXTERNAL:0x9 | ADVAPI32.DLL::RegQueryValueExW              | 0x1401f4a32    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f4980 | 0x1401f49ed | 0x1401f49ed,0x1401f4c40 |
| 0x1401f49ed | 0x1401f4a4d | 0x1401f4a4d,0x1401f4c40 |
| 0x1401f4a4d | 0x1401f4a58 | 0x1401f4a58,0x1401f4c40 |
| 0x1401f4a58 | 0x1401f4a64 | 0x1401f4a64,0x1401f4c40 |
| 0x1401f4a64 | 0x1401f4aac | 0x1401f4aac,0x1401f4af3 |
| 0x1401f4aac | 0x1401f4ac3 | 0x1401f4ac3,0x1401f4adf |
| 0x1401f4ac3 | 0x1401f4acf | 0x1401f4acf,0x1401f4adf |
| 0x1401f4acf | 0x1401f4adf | 0x1401f4adf             |
| 0x1401f4adf | 0x1401f4af3 | 0x1401f4af3,0x1401f4b4f |
| 0x1401f4af3 | 0x1401f4b12 | 0x1401f4b12,0x1401f4c55 |
| 0x1401f4b12 | 0x1401f4b22 | 0x1401f4b22,0x1401f4b42 |
| 0x1401f4b22 | 0x1401f4b37 | 0x1401f4b37,0x1401f4c39 |
| 0x1401f4b37 | 0x1401f4b42 | 0x1401f4b42             |
| 0x1401f4b42 | 0x1401f4b45 | 0x1401f4b45             |
| 0x1401f4b45 | 0x1401f4b4f | 0x1401f4c55             |
| 0x1401f4b4f | 0x1401f4b7d | 0x1401f4b7d,0x1401f4b82 |
| 0x1401f4b7d | 0x1401f4b82 | 0x1401f4b85             |
| 0x1401f4b82 | 0x1401f4b85 | 0x1401f4b85             |
| 0x1401f4b85 | 0x1401f4bab | 0x1401f4bab,0x1401f4bd9 |
| 0x1401f4bab | 0x1401f4bbc | 0x1401f4bbc,0x1401f4bd4 |
| 0x1401f4bbc | 0x1401f4bcd | 0x1401f4bcd,0x1401f4c32 |
| 0x1401f4bcd | 0x1401f4bd4 | 0x1401f4bd4             |
| 0x1401f4bd4 | 0x1401f4bd9 | 0x1401f4bd9             |
| 0x1401f4bd9 | 0x1401f4bf5 | 0x1401f4bf5,0x1401f4c55 |
| 0x1401f4bf5 | 0x1401f4c0f | 0x1401f4b45,0x1401f4c0f |
| 0x1401f4c0f | 0x1401f4c20 | 0x1401f4c20,0x1401f4c39 |
| 0x1401f4c20 | 0x1401f4c32 | 0x1401f4c55             |
| 0x1401f4c32 | 0x1401f4c39 | 0x1401f4c39             |
| 0x1401f4c39 | 0x1401f4c40 | 0x1401f4c40             |
| 0x1401f4c40 | 0x1401f4c55 | 0x1401f4c55             |
| 0x1401f4c55 | 0x1401f4c7f |                         |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------------------------------------------------------|-----------------|
| 0x1401f4996#2045 | 0x1401f4996 | 2045     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2046 | 0x1401f4996 | 2046     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2047 | 0x1401f4996 | 2047     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2048 | 0x1401f4996 | 2048     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2049 | 0x1401f4996 | 2049     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2050 | 0x1401f4996 | 2050     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2051 | 0x1401f4996 | 2051     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2052 | 0x1401f4996 | 2052     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2053 | 0x1401f4996 | 2053     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2054 | 0x1401f4996 | 2054     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4996#2055 | 0x1401f4996 | 2055     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49a4#29   | 0x1401f49a4 | 29       | INT_XOR      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49a4#2102 | 0x1401f49a4 | 2102     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f49b9#55   | 0x1401f49b9 | 55       | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f49be#2056 | 0x1401f49be | 2056     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#77   | 0x1401f49df | 77       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f49df#1499 | 0x1401f49df | 1499     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1686 | 0x1401f49df | 1686     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1708 | 0x1401f49df | 1708     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1730 | 0x1401f49df | 1730     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1841 | 0x1401f49df | 1841     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1863 | 0x1401f49df | 1863     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1885 | 0x1401f49df | 1885     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1907 | 0x1401f49df | 1907     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#1929 | 0x1401f49df | 1929     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49df#2044 | 0x1401f49df | 2044     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f49e5#82   | 0x1401f49e5 | 82       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49e7#88   | 0x1401f49e7 | 88       | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f49e7#2096 | 0x1401f49e7 | 2096     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f49f5#2057 | 0x1401f49f5 | 2057     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#104  | 0x1401f49f9 | 104      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                 |                 |
| 0x1401f49f9#1500 | 0x1401f49f9 | 1500     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1687 | 0x1401f49f9 | 1687     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1709 | 0x1401f49f9 | 1709     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1731 | 0x1401f49f9 | 1731     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1842 | 0x1401f49f9 | 1842     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1864 | 0x1401f49f9 | 1864     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1886 | 0x1401f49f9 | 1886     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1908 | 0x1401f49f9 | 1908     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49f9#1930 | 0x1401f49f9 | 1930     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f49fe#107  | 0x1401f49fe | 107      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a06#110  | 0x1401f4a06 | 110      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a0b#2058 | 0x1401f4a0b | 2058     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a15#2059 | 0x1401f4a15 | 2059     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a1e#2060 | 0x1401f4a1e | 2060     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#140  | 0x1401f4a32 | 140      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x1401f4a32#1501 | 0x1401f4a32 | 1501     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1644 | 0x1401f4a32 | 1644     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1666 | 0x1401f4a32 | 1666     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1688 | 0x1401f4a32 | 1688     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1710 | 0x1401f4a32 | 1710     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1732 | 0x1401f4a32 | 1732     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1843 | 0x1401f4a32 | 1843     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1865 | 0x1401f4a32 | 1865     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1887 | 0x1401f4a32 | 1887     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1909 | 0x1401f4a32 | 1909     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#1931 | 0x1401f4a32 | 1931     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a32#2043 | 0x1401f4a32 | 2043     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a3f#149  | 0x1401f4a3f | 149      | CALL         | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4a3f#1502 | 0x1401f4a3f | 1502     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1645 | 0x1401f4a3f | 1645     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1667 | 0x1401f4a3f | 1667     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1689 | 0x1401f4a3f | 1689     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1711 | 0x1401f4a3f | 1711     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1733 | 0x1401f4a3f | 1733     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1844 | 0x1401f4a3f | 1844     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1866 | 0x1401f4a3f | 1866     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1888 | 0x1401f4a3f | 1888     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1910 | 0x1401f4a3f | 1910     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a3f#1932 | 0x1401f4a3f | 1932     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a45#154  | 0x1401f4a45 | 154      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a47#160  | 0x1401f4a47 | 160      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4a47#2097 | 0x1401f4a47 | 2097     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a4d#168  | 0x1401f4a4d | 168      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a52#174  | 0x1401f4a52 | 174      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4a52#2098 | 0x1401f4a52 | 2098     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a5c#183  | 0x1401f4a5c | 183      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a5e#188  | 0x1401f4a5e | 188      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4a5e#2099 | 0x1401f4a5e | 2099     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a67#1478 | 0x1401f4a67 | 1478     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a67#1479 | 0x1401f4a67 | 1479     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a6c#198  | 0x1401f4a6c | 198      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a71#201  | 0x1401f4a71 | 201      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4a79#1446 | 0x1401f4a79 | 1446     | INT_RIGHT    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a7c#2061 | 0x1401f4a7c | 2061     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a80#2062 | 0x1401f4a80 | 2062     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#220  | 0x1401f4a85 | 220      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                 |                 |
| 0x1401f4a85#1503 | 0x1401f4a85 | 1503     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1646 | 0x1401f4a85 | 1646     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1668 | 0x1401f4a85 | 1668     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1690 | 0x1401f4a85 | 1690     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1712 | 0x1401f4a85 | 1712     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1734 | 0x1401f4a85 | 1734     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1756 | 0x1401f4a85 | 1756     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1778 | 0x1401f4a85 | 1778     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1800 | 0x1401f4a85 | 1800     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1822 | 0x1401f4a85 | 1822     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1845 | 0x1401f4a85 | 1845     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1867 | 0x1401f4a85 | 1867     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1889 | 0x1401f4a85 | 1889     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1911 | 0x1401f4a85 | 1911     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a85#1933 | 0x1401f4a85 | 1933     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4a90#2063 | 0x1401f4a90 | 2063     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aa3#242  | 0x1401f4aa3 | 242      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aa3#246  | 0x1401f4aa3 | 246      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4aa3#2100 | 0x1401f4aa3 | 2100     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4aa3#2101 | 0x1401f4aa3 | 2101     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4aa3#2103 | 0x1401f4aa3 | 2103     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4aa7#252  | 0x1401f4aa7 | 252      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aa7#1088 | 0x1401f4aa7 | 1088     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aaa#257  | 0x1401f4aaa | 257      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4aac#258  | 0x1401f4aac | 258      | INT_MULT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aac#259  | 0x1401f4aac | 259      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4aac#2104 | 0x1401f4aac | 2104     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4ab9#275  | 0x1401f4ab9 | 275      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                 | [object Object] |
| 0x1401f4ab9#1504 | 0x1401f4ab9 | 1504     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1647 | 0x1401f4ab9 | 1647     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1669 | 0x1401f4ab9 | 1669     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1691 | 0x1401f4ab9 | 1691     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1713 | 0x1401f4ab9 | 1713     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1735 | 0x1401f4ab9 | 1735     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1757 | 0x1401f4ab9 | 1757     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1779 | 0x1401f4ab9 | 1779     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1801 | 0x1401f4ab9 | 1801     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1823 | 0x1401f4ab9 | 1823     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1846 | 0x1401f4ab9 | 1846     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1868 | 0x1401f4ab9 | 1868     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1890 | 0x1401f4ab9 | 1890     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1912 | 0x1401f4ab9 | 1912     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ab9#1934 | 0x1401f4ab9 | 1934     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4abe#281  | 0x1401f4abe | 281      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ac1#286  | 0x1401f4ac1 | 286      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4ac3#289  | 0x1401f4ac3 | 289      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ac3#2105 | 0x1401f4ac3 | 2105     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4ac6#299  | 0x1401f4ac6 | 299      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ac9#311  | 0x1401f4ac9 | 311      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4acd#316  | 0x1401f4acd | 316      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4ad5#2064 | 0x1401f4ad5 | 2064     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#332  | 0x1401f4ada | 332      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                                                 |                 |
| 0x1401f4ada#1505 | 0x1401f4ada | 1505     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1648 | 0x1401f4ada | 1648     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1670 | 0x1401f4ada | 1670     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1692 | 0x1401f4ada | 1692     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1714 | 0x1401f4ada | 1714     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1736 | 0x1401f4ada | 1736     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1758 | 0x1401f4ada | 1758     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1780 | 0x1401f4ada | 1780     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1802 | 0x1401f4ada | 1802     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1824 | 0x1401f4ada | 1824     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1847 | 0x1401f4ada | 1847     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1869 | 0x1401f4ada | 1869     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1891 | 0x1401f4ada | 1891     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1913 | 0x1401f4ada | 1913     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ada#1935 | 0x1401f4ada | 1935     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4adf#1529 | 0x1401f4adf | 1529     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1661 | 0x1401f4adf | 1661     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1683 | 0x1401f4adf | 1683     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1705 | 0x1401f4adf | 1705     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1727 | 0x1401f4adf | 1727     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1749 | 0x1401f4adf | 1749     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1771 | 0x1401f4adf | 1771     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1793 | 0x1401f4adf | 1793     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1815 | 0x1401f4adf | 1815     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1837 | 0x1401f4adf | 1837     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1860 | 0x1401f4adf | 1860     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1882 | 0x1401f4adf | 1882     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1904 | 0x1401f4adf | 1904     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1926 | 0x1401f4adf | 1926     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4adf#1948 | 0x1401f4adf | 1948     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4aee#346  | 0x1401f4aee | 346      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af1#352  | 0x1401f4af1 | 352      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4af3#1530 | 0x1401f4af3 | 1530     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1662 | 0x1401f4af3 | 1662     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1684 | 0x1401f4af3 | 1684     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1706 | 0x1401f4af3 | 1706     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1728 | 0x1401f4af3 | 1728     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1750 | 0x1401f4af3 | 1750     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1772 | 0x1401f4af3 | 1772     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1794 | 0x1401f4af3 | 1794     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1816 | 0x1401f4af3 | 1816     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1838 | 0x1401f4af3 | 1838     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1861 | 0x1401f4af3 | 1861     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1905 | 0x1401f4af3 | 1905     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1927 | 0x1401f4af3 | 1927     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af3#1949 | 0x1401f4af3 | 1949     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af6#1483 | 0x1401f4af6 | 1483     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4af6#1484 | 0x1401f4af6 | 1484     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4af6#1521 | 0x1401f4af6 | 1521     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af6#1522 | 0x1401f4af6 | 1522     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af6#2065 | 0x1401f4af6 | 2065     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4af9#361  | 0x1401f4af9 | 361      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4af9#1514 | 0x1401f4af9 | 1514     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4af9#2066 | 0x1401f4af9 | 2066     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4afd#364  | 0x1401f4afd | 364      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4afd#1515 | 0x1401f4afd | 1515     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4afd#2067 | 0x1401f4afd | 2067     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b05#366  | 0x1401f4b05 | 366      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4b05#1516 | 0x1401f4b05 | 1516     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b05#2106 | 0x1401f4b05 | 2106     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b0c#377  | 0x1401f4b0c | 377      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b0c#378  | 0x1401f4b0c | 378      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4b0c#2090 | 0x1401f4b0c | 2090     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b12#379  | 0x1401f4b12 | 379      | INT_MULT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b12#380  | 0x1401f4b12 | 380      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b1a#382  | 0x1401f4b1a | 382      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b20#391  | 0x1401f4b20 | 391      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4b20#2087 | 0x1401f4b20 | 2087     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b20#2107 | 0x1401f4b20 | 2107     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b22#393  | 0x1401f4b22 | 393      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b22#2068 | 0x1401f4b22 | 2068     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b22#2108 | 0x1401f4b22 | 2108     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b29#406  | 0x1401f4b29 | 406      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b29#2069 | 0x1401f4b29 | 2069     | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b29#2109 | 0x1401f4b29 | 2109     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b29#2110 | 0x1401f4b29 | 2110     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b31#423  | 0x1401f4b31 | 423      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b31#425  | 0x1401f4b31 | 425      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4b31#2095 | 0x1401f4b31 | 2095     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b31#2111 | 0x1401f4b31 | 2111     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b37#426  | 0x1401f4b37 | 426      | INT_MULT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b37#427  | 0x1401f4b37 | 427      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#433  | 0x1401f4b45 | 433      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4b45#1035 | 0x1401f4b45 | 1035     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1067 | 0x1401f4b45 | 1067     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1512 | 0x1401f4b45 | 1512     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1528 | 0x1401f4b45 | 1528     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1655 | 0x1401f4b45 | 1655     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1660 | 0x1401f4b45 | 1660     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1677 | 0x1401f4b45 | 1677     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1682 | 0x1401f4b45 | 1682     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1699 | 0x1401f4b45 | 1699     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1704 | 0x1401f4b45 | 1704     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1721 | 0x1401f4b45 | 1721     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1726 | 0x1401f4b45 | 1726     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1743 | 0x1401f4b45 | 1743     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1748 | 0x1401f4b45 | 1748     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1765 | 0x1401f4b45 | 1765     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1770 | 0x1401f4b45 | 1770     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1787 | 0x1401f4b45 | 1787     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1792 | 0x1401f4b45 | 1792     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1809 | 0x1401f4b45 | 1809     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1814 | 0x1401f4b45 | 1814     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1831 | 0x1401f4b45 | 1831     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1836 | 0x1401f4b45 | 1836     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1854 | 0x1401f4b45 | 1854     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1859 | 0x1401f4b45 | 1859     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1898 | 0x1401f4b45 | 1898     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1903 | 0x1401f4b45 | 1903     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1920 | 0x1401f4b45 | 1920     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1925 | 0x1401f4b45 | 1925     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b45#1942 | 0x1401f4b45 | 1942     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b45#1947 | 0x1401f4b45 | 1947     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b4a#434  | 0x1401f4b4a | 434      | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401f4b4a#2091 | 0x1401f4b4a | 2091     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b4f#2070 | 0x1401f4b4f | 2070     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b58#504  | 0x1401f4b58 | 504      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b58#508  | 0x1401f4b58 | 508      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4b58#2083 | 0x1401f4b58 | 2083     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b58#2084 | 0x1401f4b58 | 2084     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b5c#1012 | 0x1401f4b5c | 1012     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b61#515  | 0x1401f4b61 | 515      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b61#2112 | 0x1401f4b61 | 2112     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b66#2071 | 0x1401f4b66 | 2071     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b6b#2072 | 0x1401f4b6b | 2072     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#522  | 0x1401f4b70 | 522      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b70#1506 | 0x1401f4b70 | 1506     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1649 | 0x1401f4b70 | 1649     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1671 | 0x1401f4b70 | 1671     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1693 | 0x1401f4b70 | 1693     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1715 | 0x1401f4b70 | 1715     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1737 | 0x1401f4b70 | 1737     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1759 | 0x1401f4b70 | 1759     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1781 | 0x1401f4b70 | 1781     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1803 | 0x1401f4b70 | 1803     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1825 | 0x1401f4b70 | 1825     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1848 | 0x1401f4b70 | 1848     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1870 | 0x1401f4b70 | 1870     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1892 | 0x1401f4b70 | 1892     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1914 | 0x1401f4b70 | 1914     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#1936 | 0x1401f4b70 | 1936     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b70#2113 | 0x1401f4b70 | 2113     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b76#524  | 0x1401f4b76 | 524      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b76#2073 | 0x1401f4b76 | 2073     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b7b#535  | 0x1401f4b7b | 535      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b7b#536  | 0x1401f4b7b | 536      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4b7b#2089 | 0x1401f4b7b | 2089     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b7d#537  | 0x1401f4b7d | 537      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b80#539  | 0x1401f4b80 | 539      | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401f4b80#2088 | 0x1401f4b80 | 2088     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b80#2114 | 0x1401f4b80 | 2114     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4b85#1036 | 0x1401f4b85 | 1036     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b8a#544  | 0x1401f4b8a | 544      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b8a#2074 | 0x1401f4b8a | 2074     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4b93#2075 | 0x1401f4b93 | 2075     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#554  | 0x1401f4b9b | 554      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4b9b#1507 | 0x1401f4b9b | 1507     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1650 | 0x1401f4b9b | 1650     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1672 | 0x1401f4b9b | 1672     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1694 | 0x1401f4b9b | 1694     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1716 | 0x1401f4b9b | 1716     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1738 | 0x1401f4b9b | 1738     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1760 | 0x1401f4b9b | 1760     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1782 | 0x1401f4b9b | 1782     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1804 | 0x1401f4b9b | 1804     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1826 | 0x1401f4b9b | 1826     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1849 | 0x1401f4b9b | 1849     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1871 | 0x1401f4b9b | 1871     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1893 | 0x1401f4b9b | 1893     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1915 | 0x1401f4b9b | 1915     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4b9b#1937 | 0x1401f4b9b | 1937     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ba9#568  | 0x1401f4ba9 | 568      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4ba9#569  | 0x1401f4ba9 | 569      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4bab#571  | 0x1401f4bab | 571      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bae#1840 | 0x1401f4bae | 1840     | PIECE        | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bb3#582  | 0x1401f4bb3 | 582      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bba#591  | 0x1401f4bba | 591      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4bba#2085 | 0x1401f4bba | 2085     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4bbc#592  | 0x1401f4bbc | 592      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bbc#593  | 0x1401f4bbc | 593      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bbc#2115 | 0x1401f4bbc | 2115     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4bc0#597  | 0x1401f4bc0 | 597      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bc3#606  | 0x1401f4bc3 | 606      | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bcb#623  | 0x1401f4bcb | 623      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bcb#625  | 0x1401f4bcb | 625      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4bcd#628  | 0x1401f4bcd | 628      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#638  | 0x1401f4bd4 | 638      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4bd4#1033 | 0x1401f4bd4 | 1033     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1065 | 0x1401f4bd4 | 1065     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1509 | 0x1401f4bd4 | 1509     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1652 | 0x1401f4bd4 | 1652     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1674 | 0x1401f4bd4 | 1674     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1696 | 0x1401f4bd4 | 1696     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1718 | 0x1401f4bd4 | 1718     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1740 | 0x1401f4bd4 | 1740     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1762 | 0x1401f4bd4 | 1762     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1784 | 0x1401f4bd4 | 1784     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1806 | 0x1401f4bd4 | 1806     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1828 | 0x1401f4bd4 | 1828     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd4#1939 | 0x1401f4bd4 | 1939     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#641  | 0x1401f4bd9 | 641      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4bd9#1527 | 0x1401f4bd9 | 1527     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1659 | 0x1401f4bd9 | 1659     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1681 | 0x1401f4bd9 | 1681     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1703 | 0x1401f4bd9 | 1703     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1725 | 0x1401f4bd9 | 1725     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1747 | 0x1401f4bd9 | 1747     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1769 | 0x1401f4bd9 | 1769     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1791 | 0x1401f4bd9 | 1791     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1813 | 0x1401f4bd9 | 1813     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1835 | 0x1401f4bd9 | 1835     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bd9#1946 | 0x1401f4bd9 | 1946     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bdd#644  | 0x1401f4bdd | 644      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4be5#647  | 0x1401f4be5 | 647      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4bf3#661  | 0x1401f4bf3 | 661      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bf3#662  | 0x1401f4bf3 | 662      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4bf3#2093 | 0x1401f4bf3 | 2093     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4bf5#663  | 0x1401f4bf5 | 663      | INT_MULT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4bf5#664  | 0x1401f4bf5 | 664      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c02#670  | 0x1401f4c02 | 670      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c09#679  | 0x1401f4c09 | 679      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4c09#2086 | 0x1401f4c09 | 2086     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c09#2117 | 0x1401f4c09 | 2117     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c0f#681  | 0x1401f4c0f | 681      | LOAD         | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c0f#2076 | 0x1401f4c0f | 2076     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c16#694  | 0x1401f4c16 | 694      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c16#2077 | 0x1401f4c16 | 2077     | INT_SUB      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c16#2118 | 0x1401f4c16 | 2118     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c16#2119 | 0x1401f4c16 | 2119     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c1e#711  | 0x1401f4c1e | 711      | INT_LESS     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c1e#713  | 0x1401f4c1e | 713      | CBRANCH      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4c1e#2120 | 0x1401f4c1e | 2120     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c20#714  | 0x1401f4c20 | 714      | INT_MULT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c20#715  | 0x1401f4c20 | 715      | INT_ADD      | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#720  | 0x1401f4c2b | 720      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c2b#1510 | 0x1401f4c2b | 1510     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1653 | 0x1401f4c2b | 1653     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1675 | 0x1401f4c2b | 1675     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1697 | 0x1401f4c2b | 1697     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1719 | 0x1401f4c2b | 1719     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1741 | 0x1401f4c2b | 1741     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1763 | 0x1401f4c2b | 1763     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1785 | 0x1401f4c2b | 1785     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1807 | 0x1401f4c2b | 1807     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1829 | 0x1401f4c2b | 1829     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1852 | 0x1401f4c2b | 1852     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1896 | 0x1401f4c2b | 1896     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1918 | 0x1401f4c2b | 1918     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c2b#1940 | 0x1401f4c2b | 1940     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c30#721  | 0x1401f4c30 | 721      | BRANCH       | true    | member           | [object Object]                                                                                                 |                 |
| 0x1401f4c30#2094 | 0x1401f4c30 | 2094     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c37#723  | 0x1401f4c37 | 723      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#724  | 0x1401f4c37 | 724      | CALLIND      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4c37#1508 | 0x1401f4c37 | 1508     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1651 | 0x1401f4c37 | 1651     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1673 | 0x1401f4c37 | 1673     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1695 | 0x1401f4c37 | 1695     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1717 | 0x1401f4c37 | 1717     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1739 | 0x1401f4c37 | 1739     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1761 | 0x1401f4c37 | 1761     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1783 | 0x1401f4c37 | 1783     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1805 | 0x1401f4c37 | 1805     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1827 | 0x1401f4c37 | 1827     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1850 | 0x1401f4c37 | 1850     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1894 | 0x1401f4c37 | 1894     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1916 | 0x1401f4c37 | 1916     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#1938 | 0x1401f4c37 | 1938     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#2078 | 0x1401f4c37 | 2078     | PTRSUB       | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c37#2116 | 0x1401f4c37 | 2116     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c39#1082 | 0x1401f4c39 | 1082     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1526 | 0x1401f4c39 | 1526     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1658 | 0x1401f4c39 | 1658     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1680 | 0x1401f4c39 | 1680     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1702 | 0x1401f4c39 | 1702     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1724 | 0x1401f4c39 | 1724     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1746 | 0x1401f4c39 | 1746     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1768 | 0x1401f4c39 | 1768     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1790 | 0x1401f4c39 | 1790     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1812 | 0x1401f4c39 | 1812     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1834 | 0x1401f4c39 | 1834     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1857 | 0x1401f4c39 | 1857     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1901 | 0x1401f4c39 | 1901     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1923 | 0x1401f4c39 | 1923     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c39#1945 | 0x1401f4c39 | 1945     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c3e#476  | 0x1401f4c3e | 476      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#477  | 0x1401f4c3e | 477      | CALLIND      | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4c3e#741  | 0x1401f4c3e | 741      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c3e#1511 | 0x1401f4c3e | 1511     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1654 | 0x1401f4c3e | 1654     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1676 | 0x1401f4c3e | 1676     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1698 | 0x1401f4c3e | 1698     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1720 | 0x1401f4c3e | 1720     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1742 | 0x1401f4c3e | 1742     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1764 | 0x1401f4c3e | 1764     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1786 | 0x1401f4c3e | 1786     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1808 | 0x1401f4c3e | 1808     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1830 | 0x1401f4c3e | 1830     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1853 | 0x1401f4c3e | 1853     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1897 | 0x1401f4c3e | 1897     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1919 | 0x1401f4c3e | 1919     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#1941 | 0x1401f4c3e | 1941     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c3e#2121 | 0x1401f4c3e | 2121     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c40#1087 | 0x1401f4c40 | 1087     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f4c40#1531 | 0x1401f4c40 | 1531     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f4c43#1488 | 0x1401f4c43 | 1488     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c43#1489 | 0x1401f4c43 | 1489     | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c43#1523 | 0x1401f4c43 | 1523     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c43#1524 | 0x1401f4c43 | 1524     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c43#2079 | 0x1401f4c43 | 2079     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c46#486  | 0x1401f4c46 | 486      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c46#1518 | 0x1401f4c46 | 1518     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c46#2080 | 0x1401f4c46 | 2080     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c4a#489  | 0x1401f4c4a | 489      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c4a#1519 | 0x1401f4c4a | 1519     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c4a#2081 | 0x1401f4c4a | 2081     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c52#491  | 0x1401f4c52 | 491      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c52#1520 | 0x1401f4c52 | 1520     | INDIRECT     | true    | member           | [object Object],[object Object]                                                                                 | [object Object] |
| 0x1401f4c52#2092 | 0x1401f4c52 | 2092     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c52#2122 | 0x1401f4c52 | 2122     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c55#435  | 0x1401f4c55 | 435      | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c55#1081 | 0x1401f4c55 | 1081     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f4c55#1525 | 0x1401f4c55 | 1525     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401f4c62#448  | 0x1401f4c62 | 448      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                                                 | [object Object] |
| 0x1401f4c62#449  | 0x1401f4c62 | 449      | STORE        | true    | member           | [object Object],[object Object],[object Object]                                                                 |                 |
| 0x1401f4c62#2123 | 0x1401f4c62 | 2123     | CAST         | true    | member           | [object Object]                                                                                                 | [object Object] |
| 0x1401f4c7e#474  | 0x1401f4c7e | 474      | RETURN       | true    | member           | [object Object],[object Object]                                                                                 |                 |
| 0x1401f4c7e#1513 | 0x1401f4c7e | 1513     | COPY         | true    | member           | [object Object]                                                                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401f49a4#2102 | 0x1401f49a4#29   | 1           |
| 0x1401f4996#2045 | 0x1401f49a4#2102 | 0           |
| 0x1401f49df#2044 | 0x1401f49df#77   | 2           |
| 0x1401f49be#2056 | 0x1401f49df#77   | 5           |
| 0x1401f49b9#55   | 0x1401f49df#1686 | 0           |
| 0x1401f49a4#29   | 0x1401f49df#1929 | 0           |
| 0x1401f49df#77   | 0x1401f49e5#82   | 0           |
| 0x1401f49e5#82   | 0x1401f49e7#88   | 1           |
| 0x1401f4996#2047 | 0x1401f49e7#2096 | 0           |
| 0x1401f49f5#2057 | 0x1401f49f9#104  | 1           |
| 0x1401f49df#1499 | 0x1401f49f9#1500 | 0           |
| 0x1401f49df#1686 | 0x1401f49f9#1687 | 0           |
| 0x1401f49df#1708 | 0x1401f49f9#1709 | 0           |
| 0x1401f49df#1730 | 0x1401f49f9#1731 | 0           |
| 0x1401f49df#1841 | 0x1401f49f9#1842 | 0           |
| 0x1401f49df#1863 | 0x1401f49f9#1864 | 0           |
| 0x1401f49df#1885 | 0x1401f49f9#1886 | 0           |
| 0x1401f49df#1907 | 0x1401f49f9#1908 | 0           |
| 0x1401f49df#1929 | 0x1401f49f9#1930 | 0           |
| 0x1401f49f9#1687 | 0x1401f4a32#140  | 1           |
| 0x1401f4a32#2043 | 0x1401f4a32#140  | 2           |
| 0x1401f4a1e#2060 | 0x1401f4a32#140  | 4           |
| 0x1401f4a15#2059 | 0x1401f4a32#140  | 5           |
| 0x1401f4a0b#2058 | 0x1401f4a32#140  | 6           |
| 0x1401f49f9#1500 | 0x1401f4a32#1501 | 0           |
| 0x1401f4a06#110  | 0x1401f4a32#1644 | 0           |
| 0x1401f49fe#107  | 0x1401f4a32#1666 | 0           |
| 0x1401f49f9#1687 | 0x1401f4a32#1688 | 0           |
| 0x1401f49f9#1709 | 0x1401f4a32#1710 | 0           |
| 0x1401f49f9#1731 | 0x1401f4a32#1732 | 0           |
| 0x1401f49f9#1842 | 0x1401f4a32#1843 | 0           |
| 0x1401f49f9#1864 | 0x1401f4a32#1865 | 0           |
| 0x1401f49f9#1886 | 0x1401f4a32#1887 | 0           |
| 0x1401f49f9#1908 | 0x1401f4a32#1909 | 0           |
| 0x1401f49f9#1930 | 0x1401f4a32#1931 | 0           |
| 0x1401f4a32#1688 | 0x1401f4a3f#149  | 1           |
| 0x1401f4a32#1501 | 0x1401f4a3f#1502 | 0           |
| 0x1401f4a32#1644 | 0x1401f4a3f#1645 | 0           |
| 0x1401f4a32#1666 | 0x1401f4a3f#1667 | 0           |
| 0x1401f4a32#1688 | 0x1401f4a3f#1689 | 0           |
| 0x1401f4a32#1710 | 0x1401f4a3f#1711 | 0           |
| 0x1401f4a32#1732 | 0x1401f4a3f#1733 | 0           |
| 0x1401f4a32#1843 | 0x1401f4a3f#1844 | 0           |
| 0x1401f4a32#1865 | 0x1401f4a3f#1866 | 0           |
| 0x1401f4a32#1887 | 0x1401f4a3f#1888 | 0           |
| 0x1401f4a32#1909 | 0x1401f4a3f#1910 | 0           |
| 0x1401f4a32#1931 | 0x1401f4a3f#1932 | 0           |
| 0x1401f4a32#140  | 0x1401f4a45#154  | 0           |
| 0x1401f4a45#154  | 0x1401f4a47#160  | 1           |
| 0x1401f4996#2050 | 0x1401f4a47#2097 | 0           |
| 0x1401f4a3f#1645 | 0x1401f4a4d#168  | 0           |
| 0x1401f4a4d#168  | 0x1401f4a52#174  | 1           |
| 0x1401f4996#2052 | 0x1401f4a52#2098 | 0           |
| 0x1401f4a3f#1667 | 0x1401f4a5c#183  | 0           |
| 0x1401f4a5c#183  | 0x1401f4a5e#188  | 1           |
| 0x1401f4996#2054 | 0x1401f4a5e#2099 | 0           |
| 0x1401f4a3f#1667 | 0x1401f4a79#1446 | 0           |
| 0x1401f4a80#2062 | 0x1401f4a85#220  | 1           |
| 0x1401f4a7c#2061 | 0x1401f4a85#220  | 2           |
| 0x1401f4a79#1446 | 0x1401f4a85#220  | 3           |
| 0x1401f4a3f#1502 | 0x1401f4a85#1503 | 0           |
| 0x1401f4a3f#1645 | 0x1401f4a85#1646 | 0           |
| 0x1401f4a3f#1667 | 0x1401f4a85#1668 | 0           |
| 0x1401f4a3f#1689 | 0x1401f4a85#1690 | 0           |
| 0x1401f4a3f#1711 | 0x1401f4a85#1712 | 0           |
| 0x1401f4a3f#1733 | 0x1401f4a85#1734 | 0           |
| 0x1401f4a67#1478 | 0x1401f4a85#1756 | 0           |
| 0x1401f4a67#1479 | 0x1401f4a85#1778 | 0           |
| 0x1401f4a6c#198  | 0x1401f4a85#1800 | 0           |
| 0x1401f4a71#201  | 0x1401f4a85#1822 | 0           |
| 0x1401f4a3f#1844 | 0x1401f4a85#1845 | 0           |
| 0x1401f4a3f#1866 | 0x1401f4a85#1867 | 0           |
| 0x1401f4a3f#1888 | 0x1401f4a85#1889 | 0           |
| 0x1401f4a3f#1910 | 0x1401f4a85#1911 | 0           |
| 0x1401f4a3f#1932 | 0x1401f4a85#1933 | 0           |
| 0x1401f4a85#1822 | 0x1401f4aa3#242  | 1           |
| 0x1401f4aa3#242  | 0x1401f4aa3#246  | 1           |
| 0x1401f4a90#2063 | 0x1401f4aa3#2100 | 0           |
| 0x1401f4aa3#2103 | 0x1401f4aa3#2101 | 0           |
| 0x1401f4a85#1756 | 0x1401f4aa3#2103 | 0           |
| 0x1401f4a85#1800 | 0x1401f4aa7#252  | 0           |
| 0x1401f4aa3#2100 | 0x1401f4aa7#1088 | 0           |
| 0x1401f4aa3#2101 | 0x1401f4aa7#1088 | 1           |
| 0x1401f4aa7#252  | 0x1401f4aaa#257  | 1           |
| 0x1401f4a85#1800 | 0x1401f4aac#258  | 0           |
| 0x1401f4aac#2104 | 0x1401f4aac#259  | 0           |
| 0x1401f4aac#258  | 0x1401f4aac#259  | 1           |
| 0x1401f4aa7#1088 | 0x1401f4aac#2104 | 0           |
| 0x1401f4aa7#1088 | 0x1401f4ab9#275  | 1           |
| 0x1401f4aac#259  | 0x1401f4ab9#275  | 2           |
| 0x1401f4a85#1503 | 0x1401f4ab9#1504 | 0           |
| 0x1401f4a85#1646 | 0x1401f4ab9#1647 | 0           |
| 0x1401f4a85#1668 | 0x1401f4ab9#1669 | 0           |
| 0x1401f4a85#1690 | 0x1401f4ab9#1691 | 0           |
| 0x1401f4a85#1712 | 0x1401f4ab9#1713 | 0           |
| 0x1401f4a85#1734 | 0x1401f4ab9#1735 | 0           |
| 0x1401f4a85#1756 | 0x1401f4ab9#1757 | 0           |
| 0x1401f4a85#1778 | 0x1401f4ab9#1779 | 0           |
| 0x1401f4a85#1800 | 0x1401f4ab9#1801 | 0           |
| 0x1401f4a85#1822 | 0x1401f4ab9#1823 | 0           |
| 0x1401f4a85#1845 | 0x1401f4ab9#1846 | 0           |
| 0x1401f4a85#1867 | 0x1401f4ab9#1868 | 0           |
| 0x1401f4a85#1889 | 0x1401f4ab9#1890 | 0           |
| 0x1401f4a85#1911 | 0x1401f4ab9#1912 | 0           |
| 0x1401f4a85#1933 | 0x1401f4ab9#1934 | 0           |
| 0x1401f4ab9#275  | 0x1401f4abe#281  | 0           |
| 0x1401f4aac#259  | 0x1401f4abe#281  | 1           |
| 0x1401f4abe#281  | 0x1401f4ac1#286  | 1           |
| 0x1401f4ab9#275  | 0x1401f4ac3#289  | 0           |
| 0x1401f4ac3#2105 | 0x1401f4ac3#289  | 1           |
| 0x1401f4aa7#1088 | 0x1401f4ac3#2105 | 0           |
| 0x1401f4ac3#289  | 0x1401f4ac6#299  | 0           |
| 0x1401f4ac6#299  | 0x1401f4ac9#311  | 0           |
| 0x1401f4ac9#311  | 0x1401f4acd#316  | 1           |
| 0x1401f4ad5#2064 | 0x1401f4ada#332  | 1           |
| 0x1401f4ac6#299  | 0x1401f4ada#332  | 2           |
| 0x1401f4ab9#1504 | 0x1401f4ada#1505 | 0           |
| 0x1401f4ab9#1647 | 0x1401f4ada#1648 | 0           |
| 0x1401f4ab9#1669 | 0x1401f4ada#1670 | 0           |
| 0x1401f4ab9#1691 | 0x1401f4ada#1692 | 0           |
| 0x1401f4ab9#1713 | 0x1401f4ada#1714 | 0           |
| 0x1401f4ab9#1735 | 0x1401f4ada#1736 | 0           |
| 0x1401f4ab9#1757 | 0x1401f4ada#1758 | 0           |
| 0x1401f4ab9#1779 | 0x1401f4ada#1780 | 0           |
| 0x1401f4ab9#1801 | 0x1401f4ada#1802 | 0           |
| 0x1401f4ab9#1823 | 0x1401f4ada#1824 | 0           |
| 0x1401f4ab9#1846 | 0x1401f4ada#1847 | 0           |
| 0x1401f4ab9#1868 | 0x1401f4ada#1869 | 0           |
| 0x1401f4ab9#1890 | 0x1401f4ada#1891 | 0           |
| 0x1401f4ab9#1912 | 0x1401f4ada#1913 | 0           |
| 0x1401f4ab9#1934 | 0x1401f4ada#1935 | 0           |
| 0x1401f4ab9#1504 | 0x1401f4adf#1529 | 0           |
| 0x1401f4ab9#1504 | 0x1401f4adf#1529 | 1           |
| 0x1401f4ada#1505 | 0x1401f4adf#1529 | 2           |
| 0x1401f4ab9#1647 | 0x1401f4adf#1661 | 0           |
| 0x1401f4ab9#1647 | 0x1401f4adf#1661 | 1           |
| 0x1401f4ada#1648 | 0x1401f4adf#1661 | 2           |
| 0x1401f4ab9#1669 | 0x1401f4adf#1683 | 0           |
| 0x1401f4ab9#1669 | 0x1401f4adf#1683 | 1           |
| 0x1401f4ada#1670 | 0x1401f4adf#1683 | 2           |
| 0x1401f4ab9#1691 | 0x1401f4adf#1705 | 0           |
| 0x1401f4ab9#1691 | 0x1401f4adf#1705 | 1           |
| 0x1401f4ada#1692 | 0x1401f4adf#1705 | 2           |
| 0x1401f4ab9#1713 | 0x1401f4adf#1727 | 0           |
| 0x1401f4ab9#1713 | 0x1401f4adf#1727 | 1           |
| 0x1401f4ada#1714 | 0x1401f4adf#1727 | 2           |
| 0x1401f4ab9#1735 | 0x1401f4adf#1749 | 0           |
| 0x1401f4ab9#1735 | 0x1401f4adf#1749 | 1           |
| 0x1401f4ada#1736 | 0x1401f4adf#1749 | 2           |
| 0x1401f4ab9#1757 | 0x1401f4adf#1771 | 0           |
| 0x1401f4ab9#1757 | 0x1401f4adf#1771 | 1           |
| 0x1401f4ada#1758 | 0x1401f4adf#1771 | 2           |
| 0x1401f4ab9#1779 | 0x1401f4adf#1793 | 0           |
| 0x1401f4ab9#1779 | 0x1401f4adf#1793 | 1           |
| 0x1401f4ada#1780 | 0x1401f4adf#1793 | 2           |
| 0x1401f4ab9#1801 | 0x1401f4adf#1815 | 0           |
| 0x1401f4ab9#1801 | 0x1401f4adf#1815 | 1           |
| 0x1401f4ada#1802 | 0x1401f4adf#1815 | 2           |
| 0x1401f4ab9#1823 | 0x1401f4adf#1837 | 0           |
| 0x1401f4ab9#1823 | 0x1401f4adf#1837 | 1           |
| 0x1401f4ada#1824 | 0x1401f4adf#1837 | 2           |
| 0x1401f4ab9#1846 | 0x1401f4adf#1860 | 0           |
| 0x1401f4ab9#1846 | 0x1401f4adf#1860 | 1           |
| 0x1401f4ada#1847 | 0x1401f4adf#1860 | 2           |
| 0x1401f4ab9#1868 | 0x1401f4adf#1882 | 0           |
| 0x1401f4ab9#1868 | 0x1401f4adf#1882 | 1           |
| 0x1401f4ada#1869 | 0x1401f4adf#1882 | 2           |
| 0x1401f4ab9#1890 | 0x1401f4adf#1904 | 0           |
| 0x1401f4ab9#1890 | 0x1401f4adf#1904 | 1           |
| 0x1401f4ada#1891 | 0x1401f4adf#1904 | 2           |
| 0x1401f4ab9#1912 | 0x1401f4adf#1926 | 0           |
| 0x1401f4ab9#1912 | 0x1401f4adf#1926 | 1           |
| 0x1401f4ada#1913 | 0x1401f4adf#1926 | 2           |
| 0x1401f4ab9#1934 | 0x1401f4adf#1948 | 0           |
| 0x1401f4ab9#1934 | 0x1401f4adf#1948 | 1           |
| 0x1401f4ada#1935 | 0x1401f4adf#1948 | 2           |
| 0x1401f4adf#1815 | 0x1401f4aee#346  | 0           |
| 0x1401f4aee#346  | 0x1401f4af1#352  | 1           |
| 0x1401f4a85#1503 | 0x1401f4af3#1530 | 0           |
| 0x1401f4adf#1529 | 0x1401f4af3#1530 | 1           |
| 0x1401f4a85#1646 | 0x1401f4af3#1662 | 0           |
| 0x1401f4adf#1661 | 0x1401f4af3#1662 | 1           |
| 0x1401f4a85#1668 | 0x1401f4af3#1684 | 0           |
| 0x1401f4adf#1683 | 0x1401f4af3#1684 | 1           |
| 0x1401f4a85#1690 | 0x1401f4af3#1706 | 0           |
| 0x1401f4adf#1705 | 0x1401f4af3#1706 | 1           |
| 0x1401f4a85#1712 | 0x1401f4af3#1728 | 0           |
| 0x1401f4adf#1727 | 0x1401f4af3#1728 | 1           |
| 0x1401f4a85#1734 | 0x1401f4af3#1750 | 0           |
| 0x1401f4adf#1749 | 0x1401f4af3#1750 | 1           |
| 0x1401f4a85#1756 | 0x1401f4af3#1772 | 0           |
| 0x1401f4adf#1771 | 0x1401f4af3#1772 | 1           |
| 0x1401f4a85#1778 | 0x1401f4af3#1794 | 0           |
| 0x1401f4adf#1793 | 0x1401f4af3#1794 | 1           |
| 0x1401f4a85#1800 | 0x1401f4af3#1816 | 0           |
| 0x1401f4adf#1815 | 0x1401f4af3#1816 | 1           |
| 0x1401f4a85#1822 | 0x1401f4af3#1838 | 0           |
| 0x1401f4adf#1837 | 0x1401f4af3#1838 | 1           |
| 0x1401f4a85#1845 | 0x1401f4af3#1861 | 0           |
| 0x1401f4adf#1860 | 0x1401f4af3#1861 | 1           |
| 0x1401f4a85#1889 | 0x1401f4af3#1905 | 0           |
| 0x1401f4adf#1904 | 0x1401f4af3#1905 | 1           |
| 0x1401f4a85#1911 | 0x1401f4af3#1927 | 0           |
| 0x1401f4adf#1926 | 0x1401f4af3#1927 | 1           |
| 0x1401f4a85#1933 | 0x1401f4af3#1949 | 0           |
| 0x1401f4adf#1948 | 0x1401f4af3#1949 | 1           |
| 0x1401f4af6#2065 | 0x1401f4af6#1484 | 1           |
| 0x1401f4af3#1530 | 0x1401f4af6#1521 | 0           |
| 0x1401f4af6#1521 | 0x1401f4af6#1522 | 0           |
| 0x1401f4af9#2066 | 0x1401f4af9#361  | 1           |
| 0x1401f4af6#1522 | 0x1401f4af9#1514 | 0           |
| 0x1401f4afd#2067 | 0x1401f4afd#364  | 1           |
| 0x1401f4af9#1514 | 0x1401f4afd#1515 | 0           |
| 0x1401f4b05#2106 | 0x1401f4b05#366  | 1           |
| 0x1401f4afd#1515 | 0x1401f4b05#1516 | 0           |
| 0x1401f4af3#1838 | 0x1401f4b0c#377  | 0           |
| 0x1401f4b0c#377  | 0x1401f4b0c#378  | 1           |
| 0x1401f4996#2048 | 0x1401f4b0c#2090 | 0           |
| 0x1401f4af3#1838 | 0x1401f4b12#379  | 0           |
| 0x1401f4b12#379  | 0x1401f4b12#380  | 0           |
| 0x1401f4b12#380  | 0x1401f4b1a#382  | 1           |
| 0x1401f4b1a#382  | 0x1401f4b20#391  | 1           |
| 0x1401f4b20#2107 | 0x1401f4b20#2087 | 0           |
| 0x1401f4af3#1772 | 0x1401f4b20#2107 | 0           |
| 0x1401f4b22#2068 | 0x1401f4b22#393  | 1           |
| 0x1401f4af3#1772 | 0x1401f4b22#2068 | 0           |
| 0x1401f4b22#393  | 0x1401f4b22#2108 | 0           |
| 0x1401f4b29#2110 | 0x1401f4b29#406  | 0           |
| 0x1401f4b29#2069 | 0x1401f4b29#406  | 1           |
| 0x1401f4b29#2109 | 0x1401f4b29#2069 | 1           |
| 0x1401f4b22#2108 | 0x1401f4b29#2109 | 0           |
| 0x1401f4af3#1772 | 0x1401f4b29#2110 | 0           |
| 0x1401f4b31#2111 | 0x1401f4b31#423  | 1           |
| 0x1401f4b31#423  | 0x1401f4b31#425  | 1           |
| 0x1401f4996#2046 | 0x1401f4b31#2095 | 0           |
| 0x1401f4b29#406  | 0x1401f4b31#2111 | 0           |
| 0x1401f4af3#1838 | 0x1401f4b37#426  | 0           |
| 0x1401f4b37#426  | 0x1401f4b37#427  | 0           |
| 0x1401f4b45#1035 | 0x1401f4b45#433  | 1           |
| 0x1401f4b45#1067 | 0x1401f4b45#433  | 2           |
| 0x1401f4c09#2086 | 0x1401f4b45#1035 | 0           |
| 0x1401f4b20#2087 | 0x1401f4b45#1035 | 1           |
| 0x1401f4b22#2108 | 0x1401f4b45#1035 | 2           |
| 0x1401f4bf5#664  | 0x1401f4b45#1067 | 0           |
| 0x1401f4b12#380  | 0x1401f4b45#1067 | 1           |
| 0x1401f4b37#427  | 0x1401f4b45#1067 | 2           |
| 0x1401f4b45#1528 | 0x1401f4b45#1512 | 0           |
| 0x1401f4bd9#1527 | 0x1401f4b45#1528 | 0           |
| 0x1401f4b05#1516 | 0x1401f4b45#1528 | 1           |
| 0x1401f4b05#1516 | 0x1401f4b45#1528 | 2           |
| 0x1401f4b45#1660 | 0x1401f4b45#1655 | 0           |
| 0x1401f4bd9#1659 | 0x1401f4b45#1660 | 0           |
| 0x1401f4af3#1662 | 0x1401f4b45#1660 | 1           |
| 0x1401f4af3#1662 | 0x1401f4b45#1660 | 2           |
| 0x1401f4b45#1682 | 0x1401f4b45#1677 | 0           |
| 0x1401f4bd9#1681 | 0x1401f4b45#1682 | 0           |
| 0x1401f4af3#1684 | 0x1401f4b45#1682 | 1           |
| 0x1401f4af3#1684 | 0x1401f4b45#1682 | 2           |
| 0x1401f4b45#1704 | 0x1401f4b45#1699 | 0           |
| 0x1401f4bd9#1703 | 0x1401f4b45#1704 | 0           |
| 0x1401f4af3#1706 | 0x1401f4b45#1704 | 1           |
| 0x1401f4af3#1706 | 0x1401f4b45#1704 | 2           |
| 0x1401f4b45#1726 | 0x1401f4b45#1721 | 0           |
| 0x1401f4bd9#1725 | 0x1401f4b45#1726 | 0           |
| 0x1401f4af3#1728 | 0x1401f4b45#1726 | 1           |
| 0x1401f4af3#1728 | 0x1401f4b45#1726 | 2           |
| 0x1401f4b45#1748 | 0x1401f4b45#1743 | 0           |
| 0x1401f4bd9#1747 | 0x1401f4b45#1748 | 0           |
| 0x1401f4af3#1750 | 0x1401f4b45#1748 | 1           |
| 0x1401f4af3#1750 | 0x1401f4b45#1748 | 2           |
| 0x1401f4b45#1770 | 0x1401f4b45#1765 | 0           |
| 0x1401f4bd9#1769 | 0x1401f4b45#1770 | 0           |
| 0x1401f4af3#1772 | 0x1401f4b45#1770 | 1           |
| 0x1401f4af3#1772 | 0x1401f4b45#1770 | 2           |
| 0x1401f4b45#1792 | 0x1401f4b45#1787 | 0           |
| 0x1401f4bd9#1791 | 0x1401f4b45#1792 | 0           |
| 0x1401f4af3#1794 | 0x1401f4b45#1792 | 1           |
| 0x1401f4af3#1794 | 0x1401f4b45#1792 | 2           |
| 0x1401f4b45#1814 | 0x1401f4b45#1809 | 0           |
| 0x1401f4bd9#1813 | 0x1401f4b45#1814 | 0           |
| 0x1401f4af3#1816 | 0x1401f4b45#1814 | 1           |
| 0x1401f4af3#1816 | 0x1401f4b45#1814 | 2           |
| 0x1401f4b45#1836 | 0x1401f4b45#1831 | 0           |
| 0x1401f4bd9#1835 | 0x1401f4b45#1836 | 0           |
| 0x1401f4af3#1838 | 0x1401f4b45#1836 | 1           |
| 0x1401f4af3#1838 | 0x1401f4b45#1836 | 2           |
| 0x1401f4b45#1859 | 0x1401f4b45#1854 | 0           |
| 0x1401f4be5#647  | 0x1401f4b45#1859 | 0           |
| 0x1401f4af3#1861 | 0x1401f4b45#1859 | 1           |
| 0x1401f4af3#1861 | 0x1401f4b45#1859 | 2           |
| 0x1401f4b45#1903 | 0x1401f4b45#1898 | 0           |
| 0x1401f4bd9#641  | 0x1401f4b45#1903 | 0           |
| 0x1401f4af3#1905 | 0x1401f4b45#1903 | 1           |
| 0x1401f4af3#1905 | 0x1401f4b45#1903 | 2           |
| 0x1401f4b45#1925 | 0x1401f4b45#1920 | 0           |
| 0x1401f4bdd#644  | 0x1401f4b45#1925 | 0           |
| 0x1401f4af3#1927 | 0x1401f4b45#1925 | 1           |
| 0x1401f4af3#1927 | 0x1401f4b45#1925 | 2           |
| 0x1401f4b45#1947 | 0x1401f4b45#1942 | 0           |
| 0x1401f4bd9#1946 | 0x1401f4b45#1947 | 0           |
| 0x1401f4af3#1949 | 0x1401f4b45#1947 | 1           |
| 0x1401f4af3#1949 | 0x1401f4b45#1947 | 2           |
| 0x1401f4996#2051 | 0x1401f4b4a#2091 | 0           |
| 0x1401f4adf#1837 | 0x1401f4b58#504  | 1           |
| 0x1401f4b58#504  | 0x1401f4b58#508  | 1           |
| 0x1401f4b4f#2070 | 0x1401f4b58#2083 | 0           |
| 0x1401f4adf#1771 | 0x1401f4b58#2084 | 0           |
| 0x1401f4b58#2083 | 0x1401f4b5c#1012 | 0           |
| 0x1401f4b58#2084 | 0x1401f4b5c#1012 | 1           |
| 0x1401f4b61#2112 | 0x1401f4b61#515  | 0           |
| 0x1401f4adf#1815 | 0x1401f4b61#2112 | 0           |
| 0x1401f4b6b#2072 | 0x1401f4b70#522  | 1           |
| 0x1401f4b66#2071 | 0x1401f4b70#522  | 2           |
| 0x1401f4adf#1529 | 0x1401f4b70#1506 | 0           |
| 0x1401f4adf#1661 | 0x1401f4b70#1649 | 0           |
| 0x1401f4adf#1683 | 0x1401f4b70#1671 | 0           |
| 0x1401f4adf#1705 | 0x1401f4b70#1693 | 0           |
| 0x1401f4b5c#1012 | 0x1401f4b70#1715 | 0           |
| 0x1401f4b61#515  | 0x1401f4b70#1737 | 0           |
| 0x1401f4adf#1771 | 0x1401f4b70#1759 | 0           |
| 0x1401f4adf#1793 | 0x1401f4b70#1781 | 0           |
| 0x1401f4adf#1815 | 0x1401f4b70#1803 | 0           |
| 0x1401f4adf#1837 | 0x1401f4b70#1825 | 0           |
| 0x1401f4adf#1860 | 0x1401f4b70#1848 | 0           |
| 0x1401f4adf#1882 | 0x1401f4b70#1870 | 0           |
| 0x1401f4adf#1904 | 0x1401f4b70#1892 | 0           |
| 0x1401f4adf#1926 | 0x1401f4b70#1914 | 0           |
| 0x1401f4adf#1948 | 0x1401f4b70#1936 | 0           |
| 0x1401f4b70#522  | 0x1401f4b70#2113 | 0           |
| 0x1401f4b76#2073 | 0x1401f4b76#524  | 1           |
| 0x1401f4b70#2113 | 0x1401f4b76#2073 | 0           |
| 0x1401f4b76#524  | 0x1401f4b7b#535  | 1           |
| 0x1401f4b7b#535  | 0x1401f4b7b#536  | 1           |
| 0x1401f4b70#2113 | 0x1401f4b7b#2089 | 0           |
| 0x1401f4b70#2113 | 0x1401f4b7d#537  | 1           |
| 0x1401f4b80#2114 | 0x1401f4b80#2088 | 0           |
| 0x1401f4b7d#537  | 0x1401f4b80#2114 | 0           |
| 0x1401f4b80#2088 | 0x1401f4b85#1036 | 0           |
| 0x1401f4b7b#2089 | 0x1401f4b85#1036 | 1           |
| 0x1401f4b8a#2074 | 0x1401f4b8a#544  | 1           |
| 0x1401f4b70#2113 | 0x1401f4b8a#2074 | 0           |
| 0x1401f4b93#2075 | 0x1401f4b9b#554  | 2           |
| 0x1401f4b70#1506 | 0x1401f4b9b#1507 | 0           |
| 0x1401f4b70#1649 | 0x1401f4b9b#1650 | 0           |
| 0x1401f4b70#1671 | 0x1401f4b9b#1672 | 0           |
| 0x1401f4b70#1693 | 0x1401f4b9b#1694 | 0           |
| 0x1401f4b85#1036 | 0x1401f4b9b#1716 | 0           |
| 0x1401f4b8a#544  | 0x1401f4b9b#1738 | 0           |
| 0x1401f4b70#1759 | 0x1401f4b9b#1760 | 0           |
| 0x1401f4b70#1781 | 0x1401f4b9b#1782 | 0           |
| 0x1401f4b70#1803 | 0x1401f4b9b#1804 | 0           |
| 0x1401f4b70#1825 | 0x1401f4b9b#1826 | 0           |
| 0x1401f4b70#1848 | 0x1401f4b9b#1849 | 0           |
| 0x1401f4b70#1870 | 0x1401f4b9b#1871 | 0           |
| 0x1401f4b70#1892 | 0x1401f4b9b#1893 | 0           |
| 0x1401f4b70#1914 | 0x1401f4b9b#1915 | 0           |
| 0x1401f4b70#1936 | 0x1401f4b9b#1937 | 0           |
| 0x1401f4b9b#1915 | 0x1401f4ba9#568  | 1           |
| 0x1401f4ba9#568  | 0x1401f4ba9#569  | 1           |
| 0x1401f4b9b#1915 | 0x1401f4bab#571  | 0           |
| 0x1401f4b9b#1871 | 0x1401f4bae#1840 | 0           |
| 0x1401f4b9b#1849 | 0x1401f4bae#1840 | 1           |
| 0x1401f4bab#571  | 0x1401f4bb3#582  | 0           |
| 0x1401f4bb3#582  | 0x1401f4bba#591  | 1           |
| 0x1401f4bae#1840 | 0x1401f4bba#2085 | 0           |
| 0x1401f4bae#1840 | 0x1401f4bbc#592  | 0           |
| 0x1401f4bbc#2115 | 0x1401f4bbc#593  | 1           |
| 0x1401f4bbc#592  | 0x1401f4bbc#2115 | 0           |
| 0x1401f4bae#1840 | 0x1401f4bc0#597  | 0           |
| 0x1401f4bbc#593  | 0x1401f4bc0#597  | 1           |
| 0x1401f4bc0#597  | 0x1401f4bc3#606  | 0           |
| 0x1401f4bc3#606  | 0x1401f4bcb#623  | 0           |
| 0x1401f4bcb#623  | 0x1401f4bcb#625  | 1           |
| 0x1401f4b9b#1915 | 0x1401f4bcd#628  | 0           |
| 0x1401f4bd4#1033 | 0x1401f4bd4#638  | 1           |
| 0x1401f4bd4#1065 | 0x1401f4bd4#638  | 2           |
| 0x1401f4bba#2085 | 0x1401f4bd4#1033 | 0           |
| 0x1401f4bbc#593  | 0x1401f4bd4#1033 | 1           |
| 0x1401f4bab#571  | 0x1401f4bd4#1065 | 0           |
| 0x1401f4bcd#628  | 0x1401f4bd4#1065 | 1           |
| 0x1401f4b9b#1507 | 0x1401f4bd4#1509 | 0           |
| 0x1401f4b9b#1650 | 0x1401f4bd4#1652 | 0           |
| 0x1401f4b9b#1672 | 0x1401f4bd4#1674 | 0           |
| 0x1401f4b9b#1694 | 0x1401f4bd4#1696 | 0           |
| 0x1401f4b9b#1716 | 0x1401f4bd4#1718 | 0           |
| 0x1401f4b9b#1738 | 0x1401f4bd4#1740 | 0           |
| 0x1401f4b9b#1760 | 0x1401f4bd4#1762 | 0           |
| 0x1401f4b9b#1782 | 0x1401f4bd4#1784 | 0           |
| 0x1401f4b9b#1804 | 0x1401f4bd4#1806 | 0           |
| 0x1401f4b9b#1826 | 0x1401f4bd4#1828 | 0           |
| 0x1401f4b9b#1937 | 0x1401f4bd4#1939 | 0           |
| 0x1401f4b9b#1507 | 0x1401f4bd9#1527 | 0           |
| 0x1401f4bd4#1509 | 0x1401f4bd9#1527 | 1           |
| 0x1401f4b9b#1650 | 0x1401f4bd9#1659 | 0           |
| 0x1401f4bd4#1652 | 0x1401f4bd9#1659 | 1           |
| 0x1401f4b9b#1672 | 0x1401f4bd9#1681 | 0           |
| 0x1401f4bd4#1674 | 0x1401f4bd9#1681 | 1           |
| 0x1401f4b9b#1694 | 0x1401f4bd9#1703 | 0           |
| 0x1401f4bd4#1696 | 0x1401f4bd9#1703 | 1           |
| 0x1401f4b9b#1716 | 0x1401f4bd9#1725 | 0           |
| 0x1401f4bd4#1718 | 0x1401f4bd9#1725 | 1           |
| 0x1401f4b9b#1738 | 0x1401f4bd9#1747 | 0           |
| 0x1401f4bd4#1740 | 0x1401f4bd9#1747 | 1           |
| 0x1401f4b9b#1760 | 0x1401f4bd9#1769 | 0           |
| 0x1401f4bd4#1762 | 0x1401f4bd9#1769 | 1           |
| 0x1401f4b9b#1782 | 0x1401f4bd9#1791 | 0           |
| 0x1401f4bd4#1784 | 0x1401f4bd9#1791 | 1           |
| 0x1401f4b9b#1804 | 0x1401f4bd9#1813 | 0           |
| 0x1401f4bd4#1806 | 0x1401f4bd9#1813 | 1           |
| 0x1401f4b9b#1826 | 0x1401f4bd9#1835 | 0           |
| 0x1401f4bd4#1828 | 0x1401f4bd9#1835 | 1           |
| 0x1401f4b9b#1937 | 0x1401f4bd9#1946 | 0           |
| 0x1401f4bd4#1939 | 0x1401f4bd9#1946 | 1           |
| 0x1401f4bd9#1835 | 0x1401f4bf3#661  | 0           |
| 0x1401f4bf3#661  | 0x1401f4bf3#662  | 1           |
| 0x1401f4996#2053 | 0x1401f4bf3#2093 | 0           |
| 0x1401f4bd9#1835 | 0x1401f4bf5#663  | 0           |
| 0x1401f4bf5#663  | 0x1401f4bf5#664  | 0           |
| 0x1401f4bf5#664  | 0x1401f4c02#670  | 1           |
| 0x1401f4c02#670  | 0x1401f4c09#679  | 1           |
| 0x1401f4c09#2117 | 0x1401f4c09#2086 | 0           |
| 0x1401f4bd9#1769 | 0x1401f4c09#2117 | 0           |
| 0x1401f4c0f#2076 | 0x1401f4c0f#681  | 1           |
| 0x1401f4bd9#1769 | 0x1401f4c0f#2076 | 0           |
| 0x1401f4c16#2119 | 0x1401f4c16#694  | 0           |
| 0x1401f4c16#2077 | 0x1401f4c16#694  | 1           |
| 0x1401f4c16#2118 | 0x1401f4c16#2077 | 1           |
| 0x1401f4c0f#681  | 0x1401f4c16#2118 | 0           |
| 0x1401f4bd9#1769 | 0x1401f4c16#2119 | 0           |
| 0x1401f4c1e#2120 | 0x1401f4c1e#711  | 0           |
| 0x1401f4c1e#711  | 0x1401f4c1e#713  | 1           |
| 0x1401f4c16#694  | 0x1401f4c1e#2120 | 0           |
| 0x1401f4bd9#1835 | 0x1401f4c20#714  | 0           |
| 0x1401f4c20#714  | 0x1401f4c20#715  | 0           |
| 0x1401f4c0f#681  | 0x1401f4c2b#720  | 1           |
| 0x1401f4c20#715  | 0x1401f4c2b#720  | 2           |
| 0x1401f4bd9#1527 | 0x1401f4c2b#1510 | 0           |
| 0x1401f4bd9#1659 | 0x1401f4c2b#1653 | 0           |
| 0x1401f4bd9#1681 | 0x1401f4c2b#1675 | 0           |
| 0x1401f4bd9#1703 | 0x1401f4c2b#1697 | 0           |
| 0x1401f4bd9#1725 | 0x1401f4c2b#1719 | 0           |
| 0x1401f4bd9#1747 | 0x1401f4c2b#1741 | 0           |
| 0x1401f4bd9#1769 | 0x1401f4c2b#1763 | 0           |
| 0x1401f4bd9#1791 | 0x1401f4c2b#1785 | 0           |
| 0x1401f4bd9#1813 | 0x1401f4c2b#1807 | 0           |
| 0x1401f4bd9#1835 | 0x1401f4c2b#1829 | 0           |
| 0x1401f4be5#647  | 0x1401f4c2b#1852 | 0           |
| 0x1401f4bd9#641  | 0x1401f4c2b#1896 | 0           |
| 0x1401f4bdd#644  | 0x1401f4c2b#1918 | 0           |
| 0x1401f4bd9#1946 | 0x1401f4c2b#1940 | 0           |
| 0x1401f4996#2055 | 0x1401f4c30#2094 | 0           |
| 0x1401f4c37#2116 | 0x1401f4c37#724  | 0           |
| 0x1401f4b9b#1507 | 0x1401f4c37#1508 | 0           |
| 0x1401f4b9b#1650 | 0x1401f4c37#1651 | 0           |
| 0x1401f4b9b#1672 | 0x1401f4c37#1673 | 0           |
| 0x1401f4b9b#1694 | 0x1401f4c37#1695 | 0           |
| 0x1401f4b9b#1716 | 0x1401f4c37#1717 | 0           |
| 0x1401f4b9b#1738 | 0x1401f4c37#1739 | 0           |
| 0x1401f4b9b#1760 | 0x1401f4c37#1761 | 0           |
| 0x1401f4b9b#1782 | 0x1401f4c37#1783 | 0           |
| 0x1401f4b9b#1804 | 0x1401f4c37#1805 | 0           |
| 0x1401f4b9b#1826 | 0x1401f4c37#1827 | 0           |
| 0x1401f4b9b#1849 | 0x1401f4c37#1850 | 0           |
| 0x1401f4b9b#1893 | 0x1401f4c37#1894 | 0           |
| 0x1401f4b9b#1915 | 0x1401f4c37#1916 | 0           |
| 0x1401f4b9b#1937 | 0x1401f4c37#1938 | 0           |
| 0x1401f4c37#723  | 0x1401f4c37#2116 | 0           |
| 0x1401f4b31#2095 | 0x1401f4c39#1082 | 0           |
| 0x1401f4996#2049 | 0x1401f4c39#1082 | 1           |
| 0x1401f4c37#2078 | 0x1401f4c39#1082 | 2           |
| 0x1401f4b05#1516 | 0x1401f4c39#1526 | 0           |
| 0x1401f4bd9#1527 | 0x1401f4c39#1526 | 1           |
| 0x1401f4c37#1508 | 0x1401f4c39#1526 | 2           |
| 0x1401f4af3#1662 | 0x1401f4c39#1658 | 0           |
| 0x1401f4bd9#1659 | 0x1401f4c39#1658 | 1           |
| 0x1401f4c37#1651 | 0x1401f4c39#1658 | 2           |
| 0x1401f4af3#1684 | 0x1401f4c39#1680 | 0           |
| 0x1401f4bd9#1681 | 0x1401f4c39#1680 | 1           |
| 0x1401f4c37#1673 | 0x1401f4c39#1680 | 2           |
| 0x1401f4af3#1706 | 0x1401f4c39#1702 | 0           |
| 0x1401f4bd9#1703 | 0x1401f4c39#1702 | 1           |
| 0x1401f4c37#1695 | 0x1401f4c39#1702 | 2           |
| 0x1401f4af3#1728 | 0x1401f4c39#1724 | 0           |
| 0x1401f4bd9#1725 | 0x1401f4c39#1724 | 1           |
| 0x1401f4c37#1717 | 0x1401f4c39#1724 | 2           |
| 0x1401f4af3#1750 | 0x1401f4c39#1746 | 0           |
| 0x1401f4bd9#1747 | 0x1401f4c39#1746 | 1           |
| 0x1401f4c37#1739 | 0x1401f4c39#1746 | 2           |
| 0x1401f4af3#1772 | 0x1401f4c39#1768 | 0           |
| 0x1401f4bd9#1769 | 0x1401f4c39#1768 | 1           |
| 0x1401f4c37#1761 | 0x1401f4c39#1768 | 2           |
| 0x1401f4af3#1794 | 0x1401f4c39#1790 | 0           |
| 0x1401f4bd9#1791 | 0x1401f4c39#1790 | 1           |
| 0x1401f4c37#1783 | 0x1401f4c39#1790 | 2           |
| 0x1401f4af3#1816 | 0x1401f4c39#1812 | 0           |
| 0x1401f4bd9#1813 | 0x1401f4c39#1812 | 1           |
| 0x1401f4c37#1805 | 0x1401f4c39#1812 | 2           |
| 0x1401f4af3#1838 | 0x1401f4c39#1834 | 0           |
| 0x1401f4bd9#1835 | 0x1401f4c39#1834 | 1           |
| 0x1401f4c37#1827 | 0x1401f4c39#1834 | 2           |
| 0x1401f4af3#1861 | 0x1401f4c39#1857 | 0           |
| 0x1401f4be5#647  | 0x1401f4c39#1857 | 1           |
| 0x1401f4c37#1850 | 0x1401f4c39#1857 | 2           |
| 0x1401f4af3#1905 | 0x1401f4c39#1901 | 0           |
| 0x1401f4bd9#641  | 0x1401f4c39#1901 | 1           |
| 0x1401f4c37#1894 | 0x1401f4c39#1901 | 2           |
| 0x1401f4af3#1927 | 0x1401f4c39#1923 | 0           |
| 0x1401f4bdd#644  | 0x1401f4c39#1923 | 1           |
| 0x1401f4c37#1916 | 0x1401f4c39#1923 | 2           |
| 0x1401f4af3#1949 | 0x1401f4c39#1945 | 0           |
| 0x1401f4bd9#1946 | 0x1401f4c39#1945 | 1           |
| 0x1401f4c37#1938 | 0x1401f4c39#1945 | 2           |
| 0x1401f4c3e#2121 | 0x1401f4c3e#477  | 0           |
| 0x1401f4c39#1082 | 0x1401f4c3e#741  | 0           |
| 0x1401f4c39#1526 | 0x1401f4c3e#1511 | 0           |
| 0x1401f4c39#1658 | 0x1401f4c3e#1654 | 0           |
| 0x1401f4c39#1680 | 0x1401f4c3e#1676 | 0           |
| 0x1401f4c39#1702 | 0x1401f4c3e#1698 | 0           |
| 0x1401f4c39#1724 | 0x1401f4c3e#1720 | 0           |
| 0x1401f4c39#1746 | 0x1401f4c3e#1742 | 0           |
| 0x1401f4c39#1768 | 0x1401f4c3e#1764 | 0           |
| 0x1401f4c39#1790 | 0x1401f4c3e#1786 | 0           |
| 0x1401f4c39#1812 | 0x1401f4c3e#1808 | 0           |
| 0x1401f4c39#1834 | 0x1401f4c3e#1830 | 0           |
| 0x1401f4c39#1857 | 0x1401f4c3e#1853 | 0           |
| 0x1401f4c39#1901 | 0x1401f4c3e#1897 | 0           |
| 0x1401f4c39#1923 | 0x1401f4c3e#1919 | 0           |
| 0x1401f4c39#1945 | 0x1401f4c3e#1941 | 0           |
| 0x1401f4c3e#476  | 0x1401f4c3e#2121 | 0           |
| 0x1401f49e7#2096 | 0x1401f4c40#1087 | 0           |
| 0x1401f4a47#2097 | 0x1401f4c40#1087 | 1           |
| 0x1401f4a52#2098 | 0x1401f4c40#1087 | 2           |
| 0x1401f4a5e#2099 | 0x1401f4c40#1087 | 3           |
| 0x1401f4c3e#741  | 0x1401f4c40#1087 | 4           |
| 0x1401f49df#1499 | 0x1401f4c40#1531 | 0           |
| 0x1401f4a3f#1502 | 0x1401f4c40#1531 | 1           |
| 0x1401f4a3f#1502 | 0x1401f4c40#1531 | 2           |
| 0x1401f4a3f#1502 | 0x1401f4c40#1531 | 3           |
| 0x1401f4c3e#1511 | 0x1401f4c40#1531 | 4           |
| 0x1401f4c43#2079 | 0x1401f4c43#1489 | 1           |
| 0x1401f4c40#1531 | 0x1401f4c43#1523 | 0           |
| 0x1401f4c43#1523 | 0x1401f4c43#1524 | 0           |
| 0x1401f4c46#2080 | 0x1401f4c46#486  | 1           |
| 0x1401f4c43#1524 | 0x1401f4c46#1518 | 0           |
| 0x1401f4c4a#2081 | 0x1401f4c4a#489  | 1           |
| 0x1401f4c46#1518 | 0x1401f4c4a#1519 | 0           |
| 0x1401f4c52#2122 | 0x1401f4c52#491  | 1           |
| 0x1401f4c4a#1519 | 0x1401f4c52#1520 | 0           |
| 0x1401f4c40#1087 | 0x1401f4c52#2092 | 0           |
| 0x1401f4b0c#2090 | 0x1401f4c55#1081 | 0           |
| 0x1401f4b4a#2091 | 0x1401f4c55#1081 | 1           |
| 0x1401f4c52#2092 | 0x1401f4c55#1081 | 2           |
| 0x1401f4bf3#2093 | 0x1401f4c55#1081 | 3           |
| 0x1401f4c30#2094 | 0x1401f4c55#1081 | 4           |
| 0x1401f4b05#1516 | 0x1401f4c55#1525 | 0           |
| 0x1401f4b45#1512 | 0x1401f4c55#1525 | 1           |
| 0x1401f4c52#1520 | 0x1401f4c55#1525 | 2           |
| 0x1401f4bd9#1527 | 0x1401f4c55#1525 | 3           |
| 0x1401f4c2b#1510 | 0x1401f4c55#1525 | 4           |
| 0x1401f4c55#1081 | 0x1401f4c62#448  | 0           |
| 0x1401f4c62#2123 | 0x1401f4c62#449  | 1           |
| 0x1401f4c62#448  | 0x1401f4c62#2123 | 0           |
| 0x1401f4c55#435  | 0x1401f4c7e#474  | 1           |
| 0x1401f4c55#1525 | 0x1401f4c7e#1513 | 0           |

## normalized_result.native_value_flow.effects

| operation        | kind               | operand_input | value_input |
|------------------|--------------------|---------------|-------------|
| 0x1401f49df#77   | direct_call        | 0             |             |
| 0x1401f49e7#88   | conditional_branch |               | 1           |
| 0x1401f49f9#104  | direct_call        | 0             |             |
| 0x1401f4a32#140  | direct_call        | 0             |             |
| 0x1401f4a3f#149  | direct_call        | 0             |             |
| 0x1401f4a47#160  | conditional_branch |               | 1           |
| 0x1401f4a52#174  | conditional_branch |               | 1           |
| 0x1401f4a5e#188  | conditional_branch |               | 1           |
| 0x1401f4a85#220  | direct_call        | 0             |             |
| 0x1401f4aa3#246  | conditional_branch |               | 1           |
| 0x1401f4aaa#257  | conditional_branch |               | 1           |
| 0x1401f4ab9#275  | direct_call        | 0             |             |
| 0x1401f4ac1#286  | conditional_branch |               | 1           |
| 0x1401f4acd#316  | conditional_branch |               | 1           |
| 0x1401f4ada#332  | direct_call        | 0             |             |
| 0x1401f4af1#352  | conditional_branch |               | 1           |
| 0x1401f4af6#1483 | memory_write       | 1             | 2           |
| 0x1401f4af6#1484 | memory_write       | 1             | 2           |
| 0x1401f4af9#361  | memory_write       | 1             | 2           |
| 0x1401f4afd#364  | memory_write       | 1             | 2           |
| 0x1401f4b05#366  | memory_write       | 1             | 2           |
| 0x1401f4b0c#378  | conditional_branch |               | 1           |
| 0x1401f4b20#391  | conditional_branch |               | 1           |
| 0x1401f4b22#393  | memory_read        | 1             |             |
| 0x1401f4b31#425  | conditional_branch |               | 1           |
| 0x1401f4b45#433  | direct_call        | 0             |             |
| 0x1401f4b58#508  | conditional_branch |               | 1           |
| 0x1401f4b70#522  | direct_call        | 0             |             |
| 0x1401f4b76#524  | memory_read        | 1             |             |
| 0x1401f4b7b#536  | conditional_branch |               | 1           |
| 0x1401f4b7d#537  | memory_read        | 1             |             |
| 0x1401f4b8a#544  | memory_read        | 1             |             |
| 0x1401f4b9b#554  | direct_call        | 0             |             |
| 0x1401f4ba9#569  | conditional_branch |               | 1           |
| 0x1401f4bba#591  | conditional_branch |               | 1           |
| 0x1401f4bbc#593  | memory_read        | 1             |             |
| 0x1401f4bcb#625  | conditional_branch |               | 1           |
| 0x1401f4bd4#638  | direct_call        | 0             |             |
| 0x1401f4bf3#662  | conditional_branch |               | 1           |
| 0x1401f4c09#679  | conditional_branch |               | 1           |
| 0x1401f4c0f#681  | memory_read        | 1             |             |
| 0x1401f4c1e#713  | conditional_branch |               | 1           |
| 0x1401f4c2b#720  | direct_call        | 0             |             |
| 0x1401f4c37#724  | indirect_call      | 0             |             |
| 0x1401f4c3e#477  | indirect_call      | 0             |             |
| 0x1401f4c43#1488 | memory_write       | 1             | 2           |
| 0x1401f4c43#1489 | memory_write       | 1             | 2           |
| 0x1401f4c46#486  | memory_write       | 1             | 2           |
| 0x1401f4c4a#489  | memory_write       | 1             | 2           |
| 0x1401f4c52#491  | memory_write       | 1             | 2           |
| 0x1401f4c62#449  | memory_write       | 1             | 2           |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x1401f4af6#1483 | 1           |
| 0       | 0x1401f4af6#2065 | 0           |
| 0       | 0x1401f4af9#2066 | 0           |
| 0       | 0x1401f4afd#2067 | 0           |
| 0       | 0x1401f4b05#2106 | 0           |
| 0       | 0x1401f4b9b#554  | 1           |
| 0       | 0x1401f4c43#1488 | 1           |
| 0       | 0x1401f4c43#2079 | 0           |
| 0       | 0x1401f4c46#2080 | 0           |
| 0       | 0x1401f4c4a#2081 | 0           |
| 0       | 0x1401f4c52#2122 | 0           |
| 0       | 0x1401f4c55#435  | 0           |

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

