## evidence_id

ev_d062dda0c41eacec56a7ac1a8ea4d9f9e7555f44f1e8bcf2484fad8b431d96af

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
| procedure | 0x1401f6f60 |

## raw_result.value.procedure.address

0x1401f6f60

## raw_result.value.procedure.name

FUN_1401f6f60

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
| 0x1401f6f60 | 0x1401f70b6 |
| 0x1401f70b8 | 0x1401f70c1 |

## raw_result.value.procedure.body.total_bytes

353

## raw_result.value.procedure.body.span_bytes

354

## raw_result.value.procedure.body.non_contiguous

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f6f60()

## raw_result.value.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined local_10 @ Stack[-0x10]:1    | ghidra-function-database |
| undefined8 local_18 @ Stack[-0x18]:8   | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8   | ghidra-function-database |
| undefined local_58 @ Stack[-0x58]:1    | ghidra-function-database |
| undefined8 local_60 @ Stack[-0x60]:8   | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401f6f60(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 *local_60;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_88;
  local_20 = (longlong *)0x0;
  local_68 = param_1;
  local_60 = param_2;
  iVar2 = FUN_1403265a0();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140325560(5);
  }
  if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x50) = *param_2;
    FUN_1401eeb10(param_1 + 0x58,param_2 + 2);
    FUN_140041760(param_1 + 0x118,param_2 + 0x32);
    if ((*(char *)(param_1 + 0x139) == '\0') || (*(int *)(param_1 + 0x50) != 2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x138) = uVar1;
    FUN_1401f1a30(local_58,param_1 + 0x150);
    FUN_1403266c0(param_1);
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x20))
                (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
      local_20 = (longlong *)0x0;
    }
    FUN_140005540(param_2 + 0x32);
    if (*(char *)(param_2 + 0x30) != '\0') {
      if (*(char *)(param_2 + 0x24) != '\0') {
        FUN_140005540(param_2 + 0x1c);
      }
      FUN_140005540(param_2 + 0x14);
      FUN_140005540(param_2 + 0xc);
      FUN_140005540(param_2 + 4);
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140325560(6);
}



## raw_result.value.assembly

