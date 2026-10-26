## evidence_id

ev_b303b3730f9cefcf3457e1e979a2ffe97305e50aa85dbf6014cf66219c38cefe

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
| procedure | 0x140313b10 |

## raw_result.value.procedure.address

0x140313b10

## raw_result.value.procedure.name

FUN_140313b10

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
| 0x140313b10 | 0x140313b77 |

## raw_result.value.procedure.body.total_bytes

104

## raw_result.value.procedure.body.span_bytes

104

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_140313b10()

## raw_result.value.procedure.locals



## raw_result.value.pseudocode


undefined8 * FUN_140313b10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *_Buf1;
  size_t _Size;
  int iVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  _Buf1 = (void *)*param_2;
  _Size = param_2[1];
  for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 9) {
    puVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    if ((_Size == param_1[2]) && ((_Size == 0 || (iVar2 = memcmp(_Buf1,puVar3,_Size), iVar2 == 0))))
    break;
  }
  puVar3 = (undefined8 *)0x0;
  if (param_1 != puVar1) {
    puVar3 = param_1 + 4;
  }
  return puVar3;
}



## raw_result.value.assembly

0x140313b10: PUSH RBX,0x140313b12: PUSH RBP,0x140313b13: PUSH RSI,0x140313b14: PUSH RDI,0x140313b15: SUB RSP, 0x28,0x140313b19: MOV RSI, qword ptr [RCX + 0x8],0x140313b1d: MOV RBX, qword ptr [RCX],0x140313b20: MOV RBP, qword ptr [RDX],0x140313b23: MOV RDI, qword ptr [RDX + 0x8],0x140313b27: CMP RBX, RSI,0x140313b2a: JZ 0x140313b62,0x140313b2c: NOP dword ptr [RAX],0x140313b30: CMP qword ptr [RBX + 0x18], 0xf,0x140313b35: JBE 0x140313b3c,0x140313b37: MOV RDX, qword ptr [RBX],0x140313b3a: JMP 0x140313b3f,0x140313b3c: MOV RDX, RBX,0x140313b3f: CMP RDI, qword ptr [RBX + 0x10],0x140313b43: JNZ 0x140313b59,0x140313b45: TEST RDI, RDI,0x140313b48: JZ 0x140313b62,0x140313b4a: MOV R8, RDI,0x140313b4d: MOV RCX, RBP,0x140313b50: CALL 0x14035fe70,0x140313b55: TEST EAX, EAX,0x140313b57: JZ 0x140313b62,0x140313b59: ADD RBX, 0x48,0x140313b5d: CMP RBX, RSI,0x140313b60: JNZ 0x140313b30,0x140313b62: XOR EAX, EAX,0x140313b64: LEA RCX, [RBX + 0x20],0x140313b68: CMP RBX, RSI,0x140313b6b: CMOVNZ RAX, RCX,0x140313b6f: ADD RSP, 0x28,0x140313b73: POP RDI,0x140313b74: POP RSI,0x140313b75: POP RBP,0x140313b76: POP RBX,0x140313b77: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1402d8690 | FUN_1402d8690 | [object Object] | [object Object] |
| 0x1402d8830 | FUN_1402d8830 | [object Object] | [object Object] |
| 0x1402d88b0 | FUN_1402d88b0 | [object Object] | [object Object] |
| 0x1402d8a70 | FUN_1402d8a70 | [object Object] | [object Object] |
| 0x1402d8c00 | FUN_1402d8c00 | [object Object] | [object Object] |
| 0x1402d8d50 | FUN_1402d8d50 | [object Object] | [object Object] |
| 0x1402d9430 | FUN_1402d9430 | [object Object] | [object Object] |
| 0x1402d9840 | FUN_1402d9840 | [object Object] | [object Object] |
| 0x1402da0c0 | FUN_1402da0c0 | [object Object] | [object Object] |
| 0x1402da760 | FUN_1402da760 | [object Object] | [object Object] |
| 0x1402daad0 | FUN_1402daad0 | [object Object] | [object Object] |
| 0x1402dd2d0 | FUN_1402dd2d0 | [object Object] | [object Object] |
| 0x1402dd5d0 | FUN_1402dd5d0 | [object Object] | [object Object] |
| 0x1402de480 | FUN_1402de480 | [object Object] | [object Object] |
| 0x1402deb60 | FUN_1402deb60 | [object Object] | [object Object] |
| 0x1402f5b20 | FUN_1402f5b20 | [object Object] | [object Object] |
| 0x1402f60b0 | FUN_1402f60b0 | [object Object] | [object Object] |
| 0x1402f79e0 | FUN_1402f79e0 | [object Object] | [object Object] |
| 0x1402f7b50 | FUN_1402f7b50 | [object Object] | [object Object] |
| 0x1402f7d30 | FUN_1402f7d30 | [object Object] | [object Object] |
| 0x1402f7f10 | FUN_1402f7f10 | [object Object] | [object Object] |
| 0x1402f8490 | FUN_1402f8490 | [object Object] | [object Object] |
| 0x1402fc390 | FUN_1402fc390 | [object Object] | [object Object] |
| 0x140301ce0 | FUN_140301ce0 | [object Object] | [object Object] |
| 0x140301e80 | FUN_140301e80 | [object Object] | [object Object] |
| 0x1403053d0 | FUN_1403053d0 | [object Object] | [object Object] |
| 0x140305440 | FUN_140305440 | [object Object] | [object Object] |
| 0x140309020 | FUN_140309020 | [object Object] | [object Object] |
| 0x1403092f0 | FUN_1403092f0 | [object Object] | [object Object] |
| 0x140309ea0 | FUN_140309ea0 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name   | classification  | body            |
|-------------|--------|-----------------|-----------------|
| 0x14035fe70 | memcmp | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1402d86b7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d86fb    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d87d6    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d8846    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d88d2    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d8aa7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d8b3c    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d8c26    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d8d72    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9487    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9526    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d961c    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d98ba    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d98f3    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d992a    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9961    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9998    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d99cf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9a06    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9a3d    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9a7e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9abf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9b00    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9bb1    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9c5f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9d13    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9dcf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9e7d    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9ebb    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9f35    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9feb    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da1e0    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da23b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da442    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da516    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da5d6    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da84f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da8f2    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da993    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402daa34    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dab46    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dab92    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dad95    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db093    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db2bf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db384    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db3c9    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db40c    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db836    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db9ab    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbadb    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbb1e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbc44    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbc8b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbe2a    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbeb7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbf43    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbf63    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc01b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc0b7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc0fc    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc17c    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc1fc    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc253    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc2b4    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc315    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc376    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc3d7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc438    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc499    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc500    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc5a9    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc5e1    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc626    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc66b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc6b0    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc6f5    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc73a    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc77f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc79f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc817    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc8f0    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc930    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcb24    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcb6a    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcbb0    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcc05    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dccc6    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcd0e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcd2e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcd9f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcdde    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dce40    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcf39    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcfc4    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd074    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd0f5    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd129    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd163    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd397    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd421    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd5f2    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402de528    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402de5fe    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402de6d4    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402de796    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402de8ab    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dece9    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402ded84    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dee95    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402defe3    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f5b60    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f615b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f635e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f644d    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f64cf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f6551    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f65a1    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f67cc    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f7a16    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f7b99    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f7d76    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f7f4f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f84db    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402fc47d    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402fc4d7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402fc538    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402fc599    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402fc66a    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140301d10    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403021c1    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403024bf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030259c    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403026f7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403027b7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302814    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302880    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302b26    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302b67    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302bf7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302dd7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302f33    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030305e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403031e9    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403032b8    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403053ed    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030546f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403090b9    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403090de    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309394    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403093cb    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309402    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309439    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030952b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309629    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403096c1    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309759    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309fa4    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a010    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a081    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a0d7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a10e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e7118    | 0x140313b10    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140313b2a    | 0x140313b62    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b35    | 0x140313b3c    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b3a    | 0x140313b3f    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b43    | 0x140313b59    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b48    | 0x140313b62    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b50    | 0x14035fe70    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b57    | 0x140313b62    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b60    | 0x140313b30    | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x140313b30 | LAB_140313b30 | 0x140313b60    |
| 0x140313b3c | LAB_140313b3c | 0x140313b35    |
| 0x140313b3f | LAB_140313b3f | 0x140313b3a    |
| 0x140313b59 | LAB_140313b59 | 0x140313b43    |
| 0x140313b62 | LAB_140313b62 | 0x140313b2a    |
| 0x140313b62 | LAB_140313b62 | 0x140313b48    |
| 0x140313b62 | LAB_140313b62 | 0x140313b57    |
| 0x14035fe70 | memcmp        | 0x140313b50    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140313b10 | 0x140313b2c | 0x140313b2c,0x140313b62 |
| 0x140313b2c | 0x140313b30 | 0x140313b30             |
| 0x140313b30 | 0x140313b37 | 0x140313b37,0x140313b3c |
| 0x140313b37 | 0x140313b3c | 0x140313b3f             |
| 0x140313b3c | 0x140313b3f | 0x140313b3f             |
| 0x140313b3f | 0x140313b45 | 0x140313b45,0x140313b59 |
| 0x140313b45 | 0x140313b4a | 0x140313b4a,0x140313b62 |
| 0x140313b4a | 0x140313b59 | 0x140313b59,0x140313b62 |
| 0x140313b59 | 0x140313b62 | 0x140313b30,0x140313b62 |
| 0x140313b62 | 0x140313b78 |                         |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x140313b19#22  | 0x140313b19 | 22       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b19#317 | 0x140313b19 | 317      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b19#328 | 0x140313b19 | 328      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b1d#24  | 0x140313b1d | 24       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b1d#330 | 0x140313b1d | 330      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b20#26  | 0x140313b20 | 26       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b20#329 | 0x140313b20 | 329      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b23#29  | 0x140313b23 | 29       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b23#318 | 0x140313b23 | 318      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b27#36  | 0x140313b27 | 36       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b2a#41  | 0x140313b2a | 41       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b2a#315 | 0x140313b2a | 315      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b30#43  | 0x140313b30 | 43       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b30#319 | 0x140313b30 | 319      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b35#54  | 0x140313b35 | 54       | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b35#55  | 0x140313b35 | 55       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b35#327 | 0x140313b35 | 327      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b35#331 | 0x140313b35 | 331      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b37#56  | 0x140313b37 | 56       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b37#332 | 0x140313b37 | 332      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b3a#58  | 0x140313b3a | 58       | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x140313b3a#326 | 0x140313b3a | 326      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b3f#60  | 0x140313b3f | 60       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b3f#66  | 0x140313b3f | 66       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b3f#243 | 0x140313b3f | 243      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b3f#320 | 0x140313b3f | 320      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b43#72  | 0x140313b43 | 72       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b45#77  | 0x140313b45 | 77       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b48#82  | 0x140313b48 | 82       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b50#87  | 0x140313b50 | 87       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140313b55#92  | 0x140313b55 | 92       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b57#97  | 0x140313b57 | 97       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b59#321 | 0x140313b59 | 321      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b62#229 | 0x140313b62 | 229      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b64#322 | 0x140313b64 | 322      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b68#136 | 0x140313b68 | 136      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b6b#144 | 0x140313b6b | 144      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b6b#324 | 0x140313b6b | 324      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b6b#325 | 0x140313b6b | 325      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b6f#234 | 0x140313b6f | 234      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b77#173 | 0x140313b77 | 173      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x140313b19#317 | 0x140313b19#22  | 1           |
| 0x140313b19#22  | 0x140313b19#328 | 0           |
| 0x140313b1d#24  | 0x140313b1d#330 | 0           |
| 0x140313b20#26  | 0x140313b20#329 | 0           |
| 0x140313b23#318 | 0x140313b23#29  | 1           |
| 0x140313b2a#315 | 0x140313b27#36  | 0           |
| 0x140313b19#328 | 0x140313b27#36  | 1           |
| 0x140313b27#36  | 0x140313b2a#41  | 1           |
| 0x140313b1d#330 | 0x140313b2a#315 | 0           |
| 0x140313b59#321 | 0x140313b2a#315 | 1           |
| 0x140313b30#319 | 0x140313b30#43  | 1           |
| 0x140313b2a#315 | 0x140313b30#319 | 0           |
| 0x140313b35#331 | 0x140313b35#54  | 1           |
| 0x140313b35#54  | 0x140313b35#55  | 1           |
| 0x140313b2a#315 | 0x140313b35#327 | 0           |
| 0x140313b30#43  | 0x140313b35#331 | 0           |
| 0x140313b2a#315 | 0x140313b37#56  | 1           |
| 0x140313b37#56  | 0x140313b37#332 | 0           |
| 0x140313b37#332 | 0x140313b3a#326 | 0           |
| 0x140313b3f#320 | 0x140313b3f#60  | 1           |
| 0x140313b23#29  | 0x140313b3f#66  | 0           |
| 0x140313b3f#60  | 0x140313b3f#66  | 1           |
| 0x140313b3a#326 | 0x140313b3f#243 | 0           |
| 0x140313b35#327 | 0x140313b3f#243 | 1           |
| 0x140313b2a#315 | 0x140313b3f#320 | 0           |
| 0x140313b3f#66  | 0x140313b43#72  | 1           |
| 0x140313b23#29  | 0x140313b45#77  | 0           |
| 0x140313b45#77  | 0x140313b48#82  | 1           |
| 0x140313b20#329 | 0x140313b50#87  | 1           |
| 0x140313b3f#243 | 0x140313b50#87  | 2           |
| 0x140313b23#29  | 0x140313b50#87  | 3           |
| 0x140313b50#87  | 0x140313b55#92  | 0           |
| 0x140313b55#92  | 0x140313b57#97  | 1           |
| 0x140313b2a#315 | 0x140313b59#321 | 0           |
| 0x140313b2a#315 | 0x140313b64#322 | 0           |
| 0x140313b2a#315 | 0x140313b68#136 | 0           |
| 0x140313b19#328 | 0x140313b68#136 | 1           |
| 0x140313b68#136 | 0x140313b6b#144 | 1           |
| 0x140313b62#229 | 0x140313b6b#324 | 0           |
| 0x140313b64#322 | 0x140313b6b#325 | 0           |
| 0x140313b6b#324 | 0x140313b6f#234 | 0           |
| 0x140313b6b#325 | 0x140313b6f#234 | 1           |
| 0x140313b6f#234 | 0x140313b77#173 | 1           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |
| 1       | param_2 | /undefined8 * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x140313b19#317 | 0           |
| 0       | 0x140313b1d#24  | 1           |
| 1       | 0x140313b20#26  | 1           |
| 1       | 0x140313b23#318 | 0           |
| 0       | 0x140313b27#36  | 0           |
| 0       | 0x140313b2a#315 | 0           |
| 0       | 0x140313b2a#315 | 1           |
| 0       | 0x140313b30#319 | 0           |
| 0       | 0x140313b35#327 | 0           |
| 0       | 0x140313b37#56  | 1           |
| 0       | 0x140313b3f#320 | 0           |
| 0       | 0x140313b59#321 | 0           |
| 0       | 0x140313b64#322 | 0           |
| 0       | 0x140313b68#136 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x140313b19#22  | memory_read        | 1             |             |
| 0x140313b1d#24  | memory_read        | 1             |             |
| 0x140313b20#26  | memory_read        | 1             |             |
| 0x140313b23#29  | memory_read        | 1             |             |
| 0x140313b2a#41  | conditional_branch |               | 1           |
| 0x140313b30#43  | memory_read        | 1             |             |
| 0x140313b35#55  | conditional_branch |               | 1           |
| 0x140313b37#56  | memory_read        | 1             |             |
| 0x140313b3f#60  | memory_read        | 1             |             |
| 0x140313b43#72  | conditional_branch |               | 1           |
| 0x140313b48#82  | conditional_branch |               | 1           |
| 0x140313b50#87  | direct_call        | 0             |             |
| 0x140313b57#97  | conditional_branch |               | 1           |
| 0x140313b6b#144 | conditional_branch |               | 1           |

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

