## evidence_id

ev_0f2de8ddd63c5bf7eac4130488cfe873b6cde9ad6b84f5befd6fccb226c5dcef

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
| procedure | 0x140309d20 |

## raw_result.value.procedure.address

0x140309c30

## raw_result.value.procedure.name

FUN_140309c30

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
| 0x140309c30 | 0x140309e96 |

## raw_result.value.procedure.body.total_bytes

615

## raw_result.value.procedure.body.span_bytes

615

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_140309c30()

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_38 @ Stack[-0x38]:8      | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8      | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8      | ghidra-function-database |
| undefined local_5f @ Stack[-0x5f]:1       | ghidra-function-database |
| undefined1 local_60 @ Stack[-0x60]:1      | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined1[16] local_78 @ Stack[-0x78]:16 | ghidra-function-database |
| undefined8 local_80 @ Stack[-0x80]:8      | ghidra-function-database |
| undefined8 local_88 @ Stack[-0x88]:8      | ghidra-function-database |
| undefined1[16] local_98 @ Stack[-0x98]:16 | ghidra-function-database |
| undefined8 local_b0 @ Stack[-0xb0]:8      | ghidra-function-database |
| undefined8 local_b8 @ Stack[-0xb8]:8      | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_140309c30(char *param_1,longlong *param_2)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  char *local_b8;
  longlong local_b0;
  longlong local_98 [7];
  undefined1 local_60;
  longlong local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  puVar6 = auStack_d8;
  local_38 = DAT_1404c7ac0 ^ (ulonglong)auStack_d8;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0xf;
  local_98[0] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_60 = 0;
  local_b8 = param_1;
  FUN_140313770(local_98);
  local_b8 = "payload";
  local_b0 = 7;
  FUN_140313ce0(local_98,&local_b8);
  local_b8 = (char *)*param_2;
  local_b0 = param_2[1] - (longlong)local_b8;
  pcVar2 = (char *)FUN_140307e60(local_58,&local_b8);
  local_b8 = pcVar2;
  if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
    local_b8 = *(char **)pcVar2;
  }
  local_b0 = *(longlong *)(pcVar2 + 0x10);
  FUN_140317660(local_98,&local_b8);
  if (local_40 < 0x10) {
LAB_140309d2c:
    local_b8 = "signature";
    local_b0 = 9;
    FUN_140313ce0(local_98,&local_b8);
    local_b8 = (char *)param_2[3];
    local_b0 = param_2[4] - (longlong)local_b8;
    pcVar2 = (char *)FUN_140307e60(local_58,&local_b8);
    local_b8 = pcVar2;
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      local_b8 = *(char **)pcVar2;
    }
    local_b0 = *(longlong *)(pcVar2 + 0x10);
    FUN_140317660(local_98,&local_b8);
    if (0xf < local_40) {
      uVar5 = local_40 + 1;
      lVar4 = local_58[0];
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(local_58[0] + -8);
        if (0x1f < (local_58[0] - lVar4) - 8U) goto LAB_140309e1f;
        uVar5 = local_40 + 0x28;
      }
      thunk_FUN_140327e20(lVar4,uVar5);
    }
    FUN_140313910(local_98);
    FUN_1403176a0(local_98,param_1);
    if (local_98[4] != 0) {
      lVar4 = local_98[4];
      puVar6 = auStack_d8;
      if ((0xfff < (ulonglong)((local_98[6] - local_98[4] >> 3) * 8)) &&
         (lVar4 = *(longlong *)(local_98[4] + -8), puVar6 = auStack_d8,
         0x1f < (local_98[4] - *(longlong *)(local_98[4] + -8)) - 8U)) goto LAB_140309e8f;
      goto LAB_140309e29;
    }
  }
  else {
    uVar5 = local_40 + 1;
    lVar4 = local_58[0];
    if (uVar5 < 0x1000) {
LAB_140309d27:
      thunk_FUN_140327e20(lVar4,uVar5);
      goto LAB_140309d2c;
    }
    lVar4 = *(longlong *)(local_58[0] + -8);
    if ((local_58[0] - lVar4) - 8U < 0x20) {
      uVar5 = local_40 + 0x28;
      goto LAB_140309d27;
    }
LAB_140309e1f:
    lVar4 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_d0;
LAB_140309e29:
    *(undefined8 *)(puVar6 + -8) = 0x140309e31;
    thunk_FUN_140327e20(lVar4);
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[6] = 0;
  }
  if (0xf < (ulonglong)local_98[3]) {
    uVar5 = local_98[3] + 1;
    lVar4 = local_98[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_98[0] + -8);
      if (0x1f < (local_98[0] - lVar4) - 8U) {
LAB_140309e8f:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (char *)uVar3;
      }
      uVar5 = local_98[3] + 0x28;
    }
    *(undefined8 *)(puVar6 + -8) = 0x140309e74;
    thunk_FUN_140327e20(lVar4,uVar5);
  }
  *(undefined8 *)(puVar6 + -8) = 0x140309e83;
  return param_1;
}



## raw_result.value.assembly

0x140309c30: PUSH RBP,0x140309c32: PUSH RBX,0x140309c33: PUSH RSI,0x140309c34: PUSH RDI,0x140309c35: LEA RBP, [RSP + -0x3f],0x140309c3a: SUB RSP, 0xb8,0x140309c41: MOV RAX, qword ptr [0x1404c7ac0],0x140309c48: XOR RAX, RSP,0x140309c4b: MOV qword ptr [RBP + 0x27], RAX,0x140309c4f: MOV RDI, RDX,0x140309c52: MOV RBX, RCX,0x140309c55: MOV qword ptr [RBP + -0x59], RCX,0x140309c59: XOR ESI, ESI,0x140309c5b: XORPS XMM0, XMM0,0x140309c5e: MOVUPS xmmword ptr [RBP + -0x39], XMM0,0x140309c62: MOV qword ptr [RBP + -0x29], RSI,0x140309c66: MOV qword ptr [RBP + -0x21], 0xf,0x140309c6e: MOV byte ptr [RBP + -0x39], SIL,0x140309c72: MOVDQA xmmword ptr [RBP + -0x19], XMM0,0x140309c77: MOV qword ptr [RBP + -0x9], RSI,0x140309c7b: MOV byte ptr [RBP + -0x1], SIL,0x140309c7f: LEA RCX, [RBP + -0x39],0x140309c83: CALL 0x140313770,0x140309c88: LEA RAX, [0x140448f68],0x140309c8f: MOV qword ptr [RBP + -0x59], RAX,0x140309c93: MOV qword ptr [RBP + -0x51], 0x7,0x140309c9b: LEA RDX, [RBP + -0x59],0x140309c9f: LEA RCX, [RBP + -0x39],0x140309ca3: CALL 0x140313ce0,0x140309ca8: MOV RCX, qword ptr [RDI],0x140309cab: MOV qword ptr [RBP + -0x59], RCX,0x140309caf: MOV RAX, qword ptr [RDI + 0x8],0x140309cb3: SUB RAX, RCX,0x140309cb6: MOV qword ptr [RBP + -0x51], RAX,0x140309cba: LEA RDX, [RBP + -0x59],0x140309cbe: LEA RCX, [RBP + 0x7],0x140309cc2: CALL 0x140307e60,0x140309cc7: NOP,0x140309cc8: CMP qword ptr [RAX + 0x18], 0xf,0x140309ccd: JBE 0x140309cd4,0x140309ccf: MOV RCX, qword ptr [RAX],0x140309cd2: JMP 0x140309cd7,0x140309cd4: MOV RCX, RAX,0x140309cd7: MOV qword ptr [RBP + -0x59], RCX,0x140309cdb: MOV RAX, qword ptr [RAX + 0x10],0x140309cdf: MOV qword ptr [RBP + -0x51], RAX,0x140309ce3: LEA RDX, [RBP + -0x59],0x140309ce7: LEA RCX, [RBP + -0x39],0x140309ceb: CALL 0x140317660,0x140309cf0: NOP,0x140309cf1: MOV RDX, qword ptr [RBP + 0x1f],0x140309cf5: CMP RDX, 0xf,0x140309cf9: JBE 0x140309d2c,0x140309cfb: INC RDX,0x140309cfe: MOV RCX, qword ptr [RBP + 0x7],0x140309d02: CMP RDX, 0x1000,0x140309d09: JC 0x140309d27,0x140309d0b: MOV RAX, qword ptr [RCX + -0x8],0x140309d0f: SUB RCX, RAX,0x140309d12: SUB RCX, 0x8,0x140309d16: CMP RCX, 0x1f,0x140309d1a: JA 0x140309e1f,0x140309d20: ADD RDX, 0x27,0x140309d24: MOV RCX, RAX,0x140309d27: CALL 0x1403272f0,0x140309d2c: LEA RAX, [0x140448f70],0x140309d33: MOV qword ptr [RBP + -0x59], RAX,0x140309d37: MOV qword ptr [RBP + -0x51], 0x9,0x140309d3f: LEA RDX, [RBP + -0x59],0x140309d43: LEA RCX, [RBP + -0x39],0x140309d47: CALL 0x140313ce0,0x140309d4c: MOV RCX, qword ptr [RDI + 0x18],0x140309d50: MOV qword ptr [RBP + -0x59], RCX,0x140309d54: MOV RAX, qword ptr [RDI + 0x20],0x140309d58: SUB RAX, RCX,0x140309d5b: MOV qword ptr [RBP + -0x51], RAX,0x140309d5f: LEA RDX, [RBP + -0x59],0x140309d63: LEA RCX, [RBP + 0x7],0x140309d67: CALL 0x140307e60,0x140309d6c: NOP,0x140309d6d: CMP qword ptr [RAX + 0x18], 0xf,0x140309d72: JBE 0x140309d79,0x140309d74: MOV RCX, qword ptr [RAX],0x140309d77: JMP 0x140309d7c,0x140309d79: MOV RCX, RAX,0x140309d7c: MOV qword ptr [RBP + -0x59], RCX,0x140309d80: MOV RAX, qword ptr [RAX + 0x10],0x140309d84: MOV qword ptr [RBP + -0x51], RAX,0x140309d88: LEA RDX, [RBP + -0x59],0x140309d8c: LEA RCX, [RBP + -0x39],0x140309d90: CALL 0x140317660,0x140309d95: NOP,0x140309d96: MOV RDX, qword ptr [RBP + 0x1f],0x140309d9a: CMP RDX, 0xf,0x140309d9e: JBE 0x140309dcd,0x140309da0: INC RDX,0x140309da3: MOV RCX, qword ptr [RBP + 0x7],0x140309da7: CMP RDX, 0x1000,0x140309dae: JC 0x140309dc8,0x140309db0: MOV RAX, qword ptr [RCX + -0x8],0x140309db4: SUB RCX, RAX,0x140309db7: SUB RCX, 0x8,0x140309dbb: CMP RCX, 0x1f,0x140309dbf: JA 0x140309e1f,0x140309dc1: ADD RDX, 0x27,0x140309dc5: MOV RCX, RAX,0x140309dc8: CALL 0x1403272f0,0x140309dcd: LEA RCX, [RBP + -0x39],0x140309dd1: CALL 0x140313910,0x140309dd6: MOV RDX, RBX,0x140309dd9: LEA RCX, [RBP + -0x39],0x140309ddd: CALL 0x1403176a0,0x140309de2: NOP,0x140309de3: MOV RCX, qword ptr [RBP + -0x19],0x140309de7: TEST RCX, RCX,0x140309dea: JZ 0x140309e3d,0x140309dec: MOV RAX, qword ptr [RBP + -0x9],0x140309df0: SUB RAX, RCX,0x140309df3: SAR RAX, 0x3,0x140309df7: LEA RDX, [RAX*0x8],0x140309dff: CMP RDX, 0x1000,0x140309e06: JC 0x140309e26,0x140309e08: MOV RAX, qword ptr [RCX + -0x8],0x140309e0c: SUB RCX, RAX,0x140309e0f: SUB RCX, 0x8,0x140309e13: CMP RCX, 0x1f,0x140309e17: JA 0x140309e8f,0x140309e19: ADD RDX, 0x27,0x140309e1d: JMP 0x140309e29,0x140309e1f: MOV ECX, 0x5,0x140309e24: INT 0x29,0x140309e26: MOV RAX, RCX,0x140309e29: MOV RCX, RAX,0x140309e2c: CALL 0x1403272f0,0x140309e31: XORPS XMM0, XMM0,0x140309e34: MOVDQA xmmword ptr [RBP + -0x19], XMM0,0x140309e39: MOV qword ptr [RBP + -0x9], RSI,0x140309e3d: MOV RDX, qword ptr [RBP + -0x21],0x140309e41: CMP RDX, 0xf,0x140309e45: JBE 0x140309e74,0x140309e47: INC RDX,0x140309e4a: MOV RCX, qword ptr [RBP + -0x39],0x140309e4e: CMP RDX, 0x1000,0x140309e55: JC 0x140309e6f,0x140309e57: MOV RAX, qword ptr [RCX + -0x8],0x140309e5b: SUB RCX, RAX,0x140309e5e: SUB RCX, 0x8,0x140309e62: CMP RCX, 0x1f,0x140309e66: JA 0x140309e8f,0x140309e68: ADD RDX, 0x27,0x140309e6c: MOV RCX, RAX,0x140309e6f: CALL 0x1403272f0,0x140309e74: MOV RAX, RBX,0x140309e77: MOV RCX, qword ptr [RBP + 0x27],0x140309e7b: XOR RCX, RSP,0x140309e7e: CALL 0x140327740,0x140309e83: ADD RSP, 0xb8,0x140309e8a: POP RDI,0x140309e8b: POP RSI,0x140309e8c: POP RBX,0x140309e8d: POP RBP,0x140309e8e: RET,0x140309e8f: MOV ECX, 0x5,0x140309e94: INT 0x29,0x140309e96: INT3

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f6e90 | FUN_1401f6e90 | [object Object] | [object Object] |
| 0x14030bba0 | FUN_14030bba0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140307e60 | FUN_140307e60           | [object Object] | [object Object] |
| 0x140313770 | FUN_140313770           | [object Object] | [object Object] |
| 0x140313910 | FUN_140313910           | [object Object] | [object Object] |
| 0x140313ce0 | FUN_140313ce0           | [object Object] | [object Object] |
| 0x140317660 | FUN_140317660           | [object Object] | [object Object] |
| 0x1403176a0 | FUN_1403176a0           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f6ec9    | 0x140309c30    | [object Object]  | [object Object]  | [object Object] |
| 0x14030bbd8    | 0x140309c30    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6dc4    | 0x140309c30    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x140309c35    | stack:0xffffffffffffffa1 | [object Object]  |                  | [object Object] |
| 0x140309c41    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x140309c4b    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x140309c55    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309c5e    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309c62    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x140309c66    | stack:0xffffffffffffff80 | [object Object]  |                  | [object Object] |
| 0x140309c6e    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309c72    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x140309c77    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140309c7b    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140309c7f    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309c83    | 0x140313770              | [object Object]  | [object Object]  | [object Object] |
| 0x140309c88    | 0x140448f68              | [object Object]  |                  | [object Object] |
| 0x140309c8f    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309c8f    | 0x140448f68              | [object Object]  |                  | [object Object] |
| 0x140309c93    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309c9b    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309c9f    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309ca3    | 0x140313ce0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309cab    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309cb6    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309cba    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309cbe    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140309cc2    | 0x140307e60              | [object Object]  | [object Object]  | [object Object] |
| 0x140309ccd    | 0x140309cd4              | [object Object]  | [object Object]  | [object Object] |
| 0x140309cd2    | 0x140309cd7              | [object Object]  | [object Object]  | [object Object] |
| 0x140309cd7    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309cdf    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309ce3    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309ce7    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309ceb    | 0x140317660              | [object Object]  | [object Object]  | [object Object] |
| 0x140309cf1    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x140309cf9    | 0x140309d2c              | [object Object]  | [object Object]  | [object Object] |
| 0x140309cfe    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140309d09    | 0x140309d27              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d1a    | 0x140309e1f              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d27    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d2c    | 0x140448f70              | [object Object]  |                  | [object Object] |
| 0x140309d33    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d33    | 0x140448f70              | [object Object]  |                  | [object Object] |
| 0x140309d37    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309d3f    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d43    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309d47    | 0x140313ce0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d50    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d5b    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309d5f    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d63    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140309d67    | 0x140307e60              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d72    | 0x140309d79              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d77    | 0x140309d7c              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d7c    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d84    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309d88    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d8c    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309d90    | 0x140317660              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d96    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x140309d9e    | 0x140309dcd              | [object Object]  | [object Object]  | [object Object] |
| 0x140309da3    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140309dae    | 0x140309dc8              | [object Object]  | [object Object]  | [object Object] |
| 0x140309dbf    | 0x140309e1f              | [object Object]  | [object Object]  | [object Object] |
| 0x140309dc8    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309dcd    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309dd1    | 0x140313910              | [object Object]  | [object Object]  | [object Object] |
| 0x140309dd9    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309ddd    | 0x1403176a0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309de3    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x140309dea    | 0x140309e3d              | [object Object]  | [object Object]  | [object Object] |
| 0x140309dec    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140309e06    | 0x140309e26              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e17    | 0x140309e8f              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e1d    | 0x140309e29              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e2c    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e34    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x140309e39    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140309e3d    | stack:0xffffffffffffff80 | [object Object]  |                  | [object Object] |
| 0x140309e45    | 0x140309e74              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e4a    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309e55    | 0x140309e6f              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e66    | 0x140309e8f              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e6f    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e77    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x140309e7e    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings

| address     | value     | source_address |
|-------------|-----------|----------------|
| 0x140448f68 | payload   | 0x140309c88    |
| 0x140448f68 | payload   | 0x140309c8f    |
| 0x140448f70 | signature | 0x140309d2c    |
| 0x140448f70 | signature | 0x140309d33    |

## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140307e60 | FUN_140307e60           | 0x140309cc2    |
| 0x140307e60 | FUN_140307e60           | 0x140309d67    |
| 0x140309cd4 | LAB_140309cd4           | 0x140309ccd    |
| 0x140309cd7 | LAB_140309cd7           | 0x140309cd2    |
| 0x140309d27 | LAB_140309d27           | 0x140309d09    |
| 0x140309d2c | LAB_140309d2c           | 0x140309cf9    |
| 0x140309d79 | LAB_140309d79           | 0x140309d72    |
| 0x140309d7c | LAB_140309d7c           | 0x140309d77    |
| 0x140309dc8 | LAB_140309dc8           | 0x140309dae    |
| 0x140309dcd | LAB_140309dcd           | 0x140309d9e    |
| 0x140309e1f | LAB_140309e1f           | 0x140309d1a    |
| 0x140309e1f | LAB_140309e1f           | 0x140309dbf    |
| 0x140309e26 | LAB_140309e26           | 0x140309e06    |
| 0x140309e29 | LAB_140309e29           | 0x140309e1d    |
| 0x140309e3d | LAB_140309e3d           | 0x140309dea    |
| 0x140309e6f | LAB_140309e6f           | 0x140309e55    |
| 0x140309e74 | LAB_140309e74           | 0x140309e45    |
| 0x140309e8f | LAB_140309e8f           | 0x140309e17    |
| 0x140309e8f | LAB_140309e8f           | 0x140309e66    |
| 0x140313770 | FUN_140313770           | 0x140309c83    |
| 0x140313910 | FUN_140313910           | 0x140309dd1    |
| 0x140313ce0 | FUN_140313ce0           | 0x140309ca3    |
| 0x140313ce0 | FUN_140313ce0           | 0x140309d47    |
| 0x140317660 | FUN_140317660           | 0x140309ceb    |
| 0x140317660 | FUN_140317660           | 0x140309d90    |
| 0x1403176a0 | FUN_1403176a0           | 0x140309ddd    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x140309d27    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x140309dc8    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x140309e2c    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x140309e6f    |
| 0x140327740 | __security_check_cookie | 0x140309e7e    |
| 0x140448f68 | s_payload_140448f68     | 0x140309c88    |
| 0x140448f68 | s_payload_140448f68     | 0x140309c8f    |
| 0x140448f70 | s_signature_140448f70   | 0x140309d2c    |
| 0x140448f70 | s_signature_140448f70   | 0x140309d33    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x140309c41    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140309c30 | 0x140309ccf | 0x140309ccf,0x140309cd4 |
| 0x140309ccf | 0x140309cd4 | 0x140309cd7             |
| 0x140309cd4 | 0x140309cd7 | 0x140309cd7             |
| 0x140309cd7 | 0x140309cfb | 0x140309cfb,0x140309d2c |
| 0x140309cfb | 0x140309d0b | 0x140309d0b,0x140309d27 |
| 0x140309d0b | 0x140309d20 | 0x140309d20,0x140309e1f |
| 0x140309d20 | 0x140309d27 | 0x140309d27             |
| 0x140309d27 | 0x140309d2c | 0x140309d2c             |
| 0x140309d2c | 0x140309d74 | 0x140309d74,0x140309d79 |
| 0x140309d74 | 0x140309d79 | 0x140309d7c             |
| 0x140309d79 | 0x140309d7c | 0x140309d7c             |
| 0x140309d7c | 0x140309da0 | 0x140309da0,0x140309dcd |
| 0x140309da0 | 0x140309db0 | 0x140309db0,0x140309dc8 |
| 0x140309db0 | 0x140309dc1 | 0x140309dc1,0x140309e1f |
| 0x140309dc1 | 0x140309dc8 | 0x140309dc8             |
| 0x140309dc8 | 0x140309dcd | 0x140309dcd             |
| 0x140309dcd | 0x140309dec | 0x140309dec,0x140309e3d |
| 0x140309dec | 0x140309e08 | 0x140309e08,0x140309e26 |
| 0x140309e08 | 0x140309e19 | 0x140309e19,0x140309e8f |
| 0x140309e19 | 0x140309e1f | 0x140309e29             |
| 0x140309e1f | 0x140309e26 | 0x140309e26             |
| 0x140309e26 | 0x140309e29 | 0x140309e29             |
| 0x140309e29 | 0x140309e3d | 0x140309e3d             |
| 0x140309e3d | 0x140309e47 | 0x140309e47,0x140309e74 |
| 0x140309e47 | 0x140309e57 | 0x140309e57,0x140309e6f |
| 0x140309e57 | 0x140309e68 | 0x140309e68,0x140309e8f |
| 0x140309e68 | 0x140309e6f | 0x140309e6f             |
| 0x140309e6f | 0x140309e74 | 0x140309e74             |
| 0x140309e74 | 0x140309e8f |                         |
| 0x140309e8f | 0x140309e97 |                         |

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