0x1401f6f60: MOV qword ptr [RSP + 0x18], RBX,0x1401f6f65: MOV qword ptr [RSP + 0x20], RSI,0x1401f6f6a: PUSH RDI,0x1401f6f6b: SUB RSP, 0x80,0x1401f6f72: MOV RAX, qword ptr [0x1404c7ac0],0x1401f6f79: XOR RAX, RSP,0x1401f6f7c: MOV qword ptr [RSP + 0x70], RAX,0x1401f6f81: MOV RSI, RDX,0x1401f6f84: MOV RBX, RCX,0x1401f6f87: MOV qword ptr [RSP + 0x28], RDX,0x1401f6f8c: MOV qword ptr [RSP + 0x68], 0x0,0x1401f6f95: MOV qword ptr [RSP + 0x20], RCX,0x1401f6f9a: CALL 0x1403265a0,0x1401f6f9f: TEST EAX, EAX,0x1401f6fa1: JNZ 0x1401f70b8,0x1401f6fa7: CMP dword ptr [RBX + 0x4c], 0x7fffffff,0x1401f6fae: JZ 0x1401f70a6,0x1401f6fb4: MOV EAX, dword ptr [RSI],0x1401f6fb6: MOV dword ptr [RBX + 0x50], EAX,0x1401f6fb9: LEA RCX, [RBX + 0x58],0x1401f6fbd: LEA RDX, [RSI + 0x8],0x1401f6fc1: CALL 0x1401eeb10,0x1401f6fc6: LEA RCX, [RBX + 0x118],0x1401f6fcd: LEA RDX, [RSI + 0xc8],0x1401f6fd4: CALL 0x140041760,0x1401f6fd9: CMP byte ptr [RBX + 0x139], 0x0,0x1401f6fe0: JZ 0x1401f6fec,0x1401f6fe2: CMP dword ptr [RBX + 0x50], 0x2,0x1401f6fe6: JNZ 0x1401f6fec,0x1401f6fe8: MOV AL, 0x1,0x1401f6fea: JMP 0x1401f6fee,0x1401f6fec: XOR AL, AL,0x1401f6fee: MOV byte ptr [RBX + 0x138], AL,0x1401f6ff4: LEA RDX, [RBX + 0x150],0x1401f6ffb: LEA RCX, [RSP + 0x30],0x1401f7000: CALL 0x1401f1a30,0x1401f7005: NOP,0x1401f7006: MOV RCX, RBX,0x1401f7009: CALL 0x1403266c0,0x1401f700e: MOV RCX, qword ptr [RSP + 0x68],0x1401f7013: TEST RCX, RCX,0x1401f7016: JZ 0x1401f7023,0x1401f7018: MOV RAX, qword ptr [RCX],0x1401f701b: CALL qword ptr [RAX + 0x10],0x1401f701e: MOV RCX, qword ptr [RSP + 0x68],0x1401f7023: TEST RCX, RCX,0x1401f7026: JZ 0x1401f7042,0x1401f7028: MOV RAX, qword ptr [RCX],0x1401f702b: LEA RDX, [RSP + 0x30],0x1401f7030: CMP RCX, RDX,0x1401f7033: SETNZ DL,0x1401f7036: CALL qword ptr [RAX + 0x20],0x1401f7039: MOV qword ptr [RSP + 0x68], 0x0,0x1401f7042: LEA RCX, [RSI + 0xc8],0x1401f7049: CALL 0x140005540,0x1401f704e: CMP byte ptr [RSI + 0xc0], 0x0,0x1401f7055: JZ 0x1401f7084,0x1401f7057: CMP byte ptr [RSI + 0x90], 0x0,0x1401f705e: JZ 0x1401f7069,0x1401f7060: LEA RCX, [RSI + 0x70],0x1401f7064: CALL 0x140005540,0x1401f7069: LEA RCX, [RSI + 0x50],0x1401f706d: CALL 0x140005540,0x1401f7072: LEA RCX, [RSI + 0x30],0x1401f7076: CALL 0x140005540,0x1401f707b: LEA RCX, [RSI + 0x10],0x1401f707f: CALL 0x140005540,0x1401f7084: MOV RCX, qword ptr [RSP + 0x70],0x1401f7089: XOR RCX, RSP,0x1401f708c: CALL 0x140327740,0x1401f7091: LEA R11, [RSP + 0x80],0x1401f7099: MOV RBX, qword ptr [R11 + 0x20],0x1401f709d: MOV RSI, qword ptr [R11 + 0x28],0x1401f70a1: MOV RSP, R11,0x1401f70a4: POP RDI,0x1401f70a5: RET,0x1401f70a6: MOV dword ptr [RBX + 0x4c], 0x7ffffffe,0x1401f70ad: MOV ECX, 0x6,0x1401f70b2: CALL 0x140325560,0x1401f70b8: MOV ECX, 0x5,0x1401f70bd: CALL 0x140325560

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f0c70 | FUN_1401f0c70 | [object Object] | [object Object] |
| 0x1401f2020 | FUN_1401f2020 | [object Object] | [object Object] |
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140005540 | FUN_140005540           | [object Object] | [object Object] |
| 0x140041760 | FUN_140041760           | [object Object] | [object Object] |
| 0x1401eeb10 | FUN_1401eeb10           | [object Object] | [object Object] |
| 0x1401f1a30 | FUN_1401f1a30           | [object Object] | [object Object] |
| 0x140325560 | FUN_140325560           | [object Object] | [object Object] |
| 0x1403265a0 | FUN_1403265a0           | [object Object] | [object Object] |
| 0x1403266c0 | FUN_1403266c0           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f11df    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f136f    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f2158    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f2cba    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3214    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f35e3    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4282    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfa80    | 0x1401f6f60    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f6f60    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401f6f65    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401f6f72    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f6f7c    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f6f87    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f6f8c    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f6f95    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f6f9a    | 0x1403265a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fa1    | 0x1401f70b8              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fae    | 0x1401f70a6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fc1    | 0x1401eeb10              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fd4    | 0x140041760              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fe0    | 0x1401f6fec              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fe6    | 0x1401f6fec              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fea    | 0x1401f6fee              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6ffb    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7000    | 0x1401f1a30              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7009    | 0x1403266c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f700e    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f7016    | 0x1401f7023              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f701e    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f7026    | 0x1401f7042              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f702b    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7039    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f7049    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7055    | 0x1401f7084              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f705e    | 0x1401f7069              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7064    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f706d    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7076    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f707f    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7084    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f708c    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7091    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1401f7099    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401f709d    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401f70b2    | 0x140325560              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f70bd    | 0x140325560              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140005540 | FUN_140005540           | 0x1401f7049    |
| 0x140005540 | FUN_140005540           | 0x1401f7064    |
| 0x140005540 | FUN_140005540           | 0x1401f706d    |
| 0x140005540 | FUN_140005540           | 0x1401f7076    |
| 0x140005540 | FUN_140005540           | 0x1401f707f    |
| 0x140041760 | FUN_140041760           | 0x1401f6fd4    |
| 0x1401eeb10 | FUN_1401eeb10           | 0x1401f6fc1    |
| 0x1401f1a30 | FUN_1401f1a30           | 0x1401f7000    |
| 0x1401f6fec | LAB_1401f6fec           | 0x1401f6fe0    |
| 0x1401f6fec | LAB_1401f6fec           | 0x1401f6fe6    |
| 0x1401f6fee | LAB_1401f6fee           | 0x1401f6fea    |
| 0x1401f7023 | LAB_1401f7023           | 0x1401f7016    |
| 0x1401f7042 | LAB_1401f7042           | 0x1401f7026    |
| 0x1401f7069 | LAB_1401f7069           | 0x1401f705e    |
| 0x1401f7084 | LAB_1401f7084           | 0x1401f7055    |
| 0x1401f70a6 | LAB_1401f70a6           | 0x1401f6fae    |
| 0x1401f70b8 | LAB_1401f70b8           | 0x1401f6fa1    |
| 0x140325560 | FUN_140325560           | 0x1401f70b2    |
| 0x140325560 | FUN_140325560           | 0x1401f70bd    |
| 0x1403265a0 | FUN_1403265a0           | 0x1401f6f9a    |
| 0x1403266c0 | FUN_1403266c0           | 0x1401f7009    |
| 0x140327740 | __security_check_cookie | 0x1401f708c    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f6f72    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f6f60 | 0x1401f6fa7 | 0x1401f6fa7,0x1401f70b8 |
| 0x1401f6fa7 | 0x1401f6fb4 | 0x1401f6fb4,0x1401f70a6 |
| 0x1401f6fb4 | 0x1401f6fe2 | 0x1401f6fe2,0x1401f6fec |
| 0x1401f6fe2 | 0x1401f6fe8 | 0x1401f6fe8,0x1401f6fec |
| 0x1401f6fe8 | 0x1401f6fec | 0x1401f6fee             |
| 0x1401f6fec | 0x1401f6fee | 0x1401f6fee             |
| 0x1401f6fee | 0x1401f7018 | 0x1401f7018,0x1401f7023 |
| 0x1401f7018 | 0x1401f7023 | 0x1401f7023             |
| 0x1401f7023 | 0x1401f7028 | 0x1401f7028,0x1401f7042 |
| 0x1401f7028 | 0x1401f7042 | 0x1401f7042             |
| 0x1401f7042 | 0x1401f7057 | 0x1401f7057,0x1401f7084 |
| 0x1401f7057 | 0x1401f7060 | 0x1401f7060,0x1401f7069 |
| 0x1401f7060 | 0x1401f7069 | 0x1401f7069             |
| 0x1401f7069 | 0x1401f7084 | 0x1401f7084             |
| 0x1401f7084 | 0x1401f70a6 |                         |
| 0x1401f70a6 | 0x1401f70b7 |                         |
| 0x1401f70b8 | 0x1401f70c2 |                         |

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
| parameter | 0       | param_1 | longlong     | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | undefined4 * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-------------------------------------------------|-----------------|
| 0x1401f6f6b#820 | 0x1401f6f6b | 820      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f79#21  | 0x1401f6f79 | 21       | INT_XOR      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f79#835 | 0x1401f6f79 | 835      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f8c#38  | 0x1401f6f8c | 38       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f9a#44  | 0x1401f6f9a | 44       | CALL         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f9a#647 | 0x1401f6f9a | 647      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f9a#725 | 0x1401f6f9a | 725      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f9a#743 | 0x1401f6f9a | 743      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f9a#761 | 0x1401f6f9a | 761      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f9a#779 | 0x1401f6f9a | 779      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f9a#833 | 0x1401f6f9a | 833      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f9a#834 | 0x1401f6f9a | 834      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f9f#49  | 0x1401f6f9f | 49       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fa1#55  | 0x1401f6fa1 | 55       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6fa7#56  | 0x1401f6fa7 | 56       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fa7#57  | 0x1401f6fa7 | 57       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fa7#63  | 0x1401f6fa7 | 63       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fa7#836 | 0x1401f6fa7 | 836      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fae#68  | 0x1401f6fae | 68       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6fb4#69  | 0x1401f6fb4 | 69       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fb6#72  | 0x1401f6fb6 | 72       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fb6#74  | 0x1401f6fb6 | 74       | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f6fb6#664 | 0x1401f6fb6 | 664      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fb6#838 | 0x1401f6fb6 | 838      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fb9#75  | 0x1401f6fb9 | 75       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fbd#821 | 0x1401f6fbd | 821      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f6fc1#81  | 0x1401f6fc1 | 81       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f6fc1#650 | 0x1401f6fc1 | 650      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fc1#728 | 0x1401f6fc1 | 728      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fc1#746 | 0x1401f6fc1 | 746      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fc1#764 | 0x1401f6fc1 | 764      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fc1#782 | 0x1401f6fc1 | 782      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fc6#82  | 0x1401f6fc6 | 82       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fcd#822 | 0x1401f6fcd | 822      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f6fd4#88  | 0x1401f6fd4 | 88       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f6fd4#651 | 0x1401f6fd4 | 651      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd4#729 | 0x1401f6fd4 | 729      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd4#747 | 0x1401f6fd4 | 747      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd4#765 | 0x1401f6fd4 | 765      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd4#783 | 0x1401f6fd4 | 783      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd9#89  | 0x1401f6fd9 | 89       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd9#90  | 0x1401f6fd9 | 90       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd9#96  | 0x1401f6fd9 | 96       | INT_EQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd9#839 | 0x1401f6fd9 | 839      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fe0#101 | 0x1401f6fe0 | 101      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6fe2#102 | 0x1401f6fe2 | 102      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fe2#103 | 0x1401f6fe2 | 103      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fe2#109 | 0x1401f6fe2 | 109      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fe2#840 | 0x1401f6fe2 | 840      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fe6#115 | 0x1401f6fe6 | 115      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6fe8#628 | 0x1401f6fe8 | 628      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fea#117 | 0x1401f6fea | 117      | BRANCH       | true    | member           | [object Object]                                 |                 |
| 0x1401f6fec#629 | 0x1401f6fec | 629      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fee#118 | 0x1401f6fee | 118      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fee#120 | 0x1401f6fee | 120      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f6fee#630 | 0x1401f6fee | 630      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fee#665 | 0x1401f6fee | 665      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fee#841 | 0x1401f6fee | 841      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ff4#121 | 0x1401f6ff4 | 121      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ffb#823 | 0x1401f6ffb | 823      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7000#127 | 0x1401f7000 | 127      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f7000#652 | 0x1401f7000 | 652      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7000#730 | 0x1401f7000 | 730      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7000#748 | 0x1401f7000 | 748      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7000#766 | 0x1401f7000 | 766      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7000#784 | 0x1401f7000 | 784      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7009#131 | 0x1401f7009 | 131      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7009#653 | 0x1401f7009 | 653      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7009#731 | 0x1401f7009 | 731      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7009#749 | 0x1401f7009 | 749      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7009#767 | 0x1401f7009 | 767      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7009#785 | 0x1401f7009 | 785      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7013#139 | 0x1401f7013 | 139      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7016#144 | 0x1401f7016 | 144      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7018#145 | 0x1401f7018 | 145      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#147 | 0x1401f701b | 147      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#148 | 0x1401f701b | 148      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#152 | 0x1401f701b | 152      | CALLIND      | true    | member           | [object Object]                                 |                 |
| 0x1401f701b#654 | 0x1401f701b | 654      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#732 | 0x1401f701b | 732      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#750 | 0x1401f701b | 750      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#768 | 0x1401f701b | 768      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#786 | 0x1401f701b | 786      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#842 | 0x1401f701b | 842      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f7023#160 | 0x1401f7023 | 160      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7023#670 | 0x1401f7023 | 670      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7023#742 | 0x1401f7023 | 742      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7023#760 | 0x1401f7023 | 760      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7023#778 | 0x1401f7023 | 778      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7023#796 | 0x1401f7023 | 796      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7026#165 | 0x1401f7026 | 165      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7028#166 | 0x1401f7028 | 166      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f702b#824 | 0x1401f702b | 824      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7030#175 | 0x1401f7030 | 175      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7033#456 | 0x1401f7033 | 456      | SUBPIECE     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7033#457 | 0x1401f7033 | 457      | PIECE        | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7033#832 | 0x1401f7033 | 832      | INT_RIGHT    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7033#843 | 0x1401f7033 | 843      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f7036#182 | 0x1401f7036 | 182      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#183 | 0x1401f7036 | 183      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#187 | 0x1401f7036 | 187      | CALLIND      | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f7036#655 | 0x1401f7036 | 655      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#733 | 0x1401f7036 | 733      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#751 | 0x1401f7036 | 751      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#769 | 0x1401f7036 | 769      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#787 | 0x1401f7036 | 787      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#844 | 0x1401f7036 | 844      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f7039#190 | 0x1401f7039 | 190      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f7042#669 | 0x1401f7042 | 669      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7042#741 | 0x1401f7042 | 741      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7042#759 | 0x1401f7042 | 759      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7042#777 | 0x1401f7042 | 777      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7042#795 | 0x1401f7042 | 795      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7042#825 | 0x1401f7042 | 825      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7049#195 | 0x1401f7049 | 195      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7049#656 | 0x1401f7049 | 656      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7049#734 | 0x1401f7049 | 734      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7049#752 | 0x1401f7049 | 752      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7049#770 | 0x1401f7049 | 770      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7049#788 | 0x1401f7049 | 788      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f704e#197 | 0x1401f704e | 197      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f704e#203 | 0x1401f704e | 203      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f704e#826 | 0x1401f704e | 826      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f704e#845 | 0x1401f704e | 845      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f7055#208 | 0x1401f7055 | 208      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7057#210 | 0x1401f7057 | 210      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7057#216 | 0x1401f7057 | 216      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7057#827 | 0x1401f7057 | 827      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7057#846 | 0x1401f7057 | 846      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f705e#221 | 0x1401f705e | 221      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7060#828 | 0x1401f7060 | 828      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7064#226 | 0x1401f7064 | 226      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7064#657 | 0x1401f7064 | 657      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7064#735 | 0x1401f7064 | 735      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7064#753 | 0x1401f7064 | 753      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7064#771 | 0x1401f7064 | 771      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7064#789 | 0x1401f7064 | 789      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#668 | 0x1401f7069 | 668      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#740 | 0x1401f7069 | 740      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#758 | 0x1401f7069 | 758      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#776 | 0x1401f7069 | 776      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#794 | 0x1401f7069 | 794      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#829 | 0x1401f7069 | 829      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f706d#231 | 0x1401f706d | 231      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f706d#658 | 0x1401f706d | 658      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f706d#736 | 0x1401f706d | 736      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f706d#754 | 0x1401f706d | 754      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f706d#772 | 0x1401f706d | 772      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f706d#790 | 0x1401f706d | 790      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7072#830 | 0x1401f7072 | 830      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7076#236 | 0x1401f7076 | 236      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7076#659 | 0x1401f7076 | 659      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7076#737 | 0x1401f7076 | 737      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7076#755 | 0x1401f7076 | 755      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7076#773 | 0x1401f7076 | 773      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7076#791 | 0x1401f7076 | 791      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f707b#831 | 0x1401f707b | 831      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f707f#241 | 0x1401f707f | 241      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f707f#660 | 0x1401f707f | 660      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f707f#738 | 0x1401f707f | 738      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f707f#756 | 0x1401f707f | 756      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f707f#774 | 0x1401f707f | 774      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f707f#792 | 0x1401f707f | 792      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7084#667 | 0x1401f7084 | 667      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70a5#272 | 0x1401f70a5 | 272      | RETURN       | true    | member           | [object Object]                                 |                 |
| 0x1401f70a5#661 | 0x1401f70a5 | 661      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f70a6#282 | 0x1401f70a6 | 282      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70a6#284 | 0x1401f70a6 | 284      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f70a6#666 | 0x1401f70a6 | 666      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70a6#837 | 0x1401f70a6 | 837      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f70b2#288 | 0x1401f70b2 | 288      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f70b2#290 | 0x1401f70b2 | 290      | RETURN       | true    | member           | [object Object]                                 |                 |
| 0x1401f70b2#649 | 0x1401f70b2 | 649      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70b2#662 | 0x1401f70b2 | 662      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f70b2#727 | 0x1401f70b2 | 727      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70b2#745 | 0x1401f70b2 | 745      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70b2#763 | 0x1401f70b2 | 763      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70b2#781 | 0x1401f70b2 | 781      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70bd#294 | 0x1401f70bd | 294      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f70bd#296 | 0x1401f70bd | 296      | RETURN       | true    | member           | [object Object]                                 |                 |
| 0x1401f70bd#648 | 0x1401f70bd | 648      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70bd#663 | 0x1401f70bd | 663      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f70bd#726 | 0x1401f70bd | 726      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70bd#744 | 0x1401f70bd | 744      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70bd#762 | 0x1401f70bd | 762      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70bd#780 | 0x1401f70bd | 780      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f6f79#835 | 0x1401f6f79#21  | 1           |
| 0x1401f6f6b#820 | 0x1401f6f79#835 | 0           |
| 0x1401f6f9a#833 | 0x1401f6f9a#725 | 0           |
| 0x1401f6f9a#834 | 0x1401f6f9a#743 | 0           |
| 0x1401f6f8c#38  | 0x1401f6f9a#761 | 0           |
| 0x1401f6f79#21  | 0x1401f6f9a#779 | 0           |
| 0x1401f6f9a#44  | 0x1401f6f9f#49  | 0           |
| 0x1401f6f9f#49  | 0x1401f6fa1#55  | 1           |
| 0x1401f6fa7#836 | 0x1401f6fa7#57  | 1           |
| 0x1401f6fa7#57  | 0x1401f6fa7#63  | 0           |
| 0x1401f6fa7#56  | 0x1401f6fa7#836 | 0           |
| 0x1401f6fa7#63  | 0x1401f6fae#68  | 1           |
| 0x1401f6fb6#838 | 0x1401f6fb6#74  | 1           |
| 0x1401f6fb4#69  | 0x1401f6fb6#74  | 2           |
| 0x1401f6f9a#647 | 0x1401f6fb6#664 | 0           |
| 0x1401f6fb6#72  | 0x1401f6fb6#838 | 0           |
| 0x1401f6fb9#75  | 0x1401f6fc1#81  | 1           |
| 0x1401f6fbd#821 | 0x1401f6fc1#81  | 2           |
| 0x1401f6fb6#664 | 0x1401f6fc1#650 | 0           |
| 0x1401f6f9a#725 | 0x1401f6fc1#728 | 0           |
| 0x1401f6f9a#743 | 0x1401f6fc1#746 | 0           |
| 0x1401f6f9a#761 | 0x1401f6fc1#764 | 0           |
| 0x1401f6f9a#779 | 0x1401f6fc1#782 | 0           |
| 0x1401f6fc6#82  | 0x1401f6fd4#88  | 1           |
| 0x1401f6fcd#822 | 0x1401f6fd4#88  | 2           |
| 0x1401f6fc1#650 | 0x1401f6fd4#651 | 0           |
| 0x1401f6fc1#728 | 0x1401f6fd4#729 | 0           |
| 0x1401f6fc1#746 | 0x1401f6fd4#747 | 0           |
| 0x1401f6fc1#764 | 0x1401f6fd4#765 | 0           |
| 0x1401f6fc1#782 | 0x1401f6fd4#783 | 0           |
| 0x1401f6fd9#839 | 0x1401f6fd9#90  | 1           |
| 0x1401f6fd9#90  | 0x1401f6fd9#96  | 0           |
| 0x1401f6fd9#89  | 0x1401f6fd9#839 | 0           |
| 0x1401f6fd9#96  | 0x1401f6fe0#101 | 1           |
| 0x1401f6fe2#840 | 0x1401f6fe2#103 | 1           |
| 0x1401f6fe2#103 | 0x1401f6fe2#109 | 0           |
| 0x1401f6fe2#102 | 0x1401f6fe2#840 | 0           |
| 0x1401f6fe2#109 | 0x1401f6fe6#115 | 1           |
| 0x1401f6fee#841 | 0x1401f6fee#120 | 1           |
| 0x1401f6fee#630 | 0x1401f6fee#120 | 2           |
| 0x1401f6fe8#628 | 0x1401f6fee#630 | 0           |
| 0x1401f6fec#629 | 0x1401f6fee#630 | 1           |
| 0x1401f6fd4#651 | 0x1401f6fee#665 | 0           |
| 0x1401f6fee#118 | 0x1401f6fee#841 | 0           |
| 0x1401f6ffb#823 | 0x1401f7000#127 | 1           |
| 0x1401f6ff4#121 | 0x1401f7000#127 | 2           |
| 0x1401f6fee#665 | 0x1401f7000#652 | 0           |
| 0x1401f6fd4#729 | 0x1401f7000#730 | 0           |
| 0x1401f6fd4#747 | 0x1401f7000#748 | 0           |
| 0x1401f6fd4#765 | 0x1401f7000#766 | 0           |
| 0x1401f6fd4#783 | 0x1401f7000#784 | 0           |
| 0x1401f7000#652 | 0x1401f7009#653 | 0           |
| 0x1401f7000#730 | 0x1401f7009#731 | 0           |
| 0x1401f7000#748 | 0x1401f7009#749 | 0           |
| 0x1401f7000#766 | 0x1401f7009#767 | 0           |
| 0x1401f7000#784 | 0x1401f7009#785 | 0           |
| 0x1401f7009#767 | 0x1401f7013#139 | 0           |
| 0x1401f7013#139 | 0x1401f7016#144 | 1           |
| 0x1401f7009#767 | 0x1401f7018#145 | 1           |
| 0x1401f7018#145 | 0x1401f701b#147 | 0           |
| 0x1401f701b#842 | 0x1401f701b#148 | 1           |
| 0x1401f701b#148 | 0x1401f701b#152 | 0           |
| 0x1401f7009#653 | 0x1401f701b#654 | 0           |
| 0x1401f7009#731 | 0x1401f701b#732 | 0           |
| 0x1401f7009#749 | 0x1401f701b#750 | 0           |
| 0x1401f7009#767 | 0x1401f701b#768 | 0           |
| 0x1401f7009#785 | 0x1401f701b#786 | 0           |
| 0x1401f701b#147 | 0x1401f701b#842 | 0           |
| 0x1401f7023#778 | 0x1401f7023#160 | 0           |
| 0x1401f7009#653 | 0x1401f7023#670 | 0           |
| 0x1401f701b#654 | 0x1401f7023#670 | 1           |
| 0x1401f7009#731 | 0x1401f7023#742 | 0           |
| 0x1401f701b#732 | 0x1401f7023#742 | 1           |
| 0x1401f7009#749 | 0x1401f7023#760 | 0           |
| 0x1401f701b#750 | 0x1401f7023#760 | 1           |
| 0x1401f7009#767 | 0x1401f7023#778 | 0           |
| 0x1401f701b#768 | 0x1401f7023#778 | 1           |
| 0x1401f7009#785 | 0x1401f7023#796 | 0           |
| 0x1401f701b#786 | 0x1401f7023#796 | 1           |
| 0x1401f7023#160 | 0x1401f7026#165 | 1           |
| 0x1401f7023#778 | 0x1401f7028#166 | 1           |
| 0x1401f7023#778 | 0x1401f7030#175 | 0           |
| 0x1401f702b#824 | 0x1401f7030#175 | 1           |
| 0x1401f7033#832 | 0x1401f7033#456 | 0           |
| 0x1401f7033#456 | 0x1401f7033#457 | 0           |
| 0x1401f7030#175 | 0x1401f7033#457 | 1           |
| 0x1401f7033#843 | 0x1401f7033#832 | 0           |
| 0x1401f702b#824 | 0x1401f7033#843 | 0           |
| 0x1401f7028#166 | 0x1401f7036#182 | 0           |
| 0x1401f7036#844 | 0x1401f7036#183 | 1           |
| 0x1401f7036#183 | 0x1401f7036#187 | 0           |
| 0x1401f7023#778 | 0x1401f7036#187 | 1           |
| 0x1401f7033#457 | 0x1401f7036#187 | 2           |
| 0x1401f7023#670 | 0x1401f7036#655 | 0           |
| 0x1401f7023#742 | 0x1401f7036#733 | 0           |
| 0x1401f7023#760 | 0x1401f7036#751 | 0           |
| 0x1401f7023#778 | 0x1401f7036#769 | 0           |
| 0x1401f7023#796 | 0x1401f7036#787 | 0           |
| 0x1401f7036#182 | 0x1401f7036#844 | 0           |
| 0x1401f7023#670 | 0x1401f7042#669 | 0           |
| 0x1401f7036#655 | 0x1401f7042#669 | 1           |
| 0x1401f7023#742 | 0x1401f7042#741 | 0           |
| 0x1401f7036#733 | 0x1401f7042#741 | 1           |
| 0x1401f7023#760 | 0x1401f7042#759 | 0           |
| 0x1401f7036#751 | 0x1401f7042#759 | 1           |
| 0x1401f7023#778 | 0x1401f7042#777 | 0           |
| 0x1401f7039#190 | 0x1401f7042#777 | 1           |
| 0x1401f7023#796 | 0x1401f7042#795 | 0           |
| 0x1401f7036#787 | 0x1401f7042#795 | 1           |
| 0x1401f7042#825 | 0x1401f7049#195 | 1           |
| 0x1401f7042#669 | 0x1401f7049#656 | 0           |
| 0x1401f7042#741 | 0x1401f7049#734 | 0           |
| 0x1401f7042#759 | 0x1401f7049#752 | 0           |
| 0x1401f7042#777 | 0x1401f7049#770 | 0           |
| 0x1401f7042#795 | 0x1401f7049#788 | 0           |
| 0x1401f704e#845 | 0x1401f704e#197 | 1           |
| 0x1401f704e#197 | 0x1401f704e#203 | 0           |
| 0x1401f704e#826 | 0x1401f704e#845 | 0           |
| 0x1401f704e#203 | 0x1401f7055#208 | 1           |
| 0x1401f7057#846 | 0x1401f7057#210 | 1           |
| 0x1401f7057#210 | 0x1401f7057#216 | 0           |
| 0x1401f7057#827 | 0x1401f7057#846 | 0           |
| 0x1401f7057#216 | 0x1401f705e#221 | 1           |
| 0x1401f7060#828 | 0x1401f7064#226 | 1           |
| 0x1401f7049#656 | 0x1401f7064#657 | 0           |
| 0x1401f7049#734 | 0x1401f7064#735 | 0           |
| 0x1401f7049#752 | 0x1401f7064#753 | 0           |
| 0x1401f7049#770 | 0x1401f7064#771 | 0           |
| 0x1401f7049#788 | 0x1401f7064#789 | 0           |
| 0x1401f7049#656 | 0x1401f7069#668 | 0           |
| 0x1401f7064#657 | 0x1401f7069#668 | 1           |
| 0x1401f7049#734 | 0x1401f7069#740 | 0           |
| 0x1401f7064#735 | 0x1401f7069#740 | 1           |
| 0x1401f7049#752 | 0x1401f7069#758 | 0           |
| 0x1401f7064#753 | 0x1401f7069#758 | 1           |
| 0x1401f7049#770 | 0x1401f7069#776 | 0           |
| 0x1401f7064#771 | 0x1401f7069#776 | 1           |
| 0x1401f7049#788 | 0x1401f7069#794 | 0           |
| 0x1401f7064#789 | 0x1401f7069#794 | 1           |
| 0x1401f7069#829 | 0x1401f706d#231 | 1           |
| 0x1401f7069#668 | 0x1401f706d#658 | 0           |
| 0x1401f7069#740 | 0x1401f706d#736 | 0           |
| 0x1401f7069#758 | 0x1401f706d#754 | 0           |
| 0x1401f7069#776 | 0x1401f706d#772 | 0           |
| 0x1401f7069#794 | 0x1401f706d#790 | 0           |
| 0x1401f7072#830 | 0x1401f7076#236 | 1           |
| 0x1401f706d#658 | 0x1401f7076#659 | 0           |
| 0x1401f706d#736 | 0x1401f7076#737 | 0           |
| 0x1401f706d#754 | 0x1401f7076#755 | 0           |
| 0x1401f706d#772 | 0x1401f7076#773 | 0           |
| 0x1401f706d#790 | 0x1401f7076#791 | 0           |
| 0x1401f707b#831 | 0x1401f707f#241 | 1           |
| 0x1401f7076#659 | 0x1401f707f#660 | 0           |
| 0x1401f7076#737 | 0x1401f707f#738 | 0           |
| 0x1401f7076#755 | 0x1401f707f#756 | 0           |
| 0x1401f7076#773 | 0x1401f707f#774 | 0           |
| 0x1401f7076#791 | 0x1401f707f#792 | 0           |
| 0x1401f7049#656 | 0x1401f7084#667 | 0           |
| 0x1401f707f#660 | 0x1401f7084#667 | 1           |
| 0x1401f7084#667 | 0x1401f70a5#661 | 0           |
| 0x1401f70a6#837 | 0x1401f70a6#284 | 1           |
| 0x1401f6f9a#647 | 0x1401f70a6#666 | 0           |
| 0x1401f70a6#282 | 0x1401f70a6#837 | 0           |
| 0x1401f70a6#666 | 0x1401f70b2#649 | 0           |
| 0x1401f70b2#649 | 0x1401f70b2#662 | 0           |
| 0x1401f6f9a#725 | 0x1401f70b2#727 | 0           |
| 0x1401f6f9a#743 | 0x1401f70b2#745 | 0           |
| 0x1401f6f9a#761 | 0x1401f70b2#763 | 0           |
| 0x1401f6f9a#779 | 0x1401f70b2#781 | 0           |
| 0x1401f6f9a#647 | 0x1401f70bd#648 | 0           |
| 0x1401f70bd#648 | 0x1401f70bd#663 | 0           |
| 0x1401f6f9a#725 | 0x1401f70bd#726 | 0           |
| 0x1401f6f9a#743 | 0x1401f70bd#744 | 0           |
| 0x1401f6f9a#761 | 0x1401f70bd#762 | 0           |
| 0x1401f6f9a#779 | 0x1401f70bd#780 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /longlong     |
| 1       | param_2 | /undefined4 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f6f9a#833 | 0           |
| 1       | 0x1401f6f9a#834 | 0           |
| 0       | 0x1401f6fa7#56  | 0           |
| 1       | 0x1401f6fb4#69  | 1           |
| 0       | 0x1401f6fb6#72  | 0           |
| 0       | 0x1401f6fb9#75  | 0           |
| 1       | 0x1401f6fbd#821 | 0           |
| 0       | 0x1401f6fc6#82  | 0           |
| 1       | 0x1401f6fcd#822 | 0           |
| 0       | 0x1401f6fd9#89  | 0           |
| 0       | 0x1401f6fe2#102 | 0           |
| 0       | 0x1401f6fee#118 | 0           |
| 0       | 0x1401f6ff4#121 | 0           |
| 0       | 0x1401f7009#131 | 1           |
| 1       | 0x1401f7042#825 | 0           |
| 1       | 0x1401f704e#826 | 0           |
| 1       | 0x1401f7057#827 | 0           |
| 1       | 0x1401f7060#828 | 0           |
| 1       | 0x1401f7069#829 | 0           |
| 1       | 0x1401f7072#830 | 0           |
| 1       | 0x1401f707b#831 | 0           |
| 0       | 0x1401f70a6#282 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f6f9a#44  | direct_call        | 0             |             |
| 0x1401f6fa1#55  | conditional_branch |               | 1           |
| 0x1401f6fa7#57  | memory_read        | 1             |             |
| 0x1401f6fae#68  | conditional_branch |               | 1           |
| 0x1401f6fb4#69  | memory_read        | 1             |             |
| 0x1401f6fb6#74  | memory_write       | 1             | 2           |
| 0x1401f6fc1#81  | direct_call        | 0             |             |
| 0x1401f6fd4#88  | direct_call        | 0             |             |
| 0x1401f6fd9#90  | memory_read        | 1             |             |
| 0x1401f6fe0#101 | conditional_branch |               | 1           |
| 0x1401f6fe2#103 | memory_read        | 1             |             |
| 0x1401f6fe6#115 | conditional_branch |               | 1           |
| 0x1401f6fee#120 | memory_write       | 1             | 2           |
| 0x1401f7000#127 | direct_call        | 0             |             |
| 0x1401f7009#131 | direct_call        | 0             |             |
| 0x1401f7016#144 | conditional_branch |               | 1           |
| 0x1401f7018#145 | memory_read        | 1             |             |
| 0x1401f701b#148 | memory_read        | 1             |             |
| 0x1401f701b#152 | indirect_call      | 0             |             |
| 0x1401f7026#165 | conditional_branch |               | 1           |
| 0x1401f7028#166 | memory_read        | 1             |             |
| 0x1401f7036#183 | memory_read        | 1             |             |
| 0x1401f7036#187 | indirect_call      | 0             |             |
| 0x1401f7049#195 | direct_call        | 0             |             |
| 0x1401f704e#197 | memory_read        | 1             |             |
| 0x1401f7055#208 | conditional_branch |               | 1           |
| 0x1401f7057#210 | memory_read        | 1             |             |
| 0x1401f705e#221 | conditional_branch |               | 1           |
| 0x1401f7064#226 | direct_call        | 0             |             |
| 0x1401f706d#231 | direct_call        | 0             |             |
| 0x1401f7076#236 | direct_call        | 0             |             |
| 0x1401f707f#241 | direct_call        | 0             |             |
| 0x1401f70a6#284 | memory_write       | 1             | 2           |
| 0x1401f70b2#288 | direct_call        | 0             |             |
| 0x1401f70bd#294 | direct_call        | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f70b2 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f70bd to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401f70b2 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f70bd to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## normalized_result.procedure.address