0x140313b10

## normalized_result.procedure.name

FUN_140313b10

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
| 0x140313b10 | 0x140313b77 |

## normalized_result.procedure.body.total_bytes

104

## normalized_result.procedure.body.span_bytes

104

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_140313b10()

## normalized_result.procedure.locals



## normalized_result.pseudocode


undefined8 * FUN_140313b10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *_Buf1;
  size_t _Size;
  int iVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  _Buf1 = (void *)*param_2;
  _Size = param_2[1];
  for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 9) {
    puVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    if ((_Size == param_1[2]) && ((_Size == 0 || (iVar2 = memcmp(_Buf1,puVar3,_Size), iVar2 == 0))))
    break;
  }
  puVar3 = (undefined8 *)0x0;
  if (param_1 != puVar1) {
    puVar3 = param_1 + 4;
  }
  return puVar3;
}



## normalized_result.assembly

0x140313b10: PUSH RBX,0x140313b12: PUSH RBP,0x140313b13: PUSH RSI,0x140313b14: PUSH RDI,0x140313b15: SUB RSP, 0x28,0x140313b19: MOV RSI, qword ptr [RCX + 0x8],0x140313b1d: MOV RBX, qword ptr [RCX],0x140313b20: MOV RBP, qword ptr [RDX],0x140313b23: MOV RDI, qword ptr [RDX + 0x8],0x140313b27: CMP RBX, RSI,0x140313b2a: JZ 0x140313b62,0x140313b2c: NOP dword ptr [RAX],0x140313b30: CMP qword ptr [RBX + 0x18], 0xf,0x140313b35: JBE 0x140313b3c,0x140313b37: MOV RDX, qword ptr [RBX],0x140313b3a: JMP 0x140313b3f,0x140313b3c: MOV RDX, RBX,0x140313b3f: CMP RDI, qword ptr [RBX + 0x10],0x140313b43: JNZ 0x140313b59,0x140313b45: TEST RDI, RDI,0x140313b48: JZ 0x140313b62,0x140313b4a: MOV R8, RDI,0x140313b4d: MOV RCX, RBP,0x140313b50: CALL 0x14035fe70,0x140313b55: TEST EAX, EAX,0x140313b57: JZ 0x140313b62,0x140313b59: ADD RBX, 0x48,0x140313b5d: CMP RBX, RSI,0x140313b60: JNZ 0x140313b30,0x140313b62: XOR EAX, EAX,0x140313b64: LEA RCX, [RBX + 0x20],0x140313b68: CMP RBX, RSI,0x140313b6b: CMOVNZ RAX, RCX,0x140313b6f: ADD RSP, 0x28,0x140313b73: POP RDI,0x140313b74: POP RSI,0x140313b75: POP RBP,0x140313b76: POP RBX,0x140313b77: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1402d8690 | FUN_1402d8690 | [object Object] | [object Object] |
| 0x1402d8830 | FUN_1402d8830 | [object Object] | [object Object] |
| 0x1402d88b0 | FUN_1402d88b0 | [object Object] | [object Object] |
| 0x1402d8a70 | FUN_1402d8a70 | [object Object] | [object Object] |
| 0x1402d8c00 | FUN_1402d8c00 | [object Object] | [object Object] |
| 0x1402d8d50 | FUN_1402d8d50 | [object Object] | [object Object] |
| 0x1402d9430 | FUN_1402d9430 | [object Object] | [object Object] |
| 0x1402d9840 | FUN_1402d9840 | [object Object] | [object Object] |
| 0x1402da0c0 | FUN_1402da0c0 | [object Object] | [object Object] |
| 0x1402da760 | FUN_1402da760 | [object Object] | [object Object] |
| 0x1402daad0 | FUN_1402daad0 | [object Object] | [object Object] |
| 0x1402dd2d0 | FUN_1402dd2d0 | [object Object] | [object Object] |
| 0x1402dd5d0 | FUN_1402dd5d0 | [object Object] | [object Object] |
| 0x1402de480 | FUN_1402de480 | [object Object] | [object Object] |
| 0x1402deb60 | FUN_1402deb60 | [object Object] | [object Object] |
| 0x1402f5b20 | FUN_1402f5b20 | [object Object] | [object Object] |
| 0x1402f60b0 | FUN_1402f60b0 | [object Object] | [object Object] |
| 0x1402f79e0 | FUN_1402f79e0 | [object Object] | [object Object] |
| 0x1402f7b50 | FUN_1402f7b50 | [object Object] | [object Object] |
| 0x1402f7d30 | FUN_1402f7d30 | [object Object] | [object Object] |
| 0x1402f7f10 | FUN_1402f7f10 | [object Object] | [object Object] |
| 0x1402f8490 | FUN_1402f8490 | [object Object] | [object Object] |
| 0x1402fc390 | FUN_1402fc390 | [object Object] | [object Object] |
| 0x140301ce0 | FUN_140301ce0 | [object Object] | [object Object] |
| 0x140301e80 | FUN_140301e80 | [object Object] | [object Object] |
| 0x1403053d0 | FUN_1403053d0 | [object Object] | [object Object] |
| 0x140305440 | FUN_140305440 | [object Object] | [object Object] |
| 0x140309020 | FUN_140309020 | [object Object] | [object Object] |
| 0x1403092f0 | FUN_1403092f0 | [object Object] | [object Object] |
| 0x140309ea0 | FUN_140309ea0 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name   | classification  | body            |
|-------------|--------|-----------------|-----------------|
| 0x14035fe70 | memcmp | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1402d86b7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d86fb    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d87d6    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d8846    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d88d2    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d8aa7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d8b3c    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d8c26    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d8d72    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9487    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9526    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d961c    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d98ba    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d98f3    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d992a    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9961    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9998    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d99cf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9a06    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9a3d    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9a7e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9abf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9b00    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9bb1    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9c5f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9d13    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9dcf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9e7d    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9ebb    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9f35    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402d9feb    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da1e0    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da23b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da442    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da516    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da5d6    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da84f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da8f2    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402da993    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402daa34    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dab46    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dab92    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dad95    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db093    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db2bf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db384    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db3c9    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db40c    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db836    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402db9ab    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbadb    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbb1e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbc44    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbc8b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbe2a    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbeb7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbf43    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dbf63    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc01b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc0b7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc0fc    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc17c    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc1fc    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc253    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc2b4    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc315    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc376    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc3d7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc438    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc499    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc500    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc5a9    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc5e1    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc626    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc66b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc6b0    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc6f5    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc73a    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc77f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc79f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc817    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc8f0    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dc930    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcb24    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcb6a    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcbb0    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcc05    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dccc6    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcd0e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcd2e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcd9f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcdde    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dce40    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcf39    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dcfc4    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd074    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd0f5    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd129    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd163    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd397    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd421    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dd5f2    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402de528    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402de5fe    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402de6d4    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402de796    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402de8ab    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dece9    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402ded84    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402dee95    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402defe3    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f5b60    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f615b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f635e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f644d    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f64cf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f6551    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f65a1    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f67cc    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f7a16    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f7b99    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f7d76    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f7f4f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402f84db    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402fc47d    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402fc4d7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402fc538    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402fc599    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1402fc66a    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140301d10    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403021c1    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403024bf    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030259c    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403026f7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403027b7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302814    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302880    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302b26    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302b67    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302bf7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302dd7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140302f33    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030305e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403031e9    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403032b8    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403053ed    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030546f    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403090b9    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403090de    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309394    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403093cb    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309402    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309439    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030952b    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309629    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1403096c1    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309759    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x140309fa4    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a010    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a081    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a0d7    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x14030a10e    | 0x140313b10    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e7118    | 0x140313b10    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x140313b2a    | 0x140313b62    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b35    | 0x140313b3c    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b3a    | 0x140313b3f    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b43    | 0x140313b59    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b48    | 0x140313b62    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b50    | 0x14035fe70    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b57    | 0x140313b62    | [object Object]  | [object Object]  | [object Object] |
| 0x140313b60    | 0x140313b30    | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x140313b30 | LAB_140313b30 | 0x140313b60    |
| 0x140313b3c | LAB_140313b3c | 0x140313b35    |
| 0x140313b3f | LAB_140313b3f | 0x140313b3a    |
| 0x140313b59 | LAB_140313b59 | 0x140313b43    |
| 0x140313b62 | LAB_140313b62 | 0x140313b2a    |
| 0x140313b62 | LAB_140313b62 | 0x140313b48    |
| 0x140313b62 | LAB_140313b62 | 0x140313b57    |
| 0x14035fe70 | memcmp        | 0x140313b50    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x140313b10 | 0x140313b2c | 0x140313b2c,0x140313b62 |
| 0x140313b2c | 0x140313b30 | 0x140313b30             |
| 0x140313b30 | 0x140313b37 | 0x140313b37,0x140313b3c |
| 0x140313b37 | 0x140313b3c | 0x140313b3f             |
| 0x140313b3c | 0x140313b3f | 0x140313b3f             |
| 0x140313b3f | 0x140313b45 | 0x140313b45,0x140313b59 |
| 0x140313b45 | 0x140313b4a | 0x140313b4a,0x140313b62 |
| 0x140313b4a | 0x140313b59 | 0x140313b59,0x140313b62 |
| 0x140313b59 | 0x140313b62 | 0x140313b30,0x140313b62 |
| 0x140313b62 | 0x140313b78 |                         |

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