char *

## raw_result.value.native_api.return_type.size_bytes

8

## raw_result.value.native_api.return_type.storage

RAX:8

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                   |
|------------------|-------------------------|------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.    |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type char *. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters

| role      | ordinal | name    | data_type  | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | char *     | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | longlong * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|-------------------------------------------------|-----------------|
| 0x140309c3a#1944 | 0x140309c3a | 1944     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c3a#1945 | 0x140309c3a | 1945     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c3a#1946 | 0x140309c3a | 1946     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c3a#1947 | 0x140309c3a | 1947     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c48#26   | 0x140309c48 | 26       | INT_XOR      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c48#1986 | 0x140309c48 | 1986     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c5e#1404 | 0x140309c5e | 1404     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c62#60   | 0x140309c62 | 60       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c66#63   | 0x140309c66 | 63       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c6e#1527 | 0x140309c6e | 1527     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c72#1408 | 0x140309c72 | 1408     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c72#1409 | 0x140309c72 | 1409     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c77#72   | 0x140309c77 | 72       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c7b#75   | 0x140309c7b | 75       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c7f#1948 | 0x140309c7f | 1948     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#80   | 0x140309c83 | 80       | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309c83#1416 | 0x140309c83 | 1416     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1472 | 0x140309c83 | 1472     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1528 | 0x140309c83 | 1528     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1555 | 0x140309c83 | 1555     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1582 | 0x140309c83 | 1582     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1609 | 0x140309c83 | 1609     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1636 | 0x140309c83 | 1636     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1663 | 0x140309c83 | 1663     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1690 | 0x140309c83 | 1690     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1717 | 0x140309c83 | 1717     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1744 | 0x140309c83 | 1744     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1771 | 0x140309c83 | 1771     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1798 | 0x140309c83 | 1798     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1985 | 0x140309c83 | 1985     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c8f#84   | 0x140309c8f | 84       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c93#87   | 0x140309c93 | 87       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c9b#1949 | 0x140309c9b | 1949     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c9f#1950 | 0x140309c9f | 1950     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#94   | 0x140309ca3 | 94       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309ca3#1417 | 0x140309ca3 | 1417     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1473 | 0x140309ca3 | 1473     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1500 | 0x140309ca3 | 1500     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1529 | 0x140309ca3 | 1529     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1556 | 0x140309ca3 | 1556     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1583 | 0x140309ca3 | 1583     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1610 | 0x140309ca3 | 1610     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1637 | 0x140309ca3 | 1637     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1664 | 0x140309ca3 | 1664     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1691 | 0x140309ca3 | 1691     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1718 | 0x140309ca3 | 1718     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1745 | 0x140309ca3 | 1745     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1772 | 0x140309ca3 | 1772     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1799 | 0x140309ca3 | 1799     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca8#95   | 0x140309ca8 | 95       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca8#1987 | 0x140309ca8 | 1987     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309caf#101  | 0x140309caf | 101      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309caf#1951 | 0x140309caf | 1951     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309cb3#105  | 0x140309cb3 | 105      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cb3#1988 | 0x140309cb3 | 1988     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309cba#1952 | 0x140309cba | 1952     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cbe#1953 | 0x140309cbe | 1953     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#121  | 0x140309cc2 | 121      | CALL         | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309cc2#1418 | 0x140309cc2 | 1418     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1474 | 0x140309cc2 | 1474     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1501 | 0x140309cc2 | 1501     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1530 | 0x140309cc2 | 1530     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1557 | 0x140309cc2 | 1557     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1584 | 0x140309cc2 | 1584     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1611 | 0x140309cc2 | 1611     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1638 | 0x140309cc2 | 1638     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1665 | 0x140309cc2 | 1665     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1692 | 0x140309cc2 | 1692     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1719 | 0x140309cc2 | 1719     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1746 | 0x140309cc2 | 1746     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1773 | 0x140309cc2 | 1773     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1800 | 0x140309cc2 | 1800     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1989 | 0x140309cc2 | 1989     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309cc8#123  | 0x140309cc8 | 123      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc8#1954 | 0x140309cc8 | 1954     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309cc8#1990 | 0x140309cc8 | 1990     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309ccd#134  | 0x140309ccd | 134      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ccd#135  | 0x140309ccd | 135      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309ccd#1982 | 0x140309ccd | 1982     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309ccf#136  | 0x140309ccf | 136      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ccf#1991 | 0x140309ccf | 1991     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309cd2#138  | 0x140309cd2 | 138      | BRANCH       | true    | member           | [object Object]                                 |                 |
| 0x140309cd2#1981 | 0x140309cd2 | 1981     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309cd7#1051 | 0x140309cd7 | 1051     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cdb#143  | 0x140309cdb | 143      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cdb#1955 | 0x140309cdb | 1955     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309cdb#1992 | 0x140309cdb | 1992     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309ce3#1956 | 0x140309ce3 | 1956     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ce7#1957 | 0x140309ce7 | 1957     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#154  | 0x140309ceb | 154      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309ceb#1419 | 0x140309ceb | 1419     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1475 | 0x140309ceb | 1475     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1502 | 0x140309ceb | 1502     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1531 | 0x140309ceb | 1531     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1558 | 0x140309ceb | 1558     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1585 | 0x140309ceb | 1585     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1612 | 0x140309ceb | 1612     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1639 | 0x140309ceb | 1639     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1666 | 0x140309ceb | 1666     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1693 | 0x140309ceb | 1693     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1720 | 0x140309ceb | 1720     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1747 | 0x140309ceb | 1747     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1774 | 0x140309ceb | 1774     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1801 | 0x140309ceb | 1801     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cf9#168  | 0x140309cf9 | 168      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cf9#169  | 0x140309cf9 | 169      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309cfb#171  | 0x140309cfb | 171      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d02#182  | 0x140309d02 | 182      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d09#191  | 0x140309d09 | 191      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309d09#1978 | 0x140309d09 | 1978     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d0b#192  | 0x140309d0b | 192      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d0b#193  | 0x140309d0b | 193      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d0b#1993 | 0x140309d0b | 1993     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d0f#197  | 0x140309d0f | 197      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d12#206  | 0x140309d12 | 206      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d1a#223  | 0x140309d1a | 223      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d1a#225  | 0x140309d1a | 225      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309d20#228  | 0x140309d20 | 228      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#238  | 0x140309d27 | 238      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309d27#1048 | 0x140309d27 | 1048     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1077 | 0x140309d27 | 1077     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1420 | 0x140309d27 | 1420     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1476 | 0x140309d27 | 1476     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1503 | 0x140309d27 | 1503     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1532 | 0x140309d27 | 1532     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1559 | 0x140309d27 | 1559     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1586 | 0x140309d27 | 1586     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1613 | 0x140309d27 | 1613     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1640 | 0x140309d27 | 1640     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1667 | 0x140309d27 | 1667     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1694 | 0x140309d27 | 1694     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1721 | 0x140309d27 | 1721     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1748 | 0x140309d27 | 1748     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1775 | 0x140309d27 | 1775     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1802 | 0x140309d27 | 1802     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1444 | 0x140309d2c | 1444     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1554 | 0x140309d2c | 1554     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1581 | 0x140309d2c | 1581     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1608 | 0x140309d2c | 1608     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1635 | 0x140309d2c | 1635     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1662 | 0x140309d2c | 1662     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1689 | 0x140309d2c | 1689     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1716 | 0x140309d2c | 1716     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1743 | 0x140309d2c | 1743     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1770 | 0x140309d2c | 1770     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1797 | 0x140309d2c | 1797     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1824 | 0x140309d2c | 1824     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d33#242  | 0x140309d33 | 242      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d37#245  | 0x140309d37 | 245      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d3f#1958 | 0x140309d3f | 1958     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d43#1959 | 0x140309d43 | 1959     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#252  | 0x140309d47 | 252      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309d47#1421 | 0x140309d47 | 1421     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1477 | 0x140309d47 | 1477     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1504 | 0x140309d47 | 1504     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1533 | 0x140309d47 | 1533     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1560 | 0x140309d47 | 1560     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1587 | 0x140309d47 | 1587     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1614 | 0x140309d47 | 1614     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1641 | 0x140309d47 | 1641     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1668 | 0x140309d47 | 1668     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1695 | 0x140309d47 | 1695     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1722 | 0x140309d47 | 1722     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1749 | 0x140309d47 | 1749     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1776 | 0x140309d47 | 1776     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1803 | 0x140309d47 | 1803     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d4c#254  | 0x140309d4c | 254      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d4c#1960 | 0x140309d4c | 1960     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309d4c#1994 | 0x140309d4c | 1994     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d54#260  | 0x140309d54 | 260      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d54#1961 | 0x140309d54 | 1961     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309d58#264  | 0x140309d58 | 264      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d58#1995 | 0x140309d58 | 1995     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d5f#1962 | 0x140309d5f | 1962     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d63#1963 | 0x140309d63 | 1963     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#280  | 0x140309d67 | 280      | CALL         | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309d67#1422 | 0x140309d67 | 1422     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1478 | 0x140309d67 | 1478     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1505 | 0x140309d67 | 1505     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1534 | 0x140309d67 | 1534     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1561 | 0x140309d67 | 1561     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1588 | 0x140309d67 | 1588     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1615 | 0x140309d67 | 1615     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1642 | 0x140309d67 | 1642     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1669 | 0x140309d67 | 1669     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1696 | 0x140309d67 | 1696     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1723 | 0x140309d67 | 1723     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1750 | 0x140309d67 | 1750     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1777 | 0x140309d67 | 1777     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1804 | 0x140309d67 | 1804     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1996 | 0x140309d67 | 1996     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d6d#282  | 0x140309d6d | 282      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d6d#1964 | 0x140309d6d | 1964     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309d6d#1997 | 0x140309d6d | 1997     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d72#293  | 0x140309d72 | 293      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d72#294  | 0x140309d72 | 294      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309d72#1980 | 0x140309d72 | 1980     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d74#295  | 0x140309d74 | 295      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d74#1998 | 0x140309d74 | 1998     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d77#297  | 0x140309d77 | 297      | BRANCH       | true    | member           | [object Object]                                 |                 |
| 0x140309d77#1979 | 0x140309d77 | 1979     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d7c#1050 | 0x140309d7c | 1050     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d80#302  | 0x140309d80 | 302      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d80#1965 | 0x140309d80 | 1965     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309d80#1999 | 0x140309d80 | 1999     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d88#1966 | 0x140309d88 | 1966     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d8c#1967 | 0x140309d8c | 1967     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#313  | 0x140309d90 | 313      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309d90#1423 | 0x140309d90 | 1423     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1479 | 0x140309d90 | 1479     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1506 | 0x140309d90 | 1506     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1535 | 0x140309d90 | 1535     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1562 | 0x140309d90 | 1562     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1589 | 0x140309d90 | 1589     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1616 | 0x140309d90 | 1616     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1643 | 0x140309d90 | 1643     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1670 | 0x140309d90 | 1670     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1697 | 0x140309d90 | 1697     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1724 | 0x140309d90 | 1724     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1751 | 0x140309d90 | 1751     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1778 | 0x140309d90 | 1778     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1805 | 0x140309d90 | 1805     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d9e#327  | 0x140309d9e | 327      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d9e#328  | 0x140309d9e | 328      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309da0#330  | 0x140309da0 | 330      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309da7#341  | 0x140309da7 | 341      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dae#350  | 0x140309dae | 350      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309dae#1976 | 0x140309dae | 1976     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309db0#351  | 0x140309db0 | 351      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309db0#352  | 0x140309db0 | 352      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309db0#2000 | 0x140309db0 | 2000     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309db4#356  | 0x140309db4 | 356      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309db7#365  | 0x140309db7 | 365      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dbf#382  | 0x140309dbf | 382      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dbf#384  | 0x140309dbf | 384      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309dc1#387  | 0x140309dc1 | 387      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#397  | 0x140309dc8 | 397      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309dc8#1041 | 0x140309dc8 | 1041     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1069 | 0x140309dc8 | 1069     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1425 | 0x140309dc8 | 1425     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1481 | 0x140309dc8 | 1481     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1508 | 0x140309dc8 | 1508     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1537 | 0x140309dc8 | 1537     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1564 | 0x140309dc8 | 1564     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1591 | 0x140309dc8 | 1591     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1618 | 0x140309dc8 | 1618     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1645 | 0x140309dc8 | 1645     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1672 | 0x140309dc8 | 1672     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1699 | 0x140309dc8 | 1699     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1726 | 0x140309dc8 | 1726     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1807 | 0x140309dc8 | 1807     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1437 | 0x140309dcd | 1437     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1491 | 0x140309dcd | 1491     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1518 | 0x140309dcd | 1518     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1547 | 0x140309dcd | 1547     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1574 | 0x140309dcd | 1574     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1601 | 0x140309dcd | 1601     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1628 | 0x140309dcd | 1628     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1655 | 0x140309dcd | 1655     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1682 | 0x140309dcd | 1682     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1709 | 0x140309dcd | 1709     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1736 | 0x140309dcd | 1736     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1817 | 0x140309dcd | 1817     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1968 | 0x140309dcd | 1968     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#402  | 0x140309dd1 | 402      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309dd1#1426 | 0x140309dd1 | 1426     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1482 | 0x140309dd1 | 1482     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1509 | 0x140309dd1 | 1509     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1538 | 0x140309dd1 | 1538     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1565 | 0x140309dd1 | 1565     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1592 | 0x140309dd1 | 1592     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1619 | 0x140309dd1 | 1619     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1646 | 0x140309dd1 | 1646     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1673 | 0x140309dd1 | 1673     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1700 | 0x140309dd1 | 1700     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1727 | 0x140309dd1 | 1727     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1808 | 0x140309dd1 | 1808     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd9#1969 | 0x140309dd9 | 1969     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#408  | 0x140309ddd | 408      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309ddd#1427 | 0x140309ddd | 1427     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1483 | 0x140309ddd | 1483     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1510 | 0x140309ddd | 1510     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1539 | 0x140309ddd | 1539     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1566 | 0x140309ddd | 1566     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1593 | 0x140309ddd | 1593     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1620 | 0x140309ddd | 1620     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1647 | 0x140309ddd | 1647     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1674 | 0x140309ddd | 1674     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1701 | 0x140309ddd | 1701     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1728 | 0x140309ddd | 1728     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1809 | 0x140309ddd | 1809     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309de7#416  | 0x140309de7 | 416      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dea#421  | 0x140309dea | 421      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309df0#427  | 0x140309df0 | 427      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309df3#436  | 0x140309df3 | 436      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309df7#474  | 0x140309df7 | 474      | INT_MULT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dff#477  | 0x140309dff | 477      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dff#2001 | 0x140309dff | 2001     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e06#486  | 0x140309e06 | 486      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e06#1975 | 0x140309e06 | 1975     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e06#1984 | 0x140309e06 | 1984     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e08#487  | 0x140309e08 | 487      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e08#488  | 0x140309e08 | 488      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e08#2002 | 0x140309e08 | 2002     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e0c#492  | 0x140309e0c | 492      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e0f#501  | 0x140309e0f | 501      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e17#518  | 0x140309e17 | 518      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e17#520  | 0x140309e17 | 520      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e17#1974 | 0x140309e17 | 1974     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e17#1983 | 0x140309e17 | 1983     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e1f#680  | 0x140309e1f | 680      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e1f#1443 | 0x140309e1f | 1443     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1498 | 0x140309e1f | 1498     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1525 | 0x140309e1f | 1525     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1553 | 0x140309e1f | 1553     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1580 | 0x140309e1f | 1580     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1607 | 0x140309e1f | 1607     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1634 | 0x140309e1f | 1634     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1661 | 0x140309e1f | 1661     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1688 | 0x140309e1f | 1688     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1715 | 0x140309e1f | 1715     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1742 | 0x140309e1f | 1742     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1823 | 0x140309e1f | 1823     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#681  | 0x140309e24 | 681      | CALLOTHER    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#682  | 0x140309e24 | 682      | CALLIND      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e24#1031 | 0x140309e24 | 1031     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1424 | 0x140309e24 | 1424     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1480 | 0x140309e24 | 1480     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1507 | 0x140309e24 | 1507     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1536 | 0x140309e24 | 1536     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1563 | 0x140309e24 | 1563     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1590 | 0x140309e24 | 1590     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1617 | 0x140309e24 | 1617     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1644 | 0x140309e24 | 1644     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1671 | 0x140309e24 | 1671     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1698 | 0x140309e24 | 1698     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1725 | 0x140309e24 | 1725     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1806 | 0x140309e24 | 1806     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1970 | 0x140309e24 | 1970     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#2003 | 0x140309e24 | 2003     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e29#1013 | 0x140309e29 | 1013     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1084 | 0x140309e29 | 1084     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1442 | 0x140309e29 | 1442     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1496 | 0x140309e29 | 1496     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1523 | 0x140309e29 | 1523     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1552 | 0x140309e29 | 1552     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1579 | 0x140309e29 | 1579     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1606 | 0x140309e29 | 1606     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1633 | 0x140309e29 | 1633     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1660 | 0x140309e29 | 1660     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1687 | 0x140309e29 | 1687     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1714 | 0x140309e29 | 1714     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1741 | 0x140309e29 | 1741     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1822 | 0x140309e29 | 1822     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e2c#532  | 0x140309e2c | 532      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e2c#533  | 0x140309e2c | 533      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309e2c#534  | 0x140309e2c | 534      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e2c#1428 | 0x140309e2c | 1428     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1484 | 0x140309e2c | 1484     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1511 | 0x140309e2c | 1511     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1540 | 0x140309e2c | 1540     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1567 | 0x140309e2c | 1567     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1594 | 0x140309e2c | 1594     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1621 | 0x140309e2c | 1621     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1648 | 0x140309e2c | 1648     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1675 | 0x140309e2c | 1675     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1702 | 0x140309e2c | 1702     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1729 | 0x140309e2c | 1729     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1810 | 0x140309e2c | 1810     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#2004 | 0x140309e2c | 2004     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e34#1413 | 0x140309e34 | 1413     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e34#1414 | 0x140309e34 | 1414     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e39#544  | 0x140309e39 | 544      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e3d#1081 | 0x140309e3d | 1081     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1439 | 0x140309e3d | 1439     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1493 | 0x140309e3d | 1493     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1520 | 0x140309e3d | 1520     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1549 | 0x140309e3d | 1549     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1576 | 0x140309e3d | 1576     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1603 | 0x140309e3d | 1603     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1630 | 0x140309e3d | 1630     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1657 | 0x140309e3d | 1657     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1684 | 0x140309e3d | 1684     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1711 | 0x140309e3d | 1711     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1738 | 0x140309e3d | 1738     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1819 | 0x140309e3d | 1819     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e45#558  | 0x140309e45 | 558      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e45#559  | 0x140309e45 | 559      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e45#2005 | 0x140309e45 | 2005     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e47#561  | 0x140309e47 | 561      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e4e#572  | 0x140309e4e | 572      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e55#581  | 0x140309e55 | 581      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e55#1977 | 0x140309e55 | 1977     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e57#582  | 0x140309e57 | 582      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e57#583  | 0x140309e57 | 583      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e57#2006 | 0x140309e57 | 2006     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e5b#587  | 0x140309e5b | 587      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e5e#596  | 0x140309e5e | 596      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e66#613  | 0x140309e66 | 613      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e66#615  | 0x140309e66 | 615      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e68#618  | 0x140309e68 | 618      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#626  | 0x140309e6f | 626      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e6f#627  | 0x140309e6f | 627      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309e6f#628  | 0x140309e6f | 628      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309e6f#1043 | 0x140309e6f | 1043     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1071 | 0x140309e6f | 1071     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1431 | 0x140309e6f | 1431     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1487 | 0x140309e6f | 1487     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1514 | 0x140309e6f | 1514     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1543 | 0x140309e6f | 1543     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1570 | 0x140309e6f | 1570     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1597 | 0x140309e6f | 1597     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1624 | 0x140309e6f | 1624     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1651 | 0x140309e6f | 1651     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1678 | 0x140309e6f | 1678     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1705 | 0x140309e6f | 1705     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1732 | 0x140309e6f | 1732     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1813 | 0x140309e6f | 1813     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#2010 | 0x140309e6f | 2010     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e74#629  | 0x140309e74 | 629      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e74#1438 | 0x140309e74 | 1438     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e7e#642  | 0x140309e7e | 642      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e7e#643  | 0x140309e7e | 643      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309e7e#2011 | 0x140309e7e | 2011     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e8e#672  | 0x140309e8e | 672      | RETURN       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e8e#1432 | 0x140309e8e | 1432     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e8f#1441 | 0x140309e8f | 1441     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1495 | 0x140309e8f | 1495     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1522 | 0x140309e8f | 1522     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1551 | 0x140309e8f | 1551     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1578 | 0x140309e8f | 1578     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1605 | 0x140309e8f | 1605     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1632 | 0x140309e8f | 1632     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1659 | 0x140309e8f | 1659     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1686 | 0x140309e8f | 1686     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1713 | 0x140309e8f | 1713     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1740 | 0x140309e8f | 1740     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1821 | 0x140309e8f | 1821     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#674  | 0x140309e94 | 674      | CALLOTHER    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#675  | 0x140309e94 | 675      | CALLIND      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e94#1429 | 0x140309e94 | 1429     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1485 | 0x140309e94 | 1485     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1512 | 0x140309e94 | 1512     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1541 | 0x140309e94 | 1541     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1568 | 0x140309e94 | 1568     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1595 | 0x140309e94 | 1595     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1622 | 0x140309e94 | 1622     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1649 | 0x140309e94 | 1649     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1676 | 0x140309e94 | 1676     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1703 | 0x140309e94 | 1703     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1730 | 0x140309e94 | 1730     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1811 | 0x140309e94 | 1811     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#2007 | 0x140309e94 | 2007     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e96#676  | 0x140309e96 | 676      | CALLOTHER    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#677  | 0x140309e96 | 677      | CALLIND      | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e96#678  | 0x140309e96 | 678      | RETURN       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e96#1430 | 0x140309e96 | 1430     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1433 | 0x140309e96 | 1433     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e96#1486 | 0x140309e96 | 1486     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1513 | 0x140309e96 | 1513     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1542 | 0x140309e96 | 1542     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1569 | 0x140309e96 | 1569     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1596 | 0x140309e96 | 1596     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1623 | 0x140309e96 | 1623     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1650 | 0x140309e96 | 1650     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1677 | 0x140309e96 | 1677     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1704 | 0x140309e96 | 1704     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1731 | 0x140309e96 | 1731     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1812 | 0x140309e96 | 1812     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#2008 | 0x140309e96 | 2008     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e96#2009 | 0x140309e96 | 2009     | CAST         | true    | member           | [object Object]                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x140309c48#1986 | 0x140309c48#26   | 1           |
| 0x140309c3a#1944 | 0x140309c48#1986 | 0           |
| 0x140309c7f#1948 | 0x140309c83#80   | 1           |
| 0x140309c83#1985 | 0x140309c83#1472 | 0           |
| 0x140309c6e#1527 | 0x140309c83#1528 | 0           |
| 0x140309c5e#1404 | 0x140309c83#1555 | 0           |
| 0x140309c62#60   | 0x140309c83#1582 | 0           |
| 0x140309c66#63   | 0x140309c83#1609 | 0           |
| 0x140309c72#1408 | 0x140309c83#1636 | 0           |
| 0x140309c72#1409 | 0x140309c83#1663 | 0           |
| 0x140309c77#72   | 0x140309c83#1690 | 0           |
| 0x140309c7b#75   | 0x140309c83#1717 | 0           |
| 0x140309c48#26   | 0x140309c83#1798 | 0           |
| 0x140309c9f#1950 | 0x140309ca3#94   | 1           |
| 0x140309c9b#1949 | 0x140309ca3#94   | 2           |
| 0x140309c83#1416 | 0x140309ca3#1417 | 0           |
| 0x140309c8f#84   | 0x140309ca3#1473 | 0           |
| 0x140309c93#87   | 0x140309ca3#1500 | 0           |
| 0x140309c83#1528 | 0x140309ca3#1529 | 0           |
| 0x140309c83#1555 | 0x140309ca3#1556 | 0           |
| 0x140309c83#1582 | 0x140309ca3#1583 | 0           |
| 0x140309c83#1609 | 0x140309ca3#1610 | 0           |
| 0x140309c83#1636 | 0x140309ca3#1637 | 0           |
| 0x140309c83#1663 | 0x140309ca3#1664 | 0           |
| 0x140309c83#1690 | 0x140309ca3#1691 | 0           |
| 0x140309c83#1717 | 0x140309ca3#1718 | 0           |
| 0x140309c83#1744 | 0x140309ca3#1745 | 0           |
| 0x140309c83#1771 | 0x140309ca3#1772 | 0           |
| 0x140309c83#1798 | 0x140309ca3#1799 | 0           |
| 0x140309ca8#95   | 0x140309ca8#1987 | 0           |
| 0x140309caf#1951 | 0x140309caf#101  | 1           |
| 0x140309caf#101  | 0x140309cb3#105  | 0           |
| 0x140309cb3#1988 | 0x140309cb3#105  | 1           |
| 0x140309ca8#1987 | 0x140309cb3#1988 | 0           |
| 0x140309cbe#1953 | 0x140309cc2#121  | 1           |
| 0x140309cba#1952 | 0x140309cc2#121  | 2           |
| 0x140309ca3#1417 | 0x140309cc2#1418 | 0           |
| 0x140309ca8#1987 | 0x140309cc2#1474 | 0           |
| 0x140309cb3#105  | 0x140309cc2#1501 | 0           |
| 0x140309ca3#1529 | 0x140309cc2#1530 | 0           |
| 0x140309ca3#1556 | 0x140309cc2#1557 | 0           |
| 0x140309ca3#1583 | 0x140309cc2#1584 | 0           |
| 0x140309ca3#1610 | 0x140309cc2#1611 | 0           |
| 0x140309ca3#1637 | 0x140309cc2#1638 | 0           |
| 0x140309ca3#1664 | 0x140309cc2#1665 | 0           |
| 0x140309ca3#1691 | 0x140309cc2#1692 | 0           |
| 0x140309ca3#1718 | 0x140309cc2#1719 | 0           |
| 0x140309ca3#1745 | 0x140309cc2#1746 | 0           |
| 0x140309ca3#1772 | 0x140309cc2#1773 | 0           |
| 0x140309ca3#1799 | 0x140309cc2#1800 | 0           |
| 0x140309cc2#121  | 0x140309cc2#1989 | 0           |
| 0x140309cc8#1990 | 0x140309cc8#123  | 1           |
| 0x140309cc2#1989 | 0x140309cc8#1954 | 0           |
| 0x140309cc8#1954 | 0x140309cc8#1990 | 0           |
| 0x140309cc8#123  | 0x140309ccd#134  | 1           |
| 0x140309ccd#134  | 0x140309ccd#135  | 1           |
| 0x140309cc2#1989 | 0x140309ccd#1982 | 0           |
| 0x140309ccf#1991 | 0x140309ccf#136  | 1           |
| 0x140309cc2#1989 | 0x140309ccf#1991 | 0           |
| 0x140309ccf#136  | 0x140309cd2#1981 | 0           |
| 0x140309cd2#1981 | 0x140309cd7#1051 | 0           |
| 0x140309ccd#1982 | 0x140309cd7#1051 | 1           |
| 0x140309cdb#1992 | 0x140309cdb#143  | 1           |
| 0x140309cc2#1989 | 0x140309cdb#1955 | 0           |
| 0x140309cdb#1955 | 0x140309cdb#1992 | 0           |
| 0x140309ce7#1957 | 0x140309ceb#154  | 1           |
| 0x140309ce3#1956 | 0x140309ceb#154  | 2           |
| 0x140309cc2#1418 | 0x140309ceb#1419 | 0           |
| 0x140309cd7#1051 | 0x140309ceb#1475 | 0           |
| 0x140309cdb#143  | 0x140309ceb#1502 | 0           |
| 0x140309cc2#1530 | 0x140309ceb#1531 | 0           |
| 0x140309cc2#1557 | 0x140309ceb#1558 | 0           |
| 0x140309cc2#1584 | 0x140309ceb#1585 | 0           |
| 0x140309cc2#1611 | 0x140309ceb#1612 | 0           |
| 0x140309cc2#1638 | 0x140309ceb#1639 | 0           |
| 0x140309cc2#1665 | 0x140309ceb#1666 | 0           |
| 0x140309cc2#1692 | 0x140309ceb#1693 | 0           |
| 0x140309cc2#1719 | 0x140309ceb#1720 | 0           |
| 0x140309cc2#1746 | 0x140309ceb#1747 | 0           |
| 0x140309cc2#1773 | 0x140309ceb#1774 | 0           |
| 0x140309cc2#1800 | 0x140309ceb#1801 | 0           |
| 0x140309ceb#1774 | 0x140309cf9#168  | 0           |
| 0x140309cf9#168  | 0x140309cf9#169  | 1           |
| 0x140309ceb#1774 | 0x140309cfb#171  | 0           |
| 0x140309cfb#171  | 0x140309d02#182  | 0           |
| 0x140309d02#182  | 0x140309d09#191  | 1           |
| 0x140309ceb#1747 | 0x140309d09#1978 | 0           |
| 0x140309ceb#1747 | 0x140309d0b#192  | 0           |
| 0x140309d0b#1993 | 0x140309d0b#193  | 1           |
| 0x140309d0b#192  | 0x140309d0b#1993 | 0           |
| 0x140309ceb#1747 | 0x140309d0f#197  | 0           |
| 0x140309d0b#193  | 0x140309d0f#197  | 1           |
| 0x140309d0f#197  | 0x140309d12#206  | 0           |
| 0x140309d12#206  | 0x140309d1a#223  | 0           |
| 0x140309d1a#223  | 0x140309d1a#225  | 1           |
| 0x140309ceb#1774 | 0x140309d20#228  | 0           |
| 0x140309d27#1048 | 0x140309d27#238  | 1           |
| 0x140309d27#1077 | 0x140309d27#238  | 2           |
| 0x140309d09#1978 | 0x140309d27#1048 | 0           |
| 0x140309d0b#193  | 0x140309d27#1048 | 1           |
| 0x140309cfb#171  | 0x140309d27#1077 | 0           |
| 0x140309d20#228  | 0x140309d27#1077 | 1           |
| 0x140309ceb#1419 | 0x140309d27#1420 | 0           |
| 0x140309ceb#1475 | 0x140309d27#1476 | 0           |
| 0x140309ceb#1502 | 0x140309d27#1503 | 0           |
| 0x140309ceb#1531 | 0x140309d27#1532 | 0           |
| 0x140309ceb#1558 | 0x140309d27#1559 | 0           |
| 0x140309ceb#1585 | 0x140309d27#1586 | 0           |
| 0x140309ceb#1612 | 0x140309d27#1613 | 0           |
| 0x140309ceb#1639 | 0x140309d27#1640 | 0           |
| 0x140309ceb#1666 | 0x140309d27#1667 | 0           |
| 0x140309ceb#1693 | 0x140309d27#1694 | 0           |
| 0x140309ceb#1720 | 0x140309d27#1721 | 0           |
| 0x140309ceb#1747 | 0x140309d27#1748 | 0           |
| 0x140309ceb#1774 | 0x140309d27#1775 | 0           |
| 0x140309ceb#1801 | 0x140309d27#1802 | 0           |
| 0x140309ceb#1419 | 0x140309d2c#1444 | 0           |
| 0x140309d27#1420 | 0x140309d2c#1444 | 1           |
| 0x140309ceb#1531 | 0x140309d2c#1554 | 0           |
| 0x140309d27#1532 | 0x140309d2c#1554 | 1           |
| 0x140309ceb#1558 | 0x140309d2c#1581 | 0           |
| 0x140309d27#1559 | 0x140309d2c#1581 | 1           |
| 0x140309ceb#1585 | 0x140309d2c#1608 | 0           |
| 0x140309d27#1586 | 0x140309d2c#1608 | 1           |
| 0x140309ceb#1612 | 0x140309d2c#1635 | 0           |
| 0x140309d27#1613 | 0x140309d2c#1635 | 1           |
| 0x140309ceb#1639 | 0x140309d2c#1662 | 0           |
| 0x140309d27#1640 | 0x140309d2c#1662 | 1           |
| 0x140309ceb#1666 | 0x140309d2c#1689 | 0           |
| 0x140309d27#1667 | 0x140309d2c#1689 | 1           |
| 0x140309ceb#1693 | 0x140309d2c#1716 | 0           |
| 0x140309d27#1694 | 0x140309d2c#1716 | 1           |
| 0x140309ceb#1720 | 0x140309d2c#1743 | 0           |
| 0x140309d27#1721 | 0x140309d2c#1743 | 1           |
| 0x140309ceb#1747 | 0x140309d2c#1770 | 0           |
| 0x140309d27#1748 | 0x140309d2c#1770 | 1           |
| 0x140309ceb#1774 | 0x140309d2c#1797 | 0           |
| 0x140309d27#1775 | 0x140309d2c#1797 | 1           |
| 0x140309ceb#1801 | 0x140309d2c#1824 | 0           |
| 0x140309d27#1802 | 0x140309d2c#1824 | 1           |
| 0x140309d43#1959 | 0x140309d47#252  | 1           |
| 0x140309d3f#1958 | 0x140309d47#252  | 2           |
| 0x140309d2c#1444 | 0x140309d47#1421 | 0           |
| 0x140309d33#242  | 0x140309d47#1477 | 0           |
| 0x140309d37#245  | 0x140309d47#1504 | 0           |
| 0x140309d2c#1554 | 0x140309d47#1533 | 0           |
| 0x140309d2c#1581 | 0x140309d47#1560 | 0           |
| 0x140309d2c#1608 | 0x140309d47#1587 | 0           |
| 0x140309d2c#1635 | 0x140309d47#1614 | 0           |
| 0x140309d2c#1662 | 0x140309d47#1641 | 0           |
| 0x140309d2c#1689 | 0x140309d47#1668 | 0           |
| 0x140309d2c#1716 | 0x140309d47#1695 | 0           |
| 0x140309d2c#1743 | 0x140309d47#1722 | 0           |
| 0x140309d2c#1770 | 0x140309d47#1749 | 0           |
| 0x140309d2c#1797 | 0x140309d47#1776 | 0           |
| 0x140309d2c#1824 | 0x140309d47#1803 | 0           |
| 0x140309d4c#1960 | 0x140309d4c#254  | 1           |
| 0x140309d4c#254  | 0x140309d4c#1994 | 0           |
| 0x140309d54#1961 | 0x140309d54#260  | 1           |
| 0x140309d54#260  | 0x140309d58#264  | 0           |
| 0x140309d58#1995 | 0x140309d58#264  | 1           |
| 0x140309d4c#1994 | 0x140309d58#1995 | 0           |
| 0x140309d63#1963 | 0x140309d67#280  | 1           |
| 0x140309d5f#1962 | 0x140309d67#280  | 2           |
| 0x140309d47#1421 | 0x140309d67#1422 | 0           |
| 0x140309d4c#1994 | 0x140309d67#1478 | 0           |
| 0x140309d58#264  | 0x140309d67#1505 | 0           |
| 0x140309d47#1533 | 0x140309d67#1534 | 0           |
| 0x140309d47#1560 | 0x140309d67#1561 | 0           |
| 0x140309d47#1587 | 0x140309d67#1588 | 0           |
| 0x140309d47#1614 | 0x140309d67#1615 | 0           |
| 0x140309d47#1641 | 0x140309d67#1642 | 0           |
| 0x140309d47#1668 | 0x140309d67#1669 | 0           |
| 0x140309d47#1695 | 0x140309d67#1696 | 0           |
| 0x140309d47#1722 | 0x140309d67#1723 | 0           |
| 0x140309d47#1749 | 0x140309d67#1750 | 0           |
| 0x140309d47#1776 | 0x140309d67#1777 | 0           |
| 0x140309d47#1803 | 0x140309d67#1804 | 0           |
| 0x140309d67#280  | 0x140309d67#1996 | 0           |
| 0x140309d6d#1997 | 0x140309d6d#282  | 1           |
| 0x140309d67#1996 | 0x140309d6d#1964 | 0           |
| 0x140309d6d#1964 | 0x140309d6d#1997 | 0           |
| 0x140309d6d#282  | 0x140309d72#293  | 1           |
| 0x140309d72#293  | 0x140309d72#294  | 1           |
| 0x140309d67#1996 | 0x140309d72#1980 | 0           |
| 0x140309d74#1998 | 0x140309d74#295  | 1           |
| 0x140309d67#1996 | 0x140309d74#1998 | 0           |
| 0x140309d74#295  | 0x140309d77#1979 | 0           |
| 0x140309d77#1979 | 0x140309d7c#1050 | 0           |
| 0x140309d72#1980 | 0x140309d7c#1050 | 1           |
| 0x140309d80#1999 | 0x140309d80#302  | 1           |
| 0x140309d67#1996 | 0x140309d80#1965 | 0           |
| 0x140309d80#1965 | 0x140309d80#1999 | 0           |
| 0x140309d8c#1967 | 0x140309d90#313  | 1           |
| 0x140309d88#1966 | 0x140309d90#313  | 2           |
| 0x140309d67#1422 | 0x140309d90#1423 | 0           |
| 0x140309d7c#1050 | 0x140309d90#1479 | 0           |
| 0x140309d80#302  | 0x140309d90#1506 | 0           |
| 0x140309d67#1534 | 0x140309d90#1535 | 0           |
| 0x140309d67#1561 | 0x140309d90#1562 | 0           |
| 0x140309d67#1588 | 0x140309d90#1589 | 0           |
| 0x140309d67#1615 | 0x140309d90#1616 | 0           |
| 0x140309d67#1642 | 0x140309d90#1643 | 0           |
| 0x140309d67#1669 | 0x140309d90#1670 | 0           |
| 0x140309d67#1696 | 0x140309d90#1697 | 0           |
| 0x140309d67#1723 | 0x140309d90#1724 | 0           |
| 0x140309d67#1750 | 0x140309d90#1751 | 0           |
| 0x140309d67#1777 | 0x140309d90#1778 | 0           |
| 0x140309d67#1804 | 0x140309d90#1805 | 0           |
| 0x140309d90#1778 | 0x140309d9e#327  | 1           |
| 0x140309d9e#327  | 0x140309d9e#328  | 1           |
| 0x140309d90#1778 | 0x140309da0#330  | 0           |
| 0x140309da0#330  | 0x140309da7#341  | 1           |
| 0x140309da7#341  | 0x140309dae#350  | 1           |
| 0x140309d90#1751 | 0x140309dae#1976 | 0           |
| 0x140309d90#1751 | 0x140309db0#351  | 0           |
| 0x140309db0#2000 | 0x140309db0#352  | 1           |
| 0x140309db0#351  | 0x140309db0#2000 | 0           |
| 0x140309d90#1751 | 0x140309db4#356  | 0           |
| 0x140309db0#352  | 0x140309db4#356  | 1           |
| 0x140309db4#356  | 0x140309db7#365  | 0           |
| 0x140309db7#365  | 0x140309dbf#382  | 1           |
| 0x140309dbf#382  | 0x140309dbf#384  | 1           |
| 0x140309d90#1778 | 0x140309dc1#387  | 0           |
| 0x140309dc8#1041 | 0x140309dc8#397  | 1           |
| 0x140309dc8#1069 | 0x140309dc8#397  | 2           |
| 0x140309dae#1976 | 0x140309dc8#1041 | 0           |
| 0x140309db0#352  | 0x140309dc8#1041 | 1           |
| 0x140309da0#330  | 0x140309dc8#1069 | 0           |
| 0x140309dc1#387  | 0x140309dc8#1069 | 1           |
| 0x140309d90#1423 | 0x140309dc8#1425 | 0           |
| 0x140309d90#1479 | 0x140309dc8#1481 | 0           |
| 0x140309d90#1506 | 0x140309dc8#1508 | 0           |
| 0x140309d90#1535 | 0x140309dc8#1537 | 0           |
| 0x140309d90#1562 | 0x140309dc8#1564 | 0           |
| 0x140309d90#1589 | 0x140309dc8#1591 | 0           |
| 0x140309d90#1616 | 0x140309dc8#1618 | 0           |
| 0x140309d90#1643 | 0x140309dc8#1645 | 0           |
| 0x140309d90#1670 | 0x140309dc8#1672 | 0           |
| 0x140309d90#1697 | 0x140309dc8#1699 | 0           |
| 0x140309d90#1724 | 0x140309dc8#1726 | 0           |
| 0x140309d90#1805 | 0x140309dc8#1807 | 0           |
| 0x140309d90#1423 | 0x140309dcd#1437 | 0           |
| 0x140309dc8#1425 | 0x140309dcd#1437 | 1           |
| 0x140309d90#1479 | 0x140309dcd#1491 | 0           |
| 0x140309dc8#1481 | 0x140309dcd#1491 | 1           |
| 0x140309d90#1506 | 0x140309dcd#1518 | 0           |
| 0x140309dc8#1508 | 0x140309dcd#1518 | 1           |
| 0x140309d90#1535 | 0x140309dcd#1547 | 0           |
| 0x140309dc8#1537 | 0x140309dcd#1547 | 1           |
| 0x140309d90#1562 | 0x140309dcd#1574 | 0           |
| 0x140309dc8#1564 | 0x140309dcd#1574 | 1           |
| 0x140309d90#1589 | 0x140309dcd#1601 | 0           |
| 0x140309dc8#1591 | 0x140309dcd#1601 | 1           |
| 0x140309d90#1616 | 0x140309dcd#1628 | 0           |
| 0x140309dc8#1618 | 0x140309dcd#1628 | 1           |
| 0x140309d90#1643 | 0x140309dcd#1655 | 0           |
| 0x140309dc8#1645 | 0x140309dcd#1655 | 1           |
| 0x140309d90#1670 | 0x140309dcd#1682 | 0           |
| 0x140309dc8#1672 | 0x140309dcd#1682 | 1           |
| 0x140309d90#1697 | 0x140309dcd#1709 | 0           |
| 0x140309dc8#1699 | 0x140309dcd#1709 | 1           |
| 0x140309d90#1724 | 0x140309dcd#1736 | 0           |
| 0x140309dc8#1726 | 0x140309dcd#1736 | 1           |
| 0x140309d90#1805 | 0x140309dcd#1817 | 0           |
| 0x140309dc8#1807 | 0x140309dcd#1817 | 1           |
| 0x140309dcd#1968 | 0x140309dd1#402  | 1           |
| 0x140309dcd#1437 | 0x140309dd1#1426 | 0           |
| 0x140309dcd#1491 | 0x140309dd1#1482 | 0           |
| 0x140309dcd#1518 | 0x140309dd1#1509 | 0           |
| 0x140309dcd#1547 | 0x140309dd1#1538 | 0           |
| 0x140309dcd#1574 | 0x140309dd1#1565 | 0           |
| 0x140309dcd#1601 | 0x140309dd1#1592 | 0           |
| 0x140309dcd#1628 | 0x140309dd1#1619 | 0           |
| 0x140309dcd#1655 | 0x140309dd1#1646 | 0           |
| 0x140309dcd#1682 | 0x140309dd1#1673 | 0           |
| 0x140309dcd#1709 | 0x140309dd1#1700 | 0           |
| 0x140309dcd#1736 | 0x140309dd1#1727 | 0           |
| 0x140309dcd#1817 | 0x140309dd1#1808 | 0           |
| 0x140309dd9#1969 | 0x140309ddd#408  | 1           |
| 0x140309dd1#1426 | 0x140309ddd#1427 | 0           |
| 0x140309dd1#1482 | 0x140309ddd#1483 | 0           |
| 0x140309dd1#1509 | 0x140309ddd#1510 | 0           |
| 0x140309dd1#1538 | 0x140309ddd#1539 | 0           |
| 0x140309dd1#1565 | 0x140309ddd#1566 | 0           |
| 0x140309dd1#1592 | 0x140309ddd#1593 | 0           |
| 0x140309dd1#1619 | 0x140309ddd#1620 | 0           |
| 0x140309dd1#1646 | 0x140309ddd#1647 | 0           |
| 0x140309dd1#1673 | 0x140309ddd#1674 | 0           |
| 0x140309dd1#1700 | 0x140309ddd#1701 | 0           |
| 0x140309dd1#1727 | 0x140309ddd#1728 | 0           |
| 0x140309dd1#1808 | 0x140309ddd#1809 | 0           |
| 0x140309ddd#1647 | 0x140309de7#416  | 0           |
| 0x140309de7#416  | 0x140309dea#421  | 1           |
| 0x140309ddd#1701 | 0x140309df0#427  | 0           |
| 0x140309ddd#1647 | 0x140309df0#427  | 1           |
| 0x140309df0#427  | 0x140309df3#436  | 0           |
| 0x140309df3#436  | 0x140309df7#474  | 0           |
| 0x140309dff#2001 | 0x140309dff#477  | 1           |
| 0x140309df7#474  | 0x140309dff#2001 | 0           |
| 0x140309dff#477  | 0x140309e06#486  | 1           |
| 0x140309ddd#1647 | 0x140309e06#1975 | 0           |
| 0x140309c3a#1945 | 0x140309e06#1984 | 0           |
| 0x140309ddd#1647 | 0x140309e08#487  | 0           |
| 0x140309e08#2002 | 0x140309e08#488  | 1           |
| 0x140309e08#487  | 0x140309e08#2002 | 0           |
| 0x140309ddd#1647 | 0x140309e0c#492  | 0           |
| 0x140309e08#488  | 0x140309e0c#492  | 1           |
| 0x140309e0c#492  | 0x140309e0f#501  | 0           |
| 0x140309e0f#501  | 0x140309e17#518  | 1           |
| 0x140309e17#518  | 0x140309e17#520  | 1           |
| 0x140309e08#488  | 0x140309e17#1974 | 0           |
| 0x140309c3a#1946 | 0x140309e17#1983 | 0           |
| 0x140309ceb#1419 | 0x140309e1f#1443 | 0           |
| 0x140309d90#1423 | 0x140309e1f#1443 | 1           |
| 0x140309ceb#1475 | 0x140309e1f#1498 | 0           |
| 0x140309d90#1479 | 0x140309e1f#1498 | 1           |
| 0x140309ceb#1502 | 0x140309e1f#1525 | 0           |
| 0x140309d90#1506 | 0x140309e1f#1525 | 1           |
| 0x140309ceb#1531 | 0x140309e1f#1553 | 0           |
| 0x140309d90#1535 | 0x140309e1f#1553 | 1           |
| 0x140309ceb#1558 | 0x140309e1f#1580 | 0           |
| 0x140309d90#1562 | 0x140309e1f#1580 | 1           |
| 0x140309ceb#1585 | 0x140309e1f#1607 | 0           |
| 0x140309d90#1589 | 0x140309e1f#1607 | 1           |
| 0x140309ceb#1612 | 0x140309e1f#1634 | 0           |
| 0x140309d90#1616 | 0x140309e1f#1634 | 1           |
| 0x140309ceb#1639 | 0x140309e1f#1661 | 0           |
| 0x140309d90#1643 | 0x140309e1f#1661 | 1           |
| 0x140309ceb#1666 | 0x140309e1f#1688 | 0           |
| 0x140309d90#1670 | 0x140309e1f#1688 | 1           |
| 0x140309ceb#1693 | 0x140309e1f#1715 | 0           |
| 0x140309d90#1697 | 0x140309e1f#1715 | 1           |
| 0x140309ceb#1720 | 0x140309e1f#1742 | 0           |
| 0x140309d90#1724 | 0x140309e1f#1742 | 1           |
| 0x140309ceb#1801 | 0x140309e1f#1823 | 0           |
| 0x140309d90#1805 | 0x140309e1f#1823 | 1           |
| 0x140309e24#2003 | 0x140309e24#682  | 0           |
| 0x140309e1f#680  | 0x140309e24#1031 | 0           |
| 0x140309e1f#1443 | 0x140309e24#1424 | 0           |
| 0x140309e1f#1498 | 0x140309e24#1480 | 0           |
| 0x140309e1f#1525 | 0x140309e24#1507 | 0           |
| 0x140309e1f#1553 | 0x140309e24#1536 | 0           |
| 0x140309e1f#1580 | 0x140309e24#1563 | 0           |
| 0x140309e1f#1607 | 0x140309e24#1590 | 0           |
| 0x140309e1f#1634 | 0x140309e24#1617 | 0           |
| 0x140309e1f#1661 | 0x140309e24#1644 | 0           |
| 0x140309e1f#1688 | 0x140309e24#1671 | 0           |
| 0x140309e1f#1715 | 0x140309e24#1698 | 0           |
| 0x140309e1f#1742 | 0x140309e24#1725 | 0           |
| 0x140309e1f#1823 | 0x140309e24#1806 | 0           |
| 0x140309e24#681  | 0x140309e24#2003 | 0           |
| 0x140309e17#1974 | 0x140309e29#1013 | 0           |
| 0x140309e06#1975 | 0x140309e29#1013 | 1           |
| 0x140309e24#1031 | 0x140309e29#1013 | 2           |
| 0x140309e17#1983 | 0x140309e29#1084 | 0           |
| 0x140309e06#1984 | 0x140309e29#1084 | 1           |
| 0x140309e24#1970 | 0x140309e29#1084 | 2           |
| 0x140309ddd#1427 | 0x140309e29#1442 | 0           |
| 0x140309ddd#1427 | 0x140309e29#1442 | 1           |
| 0x140309e24#1424 | 0x140309e29#1442 | 2           |
| 0x140309ddd#1483 | 0x140309e29#1496 | 0           |
| 0x140309ddd#1483 | 0x140309e29#1496 | 1           |
| 0x140309e24#1480 | 0x140309e29#1496 | 2           |
| 0x140309ddd#1510 | 0x140309e29#1523 | 0           |
| 0x140309ddd#1510 | 0x140309e29#1523 | 1           |
| 0x140309e24#1507 | 0x140309e29#1523 | 2           |
| 0x140309ddd#1539 | 0x140309e29#1552 | 0           |
| 0x140309ddd#1539 | 0x140309e29#1552 | 1           |
| 0x140309e24#1536 | 0x140309e29#1552 | 2           |
| 0x140309ddd#1566 | 0x140309e29#1579 | 0           |
| 0x140309ddd#1566 | 0x140309e29#1579 | 1           |
| 0x140309e24#1563 | 0x140309e29#1579 | 2           |
| 0x140309ddd#1593 | 0x140309e29#1606 | 0           |
| 0x140309ddd#1593 | 0x140309e29#1606 | 1           |
| 0x140309e24#1590 | 0x140309e29#1606 | 2           |
| 0x140309ddd#1620 | 0x140309e29#1633 | 0           |
| 0x140309ddd#1620 | 0x140309e29#1633 | 1           |
| 0x140309e24#1617 | 0x140309e29#1633 | 2           |
| 0x140309ddd#1647 | 0x140309e29#1660 | 0           |
| 0x140309ddd#1647 | 0x140309e29#1660 | 1           |
| 0x140309e24#1644 | 0x140309e29#1660 | 2           |
| 0x140309ddd#1674 | 0x140309e29#1687 | 0           |
| 0x140309ddd#1674 | 0x140309e29#1687 | 1           |
| 0x140309e24#1671 | 0x140309e29#1687 | 2           |
| 0x140309ddd#1701 | 0x140309e29#1714 | 0           |
| 0x140309ddd#1701 | 0x140309e29#1714 | 1           |
| 0x140309e24#1698 | 0x140309e29#1714 | 2           |
| 0x140309ddd#1728 | 0x140309e29#1741 | 0           |
| 0x140309ddd#1728 | 0x140309e29#1741 | 1           |
| 0x140309e24#1725 | 0x140309e29#1741 | 2           |
| 0x140309ddd#1809 | 0x140309e29#1822 | 0           |
| 0x140309ddd#1809 | 0x140309e29#1822 | 1           |
| 0x140309e24#1806 | 0x140309e29#1822 | 2           |
| 0x140309e29#1084 | 0x140309e2c#532  | 0           |
| 0x140309e2c#2004 | 0x140309e2c#533  | 1           |
| 0x140309e29#1013 | 0x140309e2c#534  | 1           |
| 0x140309e29#1442 | 0x140309e2c#1428 | 0           |
| 0x140309e29#1496 | 0x140309e2c#1484 | 0           |
| 0x140309e29#1523 | 0x140309e2c#1511 | 0           |
| 0x140309e29#1552 | 0x140309e2c#1540 | 0           |
| 0x140309e29#1579 | 0x140309e2c#1567 | 0           |
| 0x140309e29#1606 | 0x140309e2c#1594 | 0           |
| 0x140309e29#1633 | 0x140309e2c#1621 | 0           |
| 0x140309e29#1660 | 0x140309e2c#1648 | 0           |
| 0x140309e29#1687 | 0x140309e2c#1675 | 0           |
| 0x140309e29#1714 | 0x140309e2c#1702 | 0           |
| 0x140309e29#1741 | 0x140309e2c#1729 | 0           |
| 0x140309e29#1822 | 0x140309e2c#1810 | 0           |
| 0x140309e2c#532  | 0x140309e2c#2004 | 0           |
| 0x140309c3a#1947 | 0x140309e3d#1081 | 0           |
| 0x140309e29#1084 | 0x140309e3d#1081 | 1           |
| 0x140309ddd#1427 | 0x140309e3d#1439 | 0           |
| 0x140309e2c#1428 | 0x140309e3d#1439 | 1           |
| 0x140309ddd#1483 | 0x140309e3d#1493 | 0           |
| 0x140309e2c#1484 | 0x140309e3d#1493 | 1           |
| 0x140309ddd#1510 | 0x140309e3d#1520 | 0           |
| 0x140309e2c#1511 | 0x140309e3d#1520 | 1           |
| 0x140309ddd#1539 | 0x140309e3d#1549 | 0           |
| 0x140309e2c#1540 | 0x140309e3d#1549 | 1           |
| 0x140309ddd#1566 | 0x140309e3d#1576 | 0           |
| 0x140309e2c#1567 | 0x140309e3d#1576 | 1           |
| 0x140309ddd#1593 | 0x140309e3d#1603 | 0           |
| 0x140309e2c#1594 | 0x140309e3d#1603 | 1           |
| 0x140309ddd#1620 | 0x140309e3d#1630 | 0           |
| 0x140309e2c#1621 | 0x140309e3d#1630 | 1           |
| 0x140309ddd#1647 | 0x140309e3d#1657 | 0           |
| 0x140309e34#1413 | 0x140309e3d#1657 | 1           |
| 0x140309ddd#1674 | 0x140309e3d#1684 | 0           |
| 0x140309e34#1414 | 0x140309e3d#1684 | 1           |
| 0x140309ddd#1701 | 0x140309e3d#1711 | 0           |
| 0x140309e39#544  | 0x140309e3d#1711 | 1           |
| 0x140309ddd#1728 | 0x140309e3d#1738 | 0           |
| 0x140309e2c#1729 | 0x140309e3d#1738 | 1           |
| 0x140309ddd#1809 | 0x140309e3d#1819 | 0           |
| 0x140309e2c#1810 | 0x140309e3d#1819 | 1           |
| 0x140309e45#2005 | 0x140309e45#558  | 1           |
| 0x140309e45#558  | 0x140309e45#559  | 1           |
| 0x140309e3d#1630 | 0x140309e45#2005 | 0           |
| 0x140309e3d#1630 | 0x140309e47#561  | 0           |
| 0x140309e47#561  | 0x140309e4e#572  | 1           |
| 0x140309e4e#572  | 0x140309e55#581  | 1           |
| 0x140309e3d#1549 | 0x140309e55#1977 | 0           |
| 0x140309e3d#1549 | 0x140309e57#582  | 0           |
| 0x140309e57#2006 | 0x140309e57#583  | 1           |
| 0x140309e57#582  | 0x140309e57#2006 | 0           |
| 0x140309e3d#1549 | 0x140309e5b#587  | 0           |
| 0x140309e57#583  | 0x140309e5b#587  | 1           |
| 0x140309e5b#587  | 0x140309e5e#596  | 0           |
| 0x140309e5e#596  | 0x140309e66#613  | 1           |
| 0x140309e66#613  | 0x140309e66#615  | 1           |
| 0x140309e3d#1630 | 0x140309e68#618  | 0           |
| 0x140309e3d#1081 | 0x140309e6f#626  | 0           |
| 0x140309e6f#2010 | 0x140309e6f#627  | 1           |
| 0x140309e6f#1043 | 0x140309e6f#628  | 1           |
| 0x140309e6f#1071 | 0x140309e6f#628  | 2           |
| 0x140309e55#1977 | 0x140309e6f#1043 | 0           |
| 0x140309e57#583  | 0x140309e6f#1043 | 1           |
| 0x140309e47#561  | 0x140309e6f#1071 | 0           |
| 0x140309e68#618  | 0x140309e6f#1071 | 1           |
| 0x140309e3d#1439 | 0x140309e6f#1431 | 0           |
| 0x140309e3d#1493 | 0x140309e6f#1487 | 0           |
| 0x140309e3d#1520 | 0x140309e6f#1514 | 0           |
| 0x140309e3d#1549 | 0x140309e6f#1543 | 0           |
| 0x140309e3d#1576 | 0x140309e6f#1570 | 0           |
| 0x140309e3d#1603 | 0x140309e6f#1597 | 0           |
| 0x140309e3d#1630 | 0x140309e6f#1624 | 0           |
| 0x140309e3d#1657 | 0x140309e6f#1651 | 0           |
| 0x140309e3d#1684 | 0x140309e6f#1678 | 0           |
| 0x140309e3d#1711 | 0x140309e6f#1705 | 0           |
| 0x140309e3d#1738 | 0x140309e6f#1732 | 0           |
| 0x140309e3d#1819 | 0x140309e6f#1813 | 0           |
| 0x140309e6f#626  | 0x140309e6f#2010 | 0           |
| 0x140309e3d#1439 | 0x140309e74#1438 | 0           |
| 0x140309e6f#1431 | 0x140309e74#1438 | 1           |
| 0x140309e3d#1081 | 0x140309e7e#642  | 0           |
| 0x140309e7e#2011 | 0x140309e7e#643  | 1           |
| 0x140309e7e#642  | 0x140309e7e#2011 | 0           |
| 0x140309e74#629  | 0x140309e8e#672  | 1           |
| 0x140309e74#1438 | 0x140309e8e#1432 | 0           |
| 0x140309ddd#1427 | 0x140309e8f#1441 | 0           |
| 0x140309e3d#1439 | 0x140309e8f#1441 | 1           |
| 0x140309ddd#1483 | 0x140309e8f#1495 | 0           |
| 0x140309e3d#1493 | 0x140309e8f#1495 | 1           |
| 0x140309ddd#1510 | 0x140309e8f#1522 | 0           |
| 0x140309e3d#1520 | 0x140309e8f#1522 | 1           |
| 0x140309ddd#1539 | 0x140309e8f#1551 | 0           |
| 0x140309e3d#1549 | 0x140309e8f#1551 | 1           |
| 0x140309ddd#1566 | 0x140309e8f#1578 | 0           |
| 0x140309e3d#1576 | 0x140309e8f#1578 | 1           |
| 0x140309ddd#1593 | 0x140309e8f#1605 | 0           |
| 0x140309e3d#1603 | 0x140309e8f#1605 | 1           |
| 0x140309ddd#1620 | 0x140309e8f#1632 | 0           |
| 0x140309e3d#1630 | 0x140309e8f#1632 | 1           |
| 0x140309ddd#1647 | 0x140309e8f#1659 | 0           |
| 0x140309e3d#1657 | 0x140309e8f#1659 | 1           |
| 0x140309ddd#1674 | 0x140309e8f#1686 | 0           |
| 0x140309e3d#1684 | 0x140309e8f#1686 | 1           |
| 0x140309ddd#1701 | 0x140309e8f#1713 | 0           |
| 0x140309e3d#1711 | 0x140309e8f#1713 | 1           |
| 0x140309ddd#1728 | 0x140309e8f#1740 | 0           |
| 0x140309e3d#1738 | 0x140309e8f#1740 | 1           |
| 0x140309ddd#1809 | 0x140309e8f#1821 | 0           |
| 0x140309e3d#1819 | 0x140309e8f#1821 | 1           |
| 0x140309e94#2007 | 0x140309e94#675  | 0           |
| 0x140309e8f#1441 | 0x140309e94#1429 | 0           |
| 0x140309e8f#1495 | 0x140309e94#1485 | 0           |
| 0x140309e8f#1522 | 0x140309e94#1512 | 0           |
| 0x140309e8f#1551 | 0x140309e94#1541 | 0           |
| 0x140309e8f#1578 | 0x140309e94#1568 | 0           |
| 0x140309e8f#1605 | 0x140309e94#1595 | 0           |
| 0x140309e8f#1632 | 0x140309e94#1622 | 0           |
| 0x140309e8f#1659 | 0x140309e94#1649 | 0           |
| 0x140309e8f#1686 | 0x140309e94#1676 | 0           |
| 0x140309e8f#1713 | 0x140309e94#1703 | 0           |
| 0x140309e8f#1740 | 0x140309e94#1730 | 0           |
| 0x140309e8f#1821 | 0x140309e94#1811 | 0           |
| 0x140309e94#674  | 0x140309e94#2007 | 0           |
| 0x140309e96#2008 | 0x140309e96#677  | 0           |
| 0x140309e96#2009 | 0x140309e96#678  | 1           |
| 0x140309e94#1429 | 0x140309e96#1430 | 0           |
| 0x140309e96#1430 | 0x140309e96#1433 | 0           |
| 0x140309e94#1485 | 0x140309e96#1486 | 0           |
| 0x140309e94#1512 | 0x140309e96#1513 | 0           |
| 0x140309e94#1541 | 0x140309e96#1542 | 0           |
| 0x140309e94#1568 | 0x140309e96#1569 | 0           |
| 0x140309e94#1595 | 0x140309e96#1596 | 0           |
| 0x140309e94#1622 | 0x140309e96#1623 | 0           |
| 0x140309e94#1649 | 0x140309e96#1650 | 0           |
| 0x140309e94#1676 | 0x140309e96#1677 | 0           |
| 0x140309e94#1703 | 0x140309e96#1704 | 0           |
| 0x140309e94#1730 | 0x140309e96#1731 | 0           |
| 0x140309e94#1811 | 0x140309e96#1812 | 0           |
| 0x140309e96#676  | 0x140309e96#2008 | 0           |
| 0x140309e96#677  | 0x140309e96#2009 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /char *     |
| 1       | param_2 | /longlong * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x140309c83#1985 | 0           |
| 1       | 0x140309ca8#95   | 1           |
| 1       | 0x140309caf#1951 | 0           |
| 1       | 0x140309d4c#1960 | 0           |
| 1       | 0x140309d54#1961 | 0           |
| 0       | 0x140309ddd#408  | 2           |
| 0       | 0x140309e74#629  | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x140309c83#80  | direct_call        | 0             |             |
| 0x140309ca3#94  | direct_call        | 0             |             |
| 0x140309ca8#95  | memory_read        | 1             |             |
| 0x140309caf#101 | memory_read        | 1             |             |
| 0x140309cc2#121 | direct_call        | 0             |             |
| 0x140309cc8#123 | memory_read        | 1             |             |
| 0x140309ccd#135 | conditional_branch |               | 1           |
| 0x140309ccf#136 | memory_read        | 1             |             |
| 0x140309cdb#143 | memory_read        | 1             |             |
| 0x140309ceb#154 | direct_call        | 0             |             |
| 0x140309cf9#169 | conditional_branch |               | 1           |
| 0x140309d09#191 | conditional_branch |               | 1           |
| 0x140309d0b#193 | memory_read        | 1             |             |
| 0x140309d1a#225 | conditional_branch |               | 1           |
| 0x140309d27#238 | direct_call        | 0             |             |
| 0x140309d47#252 | direct_call        | 0             |             |
| 0x140309d4c#254 | memory_read        | 1             |             |
| 0x140309d54#260 | memory_read        | 1             |             |
| 0x140309d67#280 | direct_call        | 0             |             |
| 0x140309d6d#282 | memory_read        | 1             |             |
| 0x140309d72#294 | conditional_branch |               | 1           |
| 0x140309d74#295 | memory_read        | 1             |             |
| 0x140309d80#302 | memory_read        | 1             |             |
| 0x140309d90#313 | direct_call        | 0             |             |
| 0x140309d9e#328 | conditional_branch |               | 1           |
| 0x140309dae#350 | conditional_branch |               | 1           |
| 0x140309db0#352 | memory_read        | 1             |             |
| 0x140309dbf#384 | conditional_branch |               | 1           |
| 0x140309dc8#397 | direct_call        | 0             |             |
| 0x140309dd1#402 | direct_call        | 0             |             |
| 0x140309ddd#408 | direct_call        | 0             |             |
| 0x140309dea#421 | conditional_branch |               | 1           |
| 0x140309e06#486 | conditional_branch |               | 1           |
| 0x140309e08#488 | memory_read        | 1             |             |
| 0x140309e17#520 | conditional_branch |               | 1           |
| 0x140309e24#682 | indirect_call      | 0             |             |
| 0x140309e2c#533 | memory_write       | 1             | 2           |
| 0x140309e2c#534 | direct_call        | 0             |             |
| 0x140309e45#559 | conditional_branch |               | 1           |
| 0x140309e55#581 | conditional_branch |               | 1           |
| 0x140309e57#583 | memory_read        | 1             |             |
| 0x140309e66#615 | conditional_branch |               | 1           |
| 0x140309e6f#627 | memory_write       | 1             | 2           |
| 0x140309e6f#628 | direct_call        | 0             |             |
| 0x140309e7e#643 | memory_write       | 1             | 2           |
| 0x140309e94#675 | indirect_call      | 0             |             |
| 0x140309e96#677 | indirect_call      | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x140309e96 with no resolved callee; its no-return basis is unknown.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x140309e96 with no resolved callee; its no-return basis is unknown.

