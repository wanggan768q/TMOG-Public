## evidence_id

ev_029df0ba69b7b4de84d66470d50b23399862db1f0673711ceeac4c40a7476afb

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
| procedure | 0x14030c740 |

## raw_result.value.procedure.address

0x14030c740

## raw_result.value.procedure.name

FUN_14030c740

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
| 0x14030c740 | 0x14030c82d |

## raw_result.value.procedure.body.total_bytes

238

## raw_result.value.procedure.body.span_bytes

238

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_14030c740()

## raw_result.value.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_30 @ Stack[-0x30]:8 | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8 | ghidra-function-database |
| undefined8 local_48 @ Stack[-0x48]:8 | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8 | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8 | ghidra-function-database |

## raw_result.value.pseudocode


longlong FUN_14030c740(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  if ((*param_2 != param_2[1]) && ((ulonglong)(param_2[1] - *param_2) < 0x10001)) {
    plVar3 = (longlong *)*param_3;
    plVar1 = plVar3 + param_3[1] * 3;
    if (param_3[1] * 0x18 != 0) {
      do {
        local_58 = *plVar3;
        local_48 = *param_2;
        local_38 = param_2[3];
        local_50 = plVar3[1] - local_58;
        local_40 = param_2[1] - local_48;
        local_30 = param_2[4] - local_38;
        cVar2 = FUN_14031b820(&local_38,&local_48,&local_58);
        if (cVar2 != '\0') {
          local_38 = *param_2;
          local_30 = param_2[1] - local_38;
          FUN_1403092f0(param_1,&local_38);
          return param_1;
        }
        plVar3 = plVar3 + 3;
      } while (plVar3 != plVar1);
    }
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  return param_1;
}



## raw_result.value.assembly

0x14030c740: PUSH RBX,0x14030c742: PUSH RBP,0x14030c743: PUSH RSI,0x14030c744: PUSH RDI,0x14030c745: SUB RSP, 0x68,0x14030c749: MOV RAX, qword ptr [RDX + 0x8],0x14030c74d: MOV RSI, RCX,0x14030c750: MOV RCX, qword ptr [RDX],0x14030c753: MOV RDI, RDX,0x14030c756: CMP RCX, RAX,0x14030c759: JZ 0x14030c7ee,0x14030c75f: SUB RAX, RCX,0x14030c762: CMP RAX, 0x10000,0x14030c768: JA 0x14030c7ee,0x14030c76e: MOV RAX, qword ptr [R8 + 0x8],0x14030c772: MOV RBX, qword ptr [R8],0x14030c775: LEA RCX, [RAX + RAX*0x2],0x14030c779: LEA RCX, [RCX*0x8],0x14030c781: LEA RBP, [RCX + RBX*0x1],0x14030c785: TEST RCX, RCX,0x14030c788: JZ 0x14030c7ee,0x14030c78a: NOP word ptr [RAX + RAX*0x1],0x14030c790: MOV RCX, qword ptr [RBX],0x14030c793: MOV RDX, qword ptr [RDI],0x14030c796: MOV R8, qword ptr [RDI + 0x18],0x14030c79a: MOV RAX, qword ptr [RBX + 0x8],0x14030c79e: SUB RAX, RCX,0x14030c7a1: MOV qword ptr [RSP + 0x30], RCX,0x14030c7a6: MOV qword ptr [RSP + 0x38], RAX,0x14030c7ab: LEA RCX, [RSP + 0x50],0x14030c7b0: MOV RAX, qword ptr [RDI + 0x8],0x14030c7b4: SUB RAX, RDX,0x14030c7b7: MOV qword ptr [RSP + 0x40], RDX,0x14030c7bc: MOV qword ptr [RSP + 0x48], RAX,0x14030c7c1: LEA RDX, [RSP + 0x40],0x14030c7c6: MOV RAX, qword ptr [RDI + 0x20],0x14030c7ca: SUB RAX, R8,0x14030c7cd: MOV qword ptr [RSP + 0x50], R8,0x14030c7d2: LEA R8, [RSP + 0x30],0x14030c7d7: MOV qword ptr [RSP + 0x58], RAX,0x14030c7dc: CALL 0x14031b820,0x14030c7e1: TEST AL, AL,0x14030c7e3: JNZ 0x14030c801,0x14030c7e5: ADD RBX, 0x18,0x14030c7e9: CMP RBX, RBP,0x14030c7ec: JNZ 0x14030c790,0x14030c7ee: MOV byte ptr [RSI + 0xb8], 0x0,0x14030c7f5: MOV RAX, RSI,0x14030c7f8: ADD RSP, 0x68,0x14030c7fc: POP RDI,0x14030c7fd: POP RSI,0x14030c7fe: POP RBP,0x14030c7ff: POP RBX,0x14030c800: RET,0x14030c801: MOV RCX, qword ptr [RDI],0x14030c804: LEA RDX, [RSP + 0x50],0x14030c809: MOV RAX, qword ptr [RDI + 0x8],0x14030c80d: SUB RAX, RCX,0x14030c810: MOV qword ptr [RSP + 0x50], RCX,0x14030c815: MOV RCX, RSI,0x14030c818: MOV qword ptr [RSP + 0x58], RAX,0x14030c81d: CALL 0x1403092f0,0x14030c822: MOV RAX, RSI,0x14030c825: ADD RSP, 0x68,0x14030c829: POP RDI,0x14030c82a: POP RSI,0x14030c82b: POP RBP,0x14030c82c: POP RBX,0x14030c82d: RET

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |
| 0x1401f6280 | FUN_1401f6280 | [object Object] | [object Object] |

## raw_result.value.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1403092f0 | FUN_1403092f0 | [object Object] | [object Object] |
| 0x14031b820 | FUN_14031b820 | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f2b76    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3113    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3383    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4038    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f657f    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f66db    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6850    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6e6c    | 0x14030c740    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14030c759    | 0x14030c7ee              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c768    | 0x14030c7ee              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c788    | 0x14030c7ee              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c7a1    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x14030c7a6    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x14030c7ab    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030c7b7    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030c7bc    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x14030c7c1    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030c7cd    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030c7d2    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x14030c7d7    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x14030c7dc    | 0x14031b820              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c7e3    | 0x14030c801              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c7ec    | 0x14030c790              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c804    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030c810    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030c818    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x14030c81d    | 0x1403092f0              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings



## raw_result.value.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x1403092f0 | FUN_1403092f0 | 0x14030c81d    |
| 0x14030c790 | LAB_14030c790 | 0x14030c7ec    |
| 0x14030c7ee | LAB_14030c7ee | 0x14030c759    |
| 0x14030c7ee | LAB_14030c7ee | 0x14030c768    |
| 0x14030c7ee | LAB_14030c7ee | 0x14030c788    |
| 0x14030c801 | LAB_14030c801 | 0x14030c7e3    |
| 0x14031b820 | FUN_14031b820 | 0x14030c7dc    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14030c740 | 0x14030c75f | 0x14030c75f,0x14030c7ee |
| 0x14030c75f | 0x14030c76e | 0x14030c76e,0x14030c7ee |
| 0x14030c76e | 0x14030c78a | 0x14030c78a,0x14030c7ee |
| 0x14030c78a | 0x14030c790 | 0x14030c790             |
| 0x14030c790 | 0x14030c7e5 | 0x14030c7e5,0x14030c801 |
| 0x14030c7e5 | 0x14030c7ee | 0x14030c790,0x14030c7ee |
| 0x14030c7ee | 0x14030c801 |                         |
| 0x14030c801 | 0x14030c82e |                         |

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

longlong

## raw_result.value.native_api.return_type.size_bytes

8

## raw_result.value.native_api.return_type.storage

RAX:8

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.evidence

| kind             | source                  | detail                                     |
|------------------|-------------------------|--------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.      |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type longlong. |

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.parameters

| role      | ordinal | name    | data_type  | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      |
|-----------|---------|---------|------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|
| parameter | 0       | param_1 | longlong   | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 1       | param_2 | longlong * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |
| parameter | 2       | param_3 | longlong * | 8          | R8:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable |

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
| 0x14030c749#22  | 0x14030c749 | 22       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c749#426 | 0x14030c749 | 426      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c750#25  | 0x14030c750 | 25       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c756#33  | 0x14030c756 | 33       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c759#38  | 0x14030c759 | 38       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c75f#41  | 0x14030c75f | 41       | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c768#57  | 0x14030c768 | 57       | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c768#59  | 0x14030c768 | 59       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c768#440 | 0x14030c768 | 440      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030c76e#61  | 0x14030c76e | 61       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c76e#427 | 0x14030c76e | 427      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c772#63  | 0x14030c772 | 63       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c772#441 | 0x14030c772 | 441      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030c779#68  | 0x14030c779 | 68       | INT_MULT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c781#428 | 0x14030c781 | 428      | INT_MULT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c781#429 | 0x14030c781 | 429      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c785#77  | 0x14030c785 | 77       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c788#82  | 0x14030c788 | 82       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c790#85  | 0x14030c790 | 85       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c790#330 | 0x14030c790 | 330      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c793#87  | 0x14030c793 | 87       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c796#90  | 0x14030c796 | 90       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c796#430 | 0x14030c796 | 430      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c79a#93  | 0x14030c79a | 93       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c79a#431 | 0x14030c79a | 431      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c79e#97  | 0x14030c79e | 97       | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7ab#432 | 0x14030c7ab | 432      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7b0#113 | 0x14030c7b0 | 113      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7b0#433 | 0x14030c7b0 | 433      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c7b4#117 | 0x14030c7b4 | 117      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7c1#434 | 0x14030c7c1 | 434      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7c6#133 | 0x14030c7c6 | 133      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7c6#435 | 0x14030c7c6 | 435      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c7ca#137 | 0x14030c7ca | 137      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7d2#436 | 0x14030c7d2 | 436      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#154 | 0x14030c7dc | 154      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x14030c7dc#383 | 0x14030c7dc | 383      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#387 | 0x14030c7dc | 387      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#391 | 0x14030c7dc | 391      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#395 | 0x14030c7dc | 395      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#399 | 0x14030c7dc | 399      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#403 | 0x14030c7dc | 403      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7e1#159 | 0x14030c7e1 | 159      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7e3#165 | 0x14030c7e3 | 165      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c7e5#437 | 0x14030c7e5 | 437      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c7e9#180 | 0x14030c7e9 | 180      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7ec#186 | 0x14030c7ec | 186      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c7ee#187 | 0x14030c7ee | 187      | INT_ADD      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7ee#189 | 0x14030c7ee | 189      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030c7ee#442 | 0x14030c7ee | 442      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030c7f5#190 | 0x14030c7f5 | 190      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030c800#218 | 0x14030c800 | 218      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c801#219 | 0x14030c801 | 219      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c804#438 | 0x14030c804 | 438      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c809#224 | 0x14030c809 | 224      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c809#439 | 0x14030c809 | 439      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c80d#228 | 0x14030c80d | 228      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#244 | 0x14030c81d | 244      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030c81d#384 | 0x14030c81d | 384      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#388 | 0x14030c81d | 388      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#392 | 0x14030c81d | 392      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#396 | 0x14030c81d | 396      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#400 | 0x14030c81d | 400      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#404 | 0x14030c81d | 404      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c822#245 | 0x14030c822 | 245      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030c82d#273 | 0x14030c82d | 273      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |

## raw_result.value.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x14030c749#426 | 0x14030c749#22  | 1           |
| 0x14030c750#25  | 0x14030c756#33  | 0           |
| 0x14030c749#22  | 0x14030c756#33  | 1           |
| 0x14030c756#33  | 0x14030c759#38  | 1           |
| 0x14030c749#22  | 0x14030c75f#41  | 0           |
| 0x14030c750#25  | 0x14030c75f#41  | 1           |
| 0x14030c768#440 | 0x14030c768#57  | 0           |
| 0x14030c768#57  | 0x14030c768#59  | 1           |
| 0x14030c75f#41  | 0x14030c768#440 | 0           |
| 0x14030c76e#427 | 0x14030c76e#61  | 1           |
| 0x14030c772#63  | 0x14030c772#441 | 0           |
| 0x14030c76e#61  | 0x14030c779#68  | 0           |
| 0x14030c76e#61  | 0x14030c781#428 | 0           |
| 0x14030c772#441 | 0x14030c781#429 | 0           |
| 0x14030c781#428 | 0x14030c781#429 | 1           |
| 0x14030c779#68  | 0x14030c785#77  | 0           |
| 0x14030c785#77  | 0x14030c788#82  | 1           |
| 0x14030c790#330 | 0x14030c790#85  | 1           |
| 0x14030c7e5#437 | 0x14030c790#330 | 0           |
| 0x14030c772#441 | 0x14030c790#330 | 1           |
| 0x14030c796#430 | 0x14030c796#90  | 1           |
| 0x14030c79a#431 | 0x14030c79a#93  | 1           |
| 0x14030c790#330 | 0x14030c79a#431 | 0           |
| 0x14030c79a#93  | 0x14030c79e#97  | 0           |
| 0x14030c790#85  | 0x14030c79e#97  | 1           |
| 0x14030c7b0#433 | 0x14030c7b0#113 | 1           |
| 0x14030c7b0#113 | 0x14030c7b4#117 | 0           |
| 0x14030c793#87  | 0x14030c7b4#117 | 1           |
| 0x14030c7c6#435 | 0x14030c7c6#133 | 1           |
| 0x14030c7c6#133 | 0x14030c7ca#137 | 0           |
| 0x14030c796#90  | 0x14030c7ca#137 | 1           |
| 0x14030c7ab#432 | 0x14030c7dc#154 | 1           |
| 0x14030c7c1#434 | 0x14030c7dc#154 | 2           |
| 0x14030c7d2#436 | 0x14030c7dc#154 | 3           |
| 0x14030c790#85  | 0x14030c7dc#383 | 0           |
| 0x14030c79e#97  | 0x14030c7dc#387 | 0           |
| 0x14030c793#87  | 0x14030c7dc#391 | 0           |
| 0x14030c7b4#117 | 0x14030c7dc#395 | 0           |
| 0x14030c796#90  | 0x14030c7dc#399 | 0           |
| 0x14030c7ca#137 | 0x14030c7dc#403 | 0           |
| 0x14030c7dc#154 | 0x14030c7e1#159 | 0           |
| 0x14030c7e1#159 | 0x14030c7e3#165 | 1           |
| 0x14030c790#330 | 0x14030c7e5#437 | 0           |
| 0x14030c7e5#437 | 0x14030c7e9#180 | 0           |
| 0x14030c781#429 | 0x14030c7e9#180 | 1           |
| 0x14030c7e9#180 | 0x14030c7ec#186 | 1           |
| 0x14030c7ee#442 | 0x14030c7ee#189 | 1           |
| 0x14030c7ee#187 | 0x14030c7ee#442 | 0           |
| 0x14030c7f5#190 | 0x14030c800#218 | 1           |
| 0x14030c809#439 | 0x14030c809#224 | 1           |
| 0x14030c809#224 | 0x14030c80d#228 | 0           |
| 0x14030c801#219 | 0x14030c80d#228 | 1           |
| 0x14030c804#438 | 0x14030c81d#244 | 2           |
| 0x14030c7dc#383 | 0x14030c81d#384 | 0           |
| 0x14030c7dc#387 | 0x14030c81d#388 | 0           |
| 0x14030c7dc#391 | 0x14030c81d#392 | 0           |
| 0x14030c7dc#395 | 0x14030c81d#396 | 0           |
| 0x14030c801#219 | 0x14030c81d#400 | 0           |
| 0x14030c80d#228 | 0x14030c81d#404 | 0           |
| 0x14030c822#245 | 0x14030c82d#273 | 1           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /longlong   |
| 1       | param_2 | /longlong * |
| 2       | param_3 | /longlong * |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 1       | 0x14030c749#426 | 0           |
| 1       | 0x14030c750#25  | 1           |
| 2       | 0x14030c76e#427 | 0           |
| 2       | 0x14030c772#63  | 1           |
| 1       | 0x14030c793#87  | 1           |
| 1       | 0x14030c796#430 | 0           |
| 1       | 0x14030c7b0#433 | 0           |
| 1       | 0x14030c7c6#435 | 0           |
| 0       | 0x14030c7ee#187 | 0           |
| 0       | 0x14030c7f5#190 | 0           |
| 1       | 0x14030c801#219 | 1           |
| 1       | 0x14030c809#439 | 0           |
| 0       | 0x14030c81d#244 | 1           |
| 0       | 0x14030c822#245 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x14030c749#22  | memory_read        | 1             |             |
| 0x14030c750#25  | memory_read        | 1             |             |
| 0x14030c759#38  | conditional_branch |               | 1           |
| 0x14030c768#59  | conditional_branch |               | 1           |
| 0x14030c76e#61  | memory_read        | 1             |             |
| 0x14030c772#63  | memory_read        | 1             |             |
| 0x14030c788#82  | conditional_branch |               | 1           |
| 0x14030c790#85  | memory_read        | 1             |             |
| 0x14030c793#87  | memory_read        | 1             |             |
| 0x14030c796#90  | memory_read        | 1             |             |
| 0x14030c79a#93  | memory_read        | 1             |             |
| 0x14030c7b0#113 | memory_read        | 1             |             |
| 0x14030c7c6#133 | memory_read        | 1             |             |
| 0x14030c7dc#154 | direct_call        | 0             |             |
| 0x14030c7e3#165 | conditional_branch |               | 1           |
| 0x14030c7ec#186 | conditional_branch |               | 1           |
| 0x14030c7ee#189 | memory_write       | 1             | 2           |
| 0x14030c801#219 | memory_read        | 1             |             |
| 0x14030c809#224 | memory_read        | 1             |             |
| 0x14030c81d#244 | direct_call        | 0             |             |

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

0x14030c740

## normalized_result.procedure.name

FUN_14030c740

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
| 0x14030c740 | 0x14030c82d |

## normalized_result.procedure.body.total_bytes

238

## normalized_result.procedure.body.span_bytes

238

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_14030c740()

## normalized_result.procedure.locals

| description                          | provenance               |
|--------------------------------------|--------------------------|
| undefined8 local_30 @ Stack[-0x30]:8 | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8 | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8 | ghidra-function-database |
| undefined8 local_48 @ Stack[-0x48]:8 | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8 | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8 | ghidra-function-database |

## normalized_result.pseudocode


longlong FUN_14030c740(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  if ((*param_2 != param_2[1]) && ((ulonglong)(param_2[1] - *param_2) < 0x10001)) {
    plVar3 = (longlong *)*param_3;
    plVar1 = plVar3 + param_3[1] * 3;
    if (param_3[1] * 0x18 != 0) {
      do {
        local_58 = *plVar3;
        local_48 = *param_2;
        local_38 = param_2[3];
        local_50 = plVar3[1] - local_58;
        local_40 = param_2[1] - local_48;
        local_30 = param_2[4] - local_38;
        cVar2 = FUN_14031b820(&local_38,&local_48,&local_58);
        if (cVar2 != '\0') {
          local_38 = *param_2;
          local_30 = param_2[1] - local_38;
          FUN_1403092f0(param_1,&local_38);
          return param_1;
        }
        plVar3 = plVar3 + 3;
      } while (plVar3 != plVar1);
    }
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  return param_1;
}



## normalized_result.assembly

0x14030c740: PUSH RBX,0x14030c742: PUSH RBP,0x14030c743: PUSH RSI,0x14030c744: PUSH RDI,0x14030c745: SUB RSP, 0x68,0x14030c749: MOV RAX, qword ptr [RDX + 0x8],0x14030c74d: MOV RSI, RCX,0x14030c750: MOV RCX, qword ptr [RDX],0x14030c753: MOV RDI, RDX,0x14030c756: CMP RCX, RAX,0x14030c759: JZ 0x14030c7ee,0x14030c75f: SUB RAX, RCX,0x14030c762: CMP RAX, 0x10000,0x14030c768: JA 0x14030c7ee,0x14030c76e: MOV RAX, qword ptr [R8 + 0x8],0x14030c772: MOV RBX, qword ptr [R8],0x14030c775: LEA RCX, [RAX + RAX*0x2],0x14030c779: LEA RCX, [RCX*0x8],0x14030c781: LEA RBP, [RCX + RBX*0x1],0x14030c785: TEST RCX, RCX,0x14030c788: JZ 0x14030c7ee,0x14030c78a: NOP word ptr [RAX + RAX*0x1],0x14030c790: MOV RCX, qword ptr [RBX],0x14030c793: MOV RDX, qword ptr [RDI],0x14030c796: MOV R8, qword ptr [RDI + 0x18],0x14030c79a: MOV RAX, qword ptr [RBX + 0x8],0x14030c79e: SUB RAX, RCX,0x14030c7a1: MOV qword ptr [RSP + 0x30], RCX,0x14030c7a6: MOV qword ptr [RSP + 0x38], RAX,0x14030c7ab: LEA RCX, [RSP + 0x50],0x14030c7b0: MOV RAX, qword ptr [RDI + 0x8],0x14030c7b4: SUB RAX, RDX,0x14030c7b7: MOV qword ptr [RSP + 0x40], RDX,0x14030c7bc: MOV qword ptr [RSP + 0x48], RAX,0x14030c7c1: LEA RDX, [RSP + 0x40],0x14030c7c6: MOV RAX, qword ptr [RDI + 0x20],0x14030c7ca: SUB RAX, R8,0x14030c7cd: MOV qword ptr [RSP + 0x50], R8,0x14030c7d2: LEA R8, [RSP + 0x30],0x14030c7d7: MOV qword ptr [RSP + 0x58], RAX,0x14030c7dc: CALL 0x14031b820,0x14030c7e1: TEST AL, AL,0x14030c7e3: JNZ 0x14030c801,0x14030c7e5: ADD RBX, 0x18,0x14030c7e9: CMP RBX, RBP,0x14030c7ec: JNZ 0x14030c790,0x14030c7ee: MOV byte ptr [RSI + 0xb8], 0x0,0x14030c7f5: MOV RAX, RSI,0x14030c7f8: ADD RSP, 0x68,0x14030c7fc: POP RDI,0x14030c7fd: POP RSI,0x14030c7fe: POP RBP,0x14030c7ff: POP RBX,0x14030c800: RET,0x14030c801: MOV RCX, qword ptr [RDI],0x14030c804: LEA RDX, [RSP + 0x50],0x14030c809: MOV RAX, qword ptr [RDI + 0x8],0x14030c80d: SUB RAX, RCX,0x14030c810: MOV qword ptr [RSP + 0x50], RCX,0x14030c815: MOV RCX, RSI,0x14030c818: MOV qword ptr [RSP + 0x58], RAX,0x14030c81d: CALL 0x1403092f0,0x14030c822: MOV RAX, RSI,0x14030c825: ADD RSP, 0x68,0x14030c829: POP RDI,0x14030c82a: POP RSI,0x14030c82b: POP RBP,0x14030c82c: POP RBX,0x14030c82d: RET

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1401f2880 | FUN_1401f2880 | [object Object] | [object Object] |
| 0x1401f3e90 | FUN_1401f3e90 | [object Object] | [object Object] |
| 0x1401f6280 | FUN_1401f6280 | [object Object] | [object Object] |

## normalized_result.callees

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x1403092f0 | FUN_1403092f0 | [object Object] | [object Object] |
| 0x14031b820 | FUN_14031b820 | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x1401f2b76    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3113    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f3383    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f4038    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f657f    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f66db    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1401f6850    | 0x14030c740    | [object Object]  | [object Object]  | [object Object] |
| 0x1404e6e6c    | 0x14030c740    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x14030c759    | 0x14030c7ee              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c768    | 0x14030c7ee              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c788    | 0x14030c7ee              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c7a1    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x14030c7a6    | stack:0xffffffffffffffb0 | [object Object]  |                  | [object Object] |
| 0x14030c7ab    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030c7b7    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030c7bc    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x14030c7c1    | stack:0xffffffffffffffb8 | [object Object]  |                  | [object Object] |
| 0x14030c7cd    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030c7d2    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x14030c7d7    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x14030c7dc    | 0x14031b820              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c7e3    | 0x14030c801              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c7ec    | 0x14030c790              | [object Object]  | [object Object]  | [object Object] |
| 0x14030c804    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030c810    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x14030c818    | stack:0xffffffffffffffd0 | [object Object]  |                  | [object Object] |
| 0x14030c81d    | 0x1403092f0              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings



## normalized_result.referenced_names

| address     | value         | source_address |
|-------------|---------------|----------------|
| 0x1403092f0 | FUN_1403092f0 | 0x14030c81d    |
| 0x14030c790 | LAB_14030c790 | 0x14030c7ec    |
| 0x14030c7ee | LAB_14030c7ee | 0x14030c759    |
| 0x14030c7ee | LAB_14030c7ee | 0x14030c768    |
| 0x14030c7ee | LAB_14030c7ee | 0x14030c788    |
| 0x14030c801 | LAB_14030c801 | 0x14030c7e3    |
| 0x14031b820 | FUN_14031b820 | 0x14030c7dc    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x14030c740 | 0x14030c75f | 0x14030c75f,0x14030c7ee |
| 0x14030c75f | 0x14030c76e | 0x14030c76e,0x14030c7ee |
| 0x14030c76e | 0x14030c78a | 0x14030c78a,0x14030c7ee |
| 0x14030c78a | 0x14030c790 | 0x14030c790             |
| 0x14030c790 | 0x14030c7e5 | 0x14030c7e5,0x14030c801 |
| 0x14030c7e5 | 0x14030c7ee | 0x14030c790,0x14030c7ee |
| 0x14030c7ee | 0x14030c801 |                         |
| 0x14030c801 | 0x14030c82e |                         |

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

longlong

## normalized_result.native_api.return_type.size_bytes

8

## normalized_result.native_api.return_type.storage

RAX:8

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.evidence

| kind             | source                  | detail                                     |
|------------------|-------------------------|--------------------------------------------|
| signature-source | ghidra-function-manager | Function signature source is default.      |
| decompiler-type  | ghidra-high-function    | HighFunction recovered data type longlong. |

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.parameters

| ordinal | name    | data_type  | size_bytes | storage | confidence | evidence                        | decompiler_artifacts                                                      | role      |
|---------|---------|------------|------------|---------|------------|---------------------------------|---------------------------------------------------------------------------|-----------|
| 0       | param_1 | longlong   | 8          | RCX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 1       | param_2 | longlong * | 8          | RDX:8   | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |
| 2       | param_3 | longlong * | 8          | R8:8    | low        | [object Object],[object Object] | recovered-signature,register-or-stack-storage,compiler-generated-variable | parameter |

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
| 0x14030c749#22  | 0x14030c749 | 22       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c749#426 | 0x14030c749 | 426      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c750#25  | 0x14030c750 | 25       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c756#33  | 0x14030c756 | 33       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c759#38  | 0x14030c759 | 38       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c75f#41  | 0x14030c75f | 41       | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c768#57  | 0x14030c768 | 57       | INT_LESS     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c768#59  | 0x14030c768 | 59       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c768#440 | 0x14030c768 | 440      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030c76e#61  | 0x14030c76e | 61       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c76e#427 | 0x14030c76e | 427      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c772#63  | 0x14030c772 | 63       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c772#441 | 0x14030c772 | 441      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030c779#68  | 0x14030c779 | 68       | INT_MULT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c781#428 | 0x14030c781 | 428      | INT_MULT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c781#429 | 0x14030c781 | 429      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c785#77  | 0x14030c785 | 77       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c788#82  | 0x14030c788 | 82       | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c790#85  | 0x14030c790 | 85       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c790#330 | 0x14030c790 | 330      | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c793#87  | 0x14030c793 | 87       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c796#90  | 0x14030c796 | 90       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c796#430 | 0x14030c796 | 430      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c79a#93  | 0x14030c79a | 93       | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c79a#431 | 0x14030c79a | 431      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c79e#97  | 0x14030c79e | 97       | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7ab#432 | 0x14030c7ab | 432      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7b0#113 | 0x14030c7b0 | 113      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7b0#433 | 0x14030c7b0 | 433      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c7b4#117 | 0x14030c7b4 | 117      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7c1#434 | 0x14030c7c1 | 434      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7c6#133 | 0x14030c7c6 | 133      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7c6#435 | 0x14030c7c6 | 435      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c7ca#137 | 0x14030c7ca | 137      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7d2#436 | 0x14030c7d2 | 436      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#154 | 0x14030c7dc | 154      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object] | [object Object] |
| 0x14030c7dc#383 | 0x14030c7dc | 383      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#387 | 0x14030c7dc | 387      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#391 | 0x14030c7dc | 391      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#395 | 0x14030c7dc | 395      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#399 | 0x14030c7dc | 399      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7dc#403 | 0x14030c7dc | 403      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7e1#159 | 0x14030c7e1 | 159      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7e3#165 | 0x14030c7e3 | 165      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c7e5#437 | 0x14030c7e5 | 437      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c7e9#180 | 0x14030c7e9 | 180      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7ec#186 | 0x14030c7ec | 186      | CBRANCH      | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c7ee#187 | 0x14030c7ee | 187      | INT_ADD      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c7ee#189 | 0x14030c7ee | 189      | STORE        | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030c7ee#442 | 0x14030c7ee | 442      | CAST         | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030c7f5#190 | 0x14030c7f5 | 190      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030c800#218 | 0x14030c800 | 218      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |
| 0x14030c801#219 | 0x14030c801 | 219      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c804#438 | 0x14030c804 | 438      | PTRSUB       | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c809#224 | 0x14030c809 | 224      | LOAD         | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c809#439 | 0x14030c809 | 439      | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                 | [object Object] |
| 0x14030c80d#228 | 0x14030c80d | 228      | INT_SUB      | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#244 | 0x14030c81d | 244      | CALL         | true    | member           | [object Object],[object Object],[object Object]                 |                 |
| 0x14030c81d#384 | 0x14030c81d | 384      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#388 | 0x14030c81d | 388      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#392 | 0x14030c81d | 392      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#396 | 0x14030c81d | 396      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#400 | 0x14030c81d | 400      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c81d#404 | 0x14030c81d | 404      | INDIRECT     | true    | member           | [object Object],[object Object]                                 | [object Object] |
| 0x14030c822#245 | 0x14030c822 | 245      | COPY         | true    | member           | [object Object]                                                 | [object Object] |
| 0x14030c82d#273 | 0x14030c82d | 273      | RETURN       | true    | member           | [object Object],[object Object]                                 |                 |

## normalized_result.native_value_flow.def_use

| definition      | use             | input_index |
|-----------------|-----------------|-------------|
| 0x14030c749#426 | 0x14030c749#22  | 1           |
| 0x14030c750#25  | 0x14030c756#33  | 0           |
| 0x14030c749#22  | 0x14030c756#33  | 1           |
| 0x14030c756#33  | 0x14030c759#38  | 1           |
| 0x14030c749#22  | 0x14030c75f#41  | 0           |
| 0x14030c750#25  | 0x14030c75f#41  | 1           |
| 0x14030c768#440 | 0x14030c768#57  | 0           |
| 0x14030c768#57  | 0x14030c768#59  | 1           |
| 0x14030c75f#41  | 0x14030c768#440 | 0           |
| 0x14030c76e#427 | 0x14030c76e#61  | 1           |
| 0x14030c772#63  | 0x14030c772#441 | 0           |
| 0x14030c76e#61  | 0x14030c779#68  | 0           |
| 0x14030c76e#61  | 0x14030c781#428 | 0           |
| 0x14030c772#441 | 0x14030c781#429 | 0           |
| 0x14030c781#428 | 0x14030c781#429 | 1           |
| 0x14030c779#68  | 0x14030c785#77  | 0           |
| 0x14030c785#77  | 0x14030c788#82  | 1           |
| 0x14030c790#330 | 0x14030c790#85  | 1           |
| 0x14030c7e5#437 | 0x14030c790#330 | 0           |
| 0x14030c772#441 | 0x14030c790#330 | 1           |
| 0x14030c796#430 | 0x14030c796#90  | 1           |
| 0x14030c79a#431 | 0x14030c79a#93  | 1           |
| 0x14030c790#330 | 0x14030c79a#431 | 0           |
| 0x14030c79a#93  | 0x14030c79e#97  | 0           |
| 0x14030c790#85  | 0x14030c79e#97  | 1           |
| 0x14030c7b0#433 | 0x14030c7b0#113 | 1           |
| 0x14030c7b0#113 | 0x14030c7b4#117 | 0           |
| 0x14030c793#87  | 0x14030c7b4#117 | 1           |
| 0x14030c7c6#435 | 0x14030c7c6#133 | 1           |
| 0x14030c7c6#133 | 0x14030c7ca#137 | 0           |
| 0x14030c796#90  | 0x14030c7ca#137 | 1           |
| 0x14030c7ab#432 | 0x14030c7dc#154 | 1           |
| 0x14030c7c1#434 | 0x14030c7dc#154 | 2           |
| 0x14030c7d2#436 | 0x14030c7dc#154 | 3           |
| 0x14030c790#85  | 0x14030c7dc#383 | 0           |
| 0x14030c79e#97  | 0x14030c7dc#387 | 0           |
| 0x14030c793#87  | 0x14030c7dc#391 | 0           |
| 0x14030c7b4#117 | 0x14030c7dc#395 | 0           |
| 0x14030c796#90  | 0x14030c7dc#399 | 0           |
| 0x14030c7ca#137 | 0x14030c7dc#403 | 0           |
| 0x14030c7dc#154 | 0x14030c7e1#159 | 0           |
| 0x14030c7e1#159 | 0x14030c7e3#165 | 1           |
| 0x14030c790#330 | 0x14030c7e5#437 | 0           |
| 0x14030c7e5#437 | 0x14030c7e9#180 | 0           |
| 0x14030c781#429 | 0x14030c7e9#180 | 1           |
| 0x14030c7e9#180 | 0x14030c7ec#186 | 1           |
| 0x14030c7ee#442 | 0x14030c7ee#189 | 1           |
| 0x14030c7ee#187 | 0x14030c7ee#442 | 0           |
| 0x14030c7f5#190 | 0x14030c800#218 | 1           |
| 0x14030c809#439 | 0x14030c809#224 | 1           |
| 0x14030c809#224 | 0x14030c80d#228 | 0           |
| 0x14030c801#219 | 0x14030c80d#228 | 1           |
| 0x14030c804#438 | 0x14030c81d#244 | 2           |
| 0x14030c7dc#383 | 0x14030c81d#384 | 0           |
| 0x14030c7dc#387 | 0x14030c81d#388 | 0           |
| 0x14030c7dc#391 | 0x14030c81d#392 | 0           |
| 0x14030c7dc#395 | 0x14030c81d#396 | 0           |
| 0x14030c801#219 | 0x14030c81d#400 | 0           |
| 0x14030c80d#228 | 0x14030c81d#404 | 0           |
| 0x14030c822#245 | 0x14030c82d#273 | 1           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x14030c749#22  | memory_read        | 1             |             |
| 0x14030c750#25  | memory_read        | 1             |             |
| 0x14030c759#38  | conditional_branch |               | 1           |
| 0x14030c768#59  | conditional_branch |               | 1           |
| 0x14030c76e#61  | memory_read        | 1             |             |
| 0x14030c772#63  | memory_read        | 1             |             |
| 0x14030c788#82  | conditional_branch |               | 1           |
| 0x14030c790#85  | memory_read        | 1             |             |
| 0x14030c793#87  | memory_read        | 1             |             |
| 0x14030c796#90  | memory_read        | 1             |             |
| 0x14030c79a#93  | memory_read        | 1             |             |
| 0x14030c7b0#113 | memory_read        | 1             |             |
| 0x14030c7c6#133 | memory_read        | 1             |             |
| 0x14030c7dc#154 | direct_call        | 0             |             |
| 0x14030c7e3#165 | conditional_branch |               | 1           |
| 0x14030c7ec#186 | conditional_branch |               | 1           |
| 0x14030c7ee#189 | memory_write       | 1             | 2           |
| 0x14030c801#219 | memory_read        | 1             |             |
| 0x14030c809#224 | memory_read        | 1             |             |
| 0x14030c81d#244 | direct_call        | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type   |
|---------|---------|-------------|
| 0       | param_1 | /longlong   |
| 1       | param_2 | /longlong * |
| 2       | param_3 | /longlong * |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 1       | 0x14030c749#426 | 0           |
| 1       | 0x14030c750#25  | 1           |
| 2       | 0x14030c76e#427 | 0           |
| 2       | 0x14030c772#63  | 1           |
| 1       | 0x14030c793#87  | 1           |
| 1       | 0x14030c796#430 | 0           |
| 1       | 0x14030c7b0#433 | 0           |
| 1       | 0x14030c7c6#435 | 0           |
| 0       | 0x14030c7ee#187 | 0           |
| 0       | 0x14030c7f5#190 | 0           |
| 1       | 0x14030c801#219 | 1           |
| 1       | 0x14030c809#439 | 0           |
| 0       | 0x14030c81d#244 | 1           |
| 0       | 0x14030c822#245 | 0           |

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