0x1401f6f60

## normalized_result.procedure.name

FUN_1401f6f60

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
| 0x1401f6f60 | 0x1401f70b6 |
| 0x1401f70b8 | 0x1401f70c1 |

## normalized_result.procedure.body.total_bytes

353

## normalized_result.procedure.body.span_bytes

354

## normalized_result.procedure.body.non_contiguous

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f6f60()

## normalized_result.procedure.locals

| description                            | provenance               |
|----------------------------------------|--------------------------|
| undefined local_10 @ Stack[-0x10]:1    | ghidra-function-database |
| undefined8 local_18 @ Stack[-0x18]:8   | ghidra-function-database |
| undefined8 local_20 @ Stack[-0x20]:8   | ghidra-function-database |
| undefined local_58 @ Stack[-0x58]:1    | ghidra-function-database |
| undefined8 local_60 @ Stack[-0x60]:8   | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8   | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8 | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8 | ghidra-function-database |
| undefined8 local_res20 @ Stack[0x20]:8 | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401f6f60(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 *local_60;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404c7ac0 ^ (ulonglong)auStack_88;
  local_20 = (longlong *)0x0;
  local_68 = param_1;
  local_60 = param_2;
  iVar2 = FUN_1403265a0();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140325560(5);
  }
  if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x50) = *param_2;
    FUN_1401eeb10(param_1 + 0x58,param_2 + 2);
    FUN_140041760(param_1 + 0x118,param_2 + 0x32);
    if ((*(char *)(param_1 + 0x139) == '\0') || (*(int *)(param_1 + 0x50) != 2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x138) = uVar1;
    FUN_1401f1a30(local_58,param_1 + 0x150);
    FUN_1403266c0(param_1);
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x20))
                (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
      local_20 = (longlong *)0x0;
    }
    FUN_140005540(param_2 + 0x32);
    if (*(char *)(param_2 + 0x30) != '\0') {
      if (*(char *)(param_2 + 0x24) != '\0') {
        FUN_140005540(param_2 + 0x1c);
      }
      FUN_140005540(param_2 + 0x14);
      FUN_140005540(param_2 + 0xc);
      FUN_140005540(param_2 + 4);
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140325560(6);
}