## normalized_result.procedure.address

0x140309c30

## normalized_result.procedure.name

FUN_140309c30

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
| 0x140309c30 | 0x140309e96 |

## normalized_result.procedure.body.total_bytes

615

## normalized_result.procedure.body.span_bytes

615

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_140309c30()

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_38 @ Stack[-0x38]:8      | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8      | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8      | ghidra-function-database |
| undefined local_5f @ Stack[-0x5f]:1       | ghidra-function-database |
| undefined1 local_60 @ Stack[-0x60]:1      | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined1[16] local_78 @ Stack[-0x78]:16 | ghidra-function-database |
| undefined8 local_80 @ Stack[-0x80]:8      | ghidra-function-database |
| undefined8 local_88 @ Stack[-0x88]:8      | ghidra-function-database |
| undefined1[16] local_98 @ Stack[-0x98]:16 | ghidra-function-database |
| undefined8 local_b0 @ Stack[-0xb0]:8      | ghidra-function-database |
| undefined8 local_b8 @ Stack[-0xb8]:8      | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_140309c30(char *param_1,longlong *param_2)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  char *local_b8;
  longlong local_b0;
  longlong local_98 [7];
  undefined1 local_60;
  longlong local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  puVar6 = auStack_d8;
  local_38 = DAT_1404c7ac0 ^ (ulonglong)auStack_d8;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0xf;
  local_98[0] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_60 = 0;
  local_b8 = param_1;
  FUN_140313770(local_98);
  local_b8 = "payload";
  local_b0 = 7;
  FUN_140313ce0(local_98,&local_b8);
  local_b8 = (char *)*param_2;
  local_b0 = param_2[1] - (longlong)local_b8;
  pcVar2 = (char *)FUN_140307e60(local_58,&local_b8);
  local_b8 = pcVar2;
  if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
    local_b8 = *(char **)pcVar2;
  }
  local_b0 = *(longlong *)(pcVar2 + 0x10);
  FUN_140317660(local_98,&local_b8);
  if (local_40 < 0x10) {
LAB_140309d2c:
    local_b8 = "signature";
    local_b0 = 9;
    FUN_140313ce0(local_98,&local_b8);
    local_b8 = (char *)param_2[3];
    local_b0 = param_2[4] - (longlong)local_b8;
    pcVar2 = (char *)FUN_140307e60(local_58,&local_b8);
    local_b8 = pcVar2;
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      local_b8 = *(char **)pcVar2;
    }
    local_b0 = *(longlong *)(pcVar2 + 0x10);
    FUN_140317660(local_98,&local_b8);
    if (0xf < local_40) {
      uVar5 = local_40 + 1;
      lVar4 = local_58[0];
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(local_58[0] + -8);
        if (0x1f < (local_58[0] - lVar4) - 8U) goto LAB_140309e1f;
        uVar5 = local_40 + 0x28;
      }
      thunk_FUN_140327e20(lVar4,uVar5);
    }
    FUN_140313910(local_98);
    FUN_1403176a0(local_98,param_1);
    if (local_98[4] != 0) {
      lVar4 = local_98[4];
      puVar6 = auStack_d8;
      if ((0xfff < (ulonglong)((local_98[6] - local_98[4] >> 3) * 8)) &&
         (lVar4 = *(longlong *)(local_98[4] + -8), puVar6 = auStack_d8,
         0x1f < (local_98[4] - *(longlong *)(local_98[4] + -8)) - 8U)) goto LAB_140309e8f;
      goto LAB_140309e29;
    }
  }
  else {
    uVar5 = local_40 + 1;
    lVar4 = local_58[0];
    if (uVar5 < 0x1000) {
LAB_140309d27:
      thunk_FUN_140327e20(lVar4,uVar5);
      goto LAB_140309d2c;
    }
    lVar4 = *(longlong *)(local_58[0] + -8);
    if ((local_58[0] - lVar4) - 8U < 0x20) {
      uVar5 = local_40 + 0x28;
      goto LAB_140309d27;
    }
LAB_140309e1f:
    lVar4 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_d0;
LAB_140309e29:
    *(undefined8 *)(puVar6 + -8) = 0x140309e31;
    thunk_FUN_140327e20(lVar4);
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[6] = 0;
  }
  if (0xf < (ulonglong)local_98[3]) {
    uVar5 = local_98[3] + 1;
    lVar4 = local_98[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_98[0] + -8);
      if (0x1f < (local_98[0] - lVar4) - 8U) {
LAB_140309e8f:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (char *)uVar3;
      }
      uVar5 = local_98[3] + 0x28;
    }
    *(undefined8 *)(puVar6 + -8) = 0x140309e74;
    thunk_FUN_140327e20(lVar4,uVar5);
  }
  *(undefined8 *)(puVar6 + -8) = 0x140309e83;
  return param_1;
}