| id              | address     | sequence | opcode       | is_dead | block_membership | inputs                                                          | output          |
|-----------------|-------------|----------|--------------|---------|------------------|-----------------------------------------------------------------|-----------------|
| 0x140313b19#22  | 0x140313b19 | 22       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b19#317 | 0x140313b19 | 317      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b19#328 | 0x140313b19 | 328      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b1d#24  | 0x140313b1d | 24       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b1d#330 | 0x140313b1d | 330      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b20#26  | 0x140313b20 | 26       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b20#329 | 0x140313b20 | 329      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b23#29  | 0x140313b23 | 29       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b23#318 | 0x140313b23 | 318      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b27#36  | 0x140313b27 | 36       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b2a#41  | 0x140313b2a | 41       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b2a#315 | 0x140313b2a | 315      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b30#43  | 0x140313b30 | 43       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b30#319 | 0x140313b30 | 319      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b35#54  | 0x140313b35 | 54       | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b35#55  | 0x140313b35 | 55       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b35#327 | 0x140313b35 | 327      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b35#331 | 0x140313b35 | 331      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b37#56  | 0x140313b37 | 56       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b37#332 | 0x140313b37 | 332      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b3a#58  | 0x140313b3a | 58       | BRANCH       | true    | member           | [object Object]                                                 |                 |
| 0x140313b3a#326 | 0x140313b3a | 326      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b3f#60  | 0x140313b3f | 60       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b3f#66  | 0x140313b3f | 66       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b3f#243 | 0x140313b3f | 243      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b3f#320 | 0x140313b3f | 320      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b43#72  | 0x140313b43 | 72       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b45#77  | 0x140313b45 | 77       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b48#82  | 0x140313b48 | 82       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b50#87  | 0x140313b50 | 87       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x140313b55#92  | 0x140313b55 | 92       | INT_EQUAL    | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b57#97  | 0x140313b57 | 97       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b59#321 | 0x140313b59 | 321      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b62#229 | 0x140313b62 | 229      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b64#322 | 0x140313b64 | 322      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x140313b68#136 | 0x140313b68 | 136      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b6b#144 | 0x140313b6b | 144      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x140313b6b#324 | 0x140313b6b | 324      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b6b#325 | 0x140313b6b | 325      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x140313b6f#234 | 0x140313b6f | 234      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x140313b77#173 | 0x140313b77 | 173      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x140313b19#317 | 0x140313b19#22  | 1           |
| 0x140313b19#22  | 0x140313b19#328 | 0           |
| 0x140313b1d#24  | 0x140313b1d#330 | 0           |
| 0x140313b20#26  | 0x140313b20#329 | 0           |
| 0x140313b23#318 | 0x140313b23#29  | 1           |
| 0x140313b2a#315 | 0x140313b27#36  | 0           |
| 0x140313b19#328 | 0x140313b27#36  | 1           |
| 0x140313b27#36  | 0x140313b2a#41  | 1           |
| 0x140313b1d#330 | 0x140313b2a#315 | 0           |
| 0x140313b59#321 | 0x140313b2a#315 | 1           |
| 0x140313b30#319 | 0x140313b30#43  | 1           |
| 0x140313b2a#315 | 0x140313b30#319 | 0           |
| 0x140313b35#331 | 0x140313b35#54  | 1           |
| 0x140313b35#54  | 0x140313b35#55  | 1           |
| 0x140313b2a#315 | 0x140313b35#327 | 0           |
| 0x140313b30#43  | 0x140313b35#331 | 0           |
| 0x140313b2a#315 | 0x140313b37#56  | 1           |
| 0x140313b37#56  | 0x140313b37#332 | 0           |
| 0x140313b37#332 | 0x140313b3a#326 | 0           |
| 0x140313b3f#320 | 0x140313b3f#60  | 1           |
| 0x140313b23#29  | 0x140313b3f#66  | 0           |
| 0x140313b3f#60  | 0x140313b3f#66  | 1           |
| 0x140313b3a#326 | 0x140313b3f#243 | 0           |
| 0x140313b35#327 | 0x140313b3f#243 | 1           |
| 0x140313b2a#315 | 0x140313b3f#320 | 0           |
| 0x140313b3f#66  | 0x140313b43#72  | 1           |
| 0x140313b23#29  | 0x140313b45#77  | 0           |
| 0x140313b45#77  | 0x140313b48#82  | 1           |
| 0x140313b20#329 | 0x140313b50#87  | 1           |
| 0x140313b3f#243 | 0x140313b50#87  | 2           |
| 0x140313b23#29  | 0x140313b50#87  | 3           |
| 0x140313b50#87  | 0x140313b55#92  | 0           |
| 0x140313b55#92  | 0x140313b57#97  | 1           |
| 0x140313b2a#315 | 0x140313b59#321 | 0           |
| 0x140313b2a#315 | 0x140313b64#322 | 0           |
| 0x140313b2a#315 | 0x140313b68#136 | 0           |
| 0x140313b19#328 | 0x140313b68#136 | 1           |
| 0x140313b68#136 | 0x140313b6b#144 | 1           |
| 0x140313b62#229 | 0x140313b6b#324 | 0           |
| 0x140313b64#322 | 0x140313b6b#325 | 0           |
| 0x140313b6b#324 | 0x140313b6f#234 | 0           |
| 0x140313b6b#325 | 0x140313b6f#234 | 1           |
| 0x140313b6f#234 | 0x140313b77#173 | 1           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x140313b19#22  | memory_read        | 1             |             |
| 0x140313b1d#24  | memory_read        | 1             |             |
| 0x140313b20#26  | memory_read        | 1             |             |
| 0x140313b23#29  | memory_read        | 1             |             |
| 0x140313b2a#41  | conditional_branch |               | 1           |
| 0x140313b30#43  | memory_read        | 1             |             |
| 0x140313b35#55  | conditional_branch |               | 1           |
| 0x140313b37#56  | memory_read        | 1             |             |
| 0x140313b3f#60  | memory_read        | 1             |             |
| 0x140313b43#72  | conditional_branch |               | 1           |
| 0x140313b48#82  | conditional_branch |               | 1           |
| 0x140313b50#87  | direct_call        | 0             |             |
| 0x140313b57#97  | conditional_branch |               | 1           |
| 0x140313b6b#144 | conditional_branch |               | 1           |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type     |
|---------|---------|---------------|
| 0       | param_1 | /undefined8 * |
| 1       | param_2 | /undefined8 * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x140313b19#317 | 0           |
| 0       | 0x140313b1d#24  | 1           |
| 1       | 0x140313b20#26  | 1           |
| 1       | 0x140313b23#318 | 0           |
| 0       | 0x140313b27#36  | 0           |
| 0       | 0x140313b2a#315 | 0           |
| 0       | 0x140313b2a#315 | 1           |
| 0       | 0x140313b30#319 | 0           |
| 0       | 0x140313b35#327 | 0           |
| 0       | 0x140313b37#56  | 1           |
| 0       | 0x140313b3f#320 | 0           |
| 0       | 0x140313b59#321 | 0           |
| 0       | 0x140313b64#322 | 0           |
| 0       | 0x140313b68#136 | 0           |

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