## normalized_result.assembly

0x1401f6f60: MOV qword ptr [RSP + 0x18], RBX,0x1401f6f65: MOV qword ptr [RSP + 0x20], RSI,0x1401f6f6a: PUSH RDI,0x1401f6f6b: SUB RSP, 0x80,0x1401f6f72: MOV RAX, qword ptr [0x1404c7ac0],0x1401f6f79: XOR RAX, RSP,0x1401f6f7c: MOV qword ptr [RSP + 0x70], RAX,0x1401f6f81: MOV RSI, RDX,0x1401f6f84: MOV RBX, RCX,0x1401f6f87: MOV qword ptr [RSP + 0x28], RDX,0x1401f6f8c: MOV qword ptr [RSP + 0x68], 0x0,0x1401f6f95: MOV qword ptr [RSP + 0x20], RCX,0x1401f6f9a: CALL 0x1403265a0,0x1401f6f9f: TEST EAX, EAX,0x1401f6fa1: JNZ 0x1401f70b8,0x1401f6fa7: CMP dword ptr [RBX + 0x4c], 0x7fffffff,0x1401f6fae: JZ 0x1401f70a6,0x1401f6fb4: MOV EAX, dword ptr [RSI],0x1401f6fb6: MOV dword ptr [RBX + 0x50], EAX,0x1401f6fb9: LEA RCX, [RBX + 0x58],0x1401f6fbd: LEA RDX, [RSI + 0x8],0x1401f6fc1: CALL 0x1401eeb10,0x1401f6fc6: LEA RCX, [RBX + 0x118],0x1401f6fcd: LEA RDX, [RSI + 0xc8],0x1401f6fd4: CALL 0x140041760,0x1401f6fd9: CMP byte ptr [RBX + 0x139], 0x0,0x1401f6fe0: JZ 0x1401f6fec,0x1401f6fe2: CMP dword ptr [RBX + 0x50], 0x2,0x1401f6fe6: JNZ 0x1401f6fec,0x1401f6fe8: MOV AL, 0x1,0x1401f6fea: JMP 0x1401f6fee,0x1401f6fec: XOR AL, AL,0x1401f6fee: MOV byte ptr [RBX + 0x138], AL,0x1401f6ff4: LEA RDX, [RBX + 0x150],0x1401f6ffb: LEA RCX, [RSP + 0x30],0x1401f7000: CALL 0x1401f1a30,0x1401f7005: NOP,0x1401f7006: MOV RCX, RBX,0x1401f7009: CALL 0x1403266c0,0x1401f700e: MOV RCX, qword ptr [RSP + 0x68],0x1401f7013: TEST RCX, RCX,0x1401f7016: JZ 0x1401f7023,0x1401f7018: MOV RAX, qword ptr [RCX],0x1401f701b: CALL qword ptr [RAX + 0x10],0x1401f701e: MOV RCX, qword ptr [RSP + 0x68],0x1401f7023: TEST RCX, RCX,0x1401f7026: JZ 0x1401f7042,0x1401f7028: MOV RAX, qword ptr [RCX],0x1401f702b: LEA RDX, [RSP + 0x30],0x1401f7030: CMP RCX, RDX,0x1401f7033: SETNZ DL,0x1401f7036: CALL qword ptr [RAX + 0x20],0x1401f7039: MOV qword ptr [RSP + 0x68], 0x0,0x1401f7042: LEA RCX, [RSI + 0xc8],0x1401f7049: CALL 0x140005540,0x1401f704e: CMP byte ptr [RSI + 0xc0], 0x0,0x1401f7055: JZ 0x1401f7084,0x1401f7057: CMP byte ptr [RSI + 0x90], 0x0,0x1401f705e: JZ 0x1401f7069,0x1401f7060: LEA RCX, [RSI + 0x70],0x1401f7064: CALL 0x140005540,0x1401f7069: LEA RCX, [RSI + 0x50],0x1401f706d: CALL 0x140005540,0x1401f7072: LEA RCX, [RSI + 0x30],0x1401f7076: CALL 0x140005540,0x1401f707b: LEA RCX, [RSI + 0x10],0x1401f707f: CALL 0x140005540,0x1401f7084: MOV RCX, qword ptr [RSP + 0x70],0x1401f7089: XOR RCX, RSP,0x1401f708c: CALL 0x140327740,0x1401f7091: LEA R11, [RSP + 0x80],0x1401f7099: MOV RBX, qword ptr [R11 + 0x20],0x1401f709d: MOV RSI, qword ptr [R11 + 0x28],0x1401f70a1: MOV RSP, R11,0x1401f70a4: POP RDI,0x1401f70a5: RET,0x1401f70a6: MOV dword ptr [RBX + 0x4c], 0x7ffffffe,0x1401f70ad: MOV ECX, 0x6,0x1401f70b2: CALL 0x140325560,0x1401f70b8: MOV ECX, 0x5,0x1401f70bd: CALL 0x140325560

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f0c70 | FUN_1401f0c70 | [object Object] | [object Object] |
| 0x1401f2020 | FUN_1401f2020 | [object Object] | [object Object] |
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name                    | classification  | body            |
|-------------|-------------------------|-----------------|-----------------|
| 0x140005540 | FUN_140005540           | [object Object] | [object Object] |
| 0x140041760 | FUN_140041760           | [object Object] | [object Object] |
| 0x1401eeb10 | FUN_1401eeb10           | [object Object] | [object Object] |
| 0x1401f1a30 | FUN_1401f1a30           | [object Object] | [object Object] |
| 0x140325560 | FUN_140325560           | [object Object] | [object Object] |
| 0x1403265a0 | FUN_1403265a0           | [object Object] | [object Object] |
| 0x1403266c0 | FUN_1403266c0           | [object Object] | [object Object] |
| 0x140327740 | __security_check_cookie | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f11df    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f136f    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f2158    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f2cba    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3214    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f35e3    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4282    | 0x1401f6f60    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfa80    | 0x1401f6f60    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f6f60    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401f6f65    | stack:0x20               | [object Object]  |                  | [object Object] |
| 0x1401f6f72    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f6f7c    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f6f87    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401f6f8c    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f6f95    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401f6f9a    | 0x1403265a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fa1    | 0x1401f70b8              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fae    | 0x1401f70a6              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fc1    | 0x1401eeb10              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fd4    | 0x140041760              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fe0    | 0x1401f6fec              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fe6    | 0x1401f6fec              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6fea    | 0x1401f6fee              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6ffb    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7000    | 0x1401f1a30              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7009    | 0x1403266c0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f700e    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f7016    | 0x1401f7023              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f701e    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f7026    | 0x1401f7042              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f702b    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401f7039    | stack:0xffffffffffffffe0 | [object Object]  |                  | [object Object] |
| 0x1401f7049    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7055    | 0x1401f7084              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f705e    | 0x1401f7069              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7064    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f706d    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7076    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f707f    | 0x140005540              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7084    | stack:0xffffffffffffffe8 | [object Object]  |                  | [object Object] |
| 0x1401f708c    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f7091    | stack:0xfffffffffffffff0 | [object Object]  |                  | [object Object] |
| 0x1401f7099    | stack:0x10               | [object Object]  |                  | [object Object] |
| 0x1401f709d    | stack:0x18               | [object Object]  |                  | [object Object] |
| 0x1401f70b2    | 0x140325560              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f70bd    | 0x140325560              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value                   | source_address |
|-------------|-------------------------|----------------|
| 0x140005540 | FUN_140005540           | 0x1401f7049    |
| 0x140005540 | FUN_140005540           | 0x1401f7064    |
| 0x140005540 | FUN_140005540           | 0x1401f706d    |
| 0x140005540 | FUN_140005540           | 0x1401f7076    |
| 0x140005540 | FUN_140005540           | 0x1401f707f    |
| 0x140041760 | FUN_140041760           | 0x1401f6fd4    |
| 0x1401eeb10 | FUN_1401eeb10           | 0x1401f6fc1    |
| 0x1401f1a30 | FUN_1401f1a30           | 0x1401f7000    |
| 0x1401f6fec | LAB_1401f6fec           | 0x1401f6fe0    |
| 0x1401f6fec | LAB_1401f6fec           | 0x1401f6fe6    |
| 0x1401f6fee | LAB_1401f6fee           | 0x1401f6fea    |
| 0x1401f7023 | LAB_1401f7023           | 0x1401f7016    |
| 0x1401f7042 | LAB_1401f7042           | 0x1401f7026    |
| 0x1401f7069 | LAB_1401f7069           | 0x1401f705e    |
| 0x1401f7084 | LAB_1401f7084           | 0x1401f7055    |
| 0x1401f70a6 | LAB_1401f70a6           | 0x1401f6fae    |
| 0x1401f70b8 | LAB_1401f70b8           | 0x1401f6fa1    |
| 0x140325560 | FUN_140325560           | 0x1401f70b2    |
| 0x140325560 | FUN_140325560           | 0x1401f70bd    |
| 0x1403265a0 | FUN_1403265a0           | 0x1401f6f9a    |
| 0x1403266c0 | FUN_1403266c0           | 0x1401f7009    |
| 0x140327740 | __security_check_cookie | 0x1401f708c    |
| 0x1404c7ac0 | DAT_1404c7ac0           | 0x1401f6f72    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f6f60 | 0x1401f6fa7 | 0x1401f6fa7,0x1401f70b8 |
| 0x1401f6fa7 | 0x1401f6fb4 | 0x1401f6fb4,0x1401f70a6 |
| 0x1401f6fb4 | 0x1401f6fe2 | 0x1401f6fe2,0x1401f6fec |
| 0x1401f6fe2 | 0x1401f6fe8 | 0x1401f6fe8,0x1401f6fec |
| 0x1401f6fe8 | 0x1401f6fec | 0x1401f6fee             |
| 0x1401f6fec | 0x1401f6fee | 0x1401f6fee             |
| 0x1401f6fee | 0x1401f7018 | 0x1401f7018,0x1401f7023 |
| 0x1401f7018 | 0x1401f7023 | 0x1401f7023             |
| 0x1401f7023 | 0x1401f7028 | 0x1401f7028,0x1401f7042 |
| 0x1401f7028 | 0x1401f7042 | 0x1401f7042             |
| 0x1401f7042 | 0x1401f7057 | 0x1401f7057,0x1401f7084 |
| 0x1401f7057 | 0x1401f7060 | 0x1401f7060,0x1401f7069 |
| 0x1401f7060 | 0x1401f7069 | 0x1401f7069             |
| 0x1401f7069 | 0x1401f7084 | 0x1401f7084             |
| 0x1401f7084 | 0x1401f70a6 |                         |
| 0x1401f70a6 | 0x1401f70b7 |                         |
| 0x1401f70b8 | 0x1401f70c2 |                         |

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
| 0       | param_1 | longlong     | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | undefined4 * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-------------------------------------------------|-----------------|
| 0x1401f6f6b#820 | 0x1401f6f6b | 820      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f79#21  | 0x1401f6f79 | 21       | INT_XOR      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f79#835 | 0x1401f6f79 | 835      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f8c#38  | 0x1401f6f8c | 38       | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f9a#44  | 0x1401f6f9a | 44       | CALL         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f9a#647 | 0x1401f6f9a | 647      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f9a#725 | 0x1401f6f9a | 725      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f9a#743 | 0x1401f6f9a | 743      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f9a#761 | 0x1401f6f9a | 761      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f9a#779 | 0x1401f6f9a | 779      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6f9a#833 | 0x1401f6f9a | 833      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f9a#834 | 0x1401f6f9a | 834      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6f9f#49  | 0x1401f6f9f | 49       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fa1#55  | 0x1401f6fa1 | 55       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6fa7#56  | 0x1401f6fa7 | 56       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fa7#57  | 0x1401f6fa7 | 57       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fa7#63  | 0x1401f6fa7 | 63       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fa7#836 | 0x1401f6fa7 | 836      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fae#68  | 0x1401f6fae | 68       | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6fb4#69  | 0x1401f6fb4 | 69       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fb6#72  | 0x1401f6fb6 | 72       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fb6#74  | 0x1401f6fb6 | 74       | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f6fb6#664 | 0x1401f6fb6 | 664      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fb6#838 | 0x1401f6fb6 | 838      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fb9#75  | 0x1401f6fb9 | 75       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fbd#821 | 0x1401f6fbd | 821      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f6fc1#81  | 0x1401f6fc1 | 81       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f6fc1#650 | 0x1401f6fc1 | 650      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fc1#728 | 0x1401f6fc1 | 728      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fc1#746 | 0x1401f6fc1 | 746      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fc1#764 | 0x1401f6fc1 | 764      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fc1#782 | 0x1401f6fc1 | 782      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fc6#82  | 0x1401f6fc6 | 82       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fcd#822 | 0x1401f6fcd | 822      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f6fd4#88  | 0x1401f6fd4 | 88       | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f6fd4#651 | 0x1401f6fd4 | 651      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd4#729 | 0x1401f6fd4 | 729      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd4#747 | 0x1401f6fd4 | 747      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd4#765 | 0x1401f6fd4 | 765      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd4#783 | 0x1401f6fd4 | 783      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd9#89  | 0x1401f6fd9 | 89       | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd9#90  | 0x1401f6fd9 | 90       | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd9#96  | 0x1401f6fd9 | 96       | INT_EQUAL    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fd9#839 | 0x1401f6fd9 | 839      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fe0#101 | 0x1401f6fe0 | 101      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6fe2#102 | 0x1401f6fe2 | 102      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fe2#103 | 0x1401f6fe2 | 103      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fe2#109 | 0x1401f6fe2 | 109      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fe2#840 | 0x1401f6fe2 | 840      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fe6#115 | 0x1401f6fe6 | 115      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f6fe8#628 | 0x1401f6fe8 | 628      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fea#117 | 0x1401f6fea | 117      | BRANCH       | true    | member           | [object Object]                                 |                 |
| 0x1401f6fec#629 | 0x1401f6fec | 629      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6fee#118 | 0x1401f6fee | 118      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fee#120 | 0x1401f6fee | 120      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f6fee#630 | 0x1401f6fee | 630      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fee#665 | 0x1401f6fee | 665      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6fee#841 | 0x1401f6fee | 841      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f6ff4#121 | 0x1401f6ff4 | 121      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f6ffb#823 | 0x1401f6ffb | 823      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7000#127 | 0x1401f7000 | 127      | CALL         | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f7000#652 | 0x1401f7000 | 652      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7000#730 | 0x1401f7000 | 730      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7000#748 | 0x1401f7000 | 748      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7000#766 | 0x1401f7000 | 766      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7000#784 | 0x1401f7000 | 784      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7009#131 | 0x1401f7009 | 131      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7009#653 | 0x1401f7009 | 653      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7009#731 | 0x1401f7009 | 731      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7009#749 | 0x1401f7009 | 749      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7009#767 | 0x1401f7009 | 767      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7009#785 | 0x1401f7009 | 785      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7013#139 | 0x1401f7013 | 139      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7016#144 | 0x1401f7016 | 144      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7018#145 | 0x1401f7018 | 145      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#147 | 0x1401f701b | 147      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#148 | 0x1401f701b | 148      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#152 | 0x1401f701b | 152      | CALLIND      | true    | member           | [object Object]                                 |                 |
| 0x1401f701b#654 | 0x1401f701b | 654      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#732 | 0x1401f701b | 732      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#750 | 0x1401f701b | 750      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#768 | 0x1401f701b | 768      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#786 | 0x1401f701b | 786      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f701b#842 | 0x1401f701b | 842      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f7023#160 | 0x1401f7023 | 160      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7023#670 | 0x1401f7023 | 670      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7023#742 | 0x1401f7023 | 742      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7023#760 | 0x1401f7023 | 760      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7023#778 | 0x1401f7023 | 778      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7023#796 | 0x1401f7023 | 796      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7026#165 | 0x1401f7026 | 165      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7028#166 | 0x1401f7028 | 166      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f702b#824 | 0x1401f702b | 824      | PTRSUB       | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7030#175 | 0x1401f7030 | 175      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7033#456 | 0x1401f7033 | 456      | SUBPIECE     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7033#457 | 0x1401f7033 | 457      | PIECE        | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7033#832 | 0x1401f7033 | 832      | INT_RIGHT    | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7033#843 | 0x1401f7033 | 843      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f7036#182 | 0x1401f7036 | 182      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#183 | 0x1401f7036 | 183      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#187 | 0x1401f7036 | 187      | CALLIND      | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f7036#655 | 0x1401f7036 | 655      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#733 | 0x1401f7036 | 733      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#751 | 0x1401f7036 | 751      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#769 | 0x1401f7036 | 769      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#787 | 0x1401f7036 | 787      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7036#844 | 0x1401f7036 | 844      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f7039#190 | 0x1401f7039 | 190      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f7042#669 | 0x1401f7042 | 669      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7042#741 | 0x1401f7042 | 741      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7042#759 | 0x1401f7042 | 759      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7042#777 | 0x1401f7042 | 777      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7042#795 | 0x1401f7042 | 795      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7042#825 | 0x1401f7042 | 825      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7049#195 | 0x1401f7049 | 195      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7049#656 | 0x1401f7049 | 656      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7049#734 | 0x1401f7049 | 734      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7049#752 | 0x1401f7049 | 752      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7049#770 | 0x1401f7049 | 770      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7049#788 | 0x1401f7049 | 788      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f704e#197 | 0x1401f704e | 197      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f704e#203 | 0x1401f704e | 203      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f704e#826 | 0x1401f704e | 826      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f704e#845 | 0x1401f704e | 845      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f7055#208 | 0x1401f7055 | 208      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7057#210 | 0x1401f7057 | 210      | LOAD         | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7057#216 | 0x1401f7057 | 216      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7057#827 | 0x1401f7057 | 827      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7057#846 | 0x1401f7057 | 846      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f705e#221 | 0x1401f705e | 221      | CBRANCH      | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7060#828 | 0x1401f7060 | 828      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7064#226 | 0x1401f7064 | 226      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7064#657 | 0x1401f7064 | 657      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7064#735 | 0x1401f7064 | 735      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7064#753 | 0x1401f7064 | 753      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7064#771 | 0x1401f7064 | 771      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7064#789 | 0x1401f7064 | 789      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#668 | 0x1401f7069 | 668      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#740 | 0x1401f7069 | 740      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#758 | 0x1401f7069 | 758      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#776 | 0x1401f7069 | 776      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#794 | 0x1401f7069 | 794      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7069#829 | 0x1401f7069 | 829      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f706d#231 | 0x1401f706d | 231      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f706d#658 | 0x1401f706d | 658      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f706d#736 | 0x1401f706d | 736      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f706d#754 | 0x1401f706d | 754      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f706d#772 | 0x1401f706d | 772      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f706d#790 | 0x1401f706d | 790      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7072#830 | 0x1401f7072 | 830      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f7076#236 | 0x1401f7076 | 236      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f7076#659 | 0x1401f7076 | 659      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7076#737 | 0x1401f7076 | 737      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7076#755 | 0x1401f7076 | 755      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7076#773 | 0x1401f7076 | 773      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7076#791 | 0x1401f7076 | 791      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f707b#831 | 0x1401f707b | 831      | PTRADD       | true    | member           | [object Object],[object Object],[object Object] | [object Object] |
| 0x1401f707f#241 | 0x1401f707f | 241      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f707f#660 | 0x1401f707f | 660      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f707f#738 | 0x1401f707f | 738      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f707f#756 | 0x1401f707f | 756      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f707f#774 | 0x1401f707f | 774      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f707f#792 | 0x1401f707f | 792      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f7084#667 | 0x1401f7084 | 667      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70a5#272 | 0x1401f70a5 | 272      | RETURN       | true    | member           | [object Object]                                 |                 |
| 0x1401f70a5#661 | 0x1401f70a5 | 661      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f70a6#282 | 0x1401f70a6 | 282      | INT_ADD      | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70a6#284 | 0x1401f70a6 | 284      | STORE        | true    | member           | [object Object],[object Object],[object Object] |                 |
| 0x1401f70a6#666 | 0x1401f70a6 | 666      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70a6#837 | 0x1401f70a6 | 837      | CAST         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f70b2#288 | 0x1401f70b2 | 288      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f70b2#290 | 0x1401f70b2 | 290      | RETURN       | true    | member           | [object Object]                                 |                 |
| 0x1401f70b2#649 | 0x1401f70b2 | 649      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70b2#662 | 0x1401f70b2 | 662      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f70b2#727 | 0x1401f70b2 | 727      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70b2#745 | 0x1401f70b2 | 745      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70b2#763 | 0x1401f70b2 | 763      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70b2#781 | 0x1401f70b2 | 781      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70bd#294 | 0x1401f70bd | 294      | CALL         | true    | member           | [object Object],[object Object]                 |                 |
| 0x1401f70bd#296 | 0x1401f70bd | 296      | RETURN       | true    | member           | [object Object]                                 |                 |
| 0x1401f70bd#648 | 0x1401f70bd | 648      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70bd#663 | 0x1401f70bd | 663      | COPY         | true    | member           | [object Object]                                 | [object Object] |
| 0x1401f70bd#726 | 0x1401f70bd | 726      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70bd#744 | 0x1401f70bd | 744      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70bd#762 | 0x1401f70bd | 762      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |
| 0x1401f70bd#780 | 0x1401f70bd | 780      | INDIRECT     | true    | member           | [object Object],[object Object]                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x1401f6f79#835 | 0x1401f6f79#21  | 1           |
| 0x1401f6f6b#820 | 0x1401f6f79#835 | 0           |
| 0x1401f6f9a#833 | 0x1401f6f9a#725 | 0           |
| 0x1401f6f9a#834 | 0x1401f6f9a#743 | 0           |
| 0x1401f6f8c#38  | 0x1401f6f9a#761 | 0           |
| 0x1401f6f79#21  | 0x1401f6f9a#779 | 0           |
| 0x1401f6f9a#44  | 0x1401f6f9f#49  | 0           |
| 0x1401f6f9f#49  | 0x1401f6fa1#55  | 1           |
| 0x1401f6fa7#836 | 0x1401f6fa7#57  | 1           |
| 0x1401f6fa7#57  | 0x1401f6fa7#63  | 0           |
| 0x1401f6fa7#56  | 0x1401f6fa7#836 | 0           |
| 0x1401f6fa7#63  | 0x1401f6fae#68  | 1           |
| 0x1401f6fb6#838 | 0x1401f6fb6#74  | 1           |
| 0x1401f6fb4#69  | 0x1401f6fb6#74  | 2           |
| 0x1401f6f9a#647 | 0x1401f6fb6#664 | 0           |
| 0x1401f6fb6#72  | 0x1401f6fb6#838 | 0           |
| 0x1401f6fb9#75  | 0x1401f6fc1#81  | 1           |
| 0x1401f6fbd#821 | 0x1401f6fc1#81  | 2           |
| 0x1401f6fb6#664 | 0x1401f6fc1#650 | 0           |
| 0x1401f6f9a#725 | 0x1401f6fc1#728 | 0           |
| 0x1401f6f9a#743 | 0x1401f6fc1#746 | 0           |
| 0x1401f6f9a#761 | 0x1401f6fc1#764 | 0           |
| 0x1401f6f9a#779 | 0x1401f6fc1#782 | 0           |
| 0x1401f6fc6#82  | 0x1401f6fd4#88  | 1           |
| 0x1401f6fcd#822 | 0x1401f6fd4#88  | 2           |
| 0x1401f6fc1#650 | 0x1401f6fd4#651 | 0           |
| 0x1401f6fc1#728 | 0x1401f6fd4#729 | 0           |
| 0x1401f6fc1#746 | 0x1401f6fd4#747 | 0           |
| 0x1401f6fc1#764 | 0x1401f6fd4#765 | 0           |
| 0x1401f6fc1#782 | 0x1401f6fd4#783 | 0           |
| 0x1401f6fd9#839 | 0x1401f6fd9#90  | 1           |
| 0x1401f6fd9#90  | 0x1401f6fd9#96  | 0           |
| 0x1401f6fd9#89  | 0x1401f6fd9#839 | 0           |
| 0x1401f6fd9#96  | 0x1401f6fe0#101 | 1           |
| 0x1401f6fe2#840 | 0x1401f6fe2#103 | 1           |
| 0x1401f6fe2#103 | 0x1401f6fe2#109 | 0           |
| 0x1401f6fe2#102 | 0x1401f6fe2#840 | 0           |
| 0x1401f6fe2#109 | 0x1401f6fe6#115 | 1           |
| 0x1401f6fee#841 | 0x1401f6fee#120 | 1           |
| 0x1401f6fee#630 | 0x1401f6fee#120 | 2           |
| 0x1401f6fe8#628 | 0x1401f6fee#630 | 0           |
| 0x1401f6fec#629 | 0x1401f6fee#630 | 1           |
| 0x1401f6fd4#651 | 0x1401f6fee#665 | 0           |
| 0x1401f6fee#118 | 0x1401f6fee#841 | 0           |
| 0x1401f6ffb#823 | 0x1401f7000#127 | 1           |
| 0x1401f6ff4#121 | 0x1401f7000#127 | 2           |
| 0x1401f6fee#665 | 0x1401f7000#652 | 0           |
| 0x1401f6fd4#729 | 0x1401f7000#730 | 0           |
| 0x1401f6fd4#747 | 0x1401f7000#748 | 0           |
| 0x1401f6fd4#765 | 0x1401f7000#766 | 0           |
| 0x1401f6fd4#783 | 0x1401f7000#784 | 0           |
| 0x1401f7000#652 | 0x1401f7009#653 | 0           |
| 0x1401f7000#730 | 0x1401f7009#731 | 0           |
| 0x1401f7000#748 | 0x1401f7009#749 | 0           |
| 0x1401f7000#766 | 0x1401f7009#767 | 0           |
| 0x1401f7000#784 | 0x1401f7009#785 | 0           |
| 0x1401f7009#767 | 0x1401f7013#139 | 0           |
| 0x1401f7013#139 | 0x1401f7016#144 | 1           |
| 0x1401f7009#767 | 0x1401f7018#145 | 1           |
| 0x1401f7018#145 | 0x1401f701b#147 | 0           |
| 0x1401f701b#842 | 0x1401f701b#148 | 1           |
| 0x1401f701b#148 | 0x1401f701b#152 | 0           |
| 0x1401f7009#653 | 0x1401f701b#654 | 0           |
| 0x1401f7009#731 | 0x1401f701b#732 | 0           |
| 0x1401f7009#749 | 0x1401f701b#750 | 0           |
| 0x1401f7009#767 | 0x1401f701b#768 | 0           |
| 0x1401f7009#785 | 0x1401f701b#786 | 0           |
| 0x1401f701b#147 | 0x1401f701b#842 | 0           |
| 0x1401f7023#778 | 0x1401f7023#160 | 0           |
| 0x1401f7009#653 | 0x1401f7023#670 | 0           |
| 0x1401f701b#654 | 0x1401f7023#670 | 1           |
| 0x1401f7009#731 | 0x1401f7023#742 | 0           |
| 0x1401f701b#732 | 0x1401f7023#742 | 1           |
| 0x1401f7009#749 | 0x1401f7023#760 | 0           |
| 0x1401f701b#750 | 0x1401f7023#760 | 1           |
| 0x1401f7009#767 | 0x1401f7023#778 | 0           |
| 0x1401f701b#768 | 0x1401f7023#778 | 1           |
| 0x1401f7009#785 | 0x1401f7023#796 | 0           |
| 0x1401f701b#786 | 0x1401f7023#796 | 1           |
| 0x1401f7023#160 | 0x1401f7026#165 | 1           |
| 0x1401f7023#778 | 0x1401f7028#166 | 1           |
| 0x1401f7023#778 | 0x1401f7030#175 | 0           |
| 0x1401f702b#824 | 0x1401f7030#175 | 1           |
| 0x1401f7033#832 | 0x1401f7033#456 | 0           |
| 0x1401f7033#456 | 0x1401f7033#457 | 0           |
| 0x1401f7030#175 | 0x1401f7033#457 | 1           |
| 0x1401f7033#843 | 0x1401f7033#832 | 0           |
| 0x1401f702b#824 | 0x1401f7033#843 | 0           |
| 0x1401f7028#166 | 0x1401f7036#182 | 0           |
| 0x1401f7036#844 | 0x1401f7036#183 | 1           |
| 0x1401f7036#183 | 0x1401f7036#187 | 0           |
| 0x1401f7023#778 | 0x1401f7036#187 | 1           |
| 0x1401f7033#457 | 0x1401f7036#187 | 2           |
| 0x1401f7023#670 | 0x1401f7036#655 | 0           |
| 0x1401f7023#742 | 0x1401f7036#733 | 0           |
| 0x1401f7023#760 | 0x1401f7036#751 | 0           |
| 0x1401f7023#778 | 0x1401f7036#769 | 0           |
| 0x1401f7023#796 | 0x1401f7036#787 | 0           |
| 0x1401f7036#182 | 0x1401f7036#844 | 0           |
| 0x1401f7023#670 | 0x1401f7042#669 | 0           |
| 0x1401f7036#655 | 0x1401f7042#669 | 1           |
| 0x1401f7023#742 | 0x1401f7042#741 | 0           |
| 0x1401f7036#733 | 0x1401f7042#741 | 1           |
| 0x1401f7023#760 | 0x1401f7042#759 | 0           |
| 0x1401f7036#751 | 0x1401f7042#759 | 1           |
| 0x1401f7023#778 | 0x1401f7042#777 | 0           |
| 0x1401f7039#190 | 0x1401f7042#777 | 1           |
| 0x1401f7023#796 | 0x1401f7042#795 | 0           |
| 0x1401f7036#787 | 0x1401f7042#795 | 1           |
| 0x1401f7042#825 | 0x1401f7049#195 | 1           |
| 0x1401f7042#669 | 0x1401f7049#656 | 0           |
| 0x1401f7042#741 | 0x1401f7049#734 | 0           |
| 0x1401f7042#759 | 0x1401f7049#752 | 0           |
| 0x1401f7042#777 | 0x1401f7049#770 | 0           |
| 0x1401f7042#795 | 0x1401f7049#788 | 0           |
| 0x1401f704e#845 | 0x1401f704e#197 | 1           |
| 0x1401f704e#197 | 0x1401f704e#203 | 0           |
| 0x1401f704e#826 | 0x1401f704e#845 | 0           |
| 0x1401f704e#203 | 0x1401f7055#208 | 1           |
| 0x1401f7057#846 | 0x1401f7057#210 | 1           |
| 0x1401f7057#210 | 0x1401f7057#216 | 0           |
| 0x1401f7057#827 | 0x1401f7057#846 | 0           |
| 0x1401f7057#216 | 0x1401f705e#221 | 1           |
| 0x1401f7060#828 | 0x1401f7064#226 | 1           |
| 0x1401f7049#656 | 0x1401f7064#657 | 0           |
| 0x1401f7049#734 | 0x1401f7064#735 | 0           |
| 0x1401f7049#752 | 0x1401f7064#753 | 0           |
| 0x1401f7049#770 | 0x1401f7064#771 | 0           |
| 0x1401f7049#788 | 0x1401f7064#789 | 0           |
| 0x1401f7049#656 | 0x1401f7069#668 | 0           |
| 0x1401f7064#657 | 0x1401f7069#668 | 1           |
| 0x1401f7049#734 | 0x1401f7069#740 | 0           |
| 0x1401f7064#735 | 0x1401f7069#740 | 1           |
| 0x1401f7049#752 | 0x1401f7069#758 | 0           |
| 0x1401f7064#753 | 0x1401f7069#758 | 1           |
| 0x1401f7049#770 | 0x1401f7069#776 | 0           |
| 0x1401f7064#771 | 0x1401f7069#776 | 1           |
| 0x1401f7049#788 | 0x1401f7069#794 | 0           |
| 0x1401f7064#789 | 0x1401f7069#794 | 1           |
| 0x1401f7069#829 | 0x1401f706d#231 | 1           |
| 0x1401f7069#668 | 0x1401f706d#658 | 0           |
| 0x1401f7069#740 | 0x1401f706d#736 | 0           |
| 0x1401f7069#758 | 0x1401f706d#754 | 0           |
| 0x1401f7069#776 | 0x1401f706d#772 | 0           |
| 0x1401f7069#794 | 0x1401f706d#790 | 0           |
| 0x1401f7072#830 | 0x1401f7076#236 | 1           |
| 0x1401f706d#658 | 0x1401f7076#659 | 0           |
| 0x1401f706d#736 | 0x1401f7076#737 | 0           |
| 0x1401f706d#754 | 0x1401f7076#755 | 0           |
| 0x1401f706d#772 | 0x1401f7076#773 | 0           |
| 0x1401f706d#790 | 0x1401f7076#791 | 0           |
| 0x1401f707b#831 | 0x1401f707f#241 | 1           |
| 0x1401f7076#659 | 0x1401f707f#660 | 0           |
| 0x1401f7076#737 | 0x1401f707f#738 | 0           |
| 0x1401f7076#755 | 0x1401f707f#756 | 0           |
| 0x1401f7076#773 | 0x1401f707f#774 | 0           |
| 0x1401f7076#791 | 0x1401f707f#792 | 0           |
| 0x1401f7049#656 | 0x1401f7084#667 | 0           |
| 0x1401f707f#660 | 0x1401f7084#667 | 1           |
| 0x1401f7084#667 | 0x1401f70a5#661 | 0           |
| 0x1401f70a6#837 | 0x1401f70a6#284 | 1           |
| 0x1401f6f9a#647 | 0x1401f70a6#666 | 0           |
| 0x1401f70a6#282 | 0x1401f70a6#837 | 0           |
| 0x1401f70a6#666 | 0x1401f70b2#649 | 0           |
| 0x1401f70b2#649 | 0x1401f70b2#662 | 0           |
| 0x1401f6f9a#725 | 0x1401f70b2#727 | 0           |
| 0x1401f6f9a#743 | 0x1401f70b2#745 | 0           |
| 0x1401f6f9a#761 | 0x1401f70b2#763 | 0           |
| 0x1401f6f9a#779 | 0x1401f70b2#781 | 0           |
| 0x1401f6f9a#647 | 0x1401f70bd#648 | 0           |
| 0x1401f70bd#648 | 0x1401f70bd#663 | 0           |
| 0x1401f6f9a#725 | 0x1401f70bd#726 | 0           |
| 0x1401f6f9a#743 | 0x1401f70bd#744 | 0           |
| 0x1401f6f9a#761 | 0x1401f70bd#762 | 0           |
| 0x1401f6f9a#779 | 0x1401f70bd#780 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f6f9a#44  | direct_call        | 0             |             |
| 0x1401f6fa1#55  | conditional_branch |               | 1           |
| 0x1401f6fa7#57  | memory_read        | 1             |             |
| 0x1401f6fae#68  | conditional_branch |               | 1           |
| 0x1401f6fb4#69  | memory_read        | 1             |             |
| 0x1401f6fb6#74  | memory_write       | 1             | 2           |
| 0x1401f6fc1#81  | direct_call        | 0             |             |
| 0x1401f6fd4#88  | direct_call        | 0             |             |
| 0x1401f6fd9#90  | memory_read        | 1             |             |
| 0x1401f6fe0#101 | conditional_branch |               | 1           |
| 0x1401f6fe2#103 | memory_read        | 1             |             |
| 0x1401f6fe6#115 | conditional_branch |               | 1           |
| 0x1401f6fee#120 | memory_write       | 1             | 2           |
| 0x1401f7000#127 | direct_call        | 0             |             |
| 0x1401f7009#131 | direct_call        | 0             |             |
| 0x1401f7016#144 | conditional_branch |               | 1           |
| 0x1401f7018#145 | memory_read        | 1             |             |
| 0x1401f701b#148 | memory_read        | 1             |             |
| 0x1401f701b#152 | indirect_call      | 0             |             |
| 0x1401f7026#165 | conditional_branch |               | 1           |
| 0x1401f7028#166 | memory_read        | 1             |             |
| 0x1401f7036#183 | memory_read        | 1             |             |
| 0x1401f7036#187 | indirect_call      | 0             |             |
| 0x1401f7049#195 | direct_call        | 0             |             |
| 0x1401f704e#197 | memory_read        | 1             |             |
| 0x1401f7055#208 | conditional_branch |               | 1           |
| 0x1401f7057#210 | memory_read        | 1             |             |
| 0x1401f705e#221 | conditional_branch |               | 1           |
| 0x1401f7064#226 | direct_call        | 0             |             |
| 0x1401f706d#231 | direct_call        | 0             |             |
| 0x1401f7076#236 | direct_call        | 0             |             |
| 0x1401f707f#241 | direct_call        | 0             |             |
| 0x1401f70a6#284 | memory_write       | 1             | 2           |
| 0x1401f70b2#288 | direct_call        | 0             |             |
| 0x1401f70bd#294 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /longlong     |
| 1       | param_2 | /undefined4 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f6f9a#833 | 0           |
| 1       | 0x1401f6f9a#834 | 0           |
| 0       | 0x1401f6fa7#56  | 0           |
| 1       | 0x1401f6fb4#69  | 1           |
| 0       | 0x1401f6fb6#72  | 0           |
| 0       | 0x1401f6fb9#75  | 0           |
| 1       | 0x1401f6fbd#821 | 0           |
| 0       | 0x1401f6fc6#82  | 0           |
| 1       | 0x1401f6fcd#822 | 0           |
| 0       | 0x1401f6fd9#89  | 0           |
| 0       | 0x1401f6fe2#102 | 0           |
| 0       | 0x1401f6fee#118 | 0           |
| 0       | 0x1401f6ff4#121 | 0           |
| 0       | 0x1401f7009#131 | 1           |
| 1       | 0x1401f7042#825 | 0           |
| 1       | 0x1401f704e#826 | 0           |
| 1       | 0x1401f7057#827 | 0           |
| 1       | 0x1401f7060#828 | 0           |
| 1       | 0x1401f7069#829 | 0           |
| 1       | 0x1401f7072#830 | 0           |
| 1       | 0x1401f707b#831 | 0           |
| 0       | 0x1401f70a6#282 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f70b2 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f70bd to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401f70b2 to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Ghidra Listing reports a terminal call at 0x1401f70bd to 0x140325560 FUN_140325560 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