## normalized_result.assembly

0x140309c30: PUSH RBP,0x140309c32: PUSH RBX,0x140309c33: PUSH RSI,0x140309c34: PUSH RDI,0x140309c35: LEA RBP, [RSP + -0x3f],0x140309c3a: SUB RSP, 0xb8,0x140309c41: MOV RAX, qword ptr [0x1404c7ac0],0x140309c48: XOR RAX, RSP,0x140309c4b: MOV qword ptr [RBP + 0x27], RAX,0x140309c4f: MOV RDI, RDX,0x140309c52: MOV RBX, RCX,0x140309c55: MOV qword ptr [RBP + -0x59], RCX,0x140309c59: XOR ESI, ESI,0x140309c5b: XORPS XMM0, XMM0,0x140309c5e: MOVUPS xmmword ptr [RBP + -0x39], XMM0,0x140309c62: MOV qword ptr [RBP + -0x29], RSI,0x140309c66: MOV qword ptr [RBP + -0x21], 0xf,0x140309c6e: MOV byte ptr [RBP + -0x39], SIL,0x140309c72: MOVDQA xmmword ptr [RBP + -0x19], XMM0,0x140309c77: MOV qword ptr [RBP + -0x9], RSI,0x140309c7b: MOV byte ptr [RBP + -0x1], SIL,0x140309c7f: LEA RCX, [RBP + -0x39],0x140309c83: CALL 0x140313770,0x140309c88: LEA RAX, [0x140448f68],0x140309c8f: MOV qword ptr [RBP + -0x59], RAX,0x140309c93: MOV qword ptr [RBP + -0x51], 0x7,0x140309c9b: LEA RDX, [RBP + -0x59],0x140309c9f: LEA RCX, [RBP + -0x39],0x140309ca3: CALL 0x140313ce0,0x140309ca8: MOV RCX, qword ptr [RDI],0x140309cab: MOV qword ptr [RBP + -0x59], RCX,0x140309caf: MOV RAX, qword ptr [RDI + 0x8],0x140309cb3: SUB RAX, RCX,0x140309cb6: MOV qword ptr [RBP + -0x51], RAX,0x140309cba: LEA RDX, [RBP + -0x59],0x140309cbe: LEA RCX, [RBP + 0x7],0x140309cc2: CALL 0x140307e60,0x140309cc7: NOP,0x140309cc8: CMP qword ptr [RAX + 0x18], 0xf,0x140309ccd: JBE 0x140309cd4,0x140309ccf: MOV RCX, qword ptr [RAX],0x140309cd2: JMP 0x140309cd7,0x140309cd4: MOV RCX, RAX,0x140309cd7: MOV qword ptr [RBP + -0x59], RCX,0x140309cdb: MOV RAX, qword ptr [RAX + 0x10],0x140309cdf: MOV qword ptr [RBP + -0x51], RAX,0x140309ce3: LEA RDX, [RBP + -0x59],0x140309ce7: LEA RCX, [RBP + -0x39],0x140309ceb: CALL 0x140317660,0x140309cf0: NOP,0x140309cf1: MOV RDX, qword ptr [RBP + 0x1f],0x140309cf5: CMP RDX, 0xf,0x140309cf9: JBE 0x140309d2c,0x140309cfb: INC RDX,0x140309cfe: MOV RCX, qword ptr [RBP + 0x7],0x140309d02: CMP RDX, 0x1000,0x140309d09: JC 0x140309d27,0x140309d0b: MOV RAX, qword ptr [RCX + -0x8],0x140309d0f: SUB RCX, RAX,0x140309d12: SUB RCX, 0x8,0x140309d16: CMP RCX, 0x1f,0x140309d1a: JA 0x140309e1f,0x140309d20: ADD RDX, 0x27,0x140309d24: MOV RCX, RAX,0x140309d27: CALL 0x1403272f0,0x140309d2c: LEA RAX, [0x140448f70],0x140309d33: MOV qword ptr [RBP + -0x59], RAX,0x140309d37: MOV qword ptr [RBP + -0x51], 0x9,0x140309d3f: LEA RDX, [RBP + -0x59],0x140309d43: LEA RCX, [RBP + -0x39],0x140309d47: CALL 0x140313ce0,0x140309d4c: MOV RCX, qword ptr [RDI + 0x18],0x140309d50: MOV qword ptr [RBP + -0x59], RCX,0x140309d54: MOV RAX, qword ptr [RDI + 0x20],0x140309d58: SUB RAX, RCX,0x140309d5b: MOV qword ptr [RBP + -0x51], RAX,0x140309d5f: LEA RDX, [RBP + -0x59],0x140309d63: LEA RCX, [RBP + 0x7],0x140309d67: CALL 0x140307e60,0x140309d6c: NOP,0x140309d6d: CMP qword ptr [RAX + 0x18], 0xf,0x140309d72: JBE 0x140309d79,0x140309d74: MOV RCX, qword ptr [RAX],0x140309d77: JMP 0x140309d7c,0x140309d79: MOV RCX, RAX,0x140309d7c: MOV qword ptr [RBP + -0x59], RCX,0x140309d80: MOV RAX, qword ptr [RAX + 0x10],0x140309d84: MOV qword ptr [RBP + -0x51], RAX,0x140309d88: LEA RDX, [RBP + -0x59],0x140309d8c: LEA RCX, [RBP + -0x39],0x140309d90: CALL 0x140317660,0x140309d95: NOP,0x140309d96: MOV RDX, qword ptr [RBP + 0x1f],0x140309d9a: CMP RDX, 0xf,0x140309d9e: JBE 0x140309dcd,0x140309da0: INC RDX,0x140309da3: MOV RCX, qword ptr [RBP + 0x7],0x140309da7: CMP RDX, 0x1000,0x140309dae: JC 0x140309dc8,0x140309db0: MOV RAX, qword ptr [RCX + -0x8],0x140309db4: SUB RCX, RAX,0x140309db7: SUB RCX, 0x8,0x140309dbb: CMP RCX, 0x1f,0x140309dbf: JA 0x140309e1f,0x140309dc1: ADD RDX, 0x27,0x140309dc5: MOV RCX, RAX,0x140309dc8: CALL 0x1403272f0,0x140309dcd: LEA RCX, [RBP + -0x39],0x140309dd1: CALL 0x140313910,0x140309dd6: MOV RDX, RBX,0x140309dd9: LEA RCX, [RBP + -0x39],0x140309ddd: CALL 0x1403176a0,0x140309de2: NOP,0x140309de3: MOV RCX, qword ptr [RBP + -0x19],0x140309de7: TEST RCX, RCX,0x140309dea: JZ 0x140309e3d,0x140309dec: MOV RAX, qword ptr [RBP + -0x9],0x140309df0: SUB RAX, RCX,0x140309df3: SAR RAX, 0x3,0x140309df7: LEA RDX, [RAX*0x8],0x140309dff: CMP RDX, 0x1000,0x140309e06: JC 0x140309e26,0x140309e08: MOV RAX, qword ptr [RCX + -0x8],0x140309e0c: SUB RCX, RAX,0x140309e0f: SUB RCX, 0x8,0x140309e13: CMP RCX, 0x1f,0x140309e17: JA 0x140309e8f,0x140309e19: ADD RDX, 0x27,0x140309e1d: JMP 0x140309e29,0x140309e1f: MOV ECX, 0x5,0x140309e24: INT 0x29,0x140309e26: MOV RAX, RCX,0x140309e29: MOV RCX, RAX,0x140309e2c: CALL 0x1403272f0,0x140309e31: XORPS XMM0, XMM0,0x140309e34: MOVDQA xmmword ptr [RBP + -0x19], XMM0,0x140309e39: MOV qword ptr [RBP + -0x9], RSI,0x140309e3d: MOV RDX, qword ptr [RBP + -0x21],0x140309e41: CMP RDX, 0xf,0x140309e45: JBE 0x140309e74,0x140309e47: INC RDX,0x140309e4a: MOV RCX, qword ptr [RBP + -0x39],0x140309e4e: CMP RDX, 0x1000,0x140309e55: JC 0x140309e6f,0x140309e57: MOV RAX, qword ptr [RCX + -0x8],0x140309e5b: SUB RCX, RAX,0x140309e5e: SUB RCX, 0x8,0x140309e62: CMP RCX, 0x1f,0x140309e66: JA 0x140309e8f,0x140309e68: ADD RDX, 0x27,0x140309e6c: MOV RCX, RAX,0x140309e6f: CALL 0x1403272f0,0x140309e74: MOV RAX, RBX,0x140309e77: MOV RCX, qword ptr [RBP + 0x27],0x140309e7b: XOR RCX, RSP,0x140309e7e: CALL 0x140327740,0x140309e83: ADD RSP, 0xb8,0x140309e8a: POP RDI,0x140309e8b: POP RSI,0x140309e8c: POP RBX,0x140309e8d: POP RBP,0x140309e8e: RET,0x140309e8f: MOV ECX, 0x5,0x140309e94: INT 0x29,0x140309e96: INT3

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f6e90 | FUN_1401f6e90 | [object Object] | [object Object] |
| 0x14030bba0 | FUN_14030bba0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140307e60 | FUN_140307e60           | [object Object] | [object Object] |
| 0x140313770 | FUN_140313770           | [object Object] | [object Object] |
| 0x140313910 | FUN_140313910           | [object Object] | [object Object] |
| 0x140313ce0 | FUN_140313ce0           | [object Object] | [object Object] |
| 0x140317660 | FUN_140317660           | [object Object] | [object Object] |
| 0x1403176a0 | FUN_1403176a0           | [object Object] | [object Object] |
| 0x1403272f0 | thunk_FUN_140327e20     | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f6ec9    | 0x140309c30    | [object Object]  | [object Object]  | [object Object] |
| 0x14030bbd8    | 0x140309c30    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6dc4    | 0x140309c30    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x140309c35    | stack:0xffffffffffffffa1 | [object Object]  |                  | [object Object] |
| 0x140309c41    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x140309c4b    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x140309c55    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309c5e    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309c62    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x140309c66    | stack:0xffffffffffffff80 | [object Object]  |                  | [object Object] |
| 0x140309c6e    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309c72    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x140309c77    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140309c7b    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x140309c7f    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309c83    | 0x140313770              | [object Object]  | [object Object]  | [object Object] |
| 0x140309c88    | 0x140448f68              | [object Object]  |                  | [object Object] |
| 0x140309c8f    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309c8f    | 0x140448f68              | [object Object]  |                  | [object Object] |
| 0x140309c93    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309c9b    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309c9f    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309ca3    | 0x140313ce0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309cab    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309cb6    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309cba    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309cbe    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140309cc2    | 0x140307e60              | [object Object]  | [object Object]  | [object Object] |
| 0x140309ccd    | 0x140309cd4              | [object Object]  | [object Object]  | [object Object] |
| 0x140309cd2    | 0x140309cd7              | [object Object]  | [object Object]  | [object Object] |
| 0x140309cd7    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309cdf    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309ce3    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309ce7    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309ceb    | 0x140317660              | [object Object]  | [object Object]  | [object Object] |
| 0x140309cf1    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x140309cf9    | 0x140309d2c              | [object Object]  | [object Object]  | [object Object] |
| 0x140309cfe    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140309d09    | 0x140309d27              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d1a    | 0x140309e1f              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d27    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d2c    | 0x140448f70              | [object Object]  |                  | [object Object] |
| 0x140309d33    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d33    | 0x140448f70              | [object Object]  |                  | [object Object] |
| 0x140309d37    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309d3f    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d43    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309d47    | 0x140313ce0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d50    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d5b    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309d5f    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d63    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140309d67    | 0x140307e60              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d72    | 0x140309d79              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d77    | 0x140309d7c              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d7c    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d84    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x140309d88    | stack:0xffffffffffffff48 | [object Object]  |                  | [object Object] |
| 0x140309d8c    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309d90    | 0x140317660              | [object Object]  | [object Object]  | [object Object] |
| 0x140309d96    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x140309d9e    | 0x140309dcd              | [object Object]  | [object Object]  | [object Object] |
| 0x140309da3    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x140309dae    | 0x140309dc8              | [object Object]  | [object Object]  | [object Object] |
| 0x140309dbf    | 0x140309e1f              | [object Object]  | [object Object]  | [object Object] |
| 0x140309dc8    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309dcd    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309dd1    | 0x140313910              | [object Object]  | [object Object]  | [object Object] |
| 0x140309dd9    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309ddd    | 0x1403176a0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309de3    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x140309dea    | 0x140309e3d              | [object Object]  | [object Object]  | [object Object] |
| 0x140309dec    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140309e06    | 0x140309e26              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e17    | 0x140309e8f              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e1d    | 0x140309e29              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e2c    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e34    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x140309e39    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x140309e3d    | stack:0xffffffffffffff80 | [object Object]  |                  | [object Object] |
| 0x140309e45    | 0x140309e74              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e4a    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x140309e55    | 0x140309e6f              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e66    | 0x140309e8f              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e6f    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x140309e77    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x140309e7e    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings

| address     | value     | source_address |
|-------------|-----------|----------------|
| 0x140448f68 | payload   | 0x140309c88    |
| 0x140448f68 | payload   | 0x140309c8f    |
| 0x140448f70 | signature | 0x140309d2c    |
| 0x140448f70 | signature | 0x140309d33    |

## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140307e60 | FUN_140307e60           | 0x140309cc2    |
| 0x140307e60 | FUN_140307e60           | 0x140309d67    |
| 0x140309cd4 | LAB_140309cd4           | 0x140309ccd    |
| 0x140309cd7 | LAB_140309cd7           | 0x140309cd2    |
| 0x140309d27 | LAB_140309d27           | 0x140309d09    |
| 0x140309d2c | LAB_140309d2c           | 0x140309cf9    |
| 0x140309d79 | LAB_140309d79           | 0x140309d72    |
| 0x140309d7c | LAB_140309d7c           | 0x140309d77    |
| 0x140309dc8 | LAB_140309dc8           | 0x140309dae    |
| 0x140309dcd | LAB_140309dcd           | 0x140309d9e    |
| 0x140309e1f | LAB_140309e1f           | 0x140309d1a    |
| 0x140309e1f | LAB_140309e1f           | 0x140309dbf    |
| 0x140309e26 | LAB_140309e26           | 0x140309e06    |
| 0x140309e29 | LAB_140309e29           | 0x140309e1d    |
| 0x140309e3d | LAB_140309e3d           | 0x140309dea    |
| 0x140309e6f | LAB_140309e6f           | 0x140309e55    |
| 0x140309e74 | LAB_140309e74           | 0x140309e45    |
| 0x140309e8f | LAB_140309e8f           | 0x140309e17    |
| 0x140309e8f | LAB_140309e8f           | 0x140309e66    |
| 0x140313770 | FUN_140313770           | 0x140309c83    |
| 0x140313910 | FUN_140313910           | 0x140309dd1    |
| 0x140313ce0 | FUN_140313ce0           | 0x140309ca3    |
| 0x140313ce0 | FUN_140313ce0           | 0x140309d47    |
| 0x140317660 | FUN_140317660           | 0x140309ceb    |
| 0x140317660 | FUN_140317660           | 0x140309d90    |
| 0x1403176a0 | FUN_1403176a0           | 0x140309ddd    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x140309d27    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x140309dc8    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x140309e2c    |
| 0x1403272f0 | thunk_FUN_140327e20     | 0x140309e6f    |
| 0x140327740 | __security_check_cookie | 0x140309e7e    |
| 0x140448f68 | s_payload_140448f68     | 0x140309c88    |
| 0x140448f68 | s_payload_140448f68     | 0x140309c8f    |
| 0x140448f70 | s_signature_140448f70   | 0x140309d2c    |
| 0x140448f70 | s_signature_140448f70   | 0x140309d33    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x140309c41    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140309c30 | 0x140309ccf | 0x140309ccf,0x140309cd4 |
| 0x140309ccf | 0x140309cd4 | 0x140309cd7             |
| 0x140309cd4 | 0x140309cd7 | 0x140309cd7             |
| 0x140309cd7 | 0x140309cfb | 0x140309cfb,0x140309d2c |
| 0x140309cfb | 0x140309d0b | 0x140309d0b,0x140309d27 |
| 0x140309d0b | 0x140309d20 | 0x140309d20,0x140309e1f |
| 0x140309d20 | 0x140309d27 | 0x140309d27             |
| 0x140309d27 | 0x140309d2c | 0x140309d2c             |
| 0x140309d2c | 0x140309d74 | 0x140309d74,0x140309d79 |
| 0x140309d74 | 0x140309d79 | 0x140309d7c             |
| 0x140309d79 | 0x140309d7c | 0x140309d7c             |
| 0x140309d7c | 0x140309da0 | 0x140309da0,0x140309dcd |
| 0x140309da0 | 0x140309db0 | 0x140309db0,0x140309dc8 |
| 0x140309db0 | 0x140309dc1 | 0x140309dc1,0x140309e1f |
| 0x140309dc1 | 0x140309dc8 | 0x140309dc8             |
| 0x140309dc8 | 0x140309dcd | 0x140309dcd             |
| 0x140309dcd | 0x140309dec | 0x140309dec,0x140309e3d |
| 0x140309dec | 0x140309e08 | 0x140309e08,0x140309e26 |
| 0x140309e08 | 0x140309e19 | 0x140309e19,0x140309e8f |
| 0x140309e19 | 0x140309e1f | 0x140309e29             |
| 0x140309e1f | 0x140309e26 | 0x140309e26             |
| 0x140309e26 | 0x140309e29 | 0x140309e29             |
| 0x140309e29 | 0x140309e3d | 0x140309e3d             |
| 0x140309e3d | 0x140309e47 | 0x140309e47,0x140309e74 |
| 0x140309e47 | 0x140309e57 | 0x140309e57,0x140309e6f |
| 0x140309e57 | 0x140309e68 | 0x140309e68,0x140309e8f |
| 0x140309e68 | 0x140309e6f | 0x140309e6f             |
| 0x140309e6f | 0x140309e74 | 0x140309e74             |
| 0x140309e74 | 0x140309e8f |                         |
| 0x140309e8f | 0x140309e97 |                         |

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

char *

## normalized_result.native_api.return_type.size_bytes

8

## normalized_result.native_api.return_type.storage

RAX:8

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                   |
|------------------|-------------------------|------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.    |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type char *. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters

| ordinal | name    | data_type  | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | char *     | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | longlong * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|-------------------------------------------------|-----------------|
| 0x140309c3a#1944 | 0x140309c3a | 1944     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c3a#1945 | 0x140309c3a | 1945     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c3a#1946 | 0x140309c3a | 1946     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c3a#1947 | 0x140309c3a | 1947     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c48#26   | 0x140309c48 | 26       | INT_XOR      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c48#1986 | 0x140309c48 | 1986     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c5e#1404 | 0x140309c5e | 1404     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c62#60   | 0x140309c62 | 60       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c66#63   | 0x140309c66 | 63       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c6e#1527 | 0x140309c6e | 1527     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c72#1408 | 0x140309c72 | 1408     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c72#1409 | 0x140309c72 | 1409     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c77#72   | 0x140309c77 | 72       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c7b#75   | 0x140309c7b | 75       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c7f#1948 | 0x140309c7f | 1948     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#80   | 0x140309c83 | 80       | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309c83#1416 | 0x140309c83 | 1416     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1472 | 0x140309c83 | 1472     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1528 | 0x140309c83 | 1528     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1555 | 0x140309c83 | 1555     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1582 | 0x140309c83 | 1582     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1609 | 0x140309c83 | 1609     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1636 | 0x140309c83 | 1636     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1663 | 0x140309c83 | 1663     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1690 | 0x140309c83 | 1690     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1717 | 0x140309c83 | 1717     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1744 | 0x140309c83 | 1744     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1771 | 0x140309c83 | 1771     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1798 | 0x140309c83 | 1798     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c83#1985 | 0x140309c83 | 1985     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c8f#84   | 0x140309c8f | 84       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c93#87   | 0x140309c93 | 87       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309c9b#1949 | 0x140309c9b | 1949     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309c9f#1950 | 0x140309c9f | 1950     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#94   | 0x140309ca3 | 94       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309ca3#1417 | 0x140309ca3 | 1417     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1473 | 0x140309ca3 | 1473     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1500 | 0x140309ca3 | 1500     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1529 | 0x140309ca3 | 1529     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1556 | 0x140309ca3 | 1556     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1583 | 0x140309ca3 | 1583     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1610 | 0x140309ca3 | 1610     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1637 | 0x140309ca3 | 1637     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1664 | 0x140309ca3 | 1664     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1691 | 0x140309ca3 | 1691     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1718 | 0x140309ca3 | 1718     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1745 | 0x140309ca3 | 1745     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1772 | 0x140309ca3 | 1772     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca3#1799 | 0x140309ca3 | 1799     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca8#95   | 0x140309ca8 | 95       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ca8#1987 | 0x140309ca8 | 1987     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309caf#101  | 0x140309caf | 101      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309caf#1951 | 0x140309caf | 1951     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309cb3#105  | 0x140309cb3 | 105      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cb3#1988 | 0x140309cb3 | 1988     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309cba#1952 | 0x140309cba | 1952     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cbe#1953 | 0x140309cbe | 1953     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#121  | 0x140309cc2 | 121      | CALL         | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309cc2#1418 | 0x140309cc2 | 1418     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1474 | 0x140309cc2 | 1474     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1501 | 0x140309cc2 | 1501     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1530 | 0x140309cc2 | 1530     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1557 | 0x140309cc2 | 1557     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1584 | 0x140309cc2 | 1584     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1611 | 0x140309cc2 | 1611     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1638 | 0x140309cc2 | 1638     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1665 | 0x140309cc2 | 1665     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1692 | 0x140309cc2 | 1692     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1719 | 0x140309cc2 | 1719     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1746 | 0x140309cc2 | 1746     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1773 | 0x140309cc2 | 1773     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1800 | 0x140309cc2 | 1800     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc2#1989 | 0x140309cc2 | 1989     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309cc8#123  | 0x140309cc8 | 123      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cc8#1954 | 0x140309cc8 | 1954     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309cc8#1990 | 0x140309cc8 | 1990     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309ccd#134  | 0x140309ccd | 134      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ccd#135  | 0x140309ccd | 135      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309ccd#1982 | 0x140309ccd | 1982     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309ccf#136  | 0x140309ccf | 136      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ccf#1991 | 0x140309ccf | 1991     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309cd2#138  | 0x140309cd2 | 138      | BRANCH       | true    | member           | [object Object]                                 |                 |
| 0x140309cd2#1981 | 0x140309cd2 | 1981     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309cd7#1051 | 0x140309cd7 | 1051     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cdb#143  | 0x140309cdb | 143      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cdb#1955 | 0x140309cdb | 1955     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309cdb#1992 | 0x140309cdb | 1992     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309ce3#1956 | 0x140309ce3 | 1956     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ce7#1957 | 0x140309ce7 | 1957     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#154  | 0x140309ceb | 154      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309ceb#1419 | 0x140309ceb | 1419     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1475 | 0x140309ceb | 1475     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1502 | 0x140309ceb | 1502     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1531 | 0x140309ceb | 1531     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1558 | 0x140309ceb | 1558     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1585 | 0x140309ceb | 1585     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1612 | 0x140309ceb | 1612     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1639 | 0x140309ceb | 1639     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1666 | 0x140309ceb | 1666     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1693 | 0x140309ceb | 1693     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1720 | 0x140309ceb | 1720     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1747 | 0x140309ceb | 1747     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1774 | 0x140309ceb | 1774     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ceb#1801 | 0x140309ceb | 1801     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cf9#168  | 0x140309cf9 | 168      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309cf9#169  | 0x140309cf9 | 169      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309cfb#171  | 0x140309cfb | 171      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d02#182  | 0x140309d02 | 182      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d09#191  | 0x140309d09 | 191      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309d09#1978 | 0x140309d09 | 1978     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d0b#192  | 0x140309d0b | 192      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d0b#193  | 0x140309d0b | 193      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d0b#1993 | 0x140309d0b | 1993     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d0f#197  | 0x140309d0f | 197      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d12#206  | 0x140309d12 | 206      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d1a#223  | 0x140309d1a | 223      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d1a#225  | 0x140309d1a | 225      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309d20#228  | 0x140309d20 | 228      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#238  | 0x140309d27 | 238      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309d27#1048 | 0x140309d27 | 1048     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1077 | 0x140309d27 | 1077     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1420 | 0x140309d27 | 1420     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1476 | 0x140309d27 | 1476     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1503 | 0x140309d27 | 1503     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1532 | 0x140309d27 | 1532     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1559 | 0x140309d27 | 1559     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1586 | 0x140309d27 | 1586     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1613 | 0x140309d27 | 1613     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1640 | 0x140309d27 | 1640     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1667 | 0x140309d27 | 1667     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1694 | 0x140309d27 | 1694     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1721 | 0x140309d27 | 1721     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1748 | 0x140309d27 | 1748     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1775 | 0x140309d27 | 1775     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d27#1802 | 0x140309d27 | 1802     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1444 | 0x140309d2c | 1444     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1554 | 0x140309d2c | 1554     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1581 | 0x140309d2c | 1581     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1608 | 0x140309d2c | 1608     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1635 | 0x140309d2c | 1635     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1662 | 0x140309d2c | 1662     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1689 | 0x140309d2c | 1689     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1716 | 0x140309d2c | 1716     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1743 | 0x140309d2c | 1743     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1770 | 0x140309d2c | 1770     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1797 | 0x140309d2c | 1797     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d2c#1824 | 0x140309d2c | 1824     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d33#242  | 0x140309d33 | 242      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d37#245  | 0x140309d37 | 245      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d3f#1958 | 0x140309d3f | 1958     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d43#1959 | 0x140309d43 | 1959     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#252  | 0x140309d47 | 252      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309d47#1421 | 0x140309d47 | 1421     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1477 | 0x140309d47 | 1477     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1504 | 0x140309d47 | 1504     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1533 | 0x140309d47 | 1533     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1560 | 0x140309d47 | 1560     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1587 | 0x140309d47 | 1587     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1614 | 0x140309d47 | 1614     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1641 | 0x140309d47 | 1641     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1668 | 0x140309d47 | 1668     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1695 | 0x140309d47 | 1695     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1722 | 0x140309d47 | 1722     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1749 | 0x140309d47 | 1749     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1776 | 0x140309d47 | 1776     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d47#1803 | 0x140309d47 | 1803     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d4c#254  | 0x140309d4c | 254      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d4c#1960 | 0x140309d4c | 1960     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309d4c#1994 | 0x140309d4c | 1994     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d54#260  | 0x140309d54 | 260      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d54#1961 | 0x140309d54 | 1961     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309d58#264  | 0x140309d58 | 264      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d58#1995 | 0x140309d58 | 1995     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d5f#1962 | 0x140309d5f | 1962     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d63#1963 | 0x140309d63 | 1963     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#280  | 0x140309d67 | 280      | CALL         | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309d67#1422 | 0x140309d67 | 1422     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1478 | 0x140309d67 | 1478     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1505 | 0x140309d67 | 1505     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1534 | 0x140309d67 | 1534     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1561 | 0x140309d67 | 1561     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1588 | 0x140309d67 | 1588     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1615 | 0x140309d67 | 1615     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1642 | 0x140309d67 | 1642     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1669 | 0x140309d67 | 1669     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1696 | 0x140309d67 | 1696     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1723 | 0x140309d67 | 1723     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1750 | 0x140309d67 | 1750     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1777 | 0x140309d67 | 1777     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1804 | 0x140309d67 | 1804     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d67#1996 | 0x140309d67 | 1996     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d6d#282  | 0x140309d6d | 282      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d6d#1964 | 0x140309d6d | 1964     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309d6d#1997 | 0x140309d6d | 1997     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d72#293  | 0x140309d72 | 293      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d72#294  | 0x140309d72 | 294      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309d72#1980 | 0x140309d72 | 1980     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d74#295  | 0x140309d74 | 295      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d74#1998 | 0x140309d74 | 1998     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d77#297  | 0x140309d77 | 297      | BRANCH       | true    | member           | [object Object]                                 |                 |
| 0x140309d77#1979 | 0x140309d77 | 1979     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d7c#1050 | 0x140309d7c | 1050     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d80#302  | 0x140309d80 | 302      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d80#1965 | 0x140309d80 | 1965     | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309d80#1999 | 0x140309d80 | 1999     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309d88#1966 | 0x140309d88 | 1966     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d8c#1967 | 0x140309d8c | 1967     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#313  | 0x140309d90 | 313      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309d90#1423 | 0x140309d90 | 1423     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1479 | 0x140309d90 | 1479     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1506 | 0x140309d90 | 1506     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1535 | 0x140309d90 | 1535     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1562 | 0x140309d90 | 1562     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1589 | 0x140309d90 | 1589     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1616 | 0x140309d90 | 1616     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1643 | 0x140309d90 | 1643     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1670 | 0x140309d90 | 1670     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1697 | 0x140309d90 | 1697     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1724 | 0x140309d90 | 1724     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1751 | 0x140309d90 | 1751     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1778 | 0x140309d90 | 1778     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d90#1805 | 0x140309d90 | 1805     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d9e#327  | 0x140309d9e | 327      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309d9e#328  | 0x140309d9e | 328      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309da0#330  | 0x140309da0 | 330      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309da7#341  | 0x140309da7 | 341      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dae#350  | 0x140309dae | 350      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309dae#1976 | 0x140309dae | 1976     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309db0#351  | 0x140309db0 | 351      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309db0#352  | 0x140309db0 | 352      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309db0#2000 | 0x140309db0 | 2000     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309db4#356  | 0x140309db4 | 356      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309db7#365  | 0x140309db7 | 365      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dbf#382  | 0x140309dbf | 382      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dbf#384  | 0x140309dbf | 384      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309dc1#387  | 0x140309dc1 | 387      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#397  | 0x140309dc8 | 397      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309dc8#1041 | 0x140309dc8 | 1041     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1069 | 0x140309dc8 | 1069     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1425 | 0x140309dc8 | 1425     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1481 | 0x140309dc8 | 1481     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1508 | 0x140309dc8 | 1508     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1537 | 0x140309dc8 | 1537     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1564 | 0x140309dc8 | 1564     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1591 | 0x140309dc8 | 1591     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1618 | 0x140309dc8 | 1618     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1645 | 0x140309dc8 | 1645     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1672 | 0x140309dc8 | 1672     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1699 | 0x140309dc8 | 1699     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1726 | 0x140309dc8 | 1726     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dc8#1807 | 0x140309dc8 | 1807     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1437 | 0x140309dcd | 1437     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1491 | 0x140309dcd | 1491     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1518 | 0x140309dcd | 1518     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1547 | 0x140309dcd | 1547     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1574 | 0x140309dcd | 1574     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1601 | 0x140309dcd | 1601     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1628 | 0x140309dcd | 1628     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1655 | 0x140309dcd | 1655     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1682 | 0x140309dcd | 1682     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1709 | 0x140309dcd | 1709     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1736 | 0x140309dcd | 1736     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1817 | 0x140309dcd | 1817     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dcd#1968 | 0x140309dcd | 1968     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#402  | 0x140309dd1 | 402      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309dd1#1426 | 0x140309dd1 | 1426     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1482 | 0x140309dd1 | 1482     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1509 | 0x140309dd1 | 1509     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1538 | 0x140309dd1 | 1538     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1565 | 0x140309dd1 | 1565     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1592 | 0x140309dd1 | 1592     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1619 | 0x140309dd1 | 1619     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1646 | 0x140309dd1 | 1646     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1673 | 0x140309dd1 | 1673     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1700 | 0x140309dd1 | 1700     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1727 | 0x140309dd1 | 1727     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd1#1808 | 0x140309dd1 | 1808     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dd9#1969 | 0x140309dd9 | 1969     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#408  | 0x140309ddd | 408      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309ddd#1427 | 0x140309ddd | 1427     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1483 | 0x140309ddd | 1483     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1510 | 0x140309ddd | 1510     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1539 | 0x140309ddd | 1539     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1566 | 0x140309ddd | 1566     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1593 | 0x140309ddd | 1593     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1620 | 0x140309ddd | 1620     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1647 | 0x140309ddd | 1647     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1674 | 0x140309ddd | 1674     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1701 | 0x140309ddd | 1701     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1728 | 0x140309ddd | 1728     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309ddd#1809 | 0x140309ddd | 1809     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309de7#416  | 0x140309de7 | 416      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dea#421  | 0x140309dea | 421      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309df0#427  | 0x140309df0 | 427      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309df3#436  | 0x140309df3 | 436      | INT_SRIGHT   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309df7#474  | 0x140309df7 | 474      | INT_MULT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dff#477  | 0x140309dff | 477      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309dff#2001 | 0x140309dff | 2001     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e06#486  | 0x140309e06 | 486      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e06#1975 | 0x140309e06 | 1975     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e06#1984 | 0x140309e06 | 1984     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e08#487  | 0x140309e08 | 487      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e08#488  | 0x140309e08 | 488      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e08#2002 | 0x140309e08 | 2002     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e0c#492  | 0x140309e0c | 492      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e0f#501  | 0x140309e0f | 501      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e17#518  | 0x140309e17 | 518      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e17#520  | 0x140309e17 | 520      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e17#1974 | 0x140309e17 | 1974     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e17#1983 | 0x140309e17 | 1983     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e1f#680  | 0x140309e1f | 680      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e1f#1443 | 0x140309e1f | 1443     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1498 | 0x140309e1f | 1498     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1525 | 0x140309e1f | 1525     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1553 | 0x140309e1f | 1553     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1580 | 0x140309e1f | 1580     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1607 | 0x140309e1f | 1607     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1634 | 0x140309e1f | 1634     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1661 | 0x140309e1f | 1661     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1688 | 0x140309e1f | 1688     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1715 | 0x140309e1f | 1715     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1742 | 0x140309e1f | 1742     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e1f#1823 | 0x140309e1f | 1823     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#681  | 0x140309e24 | 681      | CALLOTHER    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#682  | 0x140309e24 | 682      | CALLIND      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e24#1031 | 0x140309e24 | 1031     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1424 | 0x140309e24 | 1424     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1480 | 0x140309e24 | 1480     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1507 | 0x140309e24 | 1507     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1536 | 0x140309e24 | 1536     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1563 | 0x140309e24 | 1563     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1590 | 0x140309e24 | 1590     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1617 | 0x140309e24 | 1617     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1644 | 0x140309e24 | 1644     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1671 | 0x140309e24 | 1671     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1698 | 0x140309e24 | 1698     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1725 | 0x140309e24 | 1725     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1806 | 0x140309e24 | 1806     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#1970 | 0x140309e24 | 1970     | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e24#2003 | 0x140309e24 | 2003     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e29#1013 | 0x140309e29 | 1013     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1084 | 0x140309e29 | 1084     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1442 | 0x140309e29 | 1442     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1496 | 0x140309e29 | 1496     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1523 | 0x140309e29 | 1523     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1552 | 0x140309e29 | 1552     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1579 | 0x140309e29 | 1579     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1606 | 0x140309e29 | 1606     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1633 | 0x140309e29 | 1633     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1660 | 0x140309e29 | 1660     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1687 | 0x140309e29 | 1687     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1714 | 0x140309e29 | 1714     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1741 | 0x140309e29 | 1741     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e29#1822 | 0x140309e29 | 1822     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e2c#532  | 0x140309e2c | 532      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e2c#533  | 0x140309e2c | 533      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309e2c#534  | 0x140309e2c | 534      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e2c#1428 | 0x140309e2c | 1428     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1484 | 0x140309e2c | 1484     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1511 | 0x140309e2c | 1511     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1540 | 0x140309e2c | 1540     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1567 | 0x140309e2c | 1567     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1594 | 0x140309e2c | 1594     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1621 | 0x140309e2c | 1621     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1648 | 0x140309e2c | 1648     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1675 | 0x140309e2c | 1675     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1702 | 0x140309e2c | 1702     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1729 | 0x140309e2c | 1729     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#1810 | 0x140309e2c | 1810     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e2c#2004 | 0x140309e2c | 2004     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e34#1413 | 0x140309e34 | 1413     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e34#1414 | 0x140309e34 | 1414     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e39#544  | 0x140309e39 | 544      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e3d#1081 | 0x140309e3d | 1081     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1439 | 0x140309e3d | 1439     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1493 | 0x140309e3d | 1493     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1520 | 0x140309e3d | 1520     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1549 | 0x140309e3d | 1549     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1576 | 0x140309e3d | 1576     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1603 | 0x140309e3d | 1603     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1630 | 0x140309e3d | 1630     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1657 | 0x140309e3d | 1657     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1684 | 0x140309e3d | 1684     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1711 | 0x140309e3d | 1711     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1738 | 0x140309e3d | 1738     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e3d#1819 | 0x140309e3d | 1819     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e45#558  | 0x140309e45 | 558      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e45#559  | 0x140309e45 | 559      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e45#2005 | 0x140309e45 | 2005     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e47#561  | 0x140309e47 | 561      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e4e#572  | 0x140309e4e | 572      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e55#581  | 0x140309e55 | 581      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e55#1977 | 0x140309e55 | 1977     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e57#582  | 0x140309e57 | 582      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e57#583  | 0x140309e57 | 583      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e57#2006 | 0x140309e57 | 2006     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e5b#587  | 0x140309e5b | 587      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e5e#596  | 0x140309e5e | 596      | INT_SUB      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e66#613  | 0x140309e66 | 613      | INT_LESS     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e66#615  | 0x140309e66 | 615      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e68#618  | 0x140309e68 | 618      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#626  | 0x140309e6f | 626      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e6f#627  | 0x140309e6f | 627      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309e6f#628  | 0x140309e6f | 628      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309e6f#1043 | 0x140309e6f | 1043     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1071 | 0x140309e6f | 1071     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1431 | 0x140309e6f | 1431     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1487 | 0x140309e6f | 1487     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1514 | 0x140309e6f | 1514     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1543 | 0x140309e6f | 1543     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1570 | 0x140309e6f | 1570     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1597 | 0x140309e6f | 1597     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1624 | 0x140309e6f | 1624     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1651 | 0x140309e6f | 1651     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1678 | 0x140309e6f | 1678     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1705 | 0x140309e6f | 1705     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1732 | 0x140309e6f | 1732     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#1813 | 0x140309e6f | 1813     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e6f#2010 | 0x140309e6f | 2010     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e74#629  | 0x140309e74 | 629      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e74#1438 | 0x140309e74 | 1438     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e7e#642  | 0x140309e7e | 642      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x140309e7e#643  | 0x140309e7e | 643      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x140309e7e#2011 | 0x140309e7e | 2011     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e8e#672  | 0x140309e8e | 672      | RETURN       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e8e#1432 | 0x140309e8e | 1432     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e8f#1441 | 0x140309e8f | 1441     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1495 | 0x140309e8f | 1495     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1522 | 0x140309e8f | 1522     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1551 | 0x140309e8f | 1551     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1578 | 0x140309e8f | 1578     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1605 | 0x140309e8f | 1605     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1632 | 0x140309e8f | 1632     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1659 | 0x140309e8f | 1659     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1686 | 0x140309e8f | 1686     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1713 | 0x140309e8f | 1713     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1740 | 0x140309e8f | 1740     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e8f#1821 | 0x140309e8f | 1821     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#674  | 0x140309e94 | 674      | CALLOTHER    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#675  | 0x140309e94 | 675      | CALLIND      | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e94#1429 | 0x140309e94 | 1429     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1485 | 0x140309e94 | 1485     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1512 | 0x140309e94 | 1512     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1541 | 0x140309e94 | 1541     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1568 | 0x140309e94 | 1568     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1595 | 0x140309e94 | 1595     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1622 | 0x140309e94 | 1622     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1649 | 0x140309e94 | 1649     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1676 | 0x140309e94 | 1676     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1703 | 0x140309e94 | 1703     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1730 | 0x140309e94 | 1730     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#1811 | 0x140309e94 | 1811     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e94#2007 | 0x140309e94 | 2007     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e96#676  | 0x140309e96 | 676      | CALLOTHER    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#677  | 0x140309e96 | 677      | CALLIND      | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e96#678  | 0x140309e96 | 678      | RETURN       | true    | member           | [object Object],[object Object]                 |                 |
| 0x140309e96#1430 | 0x140309e96 | 1430     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1433 | 0x140309e96 | 1433     | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e96#1486 | 0x140309e96 | 1486     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1513 | 0x140309e96 | 1513     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1542 | 0x140309e96 | 1542     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1569 | 0x140309e96 | 1569     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1596 | 0x140309e96 | 1596     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1623 | 0x140309e96 | 1623     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1650 | 0x140309e96 | 1650     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1677 | 0x140309e96 | 1677     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1704 | 0x140309e96 | 1704     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1731 | 0x140309e96 | 1731     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#1812 | 0x140309e96 | 1812     | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x140309e96#2008 | 0x140309e96 | 2008     | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x140309e96#2009 | 0x140309e96 | 2009     | CAST         | true    | member           | [object Object]                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x140309c48#1986 | 0x140309c48#26   | 1           |
| 0x140309c3a#1944 | 0x140309c48#1986 | 0           |
| 0x140309c7f#1948 | 0x140309c83#80   | 1           |
| 0x140309c83#1985 | 0x140309c83#1472 | 0           |
| 0x140309c6e#1527 | 0x140309c83#1528 | 0           |
| 0x140309c5e#1404 | 0x140309c83#1555 | 0           |
| 0x140309c62#60   | 0x140309c83#1582 | 0           |
| 0x140309c66#63   | 0x140309c83#1609 | 0           |
| 0x140309c72#1408 | 0x140309c83#1636 | 0           |
| 0x140309c72#1409 | 0x140309c83#1663 | 0           |
| 0x140309c77#72   | 0x140309c83#1690 | 0           |
| 0x140309c7b#75   | 0x140309c83#1717 | 0           |
| 0x140309c48#26   | 0x140309c83#1798 | 0           |
| 0x140309c9f#1950 | 0x140309ca3#94   | 1           |
| 0x140309c9b#1949 | 0x140309ca3#94   | 2           |
| 0x140309c83#1416 | 0x140309ca3#1417 | 0           |
| 0x140309c8f#84   | 0x140309ca3#1473 | 0           |
| 0x140309c93#87   | 0x140309ca3#1500 | 0           |
| 0x140309c83#1528 | 0x140309ca3#1529 | 0           |
| 0x140309c83#1555 | 0x140309ca3#1556 | 0           |
| 0x140309c83#1582 | 0x140309ca3#1583 | 0           |
| 0x140309c83#1609 | 0x140309ca3#1610 | 0           |
| 0x140309c83#1636 | 0x140309ca3#1637 | 0           |
| 0x140309c83#1663 | 0x140309ca3#1664 | 0           |
| 0x140309c83#1690 | 0x140309ca3#1691 | 0           |
| 0x140309c83#1717 | 0x140309ca3#1718 | 0           |
| 0x140309c83#1744 | 0x140309ca3#1745 | 0           |
| 0x140309c83#1771 | 0x140309ca3#1772 | 0           |
| 0x140309c83#1798 | 0x140309ca3#1799 | 0           |
| 0x140309ca8#95   | 0x140309ca8#1987 | 0           |
| 0x140309caf#1951 | 0x140309caf#101  | 1           |
| 0x140309caf#101  | 0x140309cb3#105  | 0           |
| 0x140309cb3#1988 | 0x140309cb3#105  | 1           |
| 0x140309ca8#1987 | 0x140309cb3#1988 | 0           |
| 0x140309cbe#1953 | 0x140309cc2#121  | 1           |
| 0x140309cba#1952 | 0x140309cc2#121  | 2           |
| 0x140309ca3#1417 | 0x140309cc2#1418 | 0           |
| 0x140309ca8#1987 | 0x140309cc2#1474 | 0           |
| 0x140309cb3#105  | 0x140309cc2#1501 | 0           |
| 0x140309ca3#1529 | 0x140309cc2#1530 | 0           |
| 0x140309ca3#1556 | 0x140309cc2#1557 | 0           |
| 0x140309ca3#1583 | 0x140309cc2#1584 | 0           |
| 0x140309ca3#1610 | 0x140309cc2#1611 | 0           |
| 0x140309ca3#1637 | 0x140309cc2#1638 | 0           |
| 0x140309ca3#1664 | 0x140309cc2#1665 | 0           |
| 0x140309ca3#1691 | 0x140309cc2#1692 | 0           |
| 0x140309ca3#1718 | 0x140309cc2#1719 | 0           |
| 0x140309ca3#1745 | 0x140309cc2#1746 | 0           |
| 0x140309ca3#1772 | 0x140309cc2#1773 | 0           |
| 0x140309ca3#1799 | 0x140309cc2#1800 | 0           |
| 0x140309cc2#121  | 0x140309cc2#1989 | 0           |
| 0x140309cc8#1990 | 0x140309cc8#123  | 1           |
| 0x140309cc2#1989 | 0x140309cc8#1954 | 0           |
| 0x140309cc8#1954 | 0x140309cc8#1990 | 0           |
| 0x140309cc8#123  | 0x140309ccd#134  | 1           |
| 0x140309ccd#134  | 0x140309ccd#135  | 1           |
| 0x140309cc2#1989 | 0x140309ccd#1982 | 0           |
| 0x140309ccf#1991 | 0x140309ccf#136  | 1           |
| 0x140309cc2#1989 | 0x140309ccf#1991 | 0           |
| 0x140309ccf#136  | 0x140309cd2#1981 | 0           |
| 0x140309cd2#1981 | 0x140309cd7#1051 | 0           |
| 0x140309ccd#1982 | 0x140309cd7#1051 | 1           |
| 0x140309cdb#1992 | 0x140309cdb#143  | 1           |
| 0x140309cc2#1989 | 0x140309cdb#1955 | 0           |
| 0x140309cdb#1955 | 0x140309cdb#1992 | 0           |
| 0x140309ce7#1957 | 0x140309ceb#154  | 1           |
| 0x140309ce3#1956 | 0x140309ceb#154  | 2           |
| 0x140309cc2#1418 | 0x140309ceb#1419 | 0           |
| 0x140309cd7#1051 | 0x140309ceb#1475 | 0           |
| 0x140309cdb#143  | 0x140309ceb#1502 | 0           |
| 0x140309cc2#1530 | 0x140309ceb#1531 | 0           |
| 0x140309cc2#1557 | 0x140309ceb#1558 | 0           |
| 0x140309cc2#1584 | 0x140309ceb#1585 | 0           |
| 0x140309cc2#1611 | 0x140309ceb#1612 | 0           |
| 0x140309cc2#1638 | 0x140309ceb#1639 | 0           |
| 0x140309cc2#1665 | 0x140309ceb#1666 | 0           |
| 0x140309cc2#1692 | 0x140309ceb#1693 | 0           |
| 0x140309cc2#1719 | 0x140309ceb#1720 | 0           |
| 0x140309cc2#1746 | 0x140309ceb#1747 | 0           |
| 0x140309cc2#1773 | 0x140309ceb#1774 | 0           |
| 0x140309cc2#1800 | 0x140309ceb#1801 | 0           |
| 0x140309ceb#1774 | 0x140309cf9#168  | 0           |
| 0x140309cf9#168  | 0x140309cf9#169  | 1           |
| 0x140309ceb#1774 | 0x140309cfb#171  | 0           |
| 0x140309cfb#171  | 0x140309d02#182  | 0           |
| 0x140309d02#182  | 0x140309d09#191  | 1           |
| 0x140309ceb#1747 | 0x140309d09#1978 | 0           |
| 0x140309ceb#1747 | 0x140309d0b#192  | 0           |
| 0x140309d0b#1993 | 0x140309d0b#193  | 1           |
| 0x140309d0b#192  | 0x140309d0b#1993 | 0           |
| 0x140309ceb#1747 | 0x140309d0f#197  | 0           |
| 0x140309d0b#193  | 0x140309d0f#197  | 1           |
| 0x140309d0f#197  | 0x140309d12#206  | 0           |
| 0x140309d12#206  | 0x140309d1a#223  | 0           |
| 0x140309d1a#223  | 0x140309d1a#225  | 1           |
| 0x140309ceb#1774 | 0x140309d20#228  | 0           |
| 0x140309d27#1048 | 0x140309d27#238  | 1           |
| 0x140309d27#1077 | 0x140309d27#238  | 2           |
| 0x140309d09#1978 | 0x140309d27#1048 | 0           |
| 0x140309d0b#193  | 0x140309d27#1048 | 1           |
| 0x140309cfb#171  | 0x140309d27#1077 | 0           |
| 0x140309d20#228  | 0x140309d27#1077 | 1           |
| 0x140309ceb#1419 | 0x140309d27#1420 | 0           |
| 0x140309ceb#1475 | 0x140309d27#1476 | 0           |
| 0x140309ceb#1502 | 0x140309d27#1503 | 0           |
| 0x140309ceb#1531 | 0x140309d27#1532 | 0           |
| 0x140309ceb#1558 | 0x140309d27#1559 | 0           |
| 0x140309ceb#1585 | 0x140309d27#1586 | 0           |
| 0x140309ceb#1612 | 0x140309d27#1613 | 0           |
| 0x140309ceb#1639 | 0x140309d27#1640 | 0           |
| 0x140309ceb#1666 | 0x140309d27#1667 | 0           |
| 0x140309ceb#1693 | 0x140309d27#1694 | 0           |
| 0x140309ceb#1720 | 0x140309d27#1721 | 0           |
| 0x140309ceb#1747 | 0x140309d27#1748 | 0           |
| 0x140309ceb#1774 | 0x140309d27#1775 | 0           |
| 0x140309ceb#1801 | 0x140309d27#1802 | 0           |
| 0x140309ceb#1419 | 0x140309d2c#1444 | 0           |
| 0x140309d27#1420 | 0x140309d2c#1444 | 1           |
| 0x140309ceb#1531 | 0x140309d2c#1554 | 0           |
| 0x140309d27#1532 | 0x140309d2c#1554 | 1           |
| 0x140309ceb#1558 | 0x140309d2c#1581 | 0           |
| 0x140309d27#1559 | 0x140309d2c#1581 | 1           |
| 0x140309ceb#1585 | 0x140309d2c#1608 | 0           |
| 0x140309d27#1586 | 0x140309d2c#1608 | 1           |
| 0x140309ceb#1612 | 0x140309d2c#1635 | 0           |
| 0x140309d27#1613 | 0x140309d2c#1635 | 1           |
| 0x140309ceb#1639 | 0x140309d2c#1662 | 0           |
| 0x140309d27#1640 | 0x140309d2c#1662 | 1           |
| 0x140309ceb#1666 | 0x140309d2c#1689 | 0           |
| 0x140309d27#1667 | 0x140309d2c#1689 | 1           |
| 0x140309ceb#1693 | 0x140309d2c#1716 | 0           |
| 0x140309d27#1694 | 0x140309d2c#1716 | 1           |
| 0x140309ceb#1720 | 0x140309d2c#1743 | 0           |
| 0x140309d27#1721 | 0x140309d2c#1743 | 1           |
| 0x140309ceb#1747 | 0x140309d2c#1770 | 0           |
| 0x140309d27#1748 | 0x140309d2c#1770 | 1           |
| 0x140309ceb#1774 | 0x140309d2c#1797 | 0           |
| 0x140309d27#1775 | 0x140309d2c#1797 | 1           |
| 0x140309ceb#1801 | 0x140309d2c#1824 | 0           |
| 0x140309d27#1802 | 0x140309d2c#1824 | 1           |
| 0x140309d43#1959 | 0x140309d47#252  | 1           |
| 0x140309d3f#1958 | 0x140309d47#252  | 2           |
| 0x140309d2c#1444 | 0x140309d47#1421 | 0           |
| 0x140309d33#242  | 0x140309d47#1477 | 0           |
| 0x140309d37#245  | 0x140309d47#1504 | 0           |
| 0x140309d2c#1554 | 0x140309d47#1533 | 0           |
| 0x140309d2c#1581 | 0x140309d47#1560 | 0           |
| 0x140309d2c#1608 | 0x140309d47#1587 | 0           |
| 0x140309d2c#1635 | 0x140309d47#1614 | 0           |
| 0x140309d2c#1662 | 0x140309d47#1641 | 0           |
| 0x140309d2c#1689 | 0x140309d47#1668 | 0           |
| 0x140309d2c#1716 | 0x140309d47#1695 | 0           |
| 0x140309d2c#1743 | 0x140309d47#1722 | 0           |
| 0x140309d2c#1770 | 0x140309d47#1749 | 0           |
| 0x140309d2c#1797 | 0x140309d47#1776 | 0           |
| 0x140309d2c#1824 | 0x140309d47#1803 | 0           |
| 0x140309d4c#1960 | 0x140309d4c#254  | 1           |
| 0x140309d4c#254  | 0x140309d4c#1994 | 0           |
| 0x140309d54#1961 | 0x140309d54#260  | 1           |
| 0x140309d54#260  | 0x140309d58#264  | 0           |
| 0x140309d58#1995 | 0x140309d58#264  | 1           |
| 0x140309d4c#1994 | 0x140309d58#1995 | 0           |
| 0x140309d63#1963 | 0x140309d67#280  | 1           |
| 0x140309d5f#1962 | 0x140309d67#280  | 2           |
| 0x140309d47#1421 | 0x140309d67#1422 | 0           |
| 0x140309d4c#1994 | 0x140309d67#1478 | 0           |
| 0x140309d58#264  | 0x140309d67#1505 | 0           |
| 0x140309d47#1533 | 0x140309d67#1534 | 0           |
| 0x140309d47#1560 | 0x140309d67#1561 | 0           |
| 0x140309d47#1587 | 0x140309d67#1588 | 0           |
| 0x140309d47#1614 | 0x140309d67#1615 | 0           |
| 0x140309d47#1641 | 0x140309d67#1642 | 0           |
| 0x140309d47#1668 | 0x140309d67#1669 | 0           |
| 0x140309d47#1695 | 0x140309d67#1696 | 0           |
| 0x140309d47#1722 | 0x140309d67#1723 | 0           |
| 0x140309d47#1749 | 0x140309d67#1750 | 0           |
| 0x140309d47#1776 | 0x140309d67#1777 | 0           |
| 0x140309d47#1803 | 0x140309d67#1804 | 0           |
| 0x140309d67#280  | 0x140309d67#1996 | 0           |
| 0x140309d6d#1997 | 0x140309d6d#282  | 1           |
| 0x140309d67#1996 | 0x140309d6d#1964 | 0           |
| 0x140309d6d#1964 | 0x140309d6d#1997 | 0           |
| 0x140309d6d#282  | 0x140309d72#293  | 1           |
| 0x140309d72#293  | 0x140309d72#294  | 1           |
| 0x140309d67#1996 | 0x140309d72#1980 | 0           |
| 0x140309d74#1998 | 0x140309d74#295  | 1           |
| 0x140309d67#1996 | 0x140309d74#1998 | 0           |
| 0x140309d74#295  | 0x140309d77#1979 | 0           |
| 0x140309d77#1979 | 0x140309d7c#1050 | 0           |
| 0x140309d72#1980 | 0x140309d7c#1050 | 1           |
| 0x140309d80#1999 | 0x140309d80#302  | 1           |
| 0x140309d67#1996 | 0x140309d80#1965 | 0           |
| 0x140309d80#1965 | 0x140309d80#1999 | 0           |
| 0x140309d8c#1967 | 0x140309d90#313  | 1           |
| 0x140309d88#1966 | 0x140309d90#313  | 2           |
| 0x140309d67#1422 | 0x140309d90#1423 | 0           |
| 0x140309d7c#1050 | 0x140309d90#1479 | 0           |
| 0x140309d80#302  | 0x140309d90#1506 | 0           |
| 0x140309d67#1534 | 0x140309d90#1535 | 0           |
| 0x140309d67#1561 | 0x140309d90#1562 | 0           |
| 0x140309d67#1588 | 0x140309d90#1589 | 0           |
| 0x140309d67#1615 | 0x140309d90#1616 | 0           |
| 0x140309d67#1642 | 0x140309d90#1643 | 0           |
| 0x140309d67#1669 | 0x140309d90#1670 | 0           |
| 0x140309d67#1696 | 0x140309d90#1697 | 0           |
| 0x140309d67#1723 | 0x140309d90#1724 | 0           |
| 0x140309d67#1750 | 0x140309d90#1751 | 0           |
| 0x140309d67#1777 | 0x140309d90#1778 | 0           |
| 0x140309d67#1804 | 0x140309d90#1805 | 0           |
| 0x140309d90#1778 | 0x140309d9e#327  | 1           |
| 0x140309d9e#327  | 0x140309d9e#328  | 1           |
| 0x140309d90#1778 | 0x140309da0#330  | 0           |
| 0x140309da0#330  | 0x140309da7#341  | 1           |
| 0x140309da7#341  | 0x140309dae#350  | 1           |
| 0x140309d90#1751 | 0x140309dae#1976 | 0           |
| 0x140309d90#1751 | 0x140309db0#351  | 0           |
| 0x140309db0#2000 | 0x140309db0#352  | 1           |
| 0x140309db0#351  | 0x140309db0#2000 | 0           |
| 0x140309d90#1751 | 0x140309db4#356  | 0           |
| 0x140309db0#352  | 0x140309db4#356  | 1           |
| 0x140309db4#356  | 0x140309db7#365  | 0           |
| 0x140309db7#365  | 0x140309dbf#382  | 1           |
| 0x140309dbf#382  | 0x140309dbf#384  | 1           |
| 0x140309d90#1778 | 0x140309dc1#387  | 0           |
| 0x140309dc8#1041 | 0x140309dc8#397  | 1           |
| 0x140309dc8#1069 | 0x140309dc8#397  | 2           |
| 0x140309dae#1976 | 0x140309dc8#1041 | 0           |
| 0x140309db0#352  | 0x140309dc8#1041 | 1           |
| 0x140309da0#330  | 0x140309dc8#1069 | 0           |
| 0x140309dc1#387  | 0x140309dc8#1069 | 1           |
| 0x140309d90#1423 | 0x140309dc8#1425 | 0           |
| 0x140309d90#1479 | 0x140309dc8#1481 | 0           |
| 0x140309d90#1506 | 0x140309dc8#1508 | 0           |
| 0x140309d90#1535 | 0x140309dc8#1537 | 0           |
| 0x140309d90#1562 | 0x140309dc8#1564 | 0           |
| 0x140309d90#1589 | 0x140309dc8#1591 | 0           |
| 0x140309d90#1616 | 0x140309dc8#1618 | 0           |
| 0x140309d90#1643 | 0x140309dc8#1645 | 0           |
| 0x140309d90#1670 | 0x140309dc8#1672 | 0           |
| 0x140309d90#1697 | 0x140309dc8#1699 | 0           |
| 0x140309d90#1724 | 0x140309dc8#1726 | 0           |
| 0x140309d90#1805 | 0x140309dc8#1807 | 0           |
| 0x140309d90#1423 | 0x140309dcd#1437 | 0           |
| 0x140309dc8#1425 | 0x140309dcd#1437 | 1           |
| 0x140309d90#1479 | 0x140309dcd#1491 | 0           |
| 0x140309dc8#1481 | 0x140309dcd#1491 | 1           |
| 0x140309d90#1506 | 0x140309dcd#1518 | 0           |
| 0x140309dc8#1508 | 0x140309dcd#1518 | 1           |
| 0x140309d90#1535 | 0x140309dcd#1547 | 0           |
| 0x140309dc8#1537 | 0x140309dcd#1547 | 1           |
| 0x140309d90#1562 | 0x140309dcd#1574 | 0           |
| 0x140309dc8#1564 | 0x140309dcd#1574 | 1           |
| 0x140309d90#1589 | 0x140309dcd#1601 | 0           |
| 0x140309dc8#1591 | 0x140309dcd#1601 | 1           |
| 0x140309d90#1616 | 0x140309dcd#1628 | 0           |
| 0x140309dc8#1618 | 0x140309dcd#1628 | 1           |
| 0x140309d90#1643 | 0x140309dcd#1655 | 0           |
| 0x140309dc8#1645 | 0x140309dcd#1655 | 1           |
| 0x140309d90#1670 | 0x140309dcd#1682 | 0           |
| 0x140309dc8#1672 | 0x140309dcd#1682 | 1           |
| 0x140309d90#1697 | 0x140309dcd#1709 | 0           |
| 0x140309dc8#1699 | 0x140309dcd#1709 | 1           |
| 0x140309d90#1724 | 0x140309dcd#1736 | 0           |
| 0x140309dc8#1726 | 0x140309dcd#1736 | 1           |
| 0x140309d90#1805 | 0x140309dcd#1817 | 0           |
| 0x140309dc8#1807 | 0x140309dcd#1817 | 1           |
| 0x140309dcd#1968 | 0x140309dd1#402  | 1           |
| 0x140309dcd#1437 | 0x140309dd1#1426 | 0           |
| 0x140309dcd#1491 | 0x140309dd1#1482 | 0           |
| 0x140309dcd#1518 | 0x140309dd1#1509 | 0           |
| 0x140309dcd#1547 | 0x140309dd1#1538 | 0           |
| 0x140309dcd#1574 | 0x140309dd1#1565 | 0           |
| 0x140309dcd#1601 | 0x140309dd1#1592 | 0           |
| 0x140309dcd#1628 | 0x140309dd1#1619 | 0           |
| 0x140309dcd#1655 | 0x140309dd1#1646 | 0           |
| 0x140309dcd#1682 | 0x140309dd1#1673 | 0           |
| 0x140309dcd#1709 | 0x140309dd1#1700 | 0           |
| 0x140309dcd#1736 | 0x140309dd1#1727 | 0           |
| 0x140309dcd#1817 | 0x140309dd1#1808 | 0           |
| 0x140309dd9#1969 | 0x140309ddd#408  | 1           |
| 0x140309dd1#1426 | 0x140309ddd#1427 | 0           |
| 0x140309dd1#1482 | 0x140309ddd#1483 | 0           |
| 0x140309dd1#1509 | 0x140309ddd#1510 | 0           |
| 0x140309dd1#1538 | 0x140309ddd#1539 | 0           |
| 0x140309dd1#1565 | 0x140309ddd#1566 | 0           |
| 0x140309dd1#1592 | 0x140309ddd#1593 | 0           |
| 0x140309dd1#1619 | 0x140309ddd#1620 | 0           |
| 0x140309dd1#1646 | 0x140309ddd#1647 | 0           |
| 0x140309dd1#1673 | 0x140309ddd#1674 | 0           |
| 0x140309dd1#1700 | 0x140309ddd#1701 | 0           |
| 0x140309dd1#1727 | 0x140309ddd#1728 | 0           |
| 0x140309dd1#1808 | 0x140309ddd#1809 | 0           |
| 0x140309ddd#1647 | 0x140309de7#416  | 0           |
| 0x140309de7#416  | 0x140309dea#421  | 1           |
| 0x140309ddd#1701 | 0x140309df0#427  | 0           |
| 0x140309ddd#1647 | 0x140309df0#427  | 1           |
| 0x140309df0#427  | 0x140309df3#436  | 0           |
| 0x140309df3#436  | 0x140309df7#474  | 0           |
| 0x140309dff#2001 | 0x140309dff#477  | 1           |
| 0x140309df7#474  | 0x140309dff#2001 | 0           |
| 0x140309dff#477  | 0x140309e06#486  | 1           |
| 0x140309ddd#1647 | 0x140309e06#1975 | 0           |
| 0x140309c3a#1945 | 0x140309e06#1984 | 0           |
| 0x140309ddd#1647 | 0x140309e08#487  | 0           |
| 0x140309e08#2002 | 0x140309e08#488  | 1           |
| 0x140309e08#487  | 0x140309e08#2002 | 0           |
| 0x140309ddd#1647 | 0x140309e0c#492  | 0           |
| 0x140309e08#488  | 0x140309e0c#492  | 1           |
| 0x140309e0c#492  | 0x140309e0f#501  | 0           |
| 0x140309e0f#501  | 0x140309e17#518  | 1           |
| 0x140309e17#518  | 0x140309e17#520  | 1           |
| 0x140309e08#488  | 0x140309e17#1974 | 0           |
| 0x140309c3a#1946 | 0x140309e17#1983 | 0           |
| 0x140309ceb#1419 | 0x140309e1f#1443 | 0           |
| 0x140309d90#1423 | 0x140309e1f#1443 | 1           |
| 0x140309ceb#1475 | 0x140309e1f#1498 | 0           |
| 0x140309d90#1479 | 0x140309e1f#1498 | 1           |
| 0x140309ceb#1502 | 0x140309e1f#1525 | 0           |
| 0x140309d90#1506 | 0x140309e1f#1525 | 1           |
| 0x140309ceb#1531 | 0x140309e1f#1553 | 0           |
| 0x140309d90#1535 | 0x140309e1f#1553 | 1           |
| 0x140309ceb#1558 | 0x140309e1f#1580 | 0           |
| 0x140309d90#1562 | 0x140309e1f#1580 | 1           |
| 0x140309ceb#1585 | 0x140309e1f#1607 | 0           |
| 0x140309d90#1589 | 0x140309e1f#1607 | 1           |
| 0x140309ceb#1612 | 0x140309e1f#1634 | 0           |
| 0x140309d90#1616 | 0x140309e1f#1634 | 1           |
| 0x140309ceb#1639 | 0x140309e1f#1661 | 0           |
| 0x140309d90#1643 | 0x140309e1f#1661 | 1           |
| 0x140309ceb#1666 | 0x140309e1f#1688 | 0           |
| 0x140309d90#1670 | 0x140309e1f#1688 | 1           |
| 0x140309ceb#1693 | 0x140309e1f#1715 | 0           |
| 0x140309d90#1697 | 0x140309e1f#1715 | 1           |
| 0x140309ceb#1720 | 0x140309e1f#1742 | 0           |
| 0x140309d90#1724 | 0x140309e1f#1742 | 1           |
| 0x140309ceb#1801 | 0x140309e1f#1823 | 0           |
| 0x140309d90#1805 | 0x140309e1f#1823 | 1           |
| 0x140309e24#2003 | 0x140309e24#682  | 0           |
| 0x140309e1f#680  | 0x140309e24#1031 | 0           |
| 0x140309e1f#1443 | 0x140309e24#1424 | 0           |
| 0x140309e1f#1498 | 0x140309e24#1480 | 0           |
| 0x140309e1f#1525 | 0x140309e24#1507 | 0           |
| 0x140309e1f#1553 | 0x140309e24#1536 | 0           |
| 0x140309e1f#1580 | 0x140309e24#1563 | 0           |
| 0x140309e1f#1607 | 0x140309e24#1590 | 0           |
| 0x140309e1f#1634 | 0x140309e24#1617 | 0           |
| 0x140309e1f#1661 | 0x140309e24#1644 | 0           |
| 0x140309e1f#1688 | 0x140309e24#1671 | 0           |
| 0x140309e1f#1715 | 0x140309e24#1698 | 0           |
| 0x140309e1f#1742 | 0x140309e24#1725 | 0           |
| 0x140309e1f#1823 | 0x140309e24#1806 | 0           |
| 0x140309e24#681  | 0x140309e24#2003 | 0           |
| 0x140309e17#1974 | 0x140309e29#1013 | 0           |
| 0x140309e06#1975 | 0x140309e29#1013 | 1           |
| 0x140309e24#1031 | 0x140309e29#1013 | 2           |
| 0x140309e17#1983 | 0x140309e29#1084 | 0           |
| 0x140309e06#1984 | 0x140309e29#1084 | 1           |
| 0x140309e24#1970 | 0x140309e29#1084 | 2           |
| 0x140309ddd#1427 | 0x140309e29#1442 | 0           |
| 0x140309ddd#1427 | 0x140309e29#1442 | 1           |
| 0x140309e24#1424 | 0x140309e29#1442 | 2           |
| 0x140309ddd#1483 | 0x140309e29#1496 | 0           |
| 0x140309ddd#1483 | 0x140309e29#1496 | 1           |
| 0x140309e24#1480 | 0x140309e29#1496 | 2           |
| 0x140309ddd#1510 | 0x140309e29#1523 | 0           |
| 0x140309ddd#1510 | 0x140309e29#1523 | 1           |
| 0x140309e24#1507 | 0x140309e29#1523 | 2           |
| 0x140309ddd#1539 | 0x140309e29#1552 | 0           |
| 0x140309ddd#1539 | 0x140309e29#1552 | 1           |
| 0x140309e24#1536 | 0x140309e29#1552 | 2           |
| 0x140309ddd#1566 | 0x140309e29#1579 | 0           |
| 0x140309ddd#1566 | 0x140309e29#1579 | 1           |
| 0x140309e24#1563 | 0x140309e29#1579 | 2           |
| 0x140309ddd#1593 | 0x140309e29#1606 | 0           |
| 0x140309ddd#1593 | 0x140309e29#1606 | 1           |
| 0x140309e24#1590 | 0x140309e29#1606 | 2           |
| 0x140309ddd#1620 | 0x140309e29#1633 | 0           |
| 0x140309ddd#1620 | 0x140309e29#1633 | 1           |
| 0x140309e24#1617 | 0x140309e29#1633 | 2           |
| 0x140309ddd#1647 | 0x140309e29#1660 | 0           |
| 0x140309ddd#1647 | 0x140309e29#1660 | 1           |
| 0x140309e24#1644 | 0x140309e29#1660 | 2           |
| 0x140309ddd#1674 | 0x140309e29#1687 | 0           |
| 0x140309ddd#1674 | 0x140309e29#1687 | 1           |
| 0x140309e24#1671 | 0x140309e29#1687 | 2           |
| 0x140309ddd#1701 | 0x140309e29#1714 | 0           |
| 0x140309ddd#1701 | 0x140309e29#1714 | 1           |
| 0x140309e24#1698 | 0x140309e29#1714 | 2           |
| 0x140309ddd#1728 | 0x140309e29#1741 | 0           |
| 0x140309ddd#1728 | 0x140309e29#1741 | 1           |
| 0x140309e24#1725 | 0x140309e29#1741 | 2           |
| 0x140309ddd#1809 | 0x140309e29#1822 | 0           |
| 0x140309ddd#1809 | 0x140309e29#1822 | 1           |
| 0x140309e24#1806 | 0x140309e29#1822 | 2           |
| 0x140309e29#1084 | 0x140309e2c#532  | 0           |
| 0x140309e2c#2004 | 0x140309e2c#533  | 1           |
| 0x140309e29#1013 | 0x140309e2c#534  | 1           |
| 0x140309e29#1442 | 0x140309e2c#1428 | 0           |
| 0x140309e29#1496 | 0x140309e2c#1484 | 0           |
| 0x140309e29#1523 | 0x140309e2c#1511 | 0           |
| 0x140309e29#1552 | 0x140309e2c#1540 | 0           |
| 0x140309e29#1579 | 0x140309e2c#1567 | 0           |
| 0x140309e29#1606 | 0x140309e2c#1594 | 0           |
| 0x140309e29#1633 | 0x140309e2c#1621 | 0           |
| 0x140309e29#1660 | 0x140309e2c#1648 | 0           |
| 0x140309e29#1687 | 0x140309e2c#1675 | 0           |
| 0x140309e29#1714 | 0x140309e2c#1702 | 0           |
| 0x140309e29#1741 | 0x140309e2c#1729 | 0           |
| 0x140309e29#1822 | 0x140309e2c#1810 | 0           |
| 0x140309e2c#532  | 0x140309e2c#2004 | 0           |
| 0x140309c3a#1947 | 0x140309e3d#1081 | 0           |
| 0x140309e29#1084 | 0x140309e3d#1081 | 1           |
| 0x140309ddd#1427 | 0x140309e3d#1439 | 0           |
| 0x140309e2c#1428 | 0x140309e3d#1439 | 1           |
| 0x140309ddd#1483 | 0x140309e3d#1493 | 0           |
| 0x140309e2c#1484 | 0x140309e3d#1493 | 1           |
| 0x140309ddd#1510 | 0x140309e3d#1520 | 0           |
| 0x140309e2c#1511 | 0x140309e3d#1520 | 1           |
| 0x140309ddd#1539 | 0x140309e3d#1549 | 0           |
| 0x140309e2c#1540 | 0x140309e3d#1549 | 1           |
| 0x140309ddd#1566 | 0x140309e3d#1576 | 0           |
| 0x140309e2c#1567 | 0x140309e3d#1576 | 1           |
| 0x140309ddd#1593 | 0x140309e3d#1603 | 0           |
| 0x140309e2c#1594 | 0x140309e3d#1603 | 1           |
| 0x140309ddd#1620 | 0x140309e3d#1630 | 0           |
| 0x140309e2c#1621 | 0x140309e3d#1630 | 1           |
| 0x140309ddd#1647 | 0x140309e3d#1657 | 0           |
| 0x140309e34#1413 | 0x140309e3d#1657 | 1           |
| 0x140309ddd#1674 | 0x140309e3d#1684 | 0           |
| 0x140309e34#1414 | 0x140309e3d#1684 | 1           |
| 0x140309ddd#1701 | 0x140309e3d#1711 | 0           |
| 0x140309e39#544  | 0x140309e3d#1711 | 1           |
| 0x140309ddd#1728 | 0x140309e3d#1738 | 0           |
| 0x140309e2c#1729 | 0x140309e3d#1738 | 1           |
| 0x140309ddd#1809 | 0x140309e3d#1819 | 0           |
| 0x140309e2c#1810 | 0x140309e3d#1819 | 1           |
| 0x140309e45#2005 | 0x140309e45#558  | 1           |
| 0x140309e45#558  | 0x140309e45#559  | 1           |
| 0x140309e3d#1630 | 0x140309e45#2005 | 0           |
| 0x140309e3d#1630 | 0x140309e47#561  | 0           |
| 0x140309e47#561  | 0x140309e4e#572  | 1           |
| 0x140309e4e#572  | 0x140309e55#581  | 1           |
| 0x140309e3d#1549 | 0x140309e55#1977 | 0           |
| 0x140309e3d#1549 | 0x140309e57#582  | 0           |
| 0x140309e57#2006 | 0x140309e57#583  | 1           |
| 0x140309e57#582  | 0x140309e57#2006 | 0           |
| 0x140309e3d#1549 | 0x140309e5b#587  | 0           |
| 0x140309e57#583  | 0x140309e5b#587  | 1           |
| 0x140309e5b#587  | 0x140309e5e#596  | 0           |
| 0x140309e5e#596  | 0x140309e66#613  | 1           |
| 0x140309e66#613  | 0x140309e66#615  | 1           |
| 0x140309e3d#1630 | 0x140309e68#618  | 0           |
| 0x140309e3d#1081 | 0x140309e6f#626  | 0           |
| 0x140309e6f#2010 | 0x140309e6f#627  | 1           |
| 0x140309e6f#1043 | 0x140309e6f#628  | 1           |
| 0x140309e6f#1071 | 0x140309e6f#628  | 2           |
| 0x140309e55#1977 | 0x140309e6f#1043 | 0           |
| 0x140309e57#583  | 0x140309e6f#1043 | 1           |
| 0x140309e47#561  | 0x140309e6f#1071 | 0           |
| 0x140309e68#618  | 0x140309e6f#1071 | 1           |
| 0x140309e3d#1439 | 0x140309e6f#1431 | 0           |
| 0x140309e3d#1493 | 0x140309e6f#1487 | 0           |
| 0x140309e3d#1520 | 0x140309e6f#1514 | 0           |
| 0x140309e3d#1549 | 0x140309e6f#1543 | 0           |
| 0x140309e3d#1576 | 0x140309e6f#1570 | 0           |
| 0x140309e3d#1603 | 0x140309e6f#1597 | 0           |
| 0x140309e3d#1630 | 0x140309e6f#1624 | 0           |
| 0x140309e3d#1657 | 0x140309e6f#1651 | 0           |
| 0x140309e3d#1684 | 0x140309e6f#1678 | 0           |
| 0x140309e3d#1711 | 0x140309e6f#1705 | 0           |
| 0x140309e3d#1738 | 0x140309e6f#1732 | 0           |
| 0x140309e3d#1819 | 0x140309e6f#1813 | 0           |
| 0x140309e6f#626  | 0x140309e6f#2010 | 0           |
| 0x140309e3d#1439 | 0x140309e74#1438 | 0           |
| 0x140309e6f#1431 | 0x140309e74#1438 | 1           |
| 0x140309e3d#1081 | 0x140309e7e#642  | 0           |
| 0x140309e7e#2011 | 0x140309e7e#643  | 1           |
| 0x140309e7e#642  | 0x140309e7e#2011 | 0           |
| 0x140309e74#629  | 0x140309e8e#672  | 1           |
| 0x140309e74#1438 | 0x140309e8e#1432 | 0           |
| 0x140309ddd#1427 | 0x140309e8f#1441 | 0           |
| 0x140309e3d#1439 | 0x140309e8f#1441 | 1           |
| 0x140309ddd#1483 | 0x140309e8f#1495 | 0           |
| 0x140309e3d#1493 | 0x140309e8f#1495 | 1           |
| 0x140309ddd#1510 | 0x140309e8f#1522 | 0           |
| 0x140309e3d#1520 | 0x140309e8f#1522 | 1           |
| 0x140309ddd#1539 | 0x140309e8f#1551 | 0           |
| 0x140309e3d#1549 | 0x140309e8f#1551 | 1           |
| 0x140309ddd#1566 | 0x140309e8f#1578 | 0           |
| 0x140309e3d#1576 | 0x140309e8f#1578 | 1           |
| 0x140309ddd#1593 | 0x140309e8f#1605 | 0           |
| 0x140309e3d#1603 | 0x140309e8f#1605 | 1           |
| 0x140309ddd#1620 | 0x140309e8f#1632 | 0           |
| 0x140309e3d#1630 | 0x140309e8f#1632 | 1           |
| 0x140309ddd#1647 | 0x140309e8f#1659 | 0           |
| 0x140309e3d#1657 | 0x140309e8f#1659 | 1           |
| 0x140309ddd#1674 | 0x140309e8f#1686 | 0           |
| 0x140309e3d#1684 | 0x140309e8f#1686 | 1           |
| 0x140309ddd#1701 | 0x140309e8f#1713 | 0           |
| 0x140309e3d#1711 | 0x140309e8f#1713 | 1           |
| 0x140309ddd#1728 | 0x140309e8f#1740 | 0           |
| 0x140309e3d#1738 | 0x140309e8f#1740 | 1           |
| 0x140309ddd#1809 | 0x140309e8f#1821 | 0           |
| 0x140309e3d#1819 | 0x140309e8f#1821 | 1           |
| 0x140309e94#2007 | 0x140309e94#675  | 0           |
| 0x140309e8f#1441 | 0x140309e94#1429 | 0           |
| 0x140309e8f#1495 | 0x140309e94#1485 | 0           |
| 0x140309e8f#1522 | 0x140309e94#1512 | 0           |
| 0x140309e8f#1551 | 0x140309e94#1541 | 0           |
| 0x140309e8f#1578 | 0x140309e94#1568 | 0           |
| 0x140309e8f#1605 | 0x140309e94#1595 | 0           |
| 0x140309e8f#1632 | 0x140309e94#1622 | 0           |
| 0x140309e8f#1659 | 0x140309e94#1649 | 0           |
| 0x140309e8f#1686 | 0x140309e94#1676 | 0           |
| 0x140309e8f#1713 | 0x140309e94#1703 | 0           |
| 0x140309e8f#1740 | 0x140309e94#1730 | 0           |
| 0x140309e8f#1821 | 0x140309e94#1811 | 0           |
| 0x140309e94#674  | 0x140309e94#2007 | 0           |
| 0x140309e96#2008 | 0x140309e96#677  | 0           |
| 0x140309e96#2009 | 0x140309e96#678  | 1           |
| 0x140309e94#1429 | 0x140309e96#1430 | 0           |
| 0x140309e96#1430 | 0x140309e96#1433 | 0           |
| 0x140309e94#1485 | 0x140309e96#1486 | 0           |
| 0x140309e94#1512 | 0x140309e96#1513 | 0           |
| 0x140309e94#1541 | 0x140309e96#1542 | 0           |
| 0x140309e94#1568 | 0x140309e96#1569 | 0           |
| 0x140309e94#1595 | 0x140309e96#1596 | 0           |
| 0x140309e94#1622 | 0x140309e96#1623 | 0           |
| 0x140309e94#1649 | 0x140309e96#1650 | 0           |
| 0x140309e94#1676 | 0x140309e96#1677 | 0           |
| 0x140309e94#1703 | 0x140309e96#1704 | 0           |
| 0x140309e94#1730 | 0x140309e96#1731 | 0           |
| 0x140309e94#1811 | 0x140309e96#1812 | 0           |
| 0x140309e96#676  | 0x140309e96#2008 | 0           |
| 0x140309e96#677  | 0x140309e96#2009 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x140309c83#80  | direct_call        | 0             |             |
| 0x140309ca3#94  | direct_call        | 0             |             |
| 0x140309ca8#95  | memory_read        | 1             |             |
| 0x140309caf#101 | memory_read        | 1             |             |
| 0x140309cc2#121 | direct_call        | 0             |             |
| 0x140309cc8#123 | memory_read        | 1             |             |
| 0x140309ccd#135 | conditional_branch |               | 1           |
| 0x140309ccf#136 | memory_read        | 1             |             |
| 0x140309cdb#143 | memory_read        | 1             |             |
| 0x140309ceb#154 | direct_call        | 0             |             |
| 0x140309cf9#169 | conditional_branch |               | 1           |
| 0x140309d09#191 | conditional_branch |               | 1           |
| 0x140309d0b#193 | memory_read        | 1             |             |
| 0x140309d1a#225 | conditional_branch |               | 1           |
| 0x140309d27#238 | direct_call        | 0             |             |
| 0x140309d47#252 | direct_call        | 0             |             |
| 0x140309d4c#254 | memory_read        | 1             |             |
| 0x140309d54#260 | memory_read        | 1             |             |
| 0x140309d67#280 | direct_call        | 0             |             |
| 0x140309d6d#282 | memory_read        | 1             |             |
| 0x140309d72#294 | conditional_branch |               | 1           |
| 0x140309d74#295 | memory_read        | 1             |             |
| 0x140309d80#302 | memory_read        | 1             |             |
| 0x140309d90#313 | direct_call        | 0             |             |
| 0x140309d9e#328 | conditional_branch |               | 1           |
| 0x140309dae#350 | conditional_branch |               | 1           |
| 0x140309db0#352 | memory_read        | 1             |             |
| 0x140309dbf#384 | conditional_branch |               | 1           |
| 0x140309dc8#397 | direct_call        | 0             |             |
| 0x140309dd1#402 | direct_call        | 0             |             |
| 0x140309ddd#408 | direct_call        | 0             |             |
| 0x140309dea#421 | conditional_branch |               | 1           |
| 0x140309e06#486 | conditional_branch |               | 1           |
| 0x140309e08#488 | memory_read        | 1             |             |
| 0x140309e17#520 | conditional_branch |               | 1           |
| 0x140309e24#682 | indirect_call      | 0             |             |
| 0x140309e2c#533 | memory_write       | 1             | 2           |
| 0x140309e2c#534 | direct_call        | 0             |             |
| 0x140309e45#559 | conditional_branch |               | 1           |
| 0x140309e55#581 | conditional_branch |               | 1           |
| 0x140309e57#583 | memory_read        | 1             |             |
| 0x140309e66#615 | conditional_branch |               | 1           |
| 0x140309e6f#627 | memory_write       | 1             | 2           |
| 0x140309e6f#628 | direct_call        | 0             |             |
| 0x140309e7e#643 | memory_write       | 1             | 2           |
| 0x140309e94#675 | indirect_call      | 0             |             |
| 0x140309e96#677 | indirect_call      | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /char *     |
| 1       | param_2 | /longlong * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use              | input_index |
|---------|------------------|-------------|
| 0       | 0x140309c83#1985 | 0           |
| 1       | 0x140309ca8#95   | 1           |
| 1       | 0x140309caf#1951 | 0           |
| 1       | 0x140309d4c#1960 | 0           |
| 1       | 0x140309d54#1961 | 0           |
| 0       | 0x140309ddd#408  | 2           |
| 0       | 0x140309e74#629  | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x140309e96 with no resolved callee; its no-return basis is unknown.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x140309e96 with no resolved callee; its no-return basis is unknown.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

